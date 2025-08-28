/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 06_utilities_part005.c - 10 个函数

// 函数: void FUN_180892120(int64_t param_1,int64_t param_2)
void FUN_180892120(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uStackX_8;
  
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&uStackX_8);
  if (iVar1 == 0) {
    iVar1 = func_0x0001808c7d30(uStackX_8);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}



uint64_t FUN_180892170(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
      return 0x4c;
    }
    *(uint64_t *)(param_1 + 0x18) =
         *(uint64_t *)(*(int64_t *)(*(int64_t *)(lStackX_8 + 0x10) + 0x2b0) + 0x78);
    uVar1 = FUN_18088d7c0(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return uVar1;
}



uint64_t FUN_1808921f0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    if (*(int64_t *)(lStackX_8 + 0x18) == 0) {
      return 0x1e;
    }
    uVar1 = func_0x00018088c500(*(uint64_t *)(*(int64_t *)(lStackX_8 + 0x18) + 0xd0),
                                param_1 + 0x18);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_18088d7c0(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar1;
}



uint64_t FUN_180892270(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  void *puVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lStackX_8;
  
  if (param_1 + 0x1c == 0) {
    return 0x1f;
  }
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar3 == 0) {
    uVar6 = 0;
    uVar8 = uVar6;
    if (lStackX_8 != 0) {
      uVar8 = lStackX_8 - 8;
    }
    uVar9 = uVar6;
    if (0 < *(int *)(uVar8 + 0x28)) {
      do {
        lVar7 = *(int64_t *)(uVar8 + 0x20) + uVar9;
        lVar1 = *(int64_t *)(lVar7 + 0x10);
        if (lVar1 == 0) {
          return 0x1e;
        }
        if (*(int *)(lVar1 + 0x58) < 1) {
          puVar4 = &system_buffer_ptr;
        }
        else {
          puVar4 = *(void **)(lVar1 + 0x50);
        }
        iVar2 = func_0x00018076b630(puVar4,param_1 + 0x1c);
        if (iVar2 == 0) {
          uVar3 = func_0x00018088c500(lVar7,param_1 + 0x18);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_18088d7c0(*(uint64_t *)(param_2 + 0x98),param_1);
          return uVar3;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar5;
        uVar9 = uVar9 + 0x18;
      } while ((int)uVar5 < *(int *)(uVar8 + 0x28));
    }
    uVar3 = 0x4a;
  }
  return uVar3;
}



uint64_t FUN_1808922ad(void)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  void *puVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t in_stack_00000050;
  
  uVar6 = 0;
  uVar8 = uVar6;
  if (in_stack_00000050 != 0) {
    uVar8 = in_stack_00000050 - 8;
  }
  uVar9 = uVar6;
  if (0 < *(int *)(uVar8 + 0x28)) {
    do {
      lVar7 = *(int64_t *)(uVar8 + 0x20) + uVar9;
      lVar1 = *(int64_t *)(lVar7 + 0x10);
      if (lVar1 == 0) {
        return 0x1e;
      }
      if (*(int *)(lVar1 + 0x58) < 1) {
        puVar4 = &system_buffer_ptr;
      }
      else {
        puVar4 = *(void **)(lVar1 + 0x50);
      }
      iVar2 = func_0x00018076b630(puVar4);
      if (iVar2 == 0) {
        uVar3 = func_0x00018088c500(lVar7,unaff_R14 + 0x18);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_18088d7c0(*(uint64_t *)(unaff_R13 + 0x98));
        return uVar3;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar9 = uVar9 + 0x18;
    } while ((int)uVar5 < *(int *)(uVar8 + 0x28));
  }
  return 0x4a;
}





// 函数: void FUN_180892333(void)
void FUN_180892333(void)

{
  return;
}





// 函数: void FUN_18089233e(void)
void FUN_18089233e(void)

{
  int iVar1;
  int64_t unaff_R13;
  
  iVar1 = func_0x00018088c500();
  if (iVar1 == 0) {
    FUN_18088d7c0(*(uint64_t *)(unaff_R13 + 0x98));
  }
  return;
}



