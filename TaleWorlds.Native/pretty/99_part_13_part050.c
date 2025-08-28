/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part050.c - 8 个函数

// 函数: void FUN_1808c7d0e(void)
void FUN_1808c7d0e(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000030);
}



uint64_t FUN_1808c7d50(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) < 1) {
    return 0x1c;
  }
  iVar2 = *(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = iVar2;
  if ((*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c) + iVar2 == 0) &&
     (uVar1 = FUN_1808c7dc0(param_1,1), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808c7dc0(int64_t param_1,int8_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar2 = FUN_1808ed480(*(uint64_t *)(uVar5 + *(int64_t *)(param_1 + 0x10)),param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x18));
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x18)) goto LAB_1808c7ea2;
    if ((0 < (int)uVar3) && (*(int64_t *)(param_1 + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x10),
                    &processed_var_8432_ptr,0x100,1);
    }
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(int32_t *)(param_1 + 0x1c) = 0;
    uVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 0x10) + (int64_t)iVar1 * 8,0,(int64_t)-iVar1 << 3);
  }
  *(int32_t *)(param_1 + 0x18) = 0;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    RenderingTextureManager0(param_1 + 0x10,0);
  }
LAB_1808c7ea2:
  *(int32_t *)(param_1 + 4) = 0;
  return 0;
}



int32_t FUN_1808c7f30(int64_t param_1,int32_t *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int aiStackX_10 [2];
  
  if (param_2 == (int32_t *)0x0) {
    return 0x1c;
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  while( true ) {
    if ((puVar2 < *(uint64_t **)(param_1 + 0x10)) ||
       (*(uint64_t **)(param_1 + 0x10) + *(int *)(param_1 + 0x18) <= puVar2)) {
      *param_2 = 3;
      return 0;
    }
    iVar1 = FUN_1808ecac0(*puVar2,aiStackX_10);
    if ((iVar1 != 0) || (aiStackX_10[0] == 4)) break;
    if (aiStackX_10[0] == 2) {
      *param_2 = 2;
      return 0;
    }
    puVar2 = puVar2 + 1;
  }
  *param_2 = 4;
  return 0;
}



uint64_t FUN_1808c7f57(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int iVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  int in_stack_00000038;
  
  while( true ) {
    if ((param_3 < *(uint64_t **)(unaff_RDI + 0x10)) ||
       (*(uint64_t **)(unaff_RDI + 0x10) + *(int *)(unaff_RDI + 0x18) <= param_3)) {
      *unaff_RSI = 3;
      return 0;
    }
    iVar1 = FUN_1808ecac0(*param_3,&stack0x00000038);
    if ((iVar1 != 0) || (in_stack_00000038 == 4)) break;
    if (in_stack_00000038 == 2) {
      *unaff_RSI = 2;
      return 0;
    }
    param_3 = param_3 + 1;
  }
  *unaff_RSI = 4;
  return 0;
}



uint64_t FUN_1808c7fb2(void)

{
  int32_t *unaff_RSI;
  
  *unaff_RSI = 4;
  return 0;
}



uint64_t FUN_1808c7fca(void)

{
  int32_t *unaff_RSI;
  
  *unaff_RSI = 3;
  return 0;
}



int FUN_1808c7ff0(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  void *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  char cStack_38;
  
  if (0 < *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) {
    uVar7 = 0;
    uVar8 = uVar7;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        iVar6 = (int)uVar7;
        lVar1 = *(int64_t *)(*(int64_t *)(uVar8 + *(int64_t *)(param_1 + 0x10)) + 8);
        cVar2 = FUN_1808c5cb0(param_3,lVar1);
        if (cVar2 != '\0') {
          FUN_1808ed480(*(uint64_t *)(lVar1 + 0x20),0);
          if ((-1 < iVar6) && (iVar3 = *(int *)(param_1 + 0x18), iVar6 < iVar3)) {
            iVar5 = (iVar3 - iVar6) + -1;
            if (0 < iVar5) {
              lVar1 = *(int64_t *)(param_1 + 0x10) + (int64_t)iVar6 * 8;
                    // WARNING: Subroutine does not return
              memmove(lVar1,lVar1 + 8,(int64_t)iVar5 << 3);
            }
            *(int *)(param_1 + 0x18) = iVar3 + -1;
          }
          iVar6 = iVar6 + -1;
          uVar8 = uVar8 - 8;
        }
        uVar7 = (uint64_t)(iVar6 + 1U);
        uVar8 = uVar8 + 8;
      } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x18));
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      puStack_88 = &memory_allocator_3352_ptr;
      uStack_80 = *(uint64_t *)(param_2 + 800);
      uStack_78 = *(uint64_t *)(param_2 + 0x90);
      lStack_70 = param_1 + 0x10;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0xffffffff;
      uStack_3c = 0;
      cStack_38 = '\0';
      uStack_68 = 3;
      iVar6 = FUN_1808c8720(&puStack_88,*(uint64_t *)(param_1 + 8));
      if (iVar6 != 0) {
        iVar3 = SystemStatusChecker(&uStack_60);
        if ((iVar3 == 0) && (iVar3 = FUN_1807d3080(&uStack_50), iVar3 == 0)) {
          uStack_40 = 0xffffffff;
          uStack_3c = 0;
        }
        FUN_1807d3080(&uStack_50);
        SystemStatusChecker(&uStack_60);
        return iVar6;
      }
      uVar9 = *(uint *)(param_1 + 4) >> 1;
      uVar4 = 2;
      if ((uVar9 & 1) != 0 || cStack_38 != '\0') {
        uVar4 = 0;
      }
      *(uint *)(param_1 + 4) =
           (-(uint)((uVar9 & 1) != 0 || cStack_38 != '\0') & 2 | *(uint *)(param_1 + 4)) & ~uVar4;
      iVar6 = SystemStatusChecker(&uStack_60);
      if ((iVar6 == 0) && (iVar6 = FUN_1807d3080(&uStack_50), iVar6 == 0)) {
        uStack_40 = 0xffffffff;
        uStack_3c = 0;
      }
      FUN_1807d3080(&uStack_50);
      SystemStatusChecker(&uStack_60);
    }
  }
  return 0;
}



