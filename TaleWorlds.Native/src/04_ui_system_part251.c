#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part251.c - 1 个函数

// 函数: void FUN_18080e9f0(longlong param_1,float *param_2,int *param_3,longlong param_4,int param_5,
void FUN_18080e9f0(longlong param_1,float *param_2,int *param_3,longlong param_4,int param_5,
                  int param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  byte bVar4;
  short sVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  short *psVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_d8 [32];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  float *pfStack_98;
  int *piStack_90;
  float *pfStack_88;
  int *piStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int aiStack_50 [4];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  iStack_b8 = *(int *)(param_4 + 4) - param_6;
  lVar14 = (longlong)param_5;
  uVar13 = -*(int *)(*(longlong *)(param_1 + 0x178) + 0x48a8) & 7;
  iStack_b0 = *(int *)(param_4 + 0x50) + 1;
  lStack_a8 = param_4;
  lStack_a0 = param_1;
  piStack_90 = param_3;
  pfStack_88 = param_2;
  iVar7 = func_0x000180815aa0(param_1,uVar13);
  iStack_b8 = iStack_b8 - uVar13;
  uVar16 = iVar7 << (0x20U - (char)uVar13 & 0x1f);
  iVar7 = *(int *)(lStack_a8 + 0x44);
  iVar22 = *(int *)(lStack_a8 + 0x48);
  iVar19 = *(int *)(lStack_a8 + 8);
  if (iVar22 < iVar7) goto LAB_18080f7c7;
  iVar24 = 0;
  iStack_ac = 0x120 - iVar19 >> 1;
  iVar26 = 0;
  aiStack_50[1] = iVar26;
  aiStack_50[2] = iVar26;
  if (iVar7 < iVar19) {
    if (iVar22 < iVar19) {
      aiStack_50[2] = iVar19 - iVar22;
      iVar19 = iVar7;
      aiStack_50[1] = iVar22 - iVar7;
    }
    else {
      aiStack_50[1] = iVar19 - iVar7;
      iVar19 = iVar7;
    }
  }
  fVar29 = 0.0;
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  aiStack_50[0] = iVar19;
  if (aiStack_50[1] < 0) {
    aiStack_50[1] = 0;
  }
  if (aiStack_50[2] < 0) {
    aiStack_50[2] = iVar26;
  }
  bVar11 = (byte)iStack_b0;
  lStack_70 = lVar14;
  if (*(int *)(lStack_a8 + 0x10) == 2) {
    iStack_b4 = 0;
    lVar27 = 3;
    if (*(int *)(lStack_a8 + 0x14) == 0) {
      piVar18 = *(int **)(lVar14 * 0x18 + 0x180c45ab8);
      piStack_80 = *(int **)(lVar14 * 0x18 + 0x180c45b98);
      uStack_58 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
    }
    else {
      piStack_80 = *(int **)(lVar14 * 0x18 + 0x180c45b90);
      piVar18 = *(int **)(lVar14 * 0x18 + 0x180c45ab0);
      uStack_58 = 0xffffffff00000002;
      uStack_60 = 0x200000002;
    }
    lStack_78 = 0;
    lStack_68 = 0;
    iVar7 = iVar24;
    do {
      lVar15 = (ulonglong)*(uint *)(lStack_a8 + 0x18 + lStack_68 * 4) * 0x10;
      pfStack_98 = (float *)(lVar15 + 0x180beb380);
      piVar23 = piStack_90;
      for (iVar22 = aiStack_50[lStack_68]; piStack_90 = piVar23, iVar22 != 0; iVar22 = iVar22 + -1)
      {
        if (iVar24 == 0) {
          piVar25 = piVar18 + 1;
          piVar1 = piVar18 + 2;
          lVar27 = (longlong)*piVar1;
          iVar24 = *piVar18;
          iVar7 = piVar18[3];
          piVar18 = piVar18 + 4;
          param_2 = pfStack_88 + *piVar25;
          piStack_90 = piVar23 + 1;
          if (*piVar1 == 3) {
            lVar10 = *(longlong *)(lStack_a8 + 0x70);
            iStack_b4 = 1;
            lStack_78 = 1;
          }
          else {
            lVar10 = *(longlong *)(lStack_a8 + 0x58 + lVar27 * 8);
            iStack_b4 = 3;
            lStack_78 = 3;
          }
          fVar29 = *(float *)(lVar10 + (longlong)(*piVar23 << (bVar11 & 0x1f)) * 4);
        }
        psVar17 = *(short **)(lVar15 + 0x180beb388);
        if ((int)uVar13 < 0x18) {
          iVar19 = 0x18 - uVar13;
          uVar8 = (0x17 - uVar13 >> 3) + 1;
          uVar21 = (ulonglong)uVar8;
          iStack_b8 = iStack_b8 + uVar8 * -8;
          uVar13 = uVar13 + uVar8 * 8;
          do {
            pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
            bVar4 = *pbVar6;
            *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
            bVar12 = (byte)iVar19;
            iVar19 = iVar19 + -8;
            uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        sVar5 = *psVar17;
        while (uVar8 = (uint)sVar5, sVar5 < 0) {
          psVar17 = psVar17 + 1;
          if ((int)uVar16 < 0) {
            psVar17 = psVar17 + -(longlong)(int)uVar8;
          }
          uVar13 = uVar13 - 1;
          uVar16 = uVar16 * 2;
          sVar5 = *psVar17;
        }
        uVar20 = uVar8 & 0xf;
        iVar19 = (int)uVar8 >> 4;
        iVar26 = (int)lVar27;
        if (iVar19 == 0xf) {
          fVar28 = *pfStack_98;
          if (fVar28 == 0.0) {
LAB_18080edbc:
            *(int *)((longlong)&uStack_60 + (longlong)iVar26 * 4) = iVar7;
            fVar28 = fVar29 * *(float *)((longlong)iVar19 * 4 + 0x180c398a0);
            if ((int)uVar16 < 0) {
              fVar28 = -fVar28;
            }
            uVar13 = uVar13 - 1;
            *param_2 = fVar28;
            uVar16 = uVar16 * 2;
          }
          else {
            *(int *)((longlong)&uStack_60 + (longlong)iVar26 * 4) = iVar7;
            if ((int)uVar13 < 0x18) {
              iVar19 = 0x18 - uVar13;
              uVar8 = (0x17 - uVar13 >> 3) + 1;
              uVar21 = (ulonglong)uVar8;
              iStack_b8 = iStack_b8 + uVar8 * -8;
              uVar13 = uVar13 + uVar8 * 8;
              do {
                pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
                bVar4 = *pbVar6;
                *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
                bVar12 = (byte)iVar19;
                iVar19 = iVar19 + -8;
                uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
              fVar28 = *pfStack_98;
            }
            uVar13 = uVar13 + (-1 - (int)fVar28);
            bVar4 = SUB41(fVar28,0) & 0x1f;
            fVar28 = fVar29 * *(float *)((longlong)(int)(uVar16 >> (0x20 - SUB41(fVar28,0) & 0x1f))
                                         * 4 + 0x180c398dc);
            if ((int)(uVar16 << bVar4) < 0) {
              fVar28 = -fVar28;
            }
            uVar16 = (uVar16 << bVar4) * 2;
            *param_2 = fVar28;
          }
        }
        else {
          if (iVar19 != 0) goto LAB_18080edbc;
          *param_2 = 0.0;
        }
        param_2 = param_2 + lStack_78;
        if ((uVar20 == 0xf) && (fVar28 = *pfStack_98, fVar28 != 0.0)) {
          *(int *)((longlong)&uStack_60 + (longlong)iVar26 * 4) = iVar7;
          if ((int)uVar13 < 0x18) {
            iVar19 = 0x18 - uVar13;
            uVar8 = (0x17 - uVar13 >> 3) + 1;
            uVar21 = (ulonglong)uVar8;
            iStack_b8 = iStack_b8 + uVar8 * -8;
            uVar13 = uVar13 + uVar8 * 8;
            do {
              pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
              bVar4 = *pbVar6;
              *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
              bVar12 = (byte)iVar19;
              iVar19 = iVar19 + -8;
              uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            fVar28 = *pfStack_98;
          }
          uVar13 = uVar13 + (-1 - (int)fVar28);
          bVar4 = SUB41(fVar28,0) & 0x1f;
          fVar28 = fVar29 * *(float *)((longlong)
                                       (int)((uVar16 >> (0x20 - SUB41(fVar28,0) & 0x1f)) + 0xf) * 4
                                      + 0x180c398a0);
          if ((int)(uVar16 << bVar4) < 0) {
            fVar28 = -fVar28;
          }
          *param_2 = fVar28;
          uVar16 = (uVar16 << bVar4) * 2;
        }
        else if (uVar20 == 0) {
          *param_2 = 0.0;
        }
        else {
          fVar28 = fVar29 * *(float *)((ulonglong)uVar20 * 4 + 0x180c398a0);
          *(int *)((longlong)&uStack_60 + (longlong)iVar26 * 4) = iVar7;
          if ((int)uVar16 < 0) {
            fVar28 = -fVar28;
          }
          uVar13 = uVar13 - 1;
          *param_2 = fVar28;
          uVar16 = uVar16 * 2;
        }
        iVar24 = iVar24 + -1;
        param_2 = param_2 + iStack_b4;
        piVar23 = piStack_90;
      }
      iVar22 = (int)lVar27;
      lStack_68 = lStack_68 + 1;
    } while (lStack_68 < 2);
    while( true ) {
      if ((iStack_ac == 0) || (iVar22 = (int)lVar27, (int)(uVar13 + iStack_b8) < 1))
      goto LAB_18080f117;
      if (pfStack_88 + 0x245 <= param_2) goto LAB_18080f7c7;
      psVar17 = *(short **)((ulonglong)*(uint *)(lStack_a8 + 0x54) * 0x10 + 0x180beb588);
      if ((int)uVar13 < 0x18) {
        iVar19 = 0x18 - uVar13;
        uVar8 = (0x17 - uVar13 >> 3) + 1;
        uVar21 = (ulonglong)uVar8;
        iStack_b8 = iStack_b8 + uVar8 * -8;
        uVar13 = uVar13 + uVar8 * 8;
        do {
          pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
          bVar4 = *pbVar6;
          *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
          bVar12 = (byte)iVar19;
          iVar19 = iVar19 + -8;
          uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      sVar5 = *psVar17;
      while (sVar5 < 0) {
        psVar17 = psVar17 + 1;
        if ((int)uVar16 < 0) {
          psVar17 = psVar17 + -(longlong)sVar5;
        }
        uVar13 = uVar13 - 1;
        uVar16 = uVar16 * 2;
        sVar5 = *psVar17;
      }
      iVar19 = uVar13 + iStack_b8;
      if (iVar19 < 1) break;
      uVar8 = 0;
      do {
        if ((uVar8 & 1) == 0) {
          if (iVar24 == 0) {
            piVar23 = piVar18 + 1;
            piVar25 = piVar18 + 2;
            lVar27 = (longlong)*piVar25;
            iVar24 = *piVar18;
            iVar7 = piVar18[3];
            piVar18 = piVar18 + 4;
            param_2 = pfStack_88 + *piVar23;
            if (*piVar25 == 3) {
              lVar15 = *(longlong *)(lStack_a8 + 0x70);
              iStack_b4 = 1;
            }
            else {
              iStack_b4 = 3;
              lVar15 = *(longlong *)(lStack_a8 + 0x58 + lVar27 * 8);
            }
            fVar29 = *(float *)(lVar15 + (longlong)(*piStack_90 << (bVar11 & 0x1f)) * 4);
            piStack_90 = piStack_90 + 1;
          }
          iVar24 = iVar24 + -1;
        }
        iVar22 = (int)lVar27;
        if (((int)sVar5 & 8U >> ((byte)uVar8 & 0x1f)) == 0) {
          *param_2 = 0.0;
        }
        else {
          *(int *)((longlong)&uStack_60 + (longlong)iVar22 * 4) = iVar7;
          if (iVar19 < 1) break;
          fVar28 = fVar29;
          if ((int)uVar16 < 0) {
            fVar28 = -fVar29;
          }
          uVar13 = uVar13 - 1;
          *param_2 = fVar28;
          iVar19 = iVar19 + -1;
          uVar16 = uVar16 * 2;
        }
        uVar8 = uVar8 + 1;
        param_2 = param_2 + iStack_b4;
      } while ((int)uVar8 < 4);
      iStack_ac = iStack_ac + -1;
    }
    uVar13 = -iStack_b8;
LAB_18080f117:
    if (iVar22 < 3) {
      while( true ) {
        for (; 0 < iVar24; iVar24 = iVar24 + -1) {
          *param_2 = 0.0;
          param_2[3] = 0.0;
          param_2 = param_2 + 6;
        }
        if (piStack_80 <= piVar18) break;
        iVar24 = *piVar18;
        param_2 = pfStack_88 + piVar18[1];
        if (piVar18[2] == 0) break;
        piVar18 = piVar18 + 4;
      }
    }
    uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
    uStack_58._4_4_ = (int)((ulonglong)uStack_58 >> 0x20);
    *(int *)(lStack_a8 + 0x30) = (int)uStack_60 + 1;
    iVar7 = uStack_60._4_4_ + 1;
    if (uStack_60._4_4_ < (int)uStack_60) {
      uStack_60._4_4_ = (int)uStack_60;
    }
    *(int *)(lStack_a8 + 0x34) = iVar7;
    *(int *)(lStack_a8 + 0x38) = (int)uStack_58 + 1;
    if ((int)uStack_58 < uStack_60._4_4_) {
      uStack_58._0_4_ = uStack_60._4_4_;
    }
    *(int *)(lStack_a8 + 0x3c) = uStack_58._4_4_ + 1;
    if ((int)uStack_58 == -1) {
      uVar21 = (ulonglong)(uStack_58._4_4_ + 1);
      goto LAB_18080f6f1;
    }
    uVar9 = *(undefined4 *)((lVar14 * 0xe + (longlong)(int)uStack_58) * 4 + 0x180c42734);
  }
  else {
    piVar18 = *(int **)(lVar14 * 0x18 + 0x180c45ac0);
    piVar23 = (int *)0x180c46a70;
    iStack_b4 = -1;
    if (*(int *)(lStack_a8 + 0x4c) != 0) {
      piVar23 = (int *)0x180beb5a0;
    }
    piStack_80 = (int *)0x0;
    iVar7 = iVar24;
    do {
      lVar27 = (ulonglong)*(uint *)(lStack_a8 + 0x18 + (longlong)piStack_80 * 4) * 0x10;
      piVar25 = (int *)(lVar27 + 0x180beb380);
      for (iVar22 = aiStack_50[(longlong)piStack_80]; iVar22 != 0; iVar22 = iVar22 + -1) {
        if (iVar7 == 0) {
          iVar24 = piVar18[1];
          iVar7 = *piVar18;
          piVar18 = piVar18 + 2;
          if (iVar24 == 0x15) {
            fVar29 = 0.0;
          }
          else {
            iVar19 = *piStack_90;
            iVar26 = *piVar23;
            piVar23 = piVar23 + 1;
            piStack_90 = piStack_90 + 1;
            fVar29 = *(float *)(*(longlong *)(lStack_a8 + 0x70) +
                               (longlong)(iVar19 + iVar26 << (bVar11 & 0x1f)) * 4);
          }
        }
        psVar17 = *(short **)(lVar27 + 0x180beb388);
        if ((int)uVar13 < 0x18) {
          iVar19 = 0x18 - uVar13;
          uVar8 = (0x17 - uVar13 >> 3) + 1;
          uVar21 = (ulonglong)uVar8;
          iStack_b8 = iStack_b8 + uVar8 * -8;
          uVar13 = uVar13 + uVar8 * 8;
          do {
            pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
            bVar4 = *pbVar6;
            *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
            bVar12 = (byte)iVar19;
            iVar19 = iVar19 + -8;
            uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        sVar5 = *psVar17;
        while (uVar8 = (uint)sVar5, sVar5 < 0) {
          psVar17 = psVar17 + 1;
          if ((int)uVar16 < 0) {
            psVar17 = psVar17 + -(longlong)(int)uVar8;
          }
          uVar13 = uVar13 - 1;
          uVar16 = uVar16 * 2;
          sVar5 = *psVar17;
        }
        uVar20 = uVar8 & 0xf;
        iVar19 = (int)uVar8 >> 4;
        if (iVar19 == 0xf) {
          iVar26 = *piVar25;
          if (iVar26 == 0) {
LAB_18080f3eb:
            fVar28 = fVar29 * *(float *)((longlong)iVar19 * 4 + 0x180c398a0);
            if ((int)uVar16 < 0) {
              fVar28 = -fVar28;
            }
            uVar13 = uVar13 - 1;
            *param_2 = fVar28;
            uVar16 = uVar16 * 2;
            iStack_b4 = iVar24;
          }
          else {
            if ((int)uVar13 < 0x18) {
              iVar19 = 0x18 - uVar13;
              uVar8 = (0x17 - uVar13 >> 3) + 1;
              uVar21 = (ulonglong)uVar8;
              iStack_b8 = iStack_b8 + uVar8 * -8;
              uVar13 = uVar13 + uVar8 * 8;
              do {
                pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
                bVar4 = *pbVar6;
                *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
                bVar12 = (byte)iVar19;
                iVar19 = iVar19 + -8;
                uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
              iVar26 = *piVar25;
            }
            uVar13 = uVar13 + (-1 - iVar26);
            bVar4 = (byte)iVar26 & 0x1f;
            fVar28 = fVar29 * *(float *)((longlong)(int)(uVar16 >> (0x20 - (byte)iVar26 & 0x1f)) * 4
                                        + 0x180c398dc);
            if ((int)(uVar16 << bVar4) < 0) {
              fVar28 = -fVar28;
            }
            uVar16 = (uVar16 << bVar4) * 2;
            *param_2 = fVar28;
            iStack_b4 = iVar24;
          }
        }
        else {
          if (iVar19 != 0) goto LAB_18080f3eb;
          *param_2 = 0.0;
        }
        if ((uVar20 == 0xf) && (iVar19 = *piVar25, iVar19 != 0)) {
          if ((int)uVar13 < 0x18) {
            iVar19 = 0x18 - uVar13;
            uVar8 = (0x17 - uVar13 >> 3) + 1;
            uVar21 = (ulonglong)uVar8;
            iStack_b8 = iStack_b8 + uVar8 * -8;
            uVar13 = uVar13 + uVar8 * 8;
            do {
              pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
              bVar4 = *pbVar6;
              *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
              bVar12 = (byte)iVar19;
              iVar19 = iVar19 + -8;
              uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            iVar19 = *piVar25;
          }
          uVar13 = uVar13 + (-1 - iVar19);
          bVar4 = (byte)iVar19 & 0x1f;
          fVar28 = fVar29 * *(float *)((longlong)
                                       (int)((uVar16 >> (0x20 - (byte)iVar19 & 0x1f)) + 0xf) * 4 +
                                      0x180c398a0);
          if ((int)(uVar16 << bVar4) < 0) {
            fVar28 = -fVar28;
          }
          param_2[1] = fVar28;
          uVar16 = (uVar16 << bVar4) * 2;
          iStack_b4 = iVar24;
        }
        else if (uVar20 == 0) {
          param_2[1] = 0.0;
        }
        else {
          fVar28 = fVar29 * *(float *)((ulonglong)uVar20 * 4 + 0x180c398a0);
          if ((int)uVar16 < 0) {
            fVar28 = -fVar28;
          }
          uVar13 = uVar13 - 1;
          param_2[1] = fVar28;
          uVar16 = uVar16 * 2;
          iStack_b4 = iVar24;
        }
        param_2 = param_2 + 2;
        iVar7 = iVar7 + -1;
      }
      piStack_80 = (int *)((longlong)piStack_80 + 1);
    } while ((longlong)piStack_80 < 3);
    while( true ) {
      if ((iStack_ac == 0) || ((int)(uVar13 + iStack_b8) < 1)) goto LAB_18080f6e2;
      psVar17 = *(short **)((ulonglong)*(uint *)(lStack_a8 + 0x54) * 0x10 + 0x180beb588);
      if ((int)uVar13 < 0x18) {
        iVar22 = 0x18 - uVar13;
        uVar8 = (0x17 - uVar13 >> 3) + 1;
        uVar21 = (ulonglong)uVar8;
        iStack_b8 = iStack_b8 + uVar8 * -8;
        uVar13 = uVar13 + uVar8 * 8;
        do {
          pbVar6 = *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
          bVar4 = *pbVar6;
          *(byte **)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0) = pbVar6 + 1;
          bVar12 = (byte)iVar22;
          iVar22 = iVar22 + -8;
          uVar16 = uVar16 | (uint)bVar4 << (bVar12 & 0x1f);
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      sVar5 = *psVar17;
      while (sVar5 < 0) {
        psVar17 = psVar17 + 1;
        if ((int)uVar16 < 0) {
          psVar17 = psVar17 + -(longlong)sVar5;
        }
        uVar13 = uVar13 - 1;
        uVar16 = uVar16 * 2;
        sVar5 = *psVar17;
      }
      iVar22 = uVar13 + iStack_b8;
      if (iVar22 < 1) break;
      uVar8 = 0;
      do {
        if ((uVar8 & 1) == 0) {
          if (iVar7 == 0) {
            iVar24 = piVar18[1];
            iVar7 = *piVar18;
            piVar18 = piVar18 + 2;
            if (iVar24 == 0x15) {
              fVar29 = 0.0;
            }
            else {
              iVar19 = *piStack_90;
              piStack_90 = piStack_90 + 1;
              iVar26 = *piVar23;
              piVar23 = piVar23 + 1;
              fVar29 = *(float *)(*(longlong *)(lStack_a8 + 0x70) +
                                 (longlong)(iVar19 + iVar26 << (bVar11 & 0x1f)) * 4);
            }
          }
          iVar7 = iVar7 + -1;
        }
        if (((int)sVar5 & 8U >> ((byte)uVar8 & 0x1f)) == 0) {
          *param_2 = 0.0;
        }
        else {
          iStack_b4 = iVar24;
          if (iVar22 < 1) break;
          fVar28 = fVar29;
          if ((int)uVar16 < 0) {
            fVar28 = -fVar29;
          }
          uVar13 = uVar13 - 1;
          *param_2 = fVar28;
          iVar22 = iVar22 + -1;
          uVar16 = uVar16 * 2;
        }
        uVar8 = uVar8 + 1;
        param_2 = param_2 + 1;
      } while ((int)uVar8 < 4);
      iStack_ac = iStack_ac + -1;
    }
    uVar13 = -iStack_b8;
LAB_18080f6e2:
    uVar21 = (ulonglong)(iStack_b4 + 1U);
    *(uint *)(lStack_a8 + 0x3c) = iStack_b4 + 1U;
    pfStack_98 = param_2;
LAB_18080f6f1:
    uVar9 = *(undefined4 *)((lVar14 * 0x17 + uVar21) * 4 + 0x180c423f0);
  }
  *(undefined4 *)(lStack_a8 + 0x40) = uVar9;
  iVar7 = iStack_b8 + uVar13;
  piVar18 = (int *)(*(longlong *)(lStack_a0 + 0x178) + 0x48a8);
  *piVar18 = *piVar18 - uVar13;
  plVar2 = (longlong *)(*(longlong *)(lStack_a0 + 0x178) + 0x48b0);
  *plVar2 = *plVar2 + ((longlong)*(int *)(*(longlong *)(lStack_a0 + 0x178) + 0x48a8) >> 3);
  puVar3 = (uint *)(*(longlong *)(lStack_a0 + 0x178) + 0x48a8);
  *puVar3 = *puVar3 & 7;
  if (param_2 < pfStack_88 + 0x240) {
    lVar14 = ((ulonglong)((longlong)(pfStack_88 + 0x240) + (-1 - (longlong)param_2)) >> 2) + 1;
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      *param_2 = 0.0;
      param_2 = param_2 + 1;
    }
  }
  if (0x10 < iVar7) {
    uVar16 = (iVar7 - 0x11U >> 4) + 1;
    uVar21 = (ulonglong)uVar16;
    iVar7 = iVar7 + uVar16 * -0x10;
    do {
      func_0x000180815aa0(lStack_a0,0x10);
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (0 < iVar7) {
    func_0x000180815aa0(lStack_a0,iVar7);
  }
LAB_18080f7c7:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