uint64_t FUN_180892370(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lStackX_8;
  
  uVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar3 = lStackX_8;
  if (lStackX_8 != 0) {
    lVar3 = lStackX_8 + -8;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 < 0) || (*(int *)(lVar3 + 0x28) <= iVar1)) {
    return 0x1f;
  }
  if (*(int64_t *)(*(int64_t *)(lVar3 + 0x20) + 0x10 + (int64_t)iVar1 * 0x18) == 0) {
    return 0x1e;
  }
  uVar2 = func_0x00018088c500(*(int64_t *)(lVar3 + 0x20) + (int64_t)iVar1 * 0x18,param_1 + 0x1c);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar3 = *(int64_t *)(param_2 + 0x98);
  if (*(int *)(lVar3 + 0x200) == 0) {
    return 0;
  }
  if ((*(int *)(lVar3 + 0x180) != 0) || (*(int *)(lVar3 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(lVar3 + 0x17c) * 8 + 0x180c4f450)) {
      uVar2 = FUN_18088dd60(lVar3,param_1);
      goto LAB_18088d83c;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar2 = func_0x0001808e64d0(*(uint64_t *)(lVar3 + 0x1e0));
LAB_18088d83c:
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180892410(int64_t param_1,int64_t param_2)
void FUN_180892410(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t auStack_68 [32];
  int64_t lStack_48;
  int8_t auStack_40 [40];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  iVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStack_48);
  if (iVar2 == 0) {
    if (lStack_48 != 0) {
      lStack_48 = lStack_48 + -8;
    }
    if (*(int64_t *)(lStack_48 + 0x18) != 0) {
      lVar1 = *(int64_t *)(lStack_48 + 0x18) + 0x30;
      lVar3 = (**(code **)(**(int64_t **)(param_2 + 800) + 0x2f0))
                        (*(int64_t **)(param_2 + 800),lVar1,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(lVar1,auStack_40);
      }
      plVar4 = (int64_t *)(lVar3 + 0x58);
      if (((int64_t *)*plVar4 != plVar4) || (*(int64_t **)(lVar3 + 0x60) != plVar4)) {
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_68);
}





// 函数: void FUN_18089246a(int64_t *param_1,int64_t param_2)
void FUN_18089246a(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t unaff_RDI;
  uint64_t in_stack_00000050;
  
  lVar1 = (**(code **)(*param_1 + 0x2f0))(param_1,param_2 + 0x30);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2 + 0x30,&stack0x00000028);
  }
  plVar2 = (int64_t *)(lVar1 + 0x58);
  if (((int64_t *)*plVar2 == plVar2) && (*(int64_t **)(lVar1 + 0x60) == plVar2)) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_18088d720(*(uint64_t *)(unaff_RDI + 0x98));
}





// 函数: void FUN_1808924c8(void)
void FUN_1808924c8(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1808924f0(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t alStackX_8 [2];
  uint uStackX_18;
  float fStackX_20;
  
  lVar10 = 0;
  iVar8 = 0;
  iVar9 = iVar8;
  if ((*(uint *)(param_1 + 0x20) & 0x7f800000) == 0x7f800000) {
    iVar9 = 0x1d;
  }
  iVar6 = iVar8;
  if ((*(uint *)(param_1 + 0x1c) & 0x7f800000) == 0x7f800000) {
    iVar6 = 0x1d;
  }
  iVar7 = iVar8;
  if ((*(uint *)(param_1 + 0x18) & 0x7f800000) == 0x7f800000) {
    iVar7 = 0x1d;
  }
  if ((iVar9 != 0 || iVar6 != 0) || iVar7 != 0) {
    return 0x1f;
  }
  iVar9 = 0;
  if ((*(uint *)(param_1 + 0x2c) & 0x7f800000) == 0x7f800000) {
    iVar8 = 0x1d;
  }
  iVar6 = iVar9;
  if ((*(uint *)(param_1 + 0x28) & 0x7f800000) == 0x7f800000) {
    iVar6 = 0x1d;
  }
  iVar7 = iVar9;
  if ((*(uint *)(param_1 + 0x24) & 0x7f800000) == 0x7f800000) {
    iVar7 = 0x1d;
  }
  if ((iVar8 != 0 || iVar6 != 0) || iVar7 != 0) {
    return 0x1f;
  }
  iVar8 = iVar9;
  if ((*(uint *)(param_1 + 0x38) & 0x7f800000) == 0x7f800000) {
    iVar8 = 0x1d;
  }
  iVar6 = iVar9;
  if ((*(uint *)(param_1 + 0x34) & 0x7f800000) == 0x7f800000) {
    iVar6 = 0x1d;
  }
  if (((uint)*(float *)(param_1 + 0x30) & 0x7f800000) == 0x7f800000) {
    iVar9 = 0x1d;
  }
  if ((iVar8 != 0 || iVar6 != 0) || iVar9 != 0) {
    return 0x1f;
  }
  fVar1 = *(float *)(param_1 + 0x44);
  iVar8 = 0;
  uStackX_18 = *(uint *)(param_1 + 0x40);
  fStackX_20 = *(float *)(param_1 + 0x3c);
  alStackX_8[0] = CONCAT44(alStackX_8[0]._4_4_,fVar1);
  iVar9 = iVar8;
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    iVar9 = 0x1d;
  }
  iVar6 = iVar8;
  if ((uStackX_18 & 0x7f800000) == 0x7f800000) {
    iVar6 = 0x1d;
  }
  if (((uint)fStackX_20 & 0x7f800000) == 0x7f800000) {
    iVar8 = 0x1d;
  }
  if ((iVar9 == 0 && iVar6 == 0) && iVar8 == 0) {
    if (((*(float *)(param_1 + 0x30) == 0.0) && (*(float *)(param_1 + 0x34) == 0.0)) &&
       (*(float *)(param_1 + 0x38) == 0.0)) {
      return 0x1f;
    }
    if (((fStackX_20 == 0.0) && (*(float *)(param_1 + 0x40) == 0.0)) && (fVar1 == 0.0)) {
      return 0x1f;
    }
    uVar5 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (alStackX_8[0] != 0) {
      lVar10 = alStackX_8[0] + -8;
    }
    uVar5 = *(uint64_t *)(param_1 + 0x20);
    *(uint64_t *)(lVar10 + 0x38) = *(uint64_t *)(param_1 + 0x18);
    *(uint64_t *)(lVar10 + 0x40) = uVar5;
    uVar2 = *(int32_t *)(param_1 + 0x2c);
    uVar3 = *(int32_t *)(param_1 + 0x30);
    uVar4 = *(int32_t *)(param_1 + 0x34);
    *(int32_t *)(lVar10 + 0x48) = *(int32_t *)(param_1 + 0x28);
    *(int32_t *)(lVar10 + 0x4c) = uVar2;
    *(int32_t *)(lVar10 + 0x50) = uVar3;
    *(int32_t *)(lVar10 + 0x54) = uVar4;
    uVar2 = *(int32_t *)(param_1 + 0x3c);
    uVar3 = *(int32_t *)(param_1 + 0x40);
    uVar4 = *(int32_t *)(param_1 + 0x44);
    *(int32_t *)(lVar10 + 0x58) = *(int32_t *)(param_1 + 0x38);
    *(int32_t *)(lVar10 + 0x5c) = uVar2;
    *(int32_t *)(lVar10 + 0x60) = uVar3;
    *(int32_t *)(lVar10 + 100) = uVar4;
    lVar10 = *(int64_t *)(param_2 + 0x98);
    if ((*(int *)(lVar10 + 0x180) != 0) || (*(int *)(lVar10 + 0x184) != 0)) {
      alStackX_8[0] = 0;
      FUN_180768b50(alStackX_8);
      if (alStackX_8[0] == *(int64_t *)((int64_t)*(int *)(lVar10 + 0x17c) * 8 + 0x180c4f450)) {
        uVar5 = FUN_18088dd60(lVar10,param_1);
        if ((int)uVar5 == 0) {
          return 0;
        }
        return uVar5;
      }
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
    uVar5 = func_0x0001808e64d0(*(uint64_t *)(lVar10 + 0x1e0));
    if ((int)uVar5 == 0) {
      return 0;
    }
    return uVar5;
  }
  return 0x1f;
}





// 函数: void FUN_180892720(int64_t param_1,int64_t param_2)
void FUN_180892720(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uStackX_8;
  
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10));
  if (iVar1 == 0) {
    if (uStackX_8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = uStackX_8 + -8;
    }
    *(int32_t *)(lVar2 + 0x88) = *(int32_t *)(param_1 + 0x18);
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}



uint64_t FUN_180892780(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float fVar4;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  
  lStackX_8 = CONCAT44(lStackX_8._4_4_,*(uint *)(param_1 + 0x20));
  if ((*(uint *)(param_1 + 0x20) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar3 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    lStackX_8 = 0;
    uVar3 = FUN_1808681d0(alStackX_18[0],param_1 + 0x18,&lStackX_8);
    if ((int)uVar3 == 0) {
      if (lStackX_8 == 0) {
        return 0x4a;
      }
      lVar2 = *(int64_t *)(lStackX_8 + 0x10);
      if (lVar2 == 0) {
        return 0x1e;
      }
      if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
        return 0x1f;
      }
      fVar1 = *(float *)(param_1 + 0x20);
      fVar4 = *(float *)(lVar2 + 0x38);
      if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
         (fVar4 = *(float *)(lVar2 + 0x3c), fVar1 <= *(float *)(lVar2 + 0x3c))) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x20) = fVar4;
      *(float *)(lStackX_8 + 4) = fVar4;
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar3;
}



uint64_t FUN_180892880(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar3 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    lStackX_8 = 0;
    uVar3 = FUN_1808681d0(alStackX_18[0],param_1 + 0x18,&lStackX_8);
    if ((int)uVar3 == 0) {
      if (lStackX_8 == 0) {
        return 0x4a;
      }
      lVar2 = *(int64_t *)(lStackX_8 + 0x10);
      if (lVar2 == 0) {
        return 0x1e;
      }
      if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
        return 0x1f;
      }
      uVar3 = FUN_18084de40(lVar2,param_1 + 0x25,param_1 + 0x20);
      if ((int)uVar3 == 0) {
        fVar1 = *(float *)(param_1 + 0x20);
        if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
           (fVar1 < *(float *)(lVar2 + 0x3c) || fVar1 == *(float *)(lVar2 + 0x3c))) {
          uVar3 = *(uint64_t *)(param_2 + 0x98);
          *(float *)(lStackX_8 + 4) = fVar1;
                    // WARNING: Subroutine does not return
          FUN_18088d720(uVar3,param_1);
        }
        uVar3 = 0x1c;
      }
    }
  }
  return uVar3;
}



