#include "TaleWorlds.Native.Split.h"

// 99_part_05_part005.c - 4 个函数

// 函数: void FUN_1802d77a0(longlong param_1,longlong param_2,uint param_3)
void FUN_1802d77a0(longlong param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  byte *pbVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uStackX_18;
  longlong lStack_108;
  
  lVar5 = *(longlong *)(param_2 + 0x48);
  cVar1 = *(char *)(param_2 + 0xa1);
  iVar12 = (int)((*(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58)) / 0x70);
  uVar26 = (ulonglong)(int)param_3;
  pfVar28 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10) + uVar26 * 0x48);
  uVar2 = *(uint *)(lVar5 + 0x68);
  if ((*(int *)(lVar5 + 0xfc4) < 1) || (*(int *)(lVar5 + 0xfc8) < 1)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  iVar3 = *(int *)(param_2 + 0xa4);
  uVar4 = *(uint *)(param_2 + 0x44);
  fVar37 = *(float *)(lVar5 + 0x1054);
  if (*(float *)(lVar5 + 0x1054) <= *(float *)(lVar5 + 0x1050)) {
    fVar37 = *(float *)(lVar5 + 0x1050);
  }
  lStack_108 = (longlong)iVar12;
  if (0 < iVar12) {
    lVar27 = 0;
    uStackX_18 = param_3;
    do {
      fVar34 = 49.0;
      lVar6 = *(longlong *)(param_2 + 0x58);
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar28 = *(float *)(lVar27 + lVar6);
        pfVar28[1] = *(float *)(lVar27 + 4 + lVar6);
        pfVar28[2] = *(float *)(lVar27 + 8 + lVar6);
      }
      else {
        fVar32 = *(float *)(param_2 + 0xc4);
        fVar33 = *(float *)(param_2 + 200);
        fVar35 = *(float *)(lVar27 + 4 + lVar6);
        fVar30 = *(float *)(param_2 + 0xb4);
        fVar36 = *(float *)(param_2 + 0xb8);
        fVar29 = *(float *)(lVar27 + lVar6);
        fVar31 = *(float *)(lVar27 + 8 + lVar6);
        fVar7 = *(float *)(param_2 + 0xd4);
        fVar8 = *(float *)(param_2 + 0xd8);
        fVar9 = *(float *)(param_2 + 0xe4);
        fVar10 = *(float *)(param_2 + 0xe8);
        *pfVar28 = *(float *)(param_2 + 0xc0) * fVar35 + *(float *)(param_2 + 0xb0) * fVar29 +
                   *(float *)(param_2 + 0xd0) * fVar31 + *(float *)(param_2 + 0xe0);
        pfVar28[2] = fVar33 * fVar35 + fVar36 * fVar29 + fVar8 * fVar31 + fVar10;
        pfVar28[1] = fVar32 * fVar35 + fVar30 * fVar29 + fVar7 * fVar31 + fVar9;
      }
      pfVar28[0x10] = *(float *)(lVar27 + 0x5c + lVar6);
      pfVar28[3] = *(float *)(lVar27 + 0xc + lVar6);
      pfVar28[6] = *(float *)(lVar27 + 0x2c + lVar6);
      pfVar28[0xd] = *(float *)(lVar27 + 0x60 + lVar6);
      pfVar28[0xe] = *(float *)(lVar27 + 100 + lVar6);
      pfVar28[0xf] = *(float *)(lVar27 + 0x68 + lVar6);
      fVar35 = *(float *)(lVar27 + lVar6) - *(float *)(lVar27 + 0x10 + lVar6);
      if (cVar1 == '\0') {
        pfVar28[9] = fVar35;
        fVar31 = *(float *)(lVar27 + 4 + lVar6) - *(float *)(lVar27 + 0x14 + lVar6);
        pfVar28[10] = fVar31;
        fVar29 = *(float *)(lVar27 + 8 + lVar6) - *(float *)(lVar27 + 0x18 + lVar6);
        pfVar28[0xb] = fVar29;
      }
      else {
        fVar29 = *(float *)(lVar27 + 4 + lVar6) - *(float *)(lVar27 + 0x14 + lVar6);
        fVar33 = *(float *)(lVar27 + 8 + lVar6) - *(float *)(lVar27 + 0x18 + lVar6);
        fVar31 = *(float *)(param_2 + 0xb4) * fVar35;
        fVar32 = *(float *)(param_2 + 0xb8) * fVar35;
        fVar35 = *(float *)(param_2 + 0xc0) * fVar29 + *(float *)(param_2 + 0xb0) * fVar35 +
                 *(float *)(param_2 + 0xd0) * fVar33;
        fVar31 = *(float *)(param_2 + 0xc4) * fVar29 + fVar31 + *(float *)(param_2 + 0xd4) * fVar33;
        fVar29 = *(float *)(param_2 + 200) * fVar29 + fVar32 + *(float *)(param_2 + 0xd8) * fVar33;
        pfVar28[9] = fVar35;
        pfVar28[10] = fVar31;
        pfVar28[0xb] = fVar29;
      }
      pbVar20 = (byte *)(lVar6 + 0x54 + lVar27);
      puVar21 = (ushort *)(lVar6 + 0x52 + lVar27);
      pfVar28[9] = fVar35 * 60.0;
      puVar22 = (ushort *)(lVar6 + 0x50 + lVar27);
      pfVar28[10] = fVar31 * 60.0;
      pfVar28[0xb] = fVar29 * 60.0;
      fVar35 = *(float *)(lVar27 + 0x20 + lVar6);
      fVar29 = *(float *)(lVar27 + 0x24 + lVar6);
      FUN_1802cf260(param_1 + 0x58,uVar26 & 0xffffffff,pfVar28,
                    fVar37 * *(float *)(lVar27 + 0x2c + lVar6),
                    ((ulonglong)uVar4 << 0x10 | (longlong)iVar3) << 0x20,puVar22,puVar21,pbVar20);
      fVar34 = fVar29 * fVar34;
      pfVar28[0xc] = (float)(((uint)*pbVar20 << 0xc | *puVar22 & 0xfff) << 0xc | *puVar21 & 0xfff);
      pfVar28[7] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar5 + 0x10c) == 0) {
        iVar12 = (int)fVar34;
        iVar16 = (int)(fVar34 + 1.0);
        fVar34 = fVar34 - (float)iVar12;
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        else if (0x31 < iVar16) {
          iVar16 = 0x31;
        }
        lVar19 = (longlong)iVar16;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0x31 < iVar12) {
          iVar12 = 0x31;
        }
        uVar25 = *(uint *)(lVar27 + 0x44 + lVar6);
        lVar15 = (longlong)iVar12;
        fVar31 = *(float *)(lVar5 + 0xbf0 + lVar15 * 0x10);
        fVar32 = *(float *)(lVar5 + 0xbf4 + lVar15 * 0x10);
        fVar31 = (*(float *)(lVar5 + 0xbf0 + lVar19 * 0x10) - fVar31) * fVar34 + fVar31;
        fVar33 = *(float *)(lVar5 + 0xbf8 + lVar15 * 0x10);
        fVar32 = (*(float *)(lVar5 + 0xbf4 + lVar19 * 0x10) - fVar32) * fVar34 + fVar32;
        fVar36 = *(float *)(lVar5 + 0xbfc + lVar15 * 0x10);
        fVar33 = (*(float *)(lVar5 + 0xbf8 + lVar19 * 0x10) - fVar33) * fVar34 + fVar33;
        fVar36 = (*(float *)(lVar5 + 0xbfc + lVar19 * 0x10) - fVar36) * fVar34 + fVar36;
        if (uVar25 != 0xffffffff) {
          fVar34 = (float)(uVar25 >> 0x10 & 0xff);
          fVar30 = (float)(uVar25 >> 8 & 0xff);
          fVar33 = (float)(uVar25 & 0xff) * (float)(uVar25 & 0xff) * 1.5378702e-05 * fVar33;
          fVar31 = fVar34 * fVar34 * 1.5378702e-05 * fVar31;
          fVar32 = fVar30 * fVar30 * 1.5378702e-05 * fVar32;
        }
      }
      else {
        uVar25 = *(uint *)(lVar27 + 0x44 + lVar6);
        iVar16 = (int)(fVar34 + 1.0);
        fVar31 = (float)(uVar25 >> 0x10 & 0xff) * 0.003921569;
        iVar12 = (int)fVar34;
        fVar32 = (float)(uVar25 >> 8 & 0xff) * 0.003921569;
        fVar30 = (float)iVar12;
        fVar33 = (float)(uVar25 & 0xff) * 0.003921569;
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        else if (0x31 < iVar16) {
          iVar16 = 0x31;
        }
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0x31 < iVar12) {
          iVar12 = 0x31;
        }
        fVar36 = *(float *)(lVar5 + 0xbfc + (longlong)iVar12 * 0x10);
        fVar36 = (*(float *)(lVar5 + 0xbfc + (longlong)iVar16 * 0x10) - fVar36) * (fVar34 - fVar30)
                 + fVar36;
      }
      pfVar28[0x11] = *(float *)(lVar27 + 0x6c + lVar6);
      uVar13 = (uint)(longlong)(fVar36 * 255.9);
      uVar25 = 0xff;
      if (uVar13 < 0xff) {
        uVar25 = uVar13;
      }
      uVar17 = (uint)(longlong)(fVar31 * 255.9);
      uVar13 = 0xff;
      if (uVar17 < 0xff) {
        uVar13 = uVar17;
      }
      uVar18 = (uint)(longlong)(fVar32 * 255.9);
      uVar17 = 0xff;
      if (uVar18 < 0xff) {
        uVar17 = uVar18;
      }
      uVar23 = (uint)(longlong)(fVar33 * 255.9);
      uVar18 = 0xff;
      if (uVar23 < 0xff) {
        uVar18 = uVar23;
      }
      pfVar28[8] = (float)(((uVar25 << 8 | uVar13) << 8 | uVar17) << 8 | uVar18);
      if (((uVar2 >> 4 & 1) == 0) || (!bVar11)) {
        if (((uVar2 >> 0xb & 1) == 0) || (!bVar11)) {
          pfVar28[4] = 0.0;
          fVar34 = 0.0;
        }
        else {
          iVar12 = *(int *)(lVar5 + 0xfc4);
          iVar14 = (int)*(short *)(lVar27 + 0x32 + lVar6);
          iVar16 = *(int *)(lVar5 + 0xfc8);
          pfVar28[4] = (float)(iVar14 % iVar12) / (float)iVar12;
          fVar34 = (float)(iVar14 / iVar12) / (float)iVar16;
        }
      }
      else {
        uVar25 = *(uint *)(lVar5 + 0xfcc);
        uVar26 = (ulonglong)uVar25;
        fVar35 = fVar35 * fVar29 * *(float *)(lVar5 + 0xfd0) +
                 (float)(int)*(short *)(lVar27 + 0x32 + lVar6);
        if ((uVar2 >> 0x16 & 1) == 0) {
          uVar24 = (ulonglong)fVar35;
          if ((uVar2 >> 3 & 1) == 0) {
            uVar26 = (ulonglong)(uVar25 - 1);
            if ((uint)uVar24 < uVar25 - 1) {
              uVar26 = uVar24 & 0xffffffff;
            }
          }
          else {
            uVar26 = (uVar24 & 0xffffffff) % uVar26;
          }
          uVar25 = *(uint *)(lVar5 + 0xfc4);
          fVar34 = (float)(uVar26 / uVar25) / (float)*(int *)(lVar5 + 0xfc8);
          pfVar28[4] = (float)(uVar26 % (ulonglong)uVar25) / (float)(int)uVar25;
        }
        else if ((uVar2 >> 3 & 1) == 0) {
          fVar34 = 0.0;
          fVar29 = (float)(uVar25 - 1);
          if (fVar35 <= (float)(uVar25 - 1)) {
            fVar29 = fVar35;
          }
          pfVar28[4] = fVar29;
        }
        else {
          fVar35 = (float)fmodf(uVar26,(float)uVar26);
          fVar34 = 0.0;
          pfVar28[4] = fVar35;
        }
      }
      lVar27 = lVar27 + 0x70;
      pfVar28[5] = fVar34;
      pfVar28 = pfVar28 + 0x12;
      uStackX_18 = uStackX_18 + 1;
      uVar26 = (ulonglong)uStackX_18;
      lStack_108 = lStack_108 + -1;
    } while (lStack_108 != 0);
  }
  return;
}






