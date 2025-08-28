#define ConditionChecker ConditionChecker  // 条件检查器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part058.c - 12 个函数

// 函数: void FUN_1808ce7e6(void)
void FUN_1808ce7e6(void)

{
  int32_t uStack0000000000000028;
  uint64_t in_stack_000000b0;
  int32_t in_stack_00000110;
  
  uStack0000000000000028 = in_stack_00000110;
  FUN_1808ce5b0();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}



uint64_t
FUN_1808ce830(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
             int32_t param_5)

{
  bool bVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  
  if ((param_3 == 0) || (param_2 <= param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = func_0x0001808d1e80();
  if (cVar2 != '\0') {
    iVar5 = *(int *)(param_1 + 0x1d8);
    do {
      if (iVar5 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x1d0) == 2) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(int64_t *)(param_1 + 0x1b8);
      }
      if (bVar1) {
        param_3 = lVar6 + 1;
      }
      if (*(int *)(param_1 + 0x1d0) == 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint64_t *)(param_1 + 0x1b8);
      }
      uVar3 = FUN_1808ce6a0(param_1,uVar3,param_3,param_4,param_5);
      if ((int)uVar3 == 0x4a) {
        return 0;
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar5 = *(int *)(param_1 + 0x1d8);
      if (iVar5 < 1) {
        if (*(int *)(param_1 + 0x1d0) == 2) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(int64_t *)(param_1 + 0x1b8);
        }
        if (lVar6 == lVar4) {
          return 0;
        }
      }
      else {
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 0x1d8) = iVar5;
      }
      cVar2 = func_0x0001808d1e80(param_1);
    } while (cVar2 != '\0');
  }
  return 0;
}



