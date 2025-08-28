#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 06_utilities_part021.c - 12 个函数

// 函数: void FUN_18089cc29(void)
void FUN_18089cc29(void)

{
  return;
}





// 函数: void FUN_18089cc31(void)
void FUN_18089cc31(void)

{
  return;
}





// 函数: void FUN_18089cc41(void)
void FUN_18089cc41(void)

{
  return;
}



uint64_t FUN_18089cc80(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  int8_t auStack_38 [32];
  
  uVar3 = DataFlowProcessor(param_2,auStack_38,0,0x46454d50);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  auStackX_18[0] = *(uint *)(param_1 + 0x50);
  uVar2 = 0x1c;
  if (*(int *)(param_2[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*param_2;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        auStackX_20[0] = 0;
        uVar3 = func_0x00018076a7d0(*plVar1,auStackX_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)auStackX_20[0] + 4) {
          uVar3 = 0x11;
          goto LAB_18089cd46;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,auStackX_18,1,4,0);
    }
LAB_18089cd46:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < auStackX_18[0]) {
      return 0xd;
    }
    uVar3 = FUN_1808af280(param_1 + 0x48);
    if ((int)uVar3 == 0) goto LAB_18089cd76;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_18089cd76:
  iVar4 = 0;
  if (0 < (int)auStackX_18[0]) {
    do {
      uVar3 = FUN_1808acb90(param_1,param_2,iVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)auStackX_18[0]);
  }
  if (*(uint *)(param_2 + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x5c);
  }
  if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,auStack_38);
  }
  return (uint64_t)uVar2;
}



uint64_t FUN_18089ccb9(void)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint in_stack_00000080;
  uint in_stack_00000088;
  
  uVar2 = 0x1c;
  if (*(int *)(in_RAX + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RSI;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] != 0) {
        in_stack_00000088 = 0;
        uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000088);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if ((uint64_t)plVar1[2] < (uint64_t)in_stack_00000088 + 4) {
          uVar3 = 0x11;
          goto LAB_18089cd46;
        }
      }
      uVar3 = SystemDataAnalyzer(*plVar1,&stack0x00000080,1,4,0);
    }
LAB_18089cd46:
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (0x3ff < in_stack_00000080) {
      return 0xd;
    }
    uVar3 = FUN_1808af280(unaff_RBP + 0x48);
    if ((int)uVar3 == 0) goto LAB_18089cd76;
  }
  else {
    uVar3 = 0x1c;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_18089cd76:
  iVar4 = 0;
  if (0 < (int)in_stack_00000080) {
    do {
      uVar3 = FUN_1808acb90();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)in_stack_00000080);
  }
  if (*(uint *)(unaff_RSI + 8) < 0x6e) {
    uVar2 = 0;
  }
  else if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
    uVar2 = SystemCore_ProtocolProcessor(*unaff_RSI,unaff_RBP + 0x5c);
  }
  if (uVar2 != 0) {
    return (uint64_t)uVar2;
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}



uint64_t FUN_18089ce03(void)

{
  return 0;
}



uint64_t FUN_18089ce16(void)

{
  return 0xd;
}





// 函数: void FUN_18089ce25(void)
void FUN_18089ce25(void)

{
  return;
}



uint64_t FUN_18089ce30(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  int8_t auStack_48 [32];
  
  uVar2 = DataFlowProcessor(param_2,auStack_48,0,0x54534c50);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  uVar3 = 0x1c;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089cef2;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,auStackX_20,1,4,0);
  }
LAB_18089cef2:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(param_1 + 0x10) = auStackX_20[0];
  uVar2 = 0xd;
  if (auStackX_20[0] < 5) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089cf93;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,auStackX_20,1,4,0);
  }
LAB_18089cf93:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(param_1 + 0x14) = auStackX_20[0];
  uVar2 = 0xd;
  if (auStackX_20[0] < 3) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808a5150(param_2,param_1,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (2 < (int)param_2[8] - 0x65U) goto LAB_18089d07f;
  bVar4 = false;
  if (*(int *)(param_2[1] + 0x18) != 0) goto LAB_18089d06e;
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 != 0) {
    if (plVar1[2] == 0) {
LAB_18089d034:
      uVar3 = SystemDataAnalyzer(*plVar1,auStackX_18,1,1,0);
    }
    else {
      auStackX_20[0] = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,auStackX_20);
      if (uVar3 == 0) {
        if ((uint64_t)auStackX_20[0] + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar3 = 0x11;
      }
    }
  }
  if (uVar3 == 0) {
    bVar4 = (char)auStackX_18[0] != '\0';
    uVar3 = 0;
  }
  if (uVar3 != 0) {
LAB_18089d06e:
    return (uint64_t)uVar3;
  }
  if (bVar4) {
    *(int32_t *)(param_1 + 0x10) = 3;
  }
