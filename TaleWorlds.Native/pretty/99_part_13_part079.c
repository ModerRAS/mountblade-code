#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part079.c - 9 个函数

// 函数: void FUN_1808df960(void)
void FUN_1808df960(void)

{
  return;
}



uint64_t FUN_1808df96a(void)

{
  return 0x1c;
}



uint64_t FUN_1808df980(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int64_t lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x48));
      if (lVar1 == 0) {
        return 0x1c;
      }
      if (((*(int *)(lVar1 + 0x10) == 3) && (*(int64_t *)(lVar1 + 8) != 0)) &&
         (*(int *)(*(int64_t *)(lVar1 + 8) + 0x30) == -3)) {
        iVar2 = func_0x0001808d9e60(lVar1 + 0x18);
        if ((iVar2 != 0) && (piVar3 = (int *)func_0x0001808d9e70(lVar1 + 0x18), *piVar3 != 0)) {
          *(int8_t *)(param_1 + 0x5c) = 1;
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x58));
  }
  return 0;
}



uint64_t * FUN_1808dfa10(uint64_t *param_1)

{
  *param_1 = 0;
  *(int8_t *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000180767970(param_1 + 10);
  *(int32_t *)(param_1 + 0x34) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808dfa70(uint64_t *param_1)
void FUN_1808dfa70(uint64_t *param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t lStackX_8;
  int iStack_a8;
  uint uStack_a4;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t *puStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  do {
    iStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    FUN_1808dffa0(param_1 + 2,&iStack_a8);
    uVar3 = uStack_a0;
    if (iStack_a8 == 2) {
      return;
    }
    uVar4 = uStack_a4;
    if (((iStack_a8 == 1) && (uVar4 = FUN_1808dcad0(uStack_a0,*param_1,&lStackX_8), uVar4 == 0)) &&
       (uVar4 = func_0x00018076a6b0(lStackX_8,2), lVar2 = lStackX_8, uVar4 == 0)) {
      puStack_78 = &uStack_98;
      uStack_98 = lStackX_8;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uVar4 = FUN_1808de260(&puStack_78,0x20564546);
      if (uVar4 == 0) {
        if ((uint)uStack_38 < 0x2c) {
          if ((lVar2 != 0) && (FUN_180769080(lVar2), lVar2 != 0)) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
          }
        }
        else {
          if (uStack_38._4_4_ < 0x8f) {
            uVar4 = FUN_18089d520(uVar3,&puStack_78,0);
            if (uVar4 != 0) {
              if (uVar4 - 0x1c < 0x2b) {
                uVar1 = 0x40004000401 >> ((uint64_t)(uVar4 - 0x1c) & 0x3f);
                goto LAB_1808dfb65;
              }
              goto LAB_1808dfb67;
            }
            uVar4 = func_0x0001808ddc00(&puStack_78);
            if (uVar4 != 0) goto LAB_1808dfb6c;
            uVar4 = 0;
            if ((lVar2 != 0) && (FUN_180769080(lVar2), lVar2 != 0)) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
            }
            goto LAB_1808dfcd1;
          }
          if ((lVar2 != 0) && (FUN_180769080(lVar2), lVar2 != 0)) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
          }
        }
        uVar4 = 0x45;
      }
      else {
        if (uVar4 < 0x27) {
          uVar1 = 0x4010080000 >> ((int64_t)(int)uVar4 & 0x3fU);
LAB_1808dfb65:
          if ((uVar1 & 1) == 0) goto LAB_1808dfb67;
        }
        else {
LAB_1808dfb67:
          uVar4 = 0xd;
        }
LAB_1808dfb6c:
        if ((lVar2 != 0) && (FUN_180769080(lVar2), lVar2 != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_2144_ptr,0xb8,1);
        }
      }
    }
LAB_1808dfcd1:
    uStack_a4 = uVar4;
    uStack_98 = CONCAT44(uStack_a4,iStack_a8);
    uStack_90 = uStack_a0;
    FUN_1808e02d0(param_1 + 6,&uStack_98);
  } while( true );
}