int FUN_1808c8033(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar7;
  int64_t unaff_RDI;
  uint uVar8;
  int64_t in_R11;
  uint uVar9;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  uVar9 = (uint)unaff_R12;
  uVar7 = unaff_R12 & 0xffffffff;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R14;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(uVar7 + *(int64_t *)(unaff_RDI + 0x10)) + 8);
    cVar3 = FUN_1808c5cb0();
    if (cVar3 != '\0') {
      FUN_1808ed480(*(uint64_t *)(lVar1 + 0x20),0);
      if ((-1 < unaff_EBX) && (iVar4 = *(int *)(unaff_RDI + 0x18), unaff_EBX < iVar4)) {
        iVar6 = (iVar4 - unaff_EBX) + -1;
        if (0 < iVar6) {
          lVar1 = *(int64_t *)(unaff_RDI + 0x10) + (int64_t)unaff_EBX * 8;
                    // WARNING: Subroutine does not return
          memmove(lVar1,lVar1 + 8,(int64_t)iVar6 << 3);
        }
        *(int *)(unaff_RDI + 0x18) = iVar4 + -1;
      }
      unaff_EBX = unaff_EBX + -1;
      uVar7 = uVar7 - 8;
    }
    unaff_EBX = unaff_EBX + 1;
    uVar7 = uVar7 + 8;
  } while (unaff_EBX < *(int *)(unaff_RDI + 0x18));
  if ((*(byte *)(unaff_RDI + 4) & 1) != 0) {
    uVar2 = *(uint64_t *)(unaff_RDI + 8);
    *(void **)(unaff_RBP + -0x60) = &memory_allocator_3352_ptr;
    *(uint64_t *)(unaff_RBP + -0x58) = *(uint64_t *)(unaff_R13 + 800);
    *(uint64_t *)(unaff_RBP + -0x50) = *(uint64_t *)(unaff_R13 + 0x90);
    *(int64_t *)(unaff_RBP + -0x48) = unaff_RDI + 0x10;
    *(uint64_t *)(unaff_RBP + -0x38) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x30) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x28) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x20) = unaff_R12;
    *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
    *(uint *)(unaff_RBP + -0x14) = uVar9;
    *(char *)(unaff_RBP + -0x10) = (char)unaff_R12;
    *(int32_t *)(unaff_RBP + -0x40) = 3;
    iVar4 = FUN_1808c8720(unaff_RBP + -0x60,uVar2);
    if (iVar4 != 0) {
      iVar6 = SystemStatusChecker(unaff_RBP + -0x38);
      if ((iVar6 == 0) && (iVar6 = FUN_1807d3080(unaff_RBP + -0x28), iVar6 == 0)) {
        *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
        *(uint *)(unaff_RBP + -0x14) = uVar9;
      }
      FUN_1807d3080(unaff_RBP + -0x28);
      SystemStatusChecker(unaff_RBP + -0x38);
      return iVar4;
    }
    uVar8 = *(uint *)(unaff_RDI + 4) >> 1;
    uVar5 = 2;
    if ((uVar8 & 1) != 0 || *(char *)(unaff_RBP + -0x10) != '\0') {
      uVar5 = uVar9;
    }
    *(uint *)(unaff_RDI + 4) =
         (-(uint)((uVar8 & 1) != 0 || *(char *)(unaff_RBP + -0x10) != '\0') & 2 |
         *(uint *)(unaff_RDI + 4)) & ~uVar5;
    iVar4 = SystemStatusChecker(unaff_RBP + -0x38);
    if ((iVar4 == 0) && (iVar4 = FUN_1807d3080(unaff_RBP + -0x28), iVar4 == 0)) {
      *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
      *(uint *)(unaff_RBP + -0x14) = uVar9;
    }
    FUN_1807d3080(unaff_RBP + -0x28);
    SystemStatusChecker(unaff_RBP + -0x38);
  }
  return 0;
}



