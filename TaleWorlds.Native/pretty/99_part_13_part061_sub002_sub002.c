/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part061_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808d0210(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1808d0210(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint param_6)

{
  int iVar1;
  uint64_t uStackX_8;
  
  *(int32_t *)(param_1 + 0x45) = 0;
  param_1[0x3c] = param_3;
  param_1[0x44] = param_2;
  iVar1 = FUN_1808ca8a0();
  if (iVar1 == 0) {
    iVar1 = FUN_1808b2f30(param_1,0x16);
    if (iVar1 == 0) {
      iVar1 = FUN_1808b2f30(param_1,0x20);
      if (iVar1 == 0) {
        if (param_3 == 0) {
          param_3 = (uint64_t)param_6 + param_2;
        }
        uStackX_8 = 0;
        iVar1 = FUN_1808ca8a0(param_1,param_3,&uStackX_8);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x158))(param_1,param_3,uStackX_8);
        }
      }
    }
  }
  return;
}



uint64_t
FUN_1808d02c0(int64_t *param_1,uint64_t param_2,byte param_3,char param_4,char param_5,
             int8_t *param_6)

{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uStackX_8;
  
  cVar4 = FUN_1808d3990(param_1 + 0xb);
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0xf0))(param_1), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((param_4 != '\0') && ((bVar2 || (cVar4 != '\0')))) {
    param_3 = 0;
  }
  if ((int)param_1[9] == 5) {
LAB_1808d0467:
    *param_6 = 0;
  }
  else {
    if ((int)param_1[9] == 4) {
      if (param_3 == 0) goto LAB_1808d0467;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((param_3 == 0) && (bVar2)) {
      uVar5 = FUN_1808d5480(param_1 + 0xb,param_2);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = (**(code **)(*param_1 + 0x100))(param_1,param_2);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(int32_t *)(param_1 + 9) = 2;
    }
    else {
      if ((cVar4 != '\0') &&
         (uVar5 = (**(code **)(*param_1 + 0x100))(param_1,param_2), (int)uVar5 != 0)) {
        return uVar5;
      }
      if (param_2 == 0) {
        param_2 = param_1[7];
      }
      if (((param_1[6] == 0) || ((uint64_t)param_1[6] < param_2)) ||
         ((param_3 == 0 && (param_5 == '\0')))) {
        (**(code **)(*param_1 + 0x68))(param_1,&uStackX_8);
        uVar6 = param_2;
        if ((uStackX_8 != 0) && (uVar6 = uStackX_8, param_2 < uStackX_8)) {
          uVar6 = param_2;
        }
        uVar1 = param_1[6];
        uStackX_8 = uVar6;
        if ((uVar1 != 0) && (uVar6 <= uVar1)) {
          uStackX_8 = uVar1;
        }
        uVar5 = (**(code **)(*param_1 + 0x70))(param_1,uStackX_8,param_3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint *)(param_1 + 9) = param_3 + 3;
      }
      else {
        *(int32_t *)(param_1 + 9) = 5;
        uVar5 = (**(code **)(*param_1 + 0x90))();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
    }
    if ((bVar3) || (1 < (int)param_1[9] - 4U)) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
    }
  }
  return 0;
}



