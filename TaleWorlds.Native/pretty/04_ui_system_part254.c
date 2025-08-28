#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part254.c - 2 个函数

// 函数: void FUN_18080f84b(int param_1,longlong param_2,int *param_3,longlong param_4)
void FUN_18080f84b(int param_1,longlong param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  int32_t in_EAX;
  int iVar6;
  int32_t uVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *unaff_RBX;
  float *pfVar10;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  float *pfVar11;
  int unaff_EDI;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  short sVar16;
  longlong in_R10;
  ulonglong uVar17;
  longlong in_R11;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint64_t unaff_R13;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint64_t unaff_R15;
  uint *puVar24;
  float fVar25;
  float fVar26;
  uint uStackX_20;
  uint uStackX_24;
  int iStack0000000000000028;
  longlong lStack0000000000000030;
  int32_t uStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  int *piStack0000000000000048;
  longlong lStack0000000000000050;
  int *piStack0000000000000058;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000070;
  longlong in_stack_00000078;
  int iStack0000000000000080;
  int iStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  int iStack0000000000000090;
  int iStack0000000000000094;
  int iStack0000000000000098;
  ulonglong in_stack_000000a0;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  pfVar11 = (float *)(param_2 + 0x900);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  iVar12 = *(int *)(param_4 + 0x48);
  iStack0000000000000090 = *(int *)(param_4 + 8);
  iStack000000000000003c = param_1 - iStack0000000000000090 >> 1;
  iVar13 = *(int *)(param_4 + 0x44);
  uVar9 = 0;
  iVar6 = 0;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  iStack0000000000000098 = 0;
  iStack0000000000000094 = iStack0000000000000098;
  if (iVar13 < iStack0000000000000090) {
    if (iVar12 < iStack0000000000000090) {
      iStack0000000000000098 = iStack0000000000000090 - iVar12;
      iStack0000000000000090 = iVar13;
      iStack0000000000000094 = iVar12 - iVar13;
    }
    else {
      iStack0000000000000094 = iStack0000000000000090 - iVar13;
      iStack0000000000000090 = iVar13;
    }
  }
  if (iStack0000000000000090 < 0) {
    iStack0000000000000090 = iVar6;
  }
  if (iStack0000000000000094 < 0) {
    iStack0000000000000094 = iVar6;
  }
  fVar26 = 0.0;
  if (iStack0000000000000098 < 0) {
    iStack0000000000000098 = iVar6;
  }
  lStack0000000000000030 = param_4;
  uStack0000000000000038 = in_EAX;
  lStack0000000000000060 = param_2;
  lStack0000000000000070 = in_R10;
  if (*(int *)(param_4 + 0x10) == 2) {
    uStackX_20 = 0;
    uStack0000000000000044 = 0;
    uStackX_24 = 0;
    if (*(int *)(param_4 + 0x14) == 0) {
      _iStack0000000000000088 = 0xffffffffffffffff;
      piVar22 = *(int **)(in_R10 * 0x18 + 0x180c45ab8);
      piStack0000000000000058 = *(int **)(in_R10 * 0x18 + 0x180c45b98);
      _iStack0000000000000080 = 0xffffffffffffffff;
    }
    else {
      piVar22 = *(int **)(in_R10 * 0x18 + 0x180c45ab0);
      piStack0000000000000058 = *(int **)(in_R10 * 0x18 + 0x180c45b90);
      _iStack0000000000000088 = 0xffffffff00000002;
      _iStack0000000000000080 = 0x200000002;
    }
    lStack0000000000000068 = 0;
    lStack0000000000000050 = 0;
    uVar17 = uVar9;
    uVar18 = uVar9;
    uVar20 = uVar9;
    iStack0000000000000028 = unaff_EDI;
    do {
      iStack0000000000000040 = *(int *)((longlong)&stack0x00000090 + lStack0000000000000050 * 4);
      piStack0000000000000048 =
           (int *)((ulonglong)*(uint *)(param_4 + 0x18 + lStack0000000000000050 * 4) * 0x10 +
                  0x180beb380);
      if (iStack0000000000000040 != 0) {
        do {
          uVar19 = (uint)uVar17;
          uVar14 = (uint)uVar18;
          iVar12 = (int)uVar20;
          if (iVar12 == 0) {
            piVar1 = piVar22 + 1;
            uVar14 = piVar22[2];
            uVar19 = piVar22[3];
            iVar12 = *piVar22;
            piVar22 = piVar22 + 4;
            unaff_RBX = (float *)(lStack0000000000000060 + (longlong)*piVar1 * 4);
            iVar13 = *param_3;
            pfVar11 = unaff_RBX + 0x240;
            param_3 = param_3 + 1;
            if (uVar14 == 3) {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x70);
              uStackX_20 = 1;
              lStack0000000000000068 = 1;
            }
            else {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x58 + (longlong)(int)uVar14 * 8);
              uStackX_20 = 3;
              lStack0000000000000068 = 3;
            }
            fVar26 = *(float *)(lVar8 + (longlong)(iVar13 << ((byte)uStack0000000000000038 & 0x1f))
                                        * 4);
            uStackX_24 = uVar19;
            uStack0000000000000044 = uVar14;
          }
          psVar15 = *(short **)(piStack0000000000000048 + 2);
          sVar16 = *psVar15;
          while (uVar23 = (uint)sVar16, sVar16 < 0) {
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            psVar15 = psVar15 + 1;
            iVar13 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar24 = *puVar24 & 7;
            if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
              psVar15 = psVar15 + -(longlong)(int)uVar23;
            }
            unaff_EDI = unaff_EDI + -1;
            sVar16 = *psVar15;
          }
          lVar8 = (longlong)(int)uVar14;
          iVar13 = (int)uVar23 >> 4;
          uVar23 = uVar23 & 0xf;
          if (iVar13 == 0xf) {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uVar19;
            unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
            iVar6 = func_0x000180815aa0();
            lVar5 = *(longlong *)(unaff_RBP + 0x178);
            iVar13 = *(int *)(lVar5 + 0x48a8);
            cVar4 = **(char **)(lVar5 + 0x48b0);
            *(int *)(lVar5 + 0x48a8) = iVar13 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar24 = *puVar24 & 7;
            fVar25 = fVar26 * *(float *)((longlong)(iVar6 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
              *pfVar11 = *unaff_RBX + fVar25;
              *unaff_RBX = *unaff_RBX - fVar25;
            }
            else {
              *pfVar11 = *unaff_RBX - fVar25;
              *unaff_RBX = fVar25 + *unaff_RBX;
            }
          }
          else if (iVar13 == 0) {
            *pfVar11 = *unaff_RBX;
          }
          else {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uVar19;
            lVar5 = *(longlong *)(unaff_RBP + 0x178);
            iVar6 = *(int *)(lVar5 + 0x48a8);
            cVar4 = **(char **)(lVar5 + 0x48b0);
            *(int *)(lVar5 + 0x48a8) = iVar6 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar24 = *puVar24 & 7;
            fVar25 = fVar26 * *(float *)((longlong)iVar13 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar6 & 0x1f)) < '\0') {
              unaff_EDI = unaff_EDI + -1;
              *pfVar11 = *unaff_RBX + fVar25;
              *unaff_RBX = *unaff_RBX - fVar25;
            }
            else {
              unaff_EDI = unaff_EDI + -1;
              *pfVar11 = *unaff_RBX - fVar25;
              *unaff_RBX = fVar25 + *unaff_RBX;
            }
          }
          pfVar11 = pfVar11 + lStack0000000000000068;
          pfVar10 = unaff_RBX + lStack0000000000000068;
          if (uVar23 == 0xf) {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uStackX_24;
            unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
            iVar6 = func_0x000180815aa0();
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            iVar13 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar24 = *puVar24 & 7;
            fVar25 = fVar26 * *(float *)((longlong)(iVar6 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
              *pfVar11 = *pfVar10 + fVar25;
              *pfVar10 = *pfVar10 - fVar25;
            }
            else {
              *pfVar11 = *pfVar10 - fVar25;
              *pfVar10 = fVar25 + *pfVar10;
            }
          }
          else if (uVar23 == 0) {
            *pfVar11 = *pfVar10;
          }
          else {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uStackX_24;
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            iVar13 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar24 = *puVar24 & 7;
            fVar25 = fVar26 * *(float *)((ulonglong)uVar23 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
              unaff_EDI = unaff_EDI + -1;
              *pfVar11 = *pfVar10 + fVar25;
              *pfVar10 = *pfVar10 - fVar25;
            }
            else {
              unaff_EDI = unaff_EDI + -1;
              *pfVar11 = *pfVar10 - fVar25;
              *pfVar10 = fVar25 + *pfVar10;
            }
          }
          uVar17 = (ulonglong)uStackX_24;
          uVar9 = (ulonglong)(int)uStackX_20;
          uVar20 = (ulonglong)(iVar12 - 1);
          uVar18 = (ulonglong)uStack0000000000000044;
          pfVar11 = pfVar11 + uVar9;
          unaff_RBX = pfVar10 + uVar9;
          iStack0000000000000040 = iStack0000000000000040 + -1;
        } while (iStack0000000000000040 != 0);
        iStack0000000000000040 = 0;
        param_4 = lStack0000000000000030;
        iStack0000000000000028 = unaff_EDI;
      }
      lStack0000000000000050 = lStack0000000000000050 + 1;
    } while (lStack0000000000000050 < 2);
    while ((iStack000000000000003c != 0 && (iStack0000000000000028 = unaff_EDI, 0 < unaff_EDI))) {
      psVar15 = *(short **)((ulonglong)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar16 = *psVar15;
      while (sVar16 < 0) {
        psVar15 = psVar15 + 1;
        if (unaff_EDI + -1 < 0) {
          sVar16 = 0;
          break;
        }
        lVar8 = *(longlong *)(unaff_RBP + 0x178);
        iVar12 = *(int *)(lVar8 + 0x48a8);
        cVar4 = **(char **)(lVar8 + 0x48b0);
        *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
        plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
        puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
        *puVar24 = *puVar24 & 7;
        if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
          psVar15 = psVar15 + -(longlong)sVar16;
        }
        unaff_EDI = unaff_EDI + -1;
        sVar16 = *psVar15;
      }
      uVar9 = (ulonglong)uStackX_20;
      uVar14 = 0;
      do {
        iVar12 = (int)uVar20;
        if ((uVar14 & 1) == 0) {
          if (iVar12 == 0) {
            piVar1 = piVar22 + 2;
            uVar18 = (ulonglong)*piVar1;
            iVar12 = *piVar22;
            unaff_RBX = (float *)(lStack0000000000000060 + (longlong)piVar22[1] * 4);
            uStackX_24 = piVar22[3];
            pfVar11 = unaff_RBX + 0x240;
            piVar22 = piVar22 + 4;
            iVar13 = *param_3;
            param_3 = param_3 + 1;
            if (*piVar1 == 3) {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x70);
              uVar9 = 1;
            }
            else {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x58 + uVar18 * 8);
              uVar9 = 3;
            }
            fVar26 = *(float *)(lVar8 + (longlong)(iVar13 << ((byte)uStack0000000000000038 & 0x1f))
                                        * 4);
            uStackX_20 = (uint)uVar9;
          }
          uVar20 = (ulonglong)(iVar12 - 1);
        }
        if (((int)sVar16 & 8 >> ((byte)uVar14 & 0x1f)) == 0) {
          *pfVar11 = *unaff_RBX;
        }
        else {
          iVar12 = unaff_EDI + -1;
          *(uint *)((longlong)&stack0x00000080 + (longlong)(int)uVar18 * 4) = uStackX_24;
          if (iVar12 < 0) break;
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar13 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          uVar9 = (ulonglong)uStackX_20;
          puVar24 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar24 = *puVar24 & 7;
          unaff_EDI = iVar12;
          if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
            *pfVar11 = *unaff_RBX + fVar26;
            *unaff_RBX = *unaff_RBX - fVar26;
          }
          else {
            *pfVar11 = *unaff_RBX - fVar26;
            *unaff_RBX = fVar26 + *unaff_RBX;
          }
        }
        uVar14 = uVar14 + 1;
        pfVar11 = pfVar11 + (int)uVar9;
        unaff_RBX = unaff_RBX + (int)uVar9;
      } while ((int)uVar14 < 4);
      iStack000000000000003c = iStack000000000000003c + -1;
      param_4 = lStack0000000000000030;
      iStack0000000000000028 = unaff_EDI;
    }
    if (piVar22 < piStack0000000000000058) {
      lVar8 = (longlong)(int)uVar9;
      do {
        iVar12 = (int)uVar20;
        if (iVar12 == 0) {
          iVar12 = *piVar22;
          lVar8 = 1;
          piVar1 = piVar22 + 2;
          unaff_RBX = (float *)((longlong)piVar22[1] * 4 + lStack0000000000000060);
          piVar22 = piVar22 + 4;
          uVar9 = 1;
          if (*piVar1 != 3) {
            uVar9 = 3;
            lVar8 = 3;
          }
          pfVar11 = unaff_RBX + 0x240;
        }
        uVar20 = (ulonglong)(iVar12 - 1);
        *pfVar11 = *unaff_RBX;
        pfVar11[lVar8] = unaff_RBX[lVar8];
        pfVar11 = pfVar11 + lVar8 + (int)uVar9;
        unaff_RBX = unaff_RBX + lVar8 + (int)uVar9;
        unaff_RBP = in_stack_00000078;
        unaff_EDI = iStack0000000000000028;
      } while (piVar22 < piStack0000000000000058);
    }
    iStack0000000000000084 = (int)((ulonglong)_iStack0000000000000080 >> 0x20);
    iStack000000000000008c = (int)((ulonglong)_iStack0000000000000088 >> 0x20);
    *(int *)(lStack0000000000000030 + 0x30) = iStack0000000000000080 + 1;
    iVar12 = iStack0000000000000084 + 1;
    if (iStack0000000000000084 < iStack0000000000000080) {
      iStack0000000000000084 = iStack0000000000000080;
    }
    *(int *)(lStack0000000000000030 + 0x34) = iVar12;
    *(int *)(lStack0000000000000030 + 0x38) = iStack0000000000000088 + 1;
    if (iStack0000000000000088 < iStack0000000000000084) {
      iStack0000000000000088 = iStack0000000000000084;
    }
    *(int *)(lStack0000000000000030 + 0x3c) = iStack000000000000008c + 1;
    if (iStack0000000000000088 != -1) {
      uVar7 = *(int32_t *)
               ((lStack0000000000000070 * 0xe + (longlong)iStack0000000000000088) * 4 + 0x180c42734)
      ;
      goto LAB_18081083d;
    }
    uVar9 = (ulonglong)(iStack000000000000008c + 1);
  }
  else {
    piVar22 = (int *)0x180c46a70;
    uStackX_20 = 0;
    if (*(int *)(param_4 + 0x4c) != 0) {
      piVar22 = (int *)0x180beb5a0;
    }
    uStackX_24 = 0xffffffff;
    lStack0000000000000050 = 0;
    puVar24 = *(uint **)(in_R10 * 0x18 + 0x180c45ac0);
    uVar18 = uVar9;
    piStack0000000000000058 = piVar22;
    do {
      piStack0000000000000048 =
           (int *)((ulonglong)*(uint *)(param_4 + 0x18 + lStack0000000000000050 * 4) * 0x10 +
                  0x180beb380);
      for (iStack0000000000000040 =
                *(int *)((longlong)&stack0x00000090 + lStack0000000000000050 * 4);
          iStack0000000000000040 != 0; iStack0000000000000040 = iStack0000000000000040 + -1) {
        uVar14 = (uint)uVar9;
        uVar19 = (uint)uVar18;
        if (uVar19 == 0) {
          iVar12 = *param_3;
          param_3 = param_3 + 1;
          iVar13 = *piVar22;
          piVar22 = piVar22 + 1;
          uVar14 = puVar24[1];
          uVar9 = (ulonglong)uVar14;
          uVar19 = *puVar24;
          uVar18 = (ulonglong)uVar19;
          puVar24 = puVar24 + 2;
          iVar12 = iVar12 + iVar13 << ((byte)uStack0000000000000038 & 0x1f);
          uStackX_20 = uVar14;
          piStack0000000000000058 = piVar22;
          if (0x179 < iVar12) break;
          fVar26 = *(float *)(*(longlong *)(param_4 + 0x70) + (longlong)iVar12 * 4);
        }
        psVar15 = *(short **)(piStack0000000000000048 + 2);
        sVar16 = *psVar15;
        while (uVar23 = (uint)sVar16, sVar16 < 0) {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          psVar15 = psVar15 + 1;
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            psVar15 = psVar15 + -(longlong)(int)uVar23;
          }
          unaff_EDI = unaff_EDI + -1;
          sVar16 = *psVar15;
        }
        uVar21 = uVar23 & 0xf;
        iVar12 = (int)uVar23 >> 4;
        if (iVar12 == 0xf) {
          unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
          iVar13 = func_0x000180815aa0();
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar25 = fVar26 * *(float *)((longlong)(iVar13 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            *pfVar11 = *unaff_RBX + fVar25;
            *unaff_RBX = *unaff_RBX - fVar25;
            uStackX_24 = uVar14;
          }
          else {
            *pfVar11 = *unaff_RBX - fVar25;
            *unaff_RBX = fVar25 + *unaff_RBX;
            uStackX_24 = uVar14;
          }
        }
        else if (iVar12 == 0) {
          *pfVar11 = *unaff_RBX;
        }
        else {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar13 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar25 = fVar26 * *(float *)((longlong)iVar12 * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
            unaff_EDI = unaff_EDI + -1;
            *pfVar11 = *unaff_RBX + fVar25;
            *unaff_RBX = *unaff_RBX - fVar25;
            uStackX_24 = uVar14;
          }
          else {
            unaff_EDI = unaff_EDI + -1;
            *pfVar11 = *unaff_RBX - fVar25;
            *unaff_RBX = fVar25 + *unaff_RBX;
            uStackX_24 = uVar14;
          }
        }
        if (uVar21 == 0xf) {
          uStackX_24 = uStackX_20;
          unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
          iVar13 = func_0x000180815aa0();
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar25 = fVar26 * *(float *)((longlong)(iVar13 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            pfVar11[1] = fVar25 + unaff_RBX[1];
            unaff_RBX[1] = unaff_RBX[1] - fVar25;
          }
          else {
            pfVar11[1] = unaff_RBX[1] - fVar25;
            unaff_RBX[1] = fVar25 + unaff_RBX[1];
          }
        }
        else if (uVar21 == 0) {
          pfVar11[1] = unaff_RBX[1];
        }
        else {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          uStackX_24 = uStackX_20;
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar25 = fVar26 * *(float *)((ulonglong)uVar21 * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            unaff_EDI = unaff_EDI + -1;
            pfVar11[1] = fVar25 + unaff_RBX[1];
            unaff_RBX[1] = unaff_RBX[1] - fVar25;
          }
          else {
            unaff_EDI = unaff_EDI + -1;
            pfVar11[1] = unaff_RBX[1] - fVar25;
            unaff_RBX[1] = fVar25 + unaff_RBX[1];
          }
        }
        uVar9 = (ulonglong)uStackX_20;
        uVar18 = (ulonglong)(uVar19 - 1);
        pfVar11 = pfVar11 + 2;
        unaff_RBX = unaff_RBX + 2;
        param_4 = lStack0000000000000030;
        piVar22 = piStack0000000000000058;
      }
      lStack0000000000000050 = lStack0000000000000050 + 1;
    } while (lStack0000000000000050 < 3);
    while ((iStack000000000000003c != 0 && (0 < unaff_EDI))) {
      psVar15 = *(short **)((ulonglong)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar16 = *psVar15;
      while (sVar16 < 0) {
        psVar15 = psVar15 + 1;
        if (unaff_EDI + -1 < 0) {
          sVar16 = 0;
          param_4 = lStack0000000000000030;
          break;
        }
        lVar8 = *(longlong *)(unaff_RBP + 0x178);
        iVar12 = *(int *)(lVar8 + 0x48a8);
        cVar4 = **(char **)(lVar8 + 0x48b0);
        *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
        plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
        puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
        *puVar3 = *puVar3 & 7;
        if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
          psVar15 = psVar15 + -(longlong)sVar16;
        }
        param_4 = lStack0000000000000030;
        unaff_EDI = unaff_EDI + -1;
        sVar16 = *psVar15;
      }
      uVar14 = 0;
      do {
        uVar19 = (uint)uVar18;
        if ((uVar14 & 1) == 0) {
          if (uVar19 == 0) {
            uStackX_20 = puVar24[1];
            uVar19 = *puVar24;
            puVar24 = puVar24 + 2;
            iVar12 = *param_3;
            iVar13 = *piVar22;
            piVar22 = piVar22 + 1;
            param_3 = param_3 + 1;
            fVar26 = *(float *)(*(longlong *)(param_4 + 0x70) +
                               (longlong)(iVar12 + iVar13 << ((byte)uStack0000000000000038 & 0x1f))
                               * 4);
          }
          uVar18 = (ulonglong)(uVar19 - 1);
        }
        if (((int)sVar16 & 8 >> ((byte)uVar14 & 0x1f)) == 0) {
          *pfVar11 = *unaff_RBX;
        }
        else {
          iVar12 = unaff_EDI + -1;
          uStackX_24 = uStackX_20;
          if (iVar12 < 1) break;
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar13 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar13 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          unaff_EDI = iVar12;
          if ((char)(cVar4 << ((byte)iVar13 & 0x1f)) < '\0') {
            *pfVar11 = *unaff_RBX + fVar26;
            *unaff_RBX = *unaff_RBX - fVar26;
          }
          else {
            *pfVar11 = *unaff_RBX - fVar26;
            *unaff_RBX = fVar26 + *unaff_RBX;
          }
        }
        unaff_RBX = unaff_RBX + 1;
        pfVar11 = pfVar11 + 1;
        uVar14 = uVar14 + 1;
        param_4 = lStack0000000000000030;
      } while ((int)uVar14 < 4);
      iStack000000000000003c = iStack000000000000003c + -1;
      param_4 = lStack0000000000000030;
    }
    iVar12 = (int)((lStack0000000000000060 - (longlong)pfVar11) + 0x1200 >> 2) >> 1;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar11 = *unaff_RBX;
      pfVar11[1] = unaff_RBX[1];
      unaff_RBX = unaff_RBX + 2;
      pfVar11 = pfVar11 + 2;
    }
    uVar9 = (ulonglong)(uStackX_24 + 1);
    *(uint *)(lStack0000000000000030 + 0x3c) = uStackX_24 + 1;
  }
  uVar7 = *(int32_t *)((lStack0000000000000070 * 0x17 + uVar9) * 4 + 0x180c423f0);
LAB_18081083d:
  *(int32_t *)(lStack0000000000000030 + 0x40) = uVar7;
  if (0x10 < unaff_EDI) {
    uVar14 = (unaff_EDI - 0x11U >> 4) + 1;
    uVar9 = (ulonglong)uVar14;
    unaff_EDI = unaff_EDI + uVar14 * -0x10;
    do {
      func_0x000180815aa0(unaff_RBP,0x10);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (0 < unaff_EDI) {
    func_0x000180815aa0(unaff_RBP,unaff_EDI);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180810876(void)
void FUN_180810876(void)

{
  uint uVar1;
  ulonglong uVar2;
  int unaff_EDI;
  ulonglong in_stack_000000a0;
  
  uVar1 = (unaff_EDI - 0x11U >> 4) + 1;
  uVar2 = (ulonglong)uVar1;
  do {
    func_0x000180815aa0();
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  if (0 < (int)(unaff_EDI + uVar1 * -0x10)) {
    func_0x000180815aa0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}





