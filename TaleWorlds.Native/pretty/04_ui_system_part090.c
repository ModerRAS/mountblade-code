#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part090.c - 6 个函数
// 函数: void SystemCore_1fb5a(float param_1,uint64_t param_2,uint64_t param_3,int param_4,
void SystemCore_1fb5a(float param_1,uint64_t param_2,uint64_t param_3,int param_4,
                  uint64_t param_5,byte param_6,uint64_t param_7,int64_t param_8)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t lVar9;
  byte unaff_SIL;
  int64_t lVar10;
  uint *unaff_RDI;
  float *pfVar11;
  float *pfVar12;
  int64_t lVar13;
  uint64_t uVar14;
  float *unaff_R12;
  int unaff_R13D;
  int unaff_R15D;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM9_Da;
  uint64_t local_var_68;
  do {
    param_1 = (float)SystemCore_1e580(param_1,param_4,*unaff_RDI);
    param_4 = unaff_R15D;
    while( true ) {
      unaff_RDI = unaff_RDI + -1;
      unaff_R13D = unaff_R13D + -1;
      if (unaff_R13D < 0) {
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_68 ^ (uint64_t)&local_buffer_00000000);
      }
      if (unaff_R13D == 0) {
        unaff_R15D = 1;
      }
      else {
        unaff_R15D = (int)*(short *)(param_8 + 10 + (int64_t)unaff_RDI);
      }
      sVar4 = *(short *)(param_8 + 0xc + (int64_t)unaff_RDI);
      if (sVar4 == 2) break;
      if (sVar4 == 3) {
        uVar5 = *unaff_RDI;
        lVar8 = (int64_t)param_4;
        lVar10 = (int64_t)(int)(uVar5 << (unaff_SIL & 0x1f));
        lVar9 = (int64_t)(param_4 * 2);
        fVar3 = *(float *)(*(int64_t *)(unaff_RBX + 0x38) + 4 + lVar8 * lVar10 * 8);
        param_4 = unaff_R15D;
        unaff_SIL = param_6;
        if (0 < (int)uVar5) {
          uVar14 = (uint64_t)uVar5;
          pfVar11 = unaff_R12;
          do {
            pfVar7 = *(float **)(unaff_RBX + 0x38);
            pfVar6 = pfVar11;
            pfVar12 = pfVar7;
            lVar13 = lVar8;
            do {
              fVar15 = *pfVar12;
              pfVar1 = pfVar12 + 1;
              fVar16 = *pfVar7;
              pfVar12 = pfVar12 + lVar10 * 2;
              fVar19 = fVar15 * pfVar6[lVar8 * 2 + 1] + *pfVar1 * pfVar6[lVar8 * 2];
              pfVar2 = pfVar7 + 1;
              pfVar7 = pfVar7 + lVar10 * 4;
              fVar20 = fVar15 * pfVar6[lVar8 * 2] - *pfVar1 * pfVar6[lVar8 * 2 + 1];
              fVar17 = fVar16 * pfVar6[lVar9 * 2] - *pfVar2 * pfVar6[lVar9 * 2 + 1];
              fVar18 = pfVar6[lVar9 * 2 + 1] * fVar16 + *pfVar2 * pfVar6[lVar9 * 2];
              fVar16 = fVar17 + fVar20;
              fVar15 = fVar18 + fVar19;
              param_1 = (fVar19 - fVar18) * fVar3;
              fVar17 = (fVar20 - fVar17) * fVar3;
              pfVar6[lVar8 * 2] = *pfVar6 - fVar16 * unaff_XMM9_Da;
              pfVar6[lVar8 * 2 + 1] = pfVar6[1] - fVar15 * unaff_XMM9_Da;
              *pfVar6 = fVar16 + *pfVar6;
              pfVar6[1] = fVar15 + pfVar6[1];
              pfVar6[lVar9 * 2] = param_1 + pfVar6[lVar8 * 2];
              pfVar6[lVar9 * 2 + 1] = pfVar6[lVar8 * 2 + 1] - fVar17;
              param_1 = pfVar6[lVar8 * 2] - param_1;
              pfVar6[lVar8 * 2 + 1] = fVar17 + pfVar6[lVar8 * 2 + 1];
              pfVar6[lVar8 * 2] = param_1;
              pfVar6 = pfVar6 + 2;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            pfVar11 = pfVar11 + (int64_t)unaff_R15D * 2;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (sVar4 == 4) {
        param_1 = (float)SystemCore_1ebe0(param_1,(int64_t)(int)(*unaff_RDI << (unaff_SIL & 0x1f)));
        param_4 = unaff_R15D;
      }
      else {
        param_4 = unaff_R15D;
        if (sVar4 == 5) {
          param_1 = (float)SystemCore_1f270(param_1,(int64_t)(int)(*unaff_RDI << (unaff_SIL & 0x1f)));
        }
      }
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_1fb70(int64_t param_1,float *param_2)
void SystemCore_1fb70(int64_t param_1,float *param_2)
{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  byte bVar7;
  float *pfVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  short *psVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint uVar20;
  uint64_t uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t stack_array_e8 [32];
  int iStack_c8;
  int iStack_c0;
  int iStack_b8;
  float *pfStack_b0;
  uint stack_array_a8 [8];
  uint64_t local_var_88;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  psVar1 = (short *)(param_1 + 0xe);
  stack_array_a8[0] = 1;
  iVar10 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 1) {
    iVar10 = 0;
  }
  psVar14 = psVar1;
  iVar16 = 0;
  do {
    iVar22 = iVar16;
    sVar5 = *psVar14;
    psVar14 = psVar14 + 2;
    uVar21 = (uint64_t)iVar22;
    *(int *)(((int64_t)stack_array_a8 - (int64_t)psVar1) + (int64_t)psVar14) =
         (int)*(short *)((param_1 - (int64_t)psVar1) + 8 + (int64_t)psVar14) *
         *(int *)((int64_t)&pfStack_b0 + (4 - (int64_t)psVar1) + (int64_t)psVar14);
    iVar16 = iVar22 + 1;
  } while (sVar5 != 1);
  iStack_b8 = iVar10;
  pfStack_b0 = param_2;
  if (-1 < iVar22) {
    lVar13 = uVar21 * 4;
    iVar16 = (int)*(short *)(param_1 + 10 + (int64_t)((iVar22 + 1) * 2) * 2);
    do {
      if ((int)uVar21 == 0) {
        iVar22 = 1;
      }
      else {
        iVar22 = (int)*(short *)(lVar13 + 10 + param_1);
      }
      sVar5 = *(short *)(lVar13 + 0xc + param_1);
      if (sVar5 == 2) {
        SystemCore_1e580(param_2,iVar16,*(int32_t *)((int64_t)stack_array_a8 + lVar13));
      }
      else {
        bVar7 = (byte)iVar10;
        if (sVar5 == 3) {
          uVar20 = *(uint *)((int64_t)stack_array_a8 + lVar13);
          lVar9 = (int64_t)iVar16;
          lVar12 = (int64_t)(int)(uVar20 << (bVar7 & 0x1f));
          lVar11 = (int64_t)(iVar16 * 2);
          fVar4 = *(float *)(*(int64_t *)(param_1 + 0x38) + 4 + lVar9 * lVar12 * 8);
          param_2 = pfStack_b0;
          iVar10 = iStack_b8;
          if (0 < (int)uVar20) {
            uVar19 = (uint64_t)uVar20;
            pfVar15 = pfStack_b0;
            do {
              pfVar8 = *(float **)(param_1 + 0x38);
              pfVar6 = pfVar15;
              pfVar17 = pfVar8;
              lVar18 = lVar9;
              do {
                fVar23 = *pfVar17;
                pfVar2 = pfVar17 + 1;
                pfVar3 = pfVar8 + 1;
                pfVar17 = pfVar17 + lVar12 * 2;
                fVar27 = fVar23 * pfVar6[lVar9 * 2 + 1] + *pfVar2 * pfVar6[lVar9 * 2];
                fVar24 = *pfVar8;
                pfVar8 = pfVar8 + lVar12 * 4;
                fVar28 = fVar23 * pfVar6[lVar9 * 2] - *pfVar2 * pfVar6[lVar9 * 2 + 1];
                fVar25 = fVar24 * pfVar6[lVar11 * 2] - *pfVar3 * pfVar6[lVar11 * 2 + 1];
                fVar26 = *pfVar3 * pfVar6[lVar11 * 2] + pfVar6[lVar11 * 2 + 1] * fVar24;
                fVar23 = fVar25 + fVar28;
                fVar24 = fVar26 + fVar27;
                fVar26 = (fVar27 - fVar26) * fVar4;
                fVar25 = (fVar28 - fVar25) * fVar4;
                pfVar6[lVar9 * 2] = *pfVar6 - fVar23 * 0.5;
                pfVar6[lVar9 * 2 + 1] = pfVar6[1] - fVar24 * 0.5;
                *pfVar6 = fVar23 + *pfVar6;
                pfVar6[1] = fVar24 + pfVar6[1];
                pfVar6[lVar11 * 2] = fVar26 + pfVar6[lVar9 * 2];
                pfVar6[lVar11 * 2 + 1] = pfVar6[lVar9 * 2 + 1] - fVar25;
                fVar23 = pfVar6[lVar9 * 2];
                pfVar6[lVar9 * 2 + 1] = fVar25 + pfVar6[lVar9 * 2 + 1];
                pfVar6[lVar9 * 2] = fVar23 - fVar26;
                pfVar6 = pfVar6 + 2;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
              pfVar15 = pfVar15 + (int64_t)iVar22 * 2;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        else if (sVar5 == 4) {
          iStack_c8 = *(int *)((int64_t)stack_array_a8 + lVar13);
          iStack_c0 = iVar22;
          SystemCore_1ebe0(param_2,(int64_t)(iStack_c8 << (bVar7 & 0x1f)),param_1);
        }
        else if (sVar5 == 5) {
          iStack_c8 = *(int *)((int64_t)stack_array_a8 + lVar13);
          iStack_c0 = iVar22;
          SystemCore_1f270(param_2,(int64_t)(iStack_c8 << (bVar7 & 0x1f)),param_1);
        }
      }
      lVar13 = lVar13 + -4;
      uVar20 = (int)uVar21 - 1;
      uVar21 = (uint64_t)uVar20;
      iVar16 = iVar22;
    } while (-1 < (int)uVar20);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_88 ^ (uint64_t)stack_array_e8);
}
// 函数: void SystemCore_1fc11(void)
void SystemCore_1fc11(void)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t unaff_RBX;
  byte unaff_BPL;
  int64_t lVar8;
  float *unaff_RSI;
  int64_t lVar9;
  int64_t lVar10;
  float *pfVar11;
  int in_R9D;
  float *pfVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t unaff_R12;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte local_var_30;
  float *local_var_38;
  uint64_t local_var_60;
  lVar10 = unaff_R12 * 4;
  do {
    if ((int)unaff_R12 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = (int)*(short *)(lVar10 + 10 + unaff_RBX);
    }
    sVar4 = *(short *)(lVar10 + 0xc + unaff_RBX);
    if (sVar4 == 2) {
      SystemCore_1e580(unaff_RSI,in_R9D,*(int32_t *)(&local_buffer_00000040 + lVar10));
    }
    else if (sVar4 == 3) {
      uVar15 = *(uint *)(&local_buffer_00000040 + lVar10);
      lVar7 = (int64_t)in_R9D;
      lVar9 = (int64_t)(int)(uVar15 << (unaff_BPL & 0x1f));
      lVar8 = (int64_t)(in_R9D * 2);
      fVar3 = *(float *)(*(int64_t *)(unaff_RBX + 0x38) + 4 + lVar7 * lVar9 * 8);
      unaff_RSI = local_var_38;
      unaff_BPL = local_var_30;
      if (0 < (int)uVar15) {
        uVar14 = (uint64_t)uVar15;
        pfVar11 = local_var_38;
        do {
          pfVar6 = *(float **)(unaff_RBX + 0x38);
          pfVar5 = pfVar11;
          pfVar12 = pfVar6;
          lVar13 = lVar7;
          do {
            fVar17 = *pfVar12;
            pfVar1 = pfVar12 + 1;
            pfVar2 = pfVar6 + 1;
            pfVar12 = pfVar12 + lVar9 * 2;
            fVar21 = fVar17 * pfVar5[lVar7 * 2 + 1] + *pfVar1 * pfVar5[lVar7 * 2];
            fVar18 = *pfVar6;
            pfVar6 = pfVar6 + lVar9 * 4;
            fVar22 = fVar17 * pfVar5[lVar7 * 2] - *pfVar1 * pfVar5[lVar7 * 2 + 1];
            fVar19 = fVar18 * pfVar5[lVar8 * 2] - *pfVar2 * pfVar5[lVar8 * 2 + 1];
            fVar20 = *pfVar2 * pfVar5[lVar8 * 2] + pfVar5[lVar8 * 2 + 1] * fVar18;
            fVar17 = fVar19 + fVar22;
            fVar18 = fVar20 + fVar21;
            fVar20 = (fVar21 - fVar20) * fVar3;
            fVar19 = (fVar22 - fVar19) * fVar3;
            pfVar5[lVar7 * 2] = *pfVar5 - fVar17 * 0.5;
            pfVar5[lVar7 * 2 + 1] = pfVar5[1] - fVar18 * 0.5;
            *pfVar5 = fVar17 + *pfVar5;
            pfVar5[1] = fVar18 + pfVar5[1];
            pfVar5[lVar8 * 2] = fVar20 + pfVar5[lVar7 * 2];
            pfVar5[lVar8 * 2 + 1] = pfVar5[lVar7 * 2 + 1] - fVar19;
            fVar17 = pfVar5[lVar7 * 2];
            pfVar5[lVar7 * 2 + 1] = fVar19 + pfVar5[lVar7 * 2 + 1];
            pfVar5[lVar7 * 2] = fVar17 - fVar20;
            pfVar5 = pfVar5 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          pfVar11 = pfVar11 + (int64_t)iVar16 * 2;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else if (sVar4 == 4) {
      SystemCore_1ebe0(unaff_RSI,(int64_t)(*(int *)(&local_buffer_00000040 + lVar10) << (unaff_BPL & 0x1f)))
      ;
    }
    else if (sVar4 == 5) {
      SystemCore_1f270(unaff_RSI,(int64_t)(*(int *)(&local_buffer_00000040 + lVar10) << (unaff_BPL & 0x1f)))
      ;
    }
    lVar10 = lVar10 + -4;
    uVar15 = (int)unaff_R12 - 1;
    unaff_R12 = (uint64_t)uVar15;
    in_R9D = iVar16;
  } while (-1 < (int)uVar15);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_60 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_1feb5(void)
void SystemCore_1feb5(void)
{
  uint64_t local_var_60;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_60 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_1fed0(void)
void SystemCore_1fed0(void)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  byte unaff_BPL;
  int64_t lVar9;
  int64_t lVar10;
  float *unaff_RSI;
  int64_t unaff_RDI;
  float *pfVar11;
  int in_R9D;
  float *pfVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int unaff_R12D;
  int unaff_R15D;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM9_Da;
  byte local_var_30;
  float *local_var_38;
  uint64_t local_var_60;
  do {
    SystemCore_1e580(unaff_RSI,in_R9D,*(int32_t *)(&local_buffer_00000040 + unaff_RDI));
    in_R9D = unaff_R15D;
    while( true ) {
      lVar8 = unaff_RDI;
      unaff_RDI = lVar8 + -4;
      unaff_R12D = unaff_R12D + -1;
      if (unaff_R12D < 0) {
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_60 ^ (uint64_t)&local_buffer_00000000);
      }
      if (unaff_R12D == 0) {
        unaff_R15D = 1;
      }
      else {
        unaff_R15D = (int)*(short *)(lVar8 + 6 + unaff_RBX);
      }
      sVar4 = *(short *)(lVar8 + 8 + unaff_RBX);
      if (sVar4 == 2) break;
      if (sVar4 == 3) {
        uVar5 = *(uint *)((int64_t)&local_buffer_00000038 + lVar8 + 4);
        lVar8 = (int64_t)in_R9D;
        lVar10 = (int64_t)(int)(uVar5 << (unaff_BPL & 0x1f));
        lVar9 = (int64_t)(in_R9D * 2);
        fVar3 = *(float *)(*(int64_t *)(unaff_RBX + 0x38) + 4 + lVar8 * lVar10 * 8);
        unaff_RSI = local_var_38;
        in_R9D = unaff_R15D;
        unaff_BPL = local_var_30;
        if (0 < (int)uVar5) {
          uVar14 = (uint64_t)uVar5;
          pfVar11 = local_var_38;
          do {
            pfVar7 = *(float **)(unaff_RBX + 0x38);
            pfVar6 = pfVar11;
            pfVar12 = pfVar7;
            lVar13 = lVar8;
            do {
              fVar15 = *pfVar12;
              pfVar1 = pfVar12 + 1;
              pfVar2 = pfVar7 + 1;
              pfVar12 = pfVar12 + lVar10 * 2;
              fVar19 = fVar15 * pfVar6[lVar8 * 2 + 1] + *pfVar1 * pfVar6[lVar8 * 2];
              fVar16 = *pfVar7;
              pfVar7 = pfVar7 + lVar10 * 4;
              fVar20 = fVar15 * pfVar6[lVar8 * 2] - *pfVar1 * pfVar6[lVar8 * 2 + 1];
              fVar17 = fVar16 * pfVar6[lVar9 * 2] - *pfVar2 * pfVar6[lVar9 * 2 + 1];
              fVar18 = *pfVar2 * pfVar6[lVar9 * 2] + pfVar6[lVar9 * 2 + 1] * fVar16;
              fVar15 = fVar17 + fVar20;
              fVar16 = fVar18 + fVar19;
              fVar18 = (fVar19 - fVar18) * fVar3;
              fVar17 = (fVar20 - fVar17) * fVar3;
              pfVar6[lVar8 * 2] = *pfVar6 - fVar15 * unaff_XMM9_Da;
              pfVar6[lVar8 * 2 + 1] = pfVar6[1] - fVar16 * unaff_XMM9_Da;
              *pfVar6 = fVar15 + *pfVar6;
              pfVar6[1] = fVar16 + pfVar6[1];
              pfVar6[lVar9 * 2] = fVar18 + pfVar6[lVar8 * 2];
              pfVar6[lVar9 * 2 + 1] = pfVar6[lVar8 * 2 + 1] - fVar17;
              fVar15 = pfVar6[lVar8 * 2];
              pfVar6[lVar8 * 2 + 1] = fVar17 + pfVar6[lVar8 * 2 + 1];
              pfVar6[lVar8 * 2] = fVar15 - fVar18;
              pfVar6 = pfVar6 + 2;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            pfVar11 = pfVar11 + (int64_t)unaff_R15D * 2;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (sVar4 == 4) {
        SystemCore_1ebe0(unaff_RSI,
                      (int64_t)
                      (*(int *)((int64_t)&local_buffer_00000038 + lVar8 + 4) << (unaff_BPL & 0x1f)));
        in_R9D = unaff_R15D;
      }
      else {
        in_R9D = unaff_R15D;
        if (sVar4 == 5) {
          SystemCore_1f270(unaff_RSI,
                        (int64_t)
                        (*(int *)((int64_t)&local_buffer_00000038 + lVar8 + 4) << (unaff_BPL & 0x1f)));
        }
      }
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_1fef0(int64_t param_1,int64_t param_2,float *param_3)
void SystemCore_1fef0(int64_t param_1,int64_t param_2,float *param_3)
{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  double dVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  float *pfVar17;
  int64_t lVar18;
  uint uVar19;
  uint uVar20;
  int64_t lVar21;
  int64_t lVar22;
  float *pfVar23;
  int iVar24;
  int64_t lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float afStack_248 [100];
  float *pfStack_b8;
  pfVar17 = (float *)(GET_SECURITY_COOKIE() ^ (uint64_t)afStack_248);
  pfStack_b8 = pfVar17;
  puVar3 = *(uint **)(param_1 + 8);
  pfVar23 = *(float **)(param_1 + 0x10);
  uVar16 = puVar3[1];
  if (0 < (int64_t)(int)uVar16) {
    lVar22 = 0;
    uVar20 = *puVar3;
    lVar25 = (int64_t)(int)uVar20;
    do {
      fVar30 = *pfVar23;
      lVar18 = 0;
      pfVar23 = pfVar23 + 1;
      if ((0 < (int)uVar20) && (7 < uVar20)) {
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        uVar19 = uVar20 & 0x80000007;
        if ((int)uVar19 < 0) {
          uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
        }
        pfVar17 = (float *)(uint64_t)(uVar20 - uVar19);
        do {
          fVar7 = *pfVar23;
          pfVar8 = pfVar23 + 1;
          pfVar9 = pfVar23 + 2;
          pfVar10 = pfVar23 + 3;
          pfVar2 = (float *)(param_2 + lVar18 * 4);
          pfVar1 = pfVar23 + 4;
          pfVar11 = pfVar23 + 5;
          pfVar12 = pfVar23 + 6;
          pfVar13 = pfVar23 + 7;
          pfVar23 = pfVar23 + 8;
          fVar26 = fVar26 + *pfVar2 * fVar7;
          fVar27 = fVar27 + pfVar2[1] * *pfVar8;
          fVar28 = fVar28 + pfVar2[2] * *pfVar9;
          fVar29 = fVar29 + pfVar2[3] * *pfVar10;
          pfVar2 = (float *)(param_2 + 0x10 + lVar18 * 4);
          lVar18 = lVar18 + 8;
          fVar31 = fVar31 + *pfVar2 * *pfVar1;
          fVar32 = fVar32 + pfVar2[1] * *pfVar11;
          fVar33 = fVar33 + pfVar2[2] * *pfVar12;
          fVar34 = fVar34 + pfVar2[3] * *pfVar13;
        } while (lVar18 < (int)(uVar20 - uVar19));
        fVar30 = fVar30 + fVar28 + fVar33 + fVar26 + fVar31 + fVar29 + fVar34 + fVar27 + fVar32;
      }
      if (lVar18 < lVar25) {
        pfVar17 = (float *)(lVar25 - lVar18);
        if (3 < (int64_t)pfVar17) {
          pfVar17 = (float *)(param_2 + 8 + lVar18 * 4);
          lVar21 = ((lVar25 - lVar18) - 4U >> 2) + 1;
          lVar18 = lVar18 + lVar21 * 4;
          do {
            pfVar1 = pfVar17 + -1;
            pfVar2 = pfVar23 + 1;
            pfVar8 = pfVar17 + -2;
            fVar26 = *pfVar23;
            pfVar9 = pfVar17 + 1;
            pfVar10 = pfVar23 + 3;
            pfVar11 = pfVar23 + 2;
            fVar27 = *pfVar17;
            pfVar23 = pfVar23 + 4;
            pfVar17 = pfVar17 + 4;
            fVar30 = *pfVar1 * *pfVar2 + *pfVar8 * fVar26 + fVar30 + *pfVar11 * fVar27 +
                     *pfVar9 * *pfVar10;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        for (; lVar18 < lVar25; lVar18 = lVar18 + 1) {
          fVar26 = *pfVar23;
          pfVar23 = pfVar23 + 1;
          fVar30 = fVar30 + *(float *)(param_2 + lVar18 * 4) * fVar26;
        }
      }
      fVar26 = 1.0;
      if (fVar30 < 8.0) {
        if (-8.0 < fVar30) {
          if (fVar30 < 0.0) {
            fVar26 = -1.0;
          }
          fVar27 = ABS(fVar30) * 25.0 + 0.5;
          dVar6 = (double)fVar27;
          lVar18 = (int64_t)fVar27;
          if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar6)) {
            auVar5._8_4_ = SUB84(dVar6,0);
            auVar5._0_8_ = dVar6;
            auVar5._12_4_ = (int)((uint64_t)dVar6 >> 0x20);
            uVar19 = movmskpd((int)pfVar17,auVar5);
            dVar6 = (double)(int64_t)(lVar18 - (uint64_t)(uVar19 & 1));
          }
          pfVar17 = (float *)(int64_t)(int)dVar6;
          fVar27 = *(float *)(&processed_var_9936_ptr + (int64_t)pfVar17 * 4);
          fVar30 = ABS(fVar30) - (float)(int)dVar6 * 0.04;
          fVar26 = ((1.0 - fVar27 * fVar27) * fVar30 * (1.0 - fVar27 * fVar30) + fVar27) * fVar26;
        }
        else {
          fVar26 = -1.0;
        }
      }
      else {
        fVar26 = 1.0;
      }
      afStack_248[lVar22] = fVar26;
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)uVar16);
  }
  iVar24 = 0;
  if (0 < (int)puVar3[2]) {
    do {
      fVar30 = *pfVar23;
      lVar22 = 0;
      uVar16 = puVar3[1];
      lVar25 = (int64_t)(int)uVar16;
      pfVar23 = pfVar23 + 1;
      if ((0 < (int)uVar16) && (7 < uVar16)) {
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        uVar20 = uVar16 & 0x80000007;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff8) + 1;
        }
        pfVar17 = (float *)(uint64_t)(uVar16 - uVar20);
        do {
          fVar7 = *pfVar23;
          pfVar2 = pfVar23 + 1;
          pfVar8 = pfVar23 + 2;
          pfVar9 = pfVar23 + 3;
          pfVar1 = pfVar23 + 4;
          pfVar10 = pfVar23 + 5;
          pfVar11 = pfVar23 + 6;
          pfVar12 = pfVar23 + 7;
          pfVar23 = pfVar23 + 8;
          fVar26 = fVar26 + afStack_248[lVar22] * fVar7;
          fVar27 = fVar27 + afStack_248[lVar22 + 1] * *pfVar2;
          fVar28 = fVar28 + afStack_248[lVar22 + 2] * *pfVar8;
          fVar29 = fVar29 + afStack_248[lVar22 + 3] * *pfVar9;
          lVar18 = lVar22 + 4;
          lVar21 = lVar22 + 5;
          lVar14 = lVar22 + 6;
          lVar15 = lVar22 + 7;
          lVar22 = lVar22 + 8;
          fVar31 = fVar31 + afStack_248[lVar18] * *pfVar1;
          fVar32 = fVar32 + afStack_248[lVar21] * *pfVar10;
          fVar33 = fVar33 + afStack_248[lVar14] * *pfVar11;
          fVar34 = fVar34 + afStack_248[lVar15] * *pfVar12;
        } while (lVar22 < (int)(uVar16 - uVar20));
        fVar30 = fVar30 + fVar28 + fVar33 + fVar26 + fVar31 + fVar29 + fVar34 + fVar27 + fVar32;
      }
      if (lVar22 < lVar25) {
        pfVar17 = (float *)(lVar25 - lVar22);
        if (3 < (int64_t)pfVar17) {
          pfVar17 = (float *)(lVar25 + -3);
          do {
            lVar18 = lVar22 + 1;
            pfVar1 = pfVar23 + 1;
            pfVar9 = afStack_248 + lVar22;
            fVar26 = *pfVar23;
            lVar21 = lVar22 + 3;
            pfVar2 = pfVar23 + 3;
            lVar14 = lVar22 + 2;
            pfVar8 = pfVar23 + 2;
            lVar22 = lVar22 + 4;
            pfVar23 = pfVar23 + 4;
            fVar30 = afStack_248[lVar18] * *pfVar1 + *pfVar9 * fVar26 + fVar30 +
                     afStack_248[lVar14] * *pfVar8 + afStack_248[lVar21] * *pfVar2;
          } while (lVar22 < (int64_t)pfVar17);
        }
        for (; lVar22 < lVar25; lVar22 = lVar22 + 1) {
          fVar26 = *pfVar23;
          pfVar23 = pfVar23 + 1;
          fVar30 = fVar30 + afStack_248[lVar22] * fVar26;
        }
      }
      fVar26 = 1.0;
      if (fVar30 < 8.0) {
        if (-8.0 < fVar30) {
          if (fVar30 < 0.0) {
            fVar26 = -1.0;
          }
          fVar27 = ABS(fVar30) * 25.0 + 0.5;
          dVar6 = (double)fVar27;
          lVar22 = (int64_t)fVar27;
          if ((lVar22 != -0x8000000000000000) && ((double)lVar22 != dVar6)) {
            auVar4._8_4_ = SUB84(dVar6,0);
            auVar4._0_8_ = dVar6;
            auVar4._12_4_ = (int)((uint64_t)dVar6 >> 0x20);
            uVar16 = movmskpd((int)pfVar17,auVar4);
            dVar6 = (double)(int64_t)(lVar22 - (uint64_t)(uVar16 & 1));
          }
          pfVar17 = (float *)(int64_t)(int)dVar6;
          fVar27 = *(float *)(&processed_var_9936_ptr + (int64_t)pfVar17 * 4);
          fVar30 = ABS(fVar30) - (float)(int)dVar6 * 0.04;
          fVar26 = ((1.0 - fVar27 * fVar27) * fVar30 * (1.0 - fVar27 * fVar30) + fVar27) * fVar26;
        }
        else {
          fVar26 = -1.0;
        }
      }
      else {
        fVar26 = 1.0;
      }
      *param_3 = fVar26;
      iVar24 = iVar24 + 1;
      param_3 = param_3 + 1;
    } while (iVar24 < (int)puVar3[2]);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker((uint64_t)pfStack_b8 ^ (uint64_t)afStack_248);
}