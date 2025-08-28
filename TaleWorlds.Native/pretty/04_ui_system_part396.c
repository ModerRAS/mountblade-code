#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part396.c - 8 个函数

// 函数: void FUN_180881fa0(longlong param_1,uint64_t param_2,int32_t *param_3)
void FUN_180881fa0(longlong param_1,uint64_t param_2,int32_t *param_3)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  uint64_t uStack_50;
  int aiStack_48 [2];
  ulonglong uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar6 = func_0x00018076b420(param_2,&unknown_var_6856_ptr);
  if ((iVar6 == 0) && (lVar8 = *(longlong *)(param_1 + 0xad0), lVar8 != 0)) {
    uVar2 = *(int32_t *)(lVar8 + 0x14);
    uVar3 = *(int32_t *)(lVar8 + 0x18);
    uVar4 = *(int32_t *)(lVar8 + 0x1c);
    *param_3 = *(int32_t *)(lVar8 + 0x10);
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
  }
  else {
    uStack_58 = (longlong *)(param_1 + 0x898);
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1808741f0(uStack_58,&uStack_50,aiStack_48);
    plVar5 = uStack_58;
    if (aiStack_48[0] != -1) {
      iVar6 = aiStack_48[0];
      iVar9 = (int)uStack_50;
      do {
        do {
          lVar8 = *(longlong *)(*(longlong *)(plVar5[2] + 0x18 + (longlong)iVar6 * 0x20) + 0x2d8);
          if (lVar8 != 0) {
            iVar7 = FUN_1808988b0(lVar8,param_2,&uStack_58);
            if (iVar7 == 0) {
              *param_3 = (int32_t)uStack_58;
              param_3[1] = uStack_58._4_4_;
              param_3[2] = (int)uStack_50;
              param_3[3] = uStack_50._4_4_;
              goto LAB_1808820fa;
            }
            if (iVar7 != 0x4a) goto LAB_1808820fa;
          }
        } while ((iVar6 != -1) &&
                (iVar6 = *(int *)(plVar5[2] + 0x10 + (longlong)iVar6 * 0x20), iVar6 != -1));
        iVar6 = iVar9 + 1;
        bVar10 = iVar9 != -1;
        iVar9 = 0;
        if (bVar10) {
          iVar9 = iVar6;
        }
        if (iVar9 != (int)plVar5[1]) {
          lVar8 = (longlong)iVar9;
          do {
            if (*(int *)(*plVar5 + lVar8 * 4) != -1) {
              iVar6 = *(int *)(*plVar5 + (longlong)iVar9 * 4);
              goto LAB_1808820ec;
            }
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 != (int)plVar5[1]);
        }
        iVar6 = -1;
        iVar9 = iVar6;
LAB_1808820ec:
      } while (iVar6 != -1);
    }
  }
LAB_1808820fa:
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_78);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar1);
}





// 函数: void FUN_180881fbc(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void FUN_180881fbc(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  uint64_t param_5,int param_6,ulonglong param_7)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong unaff_R15;
  bool bVar9;
  uint64_t uStackX_20;
  
  if (unaff_R15 != 0) {
    FUN_180768360();
  }
  iVar5 = func_0x00018076b420(param_2,&unknown_var_6856_ptr);
  if ((iVar5 == 0) && (lVar7 = *(longlong *)(param_1 + 0xad0), lVar7 != 0)) {
    uVar1 = *(int32_t *)(lVar7 + 0x14);
    uVar2 = *(int32_t *)(lVar7 + 0x18);
    uVar3 = *(int32_t *)(lVar7 + 0x1c);
    *param_3 = *(int32_t *)(lVar7 + 0x10);
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
  }
  else {
    uStackX_20 = (longlong *)(param_1 + 0x898);
    param_5 = 0xffffffffffffffff;
    param_6 = -1;
    FUN_1808741f0(uStackX_20,&param_5,&param_6);
    plVar4 = uStackX_20;
    if (param_6 != -1) {
      iVar5 = param_6;
      iVar8 = (int)param_5;
      do {
        do {
          lVar7 = *(longlong *)(*(longlong *)(plVar4[2] + 0x18 + (longlong)iVar5 * 0x20) + 0x2d8);
          if (lVar7 != 0) {
            iVar6 = FUN_1808988b0(lVar7,param_2,&uStackX_20);
            if (iVar6 == 0) {
              *param_3 = (int32_t)uStackX_20;
              param_3[1] = uStackX_20._4_4_;
              param_3[2] = (int)param_5;
              param_3[3] = param_5._4_4_;
              goto LAB_1808820fa;
            }
            if (iVar6 != 0x4a) goto LAB_1808820fa;
          }
        } while ((iVar5 != -1) &&
                (iVar5 = *(int *)(plVar4[2] + 0x10 + (longlong)iVar5 * 0x20), iVar5 != -1));
        iVar5 = iVar8 + 1;
        bVar9 = iVar8 != -1;
        iVar8 = 0;
        if (bVar9) {
          iVar8 = iVar5;
        }
        if (iVar8 != (int)plVar4[1]) {
          lVar7 = (longlong)iVar8;
          do {
            if (*(int *)(*plVar4 + lVar7 * 4) != -1) {
              iVar5 = *(int *)(*plVar4 + (longlong)iVar8 * 4);
              goto LAB_1808820ec;
            }
            iVar8 = iVar8 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != (int)plVar4[1]);
        }
        iVar5 = -1;
        iVar8 = iVar5;
LAB_1808820ec:
      } while (iVar5 != -1);
    }
  }