LAB_18089d07f:
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_2,auStack_48);
}



uint64_t FUN_18089ce60(void)

{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint uVar3;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  bool bVar4;
  char cStack0000000000000090;
  uint in_stack_00000098;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  uVar3 = 0x1c;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      _cStack0000000000000090 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x00000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)_cStack0000000000000090 + 4) {
        uVar2 = 0x11;
        goto LAB_18089cef2;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&stack0x00000098,1,4,0);
  }
LAB_18089cef2:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(unaff_R14 + 0x10) = in_stack_00000098;
  uVar2 = 0xd;
  if (in_stack_00000098 < 5) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      _cStack0000000000000090 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x00000090);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)_cStack0000000000000090 + 4) {
        uVar2 = 0x11;
        goto LAB_18089cf93;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&stack0x00000098,1,4,0);
  }
LAB_18089cf93:
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  *(uint *)(unaff_R14 + 0x14) = in_stack_00000098;
  uVar2 = 0xd;
  if (in_stack_00000098 < 3) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808a5150();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (2 < (int)unaff_RDI[8] - 0x65U) goto LAB_18089d07f;
  bVar4 = false;
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) goto LAB_18089d06e;
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 != 0) {
    if (plVar1[2] == 0) {
LAB_18089d034:
      uVar3 = SystemDataAnalyzer(*plVar1,&stack0x00000090,1,1,0);
    }
    else {
      in_stack_00000098 = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000098);
      if (uVar3 == 0) {
        if ((uint64_t)in_stack_00000098 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar3 = 0x11;
      }
    }
  }
  if (uVar3 == 0) {
    bVar4 = cStack0000000000000090 != '\0';
    uVar3 = 0;
  }
  if (uVar3 != 0) {
LAB_18089d06e:
    return (uint64_t)uVar3;
  }
  if (bVar4) {
    *(int32_t *)(unaff_R14 + 0x10) = 3;
  }
LAB_18089d07f:
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}



uint64_t FUN_18089cfd6(void)

{
  int64_t *plVar1;
  uint in_EAX;
  uint uVar2;
  uint64_t unaff_RBX;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  char in_stack_00000090;
  uint in_stack_00000098;
  
  uVar2 = (uint)unaff_RBX;
  if (2 < in_EAX) goto LAB_18089d07f;
  if (*(uint *)(unaff_RDI[1] + 0x18) != (uint)unaff_R15) goto LAB_18089d06e;
  plVar1 = (int64_t *)*unaff_RDI;
  if (*plVar1 != 0) {
    if (plVar1[2] == unaff_R15) {
LAB_18089d034:
      uVar2 = SystemDataAnalyzer(*plVar1,&stack0x00000090,1);
    }
    else {
      in_stack_00000098 = (uint)unaff_R15;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x00000098);
      if (uVar2 == 0) {
        if ((uint64_t)in_stack_00000098 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089d034;
        uVar2 = 0x11;
      }
    }
  }
  unaff_RBX = (uint64_t)uVar2;
  if (uVar2 == 0) {
    unaff_RBX = unaff_R15 & 0xffffffff;
  }
  if ((int)unaff_RBX != 0) {
LAB_18089d06e:
    return unaff_RBX & 0xffffffff;
  }
  if (uVar2 == 0 && in_stack_00000090 != (char)unaff_R15) {
    *(int32_t *)(unaff_R14 + 0x10) = 3;
  }
LAB_18089d07f:
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





// 函数: void FUN_18089d091(void)
void FUN_18089d091(void)

{
  return;
}





// 函数: void FUN_18089d0a3(void)
void FUN_18089d0a3(void)

{
  return;
}





// 函数: void FUN_18089d0b0(int64_t param_1,uint64_t param_2)
void FUN_18089d0b0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18089ce30(param_1 + 0xd8);
  if (iVar1 == 0) {
    FUN_18089b7d0(param_1,param_2);
  }
  return;
}