int FUN_1808c80bf(void)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint uVar5;
  uint uVar6;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  
  if ((*(byte *)(unaff_RDI + 4) & 1) != 0) {
    uVar1 = *(uint64_t *)(unaff_RDI + 8);
    *(void **)(unaff_RBP + -0x60) = &memory_allocator_3352_ptr;
    *(uint64_t *)(unaff_RBP + -0x58) = *(uint64_t *)(unaff_R13 + 800);
    *(uint64_t *)(unaff_RBP + -0x50) = *(uint64_t *)(unaff_R13 + 0x90);
    *(int64_t *)(unaff_RBP + -0x48) = unaff_RDI + 0x10;
    *(uint64_t *)(unaff_RBP + -0x38) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x30) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x28) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x20) = unaff_R12;
    *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
    uVar6 = (uint)unaff_R12;
    *(uint *)(unaff_RBP + -0x14) = uVar6;
    *(char *)(unaff_RBP + -0x10) = (char)unaff_R12;
    *(int32_t *)(unaff_RBP + -0x40) = 3;
    iVar2 = FUN_1808c8720(unaff_RBP + -0x60,uVar1);
    if (iVar2 != 0) {
      iVar3 = SystemStatusChecker(unaff_RBP + -0x38);
      if ((iVar3 == 0) && (iVar3 = FUN_1807d3080(unaff_RBP + -0x28), iVar3 == 0)) {
        *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
        *(uint *)(unaff_RBP + -0x14) = uVar6;
      }
      FUN_1807d3080(unaff_RBP + -0x28);
      SystemStatusChecker(unaff_RBP + -0x38);
      return iVar2;
    }
    uVar5 = *(uint *)(unaff_RDI + 4) >> 1;
    uVar4 = 2;
    if ((uVar5 & 1) != 0 || *(char *)(unaff_RBP + -0x10) != '\0') {
      uVar4 = uVar6;
    }
    *(uint *)(unaff_RDI + 4) =
         (-(uint)((uVar5 & 1) != 0 || *(char *)(unaff_RBP + -0x10) != '\0') & 2 |
         *(uint *)(unaff_RDI + 4)) & ~uVar4;
    iVar2 = SystemStatusChecker(unaff_RBP + -0x38);
    if ((iVar2 == 0) && (iVar2 = FUN_1807d3080(unaff_RBP + -0x28), iVar2 == 0)) {
      *(int32_t *)(unaff_RBP + -0x18) = 0xffffffff;
      *(uint *)(unaff_RBP + -0x14) = uVar6;
    }
    FUN_1807d3080(unaff_RBP + -0x28);
    SystemStatusChecker(unaff_RBP + -0x38);
  }
  return 0;
}