uint64_t FUN_1808928d3(void)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_stack_00000040;
  
  if (in_stack_00000040 == 0) {
    return 0x4a;
  }
  lVar2 = *(int64_t *)(in_stack_00000040 + 0x10);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
    return 0x1f;
  }
  uVar3 = FUN_18084de40(lVar2,unaff_RDI + 0x25,unaff_RDI + 0x20);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x20);
    if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
       (fVar1 < *(float *)(lVar2 + 0x3c) || fVar1 == *(float *)(lVar2 + 0x3c))) {
      uVar3 = *(uint64_t *)(unaff_RBP + 0x98);
      *(float *)(in_stack_00000040 + 4) = fVar1;
                    // WARNING: Subroutine does not return
      FUN_18088d720(uVar3);
    }
    uVar3 = 0x1c;
  }
  return uVar3;
}



uint64_t FUN_1808928f1(void)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_stack_00000040;
  
  lVar2 = *(int64_t *)(unaff_RBX + 0x10);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
    return 0x1f;
  }
  uVar3 = FUN_18084de40(lVar2,unaff_RDI + 0x25,unaff_RDI + 0x20);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x20);
    if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
       (fVar1 < *(float *)(lVar2 + 0x3c) || fVar1 == *(float *)(lVar2 + 0x3c))) {
      uVar3 = *(uint64_t *)(unaff_RBP + 0x98);
      *(float *)(in_stack_00000040 + 4) = fVar1;
                    // WARNING: Subroutine does not return
      FUN_18088d720(uVar3);
    }
    uVar3 = 0x1c;
  }
  return uVar3;
}



