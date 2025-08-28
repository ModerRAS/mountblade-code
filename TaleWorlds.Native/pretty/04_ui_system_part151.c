#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part151.c - 16 个函数

// 函数: void FUN_1807568a0(longlong *param_1,uint64_t param_2,longlong param_3,char param_4,char param_5,
void FUN_1807568a0(longlong *param_1,uint64_t param_2,longlong param_3,char param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  int8_t auStack_58 [32];
  uint auStack_38 [2];
  uint64_t uStack_30;
  int32_t uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (param_1[0x3b] == 0) goto FUN_180756a02;
  if ((param_3 == 0) && ((*(uint *)(param_1[0x3b] + 0x3c) & 0x10000) == 0)) {
    param_3 = *(longlong *)(param_1[1] + 0x116e0);
  }
  if (param_1[4] == 0) {
LAB_180756926:
    param_1[4] = param_3;
    param_1[0x42] = (longlong)param_1;
    if (param_3 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x1a8);
      plVar1 = param_1 + 0x40;
      *plVar1 = lVar3;
      param_1[0x41] = param_3 + 0x1a8;
      *(longlong **)(lVar3 + 8) = plVar1;
      *(longlong **)param_1[0x41] = plVar1;
      *(int *)(param_1[4] + 0x1dc) = *(int *)(param_1[4] + 0x1dc) + 1;
      if (param_1[0x3b] == 0) goto FUN_180756a02;
    }
  }
  else {
    plVar1 = param_1 + 0x40;
    if (((longlong *)*plVar1 != plVar1) || ((longlong *)param_1[0x41] != plVar1)) {
      piVar2 = (int *)(param_1[4] + 0x1dc);
      *piVar2 = *piVar2 + -1;
      *(longlong *)param_1[0x41] = *plVar1;
      *(longlong *)(*plVar1 + 8) = param_1[0x41];
      param_1[0x41] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      goto LAB_180756926;
    }
  }
  iVar4 = FUN_1807556b0(param_1,param_2,param_5);
  if (iVar4 == 0) {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x40000;
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
    if (iVar4 == 0) {
      uVar6 = 0;
      if (param_6 == '\0') {
        uVar6 = 0x3f800000;
      }
      *(int32_t *)(param_1 + 0x43) = uVar6;
      *(int32_t *)((longlong)param_1 + 0x21c) = uVar6;
      if ((((param_5 == '\0') ||
           ((iVar4 = FUN_180757340(param_1), iVar4 == 0 &&
            (iVar4 = FUN_180757ed0(param_1,0,2), iVar4 == 0)))) &&
          ((longlong *)param_1[0x3b] != (longlong *)0x0)) &&
         (uVar5 = (**(code **)(*(longlong *)param_1[0x3b] + 0x30))(), uVar5 == 0)) {
        if ((param_5 != '\0') &&
           (auStack_38[0] = uVar5, (**(code **)(*param_1 + 0x98))(param_1,auStack_38),
           (auStack_38[0] & 0x10) != 0)) {
          uStack_30 = 0;
          uStack_28 = 0;
          iVar4 = (**(code **)(*param_1 + 0x140))(param_1,param_1[1] + 0x11080,&uStack_30);
          if (iVar4 != 0) goto FUN_180756a02;
        }
        if (param_4 == '\0') {
          (**(code **)(*param_1 + 0x10))(param_1,0);
        }
      }
    }
  }
FUN_180756a02:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_58);
}





// 函数: void FUN_180756971(void)
void FUN_180756971(void)