uint64_t FUN_1808c81f0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint64_t uVar6;
  byte bVar7;
  uint uVar8;
  int64_t lVar9;
  int iVar10;
  
  lVar9 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = param_3;
  uVar8 = *(uint *)(param_3 + 0xf8) >> 3;
  if (((byte)(*(uint *)(lVar9 + 0xf8) >> 3) & 1) != ((byte)uVar8 & 1)) {
    iVar10 = *(int *)(param_1 + 0x54);
    if ((uVar8 & 1) == 0) {
      if ((0 < iVar10) &&
         (*(int *)(param_1 + 0x54) = iVar10 + -1,
         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x4c) + iVar10 + -1 == 0)) {
        FUN_1808c7dc0(param_1,0);
      }
    }
    else {
      *(int *)(param_1 + 0x54) = iVar10 + 1;
      if (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x4c) + iVar10 + 1 == 1) {
        FUN_1808c7b30(param_1,param_3,*(uint64_t *)(param_2 + 0x90),*(uint64_t *)(param_2 + 800)
                     );
      }
    }
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar9 = 0;
    do {
      uVar6 = func_0x000180868480(*(uint64_t *)(lVar9 + *(int64_t *)(param_1 + 0x20)),param_3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0x28));
  }
  uVar8 = *(uint *)(param_3 + 0xf8);
  bVar1 = (byte)(uVar8 >> 5) & 1;
  bVar2 = (byte)(uVar8 >> 6) & 1;
  bVar3 = (byte)(uVar8 >> 9) & 1;
  bVar4 = (byte)(uVar8 >> 10) & 1;
  bVar7 = (byte)(uVar8 >> 0xc) & 1;
  bVar5 = (byte)(uVar8 >> 0xb) & 1;
  *(uint *)(param_1 + 4) =
       (((((~((bVar1 ^ 1) << 2) & ((uint)bVar1 << 2 | *(uint *)(param_1 + 4)) | (uint)bVar2 << 3) &
           ~((bVar2 ^ 1) << 3) | (uint)bVar3 << 4) & ~((bVar3 ^ 1) << 4) | (uint)bVar4 << 5) &
         ~((bVar4 ^ 1) << 5) | (uint)bVar5 << 6) & ~((bVar5 ^ 1) << 6) | (uint)bVar7 << 7) &
       ~((bVar7 ^ 1) << 7);
  return 0;
}



uint64_t FUN_1808c8390(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  if ((*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) == 1) &&
     (uVar1 = FUN_1808c7b30(param_1,*(uint64_t *)(param_1 + 8),*(uint64_t *)(param_2 + 0x90),
                            *(uint64_t *)(param_2 + 800)), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808c83d0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t uStackX_8;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c) != 1) {
    return 0;
  }
  uStackX_8 = 0;
  iVar1 = RenderingSystemOptimizer(&uStackX_8);
  if (iVar1 == 0) {
    iVar1 = FUN_1808c7b30(param_1,*(uint64_t *)(param_1 + 8),*(uint64_t *)(param_2 + 0x90),
                          *(uint64_t *)(param_2 + 800));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&uStackX_8);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_8);
}



uint64_t FUN_1808c8480(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if ((*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x58) == 1) &&
     (uVar1 = FUN_1808c7b30(param_1,*(uint64_t *)(param_1 + 8),param_2,param_3), (int)uVar1 != 0))
  {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c84b0(int64_t param_1,int64_t *param_2)
void FUN_1808c84b0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  if ((((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x44) != 0)) ||
      (*(int *)(param_1 + 0x48) != 0)) || (*(int *)(param_1 + 0x4c) != 0)) {
    lVar1 = (**(code **)(*param_2 + 0x340))(param_2,param_1 + 0x40,1);
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_1 + 0x40,auStack_38);
    }
    if (((*(int *)(lVar1 + 0x58) == 0) && (*(int *)(lVar1 + 0x5c) == 0)) &&
       ((*(int *)(lVar1 + 0x60) == 0 && (*(int *)(lVar1 + 100) == 0)))) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c8550(int64_t param_1,int64_t param_2)
void FUN_1808c8550(int64_t param_1,int64_t param_2)

