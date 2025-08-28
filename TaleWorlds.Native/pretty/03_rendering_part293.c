#include "TaleWorlds.Native.Split.h"

// 03_rendering_part293.c - 3 个函数

// 函数: void FUN_180423eb0(longlong *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)
void FUN_180423eb0(longlong *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  code *pcVar14;
  uint *puVar15;
  uint uVar16;
  uint64_t uVar17;
  int *piVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong *plVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  int32_t uVar30;
  longlong lVar31;
  int8_t auStack_1a8 [32];
  uint uStack_188;
  uint uStack_180;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  int32_t *puStack_150;
  int32_t *puStack_148;
  int32_t *puStack_140;
  longlong alStack_138 [7];
  int aiStack_100 [3];
  int aiStack_f4 [39];
  ulonglong uStack_58;
  ulonglong uVar18;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  *(int32_t *)(*param_1 + 8) = 0;
  puStack_150 = param_4;
  puStack_148 = param_2;
  puStack_140 = param_3;
  iVar10 = FUN_180423130();
  puVar15 = (uint *)*param_1;
  uStack_170 = puVar15[2];
  if (iVar10 == 0) {
    FUN_180422a20(param_1,uStack_170,0);
    goto FUN_1804246ed;
  }
  uVar27 = 1;
  if (2 < (int)uStack_170) {
    uVar27 = 3;
  }
  if ((uStack_170 == 3) &&
     (((int)param_1[0x90a] == 3 ||
      ((*(int *)((longlong)param_1 + 0x484c) == 0 && ((int)param_1[0x909] == 0)))))) {
    bVar8 = true;
    lStack_168 = 1;
LAB_180423f77:
    if ((2 < (int)uStack_170) || (uVar16 = 1, bVar8)) goto LAB_180423f83;
  }
  else {
    bVar8 = false;
    lStack_168 = 0;
    if (uStack_170 == 3) goto LAB_180423f77;
LAB_180423f83:
    uVar16 = uStack_170;
  }
  lVar28 = (longlong)(int)uVar16;
  uStack_174 = uVar27;
  lStack_158 = lVar28;
  if (0 < (int)uVar16) {
    lVar21 = 0;
    piVar19 = aiStack_100;
    piVar23 = (int *)((longlong)param_1 + 0x46a4);
    do {
      lVar13 = FUN_18062b420(_DAT_180c8ed18,*(int *)*param_1 + 3,
                             CONCAT71((int7)((ulonglong)puVar15 >> 8),0x22));
      *(longlong *)(piVar23 + 0x11) = lVar13;
      if (lVar13 == 0) {
        FUN_180422a20(param_1,*(int32_t *)(*param_1 + 8),0);
        goto FUN_1804246ed;
      }
      lVar13 = param_1[0x8d1];
      piVar19[4] = 0;
      uVar18 = (longlong)(int)lVar13 / (longlong)*piVar23;
      iVar11 = (int)uVar18;
      puVar15 = (uint *)(uVar18 & 0xffffffff);
      *piVar19 = iVar11;
      iVar12 = *(int *)((longlong)param_1 + 0x468c) / piVar23[1];
      piVar19[1] = iVar12;
      piVar19[3] = iVar12 >> 1;
      iVar10 = *(int *)*param_1;
      uVar17 = *(uint64_t *)(piVar23 + 0xb);
      *(uint64_t *)(piVar19 + -2) = uVar17;
      *(uint64_t *)(piVar19 + -4) = uVar17;
      piVar19[2] = (int)((ulonglong)(uint)(iVar10 + -1 + iVar11) / (uVar18 & 0xffffffff));
      if (iVar11 == 1) {
        if (iVar12 == 1) {
          pcVar14 = (code *)&UNK_1801792b0;
        }
        else {
          puVar15 = (uint *)0x1;
          if (iVar12 == 2) {
            pcVar14 = FUN_180423450;
          }
          else {
LAB_180424068:
            if (((int)puVar15 != 2) || (iVar12 != 2)) goto LAB_18042407c;
            pcVar14 = (code *)param_1[0x910];
          }
        }
      }
      else if (iVar11 == 2) {
        if (iVar12 != 1) goto LAB_180424068;
        pcVar14 = FUN_180423690;
      }
      else {
LAB_18042407c:
        pcVar14 = (code *)&UNK_180423a20;
      }
      *(code **)(piVar19 + -6) = pcVar14;
      lVar21 = lVar21 + 1;
      piVar19 = piVar19 + 0xc;
      piVar23 = piVar23 + 0x18;
    } while (lVar21 < lVar28);
    puVar15 = (uint *)*param_1;
  }
  uVar16 = puVar15[1];
  uVar24 = *puVar15;
  if ((((int)uVar24 < 0) ||
      (((uVar24 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar24) < (int)uVar27)) ||
       ((int)(uVar24 * uVar27) < 0)))) ||
     (((int)uVar16 < 0 ||
      (((uVar16 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar16) < (int)(uVar24 * uVar27))) ||
       (iVar10 = uVar24 * uVar16 * uVar27, iVar10 == 0x7fffffff)))))) {
    lStack_160 = 0;
  }
  else {
    lStack_160 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar10 + 1));
    puVar15 = (uint *)*param_1;
  }
  if (lStack_160 == 0) {
    FUN_180422a20(param_1,puVar15[2],0);
  }
  else {
    uStack_178 = 0;
    lVar28 = alStack_138[2];
    lVar21 = alStack_138[0];
    lVar13 = alStack_138[3];
    lVar31 = alStack_138[1];
    if (puVar15[1] != 0) {
      do {
        lVar9 = lStack_158;
        pbVar20 = (byte *)((ulonglong)(uStack_178 * uVar27 * *puVar15) + lStack_160);
        lVar29 = 0;
        if (0 < lStack_158) {
          plVar22 = param_1 + 0x8d8;
          piVar23 = aiStack_f4;
          do {
            iVar11 = piVar23[-2];
            iVar10 = *piVar23;
            uStack_188 = piVar23[-3];
            if (iVar10 < iVar11 >> 1) {
              uVar17 = *(uint64_t *)(piVar23 + -7);
            }
            else {
              uVar17 = *(uint64_t *)(piVar23 + -5);
            }
            lVar28 = (**(code **)(piVar23 + -9))(plVar22[5],uVar17);
            alStack_138[lVar29] = lVar28;
            iVar10 = iVar10 + 1;
            *piVar23 = iVar10;
            if (iVar11 <= iVar10) {
              piVar23[1] = piVar23[1] + 1;
              *piVar23 = 0;
              *(longlong *)(piVar23 + -7) = *(longlong *)(piVar23 + -5);
              if (piVar23[1] < (int)*plVar22) {
                *(longlong *)(piVar23 + -5) =
                     (longlong)*(int *)((longlong)plVar22 + 4) + *(longlong *)(piVar23 + -5);
              }
            }
            lVar29 = lVar29 + 1;
            piVar23 = piVar23 + 0xc;
            plVar22 = plVar22 + 0xc;
          } while (lVar29 < lVar9);
          puVar15 = (uint *)*param_1;
          lVar28 = alStack_138[2];
          lVar21 = alStack_138[0];
          lVar13 = alStack_138[3];
          lVar31 = alStack_138[1];
          uVar27 = uStack_174;
        }
        if ((int)uStack_170 < 3) {
          if (lStack_168 == 0) {
            if (puVar15[2] == 4) {
              if (*(int *)((longlong)param_1 + 0x484c) == 0) {
                uVar18 = 0;
                if (*puVar15 != 0) {
                  do {
                    bVar4 = *(byte *)(uVar18 + lVar13);
                    bVar5 = *(byte *)(uVar18 + lVar31);
                    bVar6 = *(byte *)(uVar18 + lVar28);
                    bVar7 = *(byte *)(uVar18 + lVar21);
                    uVar26 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar26;
                    pbVar20[1] = 0xff;
                    uVar16 = (uint)bVar5 * (uint)bVar4 + 0x80;
                    uVar24 = (uint)bVar6 * (uint)bVar4 + 0x80;
                    uVar25 = (uint)bVar7 * (uint)bVar4 + 0x80;
                    *pbVar20 = (byte)(((uVar16 >> 8) + uVar16 >> 8 & 0xff) * 0x96 +
                                      ((uVar24 >> 8) + uVar24 >> 8 & 0xff) * 0x1d +
                                      ((uVar25 >> 8) + uVar25 >> 8 & 0xff) * 0x4d >> 8);
                    pbVar20 = pbVar20 + uVar27;
                    puVar15 = (uint *)*param_1;
                  } while (uVar26 < *puVar15);
                }
              }
              else {
                if (*(int *)((longlong)param_1 + 0x484c) != 2) goto LAB_180424615;
                uVar18 = 0;
                if (*puVar15 != 0) {
                  do {
                    bVar4 = *(byte *)(uVar18 + lVar21);
                    bVar5 = *(byte *)(uVar18 + lVar13);
                    uVar24 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar24;
                    pbVar20[1] = 0xff;
                    uVar16 = (uint)(byte)~bVar4 * (uint)bVar5 + 0x80;
                    *pbVar20 = (byte)((uVar16 >> 8) + uVar16 >> 8);
                    pbVar20 = pbVar20 + uVar27;
                    puVar15 = (uint *)*param_1;
                  } while (uVar24 < *puVar15);
                }
              }
            }
            else {
LAB_180424615:
              if ((int)uStack_170 < 3) {
                uVar16 = 0;
                if (*puVar15 != 0) {
                  do {
                    pbVar20[uVar16] = *(byte *)((ulonglong)uVar16 + lVar21);
                    uVar16 = uVar16 + 1;
                    puVar15 = (uint *)*param_1;
                  } while (uVar16 < *puVar15);
                }
              }
              else {
                uVar16 = 0;
                if (*puVar15 != 0) {
                  do {
                    uVar18 = (ulonglong)uVar16;
                    uVar16 = uVar16 + 1;
                    *pbVar20 = *(byte *)(uVar18 + lVar21);
                    pbVar20[1] = 0xff;
                    pbVar20 = pbVar20 + 2;
                    puVar15 = (uint *)*param_1;
                  } while (uVar16 < *puVar15);
                }
              }
            }
          }
          else {
            uVar18 = 0;
            if ((int)uStack_170 < 3) {
              if (*puVar15 != 0) {
                do {
                  pbVar1 = (byte *)(uVar18 + lVar31);
                  pbVar2 = (byte *)(uVar18 + lVar28);
                  pbVar3 = (byte *)(uVar18 + lVar21);
                  uVar16 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar16;
                  *pbVar20 = (byte)((uint)*pbVar1 * 0x96 + (uint)*pbVar2 * 0x1d +
                                    (uint)*pbVar3 * 0x4d >> 8);
                  puVar15 = (uint *)*param_1;
                  pbVar20 = pbVar20 + 1;
                } while (uVar16 < *puVar15);
              }
            }
            else if (*puVar15 != 0) {
              do {
                bVar4 = *(byte *)(uVar18 + lVar31);
                bVar5 = *(byte *)(uVar18 + lVar28);
                bVar6 = *(byte *)(uVar18 + lVar21);
                uVar16 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar16;
                pbVar20[1] = 0xff;
                *pbVar20 = (byte)((uint)bVar4 * 0x96 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x4d >> 8)
                ;
                puVar15 = (uint *)*param_1;
                pbVar20 = pbVar20 + 2;
              } while (uVar16 < *puVar15);
            }
          }
        }
        else if (puVar15[2] == 3) {
          if (lStack_168 == 0) {
            uStack_188 = *puVar15;
            uStack_180 = uVar27;
            (*(code *)param_1[0x90f])(pbVar20,lVar21);
            puVar15 = (uint *)*param_1;
          }
          else {
            uVar16 = 0;
            if (*puVar15 == 0) goto LAB_18042444d;
            do {
              uVar18 = (ulonglong)uVar16;
              *pbVar20 = *(byte *)(uVar18 + lVar21);
              pbVar20[1] = *(byte *)(uVar18 + lVar31);
              uVar16 = uVar16 + 1;
              pbVar20[2] = *(byte *)(uVar18 + lVar28);
              pbVar20[3] = 0xff;
              pbVar20 = pbVar20 + uVar27;
              puVar15 = (uint *)*param_1;
            } while (uVar16 < *puVar15);
          }
        }
        else if (puVar15[2] == 4) {
          if (*(int *)((longlong)param_1 + 0x484c) == 0) {
            uVar18 = 0;
            if (*puVar15 == 0) goto LAB_18042444d;
            do {
              bVar4 = *(byte *)(uVar18 + lVar13);
              uVar16 = (uint)*(byte *)(uVar18 + lVar21) * (uint)bVar4 + 0x80;
              *pbVar20 = (byte)((uVar16 >> 8) + uVar16 >> 8);
              uVar16 = (uint)*(byte *)(uVar18 + lVar31) * (uint)bVar4 + 0x80;
              pbVar20[1] = (byte)((uVar16 >> 8) + uVar16 >> 8);
              bVar5 = *(byte *)(uVar18 + lVar28);
              uVar24 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar24;
              pbVar20[3] = 0xff;
              uVar16 = (uint)bVar5 * (uint)bVar4 + 0x80;
              pbVar20[2] = (byte)((uVar16 >> 8) + uVar16 >> 8);
              pbVar20 = pbVar20 + uVar27;
              puVar15 = (uint *)*param_1;
            } while (uVar24 < *puVar15);
          }
          else {
            uStack_188 = *puVar15;
            if (*(int *)((longlong)param_1 + 0x484c) == 2) {
              uStack_180 = uVar27;
              (*(code *)param_1[0x90f])();
              uVar18 = 0;
              if (*(int *)*param_1 == 0) goto LAB_18042444d;
              do {
                bVar4 = *(byte *)(uVar18 + lVar13);
                uVar24 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar24;
                uVar16 = (uint)(byte)~*pbVar20 * (uint)bVar4 + 0x80;
                *pbVar20 = (byte)((uVar16 >> 8) + uVar16 >> 8);
                uVar16 = (uint)(byte)~pbVar20[1] * (uint)bVar4 + 0x80;
                pbVar20[1] = (byte)((uVar16 >> 8) + uVar16 >> 8);
                uVar16 = (uint)(byte)~pbVar20[2] * (uint)bVar4 + 0x80;
                pbVar20[2] = (byte)((uVar16 >> 8) + uVar16 >> 8);
                pbVar20 = pbVar20 + uVar27;
                puVar15 = (uint *)*param_1;
              } while (uVar24 < *puVar15);
            }
            else {
              uStack_180 = uVar27;
              (*(code *)param_1[0x90f])(pbVar20,lVar21);
              puVar15 = (uint *)*param_1;
            }
          }
        }
        else {
          uVar16 = 0;
          if (*puVar15 != 0) {
            do {
              bVar4 = *(byte *)((ulonglong)uVar16 + lVar21);
              uVar16 = uVar16 + 1;
              pbVar20[2] = bVar4;
              pbVar20[1] = bVar4;
              *pbVar20 = bVar4;
              pbVar20[3] = 0xff;
              pbVar20 = pbVar20 + uVar27;
            } while (uVar16 < *(uint *)*param_1);
          }
LAB_18042444d:
          puVar15 = (uint *)*param_1;
        }
        uStack_178 = uStack_178 + 1;
        param_4 = puStack_150;
      } while (uStack_178 < puVar15[1]);
    }
    FUN_180422a20(param_1,puVar15[2],0);
    *puStack_148 = *(int32_t *)*param_1;
    *puStack_140 = *(int32_t *)(*param_1 + 4);
    if (param_4 != (int32_t *)0x0) {
      uVar30 = 1;
      if (2 < *(int *)(*param_1 + 8)) {
        uVar30 = 3;
      }
      *param_4 = uVar30;
    }
  }
