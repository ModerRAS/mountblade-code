#include "TaleWorlds.Native.Split.h"

// 99_part_11_part063.c - 15 个函数

// 函数: void FUN_1807c26b0(void)
void FUN_1807c26b0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c27b1(void)
void FUN_1807c27b1(void)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R15D;
  uint64_t in_stack_00000030;
  
  iVar3 = func_0x00018076b6b0(unaff_RBP + 0x1d0,&unknown_var_9732_ptr);
  if (iVar3 == 0) {
    iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000048,unaff_R15D + 1,
                          unaff_R15D + 4);
    if (iVar3 != 0) goto FUN_1807c2a53;
    iVar3 = func_0x00018076b6b0(&stack0x00000048,&unknown_var_7316_ptr,unaff_R15D + 4);
    if (iVar3 == 0) {
      iVar3 = FUN_1808168c0(unaff_RBP + -0x70,*(int32_t *)(unaff_RBP + 0x1d4),0);
      psVar1 = *(short **)(unaff_RBP + 0x1c0);
      if (iVar3 == 0) {
        if (psVar1 == (short *)0x0) goto LAB_1807c2904;
        if (*(int *)(unaff_RBP + 0xa0) != -1) {
          if ((*psVar1 == 0x50) || (*psVar1 == 0x55)) {
            lVar2 = *(longlong *)(unaff_RBP + -0x68);
            *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBP + 0xa0);
            in_stack_00000030._4_4_ = *(int *)(lVar2 + 0x14);
            *(int32_t *)(unaff_RBX + 0x114) = *(int32_t *)(unaff_RBP + 0xa4);
            *(int32_t *)(unaff_RBX + 0x118) = *(int32_t *)(unaff_RBP + 0xa8);
            *(uint64_t *)(unaff_RBX + 0x1b8) = *(uint64_t *)(unaff_RBP + 0x178);
            *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(unaff_RBP + 0x170);
          }
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),psVar1,&unknown_var_7200_ptr,0x18a,1);
        }
      }
      if (psVar1 != (short *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),psVar1,&unknown_var_7200_ptr,0x194,1);
      }
    }
  }
LAB_1807c2904:
  if ((in_stack_00000030._4_4_ != unaff_R15D) ||
     (iVar3 = (**(code **)(**(longlong **)(unaff_RBX + 0x170) + 0x10))
                        (*(longlong **)(unaff_RBX + 0x170),(longlong)&stack0x00000030 + 4),
     iVar3 == 0)) {
                    // WARNING: Subroutine does not return
    memset(unaff_RBP + 0x1e0,0,0x48d0);
  }
FUN_1807c2a53:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c292a(uint64_t param_1,uint64_t param_2)
void FUN_1807c292a(uint64_t param_1,uint64_t param_2)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x1e0,param_2,0x48d0);
}






// 函数: void FUN_1807c2a53(void)
void FUN_1807c2a53(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c2a5b(void)
void FUN_1807c2a5b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c2a7a(void)
void FUN_1807c2a7a(void)

{
  int *piVar1;
  uint *puVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  uint uVar9;
  uint unaff_R12D;
  char unaff_R13B;
  ulonglong unaff_R15;
  int iStack0000000000000030;
  uint uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  int32_t in_stack_00000050;
  
code_r0x0001807c2a7a:
  iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),iStack0000000000000030,1);
  if (iVar4 == 0) {
    iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000040,1,4);
    iVar5 = (int)unaff_R15;
    if (iVar4 != 0x10) {
      if (iVar4 == 0) {
        iVar4 = FUN_180815200();
        if (iVar4 == 0) goto LAB_1807c2b00;
        *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + 1;
        uVar7 = uStack0000000000000034;
        if ((0x1000 < uStack0000000000000034) && ((unaff_R12D >> 0xf & 1) == 0)) {
          uVar7 = 0x1000;
        }
        if (unaff_EDI < uVar7) {
          uVar3 = *(int32_t *)(unaff_RBX + 0x110);
          do {
            iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),uVar3,0);
            if (iVar4 == 0) {
              iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000040,1);
              if (iVar4 != 0) goto LAB_1807c2a43;
              *(int *)(*(longlong *)(unaff_RBX + 0x178) + 0x48c0) = iVar5;
              iVar4 = FUN_180815200();
              if (iVar4 == 0) goto code_r0x0001807c2a7a;
            }
            else if (iVar4 != 0xe) break;
            *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + 1;
            unaff_EDI = unaff_EDI + 1;
            uVar3 = *(int32_t *)(unaff_RBX + 0x110);
            if (uVar7 <= unaff_EDI) break;
          } while( true );
        }
      }
      goto LAB_1807c2a3c;
    }