uint64_t FUN_1808dfd20(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_18 = 2;
  uStack_10 = 0;
  FUN_1808e02d0(param_1 + 0x10,&uStack_18);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = *(uint64_t *)(param_1 + 0x20);
    SystemMemoryAllocator(uVar1);
                    // WARNING: Subroutine does not return
    SystemMemoryManager(uVar1);
  }
  uVar1 = FUN_180767ad0(param_1 + 0x50);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  return 0;
}






// 函数: void FUN_1808dfd6b(void)
void FUN_1808dfd6b(void)

{
  uint64_t uVar1;
  int64_t unaff_RSI;
  
  uVar1 = *(uint64_t *)(unaff_RSI + 0x20);
  SystemMemoryAllocator(uVar1);
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



uint64_t FUN_1808dfdaf(void)

{
  return 0;
}



uint64_t FUN_1808dfdc0(int64_t param_1,int param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  uVar3 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)(param_1 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < param_2) {
    fVar5 = (float)iVar1 * 1.5;
    iVar4 = (int)fVar5;
    iVar1 = iVar4;
    if (iVar4 < param_2) {
      iVar1 = param_2;
    }
    if (iVar1 < 4) {
      iVar4 = 4;
    }
    else if (iVar4 < param_2) {
      iVar4 = param_2;
    }
    uVar2 = FUN_1807d3f50(fVar5,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808dfe20(int64_t param_1,int param_2,char param_3)

{
  uint64_t uVar1;
  uint uVar2;
  
  if ((*(int64_t *)(param_1 + 0x10) == 0) && (*(int64_t *)(param_1 + 0x18) == 0)) {
    uVar1 = FUN_1807682e0((int64_t *)(param_1 + 0x10),0);
    if ((int)uVar1 == 0) {
      uVar2 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
      if (((int)((*(uint *)(param_1 + 0xc) ^ uVar2) - uVar2) < param_2) &&
         (uVar1 = FUN_1807d3f50(param_1,param_2), (int)uVar1 != 0)) {
        return uVar1;
      }
      if ((param_3 != '\0') && (uVar1 = FUN_1807688b0(param_1 + 0x18), (int)uVar1 != 0)) {
        return uVar1;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x1c;
  }
  return uVar1;
}



uint64_t FUN_1808dfeb0(uint64_t *param_1,uint64_t param_2,char param_3)

{
  uint64_t uVar1;
  uint uVar2;
  
  *param_1 = param_2;
  *(char *)(param_1 + 1) = param_3;
  uVar1 = FUN_1808dfe20(param_1 + 2,8);
  if ((int)uVar1 == 0) {
    if ((param_1[8] == 0) && (param_1[9] == 0)) {
      uVar1 = FUN_1807682e0(param_1 + 8,0);
      if ((((int)uVar1 == 0) &&
          ((uVar2 = (int)*(uint *)((int64_t)param_1 + 0x3c) >> 0x1f,
           7 < (int)((*(uint *)((int64_t)param_1 + 0x3c) ^ uVar2) - uVar2) ||
           (uVar1 = FUN_1807d3f50(param_1 + 6,8), (int)uVar1 == 0)))) &&
         ((param_3 == '\0' ||
          (uVar1 = FUN_180767c00(param_1 + 10,&unknown_var_8264_ptr,FUN_1808dfa70,param_1,9,0,1,*param_1,0)
          , (int)uVar1 == 0)))) {
        return 0;
      }
    }
    else {
      uVar1 = 0x1c;
    }
  }
  return uVar1;
}



uint64_t FUN_1808dfee7(uint64_t param_1)

{
  uint64_t uVar1;
  uint uVar2;
  char unaff_SIL;
  int64_t unaff_RDI;
  bool in_ZF;
  
  if ((in_ZF) && (*(int64_t *)(unaff_RDI + 0x48) == 0)) {
    uVar1 = FUN_1807682e0(param_1,0);
    if ((int)uVar1 == 0) {
      uVar2 = (int)*(uint *)(unaff_RDI + 0x3c) >> 0x1f;
      if (((int)((*(uint *)(unaff_RDI + 0x3c) ^ uVar2) - uVar2) < 8) &&
         (uVar1 = FUN_1807d3f50(unaff_RDI + 0x30,8), (int)uVar1 != 0)) {
        return uVar1;
      }
      if ((unaff_SIL != '\0') &&
         (uVar1 = FUN_180767c00(unaff_RDI + 0x50,&unknown_var_8264_ptr,FUN_1808dfa70), (int)uVar1 != 0)) {
        return uVar1;
      }
      return 0;
    }
  }
  else {
    uVar1 = 0x1c;
  }
  return uVar1;
}



uint64_t FUN_1808dff7e(void)

{
  return 0x1c;
}






// 函数: void FUN_1808dff88(void)
void FUN_1808dff88(void)

{
  return;
}






// 函数: void FUN_1808dffa0(int64_t *param_1,int32_t *param_2)
void FUN_1808dffa0(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int32_t *puVar6;
  int64_t lVar7;
  
  if ((param_1[3] != 0) && (iVar5 = FUN_180768940(), iVar5 != 0)) {
    return;
  }
  lVar1 = param_1[2];
  SystemMemoryAllocator(lVar1);
  if ((int)param_1[1] < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    puVar6 = (int32_t *)*param_1;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *param_2 = *puVar6;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    iVar5 = (int)param_1[1];
    if (0 < iVar5) {
      if (0 < iVar5 + -1) {
        puVar6 = (int32_t *)*param_1;
        lVar7 = (int64_t)(iVar5 + -1);
        if (0 < lVar7) {
          do {
            *puVar6 = puVar6[4];
            puVar6[1] = puVar6[5];
            puVar6[2] = puVar6[6];
            puVar6[3] = puVar6[7];
            lVar7 = lVar7 + -1;
            puVar6 = puVar6 + 4;
          } while (lVar7 != 0);
          iVar5 = (int)param_1[1];
        }
      }
      *(int *)(param_1 + 1) = iVar5 + -1;
    }
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(lVar1);
}






// 函数: void FUN_1808dffc6(void)
void FUN_1808dffc6(void)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *unaff_RBX;
  int32_t *unaff_RDI;
  
  lVar1 = unaff_RBX[2];
  SystemMemoryAllocator(lVar1);
  if ((int)unaff_RBX[1] < 1) {
    *unaff_RDI = 0;
    unaff_RDI[1] = 0;
    unaff_RDI[2] = 0;
    unaff_RDI[3] = 0;
  }
  else {
    puVar5 = (int32_t *)*unaff_RBX;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *unaff_RDI = *puVar5;
    unaff_RDI[1] = uVar2;
    unaff_RDI[2] = uVar3;
    unaff_RDI[3] = uVar4;
    iVar7 = (int)unaff_RBX[1];
    if (0 < iVar7) {
      if (0 < iVar7 + -1) {
        puVar5 = (int32_t *)*unaff_RBX;
        lVar6 = (int64_t)(iVar7 + -1);
        if (0 < lVar6) {
          do {
            *puVar5 = puVar5[4];
            puVar5[1] = puVar5[5];
            puVar5[2] = puVar5[6];
            puVar5[3] = puVar5[7];
            lVar6 = lVar6 + -1;
            puVar5 = puVar5 + 4;
          } while (lVar6 != 0);
          iVar7 = (int)unaff_RBX[1];
        }
      }
      *(int *)(unaff_RBX + 1) = iVar7 + -1;
    }
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(lVar1);
}






// 函数: void FUN_1808e0057(void)
void FUN_1808e0057(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e0090(uint64_t *param_1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lStackX_8;
  int iStack_98;
  uint uStack_94;
  uint64_t uStack_90;
  int64_t alStack_88 [4];
  int64_t *plStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  iStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  FUN_1808dffa0(param_1 + 2,&iStack_98);
  if (iStack_98 == 2) {
    return 0;
  }
  uVar1 = uStack_94;
  if (((iStack_98 != 1) || (uVar1 = FUN_1808dcad0(uStack_90,*param_1,&lStackX_8), uVar1 != 0)) ||
     (uVar1 = func_0x00018076a6b0(lStackX_8,2), uVar1 != 0)) goto FUN_1808e02ab;
  plStack_68 = alStack_88;
  alStack_88[0] = lStackX_8;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar1 = FUN_1808de260(&plStack_68,0x20564546);
  if (uVar1 == 0) {
    if (((uint)uStack_28 < 0x2c) || (0x8e < uStack_28._4_4_)) {
      if ((lStackX_8 != 0) && (FUN_180769080(lStackX_8), lStackX_8 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStackX_8,&unknown_var_2144_ptr,0xb8,1);
      }
      uVar1 = 0x45;
      goto FUN_1808e02ab;
    }
    uVar1 = FUN_18089d520(uStack_90,&plStack_68,0);
    if (uVar1 == 0) {
      uVar1 = func_0x0001808ddc00(&plStack_68);
      if (uVar1 == 0) {
        uVar1 = 0;
        if ((lStackX_8 != 0) && (FUN_180769080(lStackX_8), lStackX_8 != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStackX_8,&unknown_var_2144_ptr,0xb8,1);
        }
        goto FUN_1808e02ab;
      }
      goto LAB_1808e020c;
    }
    uVar2 = uVar1 - 0x1c;
    if (uVar2 < 0x2b) {
      uVar3 = 0x40004000401;
      goto LAB_1808e0201;
    }
LAB_1808e0207:
    uVar1 = 0xd;
  }
  else {
    if (0x26 < uVar1) goto LAB_1808e0207;
    uVar3 = 0x4010080000;
    uVar2 = uVar1;
LAB_1808e0201:
    if ((uVar3 >> ((int64_t)(int)uVar2 & 0x3fU) & 1) == 0) goto LAB_1808e0207;
  }
LAB_1808e020c:
  if ((lStackX_8 != 0) && (FUN_180769080(lStackX_8), lStackX_8 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStackX_8,&unknown_var_2144_ptr,0xb8,1);
  }
FUN_1808e02ab:
  uStack_94 = uVar1;
  FUN_1808e02d0(param_1 + 6,&iStack_98);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e00e8(void)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  uVar2 = FUN_1808dcad0();
  if ((uVar2 != 0) || (uVar2 = func_0x00018076a6b0(*(uint64_t *)(unaff_RBP + 0x67),2), uVar2 != 0)
     ) goto FUN_1808e02a0;
  lVar1 = *(int64_t *)(unaff_RBP + 0x67);
  *(int64_t *)(unaff_RBP + -9) = unaff_RBP + -0x29;
  *(int64_t *)(unaff_RBP + -0x29) = lVar1;
  *(uint64_t *)(unaff_RBP + 0x17) = 0;
  *(uint64_t *)(unaff_RBP + 0x1f) = 0;
  *(uint64_t *)(unaff_RBP + 0x27) = 0;
  *(uint64_t *)(unaff_RBP + 0x2f) = 0;
  *(uint64_t *)(unaff_RBP + 0x37) = 0;
  *(uint64_t *)(unaff_RBP + -0x21) = unaff_R15;
  *(uint64_t *)(unaff_RBP + -0x19) = unaff_R15;
  *(uint64_t *)(unaff_RBP + -1) = unaff_R15;
  *(uint64_t *)(unaff_RBP + 7) = unaff_R15;
  uVar2 = (uint)unaff_R15;
  *(uint *)(unaff_RBP + 0xf) = uVar2;
  uVar3 = FUN_1808de260(unaff_RBP + -9,0x20564546);
  if (uVar3 == 0) {
    if ((*(uint *)(unaff_RBP + 0x37) < 0x2c) || (0x8e < *(uint *)(unaff_RBP + 0x3b))) {
      if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
      }
      uVar2 = 0x45;
      goto FUN_1808e02a0;
    }
    uVar3 = FUN_18089d520(*(uint64_t *)(unaff_RBP + -0x31),unaff_RBP + -9,0);
    if (uVar3 == 0) {
      uVar3 = func_0x0001808ddc00(unaff_RBP + -9);
      if (uVar3 == 0) {
        if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
        }
        goto FUN_1808e02a0;
      }
      goto LAB_1808e020c;
    }
    uVar2 = uVar3 - 0x1c;
    if (uVar2 < 0x2b) {
      uVar4 = 0x40004000401;
      goto LAB_1808e0201;
    }
LAB_1808e0207:
    uVar3 = 0xd;
  }
  else {
    if (0x26 < uVar3) goto LAB_1808e0207;
    uVar4 = 0x4010080000;
    uVar2 = uVar3;
LAB_1808e0201:
    if ((uVar4 >> ((int64_t)(int)uVar2 & 0x3fU) & 1) == 0) goto LAB_1808e0207;
  }
LAB_1808e020c:
  uVar2 = uVar3;
  if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
  }
FUN_1808e02a0:
  *(uint *)(unaff_RBP + -0x35) = uVar2;
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x39);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x35);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x31);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x2d);
  FUN_1808e02d0(unaff_R14 + 0x30,unaff_RBP + -0x39);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e0119(void)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t in_RAX;
  uint64_t uVar4;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  lVar1 = *(int64_t *)(unaff_RBP + 0x67);
  *(uint64_t *)(unaff_RBP + -9) = in_RAX;
  *(int64_t *)(unaff_RBP + -0x29) = lVar1;
  *(uint64_t *)(unaff_RBP + 0x17) = 0;
  *(uint64_t *)(unaff_RBP + 0x1f) = 0;
  *(uint64_t *)(unaff_RBP + 0x27) = 0;
  *(uint64_t *)(unaff_RBP + 0x2f) = 0;
  *(uint64_t *)(unaff_RBP + 0x37) = 0;
  *(uint64_t *)(unaff_RBP + -0x21) = unaff_R15;
  *(uint64_t *)(unaff_RBP + -0x19) = unaff_R15;
  *(uint64_t *)(unaff_RBP + -1) = unaff_R15;
  *(uint64_t *)(unaff_RBP + 7) = unaff_R15;
  uVar3 = (uint)unaff_R15;
  *(uint *)(unaff_RBP + 0xf) = uVar3;
  uVar2 = FUN_1808de260(unaff_RBP + -9,0x20564546);
  if (uVar2 == 0) {
    if ((*(uint *)(unaff_RBP + 0x37) < 0x2c) || (0x8e < *(uint *)(unaff_RBP + 0x3b))) {
      if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
      }
      uVar3 = 0x45;
      goto LAB_1808e0298;
    }
    uVar2 = FUN_18089d520(*(uint64_t *)(unaff_RBP + -0x31),unaff_RBP + -9,0);
    if (uVar2 == 0) {
      uVar2 = func_0x0001808ddc00(unaff_RBP + -9);
      if (uVar2 == 0) {
        if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
        }
        goto LAB_1808e0298;
      }
      goto LAB_1808e020c;
    }
    uVar3 = uVar2 - 0x1c;
    if (uVar3 < 0x2b) {
      uVar4 = 0x40004000401;
      goto LAB_1808e0201;
    }