FUN_1804246ed:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180423f14(int param_1,uint64_t param_2,uint *param_3)
void FUN_180423f14(int param_1,uint64_t param_2,uint *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  int *piVar18;
  byte *pbVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *unaff_RSI;
  int *piVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int32_t *unaff_R12;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  int32_t uVar31;
  longlong lVar32;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  int in_stack_00000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000050;
  int32_t *in_stack_00000058;
  int32_t *in_stack_00000060;
  int32_t *in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  ulonglong in_stack_00000150;
  ulonglong uVar17;
  
  uVar28 = 1;
  if (2 < param_1) {
    uVar28 = 3;
  }
  if ((param_1 == 3) &&
     (((int)unaff_RSI[0x90a] == 3 ||
      ((*(int *)((longlong)unaff_RSI + 0x484c) == 0 && ((int)unaff_RSI[0x909] == 0)))))) {
    bVar8 = true;
    lStack0000000000000040 = 1;
LAB_180423f77:
    if ((param_1 < 3) && (iVar23 = 1, !bVar8)) goto LAB_180423f85;
  }
  else {
    bVar8 = false;
    lStack0000000000000040 = 0;
    if (param_1 == 3) goto LAB_180423f77;
  }
  iVar23 = param_1;
LAB_180423f85:
  lVar29 = (longlong)iVar23;
  uStack0000000000000034 = uVar28;
  lStack0000000000000050 = lVar29;
  if (0 < iVar23) {
    lVar20 = 0;
    piVar18 = (int *)&stack0x000000a8;
    piVar22 = (int *)((longlong)unaff_RSI + 0x46a4);
    do {
      lVar12 = FUN_18062b420(_DAT_180c8ed18,*(int *)*unaff_RSI + 3,0x22);
      *(longlong *)(piVar22 + 0x11) = lVar12;
      if (lVar12 == 0) {
        FUN_180422a20();
        goto LAB_1804246bd;
      }
      lVar12 = unaff_RSI[0x8d1];
      piVar18[4] = 0;
      uVar17 = (longlong)(int)lVar12 / (longlong)*piVar22;
      iVar10 = (int)uVar17;
      *piVar18 = iVar10;
      iVar11 = *(int *)((longlong)unaff_RSI + 0x468c) / piVar22[1];
      piVar18[1] = iVar11;
      piVar18[3] = iVar11 >> 1;
      iVar23 = *(int *)*unaff_RSI;
      uVar14 = *(uint64_t *)(piVar22 + 0xb);
      *(uint64_t *)(piVar18 + -2) = uVar14;
      *(uint64_t *)(piVar18 + -4) = uVar14;
      piVar18[2] = (int)((ulonglong)(uint)(iVar23 + -1 + iVar10) / (uVar17 & 0xffffffff));
      if (iVar10 == 1) {
        if (iVar11 == 1) {
          pcVar13 = (code *)&UNK_1801792b0;
        }
        else {
          iVar23 = 1;
          if (iVar11 == 2) {
            pcVar13 = FUN_180423450;
          }
          else {
LAB_180424068:
            if ((iVar23 != 2) || (iVar11 != 2)) goto LAB_18042407c;
            pcVar13 = (code *)unaff_RSI[0x910];
          }
        }
      }
      else if (iVar10 == 2) {
        iVar23 = 2;
        if (iVar11 != 1) goto LAB_180424068;
        pcVar13 = FUN_180423690;
      }
      else {
LAB_18042407c:
        pcVar13 = (code *)&UNK_180423a20;
      }
      *(code **)(piVar18 + -6) = pcVar13;
      lVar20 = lVar20 + 1;
      piVar18 = piVar18 + 0xc;
      piVar22 = piVar22 + 0x18;
    } while (lVar20 < lVar29);
    param_3 = (uint *)*unaff_RSI;
  }
  uVar15 = param_3[1];
  uVar24 = *param_3;
  if ((((int)uVar24 < 0) ||
      (((uVar24 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar24) < (int)uVar28)) ||
       ((int)(uVar24 * uVar28) < 0)))) ||
     (((int)uVar15 < 0 ||
      (((uVar15 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar15) < (int)(uVar24 * uVar28))) ||
       (iVar23 = uVar24 * uVar15 * uVar28, iVar23 == 0x7fffffff)))))) {
    lVar29 = 0;
  }
  else {
    lVar29 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar23 + 1));
    param_3 = (uint *)*unaff_RSI;
  }
  if (lVar29 == 0) {
    FUN_180422a20();
  }
  else {
    uStack0000000000000030 = 0;
    lVar20 = in_stack_00000080;
    lVar12 = in_stack_00000070;
    lVar27 = in_stack_00000088;
    lVar32 = in_stack_00000078;
    if (param_3[1] != 0) {
      do {
        lVar9 = lStack0000000000000050;
        pbVar19 = (byte *)((ulonglong)(uStack0000000000000030 * uVar28 * *param_3) + lVar29);
        lVar30 = 0;
        if (0 < lStack0000000000000050) {
          plVar21 = unaff_RSI + 0x8d8;
          piVar22 = (int *)&stack0x000000b4;
          do {
            iVar10 = piVar22[-2];
            iVar23 = *piVar22;
            if (iVar23 < iVar10 >> 1) {
              uVar14 = *(uint64_t *)(piVar22 + -5);
              uVar16 = *(uint64_t *)(piVar22 + -7);
            }
            else {
              uVar14 = *(uint64_t *)(piVar22 + -7);
              uVar16 = *(uint64_t *)(piVar22 + -5);
            }
            uVar14 = (**(code **)(piVar22 + -9))(plVar21[5],uVar16,uVar14,piVar22[-1],piVar22[-3]);
            (&stack0x00000070)[lVar30] = uVar14;
            iVar23 = iVar23 + 1;
            *piVar22 = iVar23;
            if (iVar10 <= iVar23) {
              piVar22[1] = piVar22[1] + 1;
              *piVar22 = 0;
              *(longlong *)(piVar22 + -7) = *(longlong *)(piVar22 + -5);
              if (piVar22[1] < (int)*plVar21) {
                *(longlong *)(piVar22 + -5) =
                     (longlong)*(int *)((longlong)plVar21 + 4) + *(longlong *)(piVar22 + -5);
              }
            }
            lVar30 = lVar30 + 1;
            piVar22 = piVar22 + 0xc;
            plVar21 = plVar21 + 0xc;
          } while (lVar30 < lVar9);
          param_3 = (uint *)*unaff_RSI;
          lVar20 = in_stack_00000080;
          lVar12 = in_stack_00000070;
          lVar27 = in_stack_00000088;
          lVar32 = in_stack_00000078;
          uVar28 = uStack0000000000000034;
        }
        if (in_stack_00000038 < 3) {
          if (lStack0000000000000040 == 0) {
            if (param_3[2] == 4) {
              if (*(int *)((longlong)unaff_RSI + 0x484c) == 0) {
                uVar17 = 0;
                if (*param_3 != 0) {
                  do {
                    bVar4 = *(byte *)(uVar17 + lVar27);
                    bVar5 = *(byte *)(uVar17 + lVar32);
                    bVar6 = *(byte *)(uVar17 + lVar20);
                    bVar7 = *(byte *)(uVar17 + lVar12);
                    uVar26 = (int)uVar17 + 1;
                    uVar17 = (ulonglong)uVar26;
                    pbVar19[1] = 0xff;
                    uVar15 = (uint)bVar5 * (uint)bVar4 + 0x80;
                    uVar24 = (uint)bVar6 * (uint)bVar4 + 0x80;
                    uVar25 = (uint)bVar7 * (uint)bVar4 + 0x80;
                    *pbVar19 = (byte)(((uVar15 >> 8) + uVar15 >> 8 & 0xff) * 0x96 +
                                      ((uVar24 >> 8) + uVar24 >> 8 & 0xff) * 0x1d +
                                      ((uVar25 >> 8) + uVar25 >> 8 & 0xff) * 0x4d >> 8);
                    pbVar19 = pbVar19 + uVar28;
                    param_3 = (uint *)*unaff_RSI;
                  } while (uVar26 < *param_3);
                }
              }
              else {
                if (*(int *)((longlong)unaff_RSI + 0x484c) != 2) goto LAB_180424615;
                uVar17 = 0;
                if (*param_3 != 0) {
                  do {
                    bVar4 = *(byte *)(uVar17 + lVar12);
                    bVar5 = *(byte *)(uVar17 + lVar27);
                    uVar24 = (int)uVar17 + 1;
                    uVar17 = (ulonglong)uVar24;
                    pbVar19[1] = 0xff;
                    uVar15 = (uint)(byte)~bVar4 * (uint)bVar5 + 0x80;
                    *pbVar19 = (byte)((uVar15 >> 8) + uVar15 >> 8);
                    pbVar19 = pbVar19 + uVar28;
                    param_3 = (uint *)*unaff_RSI;
                  } while (uVar24 < *param_3);
                }
              }
            }
            else {
LAB_180424615:
              if (in_stack_00000038 < 3) {
                uVar15 = 0;
                if (*param_3 != 0) {
                  do {
                    pbVar19[uVar15] = *(byte *)((ulonglong)uVar15 + lVar12);
                    uVar15 = uVar15 + 1;
                    param_3 = (uint *)*unaff_RSI;
                  } while (uVar15 < *param_3);
                }
              }
              else {
                uVar15 = 0;
                if (*param_3 != 0) {
                  do {
                    uVar17 = (ulonglong)uVar15;
                    uVar15 = uVar15 + 1;
                    *pbVar19 = *(byte *)(uVar17 + lVar12);
                    pbVar19[1] = 0xff;
                    pbVar19 = pbVar19 + 2;
                    param_3 = (uint *)*unaff_RSI;
                  } while (uVar15 < *param_3);
                }
              }
            }
          }
          else {
            uVar17 = 0;
            if (in_stack_00000038 < 3) {
              if (*param_3 != 0) {
                do {
                  pbVar1 = (byte *)(uVar17 + lVar32);
                  pbVar2 = (byte *)(uVar17 + lVar20);
                  pbVar3 = (byte *)(uVar17 + lVar12);
                  uVar15 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar15;
                  *pbVar19 = (byte)((uint)*pbVar1 * 0x96 + (uint)*pbVar2 * 0x1d +
                                    (uint)*pbVar3 * 0x4d >> 8);
                  param_3 = (uint *)*unaff_RSI;
                  pbVar19 = pbVar19 + 1;
                } while (uVar15 < *param_3);
              }
            }
            else if (*param_3 != 0) {
              do {
                bVar4 = *(byte *)(uVar17 + lVar32);
                bVar5 = *(byte *)(uVar17 + lVar20);
                bVar6 = *(byte *)(uVar17 + lVar12);
                uVar15 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar15;
                pbVar19[1] = 0xff;
                *pbVar19 = (byte)((uint)bVar4 * 0x96 + (uint)bVar5 * 0x1d + (uint)bVar6 * 0x4d >> 8)
                ;
                param_3 = (uint *)*unaff_RSI;
                pbVar19 = pbVar19 + 2;
              } while (uVar15 < *param_3);
            }
          }
        }
        else if (param_3[2] == 3) {
          if (lStack0000000000000040 == 0) {
            (*(code *)unaff_RSI[0x90f])(pbVar19,lVar12,lVar32,lVar20,*param_3);
            param_3 = (uint *)*unaff_RSI;
          }
          else {
            uVar15 = 0;
            if (*param_3 == 0) goto LAB_18042444d;
            do {
              uVar17 = (ulonglong)uVar15;
              *pbVar19 = *(byte *)(uVar17 + lVar12);
              pbVar19[1] = *(byte *)(uVar17 + lVar32);
              uVar15 = uVar15 + 1;
              pbVar19[2] = *(byte *)(uVar17 + lVar20);
              pbVar19[3] = 0xff;
              pbVar19 = pbVar19 + uVar28;
              param_3 = (uint *)*unaff_RSI;
            } while (uVar15 < *param_3);
          }
        }
        else if (param_3[2] == 4) {
          if (*(int *)((longlong)unaff_RSI + 0x484c) == 0) {
            uVar17 = 0;
            if (*param_3 == 0) goto LAB_18042444d;
            do {
              bVar4 = *(byte *)(uVar17 + lVar27);
              uVar15 = (uint)*(byte *)(uVar17 + lVar12) * (uint)bVar4 + 0x80;
              *pbVar19 = (byte)((uVar15 >> 8) + uVar15 >> 8);
              uVar15 = (uint)*(byte *)(uVar17 + lVar32) * (uint)bVar4 + 0x80;
              pbVar19[1] = (byte)((uVar15 >> 8) + uVar15 >> 8);
              bVar5 = *(byte *)(uVar17 + lVar20);
              uVar24 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar24;
              pbVar19[3] = 0xff;
              uVar15 = (uint)bVar5 * (uint)bVar4 + 0x80;
              pbVar19[2] = (byte)((uVar15 >> 8) + uVar15 >> 8);
              pbVar19 = pbVar19 + uVar28;
              param_3 = (uint *)*unaff_RSI;
            } while (uVar24 < *param_3);
          }
          else if (*(int *)((longlong)unaff_RSI + 0x484c) == 2) {
            (*(code *)unaff_RSI[0x90f])();
            uVar17 = 0;
            if (*(int *)*unaff_RSI == 0) goto LAB_18042444d;
            do {
              bVar4 = *(byte *)(uVar17 + lVar27);
              uVar24 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar24;
              uVar15 = (uint)(byte)~*pbVar19 * (uint)bVar4 + 0x80;
              *pbVar19 = (byte)((uVar15 >> 8) + uVar15 >> 8);
              uVar15 = (uint)(byte)~pbVar19[1] * (uint)bVar4 + 0x80;
              pbVar19[1] = (byte)((uVar15 >> 8) + uVar15 >> 8);
              uVar15 = (uint)(byte)~pbVar19[2] * (uint)bVar4 + 0x80;
              pbVar19[2] = (byte)((uVar15 >> 8) + uVar15 >> 8);
              pbVar19 = pbVar19 + uVar28;
              param_3 = (uint *)*unaff_RSI;
            } while (uVar24 < *param_3);
          }
          else {
            (*(code *)unaff_RSI[0x90f])(pbVar19,lVar12,lVar32,lVar20,*param_3);
            param_3 = (uint *)*unaff_RSI;
          }
        }
        else {
          uVar15 = 0;
          if (*param_3 != 0) {
            do {
              bVar4 = *(byte *)((ulonglong)uVar15 + lVar12);
              uVar15 = uVar15 + 1;
              pbVar19[2] = bVar4;
              pbVar19[1] = bVar4;
              *pbVar19 = bVar4;
              pbVar19[3] = 0xff;
              pbVar19 = pbVar19 + uVar28;
            } while (uVar15 < *(uint *)*unaff_RSI);
          }
LAB_18042444d:
          param_3 = (uint *)*unaff_RSI;
        }
        uStack0000000000000030 = uStack0000000000000030 + 1;
        unaff_R12 = in_stack_00000058;
      } while (uStack0000000000000030 < param_3[1]);
    }
    FUN_180422a20();
    *in_stack_00000060 = *(int32_t *)*unaff_RSI;
    *in_stack_00000068 = *(int32_t *)(*unaff_RSI + 4);
    if (unaff_R12 != (int32_t *)0x0) {
      uVar31 = 1;
      if (2 < *(int *)(*unaff_RSI + 8)) {
        uVar31 = 3;
      }
      *unaff_R12 = uVar31;
    }
  }
LAB_1804246bd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804246ed(void)
void FUN_1804246ed(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