uint64_t FUN_18089d0f0(int64_t param_1,uint64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar2 = DataFlowProcessor(param_2,auStack_28,1,0x46464550);
  if (((((int)uVar2 != 0) ||
       (uVar2 = DataFlowProcessor(param_2,auStack_48,0,0x42464550), (int)uVar2 != 0)) ||
      (uVar2 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar2 != 0)) ||
     ((*(uint *)(param_2 + 8) < 0x5b &&
      (uVar2 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar2 != 0)))) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemCore_Validator(*param_2,param_1 + 0x60);
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0x1c;
    if (*(uint *)(param_2 + 8) < 0x36) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2;
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar3 = SystemCore_Validator(*param_2,param_1 + 0x70);
      }
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(uint *)(param_2 + 8) < 0x3d) {
      uVar2 = 0;
    }
    else if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x40);
      uVar2 = (uint64_t)uVar1;
    }
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,auStack_48);
    }
  }
  return uVar2;
}



uint64_t FUN_18089d171(void)

{
  uint uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x60);
  uVar3 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar3 = 0x1c;
    if (*(uint *)(unaff_RBX + 8) < 0x36) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar3;
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x70);
      }
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar3 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x40);
      uVar3 = (uint64_t)uVar1;
    }
    if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}



uint64_t FUN_18089d193(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  
  uVar1 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x60);
  uVar3 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar3 = 0x1c;
    if (*(uint *)(unaff_RBX + 8) < 0x36) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar3;
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_Validator(*unaff_RBX,unaff_RSI + 0x70);
      }
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar3 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x40);
      uVar3 = (uint64_t)uVar1;
    }
    if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}





// 函数: void FUN_18089d208(void)
void FUN_18089d208(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}





// 函数: void FUN_18089d23a(void)
void FUN_18089d23a(void)

{
  return;
}



uint64_t FUN_18089d250(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int aiStackX_18 [2];
  uint auStackX_20 [2];
  int32_t auStack_68 [2];
  int64_t lStack_60;
  int8_t auStack_58 [32];
  int8_t auStack_38 [32];
  
  uVar3 = DataFlowProcessor(param_2,auStack_38,1,0x53505250);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  aiStackX_18[0] = 0;
  uVar3 = SystemCore_EncryptionManager(param_2,aiStackX_18);
  if ((int)uVar3 == 0x12) {
LAB_18089d455:
                    // WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,auStack_38);
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (aiStackX_18[0] < 1) goto LAB_18089d455;
  uVar3 = DataFlowProcessor(param_2,auStack_58,0,0x504f5250);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  auStack_68[0] = 0;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_20[0] = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,auStackX_20);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_20[0] + 4) {
        uVar3 = 0x11;
        goto LAB_18089d378;
      }
    }
    uVar3 = SystemDataAnalyzer(*plVar1,auStack_68,1,4,0);
  }
LAB_18089d378:
  if ((int)uVar3 == 0) {
    lStack_60 = 0;
    uVar3 = FUN_1808b0490(param_1,auStack_68[0],&lStack_60);
    lVar2 = lStack_60;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar3 = SystemErrorHandler(*param_2,lStack_60 + 0x48,2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*param_2,lVar2 + 0x4a,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemCore_ConfigManager(param_2,lVar2 + 0x30);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808a79f0(param_2,lVar2 + 0x20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808a5d60(param_2,lVar2 + 0x10,0);
        if ((int)uVar3 == 0) {
          *(int32_t *)(lVar2 + 0x44) = 0xffffffff;
          goto LAB_18089d435;
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
LAB_18089d435:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,auStack_58);
    }
  }
  return uVar3;
}



uint64_t FUN_18089d281(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  int32_t in_stack_00000030;
  int64_t in_stack_00000038;
  int iStack00000000000000b0;
  uint in_stack_000000b8;
  
  iStack00000000000000b0 = 0;
  uVar3 = SystemCore_EncryptionManager();
  if ((int)uVar3 == 0x12) {
LAB_18089d455:
                    // WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (iStack00000000000000b0 < 1) goto LAB_18089d455;
  uVar3 = DataFlowProcessor();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  in_stack_00000030 = 0;
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b8 = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,&stack0x000000b8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)in_stack_000000b8 + 4) {
        uVar3 = 0x11;
        goto LAB_18089d378;
      }
    }
    uVar3 = SystemDataAnalyzer(*plVar1,&stack0x00000030,1,4,0);
  }