// 函数: void FUN_1802d78b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)
void FUN_1802d78b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  byte *pbVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 in_R10;
  int in_R11D;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong lVar20;
  float *unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_XMM5_Da;
  float unaff_XMM15_Da;
  ushort *puStack0000000000000028;
  ushort *puStack0000000000000030;
  byte *pbStack0000000000000038;
  char cStack0000000000000040;
  char cStack0000000000000044;
  char in_stack_00000048;
  longlong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  char in_stack_00000160;
  char in_stack_00000168;
  int in_stack_00000170;
  char in_stack_00000178;
  
  lVar20 = 0;
  uStack0000000000000060 = in_R10;
  do {
    lVar1 = *(longlong *)(unaff_R12 + 0x58);
    if (*(char *)(unaff_R12 + 0xa1) == '\0') {
      *unaff_R15 = *(float *)(lVar20 + lVar1);
      unaff_R15[1] = *(float *)(lVar20 + 4 + lVar1);
      unaff_R15[2] = *(float *)(lVar20 + 8 + lVar1);
    }
    else {
      fVar25 = *(float *)(unaff_R12 + 0xc4);
      fVar26 = *(float *)(unaff_R12 + 200);
      fVar27 = *(float *)(lVar20 + 4 + lVar1);
      fVar22 = *(float *)(unaff_R12 + 0xb4);
      fVar28 = *(float *)(unaff_R12 + 0xb8);
      fVar21 = *(float *)(lVar20 + lVar1);
      fVar24 = *(float *)(lVar20 + 8 + lVar1);
      fVar23 = *(float *)(unaff_R12 + 0xd4);
      fVar2 = *(float *)(unaff_R12 + 0xd8);
      fVar3 = *(float *)(unaff_R12 + 0xe4);
      fVar4 = *(float *)(unaff_R12 + 0xe8);
      *unaff_R15 = *(float *)(unaff_R12 + 0xc0) * fVar27 + *(float *)(unaff_R12 + 0xb0) * fVar21 +
                   *(float *)(unaff_R12 + 0xd0) * fVar24 + *(float *)(unaff_R12 + 0xe0);
      unaff_R15[2] = fVar26 * fVar27 + fVar28 * fVar21 + fVar2 * fVar24 + fVar4;
      unaff_R15[1] = fVar25 * fVar27 + fVar22 * fVar21 + fVar23 * fVar24 + fVar3;
    }
    unaff_R15[0x10] = *(float *)(lVar20 + 0x5c + lVar1);
    unaff_R15[3] = *(float *)(lVar20 + 0xc + lVar1);
    unaff_R15[6] = *(float *)(lVar20 + 0x2c + lVar1);
    unaff_R15[0xd] = *(float *)(lVar20 + 0x60 + lVar1);
    unaff_R15[0xe] = *(float *)(lVar20 + 100 + lVar1);
    unaff_R15[0xf] = *(float *)(lVar20 + 0x68 + lVar1);
    fVar27 = *(float *)(lVar20 + lVar1) - *(float *)(lVar20 + 0x10 + lVar1);
    if (param_4 == '\0') {
      unaff_R15[9] = fVar27;
      fVar24 = *(float *)(lVar20 + 4 + lVar1) - *(float *)(lVar20 + 0x14 + lVar1);
      unaff_R15[10] = fVar24;
      fVar21 = *(float *)(lVar20 + 8 + lVar1) - *(float *)(lVar20 + 0x18 + lVar1);
      unaff_R15[0xb] = fVar21;
    }
    else {
      fVar21 = *(float *)(lVar20 + 4 + lVar1) - *(float *)(lVar20 + 0x14 + lVar1);
      fVar26 = *(float *)(lVar20 + 8 + lVar1) - *(float *)(lVar20 + 0x18 + lVar1);
      fVar24 = *(float *)(unaff_R12 + 0xb4) * fVar27;
      fVar25 = *(float *)(unaff_R12 + 0xb8) * fVar27;
      fVar27 = *(float *)(unaff_R12 + 0xc0) * fVar21 + *(float *)(unaff_R12 + 0xb0) * fVar27 +
               *(float *)(unaff_R12 + 0xd0) * fVar26;
      fVar24 = *(float *)(unaff_R12 + 0xc4) * fVar21 + fVar24 +
               *(float *)(unaff_R12 + 0xd4) * fVar26;
      fVar21 = *(float *)(unaff_R12 + 200) * fVar21 + fVar25 + *(float *)(unaff_R12 + 0xd8) * fVar26
      ;
      unaff_R15[9] = fVar27;
      unaff_R15[10] = fVar24;
      unaff_R15[0xb] = fVar21;
    }
    pbVar14 = (byte *)(lVar1 + 0x54 + lVar20);
    puVar15 = (ushort *)(lVar1 + 0x52 + lVar20);
    unaff_R15[9] = fVar27 * 60.0;
    puVar16 = (ushort *)(lVar1 + 0x50 + lVar20);
    unaff_R15[10] = fVar24 * 60.0;
    unaff_R15[0xb] = fVar21 * 60.0;
    fVar27 = *(float *)(lVar20 + 0x20 + lVar1);
    fVar21 = *(float *)(lVar20 + 0x24 + lVar1);
    puStack0000000000000028 = puVar16;
    puStack0000000000000030 = puVar15;
    pbStack0000000000000038 = pbVar14;
    FUN_1802cf260(uStack0000000000000060,in_R11D,unaff_R15,
                  unaff_XMM15_Da * *(float *)(lVar20 + 0x2c + lVar1),param_3);
    in_XMM5_Da = fVar21 * in_XMM5_Da;
    unaff_R15[0xc] = (float)(((uint)*pbVar14 << 0xc | *puVar16 & 0xfff) << 0xc | *puVar15 & 0xfff);
    unaff_R15[7] = *(float *)(unaff_R12 + 0xa4);
    if (*(int *)(unaff_R13 + 0x10c) == 0) {
      iVar5 = (int)in_XMM5_Da;
      iVar10 = (int)(in_XMM5_Da + 1.0);
      in_XMM5_Da = in_XMM5_Da - (float)iVar5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = 0x31;
      }
      lVar13 = (longlong)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = 0x31;
      }
      uVar19 = *(uint *)(lVar20 + 0x44 + lVar1);
      lVar8 = (longlong)iVar5;
      fVar24 = *(float *)(unaff_R13 + 0xbf0 + lVar8 * 0x10);
      fVar25 = *(float *)(unaff_R13 + 0xbf4 + lVar8 * 0x10);
      fVar24 = (*(float *)(unaff_R13 + 0xbf0 + lVar13 * 0x10) - fVar24) * in_XMM5_Da + fVar24;
      fVar26 = *(float *)(unaff_R13 + 0xbf8 + lVar8 * 0x10);
      fVar25 = (*(float *)(unaff_R13 + 0xbf4 + lVar13 * 0x10) - fVar25) * in_XMM5_Da + fVar25;
      fVar28 = *(float *)(unaff_R13 + 0xbfc + lVar8 * 0x10);
      fVar26 = (*(float *)(unaff_R13 + 0xbf8 + lVar13 * 0x10) - fVar26) * in_XMM5_Da + fVar26;
      fVar28 = (*(float *)(unaff_R13 + 0xbfc + lVar13 * 0x10) - fVar28) * in_XMM5_Da + fVar28;
      if (uVar19 != 0xffffffff) {
        fVar22 = (float)(uVar19 >> 0x10 & 0xff);
        fVar23 = (float)(uVar19 >> 8 & 0xff);
        fVar26 = (float)(uVar19 & 0xff) * (float)(uVar19 & 0xff) * 1.5378702e-05 * fVar26;
        fVar24 = fVar22 * fVar22 * 1.5378702e-05 * fVar24;
        fVar25 = fVar23 * fVar23 * 1.5378702e-05 * fVar25;
      }
    }
    else {
      uVar19 = *(uint *)(lVar20 + 0x44 + lVar1);
      iVar10 = (int)(in_XMM5_Da + 1.0);
      fVar24 = (float)(uVar19 >> 0x10 & 0xff) * 0.003921569;
      iVar5 = (int)in_XMM5_Da;
      fVar25 = (float)(uVar19 >> 8 & 0xff) * 0.003921569;
      fVar22 = (float)iVar5;
      fVar26 = (float)(uVar19 & 0xff) * 0.003921569;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = 0x31;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = 0x31;
      }
      fVar28 = *(float *)(unaff_R13 + 0xbfc + (longlong)iVar5 * 0x10);
      fVar28 = (*(float *)(unaff_R13 + 0xbfc + (longlong)iVar10 * 0x10) - fVar28) *
               (in_XMM5_Da - fVar22) + fVar28;
    }
    unaff_R15[0x11] = *(float *)(lVar20 + 0x6c + lVar1);
    uVar6 = (uint)(longlong)(fVar28 * 255.9);
    uVar19 = 0xff;
    if (uVar6 < 0xff) {
      uVar19 = uVar6;
    }
    uVar11 = (uint)(longlong)(fVar24 * 255.9);
    uVar6 = 0xff;
    if (uVar11 < 0xff) {
      uVar6 = uVar11;
    }
    uVar12 = (uint)(longlong)(fVar25 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar17 = (uint)(longlong)(fVar26 * 255.9);
    uVar12 = 0xff;
    if (uVar17 < 0xff) {
      uVar12 = uVar17;
    }
    unaff_R15[8] = (float)(((uVar19 << 8 | uVar6) << 8 | uVar11) << 8 | uVar12);
    if ((cStack0000000000000040 == '\0') || (in_stack_00000178 == '\0')) {
      if ((in_stack_00000048 == '\0') || (in_stack_00000178 == '\0')) {
        unaff_R15[4] = 0.0;
        fVar27 = 0.0;
      }
      else {
        iVar5 = *(int *)(unaff_R13 + 0xfc4);
        iVar7 = (int)*(short *)(lVar20 + 0x32 + lVar1);
        iVar10 = *(int *)(unaff_R13 + 0xfc8);
        unaff_R15[4] = (float)(iVar7 % iVar5) / (float)iVar5;
        fVar27 = (float)(iVar7 / iVar5) / (float)iVar10;
      }
    }
    else {
      uVar19 = *(uint *)(unaff_R13 + 0xfcc);
      uVar9 = (ulonglong)uVar19;
      fVar21 = fVar27 * fVar21 * *(float *)(unaff_R13 + 0xfd0) +
               (float)(int)*(short *)(lVar20 + 0x32 + lVar1);
      if (cStack0000000000000044 == '\0') {
        uVar18 = (ulonglong)fVar21;
        if (in_stack_00000168 == '\0') {
          uVar9 = (ulonglong)(uVar19 - 1);
          if ((uint)uVar18 < uVar19 - 1) {
            uVar9 = uVar18 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar18 & 0xffffffff) % uVar9;
        }
        uVar19 = *(uint *)(unaff_R13 + 0xfc4);
        fVar27 = (float)(uVar9 / uVar19) / (float)*(int *)(unaff_R13 + 0xfc8);
        unaff_R15[4] = (float)(uVar9 % (ulonglong)uVar19) / (float)(int)uVar19;
      }
      else if (in_stack_00000168 == '\0') {
        fVar27 = 0.0;
        fVar24 = (float)(uVar19 - 1);
        if (fVar21 <= (float)(uVar19 - 1)) {
          fVar24 = fVar21;
        }
        unaff_R15[4] = fVar24;
      }
      else {
        fVar21 = (float)fmodf(uVar9,(float)uVar9);
        fVar27 = 0.0;
        unaff_R15[4] = fVar21;
      }
    }
    lVar20 = lVar20 + 0x70;
    unaff_R15[5] = fVar27;
    unaff_R15 = unaff_R15 + 0x12;
    in_XMM5_Da = 49.0;
    in_stack_00000170 = in_stack_00000170 + 1;
    in_stack_00000050 = in_stack_00000050 + -1;
    param_3 = in_stack_00000058;
    param_4 = in_stack_00000160;
    in_R11D = in_stack_00000170;
  } while (in_stack_00000050 != 0);
  return;
}






