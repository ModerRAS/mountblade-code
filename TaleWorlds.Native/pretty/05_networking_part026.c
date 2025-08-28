#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part026.c - 2 个函数

// 函数: void FUN_18085607b(uint64_t param_1,int64_t param_2)
void FUN_18085607b(uint64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_2 + 8) = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 0x10) = 0xffffffff;
  return;
}



uint64_t * FUN_180856099(uint64_t param_1,uint64_t *param_2)

{
  uint64_t in_R10;
  
  *param_2 = in_R10;
  param_2[1] = 0xffffffffffffffff;
  *(int32_t *)(param_2 + 2) = 0xffffffff;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808560c0(int64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  
  if (*(int64_t *)(param_1 + 0x140) == 0) {
    return 0;
  }
  lVar3 = func_0x00018084d100(*(uint64_t *)(param_1 + 0x110),*(int64_t *)(param_1 + 0x140) + 0x10
                             );
  if (lVar3 == 0) {
    uVar4 = FUN_180855810(param_1,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_180854200(param_1);
    if ((int)uVar4 == 0) {
      return 0;
    }
    return uVar4;
  }
  *(int64_t *)(param_1 + 0x140) = lVar3;
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    plVar1 = (int64_t *)(param_1 + 0x70);
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      uVar5 = *(uint *)(param_1 + 0x30);
      lVar3 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x78) + 0x18);
      lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
    }
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1, lVar3 != 0)) {
      piVar2 = (int *)(lVar3 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_2208_ptr,0x76,1);
      }
    }
    lVar3 = *(int64_t *)(param_1 + 0x140);
    if ((uVar5 < *(uint *)(lVar3 + 0x30)) || (*(uint *)(lVar3 + 0x34) <= uVar5)) goto LAB_180856179;
  }
  if (((*(byte *)(param_1 + 0x128) & 4) == 0) &&
     (*(uint *)(param_1 + 0x148) <= (uint)(*(int *)(lVar3 + 0xa0) - *(int *)(lVar3 + 0xa8)))) {
    lVar3 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lVar3 + 0x20);
    plVar1 = (int64_t *)(param_1 + 0x70);
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
      lVar6 = *(int64_t *)(param_1 + 0x38);
    }
    else {
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
    }
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1, lVar6 != 0)) {
      piVar2 = (int *)(lVar6 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_2208_ptr,0x76,1);
      }
    }
    if (*(int *)(lVar3 + 0x20) == *(int *)(lVar6 + 0xc)) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
      *(int *)(lVar6 + 0xc) = *(int *)(lVar3 + 0x20);
      return 0;
    }
  }