LAB_18089d378:
  if ((int)uVar3 == 0) {
    in_stack_00000038 = 0;
    uVar3 = FUN_1808b0490();
    lVar2 = in_stack_00000038;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar3 = SystemErrorHandler(*unaff_RBX,in_stack_00000038 + 0x48,2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar3 = SystemErrorHandler(*unaff_RBX,lVar2 + 0x4a,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemCore_ConfigManager();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808a79f0();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808a5d60();
        if ((int)uVar3 == 0) {
          *(int32_t *)(lVar2 + 0x44) = 0xffffffff;
          goto LAB_18089d435;
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0x1c;
    }
    if ((int)uVar3 == 0) {
LAB_18089d435:
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}





// 函数: void FUN_18089d47a(void)
void FUN_18089d47a(void)

{
  return;
}



uint64_t FUN_18089d484(void)

{
  return 0x1c;
}



uint64_t FUN_18089d490(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  uVar1 = UISystemEventHandler(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = UIEventHandler(*param_2,param_1 + 0x10);
    if (((int)uVar1 == 0) && (uVar1 = FUN_1808afc70(param_2,param_1 + 8), (int)uVar1 == 0)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemErrorHandler(*param_2,param_1 + 0xc,4);
      if ((int)uVar1 == 0) {
        uVar1 = SystemCore_Initializer(param_2,0);
      }
    }
  }
  return uVar1;
}





// 函数: void FUN_18089d520(int64_t param_1,uint64_t *param_2)
void FUN_18089d520(int64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  iVar1 = DataFlowProcessor(param_2,auStack_28,1,0x4a4f5250);
  if (((iVar1 == 0) && (iVar1 = DataFlowProcessor(param_2,auStack_48,0,0x494b4e42), iVar1 == 0)) &&
     (iVar1 = SystemCore_ConfigManager(param_2,param_1 + 0x10), iVar1 == 0)) {
    if (*(uint *)(param_2 + 8) < 0x37) {
      iVar1 = 0;
    }
    else if (*(int *)(param_2[1] + 0x18) == 0) {
      iVar1 = SystemErrorHandler(*param_2,param_1 + 0x210,8);
    }
    else {
      iVar1 = 0x1c;
    }
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x218) = *(int32_t *)(param_2 + 8);
      if (*(uint *)(param_2 + 8) < 0x41) {
        iVar1 = 0;
      }
      else if (*(int *)(param_2[1] + 0x18) == 0) {
        iVar1 = SystemErrorHandler(*param_2,param_1 + 0x2f4,4);
      }
      else {
        iVar1 = 0x1c;
      }
      if (iVar1 == 0) {
        if (*(uint *)(param_2 + 8) < 0x4d) {
          iVar1 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          iVar1 = SystemErrorHandler(*param_2,param_1 + 0x21c,4);
        }
        else {
          iVar1 = 0x1c;
        }
        if (iVar1 == 0) {
          *(int32_t *)(param_1 + 0x200) = *(int32_t *)(param_1 + 0x10);
          *(int32_t *)(param_1 + 0x204) = *(int32_t *)(param_1 + 0x14);
          *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_1 + 0x18);
          *(int32_t *)(param_1 + 0x20c) = *(int32_t *)(param_1 + 0x1c);
                    // WARNING: Subroutine does not return
          AdvancedSystemManager(param_2,auStack_48);
        }
      }
    }
  }
  return;
}





// 函数: void FUN_18089d557(int32_t param_1)
void FUN_18089d557(int32_t param_1)

{
  int iVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t extraout_XMM0_Da;
  
  iVar1 = DataFlowProcessor(param_1,&stack0x00000030,0);
  if (iVar1 == 0) {
    iVar1 = SystemCore_ConfigManager(extraout_XMM0_Da,unaff_RDI + 0x10);
    if (iVar1 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x37) {
        iVar1 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x210,8);
      }
      else {
        iVar1 = 0x1c;
      }
      if (iVar1 == 0) {
        *(int32_t *)(unaff_RDI + 0x218) = *(int32_t *)(unaff_RBX + 8);
        if (*(uint *)(unaff_RBX + 8) < 0x41) {
          iVar1 = 0;
        }
        else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x2f4,4);
        }
        else {
          iVar1 = 0x1c;
        }
        if (iVar1 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x4d) {
            iVar1 = 0;
          }
          else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            iVar1 = SystemErrorHandler(*unaff_RBX,unaff_RDI + 0x21c,4);
          }
          else {
            iVar1 = 0x1c;
          }
          if (iVar1 == 0) {
            *(int32_t *)(unaff_RDI + 0x200) = *(int32_t *)(unaff_RDI + 0x10);
            *(int32_t *)(unaff_RDI + 0x204) = *(int32_t *)(unaff_RDI + 0x14);
            *(int32_t *)(unaff_RDI + 0x208) = *(int32_t *)(unaff_RDI + 0x18);
            *(int32_t *)(unaff_RDI + 0x20c) = *(int32_t *)(unaff_RDI + 0x1c);
                    // WARNING: Subroutine does not return
            AdvancedSystemManager(*(int32_t *)(unaff_RDI + 0x10),&stack0x00000030);
          }
        }
      }
    }
  }
  return;
}