uint64_t FUN_1808ce950(int64_t param_1)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  
  if (*(int *)(param_1 + 0x138) == 1) {
    uVar6 = *(uint64_t *)(param_1 + 0x30);
    uVar9 = 0;
    uVar10 = uVar9;
    if (((uVar6 == 0) || (*(uint64_t *)(param_1 + 0x110) == 0)) ||
       (uVar6 <= *(uint64_t *)(param_1 + 0x110))) {
      puVar5 = (uint *)FUN_18084da10();
      uVar6 = (uint64_t)*(uint *)(param_1 + 0x128);
      if ((*(uint *)(param_1 + 0x128) != *puVar5) &&
         (uVar10 = 0, (*(uint *)(param_1 + 0x134) >> 1 & 1) == 0)) {
        uVar10 = *(int64_t *)(param_1 + 0x30) + 0x40;
      }
      if (*(int64_t *)(param_1 + 0x110) != 0) {
        iVar1 = *(int *)(param_1 + 0x15c);
        auStackX_8[0] = 0;
        if (iVar1 == 0) {
          iVar12 = *(int *)(param_1 + 0x130);
          uVar6 = uVar9;
        }
        else {
          if ((int)*(float *)(param_1 + 0x158) != 48000) {
            uVar6 = (uVar6 * (uint)(int)*(float *)(param_1 + 0x158)) / 48000;
          }
          iVar12 = *(int *)(param_1 + 0x130);
          uVar8 = (uint)uVar6;
          if (iVar12 == 0) {
            uVar6 = uVar6 & 0xffffffff;
            if (iVar1 - 1U <= uVar8) {
              uVar6 = (uint64_t)(iVar1 - 1U);
            }
          }
          else {
            uVar2 = *(uint *)(param_1 + 0x160);
            if (uVar2 < uVar8) {
              uVar13 = (*(int *)(param_1 + 0x164) - uVar2) + 1;
              if ((iVar12 == -1) || (uVar4 = (iVar12 + 1) * uVar13 + uVar2, uVar8 <= uVar4)) {
                uVar6 = (uint64_t)((uVar8 - uVar2) % uVar13 + uVar2);
              }
              else {
                uVar8 = (*(int *)(param_1 + 0x164) - uVar4) + uVar8;
                if (iVar1 - 1U <= uVar8) {
                  uVar8 = iVar1 - 1U;
                }
                uVar6 = (uint64_t)uVar8;
              }
            }
          }
        }
        uVar7 = FUN_1808cb8f0(param_1,uVar6,iVar12,auStackX_8);
        uVar8 = auStackX_8[0];
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
          uVar6 = (uint64_t)auStackX_8[0];
          if (auStackX_8[0] != 0) {
            auStackX_8[0] = 0;
            uVar7 = FUN_1808cb760(param_1,auStackX_8,1);
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            uVar3 = *(uint64_t *)(param_1 + 0x110);
            lVar11 = uVar3 - *(int64_t *)(param_1 + 0x30);
            if ((*(int *)(param_1 + 0x130) == -1) &&
               (uVar14 = (uint64_t)auStackX_8[0], (int64_t)uVar14 < lVar11)) {
              auStackX_10[0] = 0;
              uVar7 = FUN_1808cb760(param_1,auStackX_10,0);
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              if ((*(uint *)(param_1 + 0x134) >> 4 & 1) != 0) {
                uVar9 = (uint64_t)((uVar8 - auStackX_8[0]) + 1);
              }
              uVar6 = ((int64_t)((lVar11 - uVar9) - uVar14) / (int64_t)(uint64_t)auStackX_10[0] +
                      1) * (uint64_t)auStackX_10[0] + uVar6 + *(int64_t *)(param_1 + 0x30);
            }
            else {
              uVar6 = *(int64_t *)(param_1 + 0x30) + uVar6;
              if (uVar6 <= uVar3) {
                uVar6 = uVar3;
              }
            }
            *(uint64_t *)(param_1 + 0x110) = uVar6;
            *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10;
          }
        }
        else {
          uVar6 = (*(int64_t *)(param_1 + 0x110) - (uint64_t)auStackX_8[0]) -
                  *(int64_t *)(param_1 + 0x30);
          uVar9 = (int64_t)uVar6 >> 0x3f;
          if (1 < (int64_t)((uVar6 ^ uVar9) - uVar9)) {
            *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
          }
        }
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x110) = uVar6;
    }
    if (*(int64_t *)(param_1 + 0xf8) != 0) {
      uVar7 = FUN_18073d230(*(int64_t *)(param_1 + 0xf8),*(uint64_t *)(param_1 + 0x30),
                            *(uint64_t *)(param_1 + 0x110),1);
      if (0x1e < (uint)uVar7) {
        return uVar7;
      }
      if ((0x40000009U >> ((uint)uVar7 & 0x1f) & 1) == 0) {
        return uVar7;
      }
      if (uVar10 != 0) {
        uVar7 = FUN_18073c160(*(uint64_t *)(param_1 + 0xf8),0,0);
        if (0x1e < (uint)uVar7) {
          return uVar7;
        }
        if ((0x40000009U >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          return uVar7;
        }
        uVar7 = FUN_18073d3c0(*(uint64_t *)(param_1 + 0xf8),uVar10,0x3f800000);
        if (0x1e < (uint)uVar7) {
          return uVar7;
        }
        if ((0x40000009U >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          return uVar7;
        }
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
        *(uint64_t *)(param_1 + 0x120) = uVar10;
      }
      uVar7 = FUN_1808ca040(param_1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808cec30(int64_t param_1,uint64_t param_2,int8_t param_3)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  plVar4 = (int64_t *)0x0;
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 8) + -0x20);
  if (*(int64_t *)(param_1 + 8) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar1 = plVar3 + 4;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(param_1 + 8)) {
      return 0;
    }
    puVar2 = (uint64_t *)(plVar1 + 2);
    if (plVar1 == (int64_t *)0x0) {
      puVar2 = (uint64_t *)0x30;
    }
    if (param_2 <= *puVar2) {
      param_2 = *puVar2 + 1;
    }
    plVar3 = plVar1 + -4;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
    if (plVar1 == (int64_t *)(param_1 + 8)) break;
    plVar3 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 4;
    }
  }
  return 0;
}



