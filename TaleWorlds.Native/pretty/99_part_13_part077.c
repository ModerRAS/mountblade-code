#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part077.c - 4 个函数

// 函数: void FUN_1808ddce2(void)
void FUN_1808ddce2(void)

{
  return;
}



uint64_t FUN_1808ddcf0(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  int unaff_R14D;
  
  if (*(int *)(unaff_RBX + 0x18) == unaff_R14D) {
    *(int64_t *)(unaff_RBX + 0x10) = unaff_RDI[1];
    unaff_RDI[1] = unaff_RBX;
    *(uint64_t *)(*unaff_RDI + 0x10) =
         (uint64_t)*(uint *)(unaff_RBX + 4) + *(int64_t *)(unaff_RBX + 8);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}



uint64_t FUN_1808ddd1b(void)

{
  return 0x1c;
}



uint64_t FUN_1808ddd30(int64_t *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint64_t uVar1;
  int aiStackX_8 [2];
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
    return 0x1c;
  }
  param_2[6] = param_3;
  *param_2 = param_4;
  aiStackX_8[0] = param_4;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
  aiStackX_8[0] = (int)uVar1;
  if (aiStackX_8[0] == 0) {
    param_2[1] = 0;
    uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                      (*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
    if (((int)uVar1 == 0) &&
       (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                          (*(int64_t **)(*param_1 + 8),param_2 + 2), (int)uVar1 == 0)) {
      if (param_3 != 0) {
        *param_2 = param_5;
        aiStackX_8[0] = param_5;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      *(int64_t *)(param_2 + 4) = param_1[1];
      uVar1 = 0;
      param_1[1] = (int64_t)param_2;
    }
  }
  return uVar1;
}



uint64_t FUN_1808dde10(int64_t *param_1,uint param_2)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  uint auStackX_8 [2];
  uint auStackX_18 [4];
  
  if ((param_1[2] != 0) || (0xffff < param_2)) {
    return 0x1c;
  }
  if (param_2 != 0) goto LAB_1808ddeb1;
  plVar1 = (int64_t *)*param_1;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else if (plVar1[2] == 0) {
LAB_1808dde80:
    uVar2 = SystemDataAnalyzer(*plVar1,auStackX_8,1,2,0);
  }
  else {
    auStackX_18[0] = 0;
    uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
    if (uVar2 == 0) {
      if ((uint64_t)auStackX_18[0] + 2 <= (uint64_t)plVar1[2]) goto LAB_1808dde80;
      uVar2 = 0x11;
    }
  }
  if (uVar2 == 0) {
    param_2 = auStackX_8[0] & 0xffff;
  }
  uVar3 = (uint64_t)uVar2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_1808ddeb1:
  *(uint *)(param_1 + 3) = param_2;
  auStackX_8[0] = 0;
  uVar3 = func_0x00018076a7d0(*(uint64_t *)*param_1,auStackX_8);
  if ((int)uVar3 == 0) {
    param_1[2] = (uint64_t)auStackX_8[0];
    *(uint64_t *)(*param_1 + 0x10) = (uint64_t)*(uint *)(param_1 + 3) + (uint64_t)auStackX_8[0];
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808dde33(int64_t *param_1,int param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  uint unaff_EDI;
  uint in_stack_00000050;
  uint in_stack_00000060;
  
  if (param_2 != 0) goto LAB_1808ddeb1;
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else if (param_1[2] == 0) {
LAB_1808dde80:
    uVar1 = SystemDataAnalyzer(*param_1,&stack0x00000050,1,2,0);
  }
  else {
    in_stack_00000060 = 0;
    uVar1 = func_0x00018076a7d0(*param_1,&stack0x00000060);
    if (uVar1 == 0) {
      if ((uint64_t)in_stack_00000060 + 2 <= (uint64_t)param_1[2]) goto LAB_1808dde80;
      uVar1 = 0x11;
    }
  }
  if (uVar1 == 0) {
    unaff_EDI = in_stack_00000050 & 0xffff;
  }
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_1808ddeb1:
  *(uint *)(unaff_RBX + 3) = unaff_EDI;
  in_stack_00000050 = 0;
  uVar2 = func_0x00018076a7d0(*(uint64_t *)*unaff_RBX,&stack0x00000050);
  if ((int)uVar2 == 0) {
    unaff_RBX[2] = (uint64_t)in_stack_00000050;
    *(uint64_t *)(*unaff_RBX + 0x10) =
         (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)in_stack_00000050;
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808dde3e(int64_t *param_1,int param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  uint64_t unaff_RBP;
  uint unaff_EDI;
  uint in_stack_00000050;
  uint in_stack_00000060;
  
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = param_2 + 0x1c;
    goto LAB_1808dde9c;
  }
  if (param_1[2] != unaff_RBP) {
    in_stack_00000060 = (uint)unaff_RBP;
    uVar1 = func_0x00018076a7d0(*param_1,&stack0x00000060);
    if (uVar1 != 0) goto LAB_1808dde9c;
    if ((uint64_t)param_1[2] < (uint64_t)in_stack_00000060 + 2) {
      uVar1 = 0x11;
      goto LAB_1808dde9c;
    }
  }
  uVar1 = SystemDataAnalyzer(*param_1,&stack0x00000050,1);
LAB_1808dde9c:
  if (uVar1 == 0) {
    unaff_EDI = in_stack_00000050 & 0xffff;
  }
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = unaff_RBP & 0xffffffff;
  }
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RBX + 3) = unaff_EDI;
    in_stack_00000050 = (uint)unaff_RBP;
    uVar2 = func_0x00018076a7d0(*(uint64_t *)*unaff_RBX,&stack0x00000050);
    if ((int)uVar2 == 0) {
      unaff_RBX[2] = (uint64_t)in_stack_00000050;
      *(uint64_t *)(*unaff_RBX + 0x10) =
           (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)in_stack_00000050;
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808ddea5(void)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  bool in_ZF;
  ushort in_stack_00000050;
  
  uVar1 = in_RAX & 0xffffffff;
  if (in_ZF) {
    uVar1 = (uint64_t)unaff_EBP;
  }
  if ((int)uVar1 == 0) {
    *(uint *)(unaff_RBX + 3) = (uint)in_stack_00000050;
    _in_stack_00000050 = unaff_EBP;
    uVar1 = func_0x00018076a7d0(*(uint64_t *)*unaff_RBX,&stack0x00000050);
    if ((int)uVar1 == 0) {
      unaff_RBX[2] = (uint64_t)_in_stack_00000050;
      *(uint64_t *)(*unaff_RBX + 0x10) =
           (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)_in_stack_00000050;
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_1808ddeef(void)

{
  return 0x1c;
}



uint64_t FUN_1808ddf00(int64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  int16_t auStackX_8 [4];
  
  if ((param_1[2] == 0) && (param_2 < 0x10000)) {
    if (param_2 == 0) {
      auStackX_8[0] = 0;
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),auStackX_8,2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    *(uint *)(param_1 + 3) = param_2;
                    // WARNING: Could not recover jumptable at 0x0001808ddf67. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                      (*(int64_t **)(*param_1 + 8),param_1 + 2);
    return uVar1;
  }
  return 0x1c;
}



uint64_t FUN_1808ddf80(int64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (param_2 != param_1[1]) {
    return 0x1c;
  }
  uVar1 = FUN_18076a440(*(uint64_t *)*param_1,
                        ((uint64_t)(*(int *)(param_2 + 4) + 1) & 0xfffffffe) +
                        *(int64_t *)(param_2 + 8),0);
  if ((int)uVar1 == 0) {
    lVar2 = *(int64_t *)(param_2 + 0x10);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (uint64_t)*(uint *)(lVar2 + 4) + *(int64_t *)(lVar2 + 8);
    }
    *(int64_t *)(*param_1 + 0x10) = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808de000(int64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  int iStackX_10;
  int32_t uStackX_14;
  
  if (param_2 != param_1[1]) {
    return 0x1c;
  }
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))(*(int64_t **)(*param_1 + 8),&iStackX_10)
  ;
  if ((int)uVar1 == 0) {
    *(int *)(param_2 + 4) = iStackX_10 - *(int *)(param_2 + 8);
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                      (*(int64_t **)(*param_1 + 8),*(int64_t *)(param_2 + 8) + -4,0);
    if ((int)uVar1 == 0) {
      auStackX_8[0] = *(int32_t *)(param_2 + 4);
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),auStackX_8,4);
      if (((int)uVar1 == 0) &&
         (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                            (*(int64_t **)(*param_1 + 8),CONCAT44(uStackX_14,iStackX_10),0),
         (int)uVar1 == 0)) {
        if ((*(byte *)(param_2 + 4) & 1) != 0) {
          auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,(char)uVar1);
          uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),auStackX_8,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        param_1[1] = *(int64_t *)(param_2 + 0x10);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808de0e0(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  if (param_1[2] != 0) {
    uVar2 = FUN_18076a440(*(uint64_t *)*param_1,(uint64_t)*(uint *)(param_1 + 3) + param_1[2],0);
    if ((int)uVar2 == 0) {
      lVar1 = param_1[1];
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = (uint64_t)*(uint *)(lVar1 + 4) + *(int64_t *)(lVar1 + 8);
      }
      *(int64_t *)(*param_1 + 0x10) = lVar3;
      if (param_2 != (int32_t *)0x0) {
        *param_2 = (int)param_1[3];
      }
      *(int32_t *)(param_1 + 3) = 0;
      uVar2 = 0;
      param_1[2] = 0;
    }
    return uVar2;
  }
  return 0x1c;
}



uint64_t FUN_1808de160(int64_t *param_1,uint *param_2)

{
  uint64_t uVar1;
  uint uVar2;
  int16_t auStackX_8 [4];
  int iStackX_18;
  int32_t uStackX_1c;
  
  if (param_1[2] != 0) {
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                      (*(int64_t **)(*param_1 + 8),&iStackX_18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = iStackX_18 - (int)param_1[2];
    if (uVar2 < 0x10000) {
      if (*(uint *)(param_1 + 3) == 0) {
        uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                          (*(int64_t **)(*param_1 + 8),param_1[2] + -2,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        auStackX_8[0] = (int16_t)uVar2;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_8,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                          (*(int64_t **)(*param_1 + 8),CONCAT44(uStackX_1c,iStackX_18),0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else if (*(uint *)(param_1 + 3) != uVar2) {
        return 0x1c;
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar2;
      }
      *(int32_t *)(param_1 + 3) = 0;
      param_1[2] = 0;
      return 0;
    }
  }
  return 0x1c;
}



uint64_t FUN_1808de260(int64_t *param_1,int param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint auStackX_8 [2];
  int8_t auStack_28 [32];
  
  if (param_1[1] != 0) {
    return 0x1c;
  }
  plVar1 = param_1 + 4;
  uVar2 = FUN_1808de4c0(param_1,plVar1);
  auStackX_8[0] = (uint)uVar2;
  if (auStackX_8[0] == 0) {
    if (((int)param_1[7] == 2) && ((int)*plVar1 == param_2)) {
      uVar2 = (**(code **)(**(int64_t **)*param_1 + 0x10))(*(int64_t **)*param_1,auStackX_8);
      if ((int)uVar2 == 0) {
        if ((uint64_t)auStackX_8[0] <
            ((uint64_t)(*(int *)((int64_t)param_1 + 0x24) + 1) & 0xfffffffe) + param_1[5]) {
          return 0xd;
        }
        param_1[6] = param_1[1];
        param_1[1] = (int64_t)plVar1;
        *(uint64_t *)(*param_1 + 0x10) =
             (uint64_t)*(uint *)((int64_t)param_1 + 0x24) + param_1[5];
        uVar2 = FUN_1808ddc20(param_1,auStack_28,0,0x20544d46);
        if ((int)uVar2 == 0) {
          if (*(int *)(param_1[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar2 = FUN_180899740(*param_1,param_1 + 8);
          if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
            FUN_1808ddf80(param_1,auStack_28);
          }
        }
      }
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



uint64_t FUN_1808de286(int64_t param_1)

{
  int *piVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int unaff_ESI;
  uint in_stack_00000050;
  
  piVar1 = (int *)(param_1 + 0x20);
  uVar2 = FUN_1808de4c0(param_1,piVar1);
  in_stack_00000050 = (uint)uVar2;
  if (in_stack_00000050 == 0) {
    if (((int)unaff_RBX[7] == 2) && (*piVar1 == unaff_ESI)) {
      uVar2 = (**(code **)(**(int64_t **)*unaff_RBX + 0x10))
                        (*(int64_t **)*unaff_RBX,&stack0x00000050);
      if ((int)uVar2 == 0) {
        if ((uint64_t)in_stack_00000050 <
            ((uint64_t)(*(int *)((int64_t)unaff_RBX + 0x24) + 1) & 0xfffffffe) + unaff_RBX[5]) {
          return 0xd;
        }
        *(int64_t *)(param_1 + 0x30) = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)piVar1;
        *(uint64_t *)(*unaff_RBX + 0x10) =
             (uint64_t)*(uint *)(param_1 + 0x24) + *(int64_t *)(param_1 + 0x28);
        uVar2 = FUN_1808ddc20();
        if ((int)uVar2 == 0) {
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar2 = FUN_180899740(*unaff_RBX,unaff_RBX + 8);
          if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
            FUN_1808ddf80();
          }
        }
      }
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



uint64_t FUN_1808de2fd(void)

{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  *(int64_t *)(unaff_RDI + 0x10) = unaff_RBX[1];
  unaff_RBX[1] = unaff_RDI;
  *(uint64_t *)(*unaff_RBX + 0x10) =
       (uint64_t)*(uint *)(unaff_RDI + 4) + *(int64_t *)(unaff_RDI + 8);
  uVar1 = FUN_1808ddc20();
  if ((int)uVar1 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180899740(*unaff_RBX,unaff_RBX + 8);
    if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar1;
}






// 函数: void FUN_1808de350(void)
void FUN_1808de350(void)

{
  int iVar1;
  uint64_t *unaff_RBX;
  
  iVar1 = FUN_180899740(*unaff_RBX,unaff_RBX + 8);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808ddf80();
  }
  return;
}



uint64_t FUN_1808de37d(void)

{
  return 0x13;
}



uint64_t FUN_1808de3a0(int64_t *param_1,int32_t param_2,int32_t param_3)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  int32_t auStackX_20 [2];
  int32_t uStack_28;
  int32_t uStack_24;
  int8_t auStack_20 [8];
  int64_t lStack_18;
  int iStack_10;
  
  uVar1 = FUN_1808ddd30(param_1,param_1 + 4,2,0x46464952,param_2);
  if ((int)uVar1 == 0) {
    *(int32_t *)(param_1 + 8) = param_3;
    uVar1 = func_0x0001808edd50(param_3,(int64_t)param_1 + 0x44);
    if ((int)uVar1 == 0) {
      if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
        return 0x1c;
      }
      uStack_28 = 0x20544d46;
      iStack_10 = 0;
      auStackX_8[0] = 0x20544d46;
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),auStackX_8,4);
      if ((int)uVar1 == 0) {
        uStack_24 = 0;
        auStackX_20[0] = 0;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_20,4);
        if (((int)uVar1 == 0) &&
           (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                              (*(int64_t **)(*param_1 + 8),auStack_20), (int)uVar1 == 0)) {
          lStack_18 = param_1[1];
          param_1[1] = (int64_t)&uStack_28;
          if (iStack_10 != 0) {
            return 0x1c;
          }
          uVar1 = FUN_180899f80(*param_1,param_1 + 8);
          if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
            FUN_1808de000(param_1,&uStack_28);
          }
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808de3d7(void)

{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int32_t unaff_EDI;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000034;
  int64_t in_stack_00000040;
  int in_stack_00000048;
  int32_t in_stack_00000060;
  int32_t in_stack_00000078;
  
  *(int32_t *)(unaff_RBX + 8) = unaff_EDI;
  uVar1 = func_0x0001808edd50(unaff_EDI);
  if ((int)uVar1 == 0) {
    if ((unaff_RBX[1] != 0) && (*(int *)(unaff_RBX[1] + 0x18) == 0)) {
      return 0x1c;
    }
    in_stack_00000030 = 0x20544d46;
    in_stack_00000048 = 0;
    in_stack_00000060 = 0x20544d46;
    uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000060,4);
    if ((int)uVar1 == 0) {
      uStack0000000000000034 = 0;
      in_stack_00000078 = 0;
      uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000078,4);
      if (((int)uVar1 == 0) &&
         (uVar1 = (**(code **)(**(int64_t **)(*unaff_RBX + 8) + 8))
                            (*(int64_t **)(*unaff_RBX + 8),&stack0x00000038), (int)uVar1 == 0)) {
        in_stack_00000040 = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)&stack0x00000030;
        if (in_stack_00000048 != 0) {
          return 0x1c;
        }
        uVar1 = FUN_180899f80(*unaff_RBX,unaff_RBX + 8);
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808de000();
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_1808de412(void)

{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int64_t in_stack_00000040;
  int iStack0000000000000048;
  int32_t uStack0000000000000060;
  int32_t in_stack_00000078;
  
  uStack0000000000000030 = 0x20544d46;
  iStack0000000000000048 = 0;
  uStack0000000000000060 = 0x20544d46;
  uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                    (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000060,4);
  if ((int)uVar1 == 0) {
    uStack0000000000000034 = 0;
    in_stack_00000078 = 0;
    uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&stack0x00000078,4);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(**(int64_t **)(*unaff_RBX + 8) + 8))
                        (*(int64_t **)(*unaff_RBX + 8),&stack0x00000038);
      if ((int)uVar1 == 0) {
        in_stack_00000040 = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)&stack0x00000030;
        if (iStack0000000000000048 != 0) {
          return 0x1c;
        }
        uVar1 = FUN_180899f80(*unaff_RBX,unaff_RBX + 8);
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808de000();
        }
      }
    }
  }
  return uVar1;
}






// 函数: void FUN_1808de4b5(void)
void FUN_1808de4b5(void)

{
  return;
}



uint64_t FUN_1808de4c0(uint64_t *param_1,int *param_2)

{
  uint64_t uVar1;
  uint auStackX_8 [2];
  
  uVar1 = SystemErrorHandler(*param_1,param_2,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = SystemErrorHandler(*param_1,param_2 + 1,4);
  auStackX_8[0] = (uint)uVar1;
  if (auStackX_8[0] != 0) {
    return uVar1;
  }
  uVar1 = func_0x00018076a7d0(*(uint64_t *)*param_1,auStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *(uint64_t *)(param_2 + 2) = (uint64_t)auStackX_8[0];
  if (*param_2 == 0x46464952) {
    param_2[6] = 2;
  }
  else {
    if (*param_2 != 0x5453494c) {
      param_2[6] = 0;
      goto LAB_1808de561;
    }
    param_2[6] = 1;
  }
  uVar1 = SystemErrorHandler(*param_1,param_2,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
LAB_1808de561:
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}



uint64_t FUN_1808de580(int64_t *param_1,int32_t param_2)

{
  uint64_t uVar1;
  int8_t auStack_28 [4];
  int iStack_24;
  int64_t lStack_20;
  int64_t lStack_18;
  
  uVar1 = FUN_1808ddc20(param_1,auStack_28,1,param_2);
  if ((int)uVar1 == 0) {
    if (auStack_28 != (int8_t *)param_1[1]) {
      return 0x1c;
    }
    uVar1 = FUN_18076a440(*(uint64_t *)*param_1,
                          ((uint64_t)(iStack_24 + 1) & 0xfffffffe) + lStack_20,0);
    if ((int)uVar1 == 0) {
      param_1[1] = lStack_18;
      if (lStack_18 != 0) {
        *(uint64_t *)(*param_1 + 0x10) =
             (uint64_t)*(uint *)(lStack_18 + 4) + *(int64_t *)(lStack_18 + 8);
        return 0;
      }
      *(uint64_t *)(*param_1 + 0x10) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}






// 函数: void FUN_1808de620(int64_t *param_1)
void FUN_1808de620(int64_t *param_1)

{
  int16_t auStackX_8 [16];
  
  auStackX_8[0] = 0;
  (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_8,2);
  return;
}



uint64_t FUN_1808de650(uint64_t *param_1,int *param_2)

{
  uint64_t uVar1;
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddc20(param_1,auStack_28,0,0x544e434c);
  if ((int)uVar1 == 0x12) {
    return uVar1;
  }
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemErrorHandler(*param_1,param_2,4);
    if ((int)uVar1 == 0) {
      if (*param_2 < 0) {
        return 0xd;
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80(param_1,auStack_28);
    }
  }
  return uVar1;
}



uint64_t FUN_1808de6f0(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  int aiStackX_18 [4];
  int32_t uStack_28;
  int iStack_24;
  int8_t auStack_20 [8];
  int64_t lStack_18;
  int iStack_10;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
    return 0x1c;
  }
  iStack_10 = 0;
  uStack_28 = 0x544e434c;
  auStackX_8[0] = 0x544e434c;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_8,4);
  aiStackX_18[0] = (int)uVar1;
  if (((aiStackX_18[0] == 0) &&
      (iStack_24 = aiStackX_18[0],
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),aiStackX_18,4), (int)uVar1 == 0)) &&
     (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                        (*(int64_t **)(*param_1 + 8),auStack_20), (int)uVar1 == 0)) {
    lStack_18 = param_1[1];
    param_1[1] = (int64_t)&uStack_28;
    if (iStack_10 != 0) {
      return 0x1c;
    }
    auStackX_8[0] = *param_2;
    uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                      (*(uint64_t **)(*param_1 + 8),auStackX_8,4);
    if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808de000(param_1,&uStack_28);
    }
  }
  return uVar1;
}



uint64_t FUN_1808de7f0(int64_t *param_1,uint *param_2)

{
  uint64_t uVar1;
  uint uVar2;
  ushort auStackX_8 [4];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  
  param_1 = (int64_t *)*param_1;
  uVar2 = 0x1c;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_18[0] = 0;
      uVar1 = func_0x00018076a7d0(*param_1,auStackX_18);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)auStackX_18[0] + 2) {
        uVar1 = 0x11;
        goto LAB_1808de860;
      }
    }
    uVar1 = SystemDataAnalyzer(*param_1,auStackX_8,1,2,0);
  }
LAB_1808de860:
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *param_2 = (uint)auStackX_8[0];
  if ((auStackX_8[0] & 0x8000) == 0) {
    return 0;
  }
  if (*param_1 == 0) goto LAB_1808de8ce;
  if (param_1[2] != 0) {
    auStackX_20[0] = 0;
    uVar2 = func_0x00018076a7d0(*param_1,auStackX_20);
    if (uVar2 != 0) goto LAB_1808de8ce;
    if ((uint64_t)param_1[2] < (uint64_t)auStackX_20[0] + 2) {
      uVar2 = 0x11;
      goto LAB_1808de8ce;
    }
  }
  uVar2 = SystemDataAnalyzer(*param_1,auStackX_8,1,2,0);
LAB_1808de8ce:
  if (uVar2 == 0) {
    *param_2 = *param_2 & 0x7fff;
    *param_2 = *param_2 | (uint)auStackX_8[0] << 0xf;
    return 0;
  }
  return (uint64_t)uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808de900(int64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  
  puVar1 = (int32_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&unknown_var_8144_ptr,0x30,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *puVar1 = 0;
    puVar2 = puVar1 + 2;
    *(int32_t **)puVar2 = puVar2;
    *(int32_t **)(puVar1 + 4) = puVar2;
    *(uint64_t *)(puVar1 + 6) = 0;
    *(uint64_t *)(puVar1 + 8) = 0;
    *(uint64_t *)(puVar1 + 10) = 0;
    puVar1[0xc] = 1;
    *(uint64_t *)(puVar1 + 0xd) = 0x2e;
    uVar3 = FUN_18088c060(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar3 == 0) {
      uVar3 = func_0x00018088c500(puVar1,param_2);
    }
  }
  return uVar3;
}



uint64_t FUN_1808de9b0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 1) {
    return 0x1c;
  }
  lVar1 = *(int64_t *)(param_1 + 0x18);
  *(int32_t *)(param_1 + 0x2c) = 0;
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
    uVar2 = FUN_1808c7c40(*(uint64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) + 0xd0
                           ));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808dea20(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar4)) {
      return 0;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar4 * 8);
    if (((*(uint *)(lVar2 + 0xf8) >> 3 & 1) != 0) &&
       (uVar3 = FUN_1808c7c40(*(uint64_t *)(lVar2 + 0xd0)), (int)uVar3 != 0)) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




