#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part089.c - 9 个函数

// 函数: void FUN_1808a5292(void)
void FUN_1808a5292(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808a52a0(uint64_t *param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  puVar5 = (uint64_t *)0x0;
  auStackX_20[0] = 0;
  puVar4 = (uint64_t *)FUN_1808afe30(*param_1,auStackX_20);
  uVar10 = auStackX_20[0];
  if ((int)puVar4 != 0) {
    return puVar4;
  }
  uVar8 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
  uVar9 = auStackX_20[0] >> 1;
  uVar11 = auStackX_20[0] & 1;
  if ((int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar8) - uVar8) < (int)uVar9) {
    if ((int)uVar9 < (int)param_2[1]) {
      puVar4 = (uint64_t *)0x1c;
      goto LAB_1808a53f9;
    }
    puVar4 = puVar5;
    if (auStackX_20[0] >> 1 != 0) {
      if ((0x3ffffffe < uVar9 * 8 - 1) ||
         (puVar4 = (uint64_t *)
                   SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar9 * 8,&processed_var_8432_ptr,
                                 0xf4,0,0,1), puVar4 == (uint64_t *)0x0)) {
        puVar4 = (uint64_t *)0x26;
        goto LAB_1808a53f9;
      }
      iVar1 = (int)param_2[1];
      lVar6 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *param_2, 0 < iVar1)) {
        puVar7 = puVar4;
        do {
          *puVar7 = *(uint64_t *)((lVar2 - (int64_t)puVar4) + (int64_t)puVar7);
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    if ((0 < *(int *)((int64_t)param_2 + 0xc)) && (*param_2 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_2,&processed_var_8432_ptr,0x100,1);
    }
    *param_2 = (int64_t)puVar4;
    *(uint *)((int64_t)param_2 + 0xc) = uVar9;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < (int)uVar9) {
    if (0 < (int)(uVar9 - iVar1)) {
                    // WARNING: Subroutine does not return
      memset(*param_2 + (int64_t)iVar1 * 8,0,(uint64_t)(uVar9 - iVar1) << 3);
    }
  }
  *(uint *)(param_2 + 1) = uVar9;
  puVar4 = puVar5;
LAB_1808a53f9:
  if ((int)puVar4 == 0) {
    auStackX_8[0] = 0;
    puVar4 = puVar5;
    if (uVar10 >> 1 != 0) {
      do {
        puVar5 = (uint64_t *)FUN_1808dde10(param_1,puVar5);
        if ((int)puVar5 != 0) {
          return puVar5;
        }
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar3 = *param_1;
          lVar6 = *param_2 + (int64_t)(int)puVar4 * 8;
          puVar5 = (uint64_t *)SystemThreadProcessor(uVar3,lVar6,4);
          if ((int)puVar5 != 0) {
            return puVar5;
          }
          puVar5 = (uint64_t *)SystemThreadProcessor(uVar3,lVar6 + 4,4);
        }
        else {
          puVar5 = (uint64_t *)0x1c;
        }
        if ((int)puVar5 != 0) {
          return puVar5;
        }
        puVar5 = (uint64_t *)FUN_1808de0e0(param_1,auStackX_8);
        if ((int)puVar5 != 0) {
          return puVar5;
        }
        uVar10 = (int)puVar4 + 1;
        puVar4 = (uint64_t *)(uint64_t)uVar10;
        auStackX_8[0] = auStackX_8[0] & -uVar11;
        puVar5 = (uint64_t *)(uint64_t)auStackX_8[0];
      } while ((int)uVar10 < (int)uVar9);
    }
    puVar4 = (uint64_t *)0x0;
  }
  return puVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808a52ce(void)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint in_EAX;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *unaff_RBX;
  uint uVar9;
  uint64_t *unaff_RSI;
  uint uVar10;
  int64_t *unaff_R14;
  uint in_stack_00000088;
  
  uVar9 = in_stack_00000088 >> 1;
  if ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < (int)uVar9) {
    if ((int)uVar9 < (int)unaff_R14[1]) {
      uVar6 = (uint64_t)((int)unaff_RBX + 0x1c);
      goto LAB_1808a53f9;
    }
    puVar4 = unaff_RBX;
    if (in_stack_00000088 >> 1 != 0) {
      if ((0x3ffffffe < uVar9 * 8 - 1) ||
         (puVar4 = (uint64_t *)
                   SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar9 * 8,&processed_var_8432_ptr,
                                 0xf4), puVar4 == (uint64_t *)0x0)) {
        uVar6 = 0x26;
        goto LAB_1808a53f9;
      }
      iVar1 = (int)unaff_R14[1];
      lVar7 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_R14, 0 < iVar1)) {
        puVar8 = puVar4;
        do {
          *puVar8 = *(uint64_t *)((lVar2 - (int64_t)puVar4) + (int64_t)puVar8);
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    if (((int)unaff_RBX < *(int *)((int64_t)unaff_R14 + 0xc)) && (*unaff_R14 != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_R14 = (int64_t)puVar4;
    *(uint *)((int64_t)unaff_R14 + 0xc) = uVar9;
  }
  iVar1 = (int)unaff_R14[1];
  if (iVar1 < (int)uVar9) {
    if (0 < (int)(uVar9 - iVar1)) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R14 + (int64_t)iVar1 * 8,0,(uint64_t)(uVar9 - iVar1) << 3);
    }
  }
  *(uint *)(unaff_R14 + 1) = uVar9;
  uVar6 = (uint64_t)unaff_RBX & 0xffffffff;
LAB_1808a53f9:
  if ((int)uVar6 == 0) {
    uVar6 = (uint64_t)unaff_RBX & 0xffffffff;
    if (in_stack_00000088 >> 1 != 0) {
      do {
        uVar5 = FUN_1808dde10();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
          uVar3 = *unaff_RSI;
          lVar7 = *unaff_R14 + (int64_t)(int)uVar6 * 8;
          uVar5 = SystemThreadProcessor(uVar3,lVar7,4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = SystemThreadProcessor(uVar3,lVar7 + 4,4);
        }
        else {
          uVar5 = 0x1c;
        }
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_1808de0e0();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar10 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar10;
      } while ((int)uVar10 < (int)uVar9);
    }
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_1808a5404(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  uint unaff_R12D;
  int64_t *unaff_R14;
  uint uStack0000000000000070;
  
  uStack0000000000000070 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        uVar2 = *unaff_RSI;
        lVar1 = *unaff_R14 + (int64_t)(int)unaff_EBX * 8;
        uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = SystemThreadProcessor(uVar2,lVar1 + 4,4);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000070 = uStack0000000000000070 & unaff_R12D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808a5401)
// WARNING: Removing unreachable block (ram,0x0001808a5413)
// WARNING: Removing unreachable block (ram,0x0001808a5421)
// WARNING: Removing unreachable block (ram,0x0001808a5439)
// WARNING: Removing unreachable block (ram,0x0001808a545b)
// WARNING: Removing unreachable block (ram,0x0001808a542b)
// WARNING: Removing unreachable block (ram,0x0001808a546b)
// WARNING: Removing unreachable block (ram,0x0001808a546f)
// WARNING: Removing unreachable block (ram,0x0001808a5480)
// WARNING: Removing unreachable block (ram,0x0001808a5491)
// WARNING: Removing unreachable block (ram,0x0001808a5493)

uint64_t FUN_1808a5432(void)

{
  return 0x26;
}



uint64_t FUN_1808a5439(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  int unaff_EDI;
  int64_t *unaff_R14;
  
  do {
    uVar3 = *unaff_RSI;
    lVar1 = *unaff_R14 + (int64_t)unaff_EDI * 8;
    uVar2 = SystemThreadProcessor(uVar3,lVar1,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = SystemThreadProcessor(uVar3,lVar1 + 4,4);
    while( true ) {
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808de0e0();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      unaff_EDI = unaff_EDI + 1;
      if (unaff_EBP <= unaff_EDI) {
        return 0;
      }
      uVar3 = FUN_1808dde10();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) break;
      uVar3 = 0x1c;
    }
  } while( true );
}






// 函数: void FUN_1808a5498(void)
void FUN_1808a5498(void)

{
  return;
}






// 函数: void FUN_1808a54aa(void)
void FUN_1808a54aa(void)

{
  return;
}



uint64_t FUN_1808a54c0(uint64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,auStackX_20);
  uVar2 = auStackX_20[0];
  if ((int)uVar3 == 0) {
    uVar7 = auStackX_20[0] >> 1;
    uVar5 = auStackX_20[0] & 1;
    uVar3 = FUN_1808af450(param_2,uVar7);
    if ((int)uVar3 == 0) {
      iVar6 = 0;
      auStackX_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = *param_1;
            lVar1 = *param_2 + (int64_t)iVar6 * 0x18;
            uVar4 = SystemThreadProcessor(uVar3,lVar1,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 4,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 6,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 8,8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = FUN_1808995c0(uVar3,lVar1 + 0x10);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar3 = FUN_1808995c0(uVar3,lVar1 + 0x14);
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar6 = iVar6 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar5;
        } while (iVar6 < (int)uVar7);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808a54eb(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint in_stack_00000068;
  
  uVar2 = FUN_1808af450();
  if ((int)uVar2 == 0) {
    if (in_stack_00000068 >> 1 != 0) {
      do {
        uVar2 = FUN_1808dde10();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar2 = *unaff_R14;
          lVar1 = *unaff_R12 + (int64_t)unaff_EBX * 0x18;
          uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 4,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 6,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 8,8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808995c0(uVar2,lVar1 + 0x10);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar2 = FUN_1808995c0(uVar2,lVar1 + 0x14);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808de0e0();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < (int)(in_stack_00000068 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808a5515(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = unaff_EBX;
  if (unaff_R15D != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar2 = *unaff_R14;
        lVar1 = *unaff_R12 + (int64_t)(int)unaff_EBX * 0x18;
        uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 4,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 6,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 8,8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808995c0(uVar2,lVar1 + 0x10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = FUN_1808995c0(uVar2,lVar1 + 0x14);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    } while ((int)unaff_EBX < unaff_R15D);
  }
  return 0;
}






// 函数: void FUN_1808a560f(void)
void FUN_1808a560f(void)

{
  return;
}






// 函数: void FUN_1808a5619(void)
void FUN_1808a5619(void)

{
  return;
}



uint64_t FUN_1808a5630(uint64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar3 = FUN_1808afe30(*param_1,auStackX_20);
  uVar2 = auStackX_20[0];
  if ((int)uVar3 == 0) {
    uVar5 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
    uVar8 = auStackX_20[0] & 1;
    uVar6 = auStackX_20[0] >> 1;
    if (((int)uVar6 <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180882f00(param_2,uVar6), (int)uVar3 == 0)) {
      iVar7 = (int)param_2[1];
      if (iVar7 < (int)uVar6) {
        if (0 < (int)(uVar6 - iVar7)) {
                    // WARNING: Subroutine does not return
          memset(*param_2 + (int64_t)iVar7 * 8,0,(uint64_t)(uVar6 - iVar7) << 3);
        }
      }
      *(uint *)(param_2 + 1) = uVar6;
      iVar7 = 0;
      auStackX_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = *param_1;
            lVar1 = *param_2 + (int64_t)iVar7 * 8;
            uVar4 = SystemThreadProcessor(uVar3,lVar1,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar3 = SystemThreadProcessor(uVar3,lVar1 + 4,4);
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar7 = iVar7 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar8;
        } while (iVar7 < (int)uVar6);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808a565f(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint in_EAX;
  uint64_t uVar3;
  uint unaff_EBX;
  uint uVar4;
  uint64_t *unaff_RSI;
  int iVar5;
  int64_t *unaff_R12;
  uint in_stack_00000068;
  
  uVar4 = in_stack_00000068 >> 1;
  if (((int)uVar4 <= (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) ||
     (uVar3 = FUN_180882f00(), (int)uVar3 == 0)) {
    iVar5 = (int)unaff_R12[1];
    if (iVar5 < (int)uVar4) {
      if (0 < (int)(uVar4 - iVar5)) {
                    // WARNING: Subroutine does not return
        memset(*unaff_R12 + (int64_t)iVar5 * 8,0,(uint64_t)(uVar4 - iVar5) << 3);
      }
    }
    *(uint *)(unaff_R12 + 1) = uVar4;
    uVar3 = (uint64_t)unaff_EBX;
    if (unaff_EBX == 0) {
      iVar5 = 0;
      if (in_stack_00000068 >> 1 != 0) {
        do {
          uVar3 = FUN_1808dde10();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
            uVar2 = *unaff_RSI;
            lVar1 = *unaff_R12 + (int64_t)iVar5 * 8;
            uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = SystemThreadProcessor(uVar2,lVar1 + 4,4);
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1808de0e0();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar4);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



uint64_t FUN_1808a56cb(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar2 = FUN_1808dde10();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        uVar2 = *unaff_RSI;
        lVar1 = *unaff_R12 + (int64_t)(int)unaff_EBX * 8;
        uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = SystemThreadProcessor(uVar2,lVar1 + 4,4);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}






// 函数: void FUN_1808a5766(void)
void FUN_1808a5766(void)

{
  return;
}






// 函数: void FUN_1808a5770(void)
void FUN_1808a5770(void)

{
  return;
}



uint64_t FUN_1808a5780(uint64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,auStackX_20);
  uVar1 = auStackX_20[0];
  if ((int)uVar2 == 0) {
    uVar7 = auStackX_20[0] >> 1;
    uVar5 = auStackX_20[0] & 1;
    uVar2 = FUN_1808af770(param_2,uVar7);
    if ((int)uVar2 == 0) {
      iVar6 = 0;
      auStackX_8[0] = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = *param_1;
            lVar4 = (int64_t)iVar6 * 0x1c + *param_2;
            uVar3 = SystemThreadProcessor(uVar2,lVar4,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = SystemThreadProcessor(uVar2,lVar4 + 4,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = SystemThreadProcessor(uVar2,lVar4 + 6,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = SystemThreadProcessor(uVar2,lVar4 + 8,8);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808995c0(uVar2,lVar4 + 0x10);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808995c0(uVar2,lVar4 + 0x14);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar2 = FUN_1808a2e00(uVar2,lVar4 + 0x18);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar6 = iVar6 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar5;
        } while (iVar6 < (int)uVar7);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808a57ab(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int unaff_EBX;
  int64_t lVar3;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint in_stack_00000068;
  
  uVar1 = FUN_1808af770();
  if ((int)uVar1 == 0) {
    if (in_stack_00000068 >> 1 != 0) {
      do {
        uVar1 = FUN_1808dde10();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar1 = *unaff_R14;
          lVar3 = (int64_t)unaff_EBX * 0x1c + *unaff_R12;
          uVar2 = SystemThreadProcessor(uVar1,lVar3,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = SystemThreadProcessor(uVar1,lVar3 + 4,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = SystemThreadProcessor(uVar1,lVar3 + 6,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = SystemThreadProcessor(uVar1,lVar3 + 8,8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808995c0(uVar1,lVar3 + 0x10);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808995c0(uVar1,lVar3 + 0x14);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar1 = FUN_1808a2e00(uVar1,lVar3 + 0x18);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808de0e0();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < (int)(in_stack_00000068 >> 1));
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808a57d5(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  int64_t lVar3;
  int unaff_EBP;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = unaff_EBX;
  if (unaff_R15D != 0) {
    do {
      uVar1 = FUN_1808dde10();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar1 = *unaff_R14;
        lVar3 = (int64_t)(int)unaff_EBX * 0x1c + *unaff_R12;
        uVar2 = SystemThreadProcessor(uVar1,lVar3,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemThreadProcessor(uVar1,lVar3 + 4,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemThreadProcessor(uVar1,lVar3 + 6,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemThreadProcessor(uVar1,lVar3 + 8,8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808995c0(uVar1,lVar3 + 0x10);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808995c0(uVar1,lVar3 + 0x14);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = FUN_1808a2e00(uVar1,lVar3 + 0x18);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_EBP;
    } while ((int)unaff_EBX < unaff_R15D);
  }
  return 0;
}






// 函数: void FUN_1808a58df(void)
void FUN_1808a58df(void)

{
  return;
}






// 函数: void FUN_1808a58e9(void)
void FUN_1808a58e9(void)

{
  return;
}



uint64_t FUN_1808a5900(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  int32_t auStack_38 [4];
  
  uVar5 = (int)param_2[1] * 2 | param_3;
  if (uVar5 < 0x8000) {
    auStackX_18[0]._0_2_ = (int16_t)uVar5;
    puVar2 = auStackX_18;
    uVar4 = 2;
  }
  else {
    puVar2 = auStackX_10;
    uVar4 = 4;
    auStackX_10[0] = (uVar5 & 0xffffc000 | 0x4000) * 2 | uVar5 & 0x7fff;
  }
  uVar4 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar2,uVar4);
  if ((int)uVar4 == 0) {
    auStackX_8[0] = 0;
    for (uVar3 = *param_2;
        (*param_2 <= uVar3 && (uVar3 < (int64_t)(int)param_2[1] * 0x1c + *param_2));
        uVar3 = uVar3 + 0x1c) {
      uVar4 = FUN_1808ddf00(param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      lVar1 = *param_1;
      uVar4 = SystemCleanupProcessor(lVar1,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_10[0] = *(uint *)(uVar3 + 0x10);
      uVar4 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),auStackX_10,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStack_38[0] = *(int32_t *)(uVar3 + 0x14);
      uVar4 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),auStack_38,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_18[0]._0_2_ = CONCAT11(auStackX_18[0]._1_1_,*(int8_t *)(uVar3 + 0x18));
      uVar4 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),auStackX_18,1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808a5974(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *unaff_RSI;
  uint64_t in_R9;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  uint uStack0000000000000060;
  int32_t in_stack_00000068;
  int8_t in_stack_00000070;
  
  uStack0000000000000060 = 0;
  uVar3 = *unaff_R14;
  while( true ) {
    if ((uVar3 < *unaff_R14) || ((int64_t)(int)unaff_R14[1] * 0x1c + *unaff_R14 <= uVar3)) {
      return 0;
    }
    uVar2 = FUN_1808ddf00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
      return 0x1c;
    }
    lVar1 = *unaff_RSI;
    uVar2 = SystemCleanupProcessor(lVar1,uVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000068 = *(int32_t *)(uVar3 + 0x10);
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x00000068,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x00000020,4,in_R9,
                       *(int32_t *)(uVar3 + 0x14));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000070 = *(int8_t *)(uVar3 + 0x18);
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x00000070,1);
    if ((int)uVar2 != 0) break;
    uVar2 = FUN_1808de160(extraout_XMM0_Da,&stack0x00000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000060 = uStack0000000000000060 & -unaff_R15D;
    uVar3 = uVar3 + 0x1c;
  }
  return uVar2;
}