uint64_t FUN_1808cec72(void)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  
  while( true ) {
    puVar1 = (uint64_t *)(unaff_RDI + 2);
    if (unaff_RDI == (int64_t *)0x0) {
      puVar1 = (uint64_t *)0x30;
    }
    if (unaff_RBX <= *puVar1) {
      unaff_RBX = *puVar1 + 1;
    }
    plVar2 = unaff_RDI + -4;
    if (unaff_RDI == (int64_t *)0x0) {
      plVar2 = unaff_R14;
    }
    (**(code **)(*plVar2 + 0x70))();
    if (unaff_RDI == unaff_RSI) break;
    plVar2 = (int64_t *)(*unaff_RDI + -0x20);
    if (*unaff_RDI == 0) {
      plVar2 = unaff_R14;
    }
    unaff_RDI = unaff_R14;
    if (plVar2 != (int64_t *)0x0) {
      unaff_RDI = plVar2 + 4;
    }
    if (unaff_RDI == unaff_RSI) {
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1808cecdc(void)
void FUN_1808cecdc(void)

{
  return;
}



uint64_t FUN_1808ced00(int64_t *param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  float afStackX_8 [2];
  int64_t lStackX_10;
  
  if (param_1[0x35] != 0) {
    lStackX_10 = 0;
    uVar2 = FUN_1808cad80(param_1 + 0x23,afStackX_8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (lStackX_10 != 0) {
      *(float *)(param_1 + 0x3a) = afStackX_8[0];
      param_1[0x37] = lStackX_10;
    }
    iVar1 = (**(code **)(*param_1 + 0x160))(param_1);
    if (iVar1 != 2) {
      if (*(char *)((int64_t)param_1 + 0x1dc) == '\0') {
        afStackX_8[0] = 1.0;
        uVar2 = FUN_18073ca90(param_1[0x1e],afStackX_8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if ((*(char *)((int64_t)param_1 + 0x1dd) == (char)uVar2) || ((int)param_1[0x3a] == 2)) {
          lVar5 = 0;
        }
        else {
          lVar5 = param_1[0x37];
        }
        lVar3 = 0;
        if (0 < lVar5 - param_1[0x38]) {
          lVar3 = lVar5 - param_1[0x38];
        }
        uVar4 = param_1[6];
        if ((uint64_t)param_1[6] <= (uint64_t)param_1[7]) {
          uVar4 = param_1[7];
        }
        uVar4 = (int64_t)((float)lVar3 / afStackX_8[0] + 0.5) + uVar4;
        if (uVar4 <= (uint64_t)param_1[0x35]) {
          uVar4 = param_1[0x35];
        }
      }
      else {
        uVar4 = param_1[0x35];
      }
      param_1[0x36] = uVar4;
      param_1[0x35] = 0;
    }
  }
  return 0;
}



uint64_t FUN_1808cee30(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lStack_28;
  int64_t lStack_20;
  
  plVar4 = (int64_t *)0x0;
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 8) + -0x20);
  if (*(int64_t *)(param_1 + 8) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar1 = plVar3 + 4;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(param_1 + 8)) {
      return 0;
    }
    plVar3 = plVar1 + -4;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    plVar2 = (int64_t *)(**(code **)*plVar3)(plVar3);
    (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_28);
    if (((lStack_28 == *param_2) && (lStack_20 == param_2[1])) &&
       ((*(byte *)((int64_t)plVar3 + 0x4c) & 1) == 0)) {
      *(uint *)((int64_t)plVar3 + 0x4c) = *(uint *)((int64_t)plVar3 + 0x4c) | 1;
      plVar3[8] = param_3;
    }
    if (plVar1 == (int64_t *)(param_1 + 8)) break;
    plVar3 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 4;
    }
  }
  return 0;
}



