/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part054.c - 13 个函数

// 函数: void FUN_1808cc0e7(int64_t *param_1)
void FUN_1808cc0e7(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  lVar2 = (**(code **)(*param_1 + 0x2c0))(param_1,unaff_RDI + 0x10);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(unaff_RDI + 0x10,auStackX_20);
  }
  *(int64_t *)(unaff_RBX + 0x218) = lVar2;
  iVar1 = FUN_1808ccd40();
  if (iVar1 == 0) {
    iVar1 = FUN_1808b2f30();
    if (iVar1 == 0) {
      iVar1 = FUN_1808b2f30();
      if (iVar1 == 0) {
        FUN_1808b2f30();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cc129(void)
void FUN_1808cc129(void)

{
  int iVar1;
  uint64_t in_stack_00000048;
  
  iVar1 = FUN_1808ccd40();
  if (iVar1 == 0) {
    iVar1 = FUN_1808b2f30();
    if (iVar1 == 0) {
      iVar1 = FUN_1808b2f30();
      if (iVar1 == 0) {
        FUN_1808b2f30();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cc145(void)
void FUN_1808cc145(void)

{
  int iVar1;
  uint64_t in_stack_00000048;
  
  iVar1 = FUN_1808b2f30();
  if (iVar1 == 0) {
    iVar1 = FUN_1808b2f30();
    if (iVar1 == 0) {
      FUN_1808b2f30();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc190(int64_t *param_1,uint64_t *param_2)
void FUN_1808cc190(int64_t *param_1,uint64_t *param_2)

{
  uint8_t *puVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  int64_t lVar9;
  char cVar10;
  int64_t *plVar11;
  int iVar12;
  int8_t auStack_d8 [32];
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  int32_t uStack_68;
  ushort uStack_64;
  ushort uStack_62;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  cVar10 = func_0x0001808c5850(param_2);
  if (cVar10 != '\0') {
    plVar3 = (int64_t *)*param_1;
    plVar11 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,&uStack_68);
      plVar11 = (int64_t *)
                (**(code **)(*(int64_t *)*param_2 + 0x118))((int64_t *)*param_2,&uStack_68,1);
      if (plVar11 == (int64_t *)0x0) {
        uStack_70 = (uint)bStack_59;
        uStack_78 = (uint)bStack_5a;
        uStack_80 = (uint)bStack_5b;
        uStack_88 = (uint)bStack_5c;
        uStack_90 = (uint)bStack_5d;
        uStack_98 = (uint)bStack_5e;
        uStack_a0 = (uint)bStack_5f;
        uStack_a8 = (uint)bStack_60;
        uStack_b0 = (uint)uStack_62;
        uStack_b8 = (uint)uStack_64;
                    // WARNING: Subroutine does not return
        FUN_18076b390(auStack_58,0x27,&unknown_var_8960_ptr,uStack_68);
      }
      *param_1 = (int64_t)plVar11;
    }
    iVar2 = *(int *)((int64_t)param_1 + 0x1c);
    if (iVar2 != -1) {
      if ((iVar2 < 0) || ((int)plVar3[0x1c] <= iVar2)) goto LAB_1808cc335;
      lVar9 = plVar11[0x1c];
      iVar12 = 0;
      puVar1 = (uint8_t *)(plVar3[0x1b] + (int64_t)iVar2 * 0x14);
      uStack_68 = *(int32_t *)puVar1;
      uVar4 = *(int32_t *)((int64_t)puVar1 + 4);
      uVar8 = *puVar1;
      uVar5 = *(int32_t *)(puVar1 + 1);
      uVar6 = *(int32_t *)((int64_t)puVar1 + 0xc);
      uVar7 = *(uint8_t *)(puVar1 + 1);
      *(int32_t *)((int64_t)param_1 + 0x1c) = 0xffffffff;
      uStack_64 = (ushort)uVar4;
      uStack_62 = (ushort)((uint)uVar4 >> 0x10);
      bStack_60 = (byte)uVar5;
      bStack_5f = (byte)((uint)uVar5 >> 8);
      bStack_5e = (byte)((uint)uVar5 >> 0x10);
      bStack_5d = (byte)((uint)uVar5 >> 0x18);
      bStack_5c = (byte)uVar6;
      bStack_5b = (byte)((uint)uVar6 >> 8);
      bStack_5a = (byte)((uint)uVar6 >> 0x10);
      bStack_59 = (byte)((uint)uVar6 >> 0x18);
      if (0 < (int)lVar9) {
        do {
          if ((*(int64_t *)(plVar11[0x1b] + (int64_t)iVar12 * 0x14) == CONCAT26(uStack_62,uVar8))
             && (*(int64_t *)(plVar11[0x1b] + 8 + (int64_t)iVar12 * 0x14) ==
                 CONCAT17(bStack_59,CONCAT16(bStack_5a,CONCAT15(bStack_5b,uVar7))))) {
            *(int *)((int64_t)param_1 + 0x1c) = iVar12;
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)lVar9);
      }
    }
    if (*(int *)(*param_1 + 0xe8) == 2) {
      FUN_1808cdee0(param_1);
    }
  }
LAB_1808cc335:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_1808cc26e(void)
void FUN_1808cc26e(void)

{
  uint uStack0000000000000028;
  uint64_t in_stack_00000070;
  
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






// 函数: void FUN_1808cc2a9(void)
void FUN_1808cc2a9(void)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *unaff_RBP;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_000000a8;
  
  *unaff_R14 = unaff_R15;
  iVar2 = *(int *)((int64_t)unaff_R14 + 0x1c);
  if (iVar2 != -1) {
    if ((iVar2 < 0) || ((int)unaff_RBP[1] <= iVar2)) goto LAB_1808cc335;
    iVar3 = *(int *)(unaff_R15 + 0xe0);
    iVar6 = 0;
    plVar1 = (int64_t *)(*unaff_RBP + (int64_t)iVar2 * 0x14);
    lVar5 = *plVar1;
    lVar4 = plVar1[1];
    *(int32_t *)((int64_t)unaff_R14 + 0x1c) = 0xffffffff;
    if (0 < iVar3) {
      do {
        if ((*(int64_t *)(*(int64_t *)(unaff_R15 + 0xd8) + (int64_t)iVar6 * 0x14) == lVar5) &&
           (*(int64_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 8 + (int64_t)iVar6 * 0x14) == lVar4)) {
          *(int *)((int64_t)unaff_R14 + 0x1c) = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  if (*(int *)(*unaff_R14 + 0xe8) == 2) {
    FUN_1808cdee0();
  }
LAB_1808cc335:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc360(int64_t param_1,uint64_t *param_2)
void FUN_1808cc360(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  lVar1 = *(int64_t *)(param_1 + 0x218);
  if (lVar1 != 0) {
    lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x2b8))((int64_t *)*param_2,lVar1 + 0x10,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar1 + 0x10,auStack_48);
    }
    *(int64_t *)(param_1 + 0x218) = lVar3;
  }
  iVar2 = FUN_1808ccd40(param_1,param_2,lVar1);
  if ((iVar2 == 0) && (lVar1 = *(int64_t *)(param_1 + 0x218), lVar1 != 0)) {
    plVar5 = param_2 + 0x74;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar5 = (int64_t *)0x0;
    }
    if (plVar5 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
         (iVar2 = *(int *)(*plVar5 +
                          (int64_t)
                          (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                 *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                               (int)plVar5[1] - 1U) * 4), iVar2 != -1)) {
        lVar3 = plVar5[2];
        do {
          lVar4 = (int64_t)iVar2;
          if ((*(int64_t *)(lVar3 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
             (*(int64_t *)(lVar3 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
          goto LAB_1808cc48b;
          iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
      iVar2 = -1;
LAB_1808cc48b:
      if ((iVar2 != -1) && (iVar2 = FUN_1808b2f30(param_1,0x16), iVar2 == 0)) {
        FUN_1808b2f30(param_1,0x20);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_68);
}






// 函数: void FUN_1808cc378(int64_t param_1,uint64_t *param_2)
void FUN_1808cc378(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *plVar5;
  int64_t in_R11;
  uint64_t unaff_R14;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  lVar1 = *(int64_t *)(param_1 + 0x218);
  if (lVar1 != 0) {
    plVar5 = (int64_t *)*param_2;
    *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x18) = unaff_R14;
    lVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,lVar1 + 0x10,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar1 + 0x10,auStackX_20);
    }
    *(int64_t *)(param_1 + 0x218) = lVar3;
  }
  iVar2 = FUN_1808ccd40(param_1,param_2,lVar1);
  if ((iVar2 == 0) && (lVar1 = *(int64_t *)(param_1 + 0x218), lVar1 != 0)) {
    plVar5 = param_2 + 0x74;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar5 = (int64_t *)0x0;
    }
    if (plVar5 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
         (iVar2 = *(int *)(*plVar5 +
                          (int64_t)
                          (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                 *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                               (int)plVar5[1] - 1U) * 4), iVar2 != -1)) {
        lVar3 = plVar5[2];
        do {
          lVar4 = (int64_t)iVar2;
          if ((*(int64_t *)(lVar3 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
             (*(int64_t *)(lVar3 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
          goto LAB_1808cc48b;
          iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
      iVar2 = -1;
LAB_1808cc48b:
      if ((iVar2 != -1) && (iVar2 = FUN_1808b2f30(param_1,0x16), iVar2 == 0)) {
        FUN_1808b2f30(param_1,0x20);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cc394(int64_t *param_1)
void FUN_1808cc394(int64_t *param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *plVar5;
  int64_t in_R11;
  uint64_t unaff_R14;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000048;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R14;
  lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,unaff_RSI + 0x10);
  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(unaff_RSI + 0x10,auStackX_20);
  }
  *(int64_t *)(unaff_RBX + 0x218) = lVar3;
  iVar2 = FUN_1808ccd40();
  if ((iVar2 == 0) && (lVar3 = *(int64_t *)(unaff_RBX + 0x218), lVar3 != 0)) {
    plVar5 = (int64_t *)(unaff_RDI + 0x3a0);
    if (unaff_RDI == -0xf8) {
      plVar5 = (int64_t *)0x0;
    }
    if (plVar5 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
         (iVar2 = *(int *)(*plVar5 +
                          (int64_t)
                          (int)((*(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 0x18) ^
                                 *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x10)) &
                               (int)plVar5[1] - 1U) * 4), iVar2 != -1)) {
        lVar1 = plVar5[2];
        do {
          lVar4 = (int64_t)iVar2;
          if ((*(int64_t *)(lVar1 + lVar4 * 0x18) == *(int64_t *)(lVar3 + 0x10)) &&
             (*(int64_t *)(lVar1 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar3 + 0x18)))
          goto LAB_1808cc48b;
          iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != -1);
      }
      iVar2 = -1;
LAB_1808cc48b:
      if ((iVar2 != -1) && (iVar2 = FUN_1808b2f30(), iVar2 == 0)) {
        FUN_1808b2f30();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cc3d3(void)
void FUN_1808cc3d3(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t *plVar5;
  uint64_t in_stack_00000048;
  
  iVar3 = FUN_1808ccd40();
  if ((iVar3 == 0) && (lVar1 = *(int64_t *)(unaff_RBX + 0x218), lVar1 != 0)) {
    plVar5 = (int64_t *)(unaff_RDI + 0x3a0);
    if (unaff_RDI == -0xf8) {
      plVar5 = (int64_t *)0x0;
    }
    if (plVar5 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
         (iVar3 = *(int *)(*plVar5 +
                          (int64_t)
                          (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                 *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                               (int)plVar5[1] - 1U) * 4), iVar3 != -1)) {
        lVar2 = plVar5[2];
        do {
          lVar4 = (int64_t)iVar3;
          if ((*(int64_t *)(lVar2 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
             (*(int64_t *)(lVar2 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
          goto LAB_1808cc48b;
          iVar3 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
        } while (iVar3 != -1);
      }
      iVar3 = -1;
LAB_1808cc48b:
      if ((iVar3 != -1) && (iVar3 = FUN_1808b2f30(), iVar3 == 0)) {
        FUN_1808b2f30();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808cc3f1(void)
void FUN_1808cc3f1(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t *plVar5;
  uint64_t in_stack_00000048;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x218);
  if (lVar1 != 0) {
    plVar5 = (int64_t *)(unaff_RDI + 0x3a0);
    if (unaff_RDI == -0xf8) {
      plVar5 = (int64_t *)0x0;
    }
    if (plVar5 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
         (iVar3 = *(int *)(*plVar5 +
                          (int64_t)
                          (int)((*(uint *)(lVar1 + 0x1c) ^ *(uint *)(lVar1 + 0x18) ^
                                 *(uint *)(lVar1 + 0x14) ^ *(uint *)(lVar1 + 0x10)) &
                               (int)plVar5[1] - 1U) * 4), iVar3 != -1)) {
        lVar2 = plVar5[2];
        do {
          lVar4 = (int64_t)iVar3;
          if ((*(int64_t *)(lVar2 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x10)) &&
             (*(int64_t *)(lVar2 + 8 + lVar4 * 0x18) == *(int64_t *)(lVar1 + 0x18)))
          goto LAB_1808cc48b;
          iVar3 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
        } while (iVar3 != -1);
      }
      iVar3 = -1;
LAB_1808cc48b:
      if ((iVar3 != -1) && (iVar3 = FUN_1808b2f30(), iVar3 == 0)) {
        FUN_1808b2f30();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000048 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc4d0(int64_t *param_1,uint64_t *param_2)
void FUN_1808cc4d0(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
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
  char cStack_98;
  int8_t auStack_90 [16];
  uint64_t *puStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  FUN_1808c8f30(param_2,param_1 + 0x1d);
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  puStack_80 = param_2;
  iVar4 = FUN_1808cbf60();
  if (iVar4 != 0) goto FUN_1808cc913;
  cStack_98 = '\0';
  uVar5 = (**(code **)*param_1)(param_1);
  cVar2 = func_0x0001808c57f0(param_2,uVar5);
  if (cVar2 == '\0') {
    lVar6 = (**(code **)*param_1)(param_1);
    if ((((*(int *)(lVar6 + 0x70) != 0) || (*(int *)(lVar6 + 0x74) != 0)) ||
        (*(int *)(lVar6 + 0x78) != 0)) || (*(int *)(lVar6 + 0x7c) != 0)) {
      lVar6 = (**(code **)*param_1)(param_1);
      plVar8 = param_2 + 0x97;
      if (param_2 == (uint64_t *)0xffffffffffffff08) {
        plVar8 = (int64_t *)0x0;
      }
      if (plVar8 != (int64_t *)0x0) {
        if (((*(int *)((int64_t)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
           (iVar4 = *(int *)(*plVar8 +
                            (int64_t)
                            (int)((*(uint *)(lVar6 + 0x7c) ^ *(uint *)(lVar6 + 0x78) ^
                                   *(uint *)(lVar6 + 0x74) ^ *(uint *)(lVar6 + 0x70)) &
                                 (int)plVar8[1] - 1U) * 4), iVar4 != -1)) {
          lVar1 = plVar8[2];
          do {
            lVar7 = (int64_t)iVar4;
            if ((*(int64_t *)(lVar1 + lVar7 * 0x18) == *(int64_t *)(lVar6 + 0x70)) &&
               (*(int64_t *)(lVar1 + 8 + lVar7 * 0x18) == *(int64_t *)(lVar6 + 0x78)))
            goto LAB_1808cc7cb;
            iVar4 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
          } while (iVar4 != -1);
        }
        iVar4 = -1;
LAB_1808cc7cb:
        if (iVar4 != -1) {
          iVar4 = FUN_1808cba60(param_1);
          goto joined_r0x0001808cc7da;
        }
      }
    }
  }
  else {
    if (param_1[0x15] != 0) {
      lVar6 = (**(code **)*param_1)(param_1);
      auStack_90 = *(int8_t (*) [16])(lVar6 + 0x40);
      if ((((auStack_90._0_4_ == 0) && (auStack_90._4_4_ == 0)) && (auStack_90._8_4_ == 0)) &&
         (auStack_90._12_4_ == 0)) goto FUN_1808cc913;
      lStack_78 = *(int64_t *)(param_1[0x15] + 0x10);
      lStack_70 = *(int64_t *)(param_1[0x15] + 0x18);
      if ((auStack_90._0_8_ != lStack_78) || (auStack_90._8_8_ != lStack_70)) {
        lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x150))((int64_t *)*param_2,auStack_90,1);
        if (lVar6 == 0) {
          uStack_a0 = (uint)auStack_90[0xf];
          uStack_a8 = (uint)auStack_90[0xe];
          uStack_b0 = (uint)auStack_90[0xd];
          uStack_b8 = (uint)auStack_90[0xc];
          uStack_c0 = (uint)auStack_90[0xb];
          uStack_c8 = (uint)auStack_90[10];
          uStack_d0 = (uint)auStack_90[9];
          uStack_d8 = (uint)auStack_90[8];
          uStack_e0 = (uint)(ushort)auStack_90._6_2_;
          uStack_e8 = (uint)(ushort)auStack_90._4_2_;
                    // WARNING: Subroutine does not return
          FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,auStack_90._0_4_);
        }
        param_1[0x15] = lVar6;
        if (lVar6 == 0) goto FUN_1808cc913;
        lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
        if ((((auStack_90._0_4_ == 0) && (auStack_90._4_4_ == 0)) &&
            ((auStack_90._8_4_ == 0 && (auStack_90._12_4_ == 0)))) ||
           ((lVar6 == 0 || (*(int64_t *)(lVar6 + 0x18) == 0)))) goto FUN_1808cc913;
        lStack_78 = 0;
        iVar4 = FUN_180860650(*(int64_t *)(lVar6 + 0x18),auStack_90,&lStack_78);
        if ((iVar4 != 0) || (iVar4 = (**(code **)(*param_1 + 0x120))(param_1,lStack_78), iVar4 != 0)
           ) goto FUN_1808cc913;
        cStack_98 = '\x01';
      }
    }
    iVar4 = FUN_1808cba60(param_1);
joined_r0x0001808cc7da:
    if (iVar4 != 0) goto FUN_1808cc913;
  }
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    auStack_90 = *(int8_t (*) [16])(lVar6 + 0x10);
    lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x150))((int64_t *)*param_2,auStack_90,1);
    if (lVar6 == 0) {
      uStack_a0 = (uint)auStack_90[0xf];
      uStack_a8 = (uint)auStack_90[0xe];
      uStack_b0 = (uint)auStack_90[0xd];
      uStack_b8 = (uint)auStack_90[0xc];
      uStack_c0 = (uint)auStack_90[0xb];
      uStack_c8 = (uint)auStack_90[10];
      uStack_d0 = (uint)auStack_90[9];
      uStack_d8 = (uint)auStack_90[8];
      uStack_e0 = (uint)(ushort)auStack_90._6_2_;
      uStack_e8 = (uint)(ushort)auStack_90._4_2_;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,auStack_90._0_4_);
    }
    param_1[0x15] = lVar6;
  }
  cVar3 = func_0x0001808c5700(param_2,lVar6);
  cVar2 = cStack_98;
  if (cVar3 != '\0') {
    cVar2 = '\x01';
  }
  FUN_1808c8f30(param_2,param_1 + 0x16);
  cVar3 = func_0x0001808c57f0(param_2,param_1[0x16]);
  if ((cVar3 != '\0') || (cVar2 != '\0')) {
    FUN_1808c9e60(param_1);
  }
FUN_1808cc913:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc510(int64_t *param_1,uint64_t *param_2)
void FUN_1808cc510(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
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
  char cStack_98;
  int8_t auStack_90 [16];
  uint64_t *puStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  puStack_80 = param_2;
  iVar4 = FUN_1808cbf60();
  if (iVar4 != 0) goto FUN_1808cc913;
  cStack_98 = '\0';
  uVar5 = (**(code **)*param_1)(param_1);
  cVar2 = func_0x0001808c57f0(param_2,uVar5);
  if (cVar2 == '\0') {
    lVar6 = (**(code **)*param_1)(param_1);
    if ((((*(int *)(lVar6 + 0x70) != 0) || (*(int *)(lVar6 + 0x74) != 0)) ||
        (*(int *)(lVar6 + 0x78) != 0)) || (*(int *)(lVar6 + 0x7c) != 0)) {
      lVar6 = (**(code **)*param_1)(param_1);
      plVar8 = param_2 + 0x97;
      if (param_2 == (uint64_t *)0xffffffffffffff08) {
        plVar8 = (int64_t *)0x0;
      }
      if (plVar8 != (int64_t *)0x0) {
        if (((*(int *)((int64_t)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
           (iVar4 = *(int *)(*plVar8 +
                            (int64_t)
                            (int)((*(uint *)(lVar6 + 0x7c) ^ *(uint *)(lVar6 + 0x78) ^
                                   *(uint *)(lVar6 + 0x74) ^ *(uint *)(lVar6 + 0x70)) &
                                 (int)plVar8[1] - 1U) * 4), iVar4 != -1)) {
          lVar1 = plVar8[2];
          do {
            lVar7 = (int64_t)iVar4;
            if ((*(int64_t *)(lVar1 + lVar7 * 0x18) == *(int64_t *)(lVar6 + 0x70)) &&
               (*(int64_t *)(lVar1 + 8 + lVar7 * 0x18) == *(int64_t *)(lVar6 + 0x78)))
            goto LAB_1808cc7cb;
            iVar4 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
          } while (iVar4 != -1);
        }
        iVar4 = -1;
LAB_1808cc7cb:
        if (iVar4 != -1) {
          iVar4 = FUN_1808cba60(param_1);
          goto joined_r0x0001808cc7da;
        }
      }
    }
  }
  else {
    if (param_1[0x15] != 0) {
      lVar6 = (**(code **)*param_1)(param_1);
      auStack_90 = *(int8_t (*) [16])(lVar6 + 0x40);
      if ((((auStack_90._0_4_ == 0) && (auStack_90._4_4_ == 0)) && (auStack_90._8_4_ == 0)) &&
         (auStack_90._12_4_ == 0)) goto FUN_1808cc913;
      lStack_78 = *(int64_t *)(param_1[0x15] + 0x10);
      lStack_70 = *(int64_t *)(param_1[0x15] + 0x18);
      if ((auStack_90._0_8_ != lStack_78) || (auStack_90._8_8_ != lStack_70)) {
        lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x150))((int64_t *)*param_2,auStack_90,1);
        if (lVar6 == 0) {
          uStack_a0 = (uint)auStack_90[0xf];
          uStack_a8 = (uint)auStack_90[0xe];
          uStack_b0 = (uint)auStack_90[0xd];
          uStack_b8 = (uint)auStack_90[0xc];
          uStack_c0 = (uint)auStack_90[0xb];
          uStack_c8 = (uint)auStack_90[10];
          uStack_d0 = (uint)auStack_90[9];
          uStack_d8 = (uint)auStack_90[8];
          uStack_e0 = (uint)(ushort)auStack_90._6_2_;
          uStack_e8 = (uint)(ushort)auStack_90._4_2_;
                    // WARNING: Subroutine does not return
          FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,auStack_90._0_4_);
        }
        param_1[0x15] = lVar6;
        if (lVar6 == 0) goto FUN_1808cc913;
        lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
        if ((((auStack_90._0_4_ == 0) && (auStack_90._4_4_ == 0)) &&
            ((auStack_90._8_4_ == 0 && (auStack_90._12_4_ == 0)))) ||
           ((lVar6 == 0 || (*(int64_t *)(lVar6 + 0x18) == 0)))) goto FUN_1808cc913;
        lStack_78 = 0;
        iVar4 = FUN_180860650(*(int64_t *)(lVar6 + 0x18),auStack_90,&lStack_78);
        if ((iVar4 != 0) || (iVar4 = (**(code **)(*param_1 + 0x120))(param_1,lStack_78), iVar4 != 0)
           ) goto FUN_1808cc913;
        cStack_98 = '\x01';
      }
    }
    iVar4 = FUN_1808cba60(param_1);
joined_r0x0001808cc7da:
    if (iVar4 != 0) goto FUN_1808cc913;
  }
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    auStack_90 = *(int8_t (*) [16])(lVar6 + 0x10);
    lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x150))((int64_t *)*param_2,auStack_90,1);
    if (lVar6 == 0) {
      uStack_a0 = (uint)auStack_90[0xf];
      uStack_a8 = (uint)auStack_90[0xe];
      uStack_b0 = (uint)auStack_90[0xd];
      uStack_b8 = (uint)auStack_90[0xc];
      uStack_c0 = (uint)auStack_90[0xb];
      uStack_c8 = (uint)auStack_90[10];
      uStack_d0 = (uint)auStack_90[9];
      uStack_d8 = (uint)auStack_90[8];
      uStack_e0 = (uint)(ushort)auStack_90._6_2_;
      uStack_e8 = (uint)(ushort)auStack_90._4_2_;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,auStack_90._0_4_);
    }
    param_1[0x15] = lVar6;
  }
  cVar3 = func_0x0001808c5700(param_2,lVar6);
  cVar2 = cStack_98;
  if (cVar3 != '\0') {
    cVar2 = '\x01';
  }
  FUN_1808c8f30(param_2,param_1 + 0x16);
  cVar3 = func_0x0001808c57f0(param_2,param_1[0x16]);
  if ((cVar3 != '\0') || (cVar2 != '\0')) {
    FUN_1808c9e60(param_1);
  }
FUN_1808cc913:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_108);
}