uint64_t FUN_1808d0490(int64_t param_1,uint64_t param_2,int8_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  char cStackX_8;
  uint8_t uStackX_9;
  
  plVar1 = (int64_t *)(param_1 + 8);
  plVar10 = (int64_t *)0x0;
  plVar6 = (int64_t *)(*(int64_t *)(param_1 + 8) + -0x20);
  if (*(int64_t *)(param_1 + 8) == 0) {
    plVar6 = plVar10;
  }
  plVar8 = plVar10;
  if (plVar6 != (int64_t *)0x0) {
    plVar8 = plVar6 + 4;
  }
  while (plVar8 != plVar1) {
    uVar9 = param_2;
    if (param_2 == 0) {
      plVar6 = plVar8 + 3;
      if (plVar8 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x38;
      }
      lVar2 = *plVar6;
      iVar3 = FUN_18085ab70(*(int64_t *)(param_1 + 0x58) + 200);
      uVar9 = iVar3 + lVar2;
    }
    puVar4 = (uint64_t *)(plVar8 + 2);
    if (plVar8 == (int64_t *)0x0) {
      puVar4 = (uint64_t *)0x30;
    }
    if (*puVar4 < uVar9) {
      plVar6 = plVar8 + -4;
      if (plVar8 == (int64_t *)0x0) {
        plVar6 = plVar10;
      }
      (**(code **)(*plVar6 + 0x68))(plVar6,&cStackX_8);
      if ((CONCAT71(uStackX_9,cStackX_8) == 0) || (uVar9 < CONCAT71(uStackX_9,cStackX_8))) {
        (**(code **)(*plVar6 + 0x70))(plVar6,uVar9,param_3);
      }
    }
    else {
      plVar6 = plVar8 + -4;
      if (plVar8 == (int64_t *)0x0) {
        plVar6 = plVar10;
      }
      *(int32_t *)(plVar6 + 9) = 5;
      uVar5 = (**(code **)(*plVar6 + 0x90))(plVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    plVar6 = (int64_t *)(*plVar8 + -0x20);
    if (*plVar8 == 0) {
      plVar6 = plVar10;
    }
    plVar8 = plVar10;
    if (plVar6 != (int64_t *)0x0) {
      plVar8 = plVar6 + 4;
    }
  }
  plVar6 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar6 = plVar10;
  }
  plVar8 = plVar10;
  if (plVar6 != (int64_t *)0x0) {
    plVar8 = plVar6 + 4;
  }
  while( true ) {
    if (plVar8 == plVar1) {
      return 0;
    }
    plVar6 = plVar8 + -4;
    if (plVar8 == (int64_t *)0x0) {
      plVar6 = plVar10;
    }
    if (plVar8 == plVar1) break;
    plVar7 = (int64_t *)(*plVar8 + -0x20);
    if (*plVar8 == 0) {
      plVar7 = plVar10;
    }
    plVar8 = plVar10;
    if (plVar7 != (int64_t *)0x0) {
      plVar8 = plVar7 + 4;
    }
    cStackX_8 = '\0';
    uVar5 = FUN_1808d02c0(plVar6,param_2,param_3,0,0,&cStackX_8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (((cStackX_8 != '\0') && (*(int64_t *)(param_1 + 0x68) == 0)) &&
       (uVar5 = FUN_180861820(*(uint64_t *)(param_1 + 0x58),plVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
  }
  return 0x1c;
}



uint64_t FUN_1808d0680(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float afStackX_8 [2];
  uint64_t auStackX_18 [2];
  
  if (*(int64_t *)(param_1 + 0xf8) == 0) {
    return 0x1c;
  }
  uVar1 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xf8) + 0x2b0) + 0x78);
  auStackX_18[0] = 0;
  uVar3 = FUN_18073c730(uVar1,auStackX_18,0,0);
  if ((int)uVar3 == 0) {
    afStackX_8[0] = 0.0;
    uVar3 = FUN_18073ca90(uVar1,afStackX_8);
    if ((int)uVar3 == 0) {
      uVar2 = *(uint64_t *)(param_1 + 0x38);
      if (*(uint64_t *)(param_1 + 0x38) < auStackX_18[0]) {
        uVar2 = auStackX_18[0];
      }
      lVar4 = 0;
      if (0 < (int64_t)(param_2 - uVar2)) {
        lVar4 = param_2 - uVar2;
      }
      uVar3 = FUN_180861720(*(int64_t *)(param_1 + 0xf8),
                            (int64_t)((float)lVar4 * afStackX_8[0] + 0.5) +
                            *(int64_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0xf8) + 0x2b0) + 0x30));
    }
  }
  return uVar3;
}