uint64_t FUN_180892909(int32_t param_1)

{
  float fVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_stack_00000040;
  
  if ((*(byte *)(unaff_RBX + 0x34) & 0x11) != 0) {
    return 0x1f;
  }
  uVar2 = FUN_18084de40(param_1,unaff_RDI + 0x25,unaff_RDI + 0x20);
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x20);
    if ((*(float *)(unaff_RBX + 0x38) <= fVar1) &&
       (fVar1 < *(float *)(unaff_RBX + 0x3c) || fVar1 == *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = *(uint64_t *)(unaff_RBP + 0x98);
      *(float *)(in_stack_00000040 + 4) = fVar1;
                    // WARNING: Subroutine does not return
      FUN_18088d720(uVar2);
    }
    uVar2 = 0x1c;
  }
  return uVar2;
}



uint64_t FUN_180892920(int32_t param_1)

{
  float fVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_stack_00000040;
  
  uVar2 = FUN_18084de40(param_1,unaff_RDI + 0x25,unaff_RDI + 0x20);
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x20);
    if ((*(float *)(unaff_RBX + 0x38) <= fVar1) &&
       (fVar1 < *(float *)(unaff_RBX + 0x3c) || fVar1 == *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = *(uint64_t *)(unaff_RBP + 0x98);
      *(float *)(in_stack_00000040 + 4) = fVar1;
                    // WARNING: Subroutine does not return
      FUN_18088d720(uVar2);
    }
    uVar2 = 0x1c;
  }
  return uVar2;
}