uint64_t FUN_1808cee76(void)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RBP;
  int64_t *plVar2;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int64_t lStackX_20;
  int64_t in_stack_00000028;
  
  do {
    plVar2 = unaff_RDI + -4;
    if (unaff_RDI == (int64_t *)0x0) {
      plVar2 = unaff_R15;
    }
    plVar1 = (int64_t *)(**(code **)*plVar2)(plVar2);
    (**(code **)(*plVar1 + 0x30))(plVar1,&lStackX_20);
    if (((lStackX_20 == *unaff_RBP) && (in_stack_00000028 == unaff_RBP[1])) &&
       ((*(byte *)((int64_t)plVar2 + 0x4c) & 1) == 0)) {
      *(uint *)((int64_t)plVar2 + 0x4c) = *(uint *)((int64_t)plVar2 + 0x4c) | 1;
      plVar2[8] = unaff_RBX;
    }
    if (unaff_RDI == unaff_R14) {
      return 0;
    }
    plVar2 = (int64_t *)(*unaff_RDI + -0x20);
    if (*unaff_RDI == 0) {
      plVar2 = unaff_R15;
    }
    unaff_RDI = unaff_R15;
    if (plVar2 != (int64_t *)0x0) {
      unaff_RDI = plVar2 + 4;
    }
  } while (unaff_RDI != unaff_R14);
  return 0;
}






// 函数: void FUN_1808ceef3(void)
void FUN_1808ceef3(void)

{
  return;
}






// 函数: void FUN_1808cefc0(int64_t param_1)
void FUN_1808cefc0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  plVar1 = (int64_t *)(param_1 + 0x120);
  plVar4 = (int64_t *)0x0;
  *(int8_t *)(param_1 + 400) = *(int8_t *)(param_1 + 0xc0);
  plVar3 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar3 = plVar4;
  }
  plVar2 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar2 = plVar3 + 4;
  }
  while( true ) {
    if (plVar2 == plVar1) {
      return;
    }
    plVar3 = plVar2 + -4;
    if (plVar2 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,*(int8_t *)(param_1 + 400));
    if (plVar2 == plVar1) break;
    plVar3 = (int64_t *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar3 = plVar4;
    }
    plVar2 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar2 = plVar3 + 4;
    }
  }
  return;
}