LAB_1807c2b00:
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x178) + 0x48c8) = 0xffffffff;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x178) + 0x48a4) = 1;
    *(int *)(*(longlong *)(unaff_RBX + 0x178) + 0x48c0) = iVar5;
    *(uint64_t *)(unaff_RBX + 0x180) = 0;
    *(uint64_t *)(unaff_RBX + 0x188) = 0;
    *(uint64_t *)(unaff_RBX + 400) = 0;
    *(uint64_t *)(unaff_RBX + 0x198) = 0;
    *(uint64_t *)(unaff_RBX + 0x1a0) = 0;
    *(uint64_t *)(unaff_RBX + 0x1a8) = 0;
    *(uint64_t *)(unaff_RBX + 0x1b0) = 0;
    *(uint64_t **)(unaff_RBX + 8) = (uint64_t *)(unaff_RBX + 0x180);
    *(int32_t *)(unaff_RBX + 400) = uStack0000000000000038;
    *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14) = uStack0000000000000034;
    *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0xc) = uStack000000000000003c;
    if (system_data_e030 == (char)unaff_R15) {
      _DAT_180c2e978 = 0x180c2e040;
      iVar4 = FUN_1807c1ec0(1);
      if ((iVar4 == 0) && (iVar4 = FUN_18080e440(), iVar4 == 0)) {
        FUN_180813210(0x20);
      }



// 函数: void FUN_1807c2f60(void)
void FUN_1807c2f60(void)

{
  int32_t *in_R9;
  int8_t auStack_7b8 [64];
  int32_t uStack_778;
  int32_t uStack_774;
  int32_t uStack_770;
  int32_t *puStack_758;
  int8_t auStack_748 [1792];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_7b8;
  *in_R9 = 0;
  uStack_770 = 0;
  uStack_774 = 0;
  uStack_778 = 0;
  puStack_758 = in_R9;
                    // WARNING: Subroutine does not return
  memset(auStack_748,0,0x700);
}



// WARNING: Removing unreachable block (ram,0x00018076a494)
// WARNING: Removing unreachable block (ram,0x00018076a480)
// WARNING: Removing unreachable block (ram,0x00018076a48e)
// WARNING: Removing unreachable block (ram,0x00018076a486)
// WARNING: Removing unreachable block (ram,0x00018076a45c)

ulonglong FUN_1807c32f0(longlong param_1,uint64_t param_2,uint param_3,int param_4)

{
  code *pcVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint auStackX_20 [2];
  
  if (param_4 == 8) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    iVar6 = *(int *)(param_1 + 0x110) + param_3;
    *(int8_t *)((longlong)plVar2 + 0x3c) = 0;
    uVar8 = (int)plVar2[0x2f] + iVar6;
    if ((((int)plVar2[4] != -1) && (uVar9 = (int)plVar2[0x2f] + (int)plVar2[4], uVar9 < uVar8)) &&
       (uVar8 = 0, -1 < iVar6)) {
      uVar8 = uVar9;
    }
    if ((((int)plVar2[0x2e] == 0) && ((*(uint *)((longlong)plVar2 + 0x194) & 1) == 0)) &&
       (*(uint *)((longlong)plVar2 + 0x164) <= uVar8)) {
      return 0xe;
    }
    if ((*(int *)((longlong)plVar2 + 0x164) == *(int *)((longlong)plVar2 + 0x15c)) &&
       ((*(uint *)((longlong)plVar2 + 0x194) & 1) == 0)) {
      uVar9 = *(uint *)(plVar2 + 0x2e);
      uVar3 = *(uint *)((longlong)plVar2 + 0x164);
      if (uVar3 <= uVar9) {
        if ((uVar9 != 0) && (uVar8 < uVar9 - uVar3)) {
          return 0xe;
        }
        if (uVar3 + uVar9 <= uVar8) {
          return 0xe;
        }
      }
    }
    *(uint *)((longlong)plVar2 + 0x16c) = uVar8;
    if (*(uint *)(plVar2 + 0x2a) != 0) {
      *(uint *)((longlong)plVar2 + 0x154) = (uVar8 - (int)plVar2[0x2f]) % *(uint *)(plVar2 + 0x2a);
    }
    if (*(uint *)((longlong)plVar2 + 0x15c) == 0) {
      *(uint *)(plVar2 + 0x2e) = uVar8;
      *(uint *)((longlong)plVar2 + 0x174) = uVar8;
      uVar9 = (**(code **)(*plVar2 + 0x38))(plVar2,uVar8);
      if ((plVar2[0x33] != 0) &&
         (pcVar1 = *(code **)(plVar2[0x33] + 0x11830), pcVar1 != (code *)0x0)) {
        (*pcVar1)(plVar2[6],uVar8,plVar2[5]);
      }
      return (ulonglong)uVar9;
    }
    *(uint *)(plVar2 + 0x2b) = uVar8 % *(uint *)((longlong)plVar2 + 0x15c);
    return 0;
  }
  uVar8 = *(uint *)(param_1 + 0x1c4);
  uVar5 = (ulonglong)param_3 / (ulonglong)uVar8;
  uVar7 = 0;
  uVar9 = uVar7;
  uVar3 = uVar7;
  if (param_3 != 0) {
    uVar9 = 9;
    if ((*(byte *)(param_1 + 0x2c) & 2) != 0) {
      uVar9 = 3;
    }
    uVar10 = (uint)uVar5;
    uVar3 = uVar10;
    if (uVar9 <= uVar10) {
      uVar3 = uVar9;
    }
    uVar5 = (ulonglong)(uVar10 - uVar3);
    uVar9 = param_3;
    uVar3 = (param_3 - uVar8 * uVar10) + uVar3 * uVar8;
  }
  if (((*(uint *)(param_1 + 0x160) & 0x4000) == 0) || (*(longlong *)(param_1 + 0x1d0) == 0)) {
    if (*(char *)(param_1 + 0x23d) == '\0') {
      if (uVar3 < uVar9) {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x18) / (ulonglong)uVar8;
        uVar8 = *(uint *)(*(longlong *)(param_1 + 8) + 0x14);
        if ((*(byte *)(param_1 + 0x2c) & 2) == 0) {
          uVar8 = (uVar8 - 1) + (int)uVar4;
        }
        iVar6 = (int)(uVar8 / uVar4) * (uint)uVar5;
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      fVar11 = 0.0;
      if (uVar3 < uVar9) {
        fVar11 = ((float)(uVar9 - uVar3) / (float)*(uint *)(*(longlong *)(param_1 + 8) + 0x18)) *
                 100.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (100.0 <= fVar11) {
        fVar11 = 100.0;
      }
      iVar6 = (int)fVar11;
      if (99 < iVar6) {
        iVar6 = 99;
      }
      fVar13 = (float)*(byte *)((longlong)iVar6 + 0x1d8 + param_1);
      if (iVar6 < 99) {
        fVar12 = (float)*(byte *)((longlong)iVar6 + 0x1d9 + param_1);
      }
      else {
        fVar12 = 256.0;
      }
      iVar6 = (int)(longlong)
                   (((fVar11 - (float)iVar6) * (fVar12 - fVar13) + fVar13) * 0.00390625 *
                   (float)*(uint *)(*(longlong *)(param_1 + 8) + 0x14));
    }
  }
  else {
    uVar4 = (ulonglong)(*(uint *)(param_1 + 0x1cc) - 1);
    if ((uint)uVar5 <= *(uint *)(param_1 + 0x1cc)) {
      uVar4 = uVar5;
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x1d0) + uVar4 * 4);
  }
  uVar8 = *(uint *)(param_1 + 0x110);
  if (uVar8 + iVar6 <= *(int *)(*(longlong *)(param_1 + 8) + 0x14) + uVar8) {
    uVar8 = uVar8 + iVar6;
  }
  uVar5 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar8,0);
  if ((int)uVar5 == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 2) == 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
    }
    uVar5 = uVar5 & 0xffffffff;
    if (uVar3 != 0) {
      while( true ) {
        auStackX_20[0] = 0;
        uVar8 = 0x480;
        if (uVar3 < 0x480) {
          uVar8 = uVar3;
        }
        uVar9 = FUN_1807730d0(param_1,0,uVar8,auStackX_20);
        uVar5 = (ulonglong)uVar9;
        if (uVar9 != 0) break;
        if (auStackX_20[0] == 0) {
          auStackX_20[0] = uVar8;
        }
        uVar8 = uVar7;
        if (auStackX_20[0] <= uVar3) {
          uVar8 = uVar3 - auStackX_20[0];
        }
        uVar3 = uVar8;
        if ((((*(longlong *)(param_1 + 0x140) == 0) || (*(int *)(param_1 + 0x150) == 0)) &&
            (uVar3 < auStackX_20[0])) || (uVar3 == 0)) break;
      }
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffb;
  }
  return uVar5;
}