{
  int32_t *puVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  for (puVar4 = *(int32_t **)(param_2 + 0xd8);
      (puVar1 = *(int32_t **)(param_2 + 0xd8), puVar1 <= puVar4 &&
      (puVar4 < puVar1 + (int64_t)*(int *)(param_2 + 0xe0) * 5)); puVar4 = puVar4 + 5) {
    plVar3 = (int64_t *)
             (**(code **)(**(int64_t **)(param_1 + 8) + 0x128))
                       (*(int64_t **)(param_1 + 8),puVar4,
                        CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
    if (plVar3 == (int64_t *)0x0) {
      uStack_60 = (uint)*(byte *)((int64_t)puVar4 + 0xf);
      uStack_68 = (uint)*(byte *)((int64_t)puVar4 + 0xe);
      uStack_70 = (uint)*(byte *)((int64_t)puVar4 + 0xd);
      uStack_78 = (uint)*(byte *)(puVar4 + 3);
      uStack_80 = (uint)*(byte *)((int64_t)puVar4 + 0xb);
      uStack_88 = (uint)*(byte *)((int64_t)puVar4 + 10);
      uStack_90 = (uint)*(byte *)((int64_t)puVar4 + 9);
      uStack_98 = (uint)*(byte *)(puVar4 + 2);
      uStack_a0 = (uint)*(ushort *)((int64_t)puVar4 + 6);
      uStack_a8 = (uint)*(ushort *)(puVar4 + 1);
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_58,0x27,&processed_var_8960_ptr,*puVar4);
    }
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
    if (iVar2 != 0) break;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c8720(int64_t param_1,int32_t *param_2)
void FUN_1808c8720(int64_t param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int8_t auStack_f8 [32];
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  int8_t uStack_88;
  char acStack_87 [7];
  int32_t *puStack_80;
  int32_t *puStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_88 = 1;
  puStack_80 = param_2;
  puStack_78 = param_2;
  iVar2 = FUN_1807d3460(param_1 + 0x28,&puStack_80,&uStack_88,acStack_87);
  if ((iVar2 == 0) && (acStack_87[0] == '\0')) {
    for (uVar5 = *(uint64_t *)(param_2 + 0x28);
        (*(uint64_t *)(param_2 + 0x28) <= uVar5 &&
        (uVar5 < (int64_t)(int)param_2[0x2a] * 0x10 + *(uint64_t *)(param_2 + 0x28)));
        uVar5 = uVar5 + 0x10) {
      plVar3 = (int64_t *)
               (**(code **)(**(int64_t **)(param_1 + 8) + 0x128))
                         (*(int64_t **)(param_1 + 8),uVar5,1);
      if (plVar3 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        SystemController(uVar5,auStack_70);
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
      if (iVar2 != 0) goto FUN_1808c8ad4;
    }
    lVar4 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x2f0))
                      (*(int64_t **)(param_1 + 8),param_2 + 0xc,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_2 + 0xc,auStack_70);
    }
    iVar2 = FUN_1808c8ba0(lVar4 + 0x38,*(uint64_t *)(param_1 + 8),param_1);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1808c8ba0(lVar4 + 0x48,*(uint64_t *)(param_1 + 8),param_1), iVar2 == 0)) {
      puVar1 = *(uint64_t **)(lVar4 + 0x68);
      while (puVar1 != (uint64_t *)(lVar4 + 0x68)) {
        iVar2 = FUN_1808c8ba0(puVar1 + 0x10,*(uint64_t *)(param_1 + 8),param_1);
        if ((iVar2 != 0) ||
           (iVar2 = FUN_1808c8ba0(puVar1 + 0x12,*(uint64_t *)(param_1 + 8),param_1), iVar2 != 0))
        goto FUN_1808c8ad4;
        if (puVar1 != (uint64_t *)(lVar4 + 0x68)) {
          puVar1 = (uint64_t *)*puVar1;
        }
      }
      for (puVar7 = *(int32_t **)(param_2 + 0x20);
          (puStack_80 = puVar7, *(int32_t **)(param_2 + 0x20) <= puVar7 &&
          (puVar7 < *(int32_t **)(param_2 + 0x20) + (int64_t)(int)param_2[0x22] * 4));
          puVar7 = puVar7 + 4) {
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x270))
                          (*(int64_t **)(param_1 + 8),puVar7,1);
        if (lVar4 == 0) {
          uStack_90 = (uint)*(byte *)((int64_t)puVar7 + 0xf);
          uStack_98 = (uint)*(byte *)((int64_t)puVar7 + 0xe);
          uStack_a0 = (uint)*(byte *)((int64_t)puVar7 + 0xd);
          uStack_a8 = (uint)*(byte *)(puVar7 + 3);
          uStack_b0 = (uint)*(byte *)((int64_t)puVar7 + 0xb);
          uStack_b8 = (uint)*(byte *)((int64_t)puVar7 + 10);
          uStack_c0 = (uint)*(byte *)((int64_t)puVar7 + 9);
          uStack_c8 = (uint)*(byte *)(puVar7 + 2);
          uStack_d0 = (uint)*(ushort *)((int64_t)puVar7 + 6);
          uStack_d8 = (uint)*(ushort *)(puVar7 + 1);
                    // WARNING: Subroutine does not return
          SystemDataValidator(auStack_70,0x27,&processed_var_8960_ptr,*puVar7);
        }
        for (puVar6 = *(int32_t **)(lVar4 + 0x58);
            (*(int32_t **)(lVar4 + 0x58) <= puVar6 &&
            (puVar6 < *(int32_t **)(lVar4 + 0x58) + (int64_t)*(int *)(lVar4 + 0x60) * 4));
            puVar6 = puVar6 + 4) {
          plVar3 = (int64_t *)
                   (**(code **)(**(int64_t **)(param_1 + 8) + 0x128))
                             (*(int64_t **)(param_1 + 8),puVar6,1);
          if (plVar3 == (int64_t *)0x0) {
            uStack_90 = (uint)*(byte *)((int64_t)puVar6 + 0xf);
            uStack_98 = (uint)*(byte *)((int64_t)puVar6 + 0xe);
            uStack_a0 = (uint)*(byte *)((int64_t)puVar6 + 0xd);
            uStack_a8 = (uint)*(byte *)(puVar6 + 3);
            uStack_b0 = (uint)*(byte *)((int64_t)puVar6 + 0xb);
            uStack_b8 = (uint)*(byte *)((int64_t)puVar6 + 10);
            uStack_c0 = (uint)*(byte *)((int64_t)puVar6 + 9);
            uStack_c8 = (uint)*(byte *)(puVar6 + 2);
            uStack_d0 = (uint)*(ushort *)((int64_t)puVar6 + 6);
            uStack_d8 = (uint)*(ushort *)(puVar6 + 1);
                    // WARNING: Subroutine does not return
            SystemDataValidator(auStack_70,0x27,&processed_var_8960_ptr,*puVar6);
          }
          iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
          if (iVar2 != 0) goto FUN_1808c8ad4;
        }
      }
    }
  }