uint64_t
FUN_1808d0760(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
             int8_t param_5,int8_t param_6,int8_t param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = FUN_1808caec0(param_1,param_2,param_6);
  if ((lVar1 != 0) &&
     (uVar2 = FUN_1808d07d0(param_1,lVar1,param_3,param_4,param_5,param_7), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t
FUN_1808d07d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4,
             int8_t param_5,int8_t param_6)

{
  uint64_t uVar1;
  char acStack_18 [16];
  
  acStack_18[0] = '\0';
  uVar1 = FUN_1808d02c0(param_2,param_3,param_4,param_5,param_6,acStack_18);
  if ((int)uVar1 == 0) {
    if (((acStack_18[0] != (char)uVar1) && (*(int64_t *)(param_1 + 0x68) == 0)) &&
       (uVar1 = FUN_180861820(*(uint64_t *)(param_1 + 0x58),param_2), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808d0850(int64_t param_1,int64_t *param_2,uint64_t param_3,uint param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint auStackX_20 [2];
  uint64_t uStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  
  if ((int)param_4 < 1) {
    return 0x1c;
  }
  plVar6 = (int64_t *)0x0;
  iVar7 = 0;
  plVar1 = (int64_t *)(param_1 + 8);
  plVar8 = (int64_t *)(*(int64_t *)(param_1 + 8) + -0x20);
  if (*(int64_t *)(param_1 + 8) == 0) {
    plVar8 = plVar6;
  }
  plVar9 = plVar6;
  if (plVar8 != (int64_t *)0x0) {
    plVar9 = plVar8 + 4;
  }
  plVar8 = plVar6;
  auStackX_20[0] = param_4;
  uStack_60 = param_3;
  if (plVar9 != plVar1) {
    plVar10 = (int64_t *)0x0;
    do {
      plVar3 = plVar9 + -4;
      if (plVar9 == (int64_t *)0x0) {
        plVar3 = plVar10;
      }
      plVar3 = (int64_t *)(**(code **)*plVar3)();
      (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_58);
      lStack_48 = lStack_58;
      lStack_40 = lStack_50;
      if ((lStack_58 == *param_2) && (lStack_50 == param_2[1])) {
        puVar4 = (uint *)(plVar9 + 5);
        if (plVar9 == (int64_t *)0x0) {
          puVar4 = (uint *)0x48;
        }
        if (((((*puVar4 & 0xfffffffc) == 0) && (*puVar4 != 2)) &&
            (plVar6 = (int64_t *)(uint64_t)((int)plVar6 + 1), plVar8 == (int64_t *)0x0)) &&
           (plVar8 = plVar10, plVar9 != (int64_t *)0x0)) {
          plVar8 = plVar9 + -4;
        }
      }
      iVar7 = (int)plVar6;
      if (plVar9 == plVar1) break;
      plVar3 = (int64_t *)(*plVar9 + -0x20);
      if (*plVar9 == 0) {
        plVar3 = plVar10;
      }
      plVar9 = plVar10;
      if (plVar3 != (int64_t *)0x0) {
        plVar9 = plVar3 + 4;
      }
    } while (plVar9 != plVar1);
  }
  uVar2 = uStack_60;
  if ((int)auStackX_20[0] <= iVar7) {
    (**(code **)(*plVar8 + 0x68))(plVar8,&uStack_68);
    if ((uStack_68 == 0) || (uVar2 < uStack_68)) {
      uStack_68 = uVar2;
    }
    auStackX_20[0] = auStackX_20[0] & 0xffffff00;
    uVar5 = FUN_1808d02c0(plVar8,uStack_68,1,0,0,auStackX_20);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((((char)auStackX_20[0] != (char)uVar5) && (*(int64_t *)(param_1 + 0x68) == 0)) &&
       (uVar5 = FUN_180861820(*(uint64_t *)(param_1 + 0x58),plVar8), (int)uVar5 != 0)) {
      return uVar5;
    }
  }
  return 0;
}



uint64_t FUN_1808d0891(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t in_RAX;
  int64_t *plVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int iVar5;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int64_t in_stack_00000040;
  int64_t in_stack_00000048;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  int64_t in_stack_000000a0;
  int in_stack_000000b8;
  uint64_t uVar6;
  
  uVar6 = (uint64_t)param_1 & 0xffffffff;
  iVar5 = (int)param_1;
  plVar7 = (int64_t *)((uint64_t)param_1 & 0xffffffff);
  plVar1 = (int64_t *)(unaff_R13 + 8);
  plVar8 = (int64_t *)(in_RAX + -0x20);
  if (in_RAX == 0) {
    plVar8 = param_1;
  }
  if (plVar8 != (int64_t *)0x0) {
    param_1 = plVar8 + 4;
  }
  if (param_1 != plVar1) {
    plVar8 = (int64_t *)0x0;
    do {
      plVar2 = param_1 + -4;
      if (param_1 == (int64_t *)0x0) {
        plVar2 = plVar8;
      }
      plVar2 = (int64_t *)(**(code **)*plVar2)();
      (**(code **)(*plVar2 + 0x30))(plVar2,&stack0x00000040);
      in_stack_00000050 = in_stack_00000040;
      in_stack_00000058 = in_stack_00000048;
      if ((in_stack_00000040 == *unaff_R12) && (in_stack_00000048 == unaff_R12[1])) {
        puVar3 = (uint *)(param_1 + 5);
        if (param_1 == (int64_t *)0x0) {
          puVar3 = (uint *)0x48;
        }
        if (((((*puVar3 & 0xfffffffc) == 0) && (*puVar3 != 2)) &&
            (uVar6 = (uint64_t)((int)uVar6 + 1), plVar7 == (int64_t *)0x0)) &&
           (plVar7 = plVar8, param_1 != (int64_t *)0x0)) {
          plVar7 = param_1 + -4;
        }
      }
      iVar5 = (int)uVar6;
      unaff_RBX = in_stack_00000038;
      unaff_R13 = in_stack_000000a0;
      if (param_1 == plVar1) break;
      plVar2 = (int64_t *)(*param_1 + -0x20);
      if (*param_1 == 0) {
        plVar2 = plVar8;
      }
      param_1 = plVar8;
      if (plVar2 != (int64_t *)0x0) {
        param_1 = plVar2 + 4;
      }
    } while (param_1 != plVar1);
  }
  if (in_stack_000000b8 <= iVar5) {
    (**(code **)(*plVar7 + 0x68))(plVar7,&stack0x00000030);
    if ((in_stack_00000030 == 0) || (unaff_RBX < in_stack_00000030)) {
      in_stack_00000030 = unaff_RBX;
    }
    uVar4 = FUN_1808d02c0(plVar7,in_stack_00000030,1,0,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if ((((char)uVar4 != '\0') && (*(int64_t *)(unaff_R13 + 0x68) == 0)) &&
       (uVar4 = FUN_180861820(*(uint64_t *)(unaff_R13 + 0x58),plVar7), (int)uVar4 != 0)) {
      return uVar4;
    }
  }
  return 0;
}



uint64_t FUN_1808d08d5(void)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint *puVar3;
  uint64_t uVar4;
  int unaff_EBP;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t *unaff_R12;
  int64_t *unaff_R13;
  int64_t *unaff_R14;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int64_t in_stack_00000040;
  int64_t in_stack_00000048;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  int64_t in_stack_000000a0;
  int in_stack_000000b8;
  
  do {
    plVar2 = unaff_RDI + -4;
    if (unaff_RDI == (int64_t *)0x0) {
      plVar2 = unaff_R13;
    }
    plVar2 = (int64_t *)(**(code **)*plVar2)();
    (**(code **)(*plVar2 + 0x30))(plVar2,&stack0x00000040);
    uVar1 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000040;
    in_stack_00000058 = in_stack_00000048;
    if ((in_stack_00000040 == *unaff_R12) && (in_stack_00000048 == unaff_R12[1])) {
      puVar3 = (uint *)(unaff_RDI + 5);
      if (unaff_RDI == (int64_t *)0x0) {
        puVar3 = (uint *)(uint64_t)((int)unaff_R13 + 0x48);
      }
      if (((((*puVar3 & 0xfffffffc) == 0) && (*puVar3 != 2)) &&
          (unaff_EBP = unaff_EBP + 1, unaff_RSI == (int64_t *)0x0)) &&
         (unaff_RSI = unaff_R13, unaff_RDI != (int64_t *)0x0)) {
        unaff_RSI = unaff_RDI + -4;
      }
    }
    if (unaff_RDI == unaff_R14) break;
    plVar2 = (int64_t *)(*unaff_RDI + -0x20);
    if (*unaff_RDI == 0) {
      plVar2 = unaff_R13;
    }
    unaff_RDI = unaff_R13;
    if (plVar2 != (int64_t *)0x0) {
      unaff_RDI = plVar2 + 4;
    }
  } while (unaff_RDI != unaff_R14);
  if (in_stack_000000b8 <= unaff_EBP) {
    (**(code **)(*unaff_RSI + 0x68))(unaff_RSI,&stack0x00000030);
    if ((in_stack_00000030 == 0) || (uVar1 < in_stack_00000030)) {
      in_stack_00000030 = uVar1;
    }
    uVar4 = FUN_1808d02c0(unaff_RSI,in_stack_00000030,1,0,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if ((((char)uVar4 != '\0') && (*(int64_t *)(in_stack_000000a0 + 0x68) == 0)) &&
       (uVar4 = FUN_180861820(*(uint64_t *)(in_stack_000000a0 + 0x58),unaff_RSI), (int)uVar4 != 0)
       ) {
      return uVar4;
    }
  }
  return 0;
}



uint64_t FUN_1808d098a(void)

{
  uint64_t uVar1;
  int unaff_EBP;
  int64_t *unaff_RSI;
  int64_t unaff_R13;
  int in_stack_000000b8;
  
  if (in_stack_000000b8 <= unaff_EBP) {
    (**(code **)(*unaff_RSI + 0x68))();
    uVar1 = FUN_1808d02c0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((((char)uVar1 != '\0') && (*(int64_t *)(unaff_R13 + 0x68) == 0)) &&
       (uVar1 = FUN_180861820(*(uint64_t *)(unaff_R13 + 0x58)), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808d09a5(void)

{
  uint64_t uVar1;
  int64_t *unaff_RSI;
  int64_t unaff_R13;
  
  (**(code **)(*unaff_RSI + 0x68))();
  uVar1 = FUN_1808d02c0();
  if (((int)uVar1 == 0) &&
     ((((char)uVar1 == '\0' || (*(int64_t *)(unaff_R13 + 0x68) != 0)) ||
      (uVar1 = FUN_180861820(*(uint64_t *)(unaff_R13 + 0x58)), (int)uVar1 == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808d0a30(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  float fVar6;
  
  plVar1 = *(int64_t **)(param_1 + 0x100);
  if (param_2 != plVar1) {
    uVar5 = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = 0;
    *(int64_t **)(param_1 + 0x100) = param_2;
    if (*(int64_t *)(param_1 + 0xf8) != 0) {
      uVar4 = FUN_18073dd60();
      if (0x1e < (uint)uVar4) {
        return uVar4;
      }
      if ((0x40000009U >> ((uint)uVar4 & 0x1f) & 1) == 0) {
        return uVar4;
      }
    }
    uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar5);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x100) + 8))
                      (*(int64_t **)(param_1 + 0x100),0,param_1 + 0x108);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(int *)(param_1 + 0x138) != 2) {
      iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x100) + 0x40))();
      if ((iVar2 == 2) &&
         (uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x100) + 0x48))
                            (*(int64_t **)(param_1 + 0x100),1), (int)uVar5 != 0)) {
        return uVar5;
      }
      if ((*(uint *)(param_1 + 0x13c) != 0) && (*(float *)(param_1 + 0x158) != 0.0)) {
        fVar6 = ((float)*(uint *)(param_1 + 0x13c) / *(float *)(param_1 + 0x158)) * 1000.0;
        if (fVar6 <= 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (int32_t)(int64_t)(fVar6 * 48.0);
        }
        *(int32_t *)(param_1 + 0x128) = uVar3;
      }
      *(int32_t *)(param_1 + 0x138) = 0;
      *(uint64_t *)(param_1 + 0xf8) = 0;
      uVar5 = FUN_1808cf440(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808d0b80(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  uint *puVar7;
  int64_t *plVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  char acStackX_8 [8];
  uint in_stack_ffffffffffffffc8;
  
  plVar12 = (int64_t *)0x0;
  iVar2 = *(int *)(*(int64_t *)(param_1 + 0x218) + 0xf0);
  if (iVar2 != 0x7fffffff) {
    plVar1 = (int64_t *)(param_1 + 0x120);
    iVar13 = 0;
    plVar8 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar8 = plVar12;
    }
    plVar4 = plVar12;
    plVar5 = plVar12;
    if (plVar8 != (int64_t *)0x0) {
      plVar4 = plVar8 + 4;
    }
    while (plVar4 != plVar1) {
      puVar7 = (uint *)(plVar4 + 5);
      if (plVar4 == (int64_t *)0x0) {
        puVar7 = (uint *)0x48;
      }
      if (((*puVar7 & 0xfffffffc) == 0) && (*puVar7 != 2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      plVar8 = (int64_t *)(uint64_t)((int)plVar5 + 1);
      if (!bVar3) {
        plVar8 = plVar5;
      }
      iVar13 = (int)plVar8;
      if (plVar4 == plVar1) break;
      plVar11 = (int64_t *)(*plVar4 + -0x20);
      if (*plVar4 == 0) {
        plVar11 = plVar12;
      }
      plVar4 = plVar12;
      plVar5 = plVar8;
      if (plVar11 != (int64_t *)0x0) {
        plVar4 = plVar11 + 4;
      }
    }
    iVar13 = iVar13 - iVar2;
    if ((*(int *)(*(int64_t *)(param_1 + 0x218) + 0xf4) == 2) && (-1 < iVar13)) {
      while( true ) {
        plVar8 = (int64_t *)(*plVar1 + -0x20);
        if (*plVar1 == 0) {
          plVar8 = plVar12;
        }
        plVar4 = plVar12;
        if (plVar8 != (int64_t *)0x0) {
          plVar4 = plVar8 + 4;
        }
        while( true ) {
          if (plVar4 == plVar1) goto LAB_1808d0d3e;
          puVar7 = (uint *)(plVar4 + 5);
          if (plVar4 == (int64_t *)0x0) {
            puVar7 = (uint *)0x48;
          }
          if (((*puVar7 & 0xfffffffc) == 0) && (*puVar7 != 2)) break;
          if (plVar4 == plVar1) goto LAB_1808d0d3e;
          plVar8 = (int64_t *)(*plVar4 + -0x20);
          if (*plVar4 == 0) {
            plVar8 = plVar12;
          }
          plVar4 = plVar12;
          if (plVar8 != (int64_t *)0x0) {
            plVar4 = plVar8 + 4;
          }
        }
        acStackX_8[0] = '\0';
        plVar8 = plVar4 + -4;
        if (plVar4 == (int64_t *)0x0) {
          plVar8 = plVar12;
        }
        in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffff00;
        uVar10 = FUN_1808d02c0(plVar8,param_2,1,0,in_stack_ffffffffffffffc8,acStackX_8);
        cVar6 = acStackX_8[0];
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        if (acStackX_8[0] == '\0') break;
        if ((*(int64_t *)(param_1 + 0x180) == 0) &&
           (uVar10 = FUN_180861820(*(uint64_t *)(param_1 + 0x170),plVar8), (int)uVar10 != 0)) {
          return uVar10;
        }
        if ((cVar6 == '\0') || (iVar13 = iVar13 + -1, iVar13 < 0)) break;
      }
    }
LAB_1808d0d3e:
    if (-1 < iVar13) {
      return 0;
    }
  }
  puVar9 = (int32_t *)MemoryCacheController0();
  uVar10 = FUN_1808ce6a0(param_1,param_2,0,*puVar9,0);
  if ((int)uVar10 == 0) {
    *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
    return 0;
  }
  return uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808d0d90(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char acStackX_8 [8];
  
  plVar1 = (int64_t *)(param_1 + 8);
  plVar8 = (int64_t *)0x0;
  plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x10) + -0x20);
  if (*(int64_t *)(param_1 + 0x10) == 0) {
    plVar6 = plVar8;
  }
  plVar3 = plVar6 + 4;
  if (plVar6 == (int64_t *)0x0) {
    plVar3 = plVar8;
  }
  plVar7 = plVar8;
  if (plVar3 != plVar1) {
    plVar7 = plVar6;
  }
  plVar6 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (int64_t *)0x0) {
    plVar8 = plVar6 + 4;
  }
  if (plVar7 != (int64_t *)0x0) {
    do {
      plVar6 = plVar8 + -4;
      if (plVar8 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      lVar5 = plVar6[9];
      func_0x0001808d57c0(plVar6 + 0xb,param_2);
      if ((int)plVar6[9] == 0) {
        if ((uint64_t)plVar6[6] <= param_2) {
          *(int32_t *)(plVar6 + 9) = 1;
        }
      }
      else if ((((int)plVar6[9] == 2) && (cVar2 = FUN_1808d38d0(plVar6 + 0xb), cVar2 != '\0')) &&
              (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 != '\0')) {
        *(int32_t *)(plVar6 + 9) = 5;
        uVar4 = (**(code **)(*plVar6 + 0x90))(plVar6);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        *(int32_t *)(plVar6 + 9) = 5;
      }
      uVar4 = (**(code **)(*plVar6 + 0xe0))(plVar6,param_2);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      acStackX_8[0] = (char)uVar4;
      uVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6,acStackX_8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (acStackX_8[0] == (char)uVar4) {
        *(int32_t *)(plVar6 + 9) = 5;
      }
      if (((1 < (int)lVar5 - 4U) && ((int)plVar6[9] == 5)) &&
         ((*(int64_t *)(param_1 + 0x68) == 0 &&
          (uVar4 = FUN_180861820(*(uint64_t *)(param_1 + 0x58),plVar6), (int)uVar4 != 0)))) {
        return uVar4;
      }
      if (plVar8 != plVar1) {
        lVar5 = *plVar8 + -0x20;
        if (*plVar8 == 0) {
          lVar5 = 0;
        }
        if (lVar5 == 0) {
          plVar8 = (int64_t *)0x0;
        }
        else {
          plVar8 = (int64_t *)(lVar5 + 0x20);
        }
      }
    } while (plVar6 != plVar7);
  }
  plVar6 = (int64_t *)0x0;
  plVar8 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar8 = plVar6;
  }
  plVar3 = plVar6;
  if (plVar8 != (int64_t *)0x0) {
    plVar3 = plVar8 + 4;
  }
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    plVar8 = plVar3 + -4;
    if (plVar3 == (int64_t *)0x0) {
      plVar8 = plVar6;
    }
    if (plVar3 == plVar1) break;
    plVar7 = (int64_t *)(*plVar3 + -0x20);
    if (*plVar3 == 0) {
      plVar7 = plVar6;
    }
    plVar3 = plVar6;
    if (plVar7 != (int64_t *)0x0) {
      plVar3 = plVar7 + 4;
    }
    if ((int)plVar8[9] == 5) {
      if (plVar8 == (int64_t *)0x0) {
        return 0x1c;
      }
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&processed_var_5904_ptr,0xed7,1);
    }
  }
  return 0x1c;
}



uint64_t FUN_1808d0fe0(int64_t *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  bool bVar10;
  float fVar11;
  int64_t *plStackX_8;
  uint64_t uStackX_18;
  int64_t lStackX_20;
  int64_t *plStack_58;
  uint64_t uStack_50;
  int aiStack_48 [4];
  
  if (((int)param_1[9] - 1U & 0xfffffffd) != 0) {
    return 0;
  }
  lVar5 = (**(code **)*param_1)();
  uVar1 = *(uint *)(lVar5 + 0xd8);
  if (uVar1 < 2) {
    plStack_58 = *(int64_t **)(lVar5 + 0xdc);
    uStack_50 = *(uint64_t *)(lVar5 + 0xe4);
    uVar9 = 0;
    uVar6 = FUN_1808bf740(param_1[0x12],&plStack_58,&plStackX_8);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (plStackX_8 == (int64_t *)0x0) {
      return 0;
    }
    plStack_58 = plStackX_8;
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1807d1650(plStackX_8,&uStack_50,aiStack_48);
    plVar2 = plStack_58;
    if (aiStack_48[0] == -1) {
      return 0;
    }
    iVar8 = aiStack_48[0];
    iVar7 = (int)uStack_50;
    do {
      do {
        lVar5 = *(int64_t *)(plVar2[2] + 8 + (int64_t)iVar8 * 0x10);
        iVar3 = FUN_1808605e0(lVar5);
        if (((iVar3 != 2) && (*(int64_t *)(lVar5 + 0x350) == 0)) &&
           (uVar4 = FUN_180863820(lVar5,-(uVar1 != 0) & 3,0), uVar4 != 0)) {
          uVar9 = (uint64_t)uVar4;
        }
      } while ((iVar8 != -1) &&
              (iVar8 = *(int *)(plVar2[2] + 4 + (int64_t)iVar8 * 0x10), iVar8 != -1));
      iVar8 = iVar7 + 1;
      bVar10 = iVar7 != -1;
      iVar7 = 0;
      if (bVar10) {
        iVar7 = iVar8;
      }
      if (iVar7 != (int)plVar2[1]) {
        lVar5 = (int64_t)iVar7;
        do {
          if (*(int *)(*plVar2 + lVar5 * 4) != -1) {
            iVar8 = *(int *)(*plVar2 + (int64_t)iVar7 * 4);
            goto LAB_1808d12d7;
          }
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 != (int)plVar2[1]);
      }
      iVar8 = -1;
      iVar7 = iVar8;
LAB_1808d12d7:
      if (iVar8 == -1) {
        return uVar9;
      }
    } while( true );
  }
  if (uVar1 == 2) {
    plStack_58 = *(int64_t **)(lVar5 + 0xdc);
    uStack_50 = *(uint64_t *)(lVar5 + 0xe4);
    lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    lVar5 = FUN_18085fdf0(*(uint64_t *)(lVar5 + 0x18),&plStack_58);
    if (lVar5 == 0) {
      return 0;
    }
    fVar11 = *(float *)(param_1 + 0x13);
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 4) {
        return 0;
      }
      plStack_58 = *(int64_t **)(lVar5 + 0xdc);
      uStack_50 = *(uint64_t *)(lVar5 + 0xe4);
      uVar6 = FUN_1808bf740(param_1[0x12],&plStack_58,&lStackX_20);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if ((lStackX_20 != 0) && (99 < *(int *)(lStackX_20 + 0x30))) {
        return 0;
      }
      plStack_58 = *(int64_t **)(lVar5 + 0xdc);
      uStack_50 = *(uint64_t *)(lVar5 + 0xe4);
      plStackX_8 = (int64_t *)0x0;
      uStackX_18 = 0;
      uVar6 = FUN_1808bd9b0(param_1[0x12],&plStack_58,&plStackX_8,&uStackX_18);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (plStackX_8 == (int64_t *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)plStackX_8[1])(plStackX_8 + 1);
      if (((*(uint *)(lVar5 + 0xf8) >> 2 & 1) == 0) &&
         (uVar6 = func_0x000180861a30(plStackX_8), (int)uVar6 != 0)) {
        return uVar6;
      }
      lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar5 = *(int64_t *)(lVar5 + 0x18);
      uVar6 = func_0x0001808d2640(plStackX_8 + 5,lVar5 + 0x28);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_18085ff30(plStackX_8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_180860170(lVar5,uStackX_18);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_180863420(plStackX_8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_180862670(plStackX_8);
      goto LAB_1808d11b7;
    }
    plStack_58 = *(int64_t **)(lVar5 + 0xdc);
    uStack_50 = *(uint64_t *)(lVar5 + 0xe4);
    lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    lVar5 = FUN_18085fdf0(*(uint64_t *)(lVar5 + 0x18),&plStack_58);
    if (lVar5 == 0) {
      return 0;
    }
    fVar11 = *(float *)(lVar5 + 0x20) + *(float *)(param_1 + 0x13);
  }
  uVar6 = FUN_1808d73b0(lVar5,fVar11,0);
LAB_1808d11b7:
  if ((int)uVar6 == 0) {
    return 0;
  }
  return uVar6;
}



uint64_t FUN_1808d11dd(uint64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t in_RCX;
  int iVar6;
  int64_t unaff_RBP;
  int iVar7;
  int unaff_R12D;
  uint64_t uVar8;
  bool bVar9;
  uint64_t in_XMM0_Qb;
  
  *(uint64_t *)(unaff_RBP + -0x38) = param_1;
  *(uint64_t *)(unaff_RBP + -0x30) = in_XMM0_Qb;
  uVar8 = 0;
  uVar4 = FUN_1808bf740(in_RCX,unaff_RBP + -0x38);
  if (((int)uVar4 == 0) && (lVar5 = *(int64_t *)(unaff_RBP + 0x28), uVar4 = uVar8, lVar5 != 0)) {
    *(int64_t *)(unaff_RBP + -0x38) = lVar5;
    *(uint64_t *)(unaff_RBP + -0x30) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + -0x28) = 0xffffffff;
    FUN_1807d1650(lVar5,unaff_RBP + -0x30,unaff_RBP + -0x28);
    iVar7 = *(int *)(unaff_RBP + -0x28);
    if (iVar7 != -1) {
      iVar6 = *(int *)(unaff_RBP + -0x30);
      plVar1 = *(int64_t **)(unaff_RBP + -0x38);
      do {
        do {
          lVar5 = *(int64_t *)(plVar1[2] + 8 + (int64_t)iVar7 * 0x10);
          iVar2 = FUN_1808605e0(lVar5);
          if (((iVar2 != 2) && (*(int64_t *)(lVar5 + 0x350) == 0)) &&
             (uVar3 = FUN_180863820(lVar5,-(unaff_R12D != 0) & 3,0), uVar3 != 0)) {
            uVar4 = (uint64_t)uVar3;
          }
        } while ((iVar7 != -1) &&
                (iVar7 = *(int *)(plVar1[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
        iVar7 = iVar6 + 1;
        bVar9 = iVar6 != -1;
        iVar6 = 0;
        if (bVar9) {
          iVar6 = iVar7;
        }
        if (iVar6 != (int)plVar1[1]) {
          lVar5 = (int64_t)iVar6;
          do {
            if (*(int *)(*plVar1 + lVar5 * 4) != -1) {
              iVar7 = *(int *)(*plVar1 + (int64_t)iVar6 * 4);
              goto LAB_1808d12d7;
            }
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int)plVar1[1]);
        }
        iVar7 = -1;
        iVar6 = iVar7;
LAB_1808d12d7:
      } while (iVar7 != -1);
    }
  }
  return uVar4;
}



int FUN_1808d1236(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RBP;
  int unaff_EDI;
  int unaff_R12D;
  int unaff_R13D;
  bool bVar4;
  
  plVar1 = *(int64_t **)(unaff_RBP + -0x38);
  do {
    do {
      lVar3 = *(int64_t *)(plVar1[2] + 8 + (int64_t)unaff_EDI * 0x10);
      iVar2 = FUN_1808605e0(lVar3);
      if ((iVar2 != 2) && (*(int64_t *)(lVar3 + 0x350) == 0)) {
        iVar2 = FUN_180863820(lVar3,-(unaff_R12D != 0) & 3,0);
        if (iVar2 != 0) {
          unaff_R13D = iVar2;
        }
      }
    } while ((unaff_EDI != -1) &&
            (unaff_EDI = *(int *)(plVar1[2] + 4 + (int64_t)unaff_EDI * 0x10), unaff_EDI != -1));
    iVar2 = unaff_EBX + 1;
    bVar4 = unaff_EBX != -1;
    unaff_EBX = 0;
    if (bVar4) {
      unaff_EBX = iVar2;
    }
    if (unaff_EBX != (int)plVar1[1]) {
      lVar3 = (int64_t)unaff_EBX;
      do {
        if (*(int *)(*plVar1 + lVar3 * 4) != -1) {
          unaff_EDI = *(int *)(*plVar1 + (int64_t)unaff_EBX * 4);
          goto LAB_1808d12d7;
        }
        unaff_EBX = unaff_EBX + 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != (int)plVar1[1]);
    }
    unaff_EDI = -1;
    unaff_EBX = unaff_EDI;
LAB_1808d12d7:
    if (unaff_EDI == -1) {
      return unaff_R13D;
    }
  } while( true );
}



int32_t FUN_1808d12f2(void)

{
  int32_t unaff_R13D;
  
  return unaff_R13D;
}