int FUN_1807c34da(void)

{
  int iVar1;
  uint unaff_EBX;
  uint uVar2;
  longlong unaff_RBP;
  uint uVar3;
  longlong unaff_RDI;
  uint uStack0000000000000048;
  
  while( true ) {
    uVar2 = (uint)unaff_RBP;
    uVar3 = 0x480;
    if (unaff_EBX < 0x480) {
      uVar3 = unaff_EBX;
    }
    uStack0000000000000048 = uVar2;
    iVar1 = FUN_1807730d0();
    if (iVar1 != 0) break;
    if (uStack0000000000000048 == 0) {
      uStack0000000000000048 = uVar3;
    }
    uVar3 = uVar2;
    if (uStack0000000000000048 <= unaff_EBX) {
      uVar3 = unaff_EBX - uStack0000000000000048;
    }
    unaff_EBX = uVar3;
    if ((((*(longlong *)(unaff_RDI + 0x140) == unaff_RBP) || (*(uint *)(unaff_RDI + 0x150) == uVar2)
         ) && (unaff_EBX < uStack0000000000000048)) || (unaff_EBX == 0)) break;
  }
  *(uint *)(unaff_RDI + 0x2c) = *(uint *)(unaff_RDI + 0x2c) & 0xfffffffb;
  return iVar1;
}



