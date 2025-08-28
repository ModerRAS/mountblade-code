#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part127.c - 15 个函数

// 函数: void FUN_18012cf49(int32_t param_1)
void FUN_18012cf49(int32_t param_1)

{
  int64_t in_RAX;
  char cVar1;
  int8_t uVar2;
  int64_t unaff_RBP;
  int64_t in_stack_00000040;
  
  *(int32_t *)(in_RAX + 0xd8) = param_1;
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar1;
  if ((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
       (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar1 == '\0')) ||
     (((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))) ||
      (0 < *(int *)(in_stack_00000040 + 0xdc))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar2;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x90) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012cfe0(void)
void FUN_18012cfe0(void)

{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  if ((1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ad0)) || (*(char *)(SYSTEM_DATA_MANAGER_A + 2) == '\0')) {
    lVar4 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    if (*(int64_t *)(lVar4 + 0x210) != 0) {
      FUN_180134b80();
    }
    uVar6 = *(uint *)(lVar4 + 0xc);
    if ((uVar6 >> 0x1d & 1) == 0) {
      FUN_180126d80();
      uVar6 = *(uint *)(lVar4 + 0xc);
    }
    lVar8 = SYSTEM_DATA_MANAGER_A;
    lVar9 = 0;
    if (((uVar6 >> 0x18 & 1) == 0) && (pcVar1 = (char *)(SYSTEM_DATA_MANAGER_A + 0x2e38), *pcVar1 != '\0'))
    {
      FUN_18013c760(&unknown_var_3196_ptr);
      if (*(int64_t *)(lVar8 + 0x2e40) != 0) {
        lVar7 = __acrt_iob_func(1);
        if (*(int64_t *)(lVar8 + 0x2e40) == lVar7) {
          fflush();
        }
        else {
          fclose();
        }
        *(uint64_t *)(lVar8 + 0x2e40) = 0;
      }
      piVar2 = (int *)(lVar8 + 0x2e48);
      lVar7 = *(int64_t *)(lVar8 + 0x2e50);
      if ((lVar7 != 0) && (1 < *piVar2 + -1)) {
        if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
          (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar7);
          lVar7 = *(int64_t *)(lVar8 + 0x2e50);
        }
        lVar8 = SYSTEM_DATA_MANAGER_A;
        if (lVar7 != 0) {
          piVar2[0] = 0;
          piVar2[1] = 0;
          if (lVar8 != 0) {
            piVar2 = (int *)(lVar8 + 0x3a8);
            *piVar2 = *piVar2 + -1;
          }
                    // WARNING: Subroutine does not return
          SystemResourceCleaner(lVar7,SYSTEM_DATA_MANAGER_B);
        }
      }
      lVar8 = SYSTEM_DATA_MANAGER_A;
      *pcVar1 = '\0';
    }
    if (((*(int64_t *)(lVar4 + 0x408) != 0) && ((*(byte *)(lVar4 + 0x432) & 2) != 0)) &&
       (lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x408) + 0x68), lVar7 != 0)) {
      fVar10 = *(float *)(lVar4 + 0x11c);
      fVar3 = *(float *)(lVar4 + 0x74);
      *(float *)(lVar7 + 0x118) =
           (*(float *)(lVar4 + 0x118) + *(float *)(lVar4 + 0x70)) - *(float *)(lVar7 + 0x70);
      *(float *)(lVar7 + 0x11c) = (fVar10 + fVar3) - *(float *)(lVar7 + 0x74);
    }
    *(int *)(lVar5 + 0x1ad0) = *(int *)(lVar5 + 0x1ad0) + -1;
    if ((*(uint *)(lVar4 + 0xc) & 0x4000000) != 0) {
      *(int *)(lVar5 + 0x1bc0) = *(int *)(lVar5 + 0x1bc0) + -1;
    }
    if (*(int *)(lVar5 + 0x1ad0) != 0) {
      lVar9 = *(int64_t *)
               (*(int64_t *)(lVar5 + 0x1ad8) + -8 + (int64_t)*(int *)(lVar5 + 0x1ad0) * 8);
    }
    *(int64_t *)(lVar8 + 0x1af8) = lVar9;
    if (lVar9 != 0) {
      fVar10 = *(float *)(lVar8 + 0x19fc) * *(float *)(lVar9 + 0x2d8) * *(float *)(lVar9 + 0x2dc);
      *(float *)(lVar8 + 0x1a10) = fVar10;
      *(float *)(lVar8 + 0x19f8) = fVar10;
    }
    if (*(int64_t *)(lVar5 + 0x1af8) != 0) {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x28);
      if (lVar5 != 0) {
        *(int32_t *)(lVar5 + 0x54) = *(int32_t *)(lVar8 + 0x1a90);
      }
      if (((*(int64_t *)(lVar8 + 0x1c78) != lVar5) &&
          (*(int64_t *)(lVar8 + 0x1c78) = lVar5, lVar5 != 0)) &&
         (*(code **)(lVar8 + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(lVar8 + 0x15c0))();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d004(void)
void FUN_18012d004(void)

{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int64_t unaff_RDI;
  float fVar9;
  
  lVar4 = *(int64_t *)(unaff_RBX + 0x1af8);
  if (*(int64_t *)(lVar4 + 0x210) != 0) {
    FUN_180134b80();
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
  }
  uVar6 = *(uint *)(lVar4 + 0xc);
  if ((uVar6 >> 0x1d & 1) == 0) {
    FUN_180126d80();
    uVar6 = *(uint *)(lVar4 + 0xc);
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
  }
  lVar8 = 0;
  if (((uVar6 >> 0x18 & 1) == 0) && (pcVar1 = (char *)(unaff_RBX + 0x2e38), *pcVar1 != '\0')) {
    FUN_18013c760(&unknown_var_3196_ptr);
    if (*(int64_t *)(unaff_RBX + 0x2e40) != 0) {
      lVar7 = __acrt_iob_func(1);
      if (*(int64_t *)(unaff_RBX + 0x2e40) == lVar7) {
        fflush();
      }
      else {
        fclose();
      }
      *(uint64_t *)(unaff_RBX + 0x2e40) = 0;
    }
    piVar2 = (int *)(unaff_RBX + 0x2e48);
    lVar7 = *(int64_t *)(unaff_RBX + 0x2e50);
    if ((lVar7 != 0) && (1 < *piVar2 + -1)) {
      if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
        (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar7);
        lVar7 = *(int64_t *)(unaff_RBX + 0x2e50);
      }
      lVar5 = SYSTEM_DATA_MANAGER_A;
      if (lVar7 != 0) {
        piVar2[0] = 0;
        piVar2[1] = 0;
        if (lVar5 != 0) {
          piVar2 = (int *)(lVar5 + 0x3a8);
          *piVar2 = *piVar2 + -1;
        }
                    // WARNING: Subroutine does not return
        SystemResourceCleaner(lVar7,SYSTEM_DATA_MANAGER_B);
      }
    }
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
    *pcVar1 = '\0';
  }
  if (((*(int64_t *)(lVar4 + 0x408) != 0) && ((*(byte *)(lVar4 + 0x432) & 2) != 0)) &&
     (lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x408) + 0x68), lVar7 != 0)) {
    fVar9 = *(float *)(lVar4 + 0x11c);
    fVar3 = *(float *)(lVar4 + 0x74);
    *(float *)(lVar7 + 0x118) =
         (*(float *)(lVar4 + 0x118) + *(float *)(lVar4 + 0x70)) - *(float *)(lVar7 + 0x70);
    *(float *)(lVar7 + 0x11c) = (fVar9 + fVar3) - *(float *)(lVar7 + 0x74);
  }
  *(int *)(unaff_RDI + 0x1ad0) = *(int *)(unaff_RDI + 0x1ad0) + -1;
  if ((*(uint *)(lVar4 + 0xc) & 0x4000000) != 0) {
    *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  }
  if (*(int *)(unaff_RDI + 0x1ad0) != 0) {
    lVar8 = *(int64_t *)
             (*(int64_t *)(unaff_RDI + 0x1ad8) + -8 + (int64_t)*(int *)(unaff_RDI + 0x1ad0) * 8);
  }
  *(int64_t *)(unaff_RBX + 0x1af8) = lVar8;
  if (lVar8 != 0) {
    fVar9 = *(float *)(unaff_RBX + 0x19fc) * *(float *)(lVar8 + 0x2d8) * *(float *)(lVar8 + 0x2dc);
    *(float *)(unaff_RBX + 0x1a10) = fVar9;
    *(float *)(unaff_RBX + 0x19f8) = fVar9;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar4 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar4 != 0) {
      *(int32_t *)(lVar4 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
    }
    if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar4) &&
        (*(int64_t *)(unaff_RBX + 0x1c78) = lVar4, lVar4 != 0)) &&
       (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(unaff_RBX + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d04f(void)
void FUN_18012d04f(void)

{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar6;
  
  pcVar1 = (char *)(unaff_RBX + 0x2e38);
  if (*pcVar1 != (char)unaff_RSI) {
    FUN_18013c760(&unknown_var_3196_ptr);
    if (*(int64_t *)(unaff_RBX + 0x2e40) != unaff_RSI) {
      lVar5 = __acrt_iob_func((int)unaff_RSI + 1);
      if (*(int64_t *)(unaff_RBX + 0x2e40) == lVar5) {
        fflush();
      }
      else {
        fclose();
      }
      *(int64_t *)(unaff_RBX + 0x2e40) = unaff_RSI;
    }
    lVar5 = *(int64_t *)(unaff_RBX + 0x2e50);
    if ((lVar5 != 0) && (1 < *(int *)(unaff_RBX + 0x2e48) + -1)) {
      if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
        (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar5);
        lVar5 = *(int64_t *)(unaff_RBX + 0x2e50);
      }
      lVar4 = SYSTEM_DATA_MANAGER_A;
      if (lVar5 != 0) {
        *(int64_t *)(unaff_RBX + 0x2e48) = unaff_RSI;
        if (lVar4 != 0) {
          piVar2 = (int *)(lVar4 + 0x3a8);
          *piVar2 = *piVar2 + -1;
        }
                    // WARNING: Subroutine does not return
        SystemResourceCleaner(lVar5,SYSTEM_DATA_MANAGER_B);
      }
    }
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
    *pcVar1 = (char)unaff_RSI;
  }
  if (((*(int64_t *)(unaff_RBP + 0x408) != 0) && ((*(byte *)(unaff_RBP + 0x432) & 2) != 0)) &&
     (lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x408) + 0x68), lVar5 != 0)) {
    fVar6 = *(float *)(unaff_RBP + 0x11c);
    fVar3 = *(float *)(unaff_RBP + 0x74);
    *(float *)(lVar5 + 0x118) =
         (*(float *)(unaff_RBP + 0x118) + *(float *)(unaff_RBP + 0x70)) - *(float *)(lVar5 + 0x70);
    *(float *)(lVar5 + 0x11c) = (fVar6 + fVar3) - *(float *)(lVar5 + 0x74);
  }
  *(int *)(unaff_RDI + 0x1ad0) = *(int *)(unaff_RDI + 0x1ad0) + -1;
  if ((*(uint *)(unaff_RBP + 0xc) & 0x4000000) != 0) {
    *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  }
  if (*(int *)(unaff_RDI + 0x1ad0) != 0) {
    unaff_RSI = *(int64_t *)
                 (*(int64_t *)(unaff_RDI + 0x1ad8) + -8 +
                 (int64_t)*(int *)(unaff_RDI + 0x1ad0) * 8);
  }
  *(int64_t *)(unaff_RBX + 0x1af8) = unaff_RSI;
  if (unaff_RSI != 0) {
    fVar6 = *(float *)(unaff_RBX + 0x19fc) * *(float *)(unaff_RSI + 0x2d8) *
            *(float *)(unaff_RSI + 0x2dc);
    *(float *)(unaff_RBX + 0x1a10) = fVar6;
    *(float *)(unaff_RBX + 0x19f8) = fVar6;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar5 != 0) {
      *(int32_t *)(lVar5 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
    }
    if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar5) &&
        (*(int64_t *)(unaff_RBX + 0x1c78) = lVar5, lVar5 != 0)) &&
       (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(unaff_RBX + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d06b(void)
void FUN_18012d06b(void)

{
  int *piVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t *unaff_R15;
  float fVar5;
  
  FUN_18013c760();
  if (*(int64_t *)(unaff_RBX + 0x2e40) != unaff_RSI) {
    lVar4 = __acrt_iob_func((int)unaff_RSI + 1);
    if (*(int64_t *)(unaff_RBX + 0x2e40) == lVar4) {
      fflush();
    }
    else {
      fclose();
    }
    *(int64_t *)(unaff_RBX + 0x2e40) = unaff_RSI;
  }
  lVar4 = *(int64_t *)(unaff_RBX + 0x2e50);
  if ((lVar4 != 0) && (1 < *(int *)(unaff_RBX + 0x2e48) + -1)) {
    if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
      (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar4);
      lVar4 = *(int64_t *)(unaff_RBX + 0x2e50);
    }
    lVar3 = SYSTEM_DATA_MANAGER_A;
    if (lVar4 != 0) {
      *(int64_t *)(unaff_RBX + 0x2e48) = unaff_RSI;
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 0x3a8);
        *piVar1 = *piVar1 + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(lVar4,SYSTEM_DATA_MANAGER_B);
    }
  }
  lVar4 = SYSTEM_DATA_MANAGER_A;
  *unaff_R15 = (char)unaff_RSI;
  if (((*(int64_t *)(unaff_RBP + 0x408) != 0) && ((*(byte *)(unaff_RBP + 0x432) & 2) != 0)) &&
     (lVar3 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x408) + 0x68), lVar3 != 0)) {
    fVar5 = *(float *)(unaff_RBP + 0x11c);
    fVar2 = *(float *)(unaff_RBP + 0x74);
    *(float *)(lVar3 + 0x118) =
         (*(float *)(unaff_RBP + 0x118) + *(float *)(unaff_RBP + 0x70)) - *(float *)(lVar3 + 0x70);
    *(float *)(lVar3 + 0x11c) = (fVar5 + fVar2) - *(float *)(lVar3 + 0x74);
  }
  *(int *)(unaff_RDI + 0x1ad0) = *(int *)(unaff_RDI + 0x1ad0) + -1;
  if ((*(uint *)(unaff_RBP + 0xc) & 0x4000000) != 0) {
    *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  }
  if (*(int *)(unaff_RDI + 0x1ad0) != 0) {
    unaff_RSI = *(int64_t *)
                 (*(int64_t *)(unaff_RDI + 0x1ad8) + -8 +
                 (int64_t)*(int *)(unaff_RDI + 0x1ad0) * 8);
  }
  *(int64_t *)(lVar4 + 0x1af8) = unaff_RSI;
  if (unaff_RSI != 0) {
    fVar5 = *(float *)(lVar4 + 0x19fc) * *(float *)(unaff_RSI + 0x2d8) *
            *(float *)(unaff_RSI + 0x2dc);
    *(float *)(lVar4 + 0x1a10) = fVar5;
    *(float *)(lVar4 + 0x19f8) = fVar5;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar3 != 0) {
      *(int32_t *)(lVar3 + 0x54) = *(int32_t *)(lVar4 + 0x1a90);
    }
    if (((*(int64_t *)(lVar4 + 0x1c78) != lVar3) &&
        (*(int64_t *)(lVar4 + 0x1c78) = lVar3, lVar3 != 0)) &&
       (*(code **)(lVar4 + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(lVar4 + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18012d11e(void)
void FUN_18012d11e(void)

{
  float fVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar3;
  
  if (((*(int64_t *)(unaff_RBP + 0x408) != 0) && ((*(byte *)(unaff_RBP + 0x432) & 2) != 0)) &&
     (lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x408) + 0x68), lVar2 != 0)) {
    fVar3 = *(float *)(unaff_RBP + 0x11c);
    fVar1 = *(float *)(unaff_RBP + 0x74);
    *(float *)(lVar2 + 0x118) =
         (*(float *)(unaff_RBP + 0x118) + *(float *)(unaff_RBP + 0x70)) - *(float *)(lVar2 + 0x70);
    *(float *)(lVar2 + 0x11c) = (fVar3 + fVar1) - *(float *)(lVar2 + 0x74);
  }
  *(int *)(unaff_RDI + 0x1ad0) = *(int *)(unaff_RDI + 0x1ad0) + -1;
  if ((*(uint *)(unaff_RBP + 0xc) & 0x4000000) != 0) {
    *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  }
  if (*(int *)(unaff_RDI + 0x1ad0) != 0) {
    unaff_RSI = *(int64_t *)
                 (*(int64_t *)(unaff_RDI + 0x1ad8) + -8 +
                 (int64_t)*(int *)(unaff_RDI + 0x1ad0) * 8);
  }
  *(int64_t *)(unaff_RBX + 0x1af8) = unaff_RSI;
  if (unaff_RSI != 0) {
    fVar3 = *(float *)(unaff_RBX + 0x19fc) * *(float *)(unaff_RSI + 0x2d8) *
            *(float *)(unaff_RSI + 0x2dc);
    *(float *)(unaff_RBX + 0x1a10) = fVar3;
    *(float *)(unaff_RBX + 0x19f8) = fVar3;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar2 != 0) {
      *(int32_t *)(lVar2 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
    }
    if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar2) &&
        (*(int64_t *)(unaff_RBX + 0x1c78) = lVar2, lVar2 != 0)) &&
       (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(unaff_RBX + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18012d123(void)
void FUN_18012d123(void)

{
  float fVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar3;
  
  if (((*(int64_t *)(unaff_RBP + 0x408) != 0) && ((*(byte *)(unaff_RBP + 0x432) & 2) != 0)) &&
     (lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x408) + 0x68), lVar2 != 0)) {
    fVar3 = *(float *)(unaff_RBP + 0x11c);
    fVar1 = *(float *)(unaff_RBP + 0x74);
    *(float *)(lVar2 + 0x118) =
         (*(float *)(unaff_RBP + 0x118) + *(float *)(unaff_RBP + 0x70)) - *(float *)(lVar2 + 0x70);
    *(float *)(lVar2 + 0x11c) = (fVar3 + fVar1) - *(float *)(lVar2 + 0x74);
  }
  *(int *)(unaff_RDI + 0x1ad0) = *(int *)(unaff_RDI + 0x1ad0) + -1;
  if ((*(uint *)(unaff_RBP + 0xc) & 0x4000000) != 0) {
    *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  }
  if (*(int *)(unaff_RDI + 0x1ad0) != 0) {
    unaff_RSI = *(int64_t *)
                 (*(int64_t *)(unaff_RDI + 0x1ad8) + -8 +
                 (int64_t)*(int *)(unaff_RDI + 0x1ad0) * 8);
  }
  *(int64_t *)(unaff_RBX + 0x1af8) = unaff_RSI;
  if (unaff_RSI != 0) {
    fVar3 = *(float *)(unaff_RBX + 0x19fc) * *(float *)(unaff_RSI + 0x2d8) *
            *(float *)(unaff_RSI + 0x2dc);
    *(float *)(unaff_RBX + 0x1a10) = fVar3;
    *(float *)(unaff_RBX + 0x19f8) = fVar3;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar2 != 0) {
      *(int32_t *)(lVar2 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
    }
    if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar2) &&
        (*(int64_t *)(unaff_RBX + 0x1c78) = lVar2, lVar2 != 0)) &&
       (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(unaff_RBX + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18012d18f(void)
void FUN_18012d18f(void)

{
  int64_t lVar1;
  int in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar2;
  
  *(int *)(unaff_RDI + 0x1bc0) = *(int *)(unaff_RDI + 0x1bc0) + -1;
  if (in_EAX != 0) {
    unaff_RSI = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1ad8) + -8 + (int64_t)in_EAX * 8);
  }
  *(int64_t *)(unaff_RBX + 0x1af8) = unaff_RSI;
  if (unaff_RSI != 0) {
    fVar2 = *(float *)(unaff_RBX + 0x19fc) * *(float *)(unaff_RSI + 0x2d8) *
            *(float *)(unaff_RSI + 0x2dc);
    *(float *)(unaff_RBX + 0x1a10) = fVar2;
    *(float *)(unaff_RBX + 0x19f8) = fVar2;
  }
  if (*(int64_t *)(unaff_RDI + 0x1af8) != 0) {
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x28);
    if (lVar1 != 0) {
      *(int32_t *)(lVar1 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
    }
    if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar1) &&
        (*(int64_t *)(unaff_RBX + 0x1c78) = lVar1, lVar1 != 0)) &&
       (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(unaff_RBX + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void FUN_18012d1ed(int64_t param_1)
void FUN_18012d1ed(int64_t param_1)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(int32_t *)(lVar1 + 0x54) = *(int32_t *)(unaff_RBX + 0x1a90);
  }
  if (((*(int64_t *)(unaff_RBX + 0x1c78) != lVar1) &&
      (*(int64_t *)(unaff_RBX + 0x1c78) = lVar1, lVar1 != 0)) &&
     (*(code **)(unaff_RBX + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_RBX + 0x15c0))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d230(int64_t param_1)
void FUN_18012d230(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  
  lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
  lVar2 = *(int64_t *)(lVar1 + -8 + (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0) * 8);
  if (((lVar2 != param_1) && (*(int64_t *)(lVar2 + 0x3a0) != param_1)) &&
     (iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0) + -2, -1 < iVar4)) {
    lVar2 = (int64_t)iVar4;
    plVar3 = (int64_t *)(lVar1 + lVar2 * 8);
    do {
      if (*plVar3 == param_1) {
                    // WARNING: Subroutine does not return
        memmove(lVar1 + (int64_t)iVar4 * 8,lVar1 + (int64_t)(iVar4 + 1) * 8,
                (int64_t)((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0) - iVar4) + -1) << 3);
      }
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d2e0(int64_t param_1)
void FUN_18012d2e0(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  uVar2 = 0;
  if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != param_1) {
    *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) = param_1;
    if ((param_1 != 0) && (*(char *)(lVar1 + 0x1d07) != '\0')) {
      *(int8_t *)(lVar1 + 0x1d05) = 1;
    }
    *(int8_t *)(lVar1 + 0x1d09) = 0;
    if (param_1 != 0) {
      uVar2 = *(int32_t *)(param_1 + 0x3c8);
    }
    *(int32_t *)(lVar1 + 0x1ca0) = uVar2;
    *(int8_t *)(lVar1 + 0x1d04) = 0;
    *(int32_t *)(lVar1 + 0x1cfc) = 0;
  }
  if (param_1 != 0) {
    if ((*(int64_t *)(param_1 + 0x408) != 0) &&
       (lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x408) + 0x30), lVar3 != 0)) {
      *(int32_t *)(lVar3 + 0x18) = *(int32_t *)(param_1 + 8);
      lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x408) + 0x30);
      *(int32_t *)(lVar3 + 0x14) = *(int32_t *)(lVar3 + 0x18);
    }
    if (*(int64_t *)(param_1 + 0x3a0) != 0) {
      param_1 = *(int64_t *)(param_1 + 0x3a0);
    }
    if (((((*(uint *)(param_1 + 0xc) & 0x4000000) != 0) && (*(int *)(lVar1 + 0x1b2c) != 0)) &&
        (*(int64_t *)(lVar1 + 0x1b50) != 0)) &&
       (*(int64_t *)(*(int64_t *)(lVar1 + 0x1b50) + 0x3a0) != param_1)) {
      *(int16_t *)(lVar1 + 0x1b3c) = 1;
      *(int32_t *)(lVar1 + 0x1b38) = 0;
      *(int8_t *)(lVar1 + 0x1b3e) = 0;
      *(int32_t *)(lVar1 + 0x1b2c) = 0;
      *(int32_t *)(lVar1 + 0x1b44) = 0;
      *(uint64_t *)(lVar1 + 0x1b50) = 0;
    }
    if ((*(int64_t *)(*(int64_t *)(lVar1 + 0x1ab8) + -8 + (int64_t)*(int *)(lVar1 + 0x1ab0) * 8)
         != param_1) && (iVar5 = *(int *)(lVar1 + 0x1ab0) + -2, -1 < iVar5)) {
      lVar3 = (int64_t)iVar5;
      plVar4 = (int64_t *)(*(int64_t *)(lVar1 + 0x1ab8) + lVar3 * 8);
      do {
        if (*plVar4 == param_1) {
                    // WARNING: Subroutine does not return
          memmove(*(int64_t *)(lVar1 + 0x1ab8) + (int64_t)iVar5 * 8,
                  *(int64_t *)(lVar1 + 0x1ab8) + (int64_t)(iVar5 + 1) * 8,
                  (int64_t)((*(int *)(lVar1 + 0x1ab0) - iVar5) + -1) << 3);
        }
        iVar5 = iVar5 + -1;
        plVar4 = plVar4 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    if ((*(uint *)(param_1 + 0xc) & 0x2000) == 0) {
      FUN_18012d230(param_1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d4c0(int param_1)
void FUN_18012d4c0(int param_1)

{
  int *piVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fStackX_10;
  
  lVar8 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar8 + 0x1af8);
  fVar9 = (float)func_0x00018012d6a0();
  uVar6 = param_1 - 1;
  fVar10 = (float)(int)((fVar9 - (float)(int)uVar6 * *(float *)(lVar8 + 0x1674)) / (float)param_1);
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fStackX_10 = (float)(int)(fVar9 - (fVar10 + *(float *)(lVar8 + 0x1674)) * (float)(int)uVar6);
  if (fStackX_10 <= 1.0) {
    fStackX_10 = 1.0;
  }
  piVar1 = (int *)(lVar2 + 0x1c8);
  iVar5 = *piVar1;
  iVar4 = *(int *)(lVar2 + 0x1cc);
  if (iVar5 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = iVar5 + 1;
    if (iVar5 + 1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_18011dbd0(piVar1,iVar3);
    iVar5 = *piVar1;
  }
  *(float *)(*(int64_t *)(lVar2 + 0x1d0) + (int64_t)iVar5 * 4) = fStackX_10;
  iVar5 = *piVar1 + 1;
  *piVar1 = iVar5;
  if (0 < (int)uVar6) {
    uVar7 = (uint64_t)uVar6;
    do {
      iVar4 = *(int *)(lVar2 + 0x1cc);
      if (iVar5 == iVar4) {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        iVar3 = iVar5 + 1;
        if (iVar5 + 1 < iVar4) {
          iVar3 = iVar4;
        }
        FUN_18011dbd0(piVar1,iVar3);
        iVar5 = *piVar1;
      }
      *(float *)(*(int64_t *)(lVar2 + 0x1d0) + (int64_t)iVar5 * 4) = fVar10;
      iVar5 = *piVar1 + 1;
      *piVar1 = iVar5;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(int32_t *)(lVar2 + 0x1ac) =
       *(int32_t *)(*(int64_t *)(lVar2 + 0x1d0) + -4 + (int64_t)iVar5 * 4);
  return;
}





// 函数: void FUN_18012d5bc(void)
void FUN_18012d5bc(void)

{
  int in_EAX;
  uint unaff_EBX;
  int64_t unaff_RBP;
  uint64_t uVar1;
  int *unaff_RDI;
  int32_t in_stack_00000040;
  
  uVar1 = (uint64_t)unaff_EBX;
  do {
    if (in_EAX == unaff_RDI[1]) {
      FUN_18011dbd0();
      in_EAX = *unaff_RDI;
    }
    *(int32_t *)(*(int64_t *)(unaff_RDI + 2) + (int64_t)in_EAX * 4) = in_stack_00000040;
    in_EAX = *unaff_RDI + 1;
    *unaff_RDI = in_EAX;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *(int32_t *)(unaff_RBP + 0x1ac) =
       *(int32_t *)(*(int64_t *)(unaff_RBP + 0x1d0) + -4 + (int64_t)in_EAX * 4);
  return;
}





// 函数: void FUN_18012d615(void)
void FUN_18012d615(void)

{
  int in_EAX;
  int64_t unaff_RBP;
  
  *(int32_t *)(unaff_RBP + 0x1ac) =
       *(int32_t *)(*(int64_t *)(unaff_RBP + 0x1d0) + -4 + (int64_t)in_EAX * 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d7c0(int64_t param_1)
void FUN_18012d7c0(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int *piVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  uint *puVar12;
  int64_t *plVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int64_t lStackX_8;
  int32_t uStack_24;
  uint64_t uStack_20;
  
  lVar8 = SYSTEM_DATA_MANAGER_A;
  lStackX_8 = param_1;
  if ((param_1 == 0) && (lStackX_8 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0xb0), lStackX_8 == 0)) {
    lStackX_8 = **(int64_t **)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0xa0) + 0x48);
  }
  lVar4 = lStackX_8;
  func_0x00018012d740(lStackX_8);
  FUN_18013d860(lVar8 + 0x1ba0,&lStackX_8);
  uVar2 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x58) + 8);
  piVar3 = *(int **)(*(int64_t *)(lVar8 + 0x1af8) + 0x2e8);
  iVar10 = piVar3[0x1c];
  if (iVar10 == piVar3[0x1d]) {
    FUN_18011dc70(piVar3 + 0x1c);
    iVar10 = piVar3[0x1c];
  }
  *(uint64_t *)(*(int64_t *)(piVar3 + 0x1e) + (int64_t)iVar10 * 8) = uVar2;
  piVar3[0x1c] = piVar3[0x1c] + 1;
  piVar16 = (int *)0x0;
  if (piVar3[0x1c] != 0) {
    piVar16 = *(int **)(*(int64_t *)(piVar3 + 0x1e) + -8 + (int64_t)piVar3[0x1c] * 8);
  }
  iVar10 = *piVar3;
  if (iVar10 != 0) {
    piVar15 = (int *)(*(int64_t *)(piVar3 + 2) + -0x30 + (int64_t)iVar10 * 0x30);
    if ((piVar15 != (int *)0x0) &&
       (((*piVar15 == 0 || (*(int **)(piVar15 + 6) == piVar16)) && (*(int64_t *)(piVar15 + 8) == 0)
        ))) {
      piVar14 = piVar15 + -0xc;
      if (iVar10 < 2) {
        piVar14 = (int *)0x0;
      }
      if (((*piVar15 == 0) && (piVar14 != (int *)0x0)) && (*(int **)(piVar14 + 6) == piVar16)) {
        if (piVar3[0x18] == 0) {
          plVar13 = (int64_t *)(*(int64_t *)(piVar3 + 0xe) + 0x18);
        }
        else {
          plVar13 = (int64_t *)
                    ((int64_t)(piVar3[0x18] + -1) * 0x10 + *(int64_t *)(piVar3 + 0x1a));
        }
        if (((*(int64_t *)(piVar14 + 1) == *plVar13) && (*(int64_t *)(piVar14 + 3) == plVar13[1]))
           && (*(int64_t *)(piVar14 + 8) == 0)) {
          *piVar3 = iVar10 + -1;
          return;
        }
      }
      *(int **)(piVar15 + 6) = piVar16;
      return;
    }
  }
  if (piVar3[0x18] == 0) {
    puVar12 = (uint *)(*(int64_t *)(piVar3 + 0xe) + 0x18);
  }
  else {
    puVar12 = (uint *)((int64_t)(piVar3[0x18] + -1) * 0x10 + *(int64_t *)(piVar3 + 0x1a));
  }
  uVar6 = *puVar12;
  lVar8 = *(int64_t *)(puVar12 + 1);
  uVar7 = puVar12[3];
  if (piVar3[0x1c] == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(uint64_t *)(*(int64_t *)(piVar3 + 0x1e) + -8 + (int64_t)piVar3[0x1c] * 8);
  }
  iVar10 = *piVar3;
  iVar9 = piVar3[1];
  if (iVar10 == iVar9) {
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    iVar5 = iVar10 + 1;
    if (iVar10 + 1 < iVar9) {
      iVar5 = iVar9;
    }
    FUN_18013e760(piVar3,iVar5);
    iVar10 = *piVar3;
  }
  lVar11 = (int64_t)iVar10;
  lVar4 = *(int64_t *)(piVar3 + 2);
  plVar13 = (int64_t *)(lVar4 + lVar11 * 0x30);
  *plVar13 = (uint64_t)uVar6 << 0x20;
  plVar13[1] = lVar8;
  puVar1 = (uint64_t *)(lVar4 + 0x10 + lVar11 * 0x30);
  *puVar1 = CONCAT44(uStack_24,uVar7);
  puVar1[1] = uStack_20;
  puVar1 = (uint64_t *)(lVar4 + 0x20 + lVar11 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *piVar3 = *piVar3 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