FUN_1808c8ad4:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}






// 函数: void FUN_1808c8775(void)
void FUN_1808c8775(void)

{
  uint64_t *puVar1;
  char in_AL;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t unaff_RSI;
  int32_t *puVar7;
  int64_t unaff_R15;
  uint64_t in_stack_00000070;
  uint64_t in_stack_000000b0;
  
  if (in_stack_00000070._1_1_ == in_AL) {
    for (uVar5 = *(uint64_t *)(unaff_RSI + 0xa0);
        (*(uint64_t *)(unaff_RSI + 0xa0) <= uVar5 &&
        (uVar5 < (int64_t)*(int *)(unaff_RSI + 0xa8) * 0x10 + *(uint64_t *)(unaff_RSI + 0xa0)));
        uVar5 = uVar5 + 0x10) {
      plVar3 = (int64_t *)
               (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x128))
                         (*(int64_t **)(unaff_R15 + 8),uVar5,1);
      if (plVar3 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        SystemController(uVar5,&stack0x00000088);
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (iVar2 != 0) goto LAB_1808c8aa4;
    }
    lVar4 = (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x2f0))
                      (*(int64_t **)(unaff_R15 + 8),unaff_RSI + 0x30,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(unaff_RSI + 0x30,&stack0x00000088);
    }
    iVar2 = FUN_1808c8ba0(lVar4 + 0x38,*(uint64_t *)(unaff_R15 + 8));
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1808c8ba0(lVar4 + 0x48,*(uint64_t *)(unaff_R15 + 8)), iVar2 == 0)) {
      puVar1 = *(uint64_t **)(lVar4 + 0x68);
      while (puVar1 != (uint64_t *)(lVar4 + 0x68)) {
        iVar2 = FUN_1808c8ba0(puVar1 + 0x10,*(uint64_t *)(unaff_R15 + 8));
        if ((iVar2 != 0) ||
           (iVar2 = FUN_1808c8ba0(puVar1 + 0x12,*(uint64_t *)(unaff_R15 + 8)), iVar2 != 0))
        goto LAB_1808c8aa4;
        if (puVar1 != (uint64_t *)(lVar4 + 0x68)) {
          puVar1 = (uint64_t *)*puVar1;
        }
      }
      for (puVar7 = *(int32_t **)(unaff_RSI + 0x80);
          (*(int32_t **)(unaff_RSI + 0x80) <= puVar7 &&
          (puVar7 < *(int32_t **)(unaff_RSI + 0x80) + (int64_t)*(int *)(unaff_RSI + 0x88) * 4));
          puVar7 = puVar7 + 4) {
        lVar4 = (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x270))
                          (*(int64_t **)(unaff_R15 + 8),puVar7,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(&stack0x00000088,0x27,&processed_var_8960_ptr,*puVar7,*(int16_t *)(puVar7 + 1));
        }
        for (puVar6 = *(int32_t **)(lVar4 + 0x58);
            (*(int32_t **)(lVar4 + 0x58) <= puVar6 &&
            (puVar6 < *(int32_t **)(lVar4 + 0x58) + (int64_t)*(int *)(lVar4 + 0x60) * 4));
            puVar6 = puVar6 + 4) {
          plVar3 = (int64_t *)
                   (**(code **)(**(int64_t **)(unaff_R15 + 8) + 0x128))
                             (*(int64_t **)(unaff_R15 + 8),puVar6,1);
          if (plVar3 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(&stack0x00000088,0x27,&processed_var_8960_ptr,*puVar6,*(int16_t *)(puVar6 + 1));
          }
          iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (iVar2 != 0) goto LAB_1808c8aa4;
        }
      }
    }
  }
