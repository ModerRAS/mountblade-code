#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part043.c - 12 个函数

// 函数: void FUN_18028e702(void)
void FUN_18028e702(void)

{
  longlong in_RAX;
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint64_t unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar6;
  longlong *in_R9;
  longlong in_R10;
  int iVar7;
  uint uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM6_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM11_Da;
  float fVar20;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStack0000000000000028;
  float fStack0000000000000030;
  ulonglong uVar9;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  do {
    fVar16 = *(float *)((longlong)in_R9 + 0xc);
    fVar11 = *(float *)(in_R9 + 1);
    if (fVar16 == 0.0) {
      if (fVar11 < (float)unaff_EDI) {
        fStack0000000000000028 = fVar11;
        if (fVar11 < 0.0) {
          FUN_18028e550(unaff_RSI + -4,0,in_R9,fVar11);
        }
        else {
          FUN_18028e550(in_R10,(int)fVar11,in_R9,fVar11);
          fStack0000000000000028 = fVar11;
          FUN_18028e550(unaff_RSI + -4);
        }
      }
    }
    else {
      fVar17 = *(float *)(in_R9 + 3);
      fVar19 = *(float *)(in_R9 + 2);
      fVar20 = fVar16 + fVar11;
      fVar15 = fVar11;
      fVar18 = unaff_XMM11_Da;
      if (unaff_XMM11_Da < fVar17) {
        fVar15 = (fVar17 - unaff_XMM11_Da) * fVar16 + fVar11;
        fVar18 = fVar17;
      }
      fVar17 = *(float *)((longlong)in_R9 + 0x1c);
      fVar14 = fVar20;
      fVar10 = unaff_XMM14_Da;
      if (fVar17 < unaff_XMM14_Da) {
        fVar14 = (fVar17 - unaff_XMM11_Da) * fVar16 + fVar11;
        fVar10 = fVar17;
      }
      if ((((fVar15 < 0.0) || (fVar14 < 0.0)) || ((float)unaff_EDI <= fVar15)) ||
         ((float)unaff_EDI <= fVar14)) {
        uVar5 = 0;
        if (0 < unaff_EDI) {
          do {
            uVar8 = (int)uVar5 + 1;
            uVar9 = (ulonglong)uVar8;
            fVar15 = (float)(int)uVar5;
            fVar17 = (float)(int)uVar8;
            fVar18 = (fVar15 - fVar11) * (unaff_XMM6_Da / fVar16) + unaff_XMM11_Da;
            fVar19 = (fVar17 - fVar11) * (unaff_XMM6_Da / fVar16) + unaff_XMM11_Da;
            fStack0000000000000028 = fVar15;
            fStack0000000000000030 = fVar18;
            if ((fVar15 <= fVar11) || (fVar20 <= fVar17)) {
              if ((fVar15 <= fVar20) || (fVar11 <= fVar17)) {
                if (((fVar11 < fVar15) && (fVar15 < fVar20)) ||
                   ((fVar20 < fVar15 && (fVar15 < fVar11)))) {
                  FUN_18028e550(in_R10,uVar5,in_R9,fVar11);
                }
                else if ((fVar17 <= fVar11) || (fVar20 <= fVar17)) {
                  if ((fVar20 < fVar17) && (fVar17 < fVar11)) {
                    fStack0000000000000028 = fVar17;
                    fStack0000000000000030 = fVar19;
                    FUN_18028e550(in_R10,uVar5,in_R9,fVar11);
                  }
                }
                else {
                  fStack0000000000000028 = fVar17;
                  fStack0000000000000030 = fVar19;
                  FUN_18028e550(in_R10,uVar5,in_R9,fVar11);
                }
              }
              else {
                fStack0000000000000028 = fVar17;
                fStack0000000000000030 = fVar19;
                FUN_18028e550(in_R10,uVar5,in_R9,fVar11);
                fStack0000000000000028 = fVar15;
                fStack0000000000000030 = fVar18;
                FUN_18028e550();
              }
            }
            else {
              FUN_18028e550(in_R10,uVar5,in_R9,fVar11);
              fStack0000000000000028 = fVar17;
              fStack0000000000000030 = fVar19;
              FUN_18028e550();
            }
            fStack0000000000000028 = fVar20;
            FUN_18028e550(in_R10);
            uVar5 = uVar9 & 0xffffffff;
          } while ((int)uVar9 < unaff_EDI);
          unaff_XMM13_Da = 0.5;
          unaff_XMM6_Da = 1.0;
        }
      }
      else {
        iVar3 = (int)fVar15;
        if (iVar3 == (int)fVar14) {
          lVar1 = (longlong)iVar3;
          *(float *)(in_R10 + lVar1 * 4) =
               (unaff_XMM6_Da - ((fVar14 - (float)iVar3) + (fVar15 - (float)iVar3)) * unaff_XMM13_Da
               ) * *(float *)((longlong)in_R9 + 0x14) * (fVar10 - fVar18) +
               *(float *)(in_R10 + lVar1 * 4);
          *(float *)(unaff_RSI + lVar1 * 4) =
               (fVar10 - fVar18) * *(float *)((longlong)in_R9 + 0x14) +
               *(float *)(unaff_RSI + lVar1 * 4);
        }
        else {
          fVar16 = fVar15;
          if (fVar14 < fVar15) {
            fVar19 = -fVar19;
            fVar16 = fVar10 - unaff_XMM11_Da;
            fVar10 = unaff_XMM14_Da - (fVar18 - unaff_XMM11_Da);
            fVar18 = unaff_XMM14_Da - fVar16;
            fVar16 = fVar14;
            fVar14 = fVar15;
            fVar11 = fVar20;
          }
          iVar7 = (int)fVar16;
          iVar3 = (int)fVar14;
          lVar1 = (longlong)(iVar7 + 1);
          lVar6 = (longlong)iVar3;
          fVar17 = *(float *)((longlong)in_R9 + 0x14);
          fVar15 = fVar17 * fVar19;
          fVar20 = ((float)(iVar7 + 1) - fVar11) * fVar19 + unaff_XMM11_Da;
          fVar11 = (fVar20 - fVar18) * fVar17;
          *(float *)(in_R10 + (longlong)iVar7 * 4) =
               (unaff_XMM13_Da - (fVar16 - (float)iVar7) * unaff_XMM13_Da) * fVar11 +
               *(float *)(in_R10 + (longlong)iVar7 * 4);
          if (lVar1 < lVar6) {
            if (3 < lVar6 - lVar1) {
              pfVar2 = (float *)(in_R10 + 8 + lVar1 * 4);
              lVar4 = ((lVar6 - lVar1) - 4U >> 2) + 1;
              fVar16 = fVar15 * unaff_XMM13_Da;
              lVar1 = lVar1 + lVar4 * 4;
              do {
                pfVar2[-2] = fVar16 + fVar11 + pfVar2[-2];
                fVar12 = fVar11 + fVar15 + fVar15;
                fVar13 = fVar12 + fVar15;
                pfVar2[-1] = fVar16 + fVar11 + fVar15 + pfVar2[-1];
                fVar11 = fVar13 + fVar15;
                *pfVar2 = fVar16 + fVar12 + *pfVar2;
                pfVar2[1] = fVar16 + fVar13 + pfVar2[1];
                pfVar2 = pfVar2 + 4;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
              unaff_XMM6_Da = 1.0;
            }
            if (lVar1 < lVar6) {
              do {
                fVar16 = fVar15 * unaff_XMM13_Da + fVar11;
                fVar11 = fVar11 + fVar15;
                *(float *)(in_R10 + lVar1 * 4) = fVar16 + *(float *)(in_R10 + lVar1 * 4);
                lVar1 = lVar1 + 1;
              } while (lVar1 < lVar6);
            }
          }
          *(float *)(in_R10 + lVar6 * 4) =
               (fVar10 - ((float)((iVar3 - iVar7) + -1) * fVar19 + fVar20)) *
               (unaff_XMM6_Da - (fVar14 - (float)iVar3) * unaff_XMM13_Da) * fVar17 + fVar11 +
               *(float *)(in_R10 + lVar6 * 4);
          *(float *)(unaff_RSI + lVar6 * 4) =
               (fVar10 - fVar18) * fVar17 + *(float *)(unaff_RSI + lVar6 * 4);
        }
      }
    }
    in_R9 = (longlong *)*in_R9;
  } while (in_R9 != (longlong *)0x0);
  return;
}





// 函数: void FUN_18028ecb8(void)
void FUN_18028ecb8(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018028f0ea)
// WARNING: Removing unreachable block (ram,0x00018028f0ff)
// WARNING: Removing unreachable block (ram,0x00018028f105)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028ecc0(int *param_1,longlong param_2,int param_3,uint64_t param_4,uint64_t param_5,
void FUN_18028ecc0(int *param_1,longlong param_2,int param_3,uint64_t param_4,uint64_t param_5,
                  int param_6)

{
  int iVar1;
  int8_t auStack_328 [48];
  int8_t *puStack_2f8;
  uint64_t uStack_2f0;
  int8_t *puStack_2e8;
  int8_t auStack_2d8 [528];
  ulonglong uStack_c8;
  
  uStack_c8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_328;
  iVar1 = *param_1;
  uStack_2f0 = 0;
  if (iVar1 < 0x41) {
    puStack_2f8 = auStack_2d8;
  }
  else {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    puStack_2f8 = (int8_t *)func_0x000180120ce0((longlong)(iVar1 * 2 + 1) << 2,SYSTEM_DATA_MANAGER_B);
  }
  puStack_2e8 = puStack_2f8 + (longlong)*param_1 * 4;
  *(float *)(param_2 + 4 + (longlong)param_3 * 0x14) = (float)(param_1[1] + param_6) + 1.0;
  if (param_1[1] < 1) {
    if (puStack_2f8 == auStack_2d8) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_328);
    }
    if ((puStack_2f8 != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(puStack_2f8,SYSTEM_DATA_MANAGER_B);
  }
                    // WARNING: Subroutine does not return
  memset(puStack_2f8,0,(longlong)*param_1 << 2);
}



// WARNING: Removing unreachable block (ram,0x00018028f0ea)
// WARNING: Removing unreachable block (ram,0x00018028f0ff)
// WARNING: Removing unreachable block (ram,0x00018028f105)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028ecde(int *param_1,longlong param_2,int param_3)
void FUN_18028ecde(int *param_1,longlong param_2,int param_3)

{
  int in_EAX;
  int8_t *puVar1;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  uint64_t uStack0000000000000038;
  ulonglong in_stack_00000260;
  int in_stack_00000358;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -8) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  uStack0000000000000038 = 0;
  if (in_EAX < 0x41) {
    puVar1 = &stack0x00000050;
  }
  else {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    puVar1 = (int8_t *)func_0x000180120ce0((longlong)(in_EAX * 2 + 1) << 2,SYSTEM_DATA_MANAGER_B);
  }
  *(float *)(param_2 + 4 + (longlong)param_3 * 0x14) = (float)(param_1[1] + in_stack_00000358) + 1.0
  ;
  if (param_1[1] < 1) {
    if (puVar1 == &stack0x00000050) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000260 ^ (ulonglong)&stack0x00000000);
    }
    if ((puVar1 != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(puVar1,SYSTEM_DATA_MANAGER_B);
  }
                    // WARNING: Subroutine does not return
  memset(puVar1,0,(longlong)*param_1 << 2);
}



