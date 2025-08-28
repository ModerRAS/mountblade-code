#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_14_part016.c - 8 个函数

// 函数: void FUN_1808f7cc0(int64_t param_1)
void FUN_1808f7cc0(int64_t param_1)

{
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_1 + 4,0,0x90);
  }
  return;
}



int FUN_1808f7ec0(int *param_1,short param_2,short param_3,short param_4,float *param_5,
                 uint64_t param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar5 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  *(short *)((int64_t)param_1 + 0x92) = *(short *)((int64_t)param_1 + 0x92) + 1;
  iVar3 = (int)param_2;
  param_1[0x21] = param_1[0x21] + iVar3;
  iVar7 = (int)param_3;
  param_1[0x22] = param_1[0x22] + iVar7;
  iVar2 = (int)param_4;
  param_1[0x23] = param_1[0x23] + iVar2;
  if (*(short *)((int64_t)param_1 + 0x92) == 1) {
    param_1[0x1b] = iVar3;
    param_1[0x1c] = iVar7;
    param_1[0x1d] = iVar2;
    param_1[0x1e] = iVar3;
    param_1[0x1f] = iVar7;
    iVar4 = iVar3;
    iVar8 = iVar7;
    iVar9 = iVar2;
LAB_1808f7faa:
    param_1[0x20] = iVar2;
    iVar6 = iVar2;
  }
  else {
    iVar4 = param_1[0x1b];
    if (param_1[0x1b] < iVar3) {
      param_1[0x1b] = iVar3;
      iVar4 = iVar3;
    }
    iVar8 = param_1[0x1e];
    if (iVar3 < param_1[0x1e]) {
      param_1[0x1e] = iVar3;
      iVar8 = iVar3;
    }
    iVar3 = iVar8;
    iVar8 = param_1[0x1c];
    if (param_1[0x1c] < iVar7) {
      param_1[0x1c] = iVar7;
      iVar8 = iVar7;
    }
    iVar9 = param_1[0x1f];
    if (iVar7 < param_1[0x1f]) {
      param_1[0x1f] = iVar7;
      iVar9 = iVar7;
    }
    iVar7 = iVar9;
    iVar9 = param_1[0x1d];
    if (param_1[0x1d] < iVar2) {
      param_1[0x1d] = iVar2;
      iVar9 = iVar2;
    }
    iVar6 = param_1[0x20];
    if (iVar2 < iVar6) goto LAB_1808f7faa;
  }
  uVar1 = *(ushort *)(param_1 + 0x24);
  if (*(ushort *)((int64_t)param_1 + 0x92) != uVar1) {
    return 0;
  }
  iVar2 = param_1[0x13];
  param_1[0x13] = iVar2 + 1;
  fVar11 = (float)uVar1;
  fVar15 = (float)param_1[0x21] / fVar11;
  fVar16 = (float)param_1[0x22] / fVar11;
  fVar11 = (float)param_1[0x23] / fVar11;
  fVar14 = (fVar15 - (float)iVar3) * (fVar15 - (float)iVar3) +
           ((float)iVar4 - fVar15) * ((float)iVar4 - fVar15);
  fVar12 = (fVar16 - (float)iVar7) * (fVar16 - (float)iVar7) +
           ((float)iVar8 - fVar16) * ((float)iVar8 - fVar16);
  uVar10 = 0;
  iVar7 = 1;
  fVar13 = (fVar11 - (float)iVar6) * (fVar11 - (float)iVar6) +
           ((float)iVar9 - fVar11) * ((float)iVar9 - fVar11);
  iVar3 = 0;
  if (((fVar14 < (float)param_1[0x17]) && (iVar3 = 0, fVar12 < (float)param_1[0x18])) &&
     (iVar3 = 0, fVar13 < (float)param_1[0x19])) {
    iVar3 = iVar7;
  }
  if ((iVar3 == 0) || ((*(byte *)(param_1 + 7) & 1) == 0)) {
    if (((fVar14 < (float)param_1[0xb]) &&
        ((fVar12 < (float)param_1[0xc] && (fVar13 < (float)param_1[0xd])))) &&
       ((*(byte *)(param_1 + 7) & 2) != 0)) {
      param_1[0xf] = param_1[0xf] + param_1[0x21];
      param_1[0x10] = param_1[0x10] + param_1[0x22];
      param_1[0x11] = param_1[0x11] + param_1[0x23];
      param_1[0x12] = param_1[0x12] + 1;
    }
    if (iVar2 + 1 != 6) goto LAB_1808f826b;
    iVar5 = 0;
    if (3 < (uint)param_1[0x12]) {
      iVar5 = param_1[0x10];
      iVar2 = param_1[0x11];
      fVar16 = (float)(param_1[0x12] * (uint)uVar1);
      fVar12 = (float)param_1[4] - (float)param_1[0xf] / fVar16;
      fVar11 = (float)param_1[8];
      fVar15 = fVar11;
      if ((fVar12 <= fVar11) && (fVar15 = -fVar11, -fVar11 <= fVar12)) {
        fVar15 = fVar12;
      }
      *param_5 = (float)param_1[4] - fVar15;
      fVar11 = (float)param_1[9];
      fVar12 = (float)param_1[5] - (float)iVar5 / fVar16;
      fVar15 = fVar11;
      if ((fVar12 <= fVar11) && (fVar15 = -fVar11, -fVar11 <= fVar12)) {
        fVar15 = fVar12;
      }
      param_5[1] = (float)param_1[5] - fVar15;
      fVar11 = (float)param_1[10];
      fVar16 = (float)param_1[6] - (float)iVar2 / fVar16;
      fVar15 = fVar11;
      if ((fVar16 <= fVar11) && (fVar15 = -fVar11, -fVar11 <= fVar16)) {
        fVar15 = fVar16;
      }
      param_5[2] = (float)param_1[6] - fVar15;
      goto LAB_1808f823c;
    }
  }
  else {
    fVar12 = (float)param_1[0x14];
    fVar15 = (float)param_1[4] - fVar15;
    fVar13 = fVar12;
    if ((fVar15 <= fVar12) && (fVar13 = -fVar12, -fVar12 <= fVar15)) {
      fVar13 = fVar15;
    }
    *param_5 = (float)param_1[4] - fVar13;
    fVar15 = (float)param_1[0x15];
    fVar16 = (float)param_1[5] - fVar16;
    fVar12 = fVar15;
    if ((fVar16 <= fVar15) && (fVar12 = -fVar15, -fVar15 <= fVar16)) {
      fVar12 = fVar16;
    }
    param_5[1] = (float)param_1[5] - fVar12;
    fVar16 = (float)param_1[0x16];
    fVar11 = (float)param_1[6] - fVar11;
    fVar15 = fVar16;
    if ((fVar11 <= fVar16) && (fVar15 = -fVar16, -fVar16 <= fVar11)) {
      fVar15 = fVar11;
    }
    param_5[2] = (float)param_1[6] - fVar15;
LAB_1808f823c:
    func_0x0001808f7c40(fVar15,param_5,param_6);
    param_1[4] = (int)*param_5;
    param_1[5] = (int)param_5[1];
    param_1[6] = (int)param_5[2];
    iVar5 = iVar7;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = (int)uVar10;
LAB_1808f826b:
  *(short *)((int64_t)param_1 + 0x92) = (short)uVar10;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return iVar5;
}



uint64_t FUN_1808f7fdb(int64_t param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int unaff_EBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t uVar4;
  int in_R10D;
  uint64_t uVar5;
  int in_R11D;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R15D;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_stack_00000080;
  uint64_t in_stack_00000088;
  
  fVar6 = (float)unaff_EBX;
  fVar10 = (float)*(int *)(param_1 + 0x84) / fVar6;
  fVar11 = (float)*(int *)(param_1 + 0x88) / fVar6;
  fVar6 = (float)*(int *)(param_1 + 0x8c) / fVar6;
  fVar9 = (fVar10 - (float)in_R11D) * (fVar10 - (float)in_R11D) +
          (param_2 - fVar10) * (param_2 - fVar10);
  fVar7 = (fVar11 - (float)in_R10D) * (fVar11 - (float)in_R10D) +
          ((float)param_3 - fVar11) * ((float)param_3 - fVar11);
  uVar4 = 0;
  uVar5 = 1;
  fVar8 = (fVar6 - (float)unaff_ESI) * (fVar6 - (float)unaff_ESI) +
          ((float)param_4 - fVar6) * ((float)param_4 - fVar6);
  bVar3 = false;
  if (((fVar9 < *(float *)(param_1 + 0x5c)) && (bVar3 = false, fVar7 < *(float *)(param_1 + 0x60)))
     && (bVar3 = false, fVar8 < *(float *)(param_1 + 100))) {
    bVar3 = true;
  }
  if ((bVar3) && ((*(byte *)(param_1 + 0x1c) & 1) != 0)) {
    fVar7 = *(float *)(param_1 + 0x50);
    fVar10 = *(float *)(param_1 + 0x10) - fVar10;
    fVar8 = fVar7;
    if ((fVar10 <= fVar7) && (fVar8 = -fVar7, -fVar7 <= fVar10)) {
      fVar8 = fVar10;
    }
    *in_stack_00000080 = *(float *)(param_1 + 0x10) - fVar8;
    fVar10 = *(float *)(param_1 + 0x54);
    fVar11 = *(float *)(param_1 + 0x14) - fVar11;
    fVar7 = fVar10;
    if ((fVar11 <= fVar10) && (fVar7 = -fVar10, -fVar10 <= fVar11)) {
      fVar7 = fVar11;
    }
    in_stack_00000080[1] = *(float *)(param_1 + 0x14) - fVar7;
    fVar11 = *(float *)(param_1 + 0x58);
    fVar6 = *(float *)(param_1 + 0x18) - fVar6;
    fVar10 = fVar11;
    if ((fVar6 <= fVar11) && (fVar10 = -fVar11, -fVar11 <= fVar6)) {
      fVar10 = fVar6;
    }
    in_stack_00000080[2] = *(float *)(param_1 + 0x18) - fVar10;
LAB_1808f823c:
    func_0x0001808f7c40(fVar10,in_stack_00000080,in_stack_00000088);
    unaff_RBP = uVar5 & 0xffffffff;
    *(float *)(param_1 + 0x10) = *in_stack_00000080;
    *(float *)(param_1 + 0x14) = in_stack_00000080[1];
    *(float *)(param_1 + 0x18) = in_stack_00000080[2];
  }
  else {
    if (((fVar9 < *(float *)(param_1 + 0x2c)) &&
        ((fVar7 < *(float *)(param_1 + 0x30) && (fVar8 < *(float *)(param_1 + 0x34))))) &&
       ((*(byte *)(param_1 + 0x1c) & 2) != 0)) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + unaff_R15D;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + unaff_R12D;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + unaff_R13D;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    if (unaff_EDI != 6) goto LAB_1808f826b;
    if (3 < *(uint *)(param_1 + 0x48)) {
      iVar1 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x44);
      fVar11 = (float)(*(uint *)(param_1 + 0x48) * unaff_EBX);
      fVar7 = *(float *)(param_1 + 0x10) - (float)*(int *)(param_1 + 0x3c) / fVar11;
      fVar6 = *(float *)(param_1 + 0x20);
      fVar10 = fVar6;
      if ((fVar7 <= fVar6) && (fVar10 = -fVar6, -fVar6 <= fVar7)) {
        fVar10 = fVar7;
      }
      *in_stack_00000080 = *(float *)(param_1 + 0x10) - fVar10;
      fVar6 = *(float *)(param_1 + 0x24);
      fVar7 = *(float *)(param_1 + 0x14) - (float)iVar1 / fVar11;
      fVar10 = fVar6;
      if ((fVar7 <= fVar6) && (fVar10 = -fVar6, -fVar6 <= fVar7)) {
        fVar10 = fVar7;
      }
      in_stack_00000080[1] = *(float *)(param_1 + 0x14) - fVar10;
      fVar6 = *(float *)(param_1 + 0x28);
      fVar11 = *(float *)(param_1 + 0x18) - (float)iVar2 / fVar11;
      fVar10 = fVar6;
      if ((fVar11 <= fVar6) && (fVar10 = -fVar6, -fVar6 <= fVar11)) {
        fVar10 = fVar11;
      }
      in_stack_00000080[2] = *(float *)(param_1 + 0x18) - fVar10;
      goto LAB_1808f823c;
    }
  }
  *(uint64_t *)(param_1 + 0x3c) = 0;
  *(uint64_t *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x4c) = (int)uVar4;
LAB_1808f826b:
  *(short *)(param_1 + 0x92) = (short)uVar4;
  *(uint64_t *)(param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x74) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x84) = 0;
  *(int32_t *)(param_1 + 0x8c) = 0;
  return unaff_RBP & 0xffffffff;
}



