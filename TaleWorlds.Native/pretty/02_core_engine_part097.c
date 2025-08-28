#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part097.c - 4 个函数

// 函数: void FUN_18011ae54(void)
void FUN_18011ae54(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011aea0(int *param_1,uint64_t *param_2,uint param_3,int64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if (*(char *)(lVar1 + 0xb4) == '\0') {
    if ((param_3 >> 0x14 & 1) == 0) {
      FUN_18011d940(lVar1 + 0x218,param_1 + 4);
    }
    iVar7 = *(int *)(lVar3 + 0x1e8c);
    if (*(int *)(lVar3 + 0x1e88) == iVar7) {
      iVar9 = *(int *)(lVar3 + 0x1e88) + 1;
      if (iVar7 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar7 / 2 + iVar7;
      }
      if (iVar9 < iVar4) {
        iVar9 = iVar4;
      }
      if (iVar7 < iVar9) {
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
        }
        uVar6 = func_0x000180120ce0((int64_t)iVar9 << 3,SYSTEM_DATA_MANAGER_B);
        if (*(int64_t *)(lVar3 + 0x1e90) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(uVar6,*(int64_t *)(lVar3 + 0x1e90),(int64_t)*(int *)(lVar3 + 0x1e88) << 3);
        }
        *(uint64_t *)(lVar3 + 0x1e90) = uVar6;
        *(int *)(lVar3 + 0x1e8c) = iVar9;
      }
    }
    *(int **)(*(int64_t *)(lVar3 + 0x1e90) + (int64_t)*(int *)(lVar3 + 0x1e88) * 8) = param_1;
    *(int *)(lVar3 + 0x1e88) = *(int *)(lVar3 + 0x1e88) + 1;
    iVar7 = param_1[8];
    if (iVar7 != *(int *)(lVar3 + 0x1a90)) {
      if (((((param_3 & 1) != 0) && ((*(byte *)(param_1 + 0x13) & 1) == 0)) && (1 < *param_1)) &&
         (param_1[9] != -1)) {
        qsort(*(uint64_t *)(param_1 + 2),(int64_t)*param_1,0x28,&unknown_var_9712_ptr);
        iVar7 = param_1[8];
      }
      fVar12 = 0.0;
      uVar11 = param_3 | 0x40;
      if ((param_3 & 0xc0) != 0) {
        uVar11 = param_3;
      }
      param_1[0x13] = uVar11;
      uVar6 = *param_2;
      uVar2 = param_2[1];
      *(int8_t *)(param_1 + 0x16) = 1;
      param_1[9] = iVar7;
      *(uint64_t *)(param_1 + 10) = uVar6;
      *(uint64_t *)(param_1 + 0xc) = uVar2;
      fStack_58 = (float)param_1[0xf];
      param_1[8] = *(int *)(lVar3 + 0x1a90);
      fStack_54 = (float)param_1[0xd] - (float)param_1[0xb];
      func_0x000180124080(&fStack_58);
      lVar3 = SYSTEM_DATA_MANAGER_A;
      *(int *)(lVar1 + 0x100) = param_1[10];
      pfVar10 = (float *)(lVar3 + 0x1628 +
                         ((((uint64_t)(uVar11 & 0x400000) | 0x4200000) >> 0x15) + 10) * 0x10);
      fStack_50 = *pfVar10;
      fStack_4c = pfVar10[1];
      fStack_48 = pfVar10[2];
      fStack_44 = pfVar10[3] * *(float *)(lVar3 + 0x1628);
      uVar5 = func_0x000180121e20(&fStack_50);
      fStack_54 = (float)param_1[0xd] - 1.0;
      if (param_4 == 0) {
        if ((uVar11 & 0x200000) == 0) {
          fStack_58 = *(float *)(lVar1 + 0x70);
        }
        else {
          fStack_58 = 0.0;
        }
        fStack_58 = (float)param_1[10] - fStack_58;
        if ((uVar11 & 0x200000) == 0) {
          fVar12 = *(float *)(lVar1 + 0x70);
        }
        fStack_50 = fVar12 + (float)param_1[0xc];
        pfVar10 = &fStack_50;
        pfVar8 = &fStack_58;
      }
      else {
        fStack_50 = *(float *)(param_4 + 0x38);
        pfVar10 = &fStack_58;
        fStack_58 = fStack_50 + *(float *)(param_4 + 0x40);
        pfVar8 = &fStack_50;
      }
      fStack_4c = fStack_54;
      FUN_180293d20(*(uint64_t *)(lVar1 + 0x2e8),pfVar8,pfVar10,uVar5,0x3f800000);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011aedb(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t *puVar7;
  int64_t unaff_RBX;
  int iVar8;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int32_t *puVar9;
  uint uVar10;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  uint unaff_R14D;
  float fVar11;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  
  if ((unaff_R14D >> 0x14 & 1) == 0) {
    FUN_18011d940(unaff_RSI + 0x218,param_1 + 0x10);
  }
  iVar6 = *(int *)(unaff_RBX + 0x1e8c);
  if (*(int *)(unaff_RBX + 0x1e88) == iVar6) {
    iVar8 = *(int *)(unaff_RBX + 0x1e88) + 1;
    if (iVar6 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar6 / 2 + iVar6;
    }
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    if (iVar6 < iVar8) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar5 = func_0x000180120ce0((int64_t)iVar8 << 3,SYSTEM_DATA_MANAGER_B);
      if (*(int64_t *)(unaff_RBX + 0x1e90) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar5,*(int64_t *)(unaff_RBX + 0x1e90),(int64_t)*(int *)(unaff_RBX + 0x1e88) << 3);
      }
      *(uint64_t *)(unaff_RBX + 0x1e90) = uVar5;
      *(int *)(unaff_RBX + 0x1e8c) = iVar8;
    }
  }
  *(int **)(*(int64_t *)(unaff_RBX + 0x1e90) + (int64_t)*(int *)(unaff_RBX + 0x1e88) * 8) =
       unaff_RDI;
  *(int *)(unaff_RBX + 0x1e88) = *(int *)(unaff_RBX + 0x1e88) + 1;
  iVar6 = unaff_RDI[8];
  if (iVar6 != *(int *)(unaff_RBX + 0x1a90)) {
    if (((((unaff_R14D & 1) != 0) && ((*(byte *)(unaff_RDI + 0x13) & 1) == 0)) && (1 < *unaff_RDI))
       && (unaff_RDI[9] != -1)) {
      qsort(*(uint64_t *)(unaff_RDI + 2),(int64_t)*unaff_RDI,0x28,&unknown_var_9712_ptr);
      iVar6 = unaff_RDI[8];
    }
    fVar11 = 0.0;
    uVar10 = unaff_R14D | 0x40;
    if ((unaff_R14D & 0xc0) != 0) {
      uVar10 = unaff_R14D;
    }
    unaff_RDI[0x13] = uVar10;
    uVar5 = *unaff_R13;
    uVar1 = unaff_R13[1];
    *(int8_t *)(unaff_RDI + 0x16) = 1;
    unaff_RDI[9] = iVar6;
    *(uint64_t *)(unaff_RDI + 10) = uVar5;
    *(uint64_t *)(unaff_RDI + 0xc) = uVar1;
    in_stack_00000030 = (float)unaff_RDI[0xf];
    unaff_RDI[8] = *(int *)(unaff_RBX + 0x1a90);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - (float)unaff_RDI[0xb];
    func_0x000180124080(&stack0x00000030);
    lVar2 = SYSTEM_DATA_MANAGER_A;
    *(int *)(unaff_RSI + 0x100) = unaff_RDI[10];
    puVar9 = (int32_t *)
             (lVar2 + 0x1628 + ((((uint64_t)(uVar10 & 0x400000) | 0x4200000) >> 0x15) + 10) * 0x10)
    ;
    in_stack_00000038 = (float)*puVar9;
    fStack000000000000003c = (float)puVar9[1];
    in_stack_00000040 = puVar9[2];
    fStack0000000000000044 = (float)puVar9[3] * *(float *)(lVar2 + 0x1628);
    uVar4 = func_0x000180121e20(&stack0x00000038);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - 1.0;
    if (unaff_R12 == 0) {
      if ((uVar10 & 0x200000) == 0) {
        in_stack_00000030 = *(float *)(unaff_RSI + 0x70);
      }
      else {
        in_stack_00000030 = 0.0;
      }
      in_stack_00000030 = (float)unaff_RDI[10] - in_stack_00000030;
      if ((uVar10 & 0x200000) == 0) {
        fVar11 = *(float *)(unaff_RSI + 0x70);
      }
      in_stack_00000038 = fVar11 + (float)unaff_RDI[0xc];
      puVar9 = &stack0x00000038;
      puVar7 = &stack0x00000030;
    }
    else {
      in_stack_00000038 = *(float *)(unaff_R12 + 0x38);
      puVar9 = &stack0x00000030;
      in_stack_00000030 = in_stack_00000038 + *(float *)(unaff_R12 + 0x40);
      puVar7 = &stack0x00000038;
    }
    fStack000000000000003c = fStack0000000000000034;
    FUN_180293d20(*(uint64_t *)(unaff_RSI + 0x2e8),puVar7,puVar9,uVar4,0x3f800000);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011af38(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  int iVar5;
  int32_t *puVar6;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int32_t *puVar7;
  uint uVar8;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  uint unaff_R14D;
  float fVar9;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar4 = func_0x000180120ce0((int64_t)unaff_EBP << 3,SYSTEM_DATA_MANAGER_B);
  if (*(int64_t *)(unaff_RBX + 0x1e90) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*(int64_t *)(unaff_RBX + 0x1e90),(int64_t)*(int *)(unaff_RBX + 0x1e88) << 3);
  }
  *(uint64_t *)(unaff_RBX + 0x1e90) = uVar4;
  *(int *)(unaff_RBX + 0x1e8c) = unaff_EBP;
  *(int **)(*(int64_t *)(unaff_RBX + 0x1e90) + (int64_t)*(int *)(unaff_RBX + 0x1e88) * 8) =
       unaff_RDI;
  *(int *)(unaff_RBX + 0x1e88) = *(int *)(unaff_RBX + 0x1e88) + 1;
  iVar5 = unaff_RDI[8];
  if (iVar5 != *(int *)(unaff_RBX + 0x1a90)) {
    if (((((unaff_R14D & 1) != 0) && ((*(byte *)(unaff_RDI + 0x13) & 1) == 0)) && (1 < *unaff_RDI))
       && (unaff_RDI[9] != -1)) {
      qsort(*(uint64_t *)(unaff_RDI + 2),(int64_t)*unaff_RDI,0x28,&unknown_var_9712_ptr);
      iVar5 = unaff_RDI[8];
    }
    fVar9 = 0.0;
    uVar8 = unaff_R14D | 0x40;
    if ((unaff_R14D & 0xc0) != 0) {
      uVar8 = unaff_R14D;
    }
    unaff_RDI[0x13] = uVar8;
    uVar4 = *unaff_R13;
    uVar1 = unaff_R13[1];
    *(int8_t *)(unaff_RDI + 0x16) = 1;
    unaff_RDI[9] = iVar5;
    *(uint64_t *)(unaff_RDI + 10) = uVar4;
    *(uint64_t *)(unaff_RDI + 0xc) = uVar1;
    in_stack_00000030 = (float)unaff_RDI[0xf];
    unaff_RDI[8] = *(int *)(unaff_RBX + 0x1a90);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - (float)unaff_RDI[0xb];
    func_0x000180124080(&stack0x00000030);
    lVar2 = SYSTEM_DATA_MANAGER_A;
    *(int *)(unaff_RSI + 0x100) = unaff_RDI[10];
    puVar7 = (int32_t *)
             (lVar2 + 0x1628 + ((((uint64_t)(uVar8 & 0x400000) | 0x4200000) >> 0x15) + 10) * 0x10);
    in_stack_00000038 = (float)*puVar7;
    fStack000000000000003c = (float)puVar7[1];
    in_stack_00000040 = puVar7[2];
    fStack0000000000000044 = (float)puVar7[3] * *(float *)(lVar2 + 0x1628);
    uVar3 = func_0x000180121e20(&stack0x00000038);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - 1.0;
    if (unaff_R12 == 0) {
      if ((uVar8 & 0x200000) == 0) {
        in_stack_00000030 = *(float *)(unaff_RSI + 0x70);
      }
      else {
        in_stack_00000030 = 0.0;
      }
      in_stack_00000030 = (float)unaff_RDI[10] - in_stack_00000030;
      if ((uVar8 & 0x200000) == 0) {
        fVar9 = *(float *)(unaff_RSI + 0x70);
      }
      in_stack_00000038 = fVar9 + (float)unaff_RDI[0xc];
      puVar7 = &stack0x00000038;
      puVar6 = &stack0x00000030;
    }
    else {
      in_stack_00000038 = *(float *)(unaff_R12 + 0x38);
      puVar7 = &stack0x00000030;
      in_stack_00000030 = in_stack_00000038 + *(float *)(unaff_R12 + 0x40);
      puVar6 = &stack0x00000038;
    }
    fStack000000000000003c = fStack0000000000000034;
    FUN_180293d20(*(uint64_t *)(unaff_RSI + 0x2e8),puVar6,puVar7,uVar3,0x3f800000);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011afbf(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int iVar5;
  int32_t *puVar6;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int32_t *puVar7;
  uint uVar8;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  uint unaff_R14D;
  float fVar9;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  
  *(int **)(*(int64_t *)(unaff_RBX + 0x1e90) + (int64_t)*(int *)(unaff_RBX + 0x1e88) * 8) =
       unaff_RDI;
  *(int *)(unaff_RBX + 0x1e88) = *(int *)(unaff_RBX + 0x1e88) + 1;
  iVar5 = unaff_RDI[8];
  if (iVar5 != *(int *)(unaff_RBX + 0x1a90)) {
    if (((((unaff_R14D & 1) != 0) && ((*(byte *)(unaff_RDI + 0x13) & 1) == 0)) && (1 < *unaff_RDI))
       && (unaff_RDI[9] != -1)) {
      qsort(*(uint64_t *)(unaff_RDI + 2),(int64_t)*unaff_RDI,0x28,&unknown_var_9712_ptr);
      iVar5 = unaff_RDI[8];
    }
    fVar9 = 0.0;
    uVar8 = unaff_R14D | 0x40;
    if ((unaff_R14D & 0xc0) != 0) {
      uVar8 = unaff_R14D;
    }
    unaff_RDI[0x13] = uVar8;
    uVar1 = *unaff_R13;
    uVar2 = unaff_R13[1];
    *(int8_t *)(unaff_RDI + 0x16) = 1;
    unaff_RDI[9] = iVar5;
    *(uint64_t *)(unaff_RDI + 10) = uVar1;
    *(uint64_t *)(unaff_RDI + 0xc) = uVar2;
    in_stack_00000030 = (float)unaff_RDI[0xf];
    unaff_RDI[8] = *(int *)(unaff_RBX + 0x1a90);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - (float)unaff_RDI[0xb];
    func_0x000180124080(&stack0x00000030);
    lVar3 = SYSTEM_DATA_MANAGER_A;
    *(int *)(unaff_RSI + 0x100) = unaff_RDI[10];
    puVar7 = (int32_t *)
             (lVar3 + 0x1628 + ((((uint64_t)(uVar8 & 0x400000) | 0x4200000) >> 0x15) + 10) * 0x10);
    in_stack_00000038 = (float)*puVar7;
    fStack000000000000003c = (float)puVar7[1];
    in_stack_00000040 = puVar7[2];
    fStack0000000000000044 = (float)puVar7[3] * *(float *)(lVar3 + 0x1628);
    uVar4 = func_0x000180121e20(&stack0x00000038);
    fStack0000000000000034 = (float)unaff_RDI[0xd] - 1.0;
    if (unaff_R12 == 0) {
      if ((uVar8 & 0x200000) == 0) {
        in_stack_00000030 = *(float *)(unaff_RSI + 0x70);
      }
      else {
        in_stack_00000030 = 0.0;
      }
      in_stack_00000030 = (float)unaff_RDI[10] - in_stack_00000030;
      if ((uVar8 & 0x200000) == 0) {
        fVar9 = *(float *)(unaff_RSI + 0x70);
      }
      in_stack_00000038 = fVar9 + (float)unaff_RDI[0xc];
      puVar7 = &stack0x00000038;
      puVar6 = &stack0x00000030;
    }
    else {
      in_stack_00000038 = *(float *)(unaff_R12 + 0x38);
      puVar7 = &stack0x00000030;
      in_stack_00000030 = in_stack_00000038 + *(float *)(unaff_R12 + 0x40);
      puVar6 = &stack0x00000038;
    }
    fStack000000000000003c = fStack0000000000000034;
    FUN_180293d20(*(uint64_t *)(unaff_RSI + 0x2e8),puVar6,puVar7,uVar4,0x3f800000);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011afee(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int in_EAX;
  int32_t uVar4;
  int32_t *puVar5;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int32_t *puVar6;
  uint uVar7;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  uint unaff_R14D;
  float fVar8;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  
  if (((((unaff_R14D & 1) != 0) && ((*(byte *)(unaff_RDI + 0x13) & 1) == 0)) && (1 < *unaff_RDI)) &&
     (unaff_RDI[9] != -1)) {
    qsort(*(uint64_t *)(unaff_RDI + 2),(int64_t)*unaff_RDI,0x28,&unknown_var_9712_ptr);
    in_EAX = unaff_RDI[8];
  }
  fVar8 = 0.0;
  uVar7 = unaff_R14D | 0x40;
  if ((unaff_R14D & 0xc0) != 0) {
    uVar7 = unaff_R14D;
  }
  unaff_RDI[0x13] = uVar7;
  uVar1 = *unaff_R13;
  uVar2 = unaff_R13[1];
  *(int8_t *)(unaff_RDI + 0x16) = 1;
  unaff_RDI[9] = in_EAX;
  *(uint64_t *)(unaff_RDI + 10) = uVar1;
  *(uint64_t *)(unaff_RDI + 0xc) = uVar2;
  in_stack_00000030 = (float)unaff_RDI[0xf];
  unaff_RDI[8] = *(int *)(unaff_RBX + 0x1a90);
  fStack0000000000000034 = (float)unaff_RDI[0xd] - (float)unaff_RDI[0xb];
  func_0x000180124080(&stack0x00000030);
  lVar3 = SYSTEM_DATA_MANAGER_A;
  *(int *)(unaff_RSI + 0x100) = unaff_RDI[10];
  puVar6 = (int32_t *)
           (lVar3 + 0x1628 + ((((uint64_t)(uVar7 & 0x400000) | 0x4200000) >> 0x15) + 10) * 0x10);
  in_stack_00000038 = (float)*puVar6;
  fStack000000000000003c = (float)puVar6[1];
  in_stack_00000040 = puVar6[2];
  fStack0000000000000044 = (float)puVar6[3] * *(float *)(lVar3 + 0x1628);
  uVar4 = func_0x000180121e20(&stack0x00000038);
  fStack0000000000000034 = (float)unaff_RDI[0xd] - 1.0;
  if (unaff_R12 == 0) {
    if ((uVar7 & 0x200000) == 0) {
      in_stack_00000030 = *(float *)(unaff_RSI + 0x70);
    }
    else {
      in_stack_00000030 = 0.0;
    }
    in_stack_00000030 = (float)unaff_RDI[10] - in_stack_00000030;
    if ((uVar7 & 0x200000) == 0) {
      fVar8 = *(float *)(unaff_RSI + 0x70);
    }
    in_stack_00000038 = fVar8 + (float)unaff_RDI[0xc];
    puVar6 = &stack0x00000038;
    puVar5 = &stack0x00000030;
  }
  else {
    in_stack_00000038 = *(float *)(unaff_R12 + 0x38);
    puVar6 = &stack0x00000030;
    in_stack_00000030 = in_stack_00000038 + *(float *)(unaff_R12 + 0x40);
    puVar5 = &stack0x00000038;
  }
  fStack000000000000003c = fStack0000000000000034;
  FUN_180293d20(*(uint64_t *)(unaff_RSI + 0x2e8),puVar5,puVar6,uVar4,0x3f800000);
  return 1;
}



int8_t FUN_18011b178(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011b190(void)
void FUN_18011b190(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar2 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    lVar3 = *(int64_t *)
             (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1e90) + -8 +
             (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1e88) * 8);
    if (*(char *)(lVar3 + 0x58) != '\0') {
      FUN_18011b260(lVar3);
    }
    lVar5 = SYSTEM_DATA_MANAGER_A;
    if (((*(char *)(lVar3 + 0x59) == '\0') && (*(int *)(lVar3 + 0x1c) != 0)) &&
       (*(int *)(lVar4 + 0x1a90) <= *(int *)(lVar3 + 0x24) + 1)) {
      *(float *)(lVar2 + 0x104) = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0x34);
    }
    else {
      fVar6 = *(float *)(lVar2 + 0x104) - *(float *)(lVar3 + 0x34);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(lVar3 + 0x38) = fVar6;
    }
    if ((*(uint *)(lVar3 + 0x4c) & 0x100000) == 0) {
      piVar1 = (int *)(*(int64_t *)(lVar5 + 0x1af8) + 0x218);
      *piVar1 = *piVar1 + -1;
    }
    piVar1 = (int *)(lVar4 + 0x1e88);
    *piVar1 = *piVar1 + -1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011b1c6(int64_t param_1,int64_t param_2)
void FUN_18011b1c6(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar3;
  
  lVar2 = *(int64_t *)(in_RAX + -8 + param_1 * 8);
  if (*(char *)(lVar2 + 0x58) != '\0') {
    FUN_18011b260(lVar2);
    param_2 = SYSTEM_DATA_MANAGER_A;
  }
  if (((*(char *)(lVar2 + 0x59) == '\0') && (*(int *)(lVar2 + 0x1c) != 0)) &&
     (*(int *)(unaff_RDI + 0x1a90) <= *(int *)(lVar2 + 0x24) + 1)) {
    *(float *)(unaff_RSI + 0x104) = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0x34);
  }
  else {
    fVar3 = *(float *)(unaff_RSI + 0x104) - *(float *)(lVar2 + 0x34);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(lVar2 + 0x38) = fVar3;
  }
  if ((*(uint *)(lVar2 + 0x4c) & 0x100000) == 0) {
    piVar1 = (int *)(*(int64_t *)(param_2 + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
  }
  *(int *)(unaff_RDI + 0x1e88) = *(int *)(unaff_RDI + 0x1e88) + -1;
  return;
}





// 函数: void FUN_18011b239(uint64_t param_1,int64_t param_2)
void FUN_18011b239(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t unaff_RDI;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  *(int *)(unaff_RDI + 0x1e88) = *(int *)(unaff_RDI + 0x1e88) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