LAB_1808e0207:
    uVar2 = 0xd;
  }
  else {
    if (0x26 < uVar2) goto LAB_1808e0207;
    uVar4 = 0x4010080000;
    uVar3 = uVar2;
LAB_1808e0201:
    if ((uVar4 >> ((int64_t)(int)uVar3 & 0x3fU) & 1) == 0) goto LAB_1808e0207;
  }
LAB_1808e020c:
  uVar3 = uVar2;
  if ((lVar1 != 0) && (FUN_180769080(lVar1), lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2144_ptr,0xb8,1);
  }
LAB_1808e0298:
  *(uint *)(unaff_RBP + -0x35) = uVar3;
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x39);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x35);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x31);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x2d);
  FUN_1808e02d0(unaff_R14 + 0x30,unaff_RBP + -0x39);
  return 1;
}



int8_t FUN_1808e02a0(void)

{
  int64_t unaff_RBP;
  int32_t unaff_EDI;
  int64_t unaff_R14;
  
  *(int32_t *)(unaff_RBP + -0x35) = unaff_EDI;
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x39);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x35);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x31);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x2d);
  FUN_1808e02d0(unaff_R14 + 0x30,unaff_RBP + -0x39);
  return 1;
}



int8_t FUN_1808e02ab(void)

{
  int64_t unaff_RBP;
  int64_t unaff_R14;
  
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x39);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x35);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x31);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x2d);
  FUN_1808e02d0(unaff_R14 + 0x30,unaff_RBP + -0x39);
  return 1;
}