uint64_t FUN_180892974(void)

{
  return 0x1c;
}





// 函数: void FUN_180892983(void)
void FUN_180892983(void)

{
  return;
}



uint64_t FUN_180892990(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  float fVar6;
  uint auStackX_8 [2];
  int64_t lStackX_18;
  
  auStackX_8[0] = *(uint *)(param_1 + 0x18);
  if ((auStackX_8[0] & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (param_1 + 0x28 != 0) {
    uVar4 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar5 = lStackX_18;
    if (lStackX_18 != 0) {
      lVar5 = lStackX_18 + -8;
    }
    lVar2 = *(int64_t *)(lVar5 + 0x18);
    if (lVar2 == 0) {
      return 0x1e;
    }
    auStackX_8[0] = 0;
    uVar4 = FUN_180840950(param_2,lVar5,param_1 + 0x28,auStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar5 = *(int64_t *)(lVar5 + 0x20);
    lVar3 = *(int64_t *)(lVar5 + 0x10 + (int64_t)(int)auStackX_8[0] * 0x18);
    if ((*(byte *)(lVar3 + 0x34) & 0x11) == 0) {
      fVar1 = *(float *)(param_1 + 0x18);
      fVar6 = *(float *)(lVar3 + 0x38);
      if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
         (fVar6 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
        fVar6 = fVar1;
      }
      *(float *)(param_1 + 0x18) = fVar6;
      lVar2 = *(int64_t *)(lVar2 + 0x90);
      *(float *)(lVar5 + 4 + (int64_t)(int)auStackX_8[0] * 0x18) = fVar6;
      *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(lVar2 + (int64_t)(int)auStackX_8[0] * 8);
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return 0x1f;
}



uint64_t FUN_180892ac0(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int aiStackX_8 [2];
  int64_t lStackX_18;
  
  if (param_1 + 0x28 != 0) {
    uVar4 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar6 = lStackX_18;
    if (lStackX_18 != 0) {
      lVar6 = lStackX_18 + -8;
    }
    lVar2 = *(int64_t *)(lVar6 + 0x18);
    if (lVar2 == 0) {
      return 0x1e;
    }
    aiStackX_8[0] = 0;
    uVar4 = FUN_180840950(param_2,lVar6,param_1 + 0x28,aiStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar5 = (int64_t)aiStackX_8[0];
    lVar6 = *(int64_t *)(lVar6 + 0x20);
    lVar3 = *(int64_t *)(lVar6 + 0x10 + lVar5 * 0x18);
    if ((*(byte *)(lVar3 + 0x34) & 0x11) == 0) {
      uVar4 = FUN_18084de40(lVar3,param_1 + 0xa8,param_1 + 0x18);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      fVar1 = *(float *)(param_1 + 0x18);
      if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
         (fVar1 < *(float *)(lVar3 + 0x3c) || fVar1 == *(float *)(lVar3 + 0x3c))) {
        lVar2 = *(int64_t *)(lVar2 + 0x90);
        *(float *)(lVar6 + 4 + lVar5 * 0x18) = fVar1;
        *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(lVar2 + (int64_t)aiStackX_8[0] * 8);
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
      }
      return 0x1c;
    }
  }
  return 0x1f;
}



uint64_t FUN_180892bd0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t unaff_RDI;
  float fVar6;
  int64_t lStackX_8;
  
  lStackX_8 = CONCAT44(lStackX_8._4_4_,*(uint *)(param_1 + 0x20));
  if ((*(uint *)(param_1 + 0x20) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar4 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar5 = lStackX_8;
  if (lStackX_8 != 0) {
    lVar5 = lStackX_8 + -8;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 < 0) || (*(int *)(lVar5 + 0x28) <= iVar2)) {
    return 0x1f;
  }
  lVar5 = *(int64_t *)(lVar5 + 0x20) + (int64_t)iVar2 * 0x18;
  lVar3 = *(int64_t *)(lVar5 + 0x10);
  if (lVar3 == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar3 + 0x34) & 0x11) == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar6 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar6 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar6 = fVar1;
    }
    *(float *)(param_1 + 0x20) = fVar6;
    *(float *)(lVar5 + 4) = fVar6;
    uVar4 = func_0x00018088c500(lVar5,param_1 + 0x1c);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar5 = *(int64_t *)(param_2 + 0x98);
    if ((*(int *)(lVar5 + 0x180) != 0) || (*(int *)(lVar5 + 0x184) != 0)) {
      lStackX_8 = 0;
      FUN_180768b50(&lStackX_8,param_1,param_3,param_4,unaff_RDI);
      if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(lVar5 + 0x17c) * 8 + 0x180c4f450)) {
        uVar4 = FUN_18088dd60(lVar5,param_1);
        if ((int)uVar4 == 0) {
          return 0;
        }
        return uVar4;
      }
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
    uVar4 = func_0x0001808e64d0(*(uint64_t *)(lVar5 + 0x1e0));
    if ((int)uVar4 == 0) {
      return 0;
    }
    return uVar4;
  }
  return 0x1f;
}



uint64_t FUN_180892cc0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  float *pfVar4;
  int64_t lVar5;
  uint64_t uVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint uVar9;
  float fVar11;
  float fStackX_8;
  int32_t uStackX_c;
  uint64_t uVar10;
  
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&fStackX_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar8 = 0;
  uVar6 = CONCAT44(uStackX_c,fStackX_8) - 8;
  if (CONCAT44(uStackX_c,fStackX_8) == 0) {
    uVar6 = uVar8;
  }
  iVar1 = *(int *)(uVar6 + 0x28);
  pfVar7 = (float *)(param_1 + 0x20 + (int64_t)*(int *)(param_1 + 0x18) * 4);
  if (0 < *(int *)(param_1 + 0x18)) {
    pfVar4 = pfVar7;
    uVar10 = uVar8;
    do {
      iVar2 = *(int *)(((param_1 + 0x20) - (int64_t)pfVar7) + (int64_t)pfVar4);
      if (iVar2 != -1) {
        fStackX_8 = *pfVar4;
        if (((uint)fStackX_8 & 0x7f800000) == 0x7f800000) {
          return 0x1d;
        }
        if ((iVar2 < 0) || (iVar1 <= iVar2)) {
          return 0x1f;
        }
        lVar5 = *(int64_t *)(uVar6 + 0x20) + (int64_t)iVar2 * 0x18;
        if (lVar5 == 0) {
          return 0x1c;
        }
        lVar5 = *(int64_t *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0x1e;
        }
        if (*(int *)(lVar5 + 0x30) != 0) {
          return 0x1f;
        }
        fVar11 = *(float *)(lVar5 + 0x38);
        if ((*(float *)(lVar5 + 0x38) <= fStackX_8) &&
           (fVar11 = *(float *)(lVar5 + 0x3c), fStackX_8 <= *(float *)(lVar5 + 0x3c))) {
          fVar11 = fStackX_8;
        }
        *pfVar4 = fVar11;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      pfVar4 = pfVar4 + 1;
    } while ((int)uVar9 < *(int *)(param_1 + 0x18));
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar5 = (param_1 + 0x20) - (int64_t)pfVar7;
      do {
        iVar1 = *(int *)((int64_t)pfVar7 + lVar5);
        if (iVar1 != -1) {
          *(float *)(*(int64_t *)(uVar6 + 0x20) + 4 + (int64_t)iVar1 * 0x18) = *pfVar7;
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar9;
        pfVar7 = pfVar7 + 1;
      } while ((int)uVar9 < *(int *)(param_1 + 0x18));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
}



uint64_t FUN_180892ceb(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int64_t in_RAX;
  float *pfVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  uint64_t uVar6;
  float *pfVar7;
  uint in_R9D;
  uint uVar8;
  int64_t unaff_R15;
  float fVar9;
  
  uVar6 = in_RAX - 8;
  if (in_RAX == 0) {
    uVar6 = (uint64_t)in_R9D;
  }
  iVar2 = *(int *)(uVar6 + 0x28);
  pfVar7 = (float *)(unaff_RBX + 0x20 + (int64_t)*(int *)(unaff_RBX + 0x18) * 4);
  if (0 < *(int *)(unaff_RBX + 0x18)) {
    pfVar4 = pfVar7;
    uVar8 = in_R9D;
    do {
      iVar3 = *(int *)(((unaff_RBX + 0x20) - (int64_t)pfVar7) + (int64_t)pfVar4);
      if (iVar3 != -1) {
        fVar1 = *pfVar4;
        if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
          return 0x1d;
        }
        if ((iVar3 < 0) || (iVar2 <= iVar3)) {
          return 0x1f;
        }
        lVar5 = *(int64_t *)(uVar6 + 0x20) + (int64_t)iVar3 * 0x18;
        if (lVar5 == 0) {
          return 0x1c;
        }
        lVar5 = *(int64_t *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0x1e;
        }
        if (*(uint *)(lVar5 + 0x30) != in_R9D) {
          return 0x1f;
        }
        fVar9 = *(float *)(lVar5 + 0x38);
        if ((*(float *)(lVar5 + 0x38) <= fVar1) &&
           (fVar9 = *(float *)(lVar5 + 0x3c), fVar1 <= *(float *)(lVar5 + 0x3c))) {
          fVar9 = fVar1;
        }
        *pfVar4 = fVar9;
      }
      uVar8 = uVar8 + 1;
      pfVar4 = pfVar4 + 1;
    } while ((int)uVar8 < *(int *)(unaff_RBX + 0x18));
    if (0 < *(int *)(unaff_RBX + 0x18)) {
      lVar5 = (unaff_RBX + 0x20) - (int64_t)pfVar7;
      do {
        iVar2 = *(int *)((int64_t)pfVar7 + lVar5);
        if (iVar2 != -1) {
          *(float *)(*(int64_t *)(uVar6 + 0x20) + 4 + (int64_t)iVar2 * 0x18) = *pfVar7;
        }
        in_R9D = in_R9D + 1;
        pfVar7 = pfVar7 + 1;
      } while ((int)in_R9D < *(int *)(unaff_RBX + 0x18));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088d720(*(uint64_t *)(unaff_R15 + 0x98));
}





// 函数: void FUN_180892e2d(void)
void FUN_180892e2d(void)

{
  return;
}



uint64_t FUN_180892e35(void)

{
  return 0x1e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180892e50(int64_t param_1,uint64_t param_2)
void FUN_180892e50(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  int64_t alStack_58 [3];
  int64_t lStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)alStack_58;
  uStack_38 = param_2;
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),alStack_58);
  if (iVar1 == 0) {
    bVar4 = alStack_58[0] == 0;
    alStack_58[0] = alStack_58[0] + -8;
    if (bVar4) {
      alStack_58[0] = 0;
    }
    lVar2 = (int64_t)*(int *)(param_1 + 0x18);
    uVar3 = lVar2 * 4 + 0xf;
    lStack_40 = param_1 + 0x20 + lVar2 * 8;
    if (uVar3 <= (uint64_t)(lVar2 * 4)) {
      uVar3 = 0xffffffffffffff0;
    }
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0(lVar2,uVar3 & 0xfffffffffffffff0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)alStack_58);
}