LAB_1808820fa:
  if (unaff_R15 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(param_7 ^ (ulonglong)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}





// 函数: void FUN_180882120(void)
void FUN_180882120(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}





// 函数: void FUN_180882143(longlong param_1)
void FUN_180882143(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int unaff_EBX;
  int32_t *unaff_R13;
  longlong *unaff_R14;
  longlong unaff_R15;
  bool bVar4;
  int32_t uStackX_20;
  int32_t uStackX_24;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  ulonglong in_stack_00000038;
  
code_r0x000180882143:
  iVar3 = *(int *)(param_1 + (longlong)unaff_EBX * 4);
  do {
    if (iVar3 == -1) {
LAB_1808820fa:
      if (unaff_R15 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
      }
                    // WARNING: Subroutine does not return
      FUN_180768400();
    }
    do {
      if (*(longlong *)(*(longlong *)(unaff_R14[2] + 0x18 + (longlong)iVar3 * 0x20) + 0x2d8) != 0) {
        iVar1 = FUN_1808988b0();
        if (iVar1 == 0) {
          *unaff_R13 = uStackX_20;
          unaff_R13[1] = uStackX_24;
          unaff_R13[2] = uStack0000000000000028;
          unaff_R13[3] = uStack000000000000002c;
          goto LAB_1808820fa;
        }
        if (iVar1 != 0x4a) goto LAB_1808820fa;
      }
    } while ((iVar3 != -1) &&
            (iVar3 = *(int *)(unaff_R14[2] + 0x10 + (longlong)iVar3 * 0x20), iVar3 != -1));
    iVar3 = unaff_EBX + 1;
    bVar4 = unaff_EBX != -1;
    unaff_EBX = 0;
    if (bVar4) {
      unaff_EBX = iVar3;
    }
    if (unaff_EBX != (int)unaff_R14[1]) {
      param_1 = *unaff_R14;
      lVar2 = (longlong)unaff_EBX;
      do {
        if (*(int *)(param_1 + lVar2 * 4) != -1) goto code_r0x000180882143;
        unaff_EBX = unaff_EBX + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 != (int)unaff_R14[1]);
    }
    unaff_EBX = -1;
    iVar3 = -1;
  } while( true );
}



int FUN_180882160(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                 uint64_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t uStack_50;
  int aiStack_48 [4];
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uStack_50 = 0xffffffffffffffff;
  aiStack_48[0] = -1;
  FUN_1808741f0((longlong *)(param_1 + 0x898),&uStack_50,aiStack_48);
  if (aiStack_48[0] != -1) {
    iVar6 = aiStack_48[0];
    iVar5 = (int)uStack_50;
    do {
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x18 + (longlong)iVar6 * 0x20) +
                 0x2d8);
        if (lVar2 != 0) {
          iVar3 = FUN_180898a50(lVar2,param_2,param_3,param_4,param_5);
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_18088229d;
          }
          if (iVar3 != 0x4a) goto LAB_18088229d;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(*(longlong *)(param_1 + 0x8a8) + 0x10 + (longlong)iVar6 * 0x20),
              iVar6 != -1));
      iVar6 = iVar5 + 1;
      bVar7 = iVar5 != -1;
      iVar5 = 0;
      if (bVar7) {
        iVar5 = iVar6;
      }
      if (iVar5 != *(int *)(param_1 + 0x8a0)) {
        lVar2 = *(longlong *)(param_1 + 0x898);
        lVar4 = (longlong)iVar5;
        do {
          if (*(int *)(lVar2 + lVar4 * 4) != -1) {
            iVar6 = *(int *)(lVar2 + (longlong)iVar5 * 4);
            goto LAB_18088228f;
          }
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != *(int *)(param_1 + 0x8a0));
      }
      iVar6 = -1;
      iVar5 = iVar6;
