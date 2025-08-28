#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part403.c - 10 个函数

// 函数: void FUN_18088da49(void)
void FUN_18088da49(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088da50(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  if (0 < *(int *)(param_1 + 0x1f0)) {
    uVar3 = **(uint64_t **)(param_1 + 0x1e8);
    FUN_180894fb0(uVar3);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar3,&unknown_var_7392_ptr,0x1e7,1);
  }
  plVar1 = (int64_t *)(param_1 + 0x1e8);
  uVar4 = *(uint *)(param_1 + 500);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x1f0)) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&unknown_var_8432_ptr,0x100,1);
    }
    *plVar1 = 0;
    uVar4 = 0;
    *(int32_t *)(param_1 + 500) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
    memset(*plVar1 + (int64_t)iVar2 * 8,0,(int64_t)-iVar2 << 3);
  }
  *(int32_t *)(param_1 + 0x1f0) = 0;
  if ((0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) &&
     (uVar3 = FUN_180747f10(plVar1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088da6d(void)
void FUN_18088da6d(void)

{
  uint64_t uVar1;
  int64_t unaff_RBP;
  uint unaff_EDI;
  
  uVar1 = *(uint64_t *)((uint64_t)unaff_EDI + *(int64_t *)(unaff_RBP + 0x1e8));
  FUN_180894fb0(uVar1);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&unknown_var_7392_ptr,0x1e7,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088dad3(void)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t unaff_RBP;
  
  plVar1 = (int64_t *)(unaff_RBP + 0x1e8);
  uVar4 = *(uint *)(unaff_RBP + 500);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < *(int *)(unaff_RBP + 0x1f0)) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&unknown_var_8432_ptr,0x100,1);
    }
    *plVar1 = 0;
    uVar4 = 0;
    *(int32_t *)(unaff_RBP + 500) = 0;
  }
  iVar2 = *(int *)(unaff_RBP + 0x1f0);
  if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
    memset(*plVar1 + (int64_t)iVar2 * 8,0,(int64_t)-iVar2 << 3);
  }
  *(int32_t *)(unaff_RBP + 0x1f0) = 0;
  if ((0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) &&
     (uVar3 = FUN_180747f10(plVar1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088daf0(int64_t param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int iVar5;
  
  puVar2 = *(uint64_t **)(param_1 + 0x208);
  if (puVar2 == (uint64_t *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x200);
  iVar3 = 0;
  if (0 < iVar1) {
    plVar4 = *(int64_t **)(param_1 + 0x1f8);
    do {
      if ((uint64_t *)*plVar4 == puVar2) {
        if ((-1 < iVar3) && (iVar3 < iVar1)) {
          iVar5 = (iVar1 - iVar3) + -1;
          if (0 < iVar5) {
            plVar4 = *(int64_t **)(param_1 + 0x1f8) + iVar3;
                    // WARNING: Subroutine does not return
            memmove(plVar4,plVar4 + 1,(int64_t)iVar5 << 3);
          }
          *(int *)(param_1 + 0x200) = iVar1 + -1;
          if (puVar2 == *(uint64_t **)(param_1 + 0x208)) {
            *(uint64_t *)(param_1 + 0x208) = 0;
          }
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_7392_ptr,0x1d2,1);
        }
        return 0x1c;
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0x4a;
}





// 函数: void FUN_18088dbf0(int64_t param_1,uint64_t *param_2)
void FUN_18088dbf0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  uint64_t *puVar10;
  uint uVar11;
  int iVar12;
  
  uVar1 = *(uint64_t *)(param_1 + 0x220);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  SystemMemoryAllocator(uVar1);
  uVar11 = (int)*(uint *)(param_1 + 0x21c) >> 0x1f;
  iVar9 = *(int *)(param_1 + 0x218) + 1;
  iVar8 = (*(uint *)(param_1 + 0x21c) ^ uVar11) - uVar11;
  if (iVar8 < iVar9) {
    iVar12 = (int)((float)iVar8 * 1.5);
    iVar8 = iVar9;
    if (iVar9 <= iVar12) {
      iVar8 = iVar12;
    }
    if (iVar8 < 1) {
      iVar12 = 1;
    }
    else if (iVar12 < iVar9) {
      iVar12 = iVar9;
    }
    iVar8 = FUN_18088e780((int64_t *)(param_1 + 0x210),iVar12);
    if (iVar8 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar1);
    }
  }
  puVar10 = (uint64_t *)
            ((int64_t)*(int *)(param_1 + 0x218) * 0x30 + *(int64_t *)(param_1 + 0x210));
  *puVar10 = uVar2;
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  puVar10[4] = uVar6;
  puVar10[5] = uVar7;
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



uint64_t FUN_18088dcf0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  if (*(int64_t *)(param_1 + 0x150) != 0) {
    alStackX_8[0] = 0;
    uVar1 = FUN_180768b50(alStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (alStackX_8[0] == *(int64_t *)(param_1 + 0x150)) {
      return 0x23;
    }
  }
  SystemMemoryAllocator(*(uint64_t *)(param_1 + 0x160));
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088dd60(int64_t param_1,int64_t *param_2)
void FUN_18088dd60(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint auStack_148 [4];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uVar11 = 0;
  if (((*(int *)(param_1 + 0x200) != 0) &&
      (cVar1 = (**(code **)(*param_2 + 0x60))(param_2), cVar1 != '\0')) &&
     (uVar9 = uVar11, uVar10 = uVar11, 0 < *(int *)(param_1 + 0x200))) {
    do {
      iVar2 = FUN_180897520(*(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x1f8)),param_2);
      if (iVar2 != 0) goto LAB_18088de99;
      uVar7 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
      uVar10 = uVar10 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x200));
  }
  iVar2 = (**(code **)(*param_2 + 0x30))(param_2,*(uint64_t *)(param_1 + 0x158));
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 8))(param_2,auStack_138,0x100);
    uVar4 = (**(code **)*param_2)(param_2);
    iVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    iVar8 = iVar3 + 10;
    if (iVar3 < 1) {
      iVar8 = 0;
    }
    uVar9 = uVar11;
    if (iVar8 == 0xb) {
      iVar3 = func_0x00018088c570(*(uint64_t *)(param_1 + 0x158),auStack_148);
      if (iVar3 == 0) {
        uVar9 = (uint64_t)auStack_148[0];
      }
    }
    else {
      piVar5 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
      if (((piVar5 != (int *)0x0) && (uVar9 = 0, *piVar5 != 0)) &&
         (puVar6 = (uint *)(**(code **)(*param_2 + 0x40))(param_2), uVar9 = uVar11,
         puVar6 != (uint *)0x0)) {
        uVar9 = (uint64_t)*puVar6;
      }
    }
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar2,iVar8,uVar9,uVar4);
  }
LAB_18088de99:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_18088de01(void)
void FUN_18088de01(void)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int32_t unaff_EDI;
  int64_t in_R9;
  uint64_t unaff_R14;
  uint in_stack_00000030;
  
  (**(code **)(in_R9 + 8))();
  uVar2 = (**(code **)*unaff_RSI)();
  iVar1 = (**(code **)(*unaff_RSI + 0x38))();
  iVar5 = iVar1 + 10;
  if (iVar1 < 1) {
    iVar5 = (int)unaff_R14;
  }
  if (iVar5 == 0xb) {
    iVar1 = func_0x00018088c570(*(uint64_t *)(unaff_RBP + 0x158),&stack0x00000030);
    if (iVar1 == 0) {
      unaff_R14 = (uint64_t)in_stack_00000030;
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*unaff_RSI + 0x40))();
    if ((piVar3 != (int *)0x0) && (*piVar3 != (int)unaff_R14)) {
      puVar4 = (uint *)(**(code **)(*unaff_RSI + 0x40))();
      if (puVar4 != (uint *)0x0) {
        unaff_R14 = (uint64_t)*puVar4;
      }
      unaff_R14 = unaff_R14 & 0xffffffff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_EDI,iVar5,unaff_R14,uVar2,&stack0x00000040);
}