{
  int iVar1;
  uint uVar2;
  longlong *unaff_RBX;
  char unaff_SIL;
  int32_t extraout_XMM0_Da;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  uint auStackX_20 [2];
  uint64_t in_stack_00000028;
  int32_t in_stack_00000030;
  ulonglong in_stack_00000038;
  char in_stack_00000080;
  char in_stack_00000088;
  
  iVar1 = FUN_1807556b0();
  if (iVar1 == 0) {
    *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) | 0x40000;
    iVar1 = (**(code **)(*unaff_RBX + 0x10))(extraout_XMM0_Da,1);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (in_stack_00000088 == '\0') {
        uVar3 = 0x3f800000;
      }
      *(int32_t *)(unaff_RBX + 0x43) = uVar3;
      *(int32_t *)((longlong)unaff_RBX + 0x21c) = uVar3;
      if ((((in_stack_00000080 == '\0') ||
           ((iVar1 = FUN_180757340(), iVar1 == 0 &&
            (iVar1 = FUN_180757ed0(extraout_XMM0_Da_00,0,2), iVar1 == 0)))) &&
          ((longlong *)unaff_RBX[0x3b] != (longlong *)0x0)) &&
         (uVar2 = (**(code **)(*(longlong *)unaff_RBX[0x3b] + 0x30))(), uVar2 == 0)) {
        uVar3 = extraout_XMM0_Da_01;
        if ((in_stack_00000080 != '\0') &&
           (auStackX_20[0] = uVar2,
           uVar3 = (**(code **)(*unaff_RBX + 0x98))(extraout_XMM0_Da_01,auStackX_20),
           (auStackX_20[0] & 0x10) != 0)) {
          in_stack_00000028 = 0;
          in_stack_00000030 = 0;
          iVar1 = (**(code **)(*unaff_RBX + 0x140))(uVar3,unaff_RBX[1] + 0x11080,&stack0x00000028);
          uVar3 = extraout_XMM0_Da_02;
          if (iVar1 != 0) goto LAB_1807569fd;
        }
        if (unaff_SIL == '\0') {
          (**(code **)(*unaff_RBX + 0x10))(uVar3,0);
        }
      }
    }
  }
LAB_1807569fd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180756a02(void)
void FUN_180756a02(void)

{
  ulonglong in_stack_00000038;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x000180756a41)



// 函数: void FUN_180756a16(longlong *param_1)
void FUN_180756a16(longlong *param_1)