// 函数: void FUN_1808e02d0(int64_t *param_1,uint64_t *param_2)
void FUN_1808e02d0(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = param_1[2];
  SystemMemoryAllocator(lVar1);
  uVar6 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  iVar5 = (int)param_1[1] + 1;
  iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar6) - uVar6;
  if (iVar3 < iVar5) {
    iVar7 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar5;
    if (iVar5 <= iVar7) {
      iVar3 = iVar7;
    }
    if (iVar3 < 4) {
      iVar7 = 4;
    }
    else if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    iVar3 = FUN_1807d3f50(param_1,iVar7);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  uVar2 = param_2[1];
  puVar4 = (uint64_t *)((int64_t)(int)param_1[1] * 0x10 + *param_1);
  *puVar4 = *param_2;
  puVar4[1] = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                    // WARNING: Subroutine does not return
  SystemMemoryManager(lVar1);
}



uint64_t FUN_1808e03a0(int64_t param_1,int32_t *param_2,char param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  LOCK();
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  UNLOCK();
  plVar1 = (int64_t *)(param_1 + 0x10);
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  if (param_3 == '\0') {
    uVar9 = FUN_1808e02d0(plVar1,&uStack_18);
    if ((int)uVar9 == 0) {
      uVar9 = 0;
    }
    return uVar9;
  }
  uVar9 = *(uint64_t *)(param_1 + 0x20);
  SystemMemoryAllocator(uVar9);
  if ((-1 < *(int *)(param_1 + 0x18)) &&
     (iVar7 = FUN_1808dfdc0(plVar1,*(int *)(param_1 + 0x18) + 1), iVar7 == 0)) {
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar4 = *plVar1;
      iVar7 = *(int *)(param_1 + 0x18) + -1;
      lVar10 = (int64_t)iVar7;
      lVar2 = lVar4 + 0x10;
      if (-1 < iVar7) {
        puVar8 = (uint64_t *)(lVar10 * 0x10 + lVar2);
        do {
          lVar10 = lVar10 + -1;
          puVar3 = (uint64_t *)((lVar4 - lVar2) + (int64_t)puVar8);
          uVar6 = puVar3[1];
          *puVar8 = *puVar3;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + -2;
        } while (-1 < lVar10);
      }
    }
    puVar5 = (int32_t *)*plVar1;
    *puVar5 = uStack_18;
    puVar5[1] = uStack_14;
    puVar5[2] = uStack_10;
    puVar5[3] = uStack_c;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    // WARNING: Subroutine does not return
    SystemMemoryManager(uVar9);
  }
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e04b0(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lStackX_18;
  int64_t alStack_78 [4];
  int64_t *plStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uVar2 = FUN_1808dcad0(param_1,param_2,&lStackX_18);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = func_0x00018076a6b0(lStackX_18,2);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  plStack_58 = alStack_78;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  alStack_78[0] = lStackX_18;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar1 = FUN_1808de260(&plStack_58,0x20564546);
  uVar2 = (uint64_t)(int)uVar1;
  if (uVar1 == 0) {
    if ((uint)uStack_18 < 0x2c) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    if (0x8e < uStack_18._4_4_) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    uVar1 = FUN_18089d520(param_1,&plStack_58,0);
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) {
      uVar1 = func_0x0001808ddc00(&plStack_58);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1808e05f2;
    }
    if ((uVar1 - 0x1c < 0x2b) && ((0x40004000401U >> ((uint64_t)(uVar1 - 0x1c) & 0x3f) & 1) != 0))
    goto LAB_1808e05f2;
  }
  else if (uVar1 < 0x27) {
    if ((0x4010080000U >> (uVar2 & 0x3f) & 1) == 0) {
      uVar2 = 0xd;
    }
    goto LAB_1808e05f2;
  }
  uVar2 = 0xd;
