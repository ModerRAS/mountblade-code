#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part087.c - 21 个函数

// 函数: void FUN_18088ffdf(void)
void FUN_18088ffdf(void)

{
  return;
}



uint64_t FUN_18088fff0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int8_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x75) = *(int8_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = FUN_18084ec10(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_180890040(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int8_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x74) = *(int8_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = FUN_18084ec60(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_180890090(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int32_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x70) = *(int32_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = FUN_18084ed10(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808900e0(int64_t param_1,int64_t param_2)
void FUN_1808900e0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int8_t auStack_278 [32];
  int64_t alStack_258 [2];
  int8_t *puStack_248;
  int iStack_240;
  int32_t uStack_23c;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
  iVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStack_258);
  if ((iVar2 == 0) && (*(int64_t *)(alStack_258[0] + 8) != 0)) {
    puStack_248 = auStack_238;
    iVar4 = 0;
    iStack_240 = 0;
    uStack_23c = 0xffffffc0;
    iVar2 = FUN_1808bf350(*(uint64_t *)(param_2 + 0x90),*(int64_t *)(alStack_258[0] + 8),
                          &puStack_248);
    if (iVar2 == 0) {
      if (0 < iStack_240) {
        lVar3 = 0;
        do {
          uVar1 = *(uint64_t *)(puStack_248 + lVar3);
          iVar2 = FUN_1808605e0(uVar1);
          if (iVar2 != 2) {
                    // WARNING: Subroutine does not return
            FUN_180862e00(uVar1,1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < iStack_240);
      }
      FUN_18085dbf0(&puStack_248);
    }
    else {
      FUN_18085dbf0(&puStack_248);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_278);
}





// 函数: void FUN_18089011d(void)
void FUN_18089011d(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t lVar3;
  int iVar4;
  int8_t *in_stack_00000030;
  int iStack0000000000000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000240;
  
  if (*(int64_t *)(in_RAX + 8) != 0) {
    in_stack_00000030 = &stack0x00000040;
    iVar4 = 0;
    iStack0000000000000038 = 0;
    uStack000000000000003c = 0xffffffc0;
    iVar2 = FUN_1808bf350(*(uint64_t *)(unaff_RBX + 0x90),*(int64_t *)(in_RAX + 8),
                          &stack0x00000030);
    if (iVar2 == 0) {
      if (0 < iStack0000000000000038) {
        lVar3 = 0;
        do {
          uVar1 = *(uint64_t *)(in_stack_00000030 + lVar3);
          iVar2 = FUN_1808605e0(uVar1);
          if (iVar2 != 2) {
                    // WARNING: Subroutine does not return
            FUN_180862e00(uVar1,1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < iStack0000000000000038);
      }
      FUN_18085dbf0(&stack0x00000030);
    }
    else {
      FUN_18085dbf0(&stack0x00000030);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000240 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18089022b(void)
void FUN_18089022b(void)

{
  uint64_t in_stack_00000240;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000240 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180890246(void)
void FUN_180890246(void)

{
  int64_t unaff_RBX;
  uint64_t in_stack_00000240;
  
  if ((*(uint *)(unaff_RBX + 0x2d8) >> 7 & 1) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180862e00();
  }
  FUN_18085dbf0(&stack0x00000030);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000240 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180890270(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t in_stack_00000008;
  char acStackX_18 [16];
  
  uVar4 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&stack0x00000008);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar2 = *(int64_t *)(in_stack_00000008 + 8);
  if ((lVar2 == 0) || (*(int64_t *)(lVar2 + 0x48) != in_stack_00000008)) {
    return 0x1c;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x38);
  if (lVar2 == 0) {
    return 0x1f;
  }
  if (*(int *)(lVar2 + 0xe4) == -1) {
    uVar4 = FUN_180853000(lVar2,acStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar5 = func_0x000180851460(lVar2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((char)uVar4 == (char)uVar5) {
      if (acStackX_18[0] == (char)uVar5) {
        plVar11 = (int64_t *)(lVar1 + 0x4d8);
        uVar8 = 0;
        iVar7 = *(int *)(lVar1 + 0x4e4);
        if (0 < iVar7) {
          plVar6 = (int64_t *)*plVar11;
          uVar10 = uVar8;
          do {
            if (*plVar6 == lVar2) {
              if (-1 < (int)uVar10) {
                return 0;
              }
              break;
            }
            uVar10 = (uint64_t)((int)uVar10 + 1);
            uVar8 = uVar8 + 1;
            plVar6 = plVar6 + 1;
          } while ((int64_t)uVar8 < (int64_t)iVar7);
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(lVar1 + 0x4e8) < iVar7) {
          iVar9 = (int)((float)*(int *)(lVar1 + 0x4e8) * 1.5);
          iVar3 = iVar7;
          if (iVar7 <= iVar9) {
            iVar3 = iVar9;
          }
          if (iVar3 < 8) {
            iVar9 = 8;
          }
          else if (iVar9 < iVar7) {
            iVar9 = iVar7;
          }
          iVar7 = FUN_1808c17c0(plVar11,iVar9);
          if (iVar7 != 0) {
            return 0;
          }
        }
        *(int64_t *)(*plVar11 + (int64_t)*(int *)(lVar1 + 0x4e4) * 8) = lVar2;
        *(int *)(lVar1 + 0x4e4) = *(int *)(lVar1 + 0x4e4) + 1;
        *(int *)(lVar1 + 0x4e0) = *(int *)(lVar1 + 0x4e0) + 1;
      }
      else {
        uVar4 = FUN_180851490(lVar1 + 0x368,lVar2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}



uint64_t FUN_1808902b0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lStackX_8;
  int64_t lStackX_18;
  
  uVar6 = func_0x00018088c530(*(int32_t *)(param_1 + 0x18),&lStackX_18);
  iVar4 = (int)uVar6;
  if (iVar4 == 0) {
    plVar10 = (int64_t *)0x0;
    plVar9 = plVar10;
    if (lStackX_18 != 0) {
      plVar9 = (int64_t *)(lStackX_18 + -8);
    }
    uVar6 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_18);
    iVar4 = (int)uVar6;
    if (iVar4 == 0) {
      lStackX_8 = 0;
      uVar5 = FUN_18088fb40(*(uint64_t *)(param_2 + 0x90),*(int64_t *)(lStackX_18 + 8) + 0x10,
                            &lStackX_8);
      if (uVar5 != 0) {
        FUN_180867d60(plVar9);
        return (uint64_t)uVar5;
      }
      if (((*(uint *)(*(int64_t *)(lStackX_18 + 8) + 0xf8) >> 2 & 1) == 0) &&
         (uVar6 = func_0x000180861a30(lStackX_8), (int)uVar6 != 0)) {
        return uVar6;
      }
      plVar1 = (int64_t *)(lStackX_8 + 0x240);
      plVar7 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar7 = plVar10;
      }
      plVar8 = plVar10;
      plVar2 = plVar10;
      plVar3 = plVar10;
      if (plVar7 != (int64_t *)0x0) {
        plVar8 = plVar7 + 3;
      }
      while( true ) {
        if (plVar8 == plVar1) {
          *(int64_t **)(lStackX_8 + 0x80) = plVar9;
          func_0x00018085eef0(lStackX_8,plVar9);
          plVar9[2] = lStackX_8;
          uVar6 = FUN_18085ff30(lStackX_8);
          if ((int)uVar6 == 0) {
            return 0;
          }
          return uVar6;
        }
        if ((int)plVar9[5] <= (int)plVar3) {
          return 0x1c;
        }
        plVar7 = plVar8 + 4;
        if (plVar8 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x38;
        }
        *(int64_t *)(plVar9[4] + 8 + (int64_t)plVar2) = *plVar7;
        if (plVar8 == plVar1) break;
        plVar7 = (int64_t *)(*plVar8 + -0x18);
        if (*plVar8 == 0) {
          plVar7 = plVar10;
        }
        plVar8 = plVar10;
        if (plVar7 != (int64_t *)0x0) {
          plVar8 = plVar7 + 3;
        }
        plVar2 = plVar2 + 3;
        plVar3 = (int64_t *)(uint64_t)((int)plVar3 + 1);
      }
      return 0x1c;
    }
  }
  if (iVar4 == 0x1e) {
    return 0;
  }
  return uVar6;
}



uint64_t FUN_180890450(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t alStackX_8 [2];
  
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  lVar1 = alStackX_8[0];
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(int *)(alStackX_8[0] + 0x4c) = *(int *)(alStackX_8[0] + 0x4c) + 1;
  if (*(int *)(alStackX_8[0] + 0x58) + *(int *)(alStackX_8[0] + 0x54) +
      *(int *)(alStackX_8[0] + 0x4c) == 1) {
    alStackX_8[0] = 0;
    iVar2 = FUN_18088c740(alStackX_8);
    if (iVar2 == 0) {
      iVar2 = FUN_1808c7b30(lVar1,*(uint64_t *)(lVar1 + 8),*(uint64_t *)(param_2 + 0x90),
                            *(uint64_t *)(param_2 + 800));
      if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemProcessor(alStackX_8);
      }
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemProcessor(alStackX_8);
  }
  return 0;
}



uint64_t FUN_180890490(int64_t param_1)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t alStackX_8 [4];
  
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar3 == 0) {
    plVar4 = *(int64_t **)(alStackX_8[0] + 0x20);
    while ((*(int64_t **)(alStackX_8[0] + 0x20) <= plVar4 &&
           (plVar4 < *(int64_t **)(alStackX_8[0] + 0x20) + *(int *)(alStackX_8[0] + 0x28)))) {
      lVar2 = *plVar4;
      plVar4 = plVar4 + 1;
      if ((*(int64_t *)(lVar2 + 0x18) == *(int64_t *)(alStackX_8[0] + 8)) &&
         (lVar2 = *(int64_t *)(lVar2 + 0x10), lVar2 != 0)) {
        puVar1 = (uint *)(lVar2 + 0x2d8);
        *puVar1 = *puVar1 | 4;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180890500(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t alStackX_8 [2];
  
  uVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  lVar1 = alStackX_8[0];
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(alStackX_8[0] + 0x4c) < 1) {
    return 0x1c;
  }
  iVar3 = *(int *)(alStackX_8[0] + 0x4c) + -1;
  *(int *)(alStackX_8[0] + 0x4c) = iVar3;
  if (*(int *)(alStackX_8[0] + 0x58) + *(int *)(alStackX_8[0] + 0x54) + iVar3 != 0) {
    return 0;
  }
  alStackX_8[0] = 0;
  iVar3 = FUN_18088c740(alStackX_8);
  if (iVar3 == 0) {
    iVar3 = FUN_1808c7dc0(lVar1,0);
    if (iVar3 == 0) {
      iVar3 = FUN_18088ac50(param_2);
      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemProcessor(alStackX_8);
      }
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStackX_8);
}



uint64_t FUN_180890540(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t alStackX_8 [4];
  
  uVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (alStackX_8[0] != 0) {
    alStackX_8[0] = alStackX_8[0] + -8;
  }
  lVar1 = *(int64_t *)(alStackX_8[0] + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 500) = *(int *)(lVar1 + 500) + 1;
    if ((*(char *)(lVar1 + 0x204) != '\0') && (uVar2 = FUN_1808552c0(), (int)uVar2 != 0)) {
      return uVar2;
    }
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_180890590(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    if (lStackX_8 == 0) {
      lStackX_8 = 0;
    }
    else {
      lStackX_8 = lStackX_8 + -8;
    }
    if (*(int64_t *)(lStackX_8 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808905ae(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
  }
  return 0;
}



uint64_t FUN_18089062a(char param_1)

{
  if (param_1 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180862e00();
  }
  return 0;
}





// 函数: void FUN_18089064b(void)
void FUN_18089064b(void)

{
  return;
}



uint64_t FUN_180890650(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890673(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_18089069c(void)
void FUN_18089069c(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_1808906f0(void)
void FUN_1808906f0(void)

{
  return;
}



uint64_t FUN_180890700(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890723(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_18089074c(void)
void FUN_18089074c(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_18089079f(void)
void FUN_18089079f(void)

{
  return;
}



uint64_t FUN_1808907b0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [2];
  int64_t alStackX_18 [2];
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar1 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    alStackX_8[0] = 0;
    uVar1 = FUN_1808681d0(alStackX_18[0],param_1 + 0x18,alStackX_8);
    if ((int)uVar1 == 0) {
      if (alStackX_8[0] != 0) {
        if (*(int64_t *)(alStackX_8[0] + 8) == 0) {
          return 0x1c;
        }
        uVar1 = FUN_1808d73b0(*(int64_t *)(alStackX_8[0] + 8),*(int32_t *)(param_1 + 0x20),
                              *(int8_t *)(param_1 + 0x24));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_180890830(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [2];
  int64_t alStackX_18 [2];
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar1 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    alStackX_8[0] = 0;
    uVar1 = FUN_1808681d0(alStackX_18[0],param_1 + 0x20,alStackX_8);
    if ((int)uVar1 == 0) {
      if (alStackX_8[0] != 0) {
        if (*(int64_t *)(alStackX_8[0] + 8) == 0) {
          return 0x1c;
        }
        uVar1 = FUN_1808d73b0(*(int64_t *)(alStackX_8[0] + 8),*(int32_t *)(param_1 + 0x18),
                              *(int8_t *)(param_1 + 0x1c));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001808d7494)
// WARNING: Removing unreachable block (ram,0x0001808d74a4)
// WARNING: Removing unreachable block (ram,0x0001808d74b1)

uint64_t FUN_1808908b0(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  float fVar7;
  int8_t auVar8 [16];
  int64_t lStackX_8;
  
  uVar4 = func_0x00018088c530(*(int32_t *)(param_1 + 0x1c),&lStackX_8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar1 = *(int64_t *)(lStackX_8 + 8);
  if (lVar1 != 0) {
    fVar7 = *(float *)(param_1 + 0x20);
    for (puVar5 = *(uint64_t **)(lVar1 + 0x48);
        (*(uint64_t **)(lVar1 + 0x48) <= puVar5 &&
        (puVar5 < *(uint64_t **)(lVar1 + 0x48) + *(int *)(lVar1 + 0x50))); puVar5 = puVar5 + 1) {
      uVar4 = FUN_1808d73b0(*puVar5,fVar7,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    if ((*(char *)(lVar1 + 0x34) == '\0') ||
       ((*(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34) >> 1 & 1) == 0)) {
      uVar3 = *(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34);
      uVar2 = uVar3 >> 4;
      if ((uVar2 & 1) == 0) {
        if ((((uVar3 >> 3 & 1) != 0) && (iVar6 = (int)fVar7, iVar6 != -0x80000000)) &&
           ((float)iVar6 != fVar7)) {
          auVar8._4_4_ = fVar7;
          auVar8._0_4_ = fVar7;
          auVar8._8_8_ = 0;
          uVar3 = movmskps(uVar2,auVar8);
          fVar7 = (float)(int)(iVar6 - (uVar3 & 1));
        }
        fVar7 = (float)func_0x00018084dcc0(*(int64_t *)(lVar1 + 0x18),fVar7);
        if (((*(char *)(lVar1 + 0x34) == '\0') ||
            ((*(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
           (fVar7 != *(float *)(lVar1 + 0x20))) {
          *(float *)(lVar1 + 0x20) = fVar7;
          FUN_1808d7020(lVar1);
          *(int8_t *)(lVar1 + 0x35) = 0;
        }
      }
    }
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_180890900(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lStackX_8;
  
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar3 == 0) {
    uVar7 = 0;
    uVar5 = lStackX_8 - 8;
    if (lStackX_8 == 0) {
      uVar5 = uVar7;
    }
    puVar4 = (int32_t *)(param_1 + 0x20 + (int64_t)*(int *)(param_1 + 0x18) * 4);
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar8 = (param_1 + 0x20) - (int64_t)puVar4;
      do {
        iVar2 = *(int *)(lVar8 + (int64_t)puVar4);
        if (iVar2 != -1) {
          lVar1 = *(int64_t *)(uVar5 + 0x20) + (int64_t)iVar2 * 0x18;
          if ((lVar1 == 0) || (lVar1 = *(int64_t *)(lVar1 + 8), lVar1 == 0)) {
            return 0x1c;
          }
          uVar3 = FUN_1808d73b0(lVar1,*puVar4,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        puVar4 = puVar4 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x18));
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_180890923(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  uVar7 = 0;
  uVar5 = in_RAX - 8;
  if (in_RAX == 0) {
    uVar5 = uVar7;
  }
  puVar4 = (int32_t *)(unaff_RSI + 0x20 + (int64_t)*(int *)(unaff_RSI + 0x18) * 4);
  if (0 < *(int *)(unaff_RSI + 0x18)) {
    lVar8 = (unaff_RSI + 0x20) - (int64_t)puVar4;
    do {
      iVar2 = *(int *)(lVar8 + (int64_t)puVar4);
      if (iVar2 != -1) {
        lVar1 = *(int64_t *)(uVar5 + 0x20) + (int64_t)iVar2 * 0x18;
        if ((lVar1 == 0) || (lVar1 = *(int64_t *)(lVar1 + 8), lVar1 == 0)) {
          return 0x1c;
        }
        uVar3 = FUN_1808d73b0(lVar1,*puVar4,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      puVar4 = puVar4 + 1;
    } while ((int)uVar6 < *(int *)(unaff_RSI + 0x18));
  }
  return 0;
}





// 函数: void FUN_1808909b4(void)
void FUN_1808909b4(void)

{
  return;
}



uint64_t FUN_1808909ba(void)

{
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808909d0(int64_t param_1)

{
  uint64_t uVar1;
  int *piVar2;
  int32_t *puVar3;
  uint uVar4;
  uint64_t uVar6;
  int64_t lStackX_8;
  uint64_t uVar5;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
    uVar6 = lStackX_8 - 8;
    if (lStackX_8 == 0) {
      uVar6 = uVar5;
    }
    puVar3 = (int32_t *)(param_1 + 0x20 + (int64_t)*(int *)(param_1 + 0x18) * 8);
    piVar2 = (int *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        if ((*piVar2 != network_system_memory) || (piVar2[1] != network_system_memory)) {
          lStackX_8 = 0;
          uVar1 = FUN_1808681d0(uVar6,(int *)(param_1 + 0x20) + (int64_t)(int)uVar5 * 2,&lStackX_8)
          ;
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (*(int64_t *)(lStackX_8 + 8) == 0) {
            return 0x1c;
          }
          uVar1 = FUN_1808d73b0(*(int64_t *)(lStackX_8 + 8),*puVar3,*(int8_t *)(param_1 + 0x1c)
                               );
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        puVar3 = puVar3 + 1;
        piVar2 = piVar2 + 2;
      } while ((int)uVar4 < *(int *)(param_1 + 0x18));
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808909f3(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *piVar2;
  int64_t unaff_RBP;
  int32_t *puVar3;
  uint uVar4;
  uint64_t uVar6;
  int64_t lStack0000000000000050;
  uint64_t uVar5;
  
  uVar5 = 0;
  uVar6 = in_RAX - 8;
  if (in_RAX == 0) {
    uVar6 = uVar5;
  }
  puVar3 = (int32_t *)(unaff_RBP + 0x20 + (int64_t)*(int *)(unaff_RBP + 0x18) * 8);
  piVar2 = (int *)(unaff_RBP + 0x20);
  if (0 < *(int *)(unaff_RBP + 0x18)) {
    do {
      if ((*piVar2 != network_system_memory) || (piVar2[1] != network_system_memory)) {
        lStack0000000000000050 = 0;
        uVar1 = FUN_1808681d0(uVar6,(int *)(unaff_RBP + 0x20) + (int64_t)(int)uVar5 * 2,
                              &stack0x00000050);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int64_t *)(lStack0000000000000050 + 8) == 0) {
          return 0x1c;
        }
        uVar1 = FUN_1808d73b0(*(int64_t *)(lStack0000000000000050 + 8),*puVar3,
                              *(int8_t *)(unaff_RBP + 0x1c));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      puVar3 = puVar3 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar4 < *(int *)(unaff_RBP + 0x18));
  }
  return 0;
}





// 函数: void FUN_180890ac1(void)
void FUN_180890ac1(void)

{
  return;
}



uint64_t FUN_180890ac7(void)

{
  return 0x1c;
}



uint64_t FUN_180890ad0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890aef(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_180890b18(void)
void FUN_180890b18(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_180890b65(void)
void FUN_180890b65(void)

{
  return;
}



uint64_t FUN_180890b70(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890b8f(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_180890bb8(void)
void FUN_180890bb8(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_180890c06(void)
void FUN_180890c06(void)

{
  return;
}



uint64_t FUN_180890c10(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = lStackX_8 + -8;
  if (lStackX_8 == 0) {
    lVar2 = 0;
  }
  if (*(int64_t *)(lVar2 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar2 + 0x10),1);
}



int32_t FUN_180890c33(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  lVar1 = in_RAX + -8;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_180890c66(void)
void FUN_180890c66(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_180890d39(void)
void FUN_180890d39(void)

{
  return;
}



uint64_t FUN_180890d60(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890d83(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_180890dac(void)
void FUN_180890dac(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





// 函数: void FUN_180890e03(void)
void FUN_180890e03(void)

{
  return;
}



uint64_t FUN_180890e10(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lStackX_8 + 0x10),1);
}



int32_t FUN_180890e33(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180862e00(*(int64_t *)(lVar1 + 0x10),1);
}





// 函数: void FUN_180890e5c(void)
void FUN_180890e5c(void)

{
                    // WARNING: Subroutine does not return
  FUN_180862e00();
}