LAB_18088228f:
    } while (iVar6 != -1);
  }
  iVar3 = 0x4a;
LAB_18088229d:
  if (lVar1 == 0) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar1);
}



int FUN_18088217c(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  int iVar4;
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int iVar5;
  uint64_t unaff_RDI;
  uint64_t unaff_R13;
  longlong unaff_R15;
  bool bVar6;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  uint64_t in_stack_000000b0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  if (unaff_R15 != 0) {
    FUN_180768360();
  }
  param_7 = 0xffffffffffffffff;
  param_8 = -1;
  FUN_1808741f0((longlong *)(param_1 + 0x898),&param_7,&param_8);
  if (param_8 != -1) {
    iVar5 = param_8;
    iVar4 = (int)param_7;
    do {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x18 + (longlong)iVar5 * 0x20) +
                 0x2d8);
        if (lVar1 != 0) {
          iVar2 = FUN_180898a50(lVar1,in_stack_00000098,unaff_RSI,param_4,in_stack_000000b0);
          if (iVar2 == 0) {
            iVar2 = 0;
            goto LAB_18088229d;
          }
          unaff_RSI = in_stack_000000a0;
          if (iVar2 != 0x4a) goto LAB_18088229d;
        }
      } while ((iVar5 != -1) &&
              (iVar5 = *(int *)(*(longlong *)(param_1 + 0x8a8) + 0x10 + (longlong)iVar5 * 0x20),
              iVar5 != -1));
      iVar5 = iVar4 + 1;
      bVar6 = iVar4 != -1;
      iVar4 = 0;
      if (bVar6) {
        iVar4 = iVar5;
      }
      if (iVar4 != *(int *)(param_1 + 0x8a0)) {
        lVar1 = *(longlong *)(param_1 + 0x898);
        lVar3 = (longlong)iVar4;
        do {
          if (*(int *)(lVar1 + lVar3 * 4) != -1) {
            iVar5 = *(int *)(lVar1 + (longlong)iVar4 * 4);
            goto LAB_18088228f;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != *(int *)(param_1 + 0x8a0));
      }
      iVar5 = -1;
      iVar4 = iVar5;
LAB_18088228f:
    } while (iVar5 != -1);
  }
  iVar2 = 0x4a;
LAB_18088229d:
  if (unaff_R15 == 0) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}