// 函数: void FUN_18088de97(void)
void FUN_18088de97(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_18088dec0(int64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t uVar1;
  int64_t lStackX_8;
  int32_t auStackX_10 [4];
  int aiStackX_20 [2];
  uint64_t *apuStack_60 [5];
  
  *param_2 = param_1 + 0x238;
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450)) {
      return 0;
    }
  }
  uVar1 = FUN_1808e6790(*(uint64_t *)(param_1 + 0x1e0),param_2,param_3 + 0xfU & 0xfffffff0,
                        apuStack_60,aiStackX_20);
  if ((int)uVar1 != 0x41) {
    if ((int)uVar1 == 0) {
      if (0 < aiStackX_20[0]) {
        *apuStack_60[0] = &unknown_var_7256_ptr;
        *(int *)(apuStack_60[0] + 1) = aiStackX_20[0];
      }
      return 0;
    }
    return uVar1;
  }
  auStackX_10[0] = 0;
  FUN_180768b90(auStackX_10);
  func_0x0001808e64e0(*(uint64_t *)(param_1 + 0x1e0));
                    // WARNING: Subroutine does not return
  SystemMemoryManager(*(uint64_t *)(param_1 + 0x160));
}



uint64_t FUN_18088e0f0(int64_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int aiStackX_18 [4];
  
  uVar3 = FUN_18088e220();
  if ((int)uVar3 == 0) {
    if (*(char *)(param_1 + 0x188) != (char)uVar3) {
      iVar1 = *(int *)(param_1 + 0x19c);
      do {
        if ((*(char *)(param_1 + 0x188) != '\0') &&
           (FUN_180768b70(aiStackX_18), 0x32 < aiStackX_18[0] - *(int *)(param_1 + 0x178))) {
          *(int *)(param_1 + 0x178) = aiStackX_18[0];
          uVar3 = FUN_180768910(*(uint64_t *)(param_1 + 0x170));
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        FUN_180768bf0(1);
      } while ((*(int *)(param_1 + 0x19c) == iVar1) || (*(int *)(param_1 + 0x19c) == iVar1 + 1));
    }
    cVar2 = func_0x000180881f80(*(uint64_t *)(param_1 + 0x158));
    while (cVar2 != '\0') {
      FUN_180768bf0(1);
      uVar3 = FUN_18088e220(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      cVar2 = func_0x000180881f80(*(uint64_t *)(param_1 + 0x158));
    }
    if (param_2 != '\0') {
      while (*(int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x158) + 0x90) + 0x790) +
                     0x1c8) != 0) {
        FUN_180768bf0(1);
        uVar3 = FUN_18088e220(param_1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
    uVar3 = (uint64_t)*(uint *)(param_1 + 0x198);
  }
  return uVar3;
}



uint64_t FUN_18088e10d(void)

{
  int iVar1;
  char in_AL;
  char cVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  char unaff_SIL;
  int in_stack_00000040;
  
  if (*(char *)(unaff_RBX + 0x188) != in_AL) {
    iVar1 = *(int *)(unaff_RBX + 0x19c);
    do {
      if ((*(char *)(unaff_RBX + 0x188) != '\0') &&
         (FUN_180768b70(&stack0x00000040), 0x32 < in_stack_00000040 - *(int *)(unaff_RBX + 0x178)))
      {
        *(int *)(unaff_RBX + 0x178) = in_stack_00000040;
        uVar3 = FUN_180768910(*(uint64_t *)(unaff_RBX + 0x170));
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      FUN_180768bf0(1);
    } while ((*(int *)(unaff_RBX + 0x19c) == iVar1) || (*(int *)(unaff_RBX + 0x19c) == iVar1 + 1));
  }
  cVar2 = func_0x000180881f80(*(uint64_t *)(unaff_RBX + 0x158));
  while (cVar2 != '\0') {
    FUN_180768bf0(1);
    uVar3 = FUN_18088e220();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    cVar2 = func_0x000180881f80(*(uint64_t *)(unaff_RBX + 0x158));
  }
  if (unaff_SIL != '\0') {
    while (*(int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0x158) + 0x90) + 0x790) +
                   0x1c8) != 0) {
      FUN_180768bf0(1);
      uVar3 = FUN_18088e220();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  return (uint64_t)*(uint *)(unaff_RBX + 0x198);
}



int32_t FUN_18088e205(void)

{
  int64_t unaff_RBX;
  
  return *(int32_t *)(unaff_RBX + 0x198);
}





// 函数: void FUN_18088e210(void)
void FUN_18088e210(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088e220(int64_t param_1)
void FUN_18088e220(int64_t param_1)

{
  int iVar1;
  int8_t auStack_b8 [32];
  uint64_t auStack_98 [15];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  SystemMemoryAllocator(*(uint64_t *)(param_1 + 0x168));
  auStack_98[0] = 0;
  iVar1 = FUN_18088c740(auStack_98,*(uint64_t *)(param_1 + 0x158));
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(auStack_98);
  }
  func_0x0001808e64b0(*(uint64_t *)(param_1 + 0x1e0));
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088e480(int64_t param_1,int64_t param_2,int8_t param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float fVar5;
  
  *(int64_t *)(param_1 + 0x158) = param_2;
  *(int8_t *)(param_1 + 0x188) = param_3;
  *(int32_t *)(param_1 + 0x17c) = *(int32_t *)(param_2 + 0x18);
  lVar4 = *(int64_t *)(param_2 + 0x78);
  uVar3 = FUN_1807682e0(param_1 + 0x160,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_1807682e0(param_1 + 0x168,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(char *)(param_1 + 0x188) != (char)uVar3) {
    uVar3 = FUN_1807688b0(param_1 + 0x170);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180767c00(param_1,&unknown_var_7360_ptr,&unknown_var_8368_ptr,param_1,8,(char)uVar3,1,lVar4,
                          (char)uVar3);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(uint *)(lVar4 + 0x6d8) == 0) {
      return 0x1c;
    }
    if (*(int *)(lVar4 + 0x6d0) < 1) {
      return 0x1c;
    }
    fVar5 = (float)*(uint *)(lVar4 + 0x6d8) / (float)*(int *)(lVar4 + 0x6d0);
    iVar2 = (int)(param_4 / fVar5 + 0.5);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 400) = iVar2;
    *(float *)(param_1 + 0x194) = (float)iVar2 * fVar5;
  }
  uVar3 = FUN_180748e20(lVar4,0,FUN_18088ea60,param_1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_7392_ptr,0x59,0,
                        (char)uVar3,1);
  if (lVar4 == 0) {
    return 0x26;
  }
  uVar3 = func_0x0001808e63f0(lVar4);
  *(uint64_t *)(param_1 + 0x1e0) = uVar3;
  lVar4 = func_0x000180879a40(param_2);
  uVar3 = FUN_1808e6640(*(uint64_t *)(param_1 + 0x1e0),*(int32_t *)(lVar4 + 4));
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if ((*(int64_t *)(param_1 + 0x220) == 0) && (*(int64_t *)(param_1 + 0x228) == 0)) {
    uVar3 = FUN_1807682e0((int64_t *)(param_1 + 0x220),0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar1 = *(uint *)(param_1 + 0x21c);
    if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 0) {
      if (0 < *(int *)(param_1 + 0x218)) {
        return 0x1c;
      }
      if ((0 < (int)uVar1) && (*(int64_t *)(param_1 + 0x210) != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x210),
                      &unknown_var_8432_ptr,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x210) = 0;
      *(int32_t *)(param_1 + 0x21c) = 0;
    }
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088e4e4(void)

{
  uint uVar1;
  char in_AL;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  uint64_t extraout_XMM0_Qa;
  float fVar5;
  float unaff_XMM6_Da;
  
  if (*(char *)(unaff_RBX + 0x188) != in_AL) {
    uVar3 = FUN_1807688b0(unaff_RBX + 0x170);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180767c00(extraout_XMM0_Qa,&unknown_var_7360_ptr,&unknown_var_8368_ptr);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(uint *)(unaff_RDI + 0x6d8) == 0) {
      return 0x1c;
    }
    if (*(int *)(unaff_RDI + 0x6d0) < 1) {
      return 0x1c;
    }
    fVar5 = (float)*(uint *)(unaff_RDI + 0x6d8) / (float)*(int *)(unaff_RDI + 0x6d0);
    iVar2 = (int)(unaff_XMM6_Da / fVar5 + 0.5);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    *(int *)(unaff_RBX + 400) = iVar2;
    *(float *)(unaff_RBX + 0x194) = (float)iVar2 * fVar5;
  }
  uVar3 = FUN_180748e20();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_7392_ptr,0x59,0);
  if (lVar4 == 0) {
    return 0x26;
  }
  uVar3 = func_0x0001808e63f0(lVar4);
  *(uint64_t *)(unaff_RBX + 0x1e0) = uVar3;
  lVar4 = func_0x000180879a40();
  uVar3 = FUN_1808e6640(*(uint64_t *)(unaff_RBX + 0x1e0),*(int32_t *)(lVar4 + 4));
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if ((*(int64_t *)(unaff_RBX + 0x220) == 0) && (*(int64_t *)(unaff_RBX + 0x228) == 0)) {
    uVar3 = FUN_1807682e0((int64_t *)(unaff_RBX + 0x220),0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar1 = *(uint *)(unaff_RBX + 0x21c);
    if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 0) {
      if (0 < *(int *)(unaff_RBX + 0x218)) {
        return 0x1c;
      }
      if ((0 < (int)uVar1) && (*(int64_t *)(unaff_RBX + 0x210) != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RBX + 0x210),
                      &unknown_var_8432_ptr,0x100,1);
      }
      *(uint64_t *)(unaff_RBX + 0x210) = 0;
      *(int32_t *)(unaff_RBX + 0x21c) = 0;
    }
    return 0;
  }
  return 0x1c;
}





// 函数: void FUN_18088e6b3(void)
void FUN_18088e6b3(void)

{
  return;
}





// 函数: void FUN_18088e6d0(int64_t param_1)
void FUN_18088e6d0(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryManager(*(uint64_t *)(param_1 + 0x160));
}



uint64_t FUN_18088e700(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  
  if (((*(int *)(param_1 + 0x200) != 0) &&
      (cVar1 = (**(code **)(*param_2 + 0x60))(param_2), cVar1 != '\0')) &&
     (iVar3 = 0, 0 < *(int *)(param_1 + 0x200))) {
    lVar4 = 0;
    do {
      uVar2 = FUN_180897520(*(uint64_t *)(lVar4 + *(int64_t *)(param_1 + 0x1f8)),param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x200));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088e780(int64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar9 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x30 - 1U < 0x3fffffff) {
      puVar9 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x30,&unknown_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar9 != (uint64_t *)0x0) {
        iVar4 = (int)param_1[1];
        lVar10 = (int64_t)iVar4;
        if ((iVar4 != 0) && (0 < iVar4)) {
          lVar12 = *param_1 - (int64_t)puVar9;
          puVar11 = puVar9;
          do {
            uVar8 = ((uint64_t *)(lVar12 + (int64_t)puVar11))[1];
            puVar1 = puVar11 + 6;
            *puVar11 = *(uint64_t *)(lVar12 + (int64_t)puVar11);
            puVar11[1] = uVar8;
            puVar2 = (uint64_t *)(lVar12 + -0x20 + (int64_t)puVar1);
            uVar8 = puVar2[1];
            puVar11[2] = *puVar2;
            puVar11[3] = uVar8;
            puVar3 = (int32_t *)(lVar12 + -0x10 + (int64_t)puVar1);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(int32_t *)(puVar11 + 4) = *puVar3;
            *(int32_t *)((int64_t)puVar11 + 0x24) = uVar5;
            *(int32_t *)(puVar11 + 5) = uVar6;
            *(int32_t *)((int64_t)puVar11 + 0x2c) = uVar7;
            lVar10 = lVar10 + -1;
            puVar11 = puVar1;
          } while (lVar10 != 0);
        }
        goto LAB_18088e847;
      }
    }
    return 0x26;
  }
LAB_18088e847:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar9;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088e7a4(uint64_t param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int64_t lVar12;
  
  puVar9 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_18088e847:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar9;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x30 - 1U < 0x3fffffff) {
    puVar9 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x30,&unknown_var_8432_ptr,
                           0xf4,0);
    if (puVar9 != (uint64_t *)0x0) {
      iVar4 = (int)unaff_RBX[1];
      lVar10 = (int64_t)iVar4;
      if ((iVar4 != 0) && (0 < iVar4)) {
        lVar12 = *unaff_RBX - (int64_t)puVar9;
        puVar11 = puVar9;
        do {
          uVar8 = ((uint64_t *)(lVar12 + (int64_t)puVar11))[1];
          puVar1 = puVar11 + 6;
          *puVar11 = *(uint64_t *)(lVar12 + (int64_t)puVar11);
          puVar11[1] = uVar8;
          puVar2 = (uint64_t *)(lVar12 + -0x20 + (int64_t)puVar1);
          uVar8 = puVar2[1];
          puVar11[2] = *puVar2;
          puVar11[3] = uVar8;
          puVar3 = (int32_t *)(lVar12 + -0x10 + (int64_t)puVar1);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          *(int32_t *)(puVar11 + 4) = *puVar3;
          *(int32_t *)((int64_t)puVar11 + 0x24) = uVar5;
          *(int32_t *)(puVar11 + 5) = uVar6;
          *(int32_t *)((int64_t)puVar11 + 0x2c) = uVar7;
          lVar10 = lVar10 + -1;
          puVar11 = puVar1;
        } while (lVar10 != 0);
      }
      goto LAB_18088e847;
    }
  }
  return 0x26;
}



uint64_t FUN_18088e892(void)

{
  return 0x26;
}



uint64_t FUN_18088e8b0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x200);
  iVar2 = 0;
  if (0 < iVar1) {
    plVar4 = *(int64_t **)(param_1 + 0x1f8);
    do {
      if (*plVar4 == param_2) {
        if ((-1 < iVar2) && (iVar2 < iVar1)) {
          iVar3 = (iVar1 - iVar2) + -1;
          if (0 < iVar3) {
            plVar4 = *(int64_t **)(param_1 + 0x1f8) + iVar2;
                    // WARNING: Subroutine does not return
            memmove(plVar4,plVar4 + 1,(int64_t)iVar3 << 3);
          }
          *(int *)(param_1 + 0x200) = iVar1 + -1;
          if (param_2 == *(int64_t *)(param_1 + 0x208)) {
            *(uint64_t *)(param_1 + 0x208) = 0;
          }
          return 0;
        }
        return 0x1c;
      }
      iVar2 = iVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 0x4a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