{
  int iVar1;
  longlong *unaff_RBX;
  char unaff_SIL;
  char unaff_DIL;
  ulonglong in_stack_00000038;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    if (unaff_DIL != '\0') {
      (**(code **)(*unaff_RBX + 0x98))();
    }
    if (unaff_SIL == '\0') {
      (**(code **)(*unaff_RBX + 0x10))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180756a91(void)
void FUN_180756a91(void)

{
  ulonglong in_stack_00000038;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180756aa0(longlong *param_1,longlong *param_2,longlong param_3,char param_4,char param_5,
void FUN_180756aa0(longlong *param_1,longlong *param_2,longlong param_3,char param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  int8_t auStack_78 [32];
  byte abStack_58 [8];
  longlong alStack_50 [2];
  int32_t uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  if (((param_2 != (longlong *)0x0) && (param_1[0x3b] != 0)) && ((int)param_2[0x16] == 0)) {
    if ((param_3 == 0) && ((*(uint *)(param_1[0x3b] + 0x3c) & 0x10000) == 0)) {
      param_3 = *(longlong *)(param_1[1] + 0x116e0);
    }
    iVar5 = (**(code **)(*param_1 + 0x120))(param_1,0,alStack_50);
    if (iVar5 == 0) {
      if (alStack_50[0] != 0) {
        *(longlong **)(alStack_50[0] + 0x1f8) = param_1;
      }
      iVar5 = FUN_180757000(param_1,param_3,0,0);
      if ((iVar5 == 0) && (iVar5 = FUN_180755930(param_1,param_2,param_5), iVar5 == 0)) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x40000;
        iVar5 = (**(code **)(*param_1 + 0x10))(param_1,1);
        if (iVar5 == 0) {
          uVar6 = 0;
          if (param_5 != '\0') {
            if (param_6 == '\0') {
              uVar6 = 0x3f800000;
            }
            *(int32_t *)(param_1 + 0x43) = uVar6;
            *(int32_t *)((longlong)param_1 + 0x21c) = uVar6;
            iVar5 = FUN_180757340(param_1);
            if (iVar5 != 0) goto FUN_180756d8a;
            cVar4 = (**(code **)*param_2)(param_2);
            uVar6 = 0;
            if ((cVar4 != '\0') && (uVar6 = 0, param_2[0x17] != 0)) {
              uVar6 = *(int32_t *)(param_2[0x17] + 0x194);
            }
            iVar5 = FUN_180757ed0(param_1,uVar6,2);
            if (iVar5 != 0) goto FUN_180756d8a;
          }
          if (((longlong *)param_1[0x3b] != (longlong *)0x0) &&
             (iVar5 = (**(code **)(*(longlong *)param_1[0x3b] + 0x30))(), iVar5 == 0)) {
            *(int *)(param_2 + 0x27) = (int)param_2[0x27] + 1;
            if ((param_2[0x23] != 0) && ((*(uint *)(param_1[0x3b] + 0x3c) & 0x10000) == 0)) {
              FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
              plVar1 = (longlong *)param_2[0x23];
              *(longlong *)plVar1[1] = *plVar1;
              *(longlong *)(*plVar1 + 8) = plVar1[1];
              plVar1[1] = (longlong)plVar1;
              *plVar1 = (longlong)plVar1;
              lVar2 = param_1[1];
              plVar1 = (longlong *)param_2[0x23];
              lVar3 = *(longlong *)(lVar2 + 0x11728);
              *plVar1 = lVar3;
              plVar1[1] = lVar2 + 0x11728;
              *(longlong **)(lVar3 + 8) = plVar1;
              *(longlong **)plVar1[1] = plVar1;
                    // WARNING: Subroutine does not return
              FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
            }
            if (param_5 != '\0') {
              (**(code **)(*param_2 + 0x120))(param_2,abStack_58);
              if ((abStack_58[0] & 0x10) != 0) {
                alStack_50[1] = 0;
                uStack_40 = 0;
                iVar5 = (**(code **)(*param_1 + 0x140))(param_1,param_1[1] + 0x11080,alStack_50 + 1)
                ;
                if (iVar5 != 0) goto FUN_180756d8a;
              }
              if ((((*(byte *)(*(longlong *)(param_1[1] + 0x116e0) + 0x48) & 2) != 0) &&
                  ((*(uint *)(param_1[0x3b] + 0x3c) & 0x10000) == 0)) &&
                 (iVar5 = (**(code **)(*param_1 + 0x58))
                                    (param_1,CONCAT31((uint3)(*(uint *)(param_1 + 9) >> 9),
                                                      (char)(*(uint *)(param_1 + 9) >> 1)) &
                                             0xffffff01), iVar5 != 0)) goto FUN_180756d8a;
            }
            if (((longlong *)param_2[0x1e] != (longlong *)0x0) &&
               (*(int *)((longlong)param_2 + 0xe4) != 0)) {
              param_1[0x3e] = *(longlong *)param_2[0x1e];
              *(int32_t *)(param_1 + 0x3f) = 0;
            }
            if (param_4 == '\0') {
              (**(code **)(*param_1 + 0x10))(param_1,0);
            }
          }
        }
      }
    }
  }
FUN_180756d8a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180756b90(void)
void FUN_180756b90(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RBX;
  char unaff_SIL;
  longlong *unaff_RDI;
  char unaff_R14B;
  int32_t uVar6;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  byte abStackX_20 [8];
  uint64_t in_stack_00000030;
  int32_t in_stack_00000038;
  ulonglong in_stack_00000040;
  char in_stack_000000a8;
  
  uVar6 = 0;
  if (unaff_SIL != '\0') {
    if (in_stack_000000a8 == '\0') {
      uVar6 = 0x3f800000;
    }
    *(int32_t *)(unaff_RBX + 0x43) = uVar6;
    *(int32_t *)((longlong)unaff_RBX + 0x21c) = uVar6;
    iVar5 = FUN_180757340();
    if (iVar5 != 0) goto LAB_180756d85;
    cVar4 = (**(code **)*unaff_RDI)();
    uVar6 = 0;
    if ((cVar4 != '\0') && (uVar6 = 0, unaff_RDI[0x17] != 0)) {
      uVar6 = *(int32_t *)(unaff_RDI[0x17] + 0x194);
    }
    iVar5 = FUN_180757ed0(extraout_XMM0_Da,uVar6,2);
    if (iVar5 != 0) goto LAB_180756d85;
  }
  if (((longlong *)unaff_RBX[0x3b] != (longlong *)0x0) &&
     (iVar5 = (**(code **)(*(longlong *)unaff_RBX[0x3b] + 0x30))(), iVar5 == 0)) {
    *(int *)(unaff_RDI + 0x27) = (int)unaff_RDI[0x27] + 1;
    if ((unaff_RDI[0x23] != 0) && ((*(uint *)(unaff_RBX[0x3b] + 0x3c) & 0x10000) == 0)) {
      FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
      plVar1 = (longlong *)unaff_RDI[0x23];
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      lVar2 = unaff_RBX[1];
      plVar1 = (longlong *)unaff_RDI[0x23];
      lVar3 = *(longlong *)(lVar2 + 0x11728);
      *plVar1 = lVar3;
      plVar1[1] = lVar2 + 0x11728;
      *(longlong **)(lVar3 + 8) = plVar1;
      *(longlong **)plVar1[1] = plVar1;
                    // WARNING: Subroutine does not return
      FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
    }
    uVar6 = extraout_XMM0_Da_00;
    if (unaff_SIL != '\0') {
      uVar6 = (**(code **)(*unaff_RDI + 0x120))(extraout_XMM0_Da_00,abStackX_20);
      if ((abStackX_20[0] & 0x10) != 0) {
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        iVar5 = (**(code **)(*unaff_RBX + 0x140))(uVar6,unaff_RBX[1] + 0x11080,&stack0x00000030);
        uVar6 = extraout_XMM0_Da_01;
        if (iVar5 != 0) goto LAB_180756d85;
      }
      if ((((*(byte *)(*(longlong *)(unaff_RBX[1] + 0x116e0) + 0x48) & 2) != 0) &&
          ((*(uint *)(unaff_RBX[0x3b] + 0x3c) & 0x10000) == 0)) &&
         (iVar5 = (**(code **)(*unaff_RBX + 0x58))
                            (uVar6,CONCAT31((uint3)(*(uint *)(unaff_RBX + 9) >> 9),
                                            (char)(*(uint *)(unaff_RBX + 9) >> 1)) & 0xffffff01),
         uVar6 = extraout_XMM0_Da_02, iVar5 != 0)) goto LAB_180756d85;
    }
    if (((longlong *)unaff_RDI[0x1e] != (longlong *)0x0) &&
       (*(int *)((longlong)unaff_RDI + 0xe4) != 0)) {
      unaff_RBX[0x3e] = *(longlong *)unaff_RDI[0x1e];
      *(int32_t *)(unaff_RBX + 0x3f) = 0;
    }
    if (unaff_R14B == '\0') {
      (**(code **)(*unaff_RBX + 0x10))(uVar6,0);
    }
  }
LAB_180756d85:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180756d8a(void)
void FUN_180756d8a(void)

{
  ulonglong in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_180757000(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lStackX_8;
  ulonglong in_stack_fffffffffffffff0;
  
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    plVar3 = param_1 + 0x40;
    if (((longlong *)*plVar3 == plVar3) && ((longlong *)param_1[0x41] == plVar3)) {
      return 0;
    }
    *(int *)((longlong)plVar1 + 0x1dc) = *(int *)((longlong)plVar1 + 0x1dc) + -1;
    *(longlong *)param_1[0x41] = *plVar3;
    *(longlong *)(*plVar3 + 8) = param_1[0x41];
    param_1[0x41] = (longlong)plVar3;
    *plVar3 = (longlong)plVar3;
  }
  param_1[4] = param_2;
  param_1[0x42] = (longlong)param_1;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x1a8);
    plVar3 = param_1 + 0x40;
    *plVar3 = lVar2;
    param_1[0x41] = param_2 + 0x1a8;
    *(longlong **)(lVar2 + 8) = plVar3;
    *(longlong **)param_1[0x41] = plVar3;
    *(int *)(param_1[4] + 0x1dc) = *(int *)(param_1[4] + 0x1dc) + 1;
    if (param_1[0x3b] == 0) {
      return 0x1e;
    }
    if (param_3 != '\0') {
      plVar3 = (longlong *)param_1[4];
      if ((plVar1 != plVar3) || (param_4 != '\0')) {
        if (plVar1 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar1 + 0x120))(plVar1,0xfffffffd,&lStackX_8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if ((lStackX_8 != 0) &&
             (uVar4 = FUN_18075dbf0(lStackX_8,param_1[0xc],0,0), (int)uVar4 != 0)) {
            return uVar4;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x120))(plVar3,0xfffffffd,&lStackX_8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (lStackX_8 != 0) {
            in_stack_fffffffffffffff0 = 0;
            uVar4 = FUN_180759220(lStackX_8,param_1[0xc],0,0,(char)uVar4,0);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
        }
      }
      uVar4 = (**(code **)(*param_1 + 0x58))
                        (param_1,CONCAT31((uint3)(*(uint *)(param_1 + 9) >> 9),
                                          (char)(*(uint *)(param_1 + 9) >> 1)) & 0xffffff01);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,*(byte *)(param_1 + 9) & 1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[6],0);
      if ((*(byte *)(param_1[0x3b] + 0x38) & 0x10) == 0) {
        (**(code **)(*param_1 + 200))
                  (param_1,param_1[8],(int)*(short *)((longlong)param_1 + 0x3a),
                   (int)(short)param_1[7],0,in_stack_fffffffffffffff0 & 0xffffffffffffff00);
      }
      FUN_180757470(param_1,*(int32_t *)((longlong)param_1 + 0x22c));
    }
  }
  return 0;
}



uint64_t FUN_1807571f0(longlong *param_1,int32_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  int iVar4;
  char acStackX_8 [8];
  
  (**(code **)(*param_1 + 0x90))(param_1,*param_2);
  FUN_180757470(param_1,*(int32_t *)((longlong)param_1 + 0x22c));
  (**(code **)(*param_1 + 0x48))(param_1,*(int32_t *)((longlong)param_1 + 0x34));
  plVar3 = (longlong *)param_1[0x3b];
  if (((plVar3 != (longlong *)0x0) && (param_1[4] != 0)) && (plVar3[5] != 0)) {
    uVar1 = param_2[2];
    if (uVar1 < (uint)param_2[3]) {
      (**(code **)(*plVar3 + 0x88))(plVar3,uVar1,(param_2[3] - uVar1) + 1);
      plVar3 = (longlong *)param_1[0x3b];
    }
  }
  if (((plVar3 != (longlong *)0x0) && (param_1[4] != 0)) && (-2 < (int)param_2[6])) {
    (**(code **)(*plVar3 + 0x90))();
  }
  FUN_180757ed0(param_1,param_2[1],2);
  (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[6],0);
  iVar4 = 0;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if (param_1[0x2e] != 0) {
    (**(code **)(*param_1 + 0x1f0))(param_1,acStackX_8);
    uVar2 = FUN_18074c3f0(param_1,param_1[10],0,1,acStackX_8[0] != '\0',0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  (**(code **)(**(longlong **)(param_2 + 4) + 200))();
  *(uint *)(*(longlong *)(param_2 + 4) + 0x3c) =
       *(uint *)(*(longlong *)(param_2 + 4) + 0x3c) & 0xffff7fff;
  return 0;
}



uint64_t FUN_180757340(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t uStackX_8;
  
  uVar5 = 0;
  lVar1 = param_1[0x3b];
  iVar7 = 0;
  if ((lVar1 == 0) || (param_1[4] == 0)) {
    uVar3 = 0x1e;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    if (lVar2 == 0) {
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        return 0x1c;
      }
      uVar4 = 0x80;
      iVar6 = iVar7;
    }
    else {
      uVar4 = *(int32_t *)(lVar2 + 0x70);
      iVar6 = *(int *)(lVar2 + 0x74);
    }
    *(int32_t *)(param_1 + 0x3c) = uVar4;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    FUN_180757470(param_1);
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x120))(param_1,0xffffffff,&uStackX_8);
    if ((int)uVar3 == 0) {
      if (iVar6 == 3) {
        uVar5 = 1;
        iVar7 = 2;
      }
      else if (iVar6 == 4) {
        uVar5 = 2;
        iVar7 = 3;
      }
      uVar3 = FUN_1807621f0(uStackX_8,0,uVar5,iVar7);
    }
  }
  return uVar3;
}



uint64_t FUN_180757470(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  uint64_t uVar3;
  float fVar4;
  
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  plVar2 = *(longlong **)(param_1 + 0x1d8);
  if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    fVar4 = *(float *)(plVar2 + 0xd);
    if (*(float *)(plVar2 + 0xd) <= param_2) {
      fVar4 = param_2;
    }
    fVar1 = *(float *)(param_1 + 0x22c);
    if (*(float *)((longlong)plVar2 + 100) <= fVar4) {
      fVar4 = *(float *)((longlong)plVar2 + 100);
    }
    *(float *)(param_1 + 0x22c) = fVar4;
    uVar3 = (**(code **)(*plVar2 + 0x68))();
    if ((int)uVar3 == 0) {
      if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
         (((fVar1 < 0.0 && (0.0 < *(float *)(param_1 + 0x22c))) ||
          ((0.0 < fVar1 &&
           (*(float *)(param_1 + 0x22c) <= 0.0 && *(float *)(param_1 + 0x22c) != 0.0)))))) {
        FUN_180758bd0(param_1,1);
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x1e;
}



uint64_t FUN_1807574b9(longlong *param_1,float param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  
  fVar1 = *(float *)(unaff_RBX + 0x22c);
  if (*(float *)((longlong)param_1 + 100) <= param_2) {
    param_2 = *(float *)((longlong)param_1 + 100);
  }
  *(float *)(unaff_RBX + 0x22c) = param_2;
  uVar2 = (**(code **)(*param_1 + 0x68))();
  if ((int)uVar2 == 0) {
    if ((*(longlong *)(unaff_RBX + 0x1f0) != 0) &&
       (((fVar1 < 0.0 && (0.0 < *(float *)(unaff_RBX + 0x22c))) ||
        ((0.0 < fVar1 &&
         (*(float *)(unaff_RBX + 0x22c) <= 0.0 && *(float *)(unaff_RBX + 0x22c) != 0.0)))))) {
      FUN_180758bd0(0,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18075751d(void)

{
  return 0x1e;
}





// 函数: void FUN_1807575d0(void)
void FUN_1807575d0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180757647(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_180757647(uint64_t param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  longlong unaff_RSI;
  ulonglong in_stack_00001040;
  
  lVar1 = 0;
  if (0 < param_3) {
    do {
      if ((*(uint *)(unaff_RSI + lVar1 * 4) & 0x7f800000) == 0x7f800000) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
                    // WARNING: Subroutine does not return
  memset(&stack0x00000040,0,0x1000);
}





// 函数: void FUN_1807577b7(void)
void FUN_1807577b7(void)

{
  ulonglong in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807577d3(void)
void FUN_1807577d3(void)

{
  ulonglong in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807577d7(void)
void FUN_1807577d7(void)

{
  ulonglong in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807577e0(void)
void FUN_1807577e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t
FUN_180757a30(longlong *param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
             int32_t param_5,char param_6)

{
  int32_t uVar1;
  uint64_t uVar2;
  char acStack_28 [8];
  uint64_t uStack_20;
  
  acStack_28[0] = '\0';
  uVar2 = FUN_18074dc70();
  if ((int)uVar2 == 0) {
    if ((param_1[0x3b] == 0) || (param_1[4] == 0)) {
      uVar2 = 0x1e;
    }
    else {
      if (((param_6 == '\0') || ((*(byte *)(param_1[0x3b] + 0x38) & 0x10) == 0)) &&
         ((**(code **)(*param_1 + 0x1f0))(param_1,acStack_28), acStack_28[0] == '\0')) {
        uVar2 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&uStack_20);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = 0;
        if ((*(uint *)(param_1 + 9) & 0xc0000) == 0) {
          uVar1 = 0x40;
        }
        uVar2 = func_0x00018076f5b0(uStack_20,param_2,param_3,param_4,param_5,uVar1,
                                    (*(byte *)(param_1[0x3b] + 0x3e) ^ 0xff) & 1);
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180757b50(longlong *param_1,uint param_2)
void FUN_180757b50(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int8_t uStack_30;
  longlong lStack_28;
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_1[0x3b];
  if ((plVar2 != (longlong *)0x0) && (param_1[4] != 0)) {
    uVar1 = *(uint *)(plVar2 + 7);
    iVar3 = (**(code **)(*plVar2 + 0xc0))();
    if (iVar3 == 0) {
      if (((uVar1 & 8) == 0) && ((param_2 & 8) != 0)) {
        iVar3 = (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[6],0);
        if (iVar3 != 0) goto FUN_180757c93;
        uStack_30 = 0;
        uStack_38 = 0;
        (**(code **)(*param_1 + 200))
                  (param_1,param_1[8],(int)*(short *)((longlong)param_1 + 0x3a),
                   (int)(short)param_1[7]);
      }
      else if ((((uVar1 & 0x10) == 0) && ((param_2 & 0x10) != 0)) ||
              (((param_2 ^ uVar1) & 0x4f00000) != 0)) {
        lStack_28 = param_1[0x10];
        uStack_20 = (int32_t)param_1[0x11];
        *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + 1.0;
        iVar3 = (**(code **)(*param_1 + 0x140))(param_1,&lStack_28,(longlong)param_1 + 0x8c);
        if (iVar3 != 0) goto FUN_180757c93;
      }
      if ((param_2 & 0x40000000) != (uVar1 & 0x40000000)) {
        if ((param_2 & 0x40000000) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
        }
        else {
          (**(code **)(*param_1 + 0x198))
                    (param_1,(int)param_1[0x1a],*(int32_t *)((longlong)param_1 + 0xd4),1);
        }
      }
    }
  }
FUN_180757c93:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_58);
}





// 函数: void FUN_180757b8c(longlong param_1)
void FUN_180757b8c(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong in_RAX;
  longlong *unaff_RBX;
  uint unaff_EDI;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa_01;
  longlong in_stack_00000030;
  int32_t in_stack_00000038;
  ulonglong in_stack_00000040;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  iVar3 = (**(code **)(in_RAX + 0xc0))();
  if (iVar3 == 0) {
    if (((uVar2 & 8) == 0) && ((unaff_EDI & 8) != 0)) {
      iVar3 = (**(code **)(*unaff_RBX + 0x20))(extraout_XMM0_Qa,(int)unaff_RBX[6],0);
      if (iVar3 != 0) goto LAB_180757c8e;
      uVar4 = (**(code **)(*unaff_RBX + 200))
                        (extraout_XMM0_Qa_00,unaff_RBX[8],
                         (int)*(short *)((longlong)unaff_RBX + 0x3a),(int)(short)unaff_RBX[7],0);
    }
    else if ((((uVar2 & 0x10) == 0) && ((unaff_EDI & 0x10) != 0)) ||
            (uVar4 = extraout_XMM0_Qa, ((unaff_EDI ^ uVar2) & 0x4f00000) != 0)) {
      in_stack_00000030 = unaff_RBX[0x10];
      in_stack_00000038 = (int32_t)unaff_RBX[0x11];
      fVar1 = *(float *)(unaff_RBX + 0x10);
      *(float *)(unaff_RBX + 0x10) = fVar1 + 1.0;
      iVar3 = (**(code **)(*unaff_RBX + 0x140))
                        (fVar1 + 1.0,&stack0x00000030,(longlong)unaff_RBX + 0x8c);
      uVar4 = extraout_XMM0_Qa_01;
      if (iVar3 != 0) goto LAB_180757c8e;
    }
    if ((unaff_EDI & 0x40000000) != (uVar2 & 0x40000000)) {
      if ((unaff_EDI & 0x40000000) == 0) {
        *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) | 4;
      }
      else {
        (**(code **)(*unaff_RBX + 0x198))
                  (uVar4,(int)unaff_RBX[0x1a],*(int32_t *)((longlong)unaff_RBX + 0xd4),1);
      }
    }
  }
LAB_180757c8e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