// 函数: void FUN_1808822c3(void)
void FUN_1808822c3(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



int FUN_1808822d5(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int unaff_EBX;
  uint64_t unaff_RSI;
  int32_t unaff_R13D;
  longlong *unaff_R14;
  longlong unaff_R15;
  bool bVar4;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  
code_r0x0001808822d5:
  iVar3 = *(int *)(param_1 + (longlong)unaff_EBX * 4);
  do {
    if (iVar3 == -1) {
      iVar1 = 0x4a;
LAB_18088229d:
      if (unaff_R15 == 0) {
        return iVar1;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400();
    }
    do {
      lVar2 = *(longlong *)(*(longlong *)(unaff_R14[2] + 0x18 + (longlong)iVar3 * 0x20) + 0x2d8);
      if (lVar2 != 0) {
        iVar1 = FUN_180898a50(lVar2,in_stack_00000098,unaff_RSI,unaff_R13D);
        if (iVar1 == 0) {
          iVar1 = 0;
          goto LAB_18088229d;
        }
        unaff_RSI = in_stack_000000a0;
        if (iVar1 != 0x4a) goto LAB_18088229d;
      }
    } while ((iVar3 != -1) &&
            (iVar3 = *(int *)(unaff_R14[2] + 0x10 + (longlong)iVar3 * 0x20), iVar3 != -1));
    iVar3 = unaff_EBX + 1;
    bVar4 = unaff_EBX != -1;
    unaff_EBX = 0;
    if (bVar4) {
      unaff_EBX = iVar3;
    }
    if (unaff_EBX != (int)unaff_R14[1]) {
      param_1 = *unaff_R14;
      lVar2 = (longlong)unaff_EBX;
      do {
        if (*(int *)(param_1 + lVar2 * 4) != -1) goto code_r0x0001808822d5;
        unaff_EBX = unaff_EBX + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 != (int)unaff_R14[1]);
    }
    unaff_EBX = -1;
    iVar3 = -1;
  } while( true );
}



uint64_t FUN_180882330(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  
  uVar1 = FUN_18088f1a0(param_2,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18088ee60(param_2,param_1 + 0x20);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_18088ee20(param_2,auStackX_8);
      if ((int)uVar1 == 0) {
        *(int32_t *)(param_1 + 0x24) = auStackX_8[0];
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



uint64_t FUN_180882390(longlong param_1)

{
  code *pcVar1;
  uint64_t uVar2;
  int32_t auStackX_8 [2];
  
  uVar2 = FUN_1808c1eb0(*(uint64_t *)(param_1 + 0x90));
  if (((int)uVar2 == 0) &&
     ((((*(byte *)(param_1 + 0x310) & 0x10) == 0 ||
       (pcVar1 = *(code **)(param_1 + 0x308), pcVar1 == (code *)0x0)) ||
      ((uVar2 = func_0x00018088c570(param_1,auStackX_8), (int)uVar2 == 0 &&
       (uVar2 = (*pcVar1)(auStackX_8[0],0x10,0,*(uint64_t *)(param_1 + 0x318)), (int)uVar2 == 0)))
      ))) {
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808823b0(void)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  bool in_ZF;
  int32_t in_stack_00000030;
  
  if ((!in_ZF) && (pcVar1 = *(code **)(unaff_RBX + 0x308), pcVar1 != (code *)0x0)) {
    uVar2 = func_0x00018088c570();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (*pcVar1)(in_stack_00000030,0x10,0,*(uint64_t *)(unaff_RBX + 0x318));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}





// 函数: void FUN_1808823f2(void)
void FUN_1808823f2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180882400(longlong param_1)
void FUN_180882400(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  uint64_t uStack_70;
  longlong lStack_68;
  void *puStack_60;
  int32_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int iStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  iVar3 = FUN_1808e0650(*(uint64_t *)(param_1 + 0xac8));
  if (iVar3 == 0) {
    uStack_70 = 0;
    lStack_68 = 0;
    iVar3 = func_0x0001808e0070(*(uint64_t *)(param_1 + 0xac8),&uStack_70);
    while (iVar3 != 0x4a) {
      if ((int)uStack_70 == 1) {
        uStack_70._4_4_ = (int)((ulonglong)uStack_70 >> 0x20);
        bVar5 = uStack_70._4_4_ == 0;
        iVar3 = uStack_70._4_4_;
        if (bVar5) {
          iVar3 = FUN_1808762b0(param_1,&lStack_68);
          uStack_70 = CONCAT44(iVar3,(int)uStack_70);
        }
        if ((lStack_68 != 0) && (lVar1 = *(longlong *)(lStack_68 + 0x2e8), lVar1 != 0)) {
          uStack_78 = 0;
          iVar4 = FUN_18088c740(&uStack_78,param_1);
          if (iVar4 == 0) {
            if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x200) != 0) {
              lVar2 = *(longlong *)(lVar1 + 0x18);
              uStack_58 = 0;
              puStack_60 = &unknown_var_5584_ptr;
              uStack_40 = 0;
              uStack_50 = _DAT_180c4eaf8;
              uStack_4c = uRam0000000180c4eafc;
              uStack_48 = uRam0000000180c4eb00;
              uStack_44 = uRam0000000180c4eb04;
              if ((lVar2 != 0) && (iVar3 == 0)) {
                uStack_50 = *(int32_t *)(lVar2 + 0x10);
                uStack_4c = *(int32_t *)(lVar2 + 0x14);
                uStack_48 = *(int32_t *)(lVar2 + 0x18);
                uStack_44 = *(int32_t *)(lVar2 + 0x1c);
              }
              iVar4 = func_0x00018088c500(lVar1,&uStack_40);
              if ((iVar4 != 0) ||
                 (iStack_3c = iVar3,
                 iVar4 = FUN_18088e700(*(uint64_t *)(param_1 + 0x98),&puStack_60), iVar4 != 0))
              goto LAB_18088254f;
            }
            iVar4 = FUN_1808ded00(lVar1,param_1);
            if (iVar4 == 0) {
              if (*(int *)(lVar1 + 0x30) != 0) {
                *(uint *)(lVar1 + 0x30) = (iVar3 != 0) + 3;
              }
              *(int *)(lVar1 + 0x34) = iVar3;
              *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffffe;
                    // WARNING: Subroutine does not return
              FUN_18088c790(&uStack_78);
            }
          }
LAB_18088254f:
                    // WARNING: Subroutine does not return
          FUN_18088c790(&uStack_78);
        }
      }
      else {
        bVar5 = (int)uStack_70 == 0;
        if ((bVar5) && (iVar3 = FUN_18088ad30(param_1,lStack_68), iVar3 != 0)) break;
      }
      iVar3 = func_0x0001808e0080(*(uint64_t *)(param_1 + 0xac8));
      if (iVar3 != 0) break;
      uStack_70 = 0;
      lStack_68 = 0;
      iVar3 = func_0x0001808e0070(*(uint64_t *)(param_1 + 0xac8),&uStack_70);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180882440(void)
void FUN_180882440(void)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  longlong unaff_RBP;
  longlong unaff_R14;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  
  *(uint64_t *)(unaff_RBP + -0x11) = 0;
  *(uint64_t *)(unaff_RBP + -9) = 0;
  iVar4 = func_0x0001808e0070();
  uVar6 = extraout_XMM0_Da;
  while (iVar4 != 0x4a) {
    if (*(int *)(unaff_RBP + -0x11) == 1) {
      iVar4 = *(int *)(unaff_RBP + -0xd);
      if (iVar4 == 0) {
        iVar4 = FUN_1808762b0(uVar6,unaff_RBP + -9);
        *(int *)(unaff_RBP + -0xd) = iVar4;
      }
      if ((*(longlong *)(unaff_RBP + -9) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(unaff_RBP + -9) + 0x2e8), lVar1 != 0)) {
        *(uint64_t *)(unaff_RBP + -0x19) = 0;
        iVar5 = FUN_18088c740(unaff_RBP + -0x19);
        if (iVar5 != 0) goto LAB_18088254f;
        if (*(int *)(*(longlong *)(unaff_R14 + 0x98) + 0x200) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x18);
          *(int32_t *)(unaff_RBP + 7) = 0;
          *(void **)(unaff_RBP + -1) = &unknown_var_5584_ptr;
          *(int32_t *)(unaff_RBP + 0x1f) = 0;
          uVar6 = _DAT_180c4eaf8;
          uVar7 = uRam0000000180c4eafc;
          uVar8 = uRam0000000180c4eb00;
          uVar9 = uRam0000000180c4eb04;
          if ((lVar2 != 0) && (iVar4 == 0)) {
            uVar6 = *(int32_t *)(lVar2 + 0x10);
            uVar7 = *(int32_t *)(lVar2 + 0x14);
            uVar8 = *(int32_t *)(lVar2 + 0x18);
            uVar9 = *(int32_t *)(lVar2 + 0x1c);
          }
          *(int32_t *)(unaff_RBP + 0xf) = uVar6;
          *(int32_t *)(unaff_RBP + 0x13) = uVar7;
          *(int32_t *)(unaff_RBP + 0x17) = uVar8;
          *(int32_t *)(unaff_RBP + 0x1b) = uVar9;
          iVar5 = func_0x00018088c500(lVar1,unaff_RBP + 0x1f);
          if (iVar5 != 0) goto LAB_18088254f;
          uVar3 = *(uint64_t *)(unaff_R14 + 0x98);
          *(int *)(unaff_RBP + 0x23) = iVar4;
          iVar5 = FUN_18088e700(uVar3,unaff_RBP + -1);
          if (iVar5 != 0) goto LAB_18088254f;
        }
        iVar5 = FUN_1808ded00(lVar1);
        if (iVar5 == 0) {
          if (*(int *)(lVar1 + 0x30) != 0) {
            *(uint *)(lVar1 + 0x30) = (iVar4 != 0) + 3;
          }
          *(int *)(lVar1 + 0x34) = iVar4;
          *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffffe;
                    // WARNING: Subroutine does not return
          FUN_18088c790(unaff_RBP + -0x19);
        }
LAB_18088254f:
                    // WARNING: Subroutine does not return
        FUN_18088c790(unaff_RBP + -0x19);
      }
    }
    else if ((*(int *)(unaff_RBP + -0x11) == 0) &&
            (iVar4 = FUN_18088ad30(uVar6,*(uint64_t *)(unaff_RBP + -9)), iVar4 != 0)) break;
    iVar4 = func_0x0001808e0080(*(uint64_t *)(unaff_R14 + 0xac8));
    if (iVar4 != 0) break;
    uVar3 = *(uint64_t *)(unaff_R14 + 0xac8);
    *(uint64_t *)(unaff_RBP + -0x11) = 0;
    *(uint64_t *)(unaff_RBP + -9) = 0;
    iVar4 = func_0x0001808e0070(uVar3,unaff_RBP + -0x11);
    uVar6 = extraout_XMM0_Da_00;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





