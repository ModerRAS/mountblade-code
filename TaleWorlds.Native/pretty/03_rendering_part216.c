#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part216.c - 5 个函数

// 函数: void FUN_1803911d7(void)
void FUN_1803911d7(void)

{
  float *pfVar1;
  float *pfVar2;
  uint64_t *puVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint64_t *puVar7;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *puVar8;
  int iVar9;
  int in_R11D;
  int unaff_R12D;
  int unaff_R14D;
  int unaff_R15D;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float in_XMM5_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uStack0000000000000050;
  float in_stack_00000060;
  uint64_t uStack0000000000000070;
  float *pfStack0000000000000078;
  float *pfStack0000000000000080;
  uint64_t *puStack0000000000000088;
  uint64_t *puStack0000000000000090;
  
  puVar7 = (uint64_t *)(unaff_RSI + 0x60);
  do {
    puVar8 = (uint64_t *)*puVar7;
    if (*(char *)(puVar8 + 4) != '\x02') {
      pfVar1 = (float *)puVar8[1];
      pfVar2 = (float *)*puVar8;
      fVar17 = *pfVar1 - *pfVar2;
      fVar16 = pfVar2[1] - pfVar1[1];
      fVar20 = (*pfVar1 + *pfVar2) * 0.5;
      fVar21 = (pfVar2[1] + pfVar1[1]) * 0.5;
      fVar10 = fVar17 * fVar17 + fVar16 * fVar16;
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar12._0_4_;
      fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      fVar16 = fVar16 * fVar10;
      fVar17 = fVar17 * fVar10;
      if (0.0 < (*(float *)(unaff_RSI + 0xec) - fVar21) * fVar17 +
                (*(float *)(unaff_RSI + 0xe8) - fVar20) * fVar16) {
        fVar16 = -fVar16;
        fVar17 = -fVar17;
      }
      iVar9 = -1;
      fVar10 = in_XMM5_Da + 1.0;
      if (*(byte *)(unaff_RDI + 0xa8) != 0) {
        puVar8 = (uint64_t *)(unaff_RDI + 0x60);
        iVar5 = unaff_EBP;
        iVar9 = -1;
        do {
          puVar3 = (uint64_t *)*puVar8;
          if (*(char *)(puVar3 + 4) != '\x02') {
            pfVar1 = (float *)puVar3[1];
            fVar11 = *(float *)*puVar3;
            fVar14 = ((float *)*puVar3)[1];
            fVar13 = *pfVar1 - fVar11;
            fVar18 = (fVar11 + *pfVar1) * 0.5;
            fVar15 = fVar14 - pfVar1[1];
            fVar19 = (fVar14 + pfVar1[1]) * 0.5;
            fVar11 = fVar13 * fVar13 + fVar15 * fVar15;
            auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar14 = auVar12._0_4_;
            fVar11 = fVar14 * 0.5 * (3.0 - fVar11 * fVar14 * fVar14);
            fVar15 = fVar15 * fVar11;
            fVar13 = fVar13 * fVar11;
            if (0.0 < (*(float *)(unaff_RDI + 0xec) - fVar19) * fVar13 +
                      (*(float *)(unaff_RDI + 0xe8) - fVar18) * fVar15) {
              fVar15 = -fVar15;
              fVar13 = -fVar13;
            }
            if (fVar13 * fVar17 + fVar15 * fVar16 <= -0.3) {
              fVar18 = fVar18 - fVar20;
              fVar19 = fVar19 - fVar21;
              fVar14 = fVar19 * fVar19 + fVar18 * fVar18;
              auVar12 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
              fVar11 = auVar12._0_4_;
              fVar11 = fVar11 * 0.5 * (3.0 - fVar14 * fVar11 * fVar11);
              fVar11 = fVar11 * fVar19 * fVar17 + fVar11 * fVar18 * fVar16;
              if ((0.1 <= fVar11) && (fVar14 = fVar14 / fVar11, fVar14 < fVar10)) {
                fVar10 = fVar14;
                iVar9 = iVar5;
              }
            }
          }
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          in_XMM5_Da = in_stack_00000060;
        } while (iVar5 < (int)(uint)*(byte *)(unaff_RDI + 0xa8));
      }
      if (fVar10 < in_XMM5_Da) {
        in_XMM5_Da = fVar10;
        unaff_R14D = in_R11D;
        in_stack_00000060 = fVar10;
        unaff_R15D = iVar9;
      }
    }
    in_R11D = in_R11D + 1;
    puVar7 = puVar7 + 1;
  } while (in_R11D < unaff_R12D);
  if ((unaff_R14D != -1) && (unaff_R15D != -1)) {
    puStack0000000000000090 = *(uint64_t **)(unaff_RSI + 0x60 + (int64_t)unaff_R14D * 8);
    pfVar1 = (float *)puStack0000000000000090[1];
    puStack0000000000000088 = *(uint64_t **)(unaff_RDI + 0x60 + (int64_t)unaff_R15D * 8);
    pfVar2 = (float *)*puStack0000000000000090;
    pfStack0000000000000080 = (float *)*puStack0000000000000088;
    pfVar4 = (float *)puStack0000000000000088[1];
    fVar10 = *pfVar2;
    fVar11 = pfVar2[1];
    fVar21 = pfVar1[1] - fVar11;
    fVar16 = *pfStack0000000000000080;
    fVar17 = pfStack0000000000000080[1];
    fVar20 = *pfVar1 - fVar10;
    uStack0000000000000050 = CONCAT44(fVar21,fVar20);
    uStack0000000000000070 = uStack0000000000000050;
    fVar11 = (fVar11 + 0.0 + pfVar1[1] + fVar17 + pfVar4[1]) * 0.25 - fVar11;
    fVar10 = (fVar10 + 0.0 + *pfVar1 + fVar16 + *pfVar4) * 0.25 - fVar10;
    uStack0000000000000050 = CONCAT44(fVar11,fVar10);
    pfVar6 = pfVar2;
    if (0.0 <= fVar20 * fVar11 - fVar21 * fVar10) {
      pfVar6 = pfVar1;
      pfVar1 = pfVar2;
    }
    fVar10 = fVar16 - *pfVar6;
    fVar11 = fVar17 - pfVar6[1];
    pfStack0000000000000078 = pfVar4;
    if (((*pfVar6 - *pfVar1) * fVar11 - (pfVar6[1] - pfVar1[1]) * fVar10) *
        ((pfVar4[1] - fVar17) * fVar10 - (*pfVar4 - fVar16) * fVar11) < 0.0) {
      pfStack0000000000000078 = pfStack0000000000000080;
      pfStack0000000000000080 = pfVar4;
    }
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_5304_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180391209(void)
void FUN_180391209(void)

{
  float *pfVar1;
  float *pfVar2;
  uint64_t *puVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *puVar7;
  int iVar8;
  int in_R11D;
  int unaff_R12D;
  int unaff_R14D;
  int unaff_R15D;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float in_XMM5_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM6_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uStack0000000000000050;
  float in_stack_00000060;
  uint64_t uStack0000000000000070;
  float *pfStack0000000000000078;
  float *pfStack0000000000000080;
  uint64_t *puStack0000000000000088;
  uint64_t *puStack0000000000000090;
  
  do {
    puVar7 = (uint64_t *)*unaff_RBX;
    if (*(char *)(puVar7 + 4) != '\x02') {
      pfVar1 = (float *)puVar7[1];
      pfVar2 = (float *)*puVar7;
      fVar16 = *pfVar1 - *pfVar2;
      fVar15 = pfVar2[1] - pfVar1[1];
      fVar19 = (*pfVar1 + *pfVar2) * 0.5;
      fVar20 = (pfVar2[1] + pfVar1[1]) * 0.5;
      fVar9 = fVar16 * fVar16 + fVar15 * fVar15;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
      fVar15 = fVar15 * fVar9;
      fVar16 = fVar16 * fVar9;
      if (unaff_XMM6_Da <
          (*(float *)(unaff_RSI + 0xec) - fVar20) * fVar16 +
          (*(float *)(unaff_RSI + 0xe8) - fVar19) * fVar15) {
        fVar15 = -fVar15;
        fVar16 = -fVar16;
      }
      iVar8 = -1;
      fVar9 = in_XMM5_Da + 1.0;
      if (*(byte *)(unaff_RDI + 0xa8) != 0) {
        puVar7 = (uint64_t *)(unaff_RDI + 0x60);
        iVar5 = unaff_EBP;
        iVar8 = -1;
        do {
          puVar3 = (uint64_t *)*puVar7;
          if (*(char *)(puVar3 + 4) != '\x02') {
            pfVar1 = (float *)puVar3[1];
            fVar10 = *(float *)*puVar3;
            fVar13 = ((float *)*puVar3)[1];
            fVar12 = *pfVar1 - fVar10;
            fVar17 = (fVar10 + *pfVar1) * 0.5;
            fVar14 = fVar13 - pfVar1[1];
            fVar18 = (fVar13 + pfVar1[1]) * 0.5;
            fVar10 = fVar12 * fVar12 + fVar14 * fVar14;
            auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
            fVar13 = auVar11._0_4_;
            fVar10 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
            fVar14 = fVar14 * fVar10;
            fVar12 = fVar12 * fVar10;
            if (0.0 < (*(float *)(unaff_RDI + 0xec) - fVar18) * fVar12 +
                      (*(float *)(unaff_RDI + 0xe8) - fVar17) * fVar14) {
              fVar14 = -fVar14;
              fVar12 = -fVar12;
            }
            if (fVar12 * fVar16 + fVar14 * fVar15 <= -0.3) {
              fVar17 = fVar17 - fVar19;
              fVar18 = fVar18 - fVar20;
              fVar13 = fVar18 * fVar18 + fVar17 * fVar17;
              auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
              fVar10 = auVar11._0_4_;
              fVar10 = fVar10 * 0.5 * (3.0 - fVar13 * fVar10 * fVar10);
              fVar10 = fVar10 * fVar18 * fVar16 + fVar10 * fVar17 * fVar15;
              if ((0.1 <= fVar10) && (fVar13 = fVar13 / fVar10, fVar13 < fVar9)) {
                fVar9 = fVar13;
                iVar8 = iVar5;
              }
            }
          }
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar5 < (int)(uint)*(byte *)(unaff_RDI + 0xa8));
        unaff_XMM6_Da = 0.0;
        in_XMM5_Da = in_stack_00000060;
      }
      if (fVar9 < in_XMM5_Da) {
        in_XMM5_Da = fVar9;
        unaff_R14D = in_R11D;
        in_stack_00000060 = fVar9;
        unaff_R15D = iVar8;
      }
    }
    in_R11D = in_R11D + 1;
    unaff_RBX = unaff_RBX + 1;
  } while (in_R11D < unaff_R12D);
  if ((unaff_R14D != -1) && (unaff_R15D != -1)) {
    puStack0000000000000090 = *(uint64_t **)(unaff_RSI + 0x60 + (int64_t)unaff_R14D * 8);
    pfVar1 = (float *)puStack0000000000000090[1];
    puStack0000000000000088 = *(uint64_t **)(unaff_RDI + 0x60 + (int64_t)unaff_R15D * 8);
    pfVar2 = (float *)*puStack0000000000000090;
    pfStack0000000000000080 = (float *)*puStack0000000000000088;
    pfVar4 = (float *)puStack0000000000000088[1];
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar20 = pfVar1[1] - fVar10;
    fVar15 = *pfStack0000000000000080;
    fVar16 = pfStack0000000000000080[1];
    fVar19 = *pfVar1 - fVar9;
    uStack0000000000000050 = CONCAT44(fVar20,fVar19);
    uStack0000000000000070 = uStack0000000000000050;
    fVar10 = (fVar10 + 0.0 + pfVar1[1] + fVar16 + pfVar4[1]) * 0.25 - fVar10;
    fVar9 = (fVar9 + 0.0 + *pfVar1 + fVar15 + *pfVar4) * 0.25 - fVar9;
    uStack0000000000000050 = CONCAT44(fVar10,fVar9);
    pfVar6 = pfVar2;
    if (0.0 <= fVar19 * fVar10 - fVar20 * fVar9) {
      pfVar6 = pfVar1;
      pfVar1 = pfVar2;
    }
    fVar9 = fVar15 - *pfVar6;
    fVar10 = fVar16 - pfVar6[1];
    pfStack0000000000000078 = pfVar4;
    if (((*pfVar6 - *pfVar1) * fVar10 - (pfVar6[1] - pfVar1[1]) * fVar9) *
        ((pfVar4[1] - fVar16) * fVar9 - (*pfVar4 - fVar15) * fVar10) < 0.0) {
      pfStack0000000000000078 = pfStack0000000000000080;
      pfStack0000000000000080 = pfVar4;
    }
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_5304_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039153e(void)
void FUN_18039153e(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R14D;
  int unaff_R15D;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uStack0000000000000050;
  float *pfStack0000000000000060;
  uint64_t uStack0000000000000070;
  float *pfStack0000000000000078;
  float *pfStack0000000000000080;
  uint64_t *puStack0000000000000088;
  uint64_t *puStack0000000000000090;
  
  if (unaff_R15D != -1) {
    puStack0000000000000090 = *(uint64_t **)(unaff_RSI + 0x60 + (int64_t)unaff_R14D * 8);
    pfVar3 = (float *)puStack0000000000000090[1];
    puStack0000000000000088 = *(uint64_t **)(unaff_RDI + 0x60 + (int64_t)unaff_R15D * 8);
    pfVar4 = (float *)*puStack0000000000000090;
    pfStack0000000000000080 = (float *)*puStack0000000000000088;
    pfVar5 = (float *)puStack0000000000000088[1];
    fVar7 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar8 = pfVar3[1] - fVar9;
    fVar1 = *pfStack0000000000000080;
    fVar2 = pfStack0000000000000080[1];
    fVar6 = *pfVar3 - fVar7;
    uStack0000000000000050 = CONCAT44(fVar8,fVar6);
    uStack0000000000000070 = uStack0000000000000050;
    fVar9 = (fVar9 + 0.0 + pfVar3[1] + fVar2 + pfVar5[1]) * 0.25 - fVar9;
    fVar7 = (fVar7 + 0.0 + *pfVar3 + fVar1 + *pfVar5) * 0.25 - fVar7;
    uStack0000000000000050 = CONCAT44(fVar9,fVar7);
    pfStack0000000000000060 = pfVar4;
    if (0.0 <= fVar6 * fVar9 - fVar8 * fVar7) {
      pfStack0000000000000060 = pfVar3;
      pfVar3 = pfVar4;
    }
    fVar7 = fVar1 - *pfStack0000000000000060;
    fVar9 = fVar2 - pfStack0000000000000060[1];
    pfStack0000000000000078 = pfVar5;
    if (((*pfStack0000000000000060 - *pfVar3) * fVar9 -
        (pfStack0000000000000060[1] - pfVar3[1]) * fVar7) *
        ((pfVar5[1] - fVar2) * fVar7 - (*pfVar5 - fVar1) * fVar9) < 0.0) {
      pfStack0000000000000078 = pfStack0000000000000080;
      pfStack0000000000000080 = pfVar5;
    }
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_5304_ptr);
  }
  return;
}





// 函数: void FUN_18039194d(void)
void FUN_18039194d(void)

{
  return;
}





// 函数: void FUN_180391965(void)
void FUN_180391965(void)

{
  return;
}