// WARNING: Removing unreachable block (ram,0x00018028f0ea)
// WARNING: Removing unreachable block (ram,0x00018028f0ff)
// WARNING: Removing unreachable block (ram,0x00018028f105)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028ece4(int *param_1,longlong param_2,int param_3)
void FUN_18028ece4(int *param_1,longlong param_2,int param_3)

{
  int in_EAX;
  int8_t *puVar1;
  int unaff_EBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  ulonglong in_stack_00000260;
  int in_stack_00000358;
  
  *(uint64_t *)(in_R11 + -8) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  if (in_EAX < 0x41) {
    puVar1 = &stack0x00000050;
  }
  else {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    puVar1 = (int8_t *)func_0x000180120ce0((longlong)(in_EAX * 2 + 1) << 2,SYSTEM_DATA_MANAGER_B);
  }
  *(float *)(param_2 + 4 + (longlong)param_3 * 0x14) = (float)(param_1[1] + in_stack_00000358) + 1.0
  ;
  if (param_1[1] <= unaff_EBX) {
    if (puVar1 == &stack0x00000050) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000260 ^ (ulonglong)&stack0x00000000);
    }
    if ((puVar1 != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(puVar1,SYSTEM_DATA_MANAGER_B);
  }
                    // WARNING: Subroutine does not return
  memset(puVar1,0,(longlong)*param_1 << 2);
}