int32_t FUN_1807c3537(int32_t param_1)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 0x2c) = *(uint *)(unaff_RDI + 0x2c) & 0xfffffffb;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c35b0(longlong param_1,uint64_t param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    uVar1 = 0;
    uVar3 = uVar1;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      do {
        (**(code **)(*param_3 + 0x108))
                  (param_3,*(int32_t *)(uVar1 + 0x30 + *(longlong *)(param_1 + 0x1b8)),2,
                   *(uint64_t *)(uVar1 + 0x20 + *(longlong *)(param_1 + 0x1b8)),0,0,0);
        uVar2 = (int)uVar3 + 1;
        uVar1 = uVar1 + 0x13c;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < *(int *)(param_1 + 0x1c0));
    }
    FUN_180752af0(param_3);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(param_1 + 0x1b8),
                  &unknown_var_7200_ptr,0x492,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c35dd(void)
void FUN_1807c35dd(void)

{
  int in_EAX;
  longlong unaff_RBX;
  int iVar1;
  longlong *unaff_R14;
  
  iVar1 = 0;
  if (0 < in_EAX) {
    do {
      (**(code **)(*unaff_R14 + 0x108))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x1c0));
  }
  FUN_180752af0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x1b8),
                &unknown_var_7200_ptr,0x492,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c35ef(void)
void FUN_1807c35ef(void)