// 函数: void FUN_1802d800c(void)
void FUN_1802d800c(void)

{
  return;
}






// 函数: void FUN_1802d8020(longlong param_1,longlong param_2,int param_3)
void FUN_1802d8020(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar3 = *(longlong *)(param_2 + 0x48);
  uVar2 = *(uint *)(lVar3 + 0x68);
  iVar22 = (int)((*(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58)) / 0x70);
  cVar1 = *(char *)(param_2 + 0xa1);
  pfVar18 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10) +
                     (longlong)param_3 * 0x48);
  if ((*(int *)(lVar3 + 0xfc4) < 1) || (*(int *)(lVar3 + 0xfc8) < 1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  lVar24 = (longlong)iVar22;
  if (0 < iVar22) {
    lVar19 = 0;
    do {
      iVar22 = 0x31;
      lVar4 = *(longlong *)(param_2 + 0x58);
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar18 = *(float *)(lVar19 + lVar4);
        pfVar18[1] = *(float *)(lVar19 + 4 + lVar4);
        pfVar18[2] = *(float *)(lVar19 + 8 + lVar4);
      }
      else {
        fVar28 = *(float *)(param_2 + 0xb4);
        fVar29 = *(float *)(param_2 + 0xb8);
        fVar31 = *(float *)(lVar19 + lVar4);
        fVar32 = *(float *)(param_2 + 0xc4);
        fVar30 = *(float *)(param_2 + 200);
        fVar25 = *(float *)(lVar19 + 4 + lVar4);
        fVar27 = *(float *)(lVar19 + 8 + lVar4);
        fVar26 = *(float *)(param_2 + 0xd4);
        fVar5 = *(float *)(param_2 + 0xd8);
        fVar6 = *(float *)(param_2 + 0xe4);
        fVar7 = *(float *)(param_2 + 0xe8);
        *pfVar18 = *(float *)(param_2 + 0xb0) * fVar31 + *(float *)(param_2 + 0xc0) * fVar25 +
                   *(float *)(param_2 + 0xd0) * fVar27 + *(float *)(param_2 + 0xe0);
        pfVar18[2] = fVar29 * fVar31 + fVar30 * fVar25 + fVar5 * fVar27 + fVar7;
        pfVar18[1] = fVar28 * fVar31 + fVar32 * fVar25 + fVar26 * fVar27 + fVar6;
      }
      pfVar18[0x10] = *(float *)(lVar19 + 0x5c + lVar4);
      pfVar18[3] = *(float *)(lVar19 + 0xc + lVar4);
      pfVar18[6] = *(float *)(lVar19 + 0x2c + lVar4);
      pfVar18[0xd] = *(float *)(lVar19 + 0x60 + lVar4);
      pfVar18[0xe] = *(float *)(lVar19 + 100 + lVar4);
      pfVar18[0xf] = *(float *)(lVar19 + 0x68 + lVar4);
      fVar31 = *(float *)(lVar19 + lVar4) - *(float *)(lVar19 + 0x10 + lVar4);
      if (cVar1 == '\0') {
        pfVar18[9] = fVar31;
        fVar27 = *(float *)(lVar19 + 4 + lVar4) - *(float *)(lVar19 + 0x14 + lVar4);
        pfVar18[10] = fVar27;
        fVar25 = *(float *)(lVar19 + 8 + lVar4) - *(float *)(lVar19 + 0x18 + lVar4);
        pfVar18[0xb] = fVar25;
      }
      else {
        fVar25 = *(float *)(lVar19 + 4 + lVar4) - *(float *)(lVar19 + 0x14 + lVar4);
        fVar29 = *(float *)(lVar19 + 8 + lVar4) - *(float *)(lVar19 + 0x18 + lVar4);
        fVar27 = *(float *)(param_2 + 0xb4) * fVar31;
        fVar28 = *(float *)(param_2 + 0xb8) * fVar31;
        fVar31 = *(float *)(param_2 + 0xc0) * fVar25 + *(float *)(param_2 + 0xb0) * fVar31 +
                 *(float *)(param_2 + 0xd0) * fVar29;
        fVar27 = *(float *)(param_2 + 0xc4) * fVar25 + fVar27 + *(float *)(param_2 + 0xd4) * fVar29;
        fVar25 = *(float *)(param_2 + 200) * fVar25 + fVar28 + *(float *)(param_2 + 0xd8) * fVar29;
        pfVar18[9] = fVar31;
        pfVar18[10] = fVar27;
        pfVar18[0xb] = fVar25;
      }
      pfVar18[0xb] = fVar25 * 60.0;
      pfVar18[9] = fVar31 * 60.0;
      pfVar18[10] = fVar27 * 60.0;
      fVar31 = *(float *)(lVar19 + 0x24 + lVar4);
      fVar25 = *(float *)(lVar19 + 0x20 + lVar4);
      fVar27 = fVar31 * 49.0;
      pfVar18[7] = *(float *)(param_2 + 0xa4);
      if (*(int *)(lVar3 + 0x10c) == 0) {
        iVar9 = (int)fVar27;
        iVar14 = (int)(fVar27 + 1.0);
        fVar27 = fVar27 - (float)iVar9;
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        else if (0x31 < iVar14) {
          iVar14 = iVar22;
        }
        lVar17 = (longlong)iVar14;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        else if (0x31 < iVar9) {
          iVar9 = iVar22;
        }
        uVar23 = *(uint *)(lVar19 + 0x44 + lVar4);
        lVar12 = (longlong)iVar9;
        fVar28 = *(float *)(lVar3 + 0xbf0 + lVar12 * 0x10);
        fVar29 = *(float *)(lVar3 + 0xbf4 + lVar12 * 0x10);
        fVar28 = (*(float *)(lVar3 + 0xbf0 + lVar17 * 0x10) - fVar28) * fVar27 + fVar28;
        fVar32 = *(float *)(lVar3 + 0xbf8 + lVar12 * 0x10);
        fVar29 = (*(float *)(lVar3 + 0xbf4 + lVar17 * 0x10) - fVar29) * fVar27 + fVar29;
        fVar30 = *(float *)(lVar3 + 0xbfc + lVar12 * 0x10);
        fVar32 = (*(float *)(lVar3 + 0xbf8 + lVar17 * 0x10) - fVar32) * fVar27 + fVar32;
        fVar30 = (*(float *)(lVar3 + 0xbfc + lVar17 * 0x10) - fVar30) * fVar27 + fVar30;
        if (uVar23 != 0xffffffff) {
          fVar27 = (float)(uVar23 >> 0x10 & 0xff);
          fVar26 = (float)(uVar23 >> 8 & 0xff);
          fVar32 = (float)(uVar23 & 0xff) * (float)(uVar23 & 0xff) * 1.5378702e-05 * fVar32;
          fVar28 = fVar27 * fVar27 * 1.5378702e-05 * fVar28;
          fVar29 = fVar26 * fVar26 * 1.5378702e-05 * fVar29;
        }
      }
      else {
        uVar23 = *(uint *)(lVar19 + 0x44 + lVar4);
        iVar14 = (int)(fVar27 + 1.0);
        fVar28 = (float)(uVar23 >> 0x10 & 0xff) * 0.003921569;
        iVar9 = (int)fVar27;
        fVar29 = (float)(uVar23 >> 8 & 0xff) * 0.003921569;
        fVar32 = (float)(uVar23 & 0xff) * 0.003921569;
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        else if (0x31 < iVar14) {
          iVar14 = iVar22;
        }
        if (iVar9 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = iVar9;
          if (0x31 < iVar9) {
            iVar10 = iVar22;
          }
        }
        fVar30 = *(float *)(lVar3 + 0xbfc + (longlong)iVar10 * 0x10);
        fVar30 = (*(float *)(lVar3 + 0xbfc + (longlong)iVar14 * 0x10) - fVar30) *
                 (fVar27 - (float)iVar9) + fVar30;
      }
      pfVar18[0x11] = *(float *)(lVar19 + 0x6c + lVar4);
      uVar11 = (uint)(longlong)(fVar30 * 255.9);
      uVar23 = 0xff;
      if (uVar11 < 0xff) {
        uVar23 = uVar11;
      }
      uVar15 = (uint)(longlong)(fVar28 * 255.9);
      uVar11 = 0xff;
      if (uVar15 < 0xff) {
        uVar11 = uVar15;
      }
      uVar16 = (uint)(longlong)(fVar29 * 255.9);
      uVar15 = 0xff;
      if (uVar16 < 0xff) {
        uVar15 = uVar16;
      }
      uVar20 = (uint)(longlong)(fVar32 * 255.9);
      uVar16 = 0xff;
      if (uVar20 < 0xff) {
        uVar16 = uVar20;
      }
      pfVar18[8] = (float)(((uVar23 << 8 | uVar11) << 8 | uVar15) << 8 | uVar16);
      if (((uVar2 >> 4 & 1) == 0) || (!bVar8)) {
        if (((uVar2 >> 0xb & 1) == 0) || (!bVar8)) {
          pfVar18[4] = 0.0;
          fVar31 = 0.0;
        }
        else {
          iVar22 = *(int *)(lVar3 + 0xfc4);
          iVar9 = (int)*(short *)(lVar19 + 0x32 + lVar4);
          iVar14 = *(int *)(lVar3 + 0xfc8);
          pfVar18[4] = (float)(iVar9 % iVar22) / (float)iVar22;
          fVar31 = (float)(iVar9 / iVar22) / (float)iVar14;
        }
      }
      else {
        uVar23 = *(uint *)(lVar3 + 0xfcc);
        uVar13 = (ulonglong)uVar23;
        fVar25 = fVar25 * fVar31 * *(float *)(lVar3 + 0xfd0) +
                 (float)(int)*(short *)(lVar19 + 0x32 + lVar4);
        if ((uVar2 >> 0x16 & 1) == 0) {
          uVar21 = (ulonglong)fVar25;
          if ((uVar2 >> 3 & 1) == 0) {
            uVar13 = (ulonglong)(uVar23 - 1);
            if ((uint)uVar21 < uVar23 - 1) {
              uVar13 = uVar21 & 0xffffffff;
            }
          }
          else {
            uVar13 = (uVar21 & 0xffffffff) % uVar13;
          }
          uVar23 = *(uint *)(lVar3 + 0xfc4);
          fVar31 = (float)(uVar13 / uVar23) / (float)*(int *)(lVar3 + 0xfc8);
          pfVar18[4] = (float)(uVar13 % (ulonglong)uVar23) / (float)(int)uVar23;
        }
        else if ((uVar2 >> 3 & 1) == 0) {
          fVar31 = 0.0;
          fVar27 = (float)(uVar23 - 1);
          if (fVar25 <= (float)(uVar23 - 1)) {
            fVar27 = fVar25;
          }
          pfVar18[4] = fVar27;
        }
        else {
          fVar31 = (float)fmodf(uVar13,(float)uVar13);
          pfVar18[4] = fVar31;
          fVar31 = 0.0;
        }
      }
      lVar19 = lVar19 + 0x70;
      pfVar18[5] = fVar31;
      pfVar18 = pfVar18 + 0x12;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  return;
}