LAB_1808c8aa4:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c8ad4(void)
void FUN_1808c8ad4(void)

{
  uint64_t in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c8af0(int64_t param_1,int64_t param_2)
void FUN_1808c8af0(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  piVar1 = (int *)(param_2 + 0xd8);
  if ((((*piVar1 != 0) || (*(int *)(param_2 + 0xdc) != 0)) || (*(int *)(param_2 + 0xe0) != 0)) ||
     (*(int *)(param_2 + 0xe4) != 0)) {
    lVar2 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x288))
                      (*(int64_t **)(param_1 + 8),piVar1,1);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(piVar1,auStack_38);
    }
    if ((*(uint *)(lVar2 + 0xf8) >> 2 & 1) == 0) {
      FUN_1808c8720(param_1,lVar2);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c8ba0(uint64_t *param_1,int64_t *param_2,uint64_t param_3)
void FUN_1808c8ba0(uint64_t *param_1,int64_t *param_2,uint64_t param_3)

{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint64_t uStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  uStack_78 = param_3;
  for (puVar3 = (int32_t *)*param_1;
      ((int32_t *)*param_1 <= puVar3 &&
      (puVar3 < (int32_t *)*param_1 + (int64_t)*(int *)(param_1 + 1) * 6)); puVar3 = puVar3 + 6)
  {
    plVar2 = (int64_t *)(**(code **)(*param_2 + 0x128))(param_2,puVar3,1);
    if (plVar2 == (int64_t *)0x0) {
      uStack_80 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      uStack_88 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      uStack_90 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      uStack_98 = (uint)*(byte *)(puVar3 + 3);
      uStack_a0 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      uStack_a8 = (uint)*(byte *)((int64_t)puVar3 + 10);
      uStack_b0 = (uint)*(byte *)((int64_t)puVar3 + 9);
      uStack_b8 = (uint)*(byte *)(puVar3 + 2);
      uStack_c0 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      uStack_c8 = (uint)*(ushort *)(puVar3 + 1);
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_70,0x27,&processed_var_8960_ptr,*puVar3);
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,uStack_78);
    if (iVar1 != 0) break;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