// 函数: void FUN_1808cf080(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_1808cf080(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t uStackX_8;
  
  uVar1 = *(uint64_t *)(param_1 + 0xf0);
  iVar2 = FUN_18073c380(uVar1,0xfffffffd,&uStackX_8);
  if (iVar2 == 0) {
    iVar2 = FUN_1807411a0(uStackX_8,0,param_4,0);
    if (iVar2 == 0) {
      FUN_18073d500(uVar1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



uint64_t FUN_1808cf100(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18073d500(*(uint64_t *)(param_1 + 0xf8));
  if (((uint)uVar1 < 0x1f) && ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808cf140(int64_t param_1,uint64_t param_2,char param_3)

{
  int32_t *puVar1;
  uint64_t uVar2;
  
  *(uint64_t *)(param_1 + 0x1e0) = param_2;
  *(int8_t *)(param_1 + 0x1de) = 1;
  puVar1 = (int32_t *)FUN_18084da10();
  uVar2 = FUN_1808ce830(param_1,param_2,0,*puVar1,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808cec30(param_1 + 0x118,param_2,param_3);
    if ((int)uVar2 == 0) {
      if ((param_3 != '\0') || (*(int *)(param_1 + 0x1d8) == -1)) {
        *(int8_t *)(param_1 + 0x1dd) = 1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}






// 函数: void FUN_1808cf1d0(int64_t *param_1,int64_t param_2,int8_t param_3)
void FUN_1808cf1d0(int64_t *param_1,int64_t param_2,int8_t param_3)

{
  int iVar1;
  
  param_1[0x3c] = param_2;
  iVar1 = (**(code **)(*param_1 + 0xe0))();
  if (iVar1 == 0) {
    iVar1 = FUN_1808cec30(param_1 + 0x23,param_2,param_3);
    if (iVar1 == 0) {
      *(int8_t *)((int64_t)param_1 + 0x1dd) = 1;
    }
  }
  return;
}



uint64_t FUN_1808cf240(int64_t *param_1,float param_2)

{
  uint64_t uVar1;
  
  if (param_2 != *(float *)((int64_t)param_1 + 0xcc)) {
    *(float *)((int64_t)param_1 + 0xcc) = param_2;
    uVar1 = (**(code **)(*param_1 + 0x118))();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}






// 函数: void FUN_1808cf270(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1808cf270(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint param_5,float param_6,int32_t param_7)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  float fVar6;
  
  *(int32_t *)(param_1 + 9) = 0;
  param_1[6] = param_3;
  param_1[7] = param_2;
  lVar2 = (**(code **)*param_1)();
  if (*(float *)(lVar2 + 0x94) != 0.0) {
    (**(code **)(*param_1 + 0x58))(param_1,1);
  }
  iVar1 = FUN_1808d52a0(param_1 + 0xb,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_1808b2f30(param_1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_1808b2f30(param_1,4);
      if (iVar1 == 0) {
        iVar1 = FUN_1808b2f30(param_1,1);
        if (iVar1 == 0) {
          iVar1 = FUN_1808b2f30(param_1,9);
          if (iVar1 == 0) {
            iVar1 = FUN_1808b2f30(param_1,0xb);
            if (iVar1 == 0) {
              iVar1 = FUN_1808b2f30(param_1,8);
              if (iVar1 == 0) {
                lVar2 = (**(code **)*param_1)(param_1);
                fVar6 = (float)(**(code **)(*param_1 + 200))(param_1);
                if (fVar6 <= 0.0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = (uint64_t)(fVar6 * 48.0);
                }
                fVar6 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
                uVar4 = (uint64_t)param_5;
                iVar1 = -1;
                if (fVar6 != 1.0) {
                  uVar3 = ((int64_t)(fVar6 * 1048576.0) & 0xffffffffU) * uVar4 >> 0x14;
                  uVar4 = 0xffffffff;
                  if (uVar3 < 0x100000000) {
                    uVar4 = uVar3 & 0xffffffff;
                  }
                }
                if ((uVar5 & 0xffffffff) + uVar4 < 0x100000000) {
                  uVar5 = (uint64_t)(uint)((int)uVar4 + (int)uVar5);
                }
                else {
                  uVar5 = 0xffffffff;
                }
                if (uVar5 + *(uint *)(lVar2 + 0xc0) < 0x100000000) {
                  iVar1 = *(uint *)(lVar2 + 0xc0) + (int)uVar5;
                }
                fVar6 = (float)(**(code **)(*param_1 + 0xd0))(param_1);
                (**(code **)(*param_1 + 0xd8))
                          (param_1,param_3,param_4,iVar1,param_6 + fVar6,param_7);
              }
            }
          }
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1808cf33c(void)
void FUN_1808cf33c(void)

{
  uint64_t *in_RAX;
  int64_t *unaff_RSI;
  
  (*(code *)*in_RAX)();
  (**(code **)(*unaff_RSI + 200))();
  (**(code **)(*unaff_RSI + 0xc0))();
  (**(code **)(*unaff_RSI + 0xd0))();
  (**(code **)(*unaff_RSI + 0xd8))();
  return;
}






// 函数: void FUN_1808cf341(void)
void FUN_1808cf341(void)

{
  uint64_t *in_RAX;
  int64_t *unaff_RSI;
  
  (*(code *)*in_RAX)();
  (**(code **)(*unaff_RSI + 200))();
  (**(code **)(*unaff_RSI + 0xc0))();
  (**(code **)(*unaff_RSI + 0xd0))();
  (**(code **)(*unaff_RSI + 0xd8))();
  return;
}






// 函数: void FUN_1808cf3e2(void)
void FUN_1808cf3e2(void)

{
  int64_t *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd0))();
  (**(code **)(*unaff_RSI + 0xd8))();
  return;
}






// 函数: void FUN_1808cf42b(void)
void FUN_1808cf42b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cf440(int64_t *param_1)
void FUN_1808cf440(int64_t *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  int64_t *plStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  char acStack_78 [4];
  int32_t uStack_74;
  ushort uStack_70;
  ushort uStack_6e;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  if ((int)param_1[0x27] == 0) {
    acStack_78[0] = '\0';
    iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x10))
                      ((int64_t *)param_1[0x20],param_1[0x21],acStack_78);
    if (iVar2 != 0) {
      plVar5 = (int64_t *)(**(code **)*param_1)(param_1);
      (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_74);
      uStack_80 = (uint)bStack_65;
      uStack_88 = (uint)bStack_66;
      uStack_90 = (uint)bStack_67;
      uStack_98 = (uint)bStack_68;
      uStack_a0 = (uint)bStack_69;
      uStack_a8 = (uint)bStack_6a;
      uStack_b0 = (uint)bStack_6b;
      plStack_b8 = (int64_t *)CONCAT44(plStack_b8._4_4_,(uint)bStack_6c);
      uStack_c0 = (uint)uStack_6e;
      uStack_c8 = (uint)uStack_70;
                    // WARNING: Subroutine does not return
      SystemDataValidator(auStack_60,0x27,&unknown_var_8960_ptr,uStack_74);
    }
    if (acStack_78[0] != '\0') {
      plVar5 = param_1 + 0x1f;
      if (*plVar5 == 0) {
        iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x20))
                          ((int64_t *)param_1[0x20],param_1[0x21],param_1 + 0x2a);
        if (iVar2 != 0) goto ConditionChecker;
        if (param_1[0x2a] != 0) {
          lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
          iVar2 = FUN_18085ffc0(*(uint64_t *)(lVar6 + 0x18),0x2000,param_1[0x2a]);
          if (iVar2 != 0) goto ConditionChecker;
          *(uint *)((int64_t)param_1 + 0x134) = *(uint *)((int64_t)param_1 + 0x134) | 8;
        }
        lVar7 = (**(code **)(*param_1 + 0x30))(param_1);
        lVar6 = *(int64_t *)param_1[0x20];
        uStack_c0 = func_0x00018085f3b0(*(uint64_t *)(lVar7 + 0x18));
        uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
        plStack_b8 = plVar5;
        iVar2 = (**(code **)(lVar6 + 0x28))(param_1[0x20],param_1[0x21],param_1[0x14],param_1[0x1d])
        ;
        if (iVar2 != 0) goto ConditionChecker;
      }
      iVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x10))
                        ((int64_t *)param_1[0x20],param_1[0x21],acStack_78);
      if ((iVar2 == 0) && (acStack_78[0] != '\0')) {
        if ((char)param_1[0x18] == '\0') {
          iVar2 = FUN_1808c9e60(param_1);
          if (iVar2 != 0) goto ConditionChecker;
        }
        else {
          uVar3 = FUN_18073d6e0(*plVar5,0x40000010);
          if (((((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) ||
               (uVar3 = FUN_18073d010(*plVar5,param_1 + 0x28,0), 0x1e < uVar3)) ||
              (((0x40000009U >> (uVar3 & 0x1f) & 1) == 0 ||
               (uVar3 = FUN_18073d150(*plVar5,0), 0x1e < uVar3)))) ||
             ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
        }
        iVar2 = 0;
        iVar12 = 0;
        do {
          uVar3 = FUN_18073da60(*plVar5,iVar12,0);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 4);
        puVar8 = (uint *)FUN_18084da10();
        uVar3 = *(uint *)(param_1 + 0x25);
        if ((uVar3 == *puVar8) && (*(float *)((int64_t)param_1 + 300) == 0.0)) {
          uVar3 = FUN_18073fd60(*plVar5,(int)param_1[0x26]);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
        }
        else {
          if (0.0 < *(float *)(param_1 + 0x2b)) {
            iVar12 = -1;
            uVar11 = (uint)*(float *)(param_1 + 0x2b);
            uVar9 = (uint64_t)
                    ((float)*(uint *)((int64_t)param_1 + 0x15c) *
                     *(float *)((int64_t)param_1 + 300) * 0.01);
            uVar10 = uVar9 & 0xffffffff;
            if ((int)uVar9 == 0) {
              uVar10 = 0;
            }
            else {
              if (uVar11 != 48000) {
                uVar10 = (uVar10 * 48000) / (uint64_t)uVar11;
              }
              if (0xffffffff < uVar10) {
                uVar10 = 0xffffffff;
              }
            }
            if ((uVar10 & 0xffffffff) + (uint64_t)uVar3 < 0x100000000) {
              iVar12 = uVar3 + (int)uVar10;
            }
            *(int *)(param_1 + 0x25) = iVar12;
            *(int32_t *)((int64_t)param_1 + 300) = 0;
          }
          iVar12 = *(int *)((int64_t)param_1 + 0x15c);
          if (iVar12 == 0) {
            uVar11 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x25);
            if ((int)*(float *)(param_1 + 0x2b) != 48000) {
              uVar3 = (uint)(((uint64_t)uVar3 * (uint64_t)(uint)(int)*(float *)(param_1 + 0x2b)) /
                            48000);
            }
            iVar2 = (int)param_1[0x26];
            if (iVar2 == 0) {
              uVar11 = iVar12 - 1U;
              if (uVar3 < iVar12 - 1U) {
                uVar11 = uVar3;
              }
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x2c);
              uVar11 = uVar3;
              if (uVar1 < uVar3) {
                uVar13 = uVar3 - uVar1;
                uVar11 = (*(int *)((int64_t)param_1 + 0x164) - uVar1) + 1;
                if (iVar2 == -1) {
                  uVar11 = uVar1 + uVar13 % uVar11;
                }
                else {
                  uVar4 = (iVar2 + 1) * uVar11 + uVar1;
                  if (uVar4 < uVar3) {
                    iVar2 = 0;
                    uVar11 = (*(int *)((int64_t)param_1 + 0x164) - uVar4) + uVar3;
                    if (iVar12 - 1U <= uVar11) {
                      uVar11 = iVar12 - 1U;
                    }
                  }
                  else {
                    iVar2 = iVar2 - uVar13 / uVar11;
                    uVar11 = uVar1 + uVar13 % uVar11;
                  }
                }
              }
            }
          }
          uVar3 = FUN_18073fd60(*plVar5,iVar2);
          if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
          if (uVar11 != 0) {
            uVar3 = FUN_18073fe30(*plVar5,uVar11,2);
            if ((0x1e < uVar3) || ((0x40000009U >> (uVar3 & 0x1f) & 1) == 0)) goto ConditionChecker;
            *(uint *)((int64_t)param_1 + 0x13c) = uVar11;
          }
        }
        *(int32_t *)(param_1 + 0x27) = 1;
        iVar2 = FUN_1808ce950(param_1);
        if (iVar2 == 0) {
          if ((param_1[6] != 0) && ((uint64_t)param_1[6] < (uint64_t)param_1[7])) {
            param_1[6] = param_1[7];
          }
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1);
          if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x110))(param_1), iVar2 == 0)) {
            FUN_18073d8a0(*plVar5,0);
          }
        }
      }
    }
  }
ConditionChecker:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}






