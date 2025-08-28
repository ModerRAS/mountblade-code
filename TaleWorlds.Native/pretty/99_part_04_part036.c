#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part036.c - 6 个函数
// 函数: void function_2a6630(ushort *param_1,int64_t param_2,int param_3,int64_t param_4)
void function_2a6630(ushort *param_1,int64_t param_2,int param_3,int64_t param_4)
{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int64_t lStackX_20;
  int iStack_58;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar11 = (uint)(uVar2 >> 0xb) * 0xff + 0x10;
  uVar6 = (uVar2 >> 5 & 0x3f) * 0xff + 0x20;
  uVar8 = (uVar11 >> 5) + uVar11 >> 5;
  uVar11 = (uVar2 & 0x1f) * 0xff + 0x10;
  uVar15 = (uVar6 >> 6) + uVar6 >> 6;
  uVar16 = (uVar11 >> 5) + uVar11 >> 5;
  uVar11 = (uint)(uVar3 >> 0xb) * 0xff + 0x10;
  uVar13 = (uVar11 >> 5) + uVar11 >> 5;
  uVar11 = (uVar3 >> 5 & 0x3f) * 0xff + 0x20;
  uVar6 = (uVar3 & 0x1f) * 0xff + 0x10;
  uVar14 = (uVar11 >> 6) + uVar11 >> 6;
  uVar11 = *(uint *)(param_1 + 2);
  uVar6 = (uVar6 >> 5) + uVar6 >> 5;
  iStack_58 = 0;
  lStackX_20 = param_4;
  if (uVar3 < uVar2) {
    do {
      iVar7 = iStack_58 * 8;
      lVar10 = 0;
      puVar12 = (uint *)((uint64_t)(uint)(iStack_58 * param_3) + param_2);
      do {
        bVar1 = *(byte *)(lVar10 + lStackX_20);
        uVar9 = 0;
        uVar5 = uVar11 >> ((byte)iVar7 & 0x1f) & 3;
        if (uVar5 == 0) {
          uVar5 = ((uint)bVar1 << 8 | uVar8 & 0xff) << 8 | uVar15 & 0xff;
          uVar9 = uVar16 & 0xff;
LAB_1802a6872:
          uVar9 = uVar5 << 8 | uVar9;
        }
        else {
          if (uVar5 == 1) {
            uVar5 = ((uint)bVar1 << 8 | uVar13 & 0xff) << 8 | uVar14 & 0xff;
            uVar9 = uVar6 & 0xff;
            goto LAB_1802a6872;
          }
          if (uVar5 == 2) {
            uVar5 = (((uVar13 & 0xff) + (uVar8 & 0xff) * 2) / 3 & 0xff | (uint)bVar1 << 8) << 8 |
                    ((uVar14 & 0xff) + (uVar15 & 0xff) * 2) / 3 & 0xff;
            uVar9 = uVar6;
            uVar4 = uVar16;
LAB_1802a67ca:
            uVar9 = ((uVar9 & 0xff) + (uVar4 & 0xff) * 2) / 3 & 0xff;
            goto LAB_1802a6872;
          }
          if (uVar5 == 3) {
            uVar5 = (((uVar8 & 0xff) + (uVar13 & 0xff) * 2) / 3 & 0xff | (uint)bVar1 << 8) << 8 |
                    ((uVar15 & 0xff) + (uVar14 & 0xff) * 2) / 3 & 0xff;
            uVar9 = uVar16;
            uVar4 = uVar6;
            goto LAB_1802a67ca;
          }
        }
        *puVar12 = uVar9;
        iVar7 = iVar7 + 2;
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < 4);
      lStackX_20 = lStackX_20 + 4;
      iStack_58 = iStack_58 + 1;
    } while (iStack_58 < 4);
  }
  else {
    do {
      iVar7 = iStack_58 * 8;
      lVar10 = 0;
      puVar12 = (uint *)((uint64_t)(uint)(iStack_58 * param_3) + param_2);
      do {
        bVar1 = *(byte *)(param_4 + lVar10);
        uVar5 = 0;
        uVar9 = uVar11 >> ((byte)iVar7 & 0x1f) & 3;
        if (uVar9 == 0) {
          uVar9 = ((uint)bVar1 << 8 | uVar8 & 0xff) << 8 | uVar15 & 0xff;
          uVar5 = uVar16;
LAB_1802a697a:
          uVar5 = uVar9 << 8 | uVar5 & 0xff;
        }
        else {
          if (uVar9 == 1) {
            uVar9 = ((uint)bVar1 << 8 | uVar13 & 0xff) << 8 | uVar14 & 0xff;
            uVar5 = uVar6;
            goto LAB_1802a697a;
          }
          if (uVar9 == 2) {
            uVar5 = (((uVar13 & 0xff) + (uVar8 & 0xff) >> 1 | (uint)bVar1 << 8) << 8 |
                    (uVar14 & 0xff) + (uVar15 & 0xff) >> 1) << 8 |
                    (uVar6 & 0xff) + (uVar16 & 0xff) >> 1;
          }
          else if (uVar9 == 3) {
            uVar5 = (uint)bVar1 << 0x18;
          }
        }
        *puVar12 = uVar5;
        iVar7 = iVar7 + 2;
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < 4);
      param_4 = param_4 + 4;
      iStack_58 = iStack_58 + 1;
    } while (iStack_58 < 4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a69d0(uint param_1,int param_2,int param_3,byte *param_4,int64_t param_5)
void function_2a69d0(uint param_1,int param_2,int param_3,byte *param_4,int64_t param_5)
{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  int iStack_68;
  int iStack_64;
  char *pcStack_60;
  int64_t lStack_58;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_68;
  bVar5 = (byte)((ushort)*(int16_t *)param_4 >> 8);
  cStack_50 = (*param_4 & 0xf) * '\x11';
  cStack_4f = ((byte)*(int16_t *)param_4 >> 4) * '\x11';
  cStack_4e = (bVar5 & 0xf) * '\x11';
  cStack_4d = (bVar5 >> 4) * '\x11';
  cStack_4c = (param_4[2] & 0xf) * '\x11';
  bVar5 = (byte)((ushort)*(int16_t *)(param_4 + 2) >> 8);
  cStack_4b = ((byte)*(int16_t *)(param_4 + 2) >> 4) * '\x11';
  cStack_4a = (bVar5 & 0xf) * '\x11';
  cStack_49 = (bVar5 >> 4) * '\x11';
  cStack_48 = (param_4[4] & 0xf) * '\x11';
  bVar5 = (byte)((ushort)*(int16_t *)(param_4 + 4) >> 8);
  cStack_47 = ((byte)*(int16_t *)(param_4 + 4) >> 4) * '\x11';
  cStack_46 = (bVar5 & 0xf) * '\x11';
  cStack_45 = (bVar5 >> 4) * '\x11';
  cStack_44 = (param_4[6] & 0xf) * '\x11';
  uVar1 = *(ushort *)(param_4 + 10);
  uVar3 = *(uint *)(param_4 + 0xc);
  bVar5 = (byte)((ushort)*(int16_t *)(param_4 + 6) >> 8);
  cStack_43 = ((byte)*(int16_t *)(param_4 + 6) >> 4) * '\x11';
  cStack_42 = (bVar5 & 0xf) * '\x11';
  uVar2 = *(ushort *)(param_4 + 8);
  cStack_41 = (bVar5 >> 4) * '\x11';
  lStack_58 = (uint64_t)(uint)(param_3 * param_2) + param_5 + (uint64_t)param_1 * 4;
  uVar7 = (uint)(uVar2 >> 0xb) * 0xff + 0x10;
  uVar15 = (uVar7 >> 5) + uVar7 >> 5;
  uVar8 = (uVar2 >> 5 & 0x3f) * 0xff + 0x20;
  uVar7 = (uVar2 & 0x1f) * 0xff + 0x10;
  uVar9 = (uVar8 >> 6) + uVar8 >> 6;
  uVar11 = (uVar7 >> 5) + uVar7 >> 5;
  uVar7 = (uint)(uVar1 >> 0xb) * 0xff + 0x10;
  uVar10 = (uVar7 >> 5) + uVar7 >> 5;
  uVar8 = (uVar1 >> 5 & 0x3f) * 0xff + 0x20;
  uVar7 = (uVar1 & 0x1f) * 0xff + 0x10;
  uVar8 = (uVar8 >> 6) + uVar8 >> 6;
  uVar7 = (uVar7 >> 5) + uVar7 >> 5;
  iStack_68 = 0;
  if (uVar1 < uVar2) {
    pcStack_60 = &cStack_50;
    do {
      iVar16 = iStack_68 * 8;
      lVar14 = 0;
      puVar12 = (uint *)((uint64_t)(uint)(iStack_68 * param_3) + lStack_58);
      do {
        bVar5 = pcStack_60[lVar14];
        uVar13 = 0;
        uVar6 = uVar3 >> ((byte)iVar16 & 0x1f) & 3;
        if (uVar6 == 0) {
          uVar6 = ((uint)bVar5 << 8 | uVar15 & 0xff) << 8 | uVar9 & 0xff;
          uVar13 = uVar11 & 0xff;
LAB_1802a6d46:
          uVar13 = uVar6 << 8 | uVar13;
        }
        else {
          if (uVar6 == 1) {
            uVar6 = ((uint)bVar5 << 8 | uVar10 & 0xff) << 8 | uVar8 & 0xff;
            uVar13 = uVar7 & 0xff;
            goto LAB_1802a6d46;
          }
          if (uVar6 == 2) {
            uVar6 = (((uVar10 & 0xff) + (uVar15 & 0xff) * 2) / 3 & 0xff | (uint)bVar5 << 8) << 8 |
                    ((uVar8 & 0xff) + (uVar9 & 0xff) * 2) / 3 & 0xff;
            uVar13 = uVar11;
            uVar4 = uVar7;
LAB_1802a6ca7:
            uVar13 = ((uVar4 & 0xff) + (uVar13 & 0xff) * 2) / 3 & 0xff;
            goto LAB_1802a6d46;
          }
          if (uVar6 == 3) {
            uVar6 = (((uVar15 & 0xff) + (uVar10 & 0xff) * 2) / 3 & 0xff | (uint)bVar5 << 8) << 8 |
                    ((uVar9 & 0xff) + (uVar8 & 0xff) * 2) / 3 & 0xff;
            uVar13 = uVar7;
            uVar4 = uVar11;
            goto LAB_1802a6ca7;
          }
        }
        *puVar12 = uVar13;
        iVar16 = iVar16 + 2;
        puVar12 = puVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < 4);
      pcStack_60 = pcStack_60 + 4;
      iStack_68 = iStack_68 + 1;
    } while (iStack_68 < 4);
  }
  else {
    pcVar17 = &cStack_50;
    do {
      iVar16 = iStack_68 * 8;
      lVar14 = 0;
      puVar12 = (uint *)((uint64_t)(uint)(iStack_68 * param_3) + lStack_58);
      do {
        bVar5 = pcVar17[lVar14];
        uVar13 = 0;
        uVar6 = uVar3 >> ((byte)iVar16 & 0x1f) & 3;
        if (uVar6 == 0) {
          uVar13 = ((uint)bVar5 << 8 | uVar15 & 0xff) << 8 | uVar9 & 0xff;
          uVar6 = uVar11;
LAB_1802a6e48:
          uVar13 = uVar13 << 8 | uVar6 & 0xff;
        }
        else {
          if (uVar6 == 1) {
            uVar13 = ((uint)bVar5 << 8 | uVar10 & 0xff) << 8 | uVar8 & 0xff;
            uVar6 = uVar7;
            goto LAB_1802a6e48;
          }
          if (uVar6 == 2) {
            uVar13 = (((uVar10 & 0xff) + (uVar15 & 0xff) >> 1 | (uint)bVar5 << 8) << 8 |
                     (uVar8 & 0xff) + (uVar9 & 0xff) >> 1) << 8 |
                     (uVar7 & 0xff) + (uVar11 & 0xff) >> 1;
          }
          else if (uVar6 == 3) {
            uVar13 = (uint)bVar5 << 0x18;
          }
        }
        *puVar12 = uVar13;
        iVar16 = iVar16 + 2;
        puVar12 = puVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < 4);
      pcVar17 = pcVar17 + 4;
      iStack_68 = iStack_68 + 1;
    } while (iStack_68 < 4);
  }
  iStack_64 = param_3;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)&iStack_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a6ea0(uint param_1,int param_2,int param_3,byte *param_4,int64_t param_5)
void function_2a6ea0(uint param_1,int param_2,int param_3,byte *param_4,int64_t param_5)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint3 *puVar16;
  uint64_t uVar17;
  uint uVar18;
  uint uVar19;
  int iStack_88;
  uint local_var_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint local_var_74;
  byte *pbStack_70;
  int64_t lStack_68;
  uint64_t local_var_60;
  byte abStack_58 [16];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_88;
  bVar1 = *param_4;
  bVar2 = param_4[1];
  puVar16 = (uint3 *)(param_4 + 2);
  lVar10 = 2;
  lStack_68 = param_5;
  pbVar15 = abStack_58 + 2;
  do {
    uVar6 = *puVar16;
    puVar16 = (uint3 *)((int64_t)puVar16 + 3);
    pbVar15[-2] = (byte)uVar6 & 7;
    pbVar15[-1] = (byte)(uVar6 >> 3) & 7;
    *pbVar15 = (byte)(uVar6 >> 6) & 7;
    pbVar15[1] = (byte)(uVar6 >> 9) & 7;
    pbVar15[2] = (byte)(uVar6 >> 0xc) & 7;
    pbVar15[3] = (byte)(uVar6 >> 0xf) & 7;
    bVar3 = (byte)(uVar6 >> 0x10);
    pbVar15[4] = bVar3 >> 2 & 7;
    pbVar15[5] = bVar3 >> 5;
    lVar10 = lVar10 + -1;
    pbVar15 = pbVar15 + 8;
  } while (lVar10 != 0);
  uVar4 = *(ushort *)(param_4 + 8);
  uVar7 = (uint)(uVar4 >> 0xb) * 0xff + 0x10;
  uVar5 = *(ushort *)(param_4 + 10);
  uVar12 = (uVar7 >> 5) + uVar7 >> 5;
  uVar8 = (uVar4 >> 5 & 0x3f) * 0xff + 0x20;
  uVar7 = (uVar4 & 0x1f) * 0xff + 0x10;
  uVar11 = (uVar8 >> 6) + uVar8 >> 6;
  uVar18 = (uVar7 >> 5) + uVar7 >> 5;
  uVar7 = (uint)(uVar5 >> 0xb) * 0xff + 0x10;
  pbStack_70 = abStack_58;
  uVar19 = (uVar7 >> 5) + uVar7 >> 5;
  uVar8 = (uVar5 >> 5 & 0x3f) * 0xff + 0x20;
  uVar7 = (uVar5 & 0x1f) * 0xff + 0x10;
  uVar8 = (uVar8 >> 6) + uVar8 >> 6;
  local_var_74 = *(uint *)(param_4 + 0xc);
  uVar7 = (uVar7 >> 5) + uVar7 >> 5;
  iStack_88 = 0;
  do {
    lVar10 = 0;
    local_var_60 = (uint64_t)(uint)((param_2 + iStack_88) * param_3);
    iStack_78 = iStack_88 * 4 - param_1;
    uVar17 = (uint64_t)param_1;
    do {
      bVar3 = pbStack_70[lVar10];
      if (bVar3 == 0) {
        uVar13 = (uint)bVar1;
      }
      else if (bVar3 == 1) {
        uVar13 = (uint)bVar2;
      }
      else {
        uVar13 = (uint)bVar3;
        if (bVar2 < bVar1) {
          uVar13 = (int)((8 - uVar13) * (uint)bVar1 + (uVar13 - 1) * (uint)bVar2) / 7;
        }
        else if (uVar13 == 6) {
          uVar13 = 0;
        }
        else if (uVar13 == 7) {
          uVar13 = 0xff;
        }
        else {
          uVar13 = (int)((6 - uVar13) * (uint)bVar1 + (uVar13 - 1) * (uint)bVar2) / 5;
        }
      }
      uVar14 = 0;
      uVar9 = local_var_74 >> (((char)iStack_78 + (char)uVar17) * '\x02' & 0x1fU) & 3;
      if (uVar9 == 0) {
        uVar13 = ((uVar13 & 0xff) << 8 | uVar12 & 0xff) << 8 | uVar11 & 0xff;
        uVar14 = uVar18 & 0xff;
LAB_1802a7223:
        uVar14 = uVar13 << 8 | uVar14;
      }
      else {
        if (uVar9 == 1) {
          uVar13 = ((uVar13 & 0xff) << 8 | uVar19 & 0xff) << 8 | uVar8 & 0xff;
          uVar14 = uVar7 & 0xff;
          goto LAB_1802a7223;
        }
        if (uVar9 == 2) {
          uVar13 = (((uVar19 & 0xff) + (uVar12 & 0xff) * 2) / 3 & 0xff | (uVar13 & 0xff) << 8) << 8
                   | ((uVar8 & 0xff) + (uVar11 & 0xff) * 2) / 3 & 0xff;
          uVar14 = ((uVar7 & 0xff) + (uVar18 & 0xff) * 2) / 3 & 0xff;
          goto LAB_1802a7223;
        }
        if (uVar9 == 3) {
          uVar13 = (((uVar12 & 0xff) + (uVar19 & 0xff) * 2) / 3 & 0xff | (uVar13 & 0xff) << 8) << 8
                   | ((uVar11 & 0xff) + (uVar8 & 0xff) * 2) / 3 & 0xff;
          uVar14 = ((uVar18 & 0xff) + (uVar7 & 0xff) * 2) / 3 & 0xff;
          goto LAB_1802a7223;
        }
      }
      lVar10 = lVar10 + 1;
      *(uint *)(param_5 + uVar17 * 4 + local_var_60) = uVar14;
      uVar17 = (uint64_t)((int)uVar17 + 1);
    } while (lVar10 < 4);
    pbStack_70 = pbStack_70 + 4;
    iStack_88 = iStack_88 + 1;
    if (3 < iStack_88) {
      local_var_84 = param_1;
      iStack_80 = param_2;
      iStack_7c = param_3;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)&iStack_88);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a72a0(uint param_1,int param_2,uint param_3,uint64_t param_4,byte *param_5,
void function_2a72a0(uint param_1,int param_2,uint param_3,uint64_t param_4,byte *param_5,
                  int64_t param_6)
{
  byte bVar1;
  byte bVar2;
  uint3 uVar3;
  byte *pbVar4;
  float *pfVar5;
  uint3 *puVar6;
  int64_t lVar7;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  byte abStack_48 [16];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)afStack_68;
  afStack_68[0] = (float)*param_5 * 0.003921569;
  afStack_68[1] = (float)param_5[1] * 0.003921569;
  if (afStack_68[0] <= afStack_68[1]) {
    afStack_68[2] = afStack_68[1] * 0.2 + afStack_68[0] * 0.8;
    afStack_68[3] = afStack_68[1] * 0.4 + afStack_68[0] * 0.6;
    fStack_50 = 0.0;
    fStack_58 = afStack_68[0] * 0.4 + afStack_68[1] * 0.6;
    fStack_4c = 1.0;
    fStack_54 = afStack_68[1] * 0.8 + afStack_68[0] * 0.2;
  }
  else {
    afStack_68[2] = afStack_68[0] * 0.85714287 + afStack_68[1] * 0.14285715;
    afStack_68[3] = afStack_68[0] * 0.71428573 + afStack_68[1] * 0.2857143;
    fStack_58 = afStack_68[1] * 0.42857143 + afStack_68[0] * 0.5714286;
    fStack_54 = afStack_68[0] * 0.42857143 + afStack_68[1] * 0.5714286;
    fStack_50 = afStack_68[1] * 0.71428573 + afStack_68[0] * 0.2857143;
    fStack_4c = afStack_68[1] * 0.85714287 + afStack_68[0] * 0.14285715;
  }
  lVar7 = 2;
  pfVar5 = (float *)((uint64_t)(param_3 * param_2) + param_6 + (uint64_t)param_1 * 4);
  pbVar4 = abStack_48 + 2;
  puVar6 = (uint3 *)(param_5 + 2);
  do {
    uVar3 = *puVar6;
    pbVar4[-2] = (byte)uVar3 & 7;
    pbVar4[-1] = (byte)(uVar3 >> 3) & 7;
    *pbVar4 = (byte)(uVar3 >> 6) & 7;
    pbVar4[1] = (byte)(uVar3 >> 9) & 7;
    pbVar4[2] = (byte)(uVar3 >> 0xc) & 7;
    pbVar4[3] = (byte)(uVar3 >> 0xf) & 7;
    bVar1 = (byte)(uVar3 >> 0x10);
    pbVar4[4] = bVar1 >> 2 & 7;
    pbVar4[5] = bVar1 >> 5;
    lVar7 = lVar7 + -1;
    pbVar4 = pbVar4 + 8;
    puVar6 = (uint3 *)((int64_t)puVar6 + 3);
  } while (lVar7 != 0);
  lVar7 = 0;
  do {
    bVar1 = abStack_48[lVar7 * 4 + 1];
    *pfVar5 = afStack_68[abStack_48[lVar7 * 4]];
    bVar2 = abStack_48[lVar7 * 4 + 2];
    pfVar5[1] = afStack_68[bVar1];
    bVar1 = abStack_48[lVar7 * 4 + 3];
    lVar7 = lVar7 + 1;
    pfVar5[2] = afStack_68[bVar2];
    pfVar5[3] = afStack_68[bVar1];
    pfVar5 = (float *)((int64_t)pfVar5 + (uint64_t)param_3);
  } while (lVar7 < 4);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)afStack_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a7570(uint param_1,int param_2,int param_3,uint64_t param_4,int64_t param_5,
void function_2a7570(uint param_1,int param_2,int param_3,uint64_t param_4,int64_t param_5,
                  int64_t param_6)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t stack_array_e8 [32];
  int64_t lStack_c8;
  int32_t *plocal_var_c0;
  int32_t stack_array_b8 [32];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  plocal_var_c0 = stack_array_b8;
  lStack_c8 = param_5;
  function_2a72a0(0,0,0x10);
  plocal_var_c0 = stack_array_b8 + 0x10;
  lStack_c8 = param_5 + 8;
  function_2a72a0(0);
  lVar4 = 0;
  do {
    uVar3 = (uint64_t)(uint)(param_2 * param_3);
    lVar1 = (uint64_t)(uint)(param_2 * param_3) + (uint64_t)param_1 * 8;
    *(int32_t *)(lVar1 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4);
    *(int32_t *)(lVar1 + 4 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 0x40);
    lVar1 = uVar3 + (uint64_t)(param_1 + 1) * 8;
    *(int32_t *)(lVar1 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 4);
    *(int32_t *)(lVar1 + 4 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 0x44);
    lVar1 = uVar3 + (uint64_t)(param_1 + 2) * 8;
    *(int32_t *)(lVar1 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 8);
    *(int32_t *)(lVar1 + 4 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 0x48);
    lVar1 = uVar3 + (uint64_t)(param_1 + 3) * 8;
    *(int32_t *)(lVar1 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar4 + 0xc);
    lVar2 = lVar4 + 0x4c;
    lVar4 = lVar4 + 0x10;
    *(int32_t *)(lVar1 + 4 + param_6) = *(int32_t *)((int64_t)stack_array_b8 + lVar2);
    param_2 = param_2 + 1;
  } while (lVar4 < 0x40);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a7680(int64_t param_1,uint64_t *param_2)
void function_2a7680(int64_t param_1,uint64_t *param_2)
{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void *puVar12;
  uint uVar13;
  int8_t stack_array_418 [48];
  void *plocal_var_3e8;
  void *plocal_var_3e0;
  int32_t local_var_3d8;
  uint64_t local_var_3d0;
  int16_t stack_array_3c8 [2];
  int16_t stack_array_3c4 [2];
  int aiStack_3c0 [2];
  uint64_t local_var_3b8;
  void *plocal_var_3b0;
  int64_t lStack_3a8;
  uint local_var_3a0;
  int32_t local_var_398;
  uint64_t local_var_388;
  int8_t stack_array_378 [16];
  int32_t local_var_368;
  int32_t local_var_364;
  int32_t local_var_360;
  int32_t local_var_35c;
  uint64_t local_var_358;
  uint64_t local_var_350;
  int32_t local_var_348;
  int32_t local_var_344;
  int8_t stack_array_340 [128];
  int8_t *plocal_var_2c0;
  int8_t *plocal_var_2b8;
  int8_t *plocal_var_2b0;
  int8_t *plocal_var_2a8;
  void *aplocal_var_298 [6];
  void *aplocal_var_268 [68];
  uint64_t local_var_48;
  local_var_388 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_418;
  uVar8 = 0;
  *(int32_t *)((int64_t)param_2 + 0x62) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x54) = 0;
  *(int32_t *)((int64_t)param_2 + 0x5c) = 0;
  *(int16_t *)(param_2 + 0xc) = 0;
  *(int8_t *)((int64_t)param_2 + 0x66) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x14) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x1c) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x24) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x2c) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x34) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x3c) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x44) = 0;
  *(uint64_t *)((int64_t)param_2 + 0x4c) = 0;
  plocal_var_3e8 = &system_data_buffer_ptr;
  local_var_3d0 = 0;
  plocal_var_3e0 = (void *)0x0;
  local_var_3d8 = 0;
  cVar3 = RenderingSystem_RenderQueue();
  if (cVar3 == '\0') {
    puVar12 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar12 = *(void **)(param_1 + 8);
    }
    function_6272a0(&rendering_buffer_2984_ptr,puVar12);
  }
  else {
    puVar12 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar12 = *(void **)(param_1 + 8);
    }
    (**(code **)(plocal_var_3e8 + 0x10))(&plocal_var_3e8,puVar12);
    lVar5 = SystemCore_EncryptionEngine(aplocal_var_268,&plocal_var_3e8);
    puVar12 = &system_buffer_ptr;
    if (*(void **)(lVar5 + 8) != (void *)0x0) {
      puVar12 = *(void **)(lVar5 + 8);
    }
    (**(code **)(plocal_var_3e8 + 0x10))(&plocal_var_3e8,puVar12);
    aplocal_var_268[0] = &system_state_ptr;
    uVar6 = function_627490(aplocal_var_298,&plocal_var_3e8);
    SystemCore_EncryptionEngine0(&plocal_var_3b0,uVar6);
    aplocal_var_298[0] = &system_state_ptr;
    uVar11 = uVar8;
    uVar10 = uVar8;
    if (local_var_3a0 != 0) {
      do {
        cVar3 = *(char *)(uVar11 + lStack_3a8);
        if ((byte)(cVar3 + 0xbfU) < 0x1a) {
          *(char *)(uVar11 + lStack_3a8) = cVar3 + ' ';
        }
        uVar13 = (int)uVar10 + 1;
        uVar11 = uVar11 + 1;
        uVar10 = (uint64_t)uVar13;
      } while (uVar13 < local_var_3a0);
    }
    uVar11 = uVar8;
    if (local_var_3a0 == 4) {
      do {
        pcVar1 = (char *)(lStack_3a8 + uVar11);
        uVar9 = uVar11 + 1;
        pcVar2 = &processed_var_7064_ptr + uVar11;
        uVar10 = uVar8;
        if (*pcVar1 != *pcVar2) break;
        uVar11 = uVar9;
      } while (uVar9 != 5);
      do {
        uVar11 = uVar10 + 1;
        if (*(char *)(lStack_3a8 + uVar10) != (&system_data_2bf0)[uVar10]) {
          if (*pcVar1 != *pcVar2) goto LAB_1802a796e;
          puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,&processed_var_7715_ptr);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar12 = &system_buffer_ptr;
          if (plocal_var_3e0 != (void *)0x0) {
            puVar12 = plocal_var_3e0;
          }
          iVar4 = SystemCore_Validator(puVar7,puVar12,&processed_var_4880_ptr);
          if (iVar4 == 0) {
            uVar8 = function_62e090(puVar7);
            *(int32_t *)(param_2 + 0xc) = 0x10001;
            *(int32_t *)((int64_t)param_2 + 0x5c) = 0;
            *(int32_t *)((int64_t)param_2 + 0x54) = 0;
            *(int16_t *)((int64_t)param_2 + 100) = 0x102;
            function_2a1bc0(param_2);
            if (param_2[1] == (uVar8 & 0xffffffff)) {
              fread(*param_2,param_2[1],1,puVar7[1]);
              function_62de90(puVar7);
              if (puVar7[1] != 0) {
                fclose();
                puVar7[1] = 0;
                LOCK();
                SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
                UNLOCK();
              }
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(puVar7);
            }
            SystemCore_Allocator(&processed_var_9696_ptr);
// WARNING: Subroutine does not return
            memset(*param_2,0,param_2[1]);
          }
          goto LAB_1802a7b44;
        }
        uVar10 = uVar11;
      } while (uVar11 != 5);
      cVar3 = function_41d4f0(&plocal_var_3e8,param_2);
      if (cVar3 != '\0') {
        cVar3 = Function_8fa265fb(*(int32_t *)((int64_t)param_2 + 0x54));
        if (cVar3 != '\0') {
          *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x8000;
        }
        *(uint64_t *)((int64_t)param_2 + 0x14) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x1c) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x24) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x2c) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x34) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x3c) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x44) = 0;
        *(uint64_t *)((int64_t)param_2 + 0x4c) = 0;
        uVar6 = Function_62b399c0();
        strcpy_s((int64_t)param_2 + 0x14,0x40,uVar6);
      }
    }
    else {
LAB_1802a796e:
      puVar12 = &system_buffer_ptr;
      if (plocal_var_3e0 != (void *)0x0) {
        puVar12 = plocal_var_3e0;
      }
      iVar4 = fopen_s(&local_var_3b8,puVar12,&processed_var_4880_ptr);
      uVar11 = local_var_3b8;
      if (iVar4 != 0) {
        uVar11 = uVar8;
      }
      local_var_3b8 = uVar11;
      if (uVar11 != 0) {
        local_var_368 = system_system_control_memory;
        local_var_364 = uRam0000000180bf5c1c;
        local_var_360 = uRam0000000180bf5c20;
        local_var_35c = uRam0000000180bf5c24;
        local_var_358 = system_system_control_memory;
        local_var_344 = 0x80;
        local_var_348 = 1;
        plocal_var_2b0 = stack_array_340;
        local_var_350 = uVar11;
        iVar4 = Function_6f585197(uVar11,stack_array_340,0x80);
        if (iVar4 == 0) {
          local_var_348 = 0;
          plocal_var_2b8 = stack_array_340 + 1;
          stack_array_340[0] = 0;
        }
        else {
          plocal_var_2b8 = stack_array_340 + iVar4;
        }
        plocal_var_2c0 = stack_array_340;
        plocal_var_2a8 = plocal_var_2b8;
        lVar5 = function_41ec30(stack_array_378,stack_array_3c8,stack_array_3c4,aiStack_3c0);
        if (lVar5 != 0) {
          fseek(uVar11,(int)plocal_var_2c0 - (int)plocal_var_2b8,1);
        }
        fclose(uVar11);
        if (lVar5 != 0) {
          *(int16_t *)((int64_t)param_2 + 0x5c) = stack_array_3c8[0];
          *(int16_t *)((int64_t)param_2 + 0x5e) = stack_array_3c4[0];
          *(int32_t *)(param_2 + 0xc) = 0x10001;
          *(int16_t *)((int64_t)param_2 + 100) = 0x102;
          if (aiStack_3c0[0] == 1) {
            *(int32_t *)((int64_t)param_2 + 0x54) = 0xb;
          }
          else {
            if (aiStack_3c0[0] == 2) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(lVar5);
            }
            if (aiStack_3c0[0] == 3) {
              *(int32_t *)((int64_t)param_2 + 0x54) = 0x29;
            }
            else if (aiStack_3c0[0] == 4) {
              *(int32_t *)((int64_t)param_2 + 0x54) = 7;
              *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x8000;
            }
          }
          function_2a1bc0(param_2);
// WARNING: Subroutine does not return
          memcpy(*param_2,lVar5,param_2[1]);
        }
      }
    }
LAB_1802a7b44:
    plocal_var_3b0 = &system_data_buffer_ptr;
    if (lStack_3a8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_3a8 = 0;
    local_var_398 = 0;
    plocal_var_3b0 = &system_state_ptr;
  }
  plocal_var_3e8 = &system_data_buffer_ptr;
  if (plocal_var_3e0 == (void *)0x0) {
    plocal_var_3e0 = (void *)0x0;
    local_var_3d0 = local_var_3d0 & 0xffffffff00000000;
    plocal_var_3e8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_418);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address