LAB_1808e05f2:
  if ((lStackX_18 != 0) && (FUN_180769080(lStackX_18), lStackX_18 != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStackX_18,&unknown_var_2144_ptr,0xb8,1);
  }
  return uVar2 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e04e9(void)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  int8_t *puStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  int32_t uStack0000000000000068;
  uint64_t uStack0000000000000070;
  uint64_t uStack0000000000000078;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  uint uStack0000000000000090;
  uint uStack0000000000000094;
  int64_t in_stack_000000c0;
  
  puStack0000000000000050 = (int8_t *)&stack0x00000030;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  _uStack0000000000000090 = 0;
  lStack0000000000000030 = in_stack_000000c0;
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uVar1 = FUN_1808de260(&stack0x00000050,0x20564546);
  uVar2 = (uint64_t)(int)uVar1;
  if (uVar1 == 0) {
    if (uStack0000000000000090 < 0x2c) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    if (0x8e < uStack0000000000000094) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    uVar1 = FUN_18089d520();
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) {
      uVar1 = func_0x0001808ddc00(&stack0x00000050);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1808e05f2;
    }
    if ((uVar1 - 0x1c < 0x2b) && ((0x40004000401U >> ((uint64_t)(uVar1 - 0x1c) & 0x3f) & 1) != 0))
    goto LAB_1808e05f2;
  }
  else if (uVar1 < 0x27) {
    if ((0x4010080000U >> (uVar2 & 0x3f) & 1) == 0) {
      uVar2 = 0xd;
    }
    goto LAB_1808e05f2;
  }
  uVar2 = 0xd;