int32_t FUN_1808f829d(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



void NVSDK_NGX_Parameter_GetD(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f82d0  11  NVSDK_NGX_Parameter_GetD
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f831f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetD3d11Resource(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8330  12  NVSDK_NGX_Parameter_GetD3d11Resource
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f837f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetD3d12Resource(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8390  13  NVSDK_NGX_Parameter_GetD3d12Resource
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f83df. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetF(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f83f0  14  NVSDK_NGX_Parameter_GetF
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f843f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetI(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8450  15  NVSDK_NGX_Parameter_GetI
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f849f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetUI(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f84b0  16  NVSDK_NGX_Parameter_GetUI
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x60);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f84ff. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetULL(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8510  17  NVSDK_NGX_Parameter_GetULL
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f855f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_GetVoidPointer(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8570  18  NVSDK_NGX_Parameter_GetVoidPointer
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f85bf. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetD(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f85d0  19  NVSDK_NGX_Parameter_SetD
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f861d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetD3d11Resource(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8620  20  NVSDK_NGX_Parameter_SetD3d11Resource
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f866f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetD3d12Resource(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8680  21  NVSDK_NGX_Parameter_SetD3d12Resource
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f86cf. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetF(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f86e0  22  NVSDK_NGX_Parameter_SetF
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f872d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetI(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8730  23  NVSDK_NGX_Parameter_SetI
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f877f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetUI(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8790  24  NVSDK_NGX_Parameter_SetUI
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f87df. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetULL(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f87f0  25  NVSDK_NGX_Parameter_SetULL
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f883f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



void NVSDK_NGX_Parameter_SetVoidPointer(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // 0x8f8850  26  NVSDK_NGX_Parameter_SetVoidPointer
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    // WARNING: Could not recover jumptable at 0x0001808f889e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f88b0(code *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808f88b0(code *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  code *pcVar1;
  int64_t *plVar2;
  
  pcVar1 = (code *)0x0;
  plVar2 = (int64_t *)
           (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x40);
  if (param_5 != 0) {
    pcVar1 = FUN_1808f8b00;
  }
  *plVar2 = param_5;
  _guard_check_icall(param_1);
  (*param_1)(param_2,param_3,param_4,pcVar1);
  *plVar2 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f8940(uint64_t *param_1,uint64_t *param_2)
void FUN_1808f8940(uint64_t *param_1,uint64_t *param_2)

{
  code *pcVar1;
  int64_t *plVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int64_t *plStack_168;
  int64_t *plStack_160;
  int8_t auStack_158 [296];
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  pcVar1 = *(code **)*param_1;
  _guard_check_icall(pcVar1);
  iVar3 = (*pcVar1)(param_1,&unknown_var_6640_ptr,&plStack_168);
  plVar2 = plStack_168;
  if (iVar3 < 0) {
    FUN_1808fb790(&unknown_var_5376_ptr,0x3c,&unknown_var_5344_ptr,&unknown_var_5304_ptr);
  }
  else {
    pcVar1 = *(code **)(*plStack_168 + 0x38);
    _guard_check_icall(pcVar1);
    iVar3 = (*pcVar1)(plVar2,&plStack_160);
    plVar2 = plStack_160;
    if (iVar3 < 0) {
      pcVar1 = *(code **)(*plStack_168 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(plStack_168);
      FUN_1808fb790(&unknown_var_5376_ptr,0x45,&unknown_var_5344_ptr,&unknown_var_5464_ptr);
    }
    else {
      pcVar1 = *(code **)(*plStack_160 + 0x40);
      _guard_check_icall(pcVar1);
      iVar3 = (*pcVar1)(plVar2,auStack_158);
      if (iVar3 < 0) {
        pcVar1 = *(code **)(*plStack_160 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(plStack_160);
        pcVar1 = *(code **)(*plStack_168 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(plStack_168);
        FUN_1808fb790(&unknown_var_5376_ptr,0x4f,&unknown_var_5344_ptr,&unknown_var_5504_ptr);
      }
      else {
        *param_2 = uStack_30;
        pcVar1 = *(code **)(*plStack_160 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(plStack_160);
        pcVar1 = *(code **)(*plStack_168 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(plStack_168);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_188);
}






// 函数: void FUN_1808f89b5(void)
void FUN_1808f89b5(void)

{
  code *pcVar1;
  int iVar2;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int64_t *plStackX_20;
  int64_t *in_stack_00000028;
  uint64_t in_stack_00000158;
  uint64_t in_stack_00000160;
  
  pcVar1 = *(code **)(*unaff_RDI + 0x38);
  _guard_check_icall(pcVar1);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    pcVar1 = *(code **)(*plStackX_20 + 0x10);
    _guard_check_icall(pcVar1);
    (*pcVar1)(plStackX_20);
    FUN_1808fb790(&unknown_var_5376_ptr,0x45,&unknown_var_5344_ptr,&unknown_var_5464_ptr);
  }
  else {
    pcVar1 = *(code **)(*in_stack_00000028 + 0x40);
    _guard_check_icall(pcVar1);
    iVar2 = (*pcVar1)(in_stack_00000028,&stack0x00000030);
    if (iVar2 < 0) {
      pcVar1 = *(code **)(*in_stack_00000028 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(in_stack_00000028);
      pcVar1 = *(code **)(*plStackX_20 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(plStackX_20);
      FUN_1808fb790(&unknown_var_5376_ptr,0x4f,&unknown_var_5344_ptr,&unknown_var_5504_ptr);
    }
    else {
      *unaff_R14 = in_stack_00000158;
      pcVar1 = *(code **)(*in_stack_00000028 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(in_stack_00000028);
      pcVar1 = *(code **)(*plStackX_20 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(plStackX_20);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808f8add(void)
void FUN_1808f8add(void)

{
  uint64_t in_stack_00000160;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000160 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f8b00(int32_t param_1,uint64_t param_2)
void FUN_1808f8b00(int32_t param_1,uint64_t param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int64_t *)
                       ((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x40);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(pcVar1);
    (*pcVar1)(param_1,param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t NVSDK_NGX_D3D11_AllocateParameters(uint64_t param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
                    // 0x8f8b60  1  NVSDK_NGX_D3D11_AllocateParameters
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == 0) {
    return 0xbad00007;
  }
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f8b7e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}






// 函数: void FUN_1808f8b9f(void)
void FUN_1808f8b9f(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  _guard_check_icall();
                    // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
NVSDK_NGX_D3D11_CreateFeature
          (uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  
                    // 0x8f8bc0  2  NVSDK_NGX_D3D11_CreateFeature
  pcVar1 = system_system_config;
  if (system_system_config == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(system_system_config);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t NVSDK_NGX_D3D11_DestroyParameters(uint64_t param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
                    // 0x8f8c30  3  NVSDK_NGX_D3D11_DestroyParameters
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == 0) {
    return 0xbad00007;
  }
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f8c4e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}






// 函数: void FUN_1808f8c6f(void)
void FUN_1808f8c6f(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  _guard_check_icall();
                    // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
NVSDK_NGX_D3D11_EvaluateFeature
          (uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  
                    // 0x8f8c90  4  NVSDK_NGX_D3D11_EvaluateFeature
  pcVar1 = system_system_config;
  if (system_system_config == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(system_system_config);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
NVSDK_NGX_D3D11_EvaluateFeature_C
          (uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
                    // 0x8f8d00  5  NVSDK_NGX_D3D11_EvaluateFeature_C
  if (system_system_config == 0) {
    return 0xbad00007;
  }
  uVar1 = FUN_1808f88b0(system_system_config,param_1,param_2,param_3,param_4);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t NVSDK_NGX_D3D11_GetCapabilityParameters(uint64_t param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
                    // 0x8f8d40  6  NVSDK_NGX_D3D11_GetCapabilityParameters
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == 0) {
    return 0xbad00007;
  }
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808f8d5e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
  UNRECOVERED_JUMPTABLE = system_system_config;
  if (system_system_config == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(system_system_config);
                    // WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}