{
  longlong unaff_RBX;
  int unaff_EDI;
  longlong *unaff_R14;
  
  do {
    (**(code **)(*unaff_R14 + 0x108))();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < *(int *)(unaff_RBX + 0x1c0));
  FUN_180752af0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x1b8),
                &unknown_var_7200_ptr,0x492,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c3647(void)
void FUN_1807c3647(void)

{
  longlong unaff_RBX;
  
  FUN_180752af0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x1b8),
                &unknown_var_7200_ptr,0x492,1);
}



uint64_t FUN_1807c368c(void)

{
  return 0;
}



ulonglong FUN_1807c36a0(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint auStackX_20 [2];
  
  uVar1 = FUN_180769ed0(param_4,param_1,param_2,param_3,auStackX_20);
  uVar2 = 0xffffffffffffffff;
  if ((uVar1 & 0xffffffef) == 0) {
    uVar2 = (ulonglong)auStackX_20[0];
  }
  return uVar2;
}



int32_t FUN_1807c3700(uint64_t param_1)

{
  int32_t auStackX_8 [8];
  
  func_0x00018076a7d0(param_1,auStackX_8);
  return auStackX_8[0];
}



uint64_t FUN_1807c3720(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x178) = 0;
  FUN_180817b30();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c37d0(longlong param_1)
void FUN_1807c37d0(longlong param_1)

{
  int8_t auStack_348 [64];
  int8_t uStack_308;
  int32_t uStack_304;
  code *pcStack_2f8;
  void *puStack_2f0;
  uint64_t uStack_2e8;
  code *pcStack_2e0;
  int8_t auStack_278 [584];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  *(int32_t *)(param_1 + 0x28) = 10;
  *(uint64_t *)(param_1 + 0x120) = 0;
  pcStack_2f8 = FUN_1807c36a0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  puStack_2f0 = &unknown_var_1456_ptr;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x110) = 0;
  pcStack_2e0 = FUN_1807c3700;
  uStack_304 = 0;
  uStack_2e8 = 0;
  uStack_308 = 0;
                    // WARNING: Subroutine does not return
  memset(auStack_278,0,0x238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c38ec(void)
void FUN_1807c38ec(void)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R15D;
  uint64_t in_stack_00000040;
  
  iVar4 = func_0x00018076b6b0(unaff_RBP + 0x210,&unknown_var_9732_ptr);
  if (iVar4 == 0) {
    iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),&stack0x00000048,unaff_R15D + 1,
                          unaff_R15D + 4);
    if (iVar4 != 0) goto FUN_1807c3d8b;
    iVar4 = func_0x00018076b6b0(&stack0x00000048,&unknown_var_7316_ptr,unaff_R15D + 4);
    if (iVar4 != 0) goto LAB_1807c3a4b;
    iVar4 = FUN_1808168c0(unaff_RBP + -0x30,*(int32_t *)(unaff_RBP + 0x214),0);
    psVar1 = *(short **)(unaff_RBP + 0x200);
    lVar2 = *(longlong *)(unaff_RBP + 0x1b8);
    if (iVar4 == 0) {
      if (psVar1 != (short *)0x0) {
        if (*(int *)(unaff_RBP + 0xe0) == -1) {
          if (*psVar1 != 0x6750) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),psVar1,&unknown_var_7376_ptr,0x141,1);
          }
          lVar3 = *(longlong *)(unaff_RBP + -0x28);
          *(int32_t *)(unaff_RDI + 0x110) = 0xffffffff;
          in_stack_00000040._4_4_ = *(int *)(lVar3 + 0x14);
          *(int32_t *)(unaff_RDI + 0x114) = *(int32_t *)(unaff_RBP + 0xe4);
          *(int32_t *)(unaff_RDI + 0x118) = *(int32_t *)(unaff_RBP + 0xe8);
          *(int32_t *)(unaff_RDI + 0x4b0) = *(int32_t *)(unaff_RBP + 0x1b0);
          *(longlong *)(unaff_RDI + 0x4a8) = lVar2;
        }
        goto LAB_1807c39d6;
      }
    }
    else {
LAB_1807c39d6:
      if (psVar1 != (short *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),psVar1,&unknown_var_7376_ptr,0x14f,1);
      }
    }
    if ((lVar2 != 0) && (*(longlong *)(unaff_RDI + 0x4a8) != lVar2)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar2,&unknown_var_7376_ptr,0x154,1);
    }
  }
