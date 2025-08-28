#include "TaleWorlds.Native.Split.h"

// 03_rendering_part282.c - 2 个函数

// 函数: void FUN_18041fdfd(void)
void FUN_18041fdfd(void)

{
                    // WARNING: Subroutine does not return
  memset();
}



uint64_t FUN_18041ffb9(void)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBX;
  short *unaff_RSI;
  
  iVar2 = *(int *)(unaff_RBX + 0x4824);
  if (iVar2 < 1) {
    FUN_18041f7a0();
    iVar2 = *(int *)(unaff_RBX + 0x4824);
  }
  iVar1 = *(int *)(unaff_RBX + 0x4820);
  *(int *)(unaff_RBX + 0x4820) = iVar1 * 2;
  *(int *)(unaff_RBX + 0x4824) = iVar2 + -1;
  if (iVar1 < 0) {
    *unaff_RSI = *unaff_RSI + (1 << ((byte)*(int32_t *)(unaff_RBX + 0x4840) & 0x1f));
  }
  return 1;
}



uint64_t FUN_180420020(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  short sVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ushort uVar20;
  ushort uVar21;
  
  iVar8 = *(int *)(param_1 + 0x4834);
  uVar14 = (ulonglong)iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  iVar17 = *(int *)(param_1 + 0x4844);
  bVar6 = (byte)*(int32_t *)(param_1 + 0x4840);
  if (*(int *)(param_1 + 0x483c) != 0) {
    uVar20 = 1 << (bVar6 & 0x1f);
    uVar19 = uVar14;
    if (iVar17 == 0) {
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_18041f7a0(param_1);
        }
        uVar13 = *(uint *)(param_1 + 0x4820);
        bVar6 = *(byte *)((ulonglong)(uVar13 >> 0x17) + param_3);
        if (bVar6 == 0xff) {
          puVar1 = (uint *)(param_3 + 0x62c);
          iVar8 = 10;
          lVar18 = 10;
          uVar7 = *puVar1;
          while (uVar7 <= uVar13 >> 0x10) {
            iVar8 = iVar8 + 1;
            puVar1 = puVar1 + 1;
            lVar18 = lVar18 + 1;
            uVar7 = *puVar1;
          }
          iVar17 = *(int *)(param_1 + 0x4824);
          if (iVar8 == 0x11) goto LAB_18042065a;
          if (iVar17 < iVar8) {
            return 0;
          }
          bVar6 = (byte)iVar8;
          iVar17 = iVar17 - iVar8;
          uVar10 = (ulonglong)
                   (int)((uVar13 >> (0x20 - bVar6 & 0x1f) & *(uint *)(&unknown_var_1648_ptr + lVar18 * 4))
                        + *(int *)(param_3 + 0x64c + lVar18 * 4));
        }
        else {
          uVar10 = (ulonglong)bVar6;
          bVar6 = *(byte *)(uVar10 + 0x500 + param_3);
          if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar6) {
            return 0;
          }
          iVar17 = *(int *)(param_1 + 0x4824) - (uint)bVar6;
        }
        uVar13 = uVar13 << (bVar6 & 0x1f);
        *(int *)(param_1 + 0x4824) = iVar17;
        *(uint *)(param_1 + 0x4820) = uVar13;
        bVar6 = *(byte *)(uVar10 + 0x400 + param_3);
        bVar3 = bVar6 >> 4;
        uVar10 = (ulonglong)bVar3;
        uVar21 = bVar6 & 0xf;
        if ((bVar6 & 0xf) == 0) {
          if (bVar3 < 0xf) {
            iVar8 = (1 << bVar3) + -1;
            *(int *)(param_1 + 0x4844) = iVar8;
            if (bVar3 != 0) {
              if (iVar17 < (int)(uint)bVar3) {
                FUN_18041f7a0(param_1);
                iVar17 = *(int *)(param_1 + 0x4824);
                iVar8 = *(int *)(param_1 + 0x4844);
                uVar13 = *(uint *)(param_1 + 0x4820);
              }
              uVar7 = uVar13 << bVar3 | uVar13 >> 0x20 - bVar3;
              uVar13 = *(uint *)(&unknown_var_1648_ptr + uVar10 * 4);
              *(uint *)(param_1 + 0x4824) = iVar17 - (uint)bVar3;
              *(uint *)(param_1 + 0x4820) = ~uVar13 & uVar7;
              *(uint *)(param_1 + 0x4844) = (uVar13 & uVar7) + iVar8;
            }
            uVar10 = 0x40;
          }
        }
        else {
          if (uVar21 != 1) {
            return 0;
          }
          if (iVar17 < 1) {
            FUN_18041f7a0(param_1);
            iVar17 = *(int *)(param_1 + 0x4824);
            uVar13 = *(uint *)(param_1 + 0x4820);
          }
          *(uint *)(param_1 + 0x4820) = uVar13 * 2;
          *(int *)(param_1 + 0x4824) = iVar17 + -1;
          uVar21 = uVar20;
          if (-1 < (int)uVar13) {
            uVar21 = -uVar20;
          }
        }
        if (*(int *)(param_1 + 0x4838) < (int)uVar14) {
          return 1;
        }
        do {
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          puVar2 = (ushort *)(param_2 + (ulonglong)(byte)(&unknown_var_1504_ptr)[uVar19] * 2);
          uVar19 = uVar19 + 1;
          if (*puVar2 == 0) {
            if ((int)uVar10 == 0) {
              *puVar2 = uVar21;
              iVar8 = *(int *)(param_1 + 0x4838);
              break;
            }
            uVar10 = (ulonglong)((int)uVar10 - 1);
          }
          else {
            iVar8 = *(int *)(param_1 + 0x4824);
            if (iVar8 < 1) {
              FUN_18041f7a0(param_1);
              iVar8 = *(int *)(param_1 + 0x4824);
            }
            iVar17 = *(int *)(param_1 + 0x4820);
            *(int *)(param_1 + 0x4820) = iVar17 * 2;
            *(int *)(param_1 + 0x4824) = iVar8 + -1;
            if ((iVar17 < 0) && (uVar4 = *puVar2, (uVar20 & uVar4) == 0)) {
              if ((short)uVar4 < 1) {
                *puVar2 = uVar4 - uVar20;
              }
              else {
                *puVar2 = uVar4 + uVar20;
              }
            }
          }
          iVar8 = *(int *)(param_1 + 0x4838);
        } while ((int)uVar13 <= iVar8);
      } while ((int)uVar13 <= iVar8);
    }
    else {
      *(int *)(param_1 + 0x4844) = iVar17 + -1;
      if (iVar8 <= *(int *)(param_1 + 0x4838)) {
        pbVar9 = &unknown_var_1504_ptr + uVar14;
        do {
          puVar2 = (ushort *)(param_2 + (ulonglong)*pbVar9 * 2);
          if (*(short *)(param_2 + (ulonglong)*pbVar9 * 2) != 0) {
            iVar8 = *(int *)(param_1 + 0x4824);
            if (iVar8 < 1) {
              FUN_18041f7a0(param_1);
              iVar8 = *(int *)(param_1 + 0x4824);
            }
            iVar17 = *(int *)(param_1 + 0x4820);
            *(int *)(param_1 + 0x4820) = iVar17 * 2;
            *(int *)(param_1 + 0x4824) = iVar8 + -1;
            if ((iVar17 < 0) && (uVar21 = *puVar2, (uVar20 & uVar21) == 0)) {
              uVar4 = uVar20;
              if ((short)uVar21 < 1) {
                uVar4 = -uVar20;
              }
              *puVar2 = uVar21 + uVar4;
            }
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          pbVar9 = pbVar9 + 1;
        } while ((int)uVar13 <= *(int *)(param_1 + 0x4838));
        return 1;
      }
    }
    return 1;
  }
  if (iVar17 != 0) {
    *(int *)(param_1 + 0x4844) = iVar17 + -1;
    return 1;
  }
  do {
    iVar8 = *(int *)(param_1 + 0x4824);
    if (iVar8 < 0x10) {
      FUN_18041f7a0(param_1);
      iVar8 = *(int *)(param_1 + 0x4824);
    }
    uVar13 = *(uint *)(param_1 + 0x4820);
    sVar16 = *(short *)(param_4 + (ulonglong)(uVar13 >> 0x17) * 2);
    iVar12 = (int)uVar14;
    if (sVar16 == 0) {
      if (iVar8 < 0x10) {
        FUN_18041f7a0(param_1);
        uVar13 = *(uint *)(param_1 + 0x4820);
      }
      bVar3 = *(byte *)((ulonglong)(uVar13 >> 0x17) + param_3);
      if (bVar3 == 0xff) {
        puVar1 = (uint *)(param_3 + 0x62c);
        iVar8 = 10;
        lVar18 = 10;
        uVar7 = *puVar1;
        while (uVar7 <= uVar13 >> 0x10) {
          iVar8 = iVar8 + 1;
          puVar1 = puVar1 + 1;
          lVar18 = lVar18 + 1;
          uVar7 = *puVar1;
        }
        iVar17 = *(int *)(param_1 + 0x4824);
        if (iVar8 == 0x11) {
LAB_18042065a:
          *(int *)(param_1 + 0x4824) = iVar17 + -0x10;
          return 0;
        }
        if (iVar17 < iVar8) {
          return 0;
        }
        bVar3 = (byte)iVar8;
        iVar17 = iVar17 - iVar8;
        uVar14 = (ulonglong)
                 (int)((uVar13 >> (0x20 - bVar3 & 0x1f) & *(uint *)(&unknown_var_1648_ptr + lVar18 * 4)) +
                      *(int *)(param_3 + 0x64c + lVar18 * 4));
      }
      else {
        uVar14 = (ulonglong)bVar3;
        bVar3 = *(byte *)(uVar14 + 0x500 + param_3);
        if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar3) {
          return 0;
        }
        iVar17 = *(int *)(param_1 + 0x4824) - (uint)bVar3;
      }
      uVar13 = uVar13 << (bVar3 & 0x1f);
      *(int *)(param_1 + 0x4824) = iVar17;
      *(uint *)(param_1 + 0x4820) = uVar13;
      bVar3 = *(byte *)(uVar14 + 0x400 + param_3);
      bVar5 = bVar3 >> 4;
      uVar7 = bVar3 & 0xf;
      uVar11 = (uint)bVar5;
      if ((bVar3 & 0xf) != 0) {
        iVar12 = iVar12 + uVar11;
        bVar3 = (&unknown_var_1504_ptr)[iVar12];
        if (iVar17 < (int)uVar7) {
          FUN_18041f7a0(param_1);
          iVar17 = *(int *)(param_1 + 0x4824);
          uVar13 = *(uint *)(param_1 + 0x4820);
        }
        uVar15 = uVar13 << (sbyte)uVar7 | uVar13 >> 0x20 - (sbyte)uVar7;
        *(uint *)(param_1 + 0x4824) = iVar17 - uVar7;
        uVar11 = *(uint *)(&unknown_var_1648_ptr + (ulonglong)uVar7 * 4);
        uVar20 = *(ushort *)(&unknown_var_1584_ptr + (ulonglong)uVar7 * 4);
        *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar15;
        sVar16 = (~(ushort)((int)uVar13 >> 0x1f) & uVar20) + ((ushort)uVar11 & (ushort)uVar15);
        goto LAB_180420279;
      }
      if (uVar11 < 0xf) {
        iVar8 = 1 << bVar5;
        *(int *)(param_1 + 0x4844) = iVar8;
        if (bVar5 != 0) {
          if (iVar17 < (int)(uint)bVar5) {
            FUN_18041f7a0(param_1);
            iVar17 = *(int *)(param_1 + 0x4824);
            iVar8 = *(int *)(param_1 + 0x4844);
            uVar13 = *(uint *)(param_1 + 0x4820);
          }
          uVar7 = *(uint *)(&unknown_var_1648_ptr + (ulonglong)bVar5 * 4);
          *(uint *)(param_1 + 0x4824) = iVar17 - uVar11;
          uVar13 = uVar13 << bVar5 | uVar13 >> 0x20 - bVar5;
          *(uint *)(param_1 + 0x4820) = ~uVar7 & uVar13;
          iVar8 = (uVar7 & uVar13) + iVar8;
        }
        *(int *)(param_1 + 0x4844) = iVar8 + -1;
        return 1;
      }
      uVar13 = iVar12 + 0x10;
    }
    else {
      uVar7 = (int)sVar16 & 0xf;
      iVar12 = iVar12 + ((int)sVar16 >> 4 & 0xfU);
      *(uint *)(param_1 + 0x4820) = uVar13 << (sbyte)uVar7;
      *(uint *)(param_1 + 0x4824) = iVar8 - uVar7;
      sVar16 = (short)(char)((ushort)sVar16 >> 8);
      bVar3 = (&unknown_var_1504_ptr)[iVar12];
LAB_180420279:
      uVar13 = iVar12 + 1;
      *(short *)(param_2 + (ulonglong)bVar3 * 2) = sVar16 << (bVar6 & 0x1f);
    }
    uVar14 = (ulonglong)uVar13;
    if (*(int *)(param_1 + 0x4838) < (int)uVar13) {
      return 1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180420680(longlong param_1,int param_2,longlong param_3)
void FUN_180420680(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int8_t *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int aiStack_168 [2];
  int *piStack_160;
  longlong lStack_158;
  int iStack_150;
  int aiStack_148 [6];
  int aiStack_130 [2];
  int aiStack_128 [8];
  int aiStack_108 [8];
  int aiStack_e8 [8];
  int aiStack_c8 [8];
  int aiStack_a8 [8];
  int aiStack_88 [8];
  int aiStack_68 [8];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)aiStack_168;
  piVar7 = aiStack_128;
  psVar2 = (short *)(param_3 + 0x20);
  piStack_160 = (int *)0x4;
  do {
    if ((((psVar2[-8] == 0) && (*psVar2 == 0)) && (psVar2[8] == 0)) &&
       (((psVar2[0x10] == 0 && (psVar2[0x18] == 0)) && ((psVar2[0x20] == 0 && (psVar2[0x28] == 0))))
       )) {
      iVar3 = (int)psVar2[-0x10] << 2;
      piVar7[0x30] = iVar3;
      piVar7[0x28] = iVar3;
      piVar7[8] = iVar3;
      *piVar7 = iVar3;
      piVar7[-8] = iVar3;
      iVar10 = iVar3;
      iVar8 = iVar3;
    }
    else {
      iVar16 = (int)psVar2[8];
      iVar11 = (int)psVar2[0x28];
      iVar4 = (int)psVar2[0x18];
      iVar8 = ((int)psVar2[0x20] + (int)*psVar2) * 0x8a9;
      iVar10 = iVar8 + psVar2[0x20] * -0x1d8f;
      iVar8 = *psVar2 * 0xc3f + iVar8;
      iVar13 = ((int)psVar2[0x10] + (int)psVar2[-0x10]) * 0x1000;
      iVar3 = ((int)psVar2[-0x10] - (int)psVar2[0x10]) * 0x1000;
      iVar6 = (int)psVar2[-8];
      iVar15 = iVar13 + iVar8 + 0x200;
      iVar14 = iVar10 + iVar3 + 0x200;
      iVar17 = (iVar3 - iVar10) + 0x200;
      iVar9 = (iVar4 + iVar6 + iVar11 + iVar16) * 0x12d0;
      iVar5 = iVar9 + (iVar11 + iVar6) * -0xe65;
      iVar10 = (iVar4 + iVar6) * -0x63d;
      iVar9 = iVar9 + (iVar4 + iVar16) * -0x2901;
      iVar3 = (iVar11 + iVar16) * -0x1f62;
      iVar11 = iVar11 * 0x4c7 + iVar5 + iVar3;
      iVar5 = iVar6 * 0x1805 + iVar10 + iVar5;
      iVar6 = iVar16 * 0x312a + iVar3 + iVar9;
      iVar9 = iVar4 * 0x20da + iVar10 + iVar9;
      iVar8 = (iVar13 - iVar8) + 0x200;
      piVar7[-8] = iVar15 + iVar5 >> 10;
      *piVar7 = iVar14 + iVar6 >> 10;
      piVar7[8] = iVar9 + iVar17 >> 10;
      iVar3 = iVar8 + iVar11 >> 10;
      iVar10 = iVar17 - iVar9 >> 10;
      iVar8 = iVar8 - iVar11 >> 10;
      piVar7[0x30] = iVar15 - iVar5 >> 10;
      piVar7[0x28] = iVar14 - iVar6 >> 10;
    }
    piVar7[0x18] = iVar8;
    piVar7[0x20] = iVar10;
    piVar7[0x10] = iVar3;
    if ((((psVar2[-7] == 0) && (psVar2[1] == 0)) &&
        ((psVar2[9] == 0 && (((psVar2[0x11] == 0 && (psVar2[0x19] == 0)) && (psVar2[0x21] == 0))))))
       && (psVar2[0x29] == 0)) {
      iVar3 = (int)psVar2[-0xf] << 2;
      piVar7[0x31] = iVar3;
      piVar7[0x29] = iVar3;
      piVar7[9] = iVar3;
      piVar7[1] = iVar3;
      piVar7[-7] = iVar3;
      iVar10 = iVar3;
      iVar8 = iVar3;
    }
    else {
      iVar16 = (int)psVar2[9];
      iVar11 = (int)psVar2[0x29];
      iVar4 = (int)psVar2[0x19];
      iVar8 = ((int)psVar2[0x21] + (int)psVar2[1]) * 0x8a9;
      iVar10 = iVar8 + psVar2[0x21] * -0x1d8f;
      iVar8 = psVar2[1] * 0xc3f + iVar8;
      iVar13 = ((int)psVar2[0x11] + (int)psVar2[-0xf]) * 0x1000;
      iVar3 = ((int)psVar2[-0xf] - (int)psVar2[0x11]) * 0x1000;
      iVar6 = (int)psVar2[-7];
      iVar15 = iVar13 + iVar8 + 0x200;
      iVar14 = iVar10 + iVar3 + 0x200;
      iVar17 = (iVar3 - iVar10) + 0x200;
      iVar9 = (iVar4 + iVar6 + iVar11 + iVar16) * 0x12d0;
      iVar5 = iVar9 + (iVar11 + iVar6) * -0xe65;
      iVar10 = (iVar4 + iVar6) * -0x63d;
      iVar9 = iVar9 + (iVar4 + iVar16) * -0x2901;
      iVar3 = (iVar11 + iVar16) * -0x1f62;
      iVar11 = iVar11 * 0x4c7 + iVar5 + iVar3;
      iVar5 = iVar6 * 0x1805 + iVar10 + iVar5;
      iVar6 = iVar16 * 0x312a + iVar3 + iVar9;
      iVar9 = iVar4 * 0x20da + iVar10 + iVar9;
      iVar8 = (iVar13 - iVar8) + 0x200;
      piVar7[-7] = iVar15 + iVar5 >> 10;
      piVar7[1] = iVar14 + iVar6 >> 10;
      piVar7[9] = iVar9 + iVar17 >> 10;
      iVar3 = iVar8 + iVar11 >> 10;
      iVar10 = iVar17 - iVar9 >> 10;
      iVar8 = iVar8 - iVar11 >> 10;
      piVar7[0x31] = iVar15 - iVar5 >> 10;
      piVar7[0x29] = iVar14 - iVar6 >> 10;
    }
    piVar7[0x19] = iVar8;
    psVar2 = psVar2 + 2;
    piVar7[0x21] = iVar10;
    piVar7[0x11] = iVar3;
    piVar7 = piVar7 + 2;
    piStack_160 = (int *)((longlong)piStack_160 + -1);
  } while (piStack_160 != (int *)0x0);
  piStack_160 = aiStack_130;
  puVar12 = (int8_t *)(param_1 + 1);
  lStack_158 = 8;
  do {
    iVar10 = piStack_160[1];
    iVar8 = piStack_160[-1];
    iVar3 = piStack_160[-3];
    iVar4 = (*piStack_160 + piStack_160[-4]) * 0x8a9;
    iVar9 = iVar4 + *piStack_160 * -0x1d8f;
    iVar4 = piStack_160[-4] * 0xc3f + iVar4;
    iVar13 = (piStack_160[-6] - piStack_160[-2]) * 0x1000;
    iVar16 = (piStack_160[-2] + piStack_160[-6]) * 0x1000;
    iVar5 = piStack_160[-5];
    iVar6 = iVar16 + iVar4 + 0x1010000;
    iVar11 = iVar13 + iVar9 + 0x1010000;
    iVar14 = (iVar13 - iVar9) + 0x1010000;
    iVar17 = (iVar16 - iVar4) + 0x1010000;
    iVar13 = (iVar8 + iVar5 + iVar10 + iVar3) * 0x12d0;
    iVar16 = iVar13 + (iVar10 + iVar5) * -0xe65;
    iVar4 = (iVar8 + iVar5) * -0x63d;
    iVar13 = iVar13 + (iVar8 + iVar3) * -0x2901;
    iVar9 = (iVar10 + iVar3) * -0x1f62;
    iVar8 = iVar8 * 0x20da + iVar4 + iVar13;
    aiStack_168[0] = iVar5 * 0x1805 + iVar4 + iVar16;
    iVar10 = iVar10 * 0x4c7 + iVar16 + iVar9;
    iVar13 = iVar3 * 0x312a + iVar9 + iVar13;
    uVar1 = aiStack_168[0] + iVar6 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[-1] = (char)uVar1;
    uVar1 = iVar6 - aiStack_168[0] >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[6] = (char)uVar1;
    uVar1 = iVar11 + iVar13 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    *puVar12 = (char)uVar1;
    uVar1 = iVar11 - iVar13 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[5] = (char)uVar1;
    uVar1 = iVar14 + iVar8 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[1] = (char)uVar1;
    uVar1 = iVar14 - iVar8 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[4] = (char)uVar1;
    uVar1 = iVar17 + iVar10 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    puVar12[2] = (char)uVar1;
    uVar1 = iVar17 - iVar10 >> 0x11;
    if (0xff < uVar1) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    piStack_160 = piStack_160 + 8;
    puVar12[3] = (char)uVar1;
    puVar12 = puVar12 + param_2;
    lStack_158 = lStack_158 + -1;
  } while (lStack_158 != 0);
  iStack_150 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)aiStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