// 函数: void FUN_18028eda3(void)
void FUN_18028eda3(void)

{
                    // WARNING: Subroutine does not return
  memset();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f0ac(void)
void FUN_18028f0ac(void)

{
  longlong unaff_R15;
  int8_t *in_stack_00000030;
  ulonglong in_stack_00000260;
  
  if (unaff_R15 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0();
  }
  if (in_stack_00000030 != &stack0x00000050) {
    if ((in_stack_00000030 != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(in_stack_00000030,SYSTEM_DATA_MANAGER_B);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000260 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f0f0(void)
void FUN_18028f0f0(void)

{
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f13b(longlong param_1)
void FUN_18028f13b(longlong param_1)

{
  if ((param_1 != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(param_1,SYSTEM_DATA_MANAGER_B);
}





// 函数: void FUN_18028f180(uint64_t *param_1,int param_2)
void FUN_18028f180(uint64_t *param_1,int param_2)

{
  int32_t *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  uint64_t *puVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint64_t *puVar23;
  
  if (0xc < param_2) {
    do {
      iVar19 = param_2 + -1;
      lVar14 = (longlong)param_2 >> 1;
      lVar20 = (longlong)param_2 + -1;
      fVar3 = *(float *)((longlong)param_1 + lVar14 * 0x14 + 4);
      fVar4 = *(float *)((longlong)param_1 + lVar20 * 0x14 + 4);
      if (*(float *)((longlong)param_1 + 4) < fVar3 != fVar3 < fVar4) {
        puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
        uVar10 = puVar18[1];
        iVar22 = 0;
        if (*(float *)((longlong)param_1 + 4) < fVar4 != fVar3 < fVar4) {
          iVar22 = iVar19;
        }
        lVar15 = (longlong)iVar22;
        puVar23 = (uint64_t *)((longlong)param_1 + lVar15 * 0x14);
        uVar11 = *puVar23;
        uVar12 = puVar23[1];
        uVar5 = *(int32_t *)((longlong)param_1 + lVar15 * 0x14 + 0x10);
        puVar23 = (uint64_t *)((longlong)param_1 + lVar15 * 0x14);
        *puVar23 = *puVar18;
        puVar23[1] = uVar10;
        *(int32_t *)((longlong)param_1 + lVar15 * 0x14 + 0x10) =
             *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
        puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
        *puVar18 = uVar11;
        puVar18[1] = uVar12;
        *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) = uVar5;
      }
      puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
      uVar10 = puVar18[1];
      uVar5 = *(int32_t *)(param_1 + 2);
      iVar22 = 1;
      uVar6 = *(int32_t *)param_1;
      uVar7 = *(int32_t *)((longlong)param_1 + 4);
      uVar8 = *(int32_t *)(param_1 + 1);
      uVar9 = *(int32_t *)((longlong)param_1 + 0xc);
      lVar15 = 1;
      *param_1 = *puVar18;
      param_1[1] = uVar10;
      *(int32_t *)(param_1 + 2) = *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
      puVar1 = (int32_t *)((longlong)param_1 + lVar14 * 0x14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) = uVar5;
      while( true ) {
        fVar3 = *(float *)((longlong)param_1 + 4);
        lVar14 = lVar15 * 5 + 1;
        pfVar2 = (float *)((longlong)param_1 + lVar14 * 4);
        pfVar16 = (float *)((longlong)param_1 + lVar14 * 4);
        lVar14 = lVar15;
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          do {
            iVar22 = iVar22 + 1;
            pfVar16 = pfVar16 + 5;
            lVar14 = lVar15 + 1;
            lVar15 = lVar14;
          } while (*pfVar16 <= fVar3 && fVar3 != *pfVar16);
        }
        lVar15 = lVar20 * 5 + 1;
        pfVar16 = (float *)((longlong)param_1 + lVar15 * 4);
        fVar4 = *(float *)((longlong)param_1 + lVar15 * 4);
        lVar21 = lVar20;
        while (fVar3 < fVar4) {
          iVar19 = iVar19 + -1;
          pfVar16 = pfVar16 + -5;
          lVar21 = lVar21 + -1;
          fVar4 = *pfVar16;
        }
        if (lVar21 <= lVar14) break;
        iVar22 = iVar22 + 1;
        puVar18 = (uint64_t *)((longlong)param_1 + lVar21 * 0x14);
        uVar10 = puVar18[1];
        iVar19 = iVar19 + -1;
        puVar1 = (int32_t *)((longlong)param_1 + lVar14 * 0x14);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        uVar5 = *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
        lVar15 = lVar14 + 1;
        puVar23 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
        *puVar23 = *puVar18;
        puVar23[1] = uVar10;
        lVar20 = lVar21 + -1;
        *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) =
             *(int32_t *)((longlong)param_1 + lVar21 * 0x14 + 0x10);
        puVar1 = (int32_t *)((longlong)param_1 + lVar21 * 0x14);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        *(int32_t *)((longlong)param_1 + lVar21 * 0x14 + 0x10) = uVar5;
      }
      iVar17 = param_2 - iVar22;
      param_2 = iVar17;
      iVar13 = iVar19;
      if (iVar17 <= iVar19) {
        param_2 = iVar19;
        iVar13 = iVar17;
      }
      puVar18 = (uint64_t *)((longlong)param_1 + (longlong)iVar22 * 0x14);
      puVar23 = param_1;
      if (iVar17 <= iVar19) {
        puVar23 = puVar18;
      }
      FUN_18028f180(puVar23,iVar13);
      if (iVar17 <= iVar19) {
        puVar18 = param_1;
      }
      param_1 = puVar18;
    } while (0xc < param_2);
  }
  return;
}





// 函数: void FUN_18028f18f(uint64_t *param_1,int param_2)
void FUN_18028f18f(uint64_t *param_1,int param_2)

{
  int32_t *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  uint64_t *puVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint64_t *puVar23;
  
  do {
    iVar19 = param_2 + -1;
    lVar14 = (longlong)param_2 >> 1;
    lVar20 = (longlong)param_2 + -1;
    fVar3 = *(float *)((longlong)param_1 + lVar14 * 0x14 + 4);
    fVar4 = *(float *)((longlong)param_1 + lVar20 * 0x14 + 4);
    if (*(float *)((longlong)param_1 + 4) < fVar3 != fVar3 < fVar4) {
      puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
      uVar10 = puVar18[1];
      iVar22 = 0;
      if (*(float *)((longlong)param_1 + 4) < fVar4 != fVar3 < fVar4) {
        iVar22 = iVar19;
      }
      lVar15 = (longlong)iVar22;
      puVar23 = (uint64_t *)((longlong)param_1 + lVar15 * 0x14);
      uVar11 = *puVar23;
      uVar12 = puVar23[1];
      uVar5 = *(int32_t *)((longlong)param_1 + lVar15 * 0x14 + 0x10);
      puVar23 = (uint64_t *)((longlong)param_1 + lVar15 * 0x14);
      *puVar23 = *puVar18;
      puVar23[1] = uVar10;
      *(int32_t *)((longlong)param_1 + lVar15 * 0x14 + 0x10) =
           *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
      puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
      *puVar18 = uVar11;
      puVar18[1] = uVar12;
      *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) = uVar5;
    }
    puVar18 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
    uVar10 = puVar18[1];
    uVar5 = *(int32_t *)(param_1 + 2);
    iVar22 = 1;
    uVar6 = *(int32_t *)param_1;
    uVar7 = *(int32_t *)((longlong)param_1 + 4);
    uVar8 = *(int32_t *)(param_1 + 1);
    uVar9 = *(int32_t *)((longlong)param_1 + 0xc);
    lVar15 = 1;
    *param_1 = *puVar18;
    param_1[1] = uVar10;
    *(int32_t *)(param_1 + 2) = *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
    puVar1 = (int32_t *)((longlong)param_1 + lVar14 * 0x14);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) = uVar5;
    while( true ) {
      fVar3 = *(float *)((longlong)param_1 + 4);
      lVar14 = lVar15 * 5 + 1;
      pfVar2 = (float *)((longlong)param_1 + lVar14 * 4);
      pfVar16 = (float *)((longlong)param_1 + lVar14 * 4);
      lVar14 = lVar15;
      if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
        do {
          iVar22 = iVar22 + 1;
          pfVar16 = pfVar16 + 5;
          lVar14 = lVar15 + 1;
          lVar15 = lVar14;
        } while (*pfVar16 <= fVar3 && fVar3 != *pfVar16);
      }
      lVar15 = lVar20 * 5 + 1;
      pfVar16 = (float *)((longlong)param_1 + lVar15 * 4);
      fVar4 = *(float *)((longlong)param_1 + lVar15 * 4);
      lVar21 = lVar20;
      while (fVar3 < fVar4) {
        iVar19 = iVar19 + -1;
        pfVar16 = pfVar16 + -5;
        lVar21 = lVar21 + -1;
        fVar4 = *pfVar16;
      }
      if (lVar21 <= lVar14) break;
      iVar22 = iVar22 + 1;
      puVar18 = (uint64_t *)((longlong)param_1 + lVar21 * 0x14);
      uVar10 = puVar18[1];
      iVar19 = iVar19 + -1;
      puVar1 = (int32_t *)((longlong)param_1 + lVar14 * 0x14);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar5 = *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10);
      lVar15 = lVar14 + 1;
      puVar23 = (uint64_t *)((longlong)param_1 + lVar14 * 0x14);
      *puVar23 = *puVar18;
      puVar23[1] = uVar10;
      lVar20 = lVar21 + -1;
      *(int32_t *)((longlong)param_1 + lVar14 * 0x14 + 0x10) =
           *(int32_t *)((longlong)param_1 + lVar21 * 0x14 + 0x10);
      puVar1 = (int32_t *)((longlong)param_1 + lVar21 * 0x14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(int32_t *)((longlong)param_1 + lVar21 * 0x14 + 0x10) = uVar5;
    }
    iVar17 = param_2 - iVar22;
    param_2 = iVar17;
    iVar13 = iVar19;
    if (iVar17 <= iVar19) {
      param_2 = iVar19;
      iVar13 = iVar17;
    }
    puVar18 = (uint64_t *)((longlong)param_1 + (longlong)iVar22 * 0x14);
    puVar23 = param_1;
    if (iVar17 <= iVar19) {
      puVar23 = puVar18;
    }
    FUN_18028f180(puVar23,iVar13);
    if (iVar17 <= iVar19) {
      puVar18 = param_1;
    }
    param_1 = puVar18;
  } while (0xc < param_2);
  return;
}





// 函数: void FUN_18028f34c(void)
void FUN_18028f34c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