LAB_1807c3a4b:
  FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),*(int32_t *)(unaff_RDI + 0x110),0);
  iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),&stack0x0000004c,1);
  if ((iVar4 == 0) && (iVar4 = func_0x00018076b6b0(&stack0x0000004c,&system_data_c5d0,4), iVar4 == 0))
  {
    if (system_data_0370 == (char)unaff_R15D) {
      FUN_18081a760();



// 函数: void FUN_1807c3bd2(void)
void FUN_1807c3bd2(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong unaff_RBP;
  ulonglong uVar10;
  longlong unaff_RDI;
  uint uVar11;
  ulonglong uVar12;
  int32_t uVar13;
  ulonglong unaff_R15;
  char cStack0000000000000040;
  int32_t uStack0000000000000044;
  
  lVar7 = func_0x000180817cc0();
  *(longlong *)(unaff_RBP + 0x210) = lVar7;
  plVar8 = (longlong *)func_0x000180817c80();
  if ((plVar8 != (longlong *)0x0) &&
     (uVar12 = unaff_R15 & 0xffffffff, uVar10 = unaff_R15, (int)unaff_R15 < (int)plVar8[2])) {
    do {
      if (*(int *)(uVar10 + plVar8[1]) != 0) {
        pcVar9 = *(char **)(unaff_R15 + *plVar8);
        cVar3 = *pcVar9;
        while (cVar3 != '\0') {
          if (cVar3 == '=') {
            *pcVar9 = '\0';
            func_0x00018076b690(pcVar9 + 1);
            iVar4 = FUN_180772fe0();
            if (iVar4 != 0) goto LAB_1807c3d6b;
            break;
          }
          pcVar1 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
          cVar3 = *pcVar1;
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      unaff_R15 = unaff_R15 + 8;
      uVar10 = uVar10 + 4;
    } while ((int)uVar11 < (int)plVar8[2]);
    lVar7 = *(longlong *)(unaff_RBP + 0x210);
    unaff_R15 = 0;
  }
  *(longlong *)(unaff_RDI + 8) = unaff_RDI + 0x4b8;
  *(int32_t *)(unaff_RDI + 0x4cc) = uStack0000000000000044;
  *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 8) = 2;
  *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0xc) = *(int32_t *)(lVar7 + 4);
  *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x10) = *(int32_t *)(lVar7 + 8);
  if (cStack0000000000000040 != '\0') {
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 8) + 0x14);
    if (iVar4 != -1) {
      *(int *)(*(longlong *)(unaff_RDI + 8) + 0x14) = iVar4 - *(int *)(unaff_RDI + 0x110);
    }
  }
  uVar13 = (int32_t)unaff_R15;
  if ((*(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 1) == 0) {
    *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
  }
  else {
    iVar4 = func_0x000180819450();
    uVar10 = unaff_R15 & 0xffffffff;
    *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x18) = uVar13;
    if (0 < iVar4) {
      do {
        lVar7 = *(longlong *)(unaff_RDI + 8);
        iVar5 = FUN_180818bd0();
        piVar2 = (int *)(lVar7 + 0x18);
        *piVar2 = *piVar2 + iVar5;
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar4);
    }
    if (*(int *)(*(longlong *)(unaff_RDI + 8) + 0x18) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x18) = uVar13;
      goto LAB_1807c3d6b;
    }
  }
  if (*(int *)(unaff_RDI + 0x110) == 0) {
    uVar6 = func_0x000180819040();
    *(int32_t *)(unaff_RDI + 0x110) = uVar6;
  }
  *(int32_t *)(unaff_RDI + 0x18) = uVar13;
LAB_1807c3d6b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c3d8b(void)
void FUN_1807c3d8b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c3d93(void)
void FUN_1807c3d93(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}






