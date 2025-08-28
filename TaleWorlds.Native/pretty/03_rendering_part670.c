#include "TaleWorlds.Native.Split.h"

// 03_rendering_part670.c - 6 个函数

// 函数: void FUN_18064e400(int64_t *param_1)
void FUN_18064e400(int64_t *param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  bool bVar10;
  
  if ((param_1 != (int64_t *)0x0) && (param_1 != (int64_t *)&processed_var_7056_ptr)) {
    plVar3 = *(int64_t **)(*param_1 + 0x10);
    if (plVar3 == param_1) {
      FUN_18064e0d0(param_1,2);
    }
    else if (param_1[0x179] != 0) {
      FUN_18064d420();
      plVar9 = param_1 + 0x82;
      lVar8 = 0x4b;
      do {
        lVar5 = *plVar9;
        plVar2 = (int64_t *)((int64_t)plVar9 + ((int64_t)plVar3 - (int64_t)param_1));
        lVar6 = 0;
        if (lVar5 != 0) {
          do {
            *(int64_t **)(lVar5 + 0x30) = plVar3;
            do {
              while( true ) {
                uVar7 = *(uint64_t *)(lVar5 + 0x28);
                uVar4 = (uint)uVar7 & 3;
                if (uVar4 != 1) break;
                _Thrd_yield();
              }
              if (((uVar7 & 3) == 0) || (uVar4 == 3)) break;
              LOCK();
              bVar10 = uVar7 == *(uint64_t *)(lVar5 + 0x28);
              if (bVar10) {
                *(uint64_t *)(lVar5 + 0x28) = uVar7 & 0xfffffffffffffffc;
              }
              UNLOCK();
            } while (!bVar10);
            lVar5 = *(int64_t *)(lVar5 + 0x38);
            lVar6 = lVar6 + 1;
          } while (lVar5 != 0);
          if (plVar2[1] == 0) {
            *plVar2 = *plVar9;
            plVar2[1] = plVar9[1];
            FUN_18064cf20(plVar3,plVar2);
          }
          else {
            *(int64_t *)(plVar2[1] + 0x38) = *plVar9;
            *(int64_t *)(*plVar9 + 0x40) = plVar2[1];
            plVar2[1] = plVar9[1];
          }
        }
        plVar3[0x179] = plVar3[0x179] + lVar6;
        plVar9 = plVar9 + 3;
        param_1[0x179] = param_1[0x179] - lVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      FUN_18064d420(param_1);
      FUN_18064e2d0(param_1);
      if (((param_1 == (int64_t *)0x0) || (param_1 == (int64_t *)&processed_var_7056_ptr)) ||
         (lVar8 = *param_1, *(int64_t **)(lVar8 + 0x10) == param_1)) {
        return;
      }
      if (param_1 ==
          *(int64_t **)
           (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x10))
      {
        func_0x00018064fb90();
        lVar8 = *param_1;
      }
      plVar9 = *(int64_t **)(lVar8 + 0x18);
      plVar3 = (int64_t *)0x0;
      while (plVar2 = plVar9, plVar2 != param_1) {
        if (plVar2 == (int64_t *)0x0) goto LAB_18064e3ed;
        plVar3 = plVar2;
        plVar9 = (int64_t *)plVar2[0x17c];
      }
      if (plVar3 != (int64_t *)0x0) {
        plVar3[0x17c] = param_1[0x17c];
        uVar7 = (uint64_t)param_1 & 0xffffffffffc00000;
        if (uVar7 != 0) {
          lVar8 = uVar7 + 0x80 + ((int64_t)param_1 - uVar7 >> 0x10) * 0x50;
          lVar8 = lVar8 - (uint64_t)*(uint *)(lVar8 + 4);
          if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar8 + 0xe) == '\0')) {
            *param_1 = *(int64_t *)(lVar8 + 0x20);
            *(int64_t **)(lVar8 + 0x20) = param_1;
            piVar1 = (int *)(lVar8 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              SystemDataCleaner();
              return;
            }
          }
          else {
            func_0x00018064e870(uVar7,CONCAT71(0xff000000,
                                               *(void ***)(uVar7 + 0x70) == &ExceptionList),param_1,
                                uVar7,0xfffffffffffffffe);
          }
        }
        return;
      }
      *(int64_t *)(lVar8 + 0x18) = param_1[0x17c];
LAB_18064e3ed:
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(param_1);
    }
    FUN_18064e350(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064e428(int64_t param_1)
void FUN_18064e428(int64_t param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  uint64_t unaff_RBX;
  int64_t lVar6;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar9;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t *plVar10;
  int64_t *unaff_R15;
  bool bVar11;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  lVar5 = *(int64_t *)(in_RAX + 0x10);
  if (lVar5 == param_1) {
    FUN_18064e0d0(param_1,2);
  }
  else if (*(int64_t *)(param_1 + 0xbc8) != 0) {
    *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
    *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
    *(uint64_t *)(in_R11 + -0x20) = unaff_R13;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
    FUN_18064d420();
    plVar10 = unaff_R15 + 0x82;
    lVar9 = 0x4b;
    do {
      lVar6 = *plVar10;
      plVar2 = (int64_t *)((int64_t)plVar10 + (lVar5 - (int64_t)unaff_R15));
      lVar7 = 0;
      if (lVar6 != 0) {
        do {
          *(int64_t *)(lVar6 + 0x30) = lVar5;
          do {
            while( true ) {
              uVar8 = *(uint64_t *)(lVar6 + 0x28);
              uVar4 = (uint)uVar8 & 3;
              if (uVar4 != 1) break;
              _Thrd_yield();
            }
            if (((uVar8 & 3) == 0) || (uVar4 == 3)) break;
            LOCK();
            bVar11 = uVar8 == *(uint64_t *)(lVar6 + 0x28);
            if (bVar11) {
              *(uint64_t *)(lVar6 + 0x28) = uVar8 & 0xfffffffffffffffc;
            }
            UNLOCK();
          } while (!bVar11);
          lVar6 = *(int64_t *)(lVar6 + 0x38);
          lVar7 = lVar7 + 1;
        } while (lVar6 != 0);
        if (plVar2[1] == 0) {
          *plVar2 = *plVar10;
          plVar2[1] = plVar10[1];
          FUN_18064cf20(lVar5,plVar2);
        }
        else {
          *(int64_t *)(plVar2[1] + 0x38) = *plVar10;
          *(int64_t *)(*plVar10 + 0x40) = plVar2[1];
          plVar2[1] = plVar10[1];
        }
      }
      *(int64_t *)(lVar5 + 0xbc8) = *(int64_t *)(lVar5 + 0xbc8) + lVar7;
      plVar10 = plVar10 + 3;
      unaff_R15[0x179] = unaff_R15[0x179] - lVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    FUN_18064d420();
    FUN_18064e2d0();
    if (((unaff_R15 == (int64_t *)0x0) || (unaff_R15 == (int64_t *)&processed_var_7056_ptr)) ||
       (lVar5 = *unaff_R15, *(int64_t **)(lVar5 + 0x10) == unaff_R15)) {
      return;
    }
    if (unaff_R15 ==
        *(int64_t **)
         (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x10)) {
      func_0x00018064fb90();
      lVar5 = *unaff_R15;
    }
    plVar2 = *(int64_t **)(lVar5 + 0x18);
    plVar10 = (int64_t *)0x0;
    while (plVar3 = plVar2, plVar3 != unaff_R15) {
      if (plVar3 == (int64_t *)0x0) goto LAB_18064e3ed;
      plVar10 = plVar3;
      plVar2 = (int64_t *)plVar3[0x17c];
    }
    if (plVar10 != (int64_t *)0x0) {
      plVar10[0x17c] = unaff_R15[0x17c];
      uVar8 = (uint64_t)unaff_R15 & 0xffffffffffc00000;
      if (uVar8 != 0) {
        lVar5 = uVar8 + 0x80 + ((int64_t)unaff_R15 - uVar8 >> 0x10) * 0x50;
        lVar5 = lVar5 - (uint64_t)*(uint *)(lVar5 + 4);
        if ((*(void ***)(uVar8 + 0x70) == &ExceptionList) && (*(char *)(lVar5 + 0xe) == '\0')) {
          *unaff_R15 = *(int64_t *)(lVar5 + 0x20);
          *(int64_t **)(lVar5 + 0x20) = unaff_R15;
          piVar1 = (int *)(lVar5 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            SystemDataCleaner();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar8,CONCAT71(0xff000000,*(void ***)(uVar8 + 0x70) == &ExceptionList)
                             );
        }
      }
      return;
    }
    *(int64_t *)(lVar5 + 0x18) = unaff_R15[0x17c];
LAB_18064e3ed:
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_18064e350();
  return;
}





// 函数: void FUN_18064e576(uint64_t param_1)
void FUN_18064e576(uint64_t param_1)

{
  FUN_18064e0d0(param_1,2);
  FUN_18064e350();
  return;
}





// 函数: void FUN_18064e58d(void)
void FUN_18064e58d(void)

{
  return;
}



uint64_t * FUN_18064e5a0(int64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  if (param_2 < 0x401) {
    lVar3 = *(int64_t *)(param_1 + 8 + (param_2 + 7 & 0xfffffffffffffff8));
    puVar1 = *(uint64_t **)(lVar3 + 0x10);
    if (puVar1 != (uint64_t *)0x0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(uint64_t *)(lVar3 + 0x10) = *puVar1;
      goto LAB_18064e5e0;
    }
  }
  puVar1 = (uint64_t *)FUN_18064ddd0(param_1,param_2);
LAB_18064e5e0:
  if ((param_3 == '\0') || (puVar1 == (uint64_t *)0x0)) {
    return puVar1;
  }
  lVar3 = ((int64_t)puVar1 - ((uint64_t)puVar1 & 0xffffffffffc00000) >> 0x10) * 0x50 + 0x80 +
          ((uint64_t)puVar1 & 0xffffffffffc00000);
  if (((*(byte *)((lVar3 - (uint64_t)*(uint *)(lVar3 + 4)) + 0xf) & 1) != 0) && (8 < param_2)) {
    *puVar1 = 0;
    return puVar1;
  }
  uVar2 = CoreEngineSystemCleanup(puVar1);
                    // WARNING: Subroutine does not return
  memset(puVar1,0,uVar2);
}



uint64_t * FUN_18064e5aa(int64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  if (param_2 < 0x401) {
    lVar3 = *(int64_t *)(param_1 + 8 + (param_2 + 7 & 0xfffffffffffffff8));
    puVar1 = *(uint64_t **)(lVar3 + 0x10);
    if (puVar1 != (uint64_t *)0x0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      *(uint64_t *)(lVar3 + 0x10) = *puVar1;
      goto LAB_18064e5e0;
    }
  }
  puVar1 = (uint64_t *)FUN_18064ddd0(param_1,param_2);
LAB_18064e5e0:
  if ((param_3 == '\0') || (puVar1 == (uint64_t *)0x0)) {
    return puVar1;
  }
  lVar3 = ((int64_t)puVar1 - ((uint64_t)puVar1 & 0xffffffffffc00000) >> 0x10) * 0x50 + 0x80 +
          ((uint64_t)puVar1 & 0xffffffffffc00000);
  if (((*(byte *)((lVar3 - (uint64_t)*(uint *)(lVar3 + 4)) + 0xf) & 1) != 0) && (8 < param_2)) {
    *puVar1 = 0;
    return puVar1;
  }
  uVar2 = CoreEngineSystemCleanup(puVar1);
                    // WARNING: Subroutine does not return
  memset(puVar1,0,uVar2);
}





// 函数: void FUN_18064e5ea(void)
void FUN_18064e5ea(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  
  if (unaff_RBX == (uint64_t *)0x0) {
    return;
  }
  lVar1 = ((int64_t)unaff_RBX - ((uint64_t)unaff_RBX & 0xffffffffffc00000) >> 0x10) * 0x50 + 0x80
          + ((uint64_t)unaff_RBX & 0xffffffffffc00000);
  if (((*(byte *)((lVar1 - (uint64_t)*(uint *)(lVar1 + 4)) + 0xf) & 1) != 0) && (8 < unaff_RDI)) {
    *unaff_RBX = 0;
    return;
  }
  CoreEngineSystemCleanup();
                    // WARNING: Subroutine does not return
  memset();
}





// 函数: void FUN_18064e639(uint64_t param_1,int64_t param_2)
void FUN_18064e639(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  char unaff_SIL;
  uint64_t unaff_RDI;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  *(uint64_t *)(param_2 + 0x10) = *unaff_RBX;
  if ((unaff_SIL == '\0') || (unaff_RBX == (uint64_t *)0x0)) {
    return;
  }
  lVar1 = ((int64_t)unaff_RBX - ((uint64_t)unaff_RBX & 0xffffffffffc00000) >> 0x10) * 0x50 + 0x80
          + ((uint64_t)unaff_RBX & 0xffffffffffc00000);
  if (((*(byte *)((lVar1 - (uint64_t)*(uint *)(lVar1 + 4)) + 0xf) & 1) != 0) && (8 < unaff_RDI)) {
    *unaff_RBX = 0;
    return;
  }
  CoreEngineSystemCleanup();
                    // WARNING: Subroutine does not return
  memset();
}





