#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part253.c - 1 个函数

// 函数: void FUN_18080f83a(longlong param_1,float *param_2,int *param_3,longlong param_4)
void FUN_18080f83a(longlong param_1,float *param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  float *pfVar10;
  int unaff_EDI;
  int iVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  short sVar15;
  longlong in_R10;
  ulonglong uVar16;
  longlong in_R11;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 unaff_R13;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined8 unaff_R15;
  uint *puVar23;
  float fVar24;
  float fVar25;
  uint uStackX_20;
  uint uStackX_24;
  int iStack0000000000000028;
  longlong lStack0000000000000030;
  undefined4 uStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  int *piStack0000000000000048;
  longlong lStack0000000000000050;
  int *piStack0000000000000058;
  float *pfStack0000000000000060;
  longlong lStack0000000000000068;
  longlong lStack0000000000000070;
  longlong lStack0000000000000078;
  int iStack0000000000000080;
  int iStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  int iStack0000000000000090;
  int iStack0000000000000094;
  int iStack0000000000000098;
  ulonglong in_stack_000000a0;
  
  *(undefined8 *)(in_R11 + 0x18) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RSI;
  pfVar10 = param_2 + 0x240;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  iVar11 = *(int *)(param_4 + 0x48);
  iStack0000000000000090 = *(int *)(param_4 + 8);
  iStack000000000000003c = 0x120 - iStack0000000000000090 >> 1;
  iVar12 = *(int *)(param_4 + 0x44);
  uVar9 = 0;
  iVar6 = 0;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  iStack0000000000000098 = 0;
  iStack0000000000000094 = iStack0000000000000098;
  if (iVar12 < iStack0000000000000090) {
    if (iVar11 < iStack0000000000000090) {
      iStack0000000000000098 = iStack0000000000000090 - iVar11;
      iStack0000000000000090 = iVar12;
      iStack0000000000000094 = iVar11 - iVar12;
    }
    else {
      iStack0000000000000094 = iStack0000000000000090 - iVar12;
      iStack0000000000000090 = iVar12;
    }
  }
  if (iStack0000000000000090 < 0) {
    iStack0000000000000090 = iVar6;
  }
  if (iStack0000000000000094 < 0) {
    iStack0000000000000094 = iVar6;
  }
  fVar25 = 0.0;
  if (iStack0000000000000098 < 0) {
    iStack0000000000000098 = iVar6;
  }
  lStack0000000000000030 = param_4;
  uStack0000000000000038 = in_EAX;
  pfStack0000000000000060 = param_2;
  lStack0000000000000070 = in_R10;
  lStack0000000000000078 = param_1;
  if (*(int *)(param_4 + 0x10) == 2) {
    uStackX_20 = 0;
    uStack0000000000000044 = 0;
    uStackX_24 = 0;
    if (*(int *)(param_4 + 0x14) == 0) {
      _iStack0000000000000088 = 0xffffffffffffffff;
      piVar21 = *(int **)(in_R10 * 0x18 + 0x180c45ab8);
      piStack0000000000000058 = *(int **)(in_R10 * 0x18 + 0x180c45b98);
      _iStack0000000000000080 = 0xffffffffffffffff;
    }
    else {
      piVar21 = *(int **)(in_R10 * 0x18 + 0x180c45ab0);
      piStack0000000000000058 = *(int **)(in_R10 * 0x18 + 0x180c45b90);
      _iStack0000000000000088 = 0xffffffff00000002;
      _iStack0000000000000080 = 0x200000002;
    }
    lStack0000000000000068 = 0;
    lStack0000000000000050 = 0;
    uVar16 = uVar9;
    uVar17 = uVar9;
    uVar19 = uVar9;
    iStack0000000000000028 = unaff_EDI;
    do {
      iStack0000000000000040 = *(int *)((longlong)&stack0x00000090 + lStack0000000000000050 * 4);
      piStack0000000000000048 =
           (int *)((ulonglong)*(uint *)(param_4 + 0x18 + lStack0000000000000050 * 4) * 0x10 +
                  0x180beb380);
      if (iStack0000000000000040 != 0) {
        do {
          uVar18 = (uint)uVar16;
          uVar13 = (uint)uVar17;
          iVar11 = (int)uVar19;
          if (iVar11 == 0) {
            piVar1 = piVar21 + 1;
            uVar13 = piVar21[2];
            uVar18 = piVar21[3];
            iVar11 = *piVar21;
            piVar21 = piVar21 + 4;
            param_2 = pfStack0000000000000060 + *piVar1;
            iVar12 = *param_3;
            pfVar10 = param_2 + 0x240;
            param_3 = param_3 + 1;
            if (uVar13 == 3) {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x70);
              uStackX_20 = 1;
              lStack0000000000000068 = 1;
            }
            else {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x58 + (longlong)(int)uVar13 * 8);
              uStackX_20 = 3;
              lStack0000000000000068 = 3;
            }
            fVar25 = *(float *)(lVar8 + (longlong)(iVar12 << ((byte)uStack0000000000000038 & 0x1f))
                                        * 4);
            uStackX_24 = uVar18;
            uStack0000000000000044 = uVar13;
          }
          psVar14 = *(short **)(piStack0000000000000048 + 2);
          sVar15 = *psVar14;
          while (uVar22 = (uint)sVar15, sVar15 < 0) {
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            psVar14 = psVar14 + 1;
            iVar12 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar23 = *puVar23 & 7;
            if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
              psVar14 = psVar14 + -(longlong)(int)uVar22;
            }
            unaff_EDI = unaff_EDI + -1;
            sVar15 = *psVar14;
          }
          lVar8 = (longlong)(int)uVar13;
          iVar12 = (int)uVar22 >> 4;
          uVar22 = uVar22 & 0xf;
          if (iVar12 == 0xf) {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uVar18;
            unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
            iVar6 = func_0x000180815aa0();
            lVar5 = *(longlong *)(unaff_RBP + 0x178);
            iVar12 = *(int *)(lVar5 + 0x48a8);
            cVar4 = **(char **)(lVar5 + 0x48b0);
            *(int *)(lVar5 + 0x48a8) = iVar12 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar23 = *puVar23 & 7;
            fVar24 = fVar25 * *(float *)((longlong)(iVar6 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
              *pfVar10 = *param_2 + fVar24;
              *param_2 = *param_2 - fVar24;
            }
            else {
              *pfVar10 = *param_2 - fVar24;
              *param_2 = fVar24 + *param_2;
            }
          }
          else if (iVar12 == 0) {
            *pfVar10 = *param_2;
          }
          else {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uVar18;
            lVar5 = *(longlong *)(unaff_RBP + 0x178);
            iVar6 = *(int *)(lVar5 + 0x48a8);
            cVar4 = **(char **)(lVar5 + 0x48b0);
            *(int *)(lVar5 + 0x48a8) = iVar6 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar23 = *puVar23 & 7;
            fVar24 = fVar25 * *(float *)((longlong)iVar12 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar6 & 0x1f)) < '\0') {
              unaff_EDI = unaff_EDI + -1;
              *pfVar10 = *param_2 + fVar24;
              *param_2 = *param_2 - fVar24;
            }
            else {
              unaff_EDI = unaff_EDI + -1;
              *pfVar10 = *param_2 - fVar24;
              *param_2 = fVar24 + *param_2;
            }
          }
          pfVar10 = pfVar10 + lStack0000000000000068;
          param_2 = param_2 + lStack0000000000000068;
          if (uVar22 == 0xf) {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uStackX_24;
            unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
            iVar6 = func_0x000180815aa0();
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            iVar12 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar23 = *puVar23 & 7;
            fVar24 = fVar25 * *(float *)((longlong)(iVar6 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
              *pfVar10 = *param_2 + fVar24;
              *param_2 = *param_2 - fVar24;
            }
            else {
              *pfVar10 = *param_2 - fVar24;
              *param_2 = fVar24 + *param_2;
            }
          }
          else if (uVar22 == 0) {
            *pfVar10 = *param_2;
          }
          else {
            *(uint *)((longlong)&stack0x00000080 + lVar8 * 4) = uStackX_24;
            lVar8 = *(longlong *)(unaff_RBP + 0x178);
            iVar12 = *(int *)(lVar8 + 0x48a8);
            cVar4 = **(char **)(lVar8 + 0x48b0);
            *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
            plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3)
            ;
            puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
            *puVar23 = *puVar23 & 7;
            fVar24 = fVar25 * *(float *)((ulonglong)uVar22 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
              unaff_EDI = unaff_EDI + -1;
              *pfVar10 = *param_2 + fVar24;
              *param_2 = *param_2 - fVar24;
            }
            else {
              unaff_EDI = unaff_EDI + -1;
              *pfVar10 = *param_2 - fVar24;
              *param_2 = fVar24 + *param_2;
            }
          }
          uVar16 = (ulonglong)uStackX_24;
          uVar9 = (ulonglong)(int)uStackX_20;
          uVar19 = (ulonglong)(iVar11 - 1);
          uVar17 = (ulonglong)uStack0000000000000044;
          pfVar10 = pfVar10 + uVar9;
          param_2 = param_2 + uVar9;
          iStack0000000000000040 = iStack0000000000000040 + -1;
        } while (iStack0000000000000040 != 0);
        iStack0000000000000040 = 0;
        param_4 = lStack0000000000000030;
        iStack0000000000000028 = unaff_EDI;
      }
      lStack0000000000000050 = lStack0000000000000050 + 1;
    } while (lStack0000000000000050 < 2);
    while ((iStack000000000000003c != 0 && (iStack0000000000000028 = unaff_EDI, 0 < unaff_EDI))) {
      psVar14 = *(short **)((ulonglong)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar15 = *psVar14;
      while (sVar15 < 0) {
        psVar14 = psVar14 + 1;
        if (unaff_EDI + -1 < 0) {
          sVar15 = 0;
          break;
        }
        lVar8 = *(longlong *)(unaff_RBP + 0x178);
        iVar11 = *(int *)(lVar8 + 0x48a8);
        cVar4 = **(char **)(lVar8 + 0x48b0);
        *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
        plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
        puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
        *puVar23 = *puVar23 & 7;
        if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
          psVar14 = psVar14 + -(longlong)sVar15;
        }
        unaff_EDI = unaff_EDI + -1;
        sVar15 = *psVar14;
      }
      uVar9 = (ulonglong)uStackX_20;
      uVar13 = 0;
      do {
        iVar11 = (int)uVar19;
        if ((uVar13 & 1) == 0) {
          if (iVar11 == 0) {
            piVar1 = piVar21 + 2;
            uVar17 = (ulonglong)*piVar1;
            iVar11 = *piVar21;
            param_2 = pfStack0000000000000060 + piVar21[1];
            uStackX_24 = piVar21[3];
            pfVar10 = param_2 + 0x240;
            piVar21 = piVar21 + 4;
            iVar12 = *param_3;
            param_3 = param_3 + 1;
            if (*piVar1 == 3) {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x70);
              uVar9 = 1;
            }
            else {
              lVar8 = *(longlong *)(lStack0000000000000030 + 0x58 + uVar17 * 8);
              uVar9 = 3;
            }
            fVar25 = *(float *)(lVar8 + (longlong)(iVar12 << ((byte)uStack0000000000000038 & 0x1f))
                                        * 4);
            uStackX_20 = (uint)uVar9;
          }
          uVar19 = (ulonglong)(iVar11 - 1);
        }
        if (((int)sVar15 & 8 >> ((byte)uVar13 & 0x1f)) == 0) {
          *pfVar10 = *param_2;
        }
        else {
          iVar11 = unaff_EDI + -1;
          *(uint *)((longlong)&stack0x00000080 + (longlong)(int)uVar17 * 4) = uStackX_24;
          if (iVar11 < 0) break;
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          uVar9 = (ulonglong)uStackX_20;
          puVar23 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar23 = *puVar23 & 7;
          unaff_EDI = iVar11;
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            *pfVar10 = *param_2 + fVar25;
            *param_2 = *param_2 - fVar25;
          }
          else {
            *pfVar10 = *param_2 - fVar25;
            *param_2 = fVar25 + *param_2;
          }
        }
        uVar13 = uVar13 + 1;
        pfVar10 = pfVar10 + (int)uVar9;
        param_2 = param_2 + (int)uVar9;
      } while ((int)uVar13 < 4);
      iStack000000000000003c = iStack000000000000003c + -1;
      param_4 = lStack0000000000000030;
      iStack0000000000000028 = unaff_EDI;
    }
    if (piVar21 < piStack0000000000000058) {
      lVar8 = (longlong)(int)uVar9;
      do {
        iVar11 = (int)uVar19;
        if (iVar11 == 0) {
          iVar11 = *piVar21;
          lVar8 = 1;
          piVar1 = piVar21 + 2;
          param_2 = pfStack0000000000000060 + piVar21[1];
          piVar21 = piVar21 + 4;
          uVar9 = 1;
          if (*piVar1 != 3) {
            uVar9 = 3;
            lVar8 = 3;
          }
          pfVar10 = param_2 + 0x240;
        }
        uVar19 = (ulonglong)(iVar11 - 1);
        *pfVar10 = *param_2;
        pfVar10[lVar8] = param_2[lVar8];
        pfVar10 = pfVar10 + lVar8 + (int)uVar9;
        param_2 = param_2 + lVar8 + (int)uVar9;
        unaff_RBP = lStack0000000000000078;
        unaff_EDI = iStack0000000000000028;
      } while (piVar21 < piStack0000000000000058);
    }
    iStack0000000000000084 = (int)((ulonglong)_iStack0000000000000080 >> 0x20);
    iStack000000000000008c = (int)((ulonglong)_iStack0000000000000088 >> 0x20);
    *(int *)(lStack0000000000000030 + 0x30) = iStack0000000000000080 + 1;
    iVar11 = iStack0000000000000084 + 1;
    if (iStack0000000000000084 < iStack0000000000000080) {
      iStack0000000000000084 = iStack0000000000000080;
    }
    *(int *)(lStack0000000000000030 + 0x34) = iVar11;
    *(int *)(lStack0000000000000030 + 0x38) = iStack0000000000000088 + 1;
    if (iStack0000000000000088 < iStack0000000000000084) {
      iStack0000000000000088 = iStack0000000000000084;
    }
    *(int *)(lStack0000000000000030 + 0x3c) = iStack000000000000008c + 1;
    if (iStack0000000000000088 != -1) {
      uVar7 = *(undefined4 *)
               ((lStack0000000000000070 * 0xe + (longlong)iStack0000000000000088) * 4 + 0x180c42734)
      ;
      goto LAB_18081083d;
    }
    uVar9 = (ulonglong)(iStack000000000000008c + 1);
  }
  else {
    piVar21 = (int *)0x180c46a70;
    uStackX_20 = 0;
    if (*(int *)(param_4 + 0x4c) != 0) {
      piVar21 = (int *)0x180beb5a0;
    }
    uStackX_24 = 0xffffffff;
    lStack0000000000000050 = 0;
    puVar23 = *(uint **)(in_R10 * 0x18 + 0x180c45ac0);
    uVar17 = uVar9;
    piStack0000000000000058 = piVar21;
    do {
      piStack0000000000000048 =
           (int *)((ulonglong)*(uint *)(param_4 + 0x18 + lStack0000000000000050 * 4) * 0x10 +
                  0x180beb380);
      for (iStack0000000000000040 =
                *(int *)((longlong)&stack0x00000090 + lStack0000000000000050 * 4);
          iStack0000000000000040 != 0; iStack0000000000000040 = iStack0000000000000040 + -1) {
        uVar13 = (uint)uVar9;
        uVar18 = (uint)uVar17;
        if (uVar18 == 0) {
          iVar11 = *param_3;
          param_3 = param_3 + 1;
          iVar12 = *piVar21;
          piVar21 = piVar21 + 1;
          uVar13 = puVar23[1];
          uVar9 = (ulonglong)uVar13;
          uVar18 = *puVar23;
          uVar17 = (ulonglong)uVar18;
          puVar23 = puVar23 + 2;
          iVar11 = iVar11 + iVar12 << ((byte)uStack0000000000000038 & 0x1f);
          uStackX_20 = uVar13;
          piStack0000000000000058 = piVar21;
          if (0x179 < iVar11) break;
          fVar25 = *(float *)(*(longlong *)(param_4 + 0x70) + (longlong)iVar11 * 4);
        }
        psVar14 = *(short **)(piStack0000000000000048 + 2);
        sVar15 = *psVar14;
        while (uVar22 = (uint)sVar15, sVar15 < 0) {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          psVar14 = psVar14 + 1;
          iVar11 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            psVar14 = psVar14 + -(longlong)(int)uVar22;
          }
          unaff_EDI = unaff_EDI + -1;
          sVar15 = *psVar14;
        }
        uVar20 = uVar22 & 0xf;
        iVar11 = (int)uVar22 >> 4;
        if (iVar11 == 0xf) {
          unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
          iVar12 = func_0x000180815aa0();
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar11 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar24 = fVar25 * *(float *)((longlong)(iVar12 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            *pfVar10 = *param_2 + fVar24;
            *param_2 = *param_2 - fVar24;
            uStackX_24 = uVar13;
          }
          else {
            *pfVar10 = *param_2 - fVar24;
            *param_2 = fVar24 + *param_2;
            uStackX_24 = uVar13;
          }
        }
        else if (iVar11 == 0) {
          *pfVar10 = *param_2;
        }
        else {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar24 = fVar25 * *(float *)((longlong)iVar11 * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            unaff_EDI = unaff_EDI + -1;
            *pfVar10 = *param_2 + fVar24;
            *param_2 = *param_2 - fVar24;
            uStackX_24 = uVar13;
          }
          else {
            unaff_EDI = unaff_EDI + -1;
            *pfVar10 = *param_2 - fVar24;
            *param_2 = fVar24 + *param_2;
            uStackX_24 = uVar13;
          }
        }
        if (uVar20 == 0xf) {
          uStackX_24 = uStackX_20;
          unaff_EDI = unaff_EDI + (-1 - *piStack0000000000000048);
          iVar12 = func_0x000180815aa0();
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar11 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar24 = fVar25 * *(float *)((longlong)(iVar12 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            pfVar10[1] = fVar24 + param_2[1];
            param_2[1] = param_2[1] - fVar24;
          }
          else {
            pfVar10[1] = param_2[1] - fVar24;
            param_2[1] = fVar24 + param_2[1];
          }
        }
        else if (uVar20 == 0) {
          pfVar10[1] = param_2[1];
        }
        else {
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          uStackX_24 = uStackX_20;
          iVar11 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar24 = fVar25 * *(float *)((ulonglong)uVar20 * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            unaff_EDI = unaff_EDI + -1;
            pfVar10[1] = fVar24 + param_2[1];
            param_2[1] = param_2[1] - fVar24;
          }
          else {
            unaff_EDI = unaff_EDI + -1;
            pfVar10[1] = param_2[1] - fVar24;
            param_2[1] = fVar24 + param_2[1];
          }
        }
        uVar9 = (ulonglong)uStackX_20;
        uVar17 = (ulonglong)(uVar18 - 1);
        pfVar10 = pfVar10 + 2;
        param_2 = param_2 + 2;
        param_4 = lStack0000000000000030;
        piVar21 = piStack0000000000000058;
      }
      lStack0000000000000050 = lStack0000000000000050 + 1;
    } while (lStack0000000000000050 < 3);
    while ((iStack000000000000003c != 0 && (0 < unaff_EDI))) {
      psVar14 = *(short **)((ulonglong)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar15 = *psVar14;
      while (sVar15 < 0) {
        psVar14 = psVar14 + 1;
        if (unaff_EDI + -1 < 0) {
          sVar15 = 0;
          param_4 = lStack0000000000000030;
          break;
        }
        lVar8 = *(longlong *)(unaff_RBP + 0x178);
        iVar11 = *(int *)(lVar8 + 0x48a8);
        cVar4 = **(char **)(lVar8 + 0x48b0);
        *(int *)(lVar8 + 0x48a8) = iVar11 + 1;
        plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
        puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
        *puVar3 = *puVar3 & 7;
        if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
          psVar14 = psVar14 + -(longlong)sVar15;
        }
        param_4 = lStack0000000000000030;
        unaff_EDI = unaff_EDI + -1;
        sVar15 = *psVar14;
      }
      uVar13 = 0;
      do {
        uVar18 = (uint)uVar17;
        if ((uVar13 & 1) == 0) {
          if (uVar18 == 0) {
            uStackX_20 = puVar23[1];
            uVar18 = *puVar23;
            puVar23 = puVar23 + 2;
            iVar11 = *param_3;
            iVar12 = *piVar21;
            piVar21 = piVar21 + 1;
            param_3 = param_3 + 1;
            fVar25 = *(float *)(*(longlong *)(param_4 + 0x70) +
                               (longlong)(iVar11 + iVar12 << ((byte)uStack0000000000000038 & 0x1f))
                               * 4);
          }
          uVar17 = (ulonglong)(uVar18 - 1);
        }
        if (((int)sVar15 & 8 >> ((byte)uVar13 & 0x1f)) == 0) {
          *pfVar10 = *param_2;
        }
        else {
          iVar11 = unaff_EDI + -1;
          uStackX_24 = uStackX_20;
          if (iVar11 < 1) break;
          lVar8 = *(longlong *)(unaff_RBP + 0x178);
          iVar12 = *(int *)(lVar8 + 0x48a8);
          cVar4 = **(char **)(lVar8 + 0x48b0);
          *(int *)(lVar8 + 0x48a8) = iVar12 + 1;
          plVar2 = (longlong *)(*(longlong *)(unaff_RBP + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(longlong *)(unaff_RBP + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          unaff_EDI = iVar11;
          if ((char)(cVar4 << ((byte)iVar12 & 0x1f)) < '\0') {
            *pfVar10 = *param_2 + fVar25;
            *param_2 = *param_2 - fVar25;
          }
          else {
            *pfVar10 = *param_2 - fVar25;
            *param_2 = fVar25 + *param_2;
          }
        }
        param_2 = param_2 + 1;
        pfVar10 = pfVar10 + 1;
        uVar13 = uVar13 + 1;
        param_4 = lStack0000000000000030;
      } while ((int)uVar13 < 4);
      iStack000000000000003c = iStack000000000000003c + -1;
      param_4 = lStack0000000000000030;
    }
    iVar11 = (int)((longlong)pfStack0000000000000060 + (0x1200 - (longlong)pfVar10) >> 2) >> 1;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar10 = *param_2;
      pfVar10[1] = param_2[1];
      param_2 = param_2 + 2;
      pfVar10 = pfVar10 + 2;
    }
    uVar9 = (ulonglong)(uStackX_24 + 1);
    *(uint *)(lStack0000000000000030 + 0x3c) = uStackX_24 + 1;
  }
  uVar7 = *(undefined4 *)((lStack0000000000000070 * 0x17 + uVar9) * 4 + 0x180c423f0);
LAB_18081083d:
  *(undefined4 *)(lStack0000000000000030 + 0x40) = uVar7;
  if (0x10 < unaff_EDI) {
    uVar13 = (unaff_EDI - 0x11U >> 4) + 1;
    uVar9 = (ulonglong)uVar13;
    unaff_EDI = unaff_EDI + uVar13 * -0x10;
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