LAB_180856179:
  uVar4 = FUN_180854200(param_1);
  if ((int)uVar4 == 0) {
    return 0;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808561bc(void)

{
  int64_t *plVar1;
  int *piVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar4 = func_0x00018084d0b0();
  plVar1 = (int64_t *)(unaff_RDI + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(unaff_RDI + 0x78) == plVar1)) {
    lVar5 = *(int64_t *)(unaff_RDI + 0x38);
  }
  else {
    lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x78) + 0x20);
  }
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1, lVar5 != 0)) {
    piVar2 = (int *)(lVar5 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar5,&unknown_var_2208_ptr,0x76,1);
    }
  }
  if (*(int *)(lVar4 + 0x20) != *(int *)(lVar5 + 0xc)) {
    if ((*(byte *)(unaff_RDI + 0x128) & 4) == 0) {
      *(int *)(lVar5 + 0xc) = *(int *)(lVar4 + 0x20);
      return 0;
    }
    uVar3 = FUN_180854200();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



uint64_t FUN_18085622e(void)

{
  int32_t in_EAX;
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
  if ((*(byte *)(unaff_RDI + 0x128) & 4) == 0) {
    *(int32_t *)(unaff_RBX + 0xc) = in_EAX;
    return 0;
  }
  uVar1 = FUN_180854200();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_180856280(int64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    puVar6 = (uint64_t *)*param_3;
    while (puVar6 != param_3) {
      if ((puVar6[2] == puVar1[2]) && (puVar6[3] == puVar1[3])) {
        if (puVar6 != (uint64_t *)0x0) goto LAB_180856347;
        break;
      }
      if (puVar6 != param_3) {
        puVar6 = (uint64_t *)*puVar6;
      }
    }
    uStack_38 = 0;
    uStack_30 = 0;
    uVar3 = FUN_180859e40(param_1,puVar1 + 0x12,&uStack_38,0);
    if ((uVar3 != 0) || (uVar3 = FUN_180859e40(param_1,puVar1 + 0x10,&uStack_38,1), uVar3 != 0)) {
      FUN_18084c5a0(&uStack_38);
      return (uint64_t)uVar3;
    }
    FUN_18084c5a0(&uStack_38);
LAB_180856347:
    if (puVar1 == param_2) break;
  }
  puVar1 = (uint64_t *)*param_3;
  do {
    if (puVar1 == param_3) {
      return 0;
    }
    puVar6 = (uint64_t *)*param_2;
    while ((puVar7 = (uint64_t *)0x0, puVar6 != param_2 &&
           ((puVar6[2] != puVar1[2] || (puVar7 = puVar6, puVar6[3] != puVar1[3]))))) {
      if (puVar6 != param_2) {
        puVar6 = (uint64_t *)*puVar6;
      }
    }
    if (puVar7 == (uint64_t *)0x0) {
      uStack_38 = 0;
      uStack_30 = 0;
      puVar6 = (uint64_t *)0x0;
      if (0 < *(int *)(puVar1 + 0x13)) {
        do {
          lVar2 = puVar1[0x12];
          uVar5 = FUN_1808c7170();
          uVar3 = FUN_18085ed00(*(uint64_t *)(param_1 + 0x160),
                                lVar2 + (int64_t)(int)puVar6 * 0x18,uVar5,0,0,0,1);
          if (uVar3 != 0) goto FUN_18085652b;
          uVar3 = (int)puVar6 + 1;
          puVar6 = (uint64_t *)(uint64_t)uVar3;
        } while ((int)uVar3 < *(int *)(puVar1 + 0x13));
      }
      uVar3 = FUN_18085d570(param_1,&uStack_38,puVar1 + 0x10);
      if (uVar3 != 0) {
FUN_18085652b:
        FUN_18084c5a0(&uStack_38);
        return (uint64_t)uVar3;
      }
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    else {
      uVar4 = FUN_180859e40(param_1,puVar7 + 0x12,puVar1 + 0x12,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_180859e40(param_1,puVar7 + 0x10,puVar1 + 0x10,1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18085d570(param_1,puVar7 + 0x12,puVar1 + 0x12,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18085d570(param_1,puVar7 + 0x10,puVar1 + 0x10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}



uint64_t FUN_180856362(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t *in_RAX;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *unaff_RBX;
  uint64_t *puVar7;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  uint64_t *in_stack_00000040;
  uint64_t *in_stack_00000048;
  int64_t *plStack0000000000000088;
  
  plStack0000000000000088 = in_RAX;
  if (in_RAX != unaff_R12) {
    do {
      plVar3 = plStack0000000000000088;
      puVar1 = (uint64_t *)*unaff_R15;
      while ((puVar7 = unaff_RBX, puVar1 != unaff_R15 &&
             ((puVar1[2] != plStack0000000000000088[2] ||
              (puVar7 = puVar1, puVar1[3] != plStack0000000000000088[3]))))) {
        if (puVar1 != unaff_R15) {
          puVar1 = (uint64_t *)*puVar1;
        }
      }
      if (puVar7 == (uint64_t *)0x0) {
        uVar5 = (uint64_t)unaff_RBX & 0xffffffff;
        in_stack_00000040 = unaff_RBX;
        in_stack_00000048 = unaff_RBX;
        if ((int)unaff_RBX < (int)plStack0000000000000088[0x13]) {
          do {
            lVar2 = plVar3[0x12];
            uVar6 = FUN_1808c7170();
            uVar4 = FUN_18085ed00(*(uint64_t *)(unaff_R13 + 0x160),
                                  lVar2 + (int64_t)(int)uVar5 * 0x18,uVar6,0);
            if (uVar4 != 0) goto FUN_18085652b;
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
          } while ((int)uVar4 < (int)plVar3[0x13]);
        }
        uVar4 = FUN_18085d570();
        if (uVar4 != 0) {
FUN_18085652b:
          FUN_18084c5a0(&stack0x00000040);
          return (uint64_t)uVar4;
        }
        in_stack_00000048 = (uint64_t *)CONCAT44(in_stack_00000048._4_4_,(int)unaff_RBX);
      }
      else {
        uVar5 = FUN_180859e40();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_180859e40();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_18085d570();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_18085d570();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      plStack0000000000000088 = (int64_t *)*plStack0000000000000088;
    } while (plStack0000000000000088 != unaff_R12);
  }
  return 0;
}



int32_t FUN_18085644f(void)

{
  int32_t unaff_EBP;
  
  FUN_18084c5a0(&stack0x00000040);
  return unaff_EBP;
}



uint64_t FUN_180856460(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *unaff_RBX;
  int64_t *unaff_RBP;
  uint64_t *puVar6;
  int64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  int64_t *in_stack_00000088;
  
  while( true ) {
    uVar4 = (uint64_t)unaff_RBX & 0xffffffff;
    if ((int)unaff_RBX < *(int *)((int64_t)unaff_RBP + 0x98)) {
      do {
        lVar2 = *(int64_t *)((int64_t)unaff_RBP + 0x90);
        uVar5 = FUN_1808c7170();
        uVar3 = FUN_18085ed00(*(uint64_t *)(unaff_R13 + 0x160),lVar2 + (int64_t)(int)uVar4 * 0x18
                              ,uVar5,0);
        if (uVar3 != 0) goto FUN_18085652b;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
      } while ((int)uVar3 < *(int *)((int64_t)unaff_RBP + 0x98));
    }
    uVar3 = FUN_18085d570();
    if (uVar3 != 0) break;
    while( true ) {
      unaff_RBP = (int64_t *)*in_stack_00000088;
      if (unaff_RBP == (int64_t *)unaff_R12) {
        return 0;
      }
      puVar1 = (uint64_t *)*unaff_R15;
      while ((puVar6 = unaff_RBX, puVar1 != unaff_R15 &&
             ((puVar1[2] != unaff_RBP[2] || (puVar6 = puVar1, puVar1[3] != unaff_RBP[3]))))) {
        if (puVar1 != unaff_R15) {
          puVar1 = (uint64_t *)*puVar1;
        }
      }
      in_stack_00000088 = unaff_RBP;
      if (puVar6 == (uint64_t *)0x0) break;
      uVar4 = FUN_180859e40();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_180859e40();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18085d570();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18085d570();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
FUN_18085652b:
  FUN_18084c5a0(&stack0x00000040);
  return (uint64_t)uVar3;
}





// 函数: void FUN_180856512(void)
void FUN_180856512(void)

{
  return;
}



int32_t FUN_18085652b(void)

{
  int32_t unaff_EDI;
  
  FUN_18084c5a0(&stack0x00000040);
  return unaff_EDI;
}



uint64_t
FUN_180856570(int64_t param_1,uint *param_2,int32_t param_3,uint *param_4,int64_t param_5,
             int8_t param_6)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t *plVar9;
  int iVar10;
  uint uVar11;
  int64_t *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint auStackX_8 [2];
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  uStack_80 = (int64_t *)0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar3 = (uint *)FUN_180857df0();
  iVar10 = *(int *)(param_1 + 300);
  plVar12 = (int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x58);
  uVar1 = *puVar3;
  plVar9 = (int64_t *)*plVar12;
  uStack_88._0_4_ = uVar1;
  if (plVar9 != plVar12) {
    while (*(uint *)(plVar9 + 2) < param_2[1]) {
      if ((*param_2 <= *(uint *)(plVar9 + 2)) &&
         (((int)plVar9[4] == 0 ||
          (cVar2 = FUN_1808b0820(plVar9 + 3,*(uint64_t *)(param_1 + 0x160)), cVar2 != '\0')))) {
        if (iVar10 == 0) {
          if ((plVar9 != (int64_t *)0x0) && (uVar11 = *(uint *)(plVar9 + 2), uVar11 < uVar1)) {
            uStack_58._0_4_ = 0;
            uStack_58._4_4_ = 0;
            uStack_50._0_4_ = 0;
            uStack_50._4_4_ = 0;
            uStack_88._4_4_ = uStack_64;
            uStack_78 = 0;
            uStack_70 = 0;
            uVar8 = (uint)uStack_58;
            uVar13 = uStack_58._4_4_;
            uVar14 = (uint)uStack_50;
            uVar15 = uStack_50._4_4_;
            uStack_80 = plVar9;
            uStack_88._0_4_ = uVar11;
            goto LAB_180856636;
          }
          break;
        }
        iVar10 = iVar10 + -1;
      }
      if (plVar9 != plVar12) {
        plVar9 = (int64_t *)*plVar9;
      }
      if (plVar9 == plVar12) break;
    }
  }
  uVar8 = (uint)uStack_78;
  uVar13 = uStack_78._4_4_;
  uVar14 = (uint)uStack_70;
  uVar15 = uStack_70._4_4_;
  uVar11 = uVar1;
LAB_180856636:
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  uVar4 = FUN_180856830(param_1,param_2,param_3,0,param_6,&uStack_68,param_5,auStackX_8);
  uVar1 = uStack_68;
  if ((int)uVar4 == 0) {
    if (((char)auStackX_8[0] == (char)uVar4) || (uVar11 <= uStack_68)) {
      uStack_68 = (uint)uStack_88;
      uStack_64 = uStack_88._4_4_;
      uStack_60._0_4_ = (uint)uStack_80;
      uStack_60._4_4_ = uStack_80._4_4_;
    }
    else {
      if ((param_5 != 0) && (*(int *)(param_5 + 0x24) != 0)) {
        lVar5 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),uStack_58 + 0x20);
        uVar8 = *(uint *)(lVar5 + 0x20);
        if ((uStack_78 != 0) && ((*(uint *)(uStack_78 + 0x38) >> 2 & 1) != 0)) {
          auStackX_8[0] = 0;
          uVar4 = FUN_180854ce0(param_1,uStack_78,lVar5,uVar11,auStackX_8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if ((uint64_t)uVar8 + (uint64_t)auStackX_8[0] < 0x100000000) {
            uVar8 = uVar8 + auStackX_8[0];
          }
          else {
            uVar8 = 0xffffffff;
          }
        }
        uStack_88 = param_5;
        uStack_80 = (int64_t *)0xffffffffffffffff;
        uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
        FUN_1808549c0(param_5,&uStack_80,&uStack_78);
        lVar5 = uStack_88;
        while ((uint)uStack_78 != -1) {
          lVar6 = (int64_t)(int)(uint)uStack_78;
          uStack_88 = lVar5;
          lVar7 = func_0x00018084d100(*(uint64_t *)(param_1 + 0x110),
                                      *(int64_t *)(lVar5 + 0x10) + lVar6 * 0x18);
          if ((((uVar1 < *(uint *)(lVar7 + 0x30)) || (*(uint *)(lVar7 + 0x34) < uVar1)) ||
              (uVar8 < *(uint *)(lVar7 + 0x30))) || (*(uint *)(lVar7 + 0x34) < uVar8)) {
            func_0x000180859da0(param_5,*(int64_t *)(lVar5 + 0x10) + lVar6 * 0x18);
          }
          func_0x000180854a60(&uStack_88);
          lVar5 = uStack_88;
        }
      }
      uVar8 = (uint)uStack_58;
      uVar13 = uStack_58._4_4_;
      uVar14 = (uint)uStack_50;
      uVar15 = uStack_50._4_4_;
    }
    *param_4 = uStack_68;
    param_4[1] = uStack_64;
    param_4[2] = (uint)uStack_60;
    param_4[3] = uStack_60._4_4_;
    param_4[4] = uVar8;
    param_4[5] = uVar13;
    param_4[6] = uVar14;
    param_4[7] = uVar15;
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t
FUN_180856830(int64_t param_1,uint *param_2,int32_t param_3,char param_4,char param_5,
             uint *param_6,int64_t *param_7,uint64_t param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *plVar11;
  uint uVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  bool bVar18;
  char cStack_68;
  char acStack_67 [3];
  uint uStack_64;
  int64_t *plStack_60;
  int64_t *plStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int64_t *plStack_40;
  
  puVar5 = (uint *)FUN_180857df0();
  plVar11 = (int64_t *)0x0;
  plVar13 = (int64_t *)0x0;
  plStack_60 = (int64_t *)0x0;
  plStack_58 = (int64_t *)0x0;
  uVar15 = *puVar5;
  plStack_40 = (int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x68);
  plVar14 = (int64_t *)*plStack_40;
  if (plVar14 != plStack_40) {
    do {
      bVar18 = false;
      if (param_7 != (int64_t *)0x0) {
        if ((*(int *)((int64_t)param_7 + 0x24) == 0) || (iVar4 = (int)param_7[1], iVar4 == 0)) {
          bVar18 = false;
        }
        else {
          lVar8 = *param_7;
          iVar10 = *(int *)(lVar8 + (int64_t)
                                    (int)((*(uint *)((int64_t)plVar14 + 0x1c) ^
                                           *(uint *)(plVar14 + 3) ^
                                           *(uint *)((int64_t)plVar14 + 0x14) ^
                                          *(uint *)(plVar14 + 2)) & iVar4 - 1U) * 4);
          if (iVar10 != -1) {
            lVar7 = param_7[2];
            do {
              lVar6 = (int64_t)iVar10;
              if ((*(int64_t *)(lVar7 + lVar6 * 0x18) == plVar14[2]) &&
                 (*(int64_t *)(lVar7 + 8 + lVar6 * 0x18) == plVar14[3])) {
                iVar10 = 0;
                goto LAB_18085691e;
              }
              iVar10 = *(int *)(lVar7 + 0x10 + lVar6 * 0x18);
            } while (iVar10 != -1);
          }
          iVar10 = 0x4a;
LAB_18085691e:
          bVar18 = iVar10 == 0;
          plVar11 = plStack_60;
          if ((iVar10 == 0) && (iVar4 != 0)) {
            lVar7 = (int64_t)
                    (int)((*(uint *)((int64_t)plVar14 + 0x1c) ^ *(uint *)(plVar14 + 3) ^
                           *(uint *)((int64_t)plVar14 + 0x14) ^ *(uint *)(plVar14 + 2)) &
                         iVar4 - 1U);
            piVar16 = (int *)(lVar8 + lVar7 * 4);
            iVar4 = *(int *)(lVar8 + lVar7 * 4);
            if (iVar4 != -1) {
              lVar8 = param_7[2];
              do {
                lVar7 = (int64_t)iVar4;
                if ((*(int64_t *)(lVar8 + lVar7 * 0x18) == plVar14[2]) &&
                   (*(int64_t *)(lVar8 + 8 + lVar7 * 0x18) == plVar14[3])) {
                  iVar4 = *piVar16;
                  iVar10 = *(int *)(lVar8 + 0x10 + (int64_t)iVar4 * 0x18);
                  lVar8 = lVar8 + (int64_t)iVar4 * 0x18;
                  *(int8_t *)(lVar8 + 0x14) = 0;
                  *piVar16 = iVar10;
                  *(int *)(lVar8 + 0x10) = (int)param_7[4];
                  *(int *)((int64_t)param_7 + 0x24) = *(int *)((int64_t)param_7 + 0x24) + -1;
                  *(int *)(param_7 + 4) = iVar4;
                  break;
                }
                iVar4 = *(int *)(lVar8 + 0x10 + lVar7 * 0x18);
                piVar16 = (int *)(lVar8 + 0x10 + lVar7 * 0x18);
              } while (iVar4 != -1);
            }
          }
        }
      }
      if ((param_4 == '\0') || ((*(uint *)(plVar14 + 7) >> 1 & 1) != 0)) {
        uVar17 = 0;
        uVar12 = 0;
        if ((*(uint *)(plVar14 + 7) >> 4 & 1) == 0) {
          uVar2 = *(uint *)(plVar14 + 6);
          plVar13 = plStack_58;
          if (uVar2 == *(uint *)((int64_t)plVar14 + 0x34)) {
            if (((*(uint *)(plVar14 + 7) & 1) == 0) && (param_5 == '\0')) {
              plVar11 = plStack_60;
              if (*param_2 < uVar2) {
                uVar1 = param_2[1];
joined_r0x000180856a84:
                uVar12 = 0;
                plVar11 = plStack_60;
                if (uVar2 <= uVar1) goto LAB_180856a99;
              }
            }
            else {
              plVar11 = plStack_60;
              if (*param_2 <= uVar2) {
                uVar1 = param_2[1];
                goto joined_r0x000180856a84;
              }
            }
          }
          else {
            plVar11 = plStack_60;
            if ((*param_2 < *(uint *)((int64_t)plVar14 + 0x34)) && (uVar2 < param_2[1]))
            goto LAB_180856a99;
          }
        }
        else {
          lVar8 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),plVar14 + 4);
          uVar12 = 0xffffffff;
          uVar17 = *(uint *)(lVar8 + 0x20);
          if ((uint64_t)uVar17 + (uint64_t)*(uint *)(lVar8 + 0x24) < 0x100000000) {
            uVar12 = *(uint *)(lVar8 + 0x24) + uVar17;
          }
          if ((*param_2 < uVar17) ||
             (plVar11 = plStack_60, plVar13 = plStack_58, uVar12 <= param_2[1])) {
LAB_180856a99:
            if ((((int)plVar14[4] != 0) ||
                (((*(int *)((int64_t)plVar14 + 0x24) != 0 || ((int)plVar14[5] != 0)) ||
                 (plVar11 = plStack_60, plVar13 = plStack_58,
                 *(int *)((int64_t)plVar14 + 0x2c) != 0)))) &&
               (((int)plVar14[9] == 0 ||
                (cVar3 = FUN_1808b0820(plVar14 + 8,*(uint64_t *)(param_1 + 0x160)),
                plVar11 = plStack_60, plVar13 = plStack_58, cVar3 != '\0')))) {
              uStack_64 = 0;
              acStack_67[0] = '\0';
              cStack_68 = '\0';
              puVar5 = param_2;
              if (((*(uint *)(plVar14 + 7) >> 4 & 1) == 0) ||
                 ((uVar2 = *param_2, uVar12 < uVar2 || (param_2[1] < uVar17)))) {
LAB_180856b7a:
                uVar9 = FUN_180855130(param_1,plVar14,puVar5,param_3,bVar18,&uStack_64,acStack_67,
                                      &cStack_68);
                if ((int)uVar9 != 0) {
                  return uVar9;
                }
                if (cStack_68 == (char)uVar9) {
                  plVar11 = plStack_60;
                  plVar13 = plStack_58;
                  if (acStack_67[0] != '\0') {
LAB_180856bdf:
                    if (uStack_64 < uVar15) {
                      plStack_58 = (int64_t *)0x0;
                      plVar11 = plVar14;
                      plVar13 = (int64_t *)0x0;
                      uVar15 = uStack_64;
                      plStack_60 = plVar14;
                    }
                    else {
                      plVar11 = plStack_60;
                      plVar13 = plStack_58;
                      if ((((uStack_64 == uVar15) && (plStack_58 == (int64_t *)0x0)) &&
                          ((*(uint *)(plVar14 + 7) >> 1 & 1) != 0)) &&
                         (*(int *)((int64_t)plStack_60 + 0xa4) != 0)) {
                        plVar13 = plVar14;
                        plStack_58 = plVar14;
                      }
                    }
                  }
                  goto LAB_180856a59;
                }
              }
              else {
                if (uVar17 <= uVar2) {
LAB_180856b58:
                  plVar11 = plStack_60;
                  plVar13 = plStack_58;
                  if (param_2[1] <= uVar12) goto LAB_180856a59;
                  puVar5 = &uStack_48;
                  uStack_48 = uVar12;
                  uStack_44 = param_2[1];
                  goto LAB_180856b7a;
                }
                uStack_50 = uVar2;
                uStack_4c = uVar17;
                uVar9 = FUN_180855130(param_1,plVar14,&uStack_50,param_3,bVar18,&uStack_64,
                                      acStack_67,&cStack_68);
                if ((int)uVar9 != 0) {
                  return uVar9;
                }
                if (cStack_68 == (char)uVar9) {
                  if (acStack_67[0] == (char)uVar9) goto LAB_180856b58;
                  goto LAB_180856bdf;
                }
              }
              plVar11 = plStack_60;
              plVar13 = plStack_58;
              if (param_7 != (int64_t *)0x0) {
                acStack_67[0] = '\x01';
                FUN_180857940(param_7,plVar14 + 2,acStack_67);
                plVar11 = plStack_60;
                plVar13 = plStack_58;
              }
            }
          }
        }
      }
LAB_180856a59:
    } while ((plVar14 != plStack_40) && (plVar14 = (int64_t *)*plVar14, plVar14 != plStack_40));
  }
  *(int64_t **)(param_6 + 4) = plVar11;
  *param_6 = uVar15;
  *(int64_t **)(param_6 + 6) = plVar13;
  *(bool *)param_8 = plVar11 != (int64_t *)0x0;
  return 0;
}



uint64_t FUN_180856c80(int64_t param_1,uint *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x104) != 0) && (*(int *)(param_1 + 0xe8) != 0)) &&
     (iVar3 = *(int *)(*(int64_t *)(param_1 + 0xe0) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(param_1 + 0xe8) - 1U) * 4), iVar3 != -1)) {
    lVar1 = *(int64_t *)(param_1 + 0xf0);
    while( true ) {
      lVar2 = (int64_t)iVar3 * 0x1c;
      if ((*(int64_t *)(lVar2 + lVar1) == *(int64_t *)param_2) &&
         (*(int64_t *)(lVar2 + 8 + lVar1) == *(int64_t *)(param_2 + 2))) break;
      iVar3 = *(int *)(lVar2 + 0x10 + lVar1);
      if (iVar3 == -1) {
        return 0;
      }
    }
    if (iVar3 != -1) {
      *param_3 = *(uint64_t *)(lVar1 + 0x14 + (int64_t)iVar3 * 0x1c);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180856d20(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uStackX_8;
  uint64_t uStack_28;
  uint uStack_20;
  int iStack_1c;
  int64_t lStack_18;
  
  plVar1 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    uStack_28 = *(uint64_t *)(param_1 + 0x28);
    uStack_20 = *(uint *)(param_1 + 0x30);
    iStack_1c = *(int *)(param_1 + 0x34);
    lStack_18 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar3 = *(int64_t *)(param_1 + 0x78);
    uStack_28 = *(uint64_t *)(lVar3 + 0x10);
    uStack_20 = *(uint *)(lVar3 + 0x18);
    iStack_1c = *(int *)(lVar3 + 0x1c);
    lStack_18 = *(int64_t *)(lVar3 + 0x20);
  }
  if (lStack_18 != 0) {
    *(int *)(lStack_18 + 0x10) = *(int *)(lStack_18 + 0x10) + 1;
  }
  if (iStack_1c == 0) {
    iVar4 = FUN_18085ab70(param_1);
    uVar7 = (int64_t)iVar4 + *(int64_t *)(param_1 + 0x10);
    if (uStack_28 < uVar7) {
      if (uVar7 < uStack_28) {
        puVar5 = (uint *)FUN_18084da10();
        uStackX_8 = *puVar5;
      }
      else {
        uStackX_8 = uStack_20;
        if (1 < iStack_1c - 4U) {
          uVar7 = uVar7 - uStack_28;
          if ((int64_t)uVar7 < 1) {
            uVar7 = 0;
          }
          else {
            uVar6 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
            if (uVar6 != 48000) {
              uVar7 = (int64_t)(uVar7 * 48000) / (int64_t)(uint64_t)uVar6;
            }
            if (0xffffffff < (int64_t)uVar7) {
              uVar7 = 0xffffffff;
            }
          }
          if ((uVar7 & 0xffffffff) + (uint64_t)uStack_20 < 0x100000000) {
            uStackX_8 = uStack_20 + (int)uVar7;
          }
          else {
            uStackX_8 = 0xffffffff;
          }
        }
      }
    }
    else {
      uStackX_8 = uStack_20;
    }
    *param_2 = CONCAT44(*(int32_t *)(param_1 + 8),uStackX_8);
    uVar6 = *(uint *)((int64_t)param_2 + 4);
    if (*(uint *)((int64_t)param_2 + 4) <= uStackX_8) {
      uVar6 = uStackX_8;
    }
    *(uint *)((int64_t)param_2 + 4) = uVar6;
  }
  else {
    *param_2 = CONCAT44(uStack_20,uStack_20);
  }
  FUN_1808c6d60(param_3,&uStack_28);
  if (lStack_18 != 0) {
    piVar2 = (int *)(lStack_18 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_18,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