LAB_1808e05f2:
  if (in_stack_000000c0 != 0) {
    FUN_180769080(in_stack_000000c0);
    if (in_stack_000000c0 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_stack_000000c0,&unknown_var_2144_ptr,0xb8,1)
      ;
    }
  }
  return uVar2 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808e050f(void)

{
  uint uVar1;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t uVar2;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  int32_t uStack0000000000000068;
  uint uStack0000000000000090;
  uint uStack0000000000000094;
  
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  _uStack0000000000000090 = in_RAX;
  uVar1 = FUN_1808de260();
  uVar2 = (uint64_t)(int)uVar1;
  if (uVar1 == 0) {
    if (uStack0000000000000090 < 0x2c) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    if (0x8e < uStack0000000000000094) {
      uVar2 = 0x45;
      goto LAB_1808e05f2;
    }
    uVar1 = FUN_18089d520();
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) {
      uVar1 = func_0x0001808ddc00(&stack0x00000050);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1808e05f2;
    }
    if ((uVar1 - 0x1c < 0x2b) && ((0x40004000401U >> ((uint64_t)(uVar1 - 0x1c) & 0x3f) & 1) != 0))
    goto LAB_1808e05f2;
  }
  else if (uVar1 < 0x27) {
    if ((0x4010080000U >> (uVar2 & 0x3f) & 1) == 0) {
      uVar2 = 0xd;
    }
    goto LAB_1808e05f2;
  }
  uVar2 = 0xd;
LAB_1808e05f2:
  if (unaff_RBX != 0) {
    FUN_180769080();
    if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  return uVar2 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808e05ff(void)

{
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  
  FUN_180769080();
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_EDI;
}






// 函数: void FUN_1808e0646(void)
void FUN_1808e0646(void)

{
  return;
}



uint64_t FUN_1808e0650(int64_t param_1)

{
  uint64_t uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = *(uint64_t *)(param_1 + 0x20);
    SystemMemoryAllocator(uVar1);
                    // WARNING: Subroutine does not return
    SystemMemoryManager(uVar1);
  }
  return 0;
}






