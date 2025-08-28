#include "TaleWorlds.Native.Split.h"

// 99_part_05_part003.c - 3 个函数

// 函数: void FUN_1802d6020(longlong param_1,longlong param_2,int param_3,float *param_4)
void FUN_1802d6020(longlong param_1,longlong param_2,int param_3,float *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint64_t *puVar29;
  longlong lVar30;
  ulonglong *puVar31;
  uint64_t *puVar32;
  uint uVar33;
  float *pfVar34;
  uint uVar35;
  ulonglong uVar36;
  int iVar37;
  ulonglong *puVar38;
  uint64_t *puVar39;
  ulonglong *puVar40;
  float *pfVar41;
  longlong lVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int iStackX_18;
  uint64_t uStack_110;
  
  lVar7 = *(longlong *)(param_2 + 0x48);
  lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10);
  uVar5 = *(uint *)(lVar7 + 0x68);
  cVar3 = *(char *)(param_2 + 0xa1);
  if ((*(int *)(lVar7 + 0xfc4) < 1) || (*(int *)(lVar7 + 0xfc8) < 1)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  lVar42 = (longlong)(int)((*(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58)) / 0x70);
  plVar2 = (longlong *)(param_2 + 0xf8);
  FUN_1802ab620(plVar2,lVar42);
  lVar24 = *(longlong *)(param_2 + 0x138) - *(longlong *)(param_2 + 0x130);
  lVar19 = lVar24 >> 0x3f;
  if (lVar24 / 0xc + lVar19 == lVar19) {
    uVar20 = 0;
    uVar25 = uVar20;
    uVar28 = uVar20;
    if (3 < lVar42) {
      iVar37 = 2;
      uVar36 = uVar20;
      do {
        *(int *)(*plVar2 + uVar25 * 8) = (int)uVar28;
        uVar28 = (ulonglong)((int)uVar28 + 4);
        lVar19 = *(longlong *)(param_2 + 0x58);
        fVar51 = *(float *)(uVar36 + 4 + lVar19) - param_4[1];
        fVar49 = *(float *)(uVar36 + lVar19) - *param_4;
        fVar43 = *(float *)(uVar36 + 8 + lVar19) - param_4[2];
        *(float *)(*plVar2 + 4 + uVar25 * 8) = fVar51 * fVar51 + fVar49 * fVar49 + fVar43 * fVar43;
        *(int *)(*plVar2 + 8 + uVar25 * 8) = iVar37 + -1;
        iVar17 = iVar37 + 1;
        lVar19 = *(longlong *)(param_2 + 0x58);
        fVar51 = *(float *)(lVar19 + 0x74 + uVar36) - param_4[1];
        fVar49 = *(float *)(lVar19 + 0x70 + uVar36) - *param_4;
        fVar43 = *(float *)(lVar19 + 0x78 + uVar36) - param_4[2];
        *(float *)(*plVar2 + 0xc + uVar25 * 8) = fVar51 * fVar51 + fVar49 * fVar49 + fVar43 * fVar43
        ;
        *(int *)(*plVar2 + 0x10 + uVar25 * 8) = iVar37;
        iVar37 = iVar37 + 4;
        lVar19 = *(longlong *)(param_2 + 0x58);
        fVar51 = *(float *)(lVar19 + 0xe4 + uVar36) - param_4[1];
        fVar49 = *(float *)(lVar19 + 0xe0 + uVar36) - *param_4;
        fVar43 = *(float *)(lVar19 + 0xe8 + uVar36) - param_4[2];
        *(float *)(*plVar2 + 0x14 + uVar25 * 8) =
             fVar51 * fVar51 + fVar49 * fVar49 + fVar43 * fVar43;
        *(int *)(*plVar2 + 0x18 + uVar25 * 8) = iVar17;
        lVar9 = *(longlong *)(param_2 + 0x58);
        lVar19 = uVar36 + 0x150;
        fVar51 = *(float *)(uVar36 + 0x154 + lVar9) - param_4[1];
        lVar24 = uVar36 + 0x158;
        uVar36 = uVar36 + 0x1c0;
        fVar49 = *(float *)(lVar19 + lVar9) - *param_4;
        fVar43 = *(float *)(lVar24 + lVar9) - param_4[2];
        *(float *)(*plVar2 + 0x1c + uVar25 * 8) =
             fVar51 * fVar51 + fVar49 * fVar49 + fVar43 * fVar43;
        uVar25 = uVar25 + 4;
      } while ((longlong)uVar25 < lVar42 + -3);
    }
    if ((longlong)uVar25 < lVar42) {
      lVar19 = uVar25 * 0x70;
      do {
        *(int *)(*plVar2 + uVar25 * 8) = (int)uVar28;
        uVar28 = (ulonglong)((int)uVar28 + 1);
        lVar9 = *(longlong *)(param_2 + 0x58);
        pfVar34 = (float *)(lVar19 + lVar9);
        fVar51 = *(float *)(lVar19 + 4 + lVar9) - param_4[1];
        lVar24 = lVar19 + 8;
        lVar19 = lVar19 + 0x70;
        fVar49 = *pfVar34 - *param_4;
        fVar43 = *(float *)(lVar24 + lVar9) - param_4[2];
        *(float *)(*plVar2 + 4 + uVar25 * 8) = fVar51 * fVar51 + fVar49 * fVar49 + fVar43 * fVar43;
        uVar25 = uVar25 + 1;
      } while ((longlong)uVar25 < lVar42);
    }
    puVar10 = *(uint64_t **)(param_2 + 0x100);
    puVar39 = (uint64_t *)*plVar2;
    if (puVar39 != puVar10) {
      uVar26 = 0;
      lVar24 = (longlong)puVar10 - (longlong)puVar39 >> 3;
      for (lVar19 = lVar24; lVar19 != 0; lVar19 = lVar19 >> 1) {
        uVar26 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar26;
      }
      FUN_1802da5e0(puVar39,puVar10,(longlong)(int)(uVar26 - 1) * 2,0);
      if (lVar24 < 0x1d) {
        func_0x0001802d9f80(puVar39,puVar10);
      }
      else {
        puVar32 = puVar39 + 0x1c;
        func_0x0001802d9f80(puVar39,puVar32);
        if (puVar32 != puVar10) {
          puVar39 = puVar39 + 0x1b;
          do {
            uVar11 = *puVar32;
            pfVar34 = (float *)((longlong)puVar39 + 4);
            uStack_110._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
            puVar29 = puVar32;
            if (*pfVar34 <= uStack_110._4_4_ && uStack_110._4_4_ != *pfVar34) {
              do {
                pfVar34 = pfVar34 + -2;
                *puVar29 = *(uint64_t *)
                            ((longlong)puVar29 + ((longlong)puVar39 - (longlong)puVar32));
                puVar29 = puVar29 + -1;
              } while (*pfVar34 <= uStack_110._4_4_ && uStack_110._4_4_ != *pfVar34);
            }
            puVar32 = puVar32 + 1;
            *puVar29 = uVar11;
            puVar39 = puVar39 + 1;
          } while (puVar32 != puVar10);
        }
      }
    }
  }
  else {
    uVar20 = 0;
    uVar25 = uVar20;
    uVar28 = uVar20;
    if (0 < lVar42) {
      do {
        *(int *)(*plVar2 + uVar25 * 8) = (int)uVar28;
        uVar25 = uVar25 + 1;
        uVar28 = (ulonglong)((int)uVar28 + 1);
      } while ((longlong)uVar25 < lVar42);
    }
    puVar8 = *(ulonglong **)(param_2 + 0x100);
    puVar38 = (ulonglong *)*plVar2;
    if (puVar38 != puVar8) {
      uVar26 = 0;
      lVar24 = (longlong)puVar8 - (longlong)puVar38 >> 3;
      for (lVar19 = lVar24; lVar19 != 0; lVar19 = lVar19 >> 1) {
        uVar26 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar26;
      }
      FUN_1802da450(puVar38,puVar8,(longlong)(int)(uVar26 - 1) * 2,param_2);
      if (lVar24 < 0x1d) {
        FUN_1802d9ee0(puVar38,puVar8,param_2);
      }
      else {
        puVar31 = puVar38 + 0x1c;
        FUN_1802d9ee0(puVar38,puVar31,param_2);
        for (; puVar31 != puVar8; puVar31 = puVar31 + 1) {
          puVar38 = puVar31 + -1;
          uVar20 = *puVar31;
          puVar40 = puVar31;
          if (*(short *)((uVar20 & 0xffffffff) * 0x70 + 0x30 + *(longlong *)(param_2 + 0x58)) <
              *(short *)((ulonglong)(uint)*puVar38 * 0x70 + 0x30 + *(longlong *)(param_2 + 0x58))) {
            do {
              uVar25 = *puVar38;
              puVar38 = puVar38 + -1;
              *puVar40 = uVar25;
              puVar40 = puVar40 + -1;
            } while (*(short *)(*(longlong *)(param_2 + 0x58) + 0x30 + (uVar20 & 0xffffffff) * 0x70)
                     < *(short *)((ulonglong)(uint)*puVar38 * 0x70 + 0x30 +
                                 *(longlong *)(param_2 + 0x58)));
          }
          *puVar40 = uVar20;
        }
      }
    }
  }
  uVar26 = *(uint *)(param_2 + 0x44);
  iVar37 = *(int *)(param_2 + 0xa4);
  fVar43 = *(float *)(lVar7 + 0x1054);
  if (*(float *)(lVar7 + 0x1054) <= *(float *)(lVar7 + 0x1050)) {
    fVar43 = *(float *)(lVar7 + 0x1050);
  }
  if (0 < lVar42) {
    pfVar34 = (float *)(lVar30 + ((longlong)param_3 * 9 + 1) * 8);
    uStack_110 = 0;
    iStackX_18 = param_3;
    do {
      fVar49 = 49.0;
      pfVar1 = pfVar34 + -2;
      pfVar41 = (float *)((longlong)*(int *)(*(longlong *)(param_2 + 0xf8) + uStack_110 * 8) * 0x70
                         + *(longlong *)(param_2 + 0x58));
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar1 = *pfVar41;
        pfVar34[-1] = pfVar41[1];
        *pfVar34 = pfVar41[2];
      }
      else {
        fVar47 = *(float *)(param_2 + 0xb4);
        fVar48 = *(float *)(param_2 + 0xb8);
        fVar51 = *pfVar41;
        fVar50 = *(float *)(param_2 + 0xc4);
        fVar6 = *(float *)(param_2 + 200);
        fVar44 = pfVar41[1];
        fVar46 = pfVar41[2];
        fVar45 = *(float *)(param_2 + 0xd4);
        fVar12 = *(float *)(param_2 + 0xd8);
        fVar13 = *(float *)(param_2 + 0xe4);
        fVar14 = *(float *)(param_2 + 0xe8);
        *pfVar1 = *(float *)(param_2 + 0xb0) * fVar51 + *(float *)(param_2 + 0xc0) * fVar44 +
                  *(float *)(param_2 + 0xd0) * fVar46 + *(float *)(param_2 + 0xe0);
        *pfVar34 = fVar48 * fVar51 + fVar6 * fVar44 + fVar12 * fVar46 + fVar14;
        pfVar34[-1] = fVar47 * fVar51 + fVar50 * fVar44 + fVar45 * fVar46 + fVar13;
      }
      pfVar34[0xe] = pfVar41[0x17];
      pfVar34[1] = pfVar41[3];
      pfVar34[4] = pfVar41[0xb];
      pfVar34[0xb] = pfVar41[0x18];
      pfVar34[0xc] = pfVar41[0x19];
      pfVar34[0xd] = pfVar41[0x1a];
      fVar51 = *pfVar41 - pfVar41[4];
      if (cVar3 == '\0') {
        pfVar34[7] = fVar51;
        fVar46 = pfVar41[1] - pfVar41[5];
        pfVar34[8] = fVar46;
        fVar44 = pfVar41[2] - pfVar41[6];
        pfVar34[9] = fVar44;
      }
      else {
        fVar44 = pfVar41[1] - pfVar41[5];
        fVar48 = pfVar41[2] - pfVar41[6];
        fVar46 = *(float *)(param_2 + 0xb4) * fVar51;
        fVar47 = *(float *)(param_2 + 0xb8) * fVar51;
        fVar51 = *(float *)(param_2 + 0xc0) * fVar44 + *(float *)(param_2 + 0xb0) * fVar51 +
                 *(float *)(param_2 + 0xd0) * fVar48;
        fVar46 = *(float *)(param_2 + 0xc4) * fVar44 + fVar46 + *(float *)(param_2 + 0xd4) * fVar48;
        fVar44 = *(float *)(param_2 + 200) * fVar44 + fVar47 + *(float *)(param_2 + 0xd8) * fVar48;
        pfVar34[7] = fVar51;
        pfVar34[8] = fVar46;
        pfVar34[9] = fVar44;
      }
      pfVar34[7] = fVar51 * 60.0;
      pfVar34[8] = fVar46 * 60.0;
      pfVar34[9] = fVar44 * 60.0;
      fVar51 = pfVar41[9];
      fVar44 = pfVar41[8];
      FUN_1802cf260(param_1 + 0x58,iStackX_18,pfVar1,fVar43 * pfVar41[0xb],
                    ((ulonglong)uVar26 << 0x10 | (longlong)iVar37) << 0x20,pfVar41 + 0x14,
                    (ushort *)((longlong)pfVar41 + 0x52),pfVar41 + 0x15);
      fVar49 = fVar51 * fVar49;
      pfVar34[10] = (float)((*(ushort *)(pfVar41 + 0x14) & 0xfff |
                            (uint)*(byte *)(pfVar41 + 0x15) << 0xc) << 0xc |
                           *(ushort *)((longlong)pfVar41 + 0x52) & 0xfff);
      pfVar34[5] = *(float *)(param_2 + 0xa4);
      iVar17 = 0;
      if (*(int *)(lVar7 + 0x10c) == 0) {
        iVar16 = (int)fVar49;
        iVar21 = (int)(fVar49 + 1.0);
        fVar49 = fVar49 - (float)iVar16;
        iVar22 = iVar17;
        if ((-1 < iVar21) && (iVar22 = iVar21, 0x31 < iVar21)) {
          iVar22 = 0x31;
        }
        lVar30 = (longlong)iVar22;
        if ((-1 < iVar16) && (iVar17 = iVar16, 0x31 < iVar16)) {
          iVar17 = 0x31;
        }
        fVar6 = pfVar41[0x11];
        lVar19 = (longlong)iVar17;
        fVar46 = *(float *)(lVar7 + 0xbf0 + lVar19 * 0x10);
        fVar47 = *(float *)(lVar7 + 0xbf4 + lVar19 * 0x10);
        fVar46 = (*(float *)(lVar7 + 0xbf0 + lVar30 * 0x10) - fVar46) * fVar49 + fVar46;
        fVar48 = *(float *)(lVar7 + 0xbf8 + lVar19 * 0x10);
        fVar47 = (*(float *)(lVar7 + 0xbf4 + lVar30 * 0x10) - fVar47) * fVar49 + fVar47;
        fVar50 = *(float *)(lVar7 + 0xbfc + lVar19 * 0x10);
        fVar48 = (*(float *)(lVar7 + 0xbf8 + lVar30 * 0x10) - fVar48) * fVar49 + fVar48;
        fVar50 = (*(float *)(lVar7 + 0xbfc + lVar30 * 0x10) - fVar50) * fVar49 + fVar50;
        if (fVar6 != -NAN) {
          fVar49 = (float)((uint)fVar6 >> 0x10 & 0xff);
          fVar45 = (float)((uint)fVar6 >> 8 & 0xff);
          fVar48 = (float)((uint)fVar6 & 0xff) * (float)((uint)fVar6 & 0xff) * 1.5378702e-05 *
                   fVar48;
          fVar46 = fVar49 * fVar49 * 1.5378702e-05 * fVar46;
          fVar47 = fVar45 * fVar45 * 1.5378702e-05 * fVar47;
        }
      }
      else {
        fVar48 = pfVar41[0x11];
        iVar21 = (int)(fVar49 + 1.0);
        fVar46 = (float)((uint)fVar48 >> 0x10 & 0xff) * 0.003921569;
        iVar16 = (int)fVar49;
        fVar47 = (float)((uint)fVar48 >> 8 & 0xff) * 0.003921569;
        fVar48 = (float)((uint)fVar48 & 0xff) * 0.003921569;
        iVar22 = iVar17;
        if ((-1 < iVar21) && (iVar22 = iVar21, 0x31 < iVar21)) {
          iVar22 = 0x31;
        }
        if ((-1 < iVar16) && (iVar17 = iVar16, 0x31 < iVar16)) {
          iVar17 = 0x31;
        }
        fVar50 = *(float *)(lVar7 + 0xbfc + (longlong)iVar17 * 0x10);
        fVar50 = (*(float *)(lVar7 + 0xbfc + (longlong)iVar22 * 0x10) - fVar50) *
                 (fVar49 - (float)iVar16) + fVar50;
      }
      pfVar34[0xf] = pfVar41[0x1b];
      uVar18 = (uint)(longlong)(fVar50 * 255.9);
      uVar35 = 0xff;
      if (uVar18 < 0xff) {
        uVar35 = uVar18;
      }
      uVar23 = (uint)(longlong)(fVar46 * 255.9);
      uVar18 = 0xff;
      if (uVar23 < 0xff) {
        uVar18 = uVar23;
      }
      uVar27 = (uint)(longlong)(fVar47 * 255.9);
      uVar23 = 0xff;
      if (uVar27 < 0xff) {
        uVar23 = uVar27;
      }
      uVar33 = (uint)(longlong)(fVar48 * 255.9);
      uVar27 = 0xff;
      if (uVar33 < 0xff) {
        uVar27 = uVar33;
      }
      pfVar34[6] = (float)(((uVar35 << 8 | uVar18) << 8 | uVar23) << 8 | uVar27);
      if (((uVar5 >> 4 & 1) == 0) || (!bVar15)) {
        if (((uVar5 >> 0xb & 1) == 0) || (!bVar15)) {
          pfVar34[2] = 0.0;
          fVar49 = 0.0;
        }
        else {
          iVar17 = *(int *)(lVar7 + 0xfc4);
          sVar4 = *(short *)((longlong)pfVar41 + 0x32);
          iVar22 = *(int *)(lVar7 + 0xfc8);
          pfVar34[2] = (float)((int)sVar4 % iVar17) / (float)iVar17;
          fVar49 = (float)((int)sVar4 / iVar17) / (float)iVar22;
        }
      }
      else {
        uVar35 = *(uint *)(lVar7 + 0xfcc);
        uVar20 = (ulonglong)uVar35;
        fVar51 = fVar44 * fVar51 * *(float *)(lVar7 + 0xfd0) +
                 (float)(int)*(short *)((longlong)pfVar41 + 0x32);
        if ((uVar5 >> 0x16 & 1) == 0) {
          uVar25 = (ulonglong)fVar51;
          if ((uVar5 >> 3 & 1) == 0) {
            uVar20 = (ulonglong)(uVar35 - 1);
            if ((uint)uVar25 < uVar35 - 1) {
              uVar20 = uVar25 & 0xffffffff;
            }
          }
          else {
            uVar20 = (uVar25 & 0xffffffff) % uVar20;
          }
          uVar35 = *(uint *)(lVar7 + 0xfc4);
          fVar49 = (float)(uVar20 / uVar35) / (float)*(int *)(lVar7 + 0xfc8);
          pfVar34[2] = (float)(uVar20 % (ulonglong)uVar35) / (float)(int)uVar35;
        }
        else if ((uVar5 >> 3 & 1) == 0) {
          fVar49 = 0.0;
          fVar44 = (float)(uVar35 - 1);
          if (fVar51 <= (float)(uVar35 - 1)) {
            fVar44 = fVar51;
          }
          pfVar34[2] = fVar44;
        }
        else {
          fVar51 = (float)fmodf(uVar20,(float)uVar20);
          fVar49 = 0.0;
          pfVar34[2] = fVar51;
        }
      }
      pfVar34[3] = fVar49;
      pfVar34 = pfVar34 + 0x12;
      iStackX_18 = iStackX_18 + 1;
      uStack_110 = uStack_110 + 1;
    } while (uStack_110 < lVar42);
  }
  return;
}






// 函数: void FUN_1802d655a(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802d655a(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong unaff_RBP;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint64_t in_R10;
  float unaff_R12D;
  longlong unaff_R13;
  longlong *unaff_R14;
  float *pfVar17;
  longlong unaff_R15;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM5_Da;
  float unaff_XMM15_Da;
  float *pfStack0000000000000028;
  ushort *puStack0000000000000030;
  float *pfStack0000000000000038;
  char cStack0000000000000040;
  char cStack0000000000000044;
  longlong lStack0000000000000048;
  char cStack0000000000000050;
  char cStack0000000000000054;
  char in_stack_00000058;
  longlong in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t uStack0000000000000160;
  char in_stack_00000168;
  int in_stack_00000170;
  
  pfVar18 = (float *)(param_2 + unaff_R15 * 8);
  lStack0000000000000048 = param_1;
  uStack0000000000000160 = in_R10;
  do {
    pfVar1 = pfVar18 + -2;
    pfVar17 = (float *)((longlong)*(int *)(*unaff_R14 + lStack0000000000000048 * 8) * 0x70 +
                       *(longlong *)(unaff_RBP + 0x58));
    if (*(char *)(unaff_RBP + 0xa1) == '\0') {
      *pfVar1 = *pfVar17;
      pfVar18[-1] = pfVar17[1];
      *pfVar18 = pfVar17[2];
    }
    else {
      fVar23 = *(float *)(unaff_RBP + 0xb4);
      fVar24 = *(float *)(unaff_RBP + 0xb8);
      fVar26 = *pfVar17;
      fVar10 = *(float *)(unaff_RBP + 0xc4);
      fVar20 = *(float *)(unaff_RBP + 200);
      fVar19 = pfVar17[1];
      fVar22 = pfVar17[2];
      fVar25 = *(float *)(unaff_RBP + 0xd4);
      fVar21 = *(float *)(unaff_RBP + 0xd8);
      fVar5 = *(float *)(unaff_RBP + 0xe4);
      fVar6 = *(float *)(unaff_RBP + 0xe8);
      *pfVar1 = *(float *)(unaff_RBP + 0xb0) * fVar26 + *(float *)(unaff_RBP + 0xc0) * fVar19 +
                *(float *)(unaff_RBP + 0xd0) * fVar22 + *(float *)(unaff_RBP + 0xe0);
      *pfVar18 = fVar24 * fVar26 + fVar20 * fVar19 + fVar21 * fVar22 + fVar6;
      pfVar18[-1] = fVar23 * fVar26 + fVar10 * fVar19 + fVar25 * fVar22 + fVar5;
    }
    pfVar18[0xe] = pfVar17[0x17];
    pfVar18[1] = pfVar17[3];
    pfVar18[4] = pfVar17[0xb];
    pfVar18[0xb] = pfVar17[0x18];
    pfVar18[0xc] = pfVar17[0x19];
    pfVar18[0xd] = pfVar17[0x1a];
    fVar26 = *pfVar17 - pfVar17[4];
    if (cStack0000000000000040 == '\0') {
      pfVar18[7] = fVar26;
      fVar22 = pfVar17[1] - pfVar17[5];
      pfVar18[8] = fVar22;
      fVar19 = pfVar17[2] - pfVar17[6];
      pfVar18[9] = fVar19;
    }
    else {
      fVar19 = pfVar17[1] - pfVar17[5];
      fVar24 = pfVar17[2] - pfVar17[6];
      fVar22 = *(float *)(unaff_RBP + 0xb4) * fVar26;
      fVar23 = *(float *)(unaff_RBP + 0xb8) * fVar26;
      fVar26 = *(float *)(unaff_RBP + 0xc0) * fVar19 + *(float *)(unaff_RBP + 0xb0) * fVar26 +
               *(float *)(unaff_RBP + 0xd0) * fVar24;
      fVar22 = *(float *)(unaff_RBP + 0xc4) * fVar19 + fVar22 +
               *(float *)(unaff_RBP + 0xd4) * fVar24;
      fVar19 = *(float *)(unaff_RBP + 200) * fVar19 + fVar23 + *(float *)(unaff_RBP + 0xd8) * fVar24
      ;
      pfVar18[7] = fVar26;
      pfVar18[8] = fVar22;
      pfVar18[9] = fVar19;
    }
    pfVar18[7] = fVar26 * 60.0;
    pfVar18[8] = fVar22 * 60.0;
    pfVar18[9] = fVar19 * 60.0;
    fVar26 = pfVar17[9];
    fVar19 = pfVar17[8];
    pfStack0000000000000028 = pfVar17 + 0x14;
    puStack0000000000000030 = (ushort *)((longlong)pfVar17 + 0x52);
    pfStack0000000000000038 = pfVar17 + 0x15;
    FUN_1802cf260(uStack0000000000000160,in_stack_00000170,pfVar1,unaff_XMM15_Da * pfVar17[0xb],
                  param_4);
    in_XMM5_Da = fVar26 * in_XMM5_Da;
    pfVar18[10] = (float)((*(ushort *)(pfVar17 + 0x14) & 0xfff |
                          (uint)*(byte *)(pfVar17 + 0x15) << 0xc) << 0xc |
                         *(ushort *)((longlong)pfVar17 + 0x52) & 0xfff);
    pfVar18[5] = *(float *)(unaff_RBP + 0xa4);
    if (*(int *)(unaff_R13 + 0x10c) == 0) {
      fVar23 = (float)(int)in_XMM5_Da;
      fVar24 = (float)(int)(in_XMM5_Da + 1.0);
      in_XMM5_Da = in_XMM5_Da - (float)(int)fVar23;
      fVar22 = unaff_R12D;
      if ((-1 < (int)fVar24) && (fVar22 = fVar24, 0x31 < (int)fVar24)) {
        fVar22 = 6.86636e-44;
      }
      lVar13 = (longlong)(int)fVar22;
      fVar22 = unaff_R12D;
      if ((-1 < (int)fVar23) && (fVar22 = fVar23, 0x31 < (int)fVar23)) {
        fVar22 = 6.86636e-44;
      }
      fVar10 = pfVar17[0x11];
      lVar8 = (longlong)(int)fVar22;
      fVar22 = *(float *)(unaff_R13 + 0xbf0 + lVar8 * 0x10);
      fVar23 = *(float *)(unaff_R13 + 0xbf4 + lVar8 * 0x10);
      fVar22 = (*(float *)(unaff_R13 + 0xbf0 + lVar13 * 0x10) - fVar22) * in_XMM5_Da + fVar22;
      fVar24 = *(float *)(unaff_R13 + 0xbf8 + lVar8 * 0x10);
      fVar23 = (*(float *)(unaff_R13 + 0xbf4 + lVar13 * 0x10) - fVar23) * in_XMM5_Da + fVar23;
      fVar25 = *(float *)(unaff_R13 + 0xbfc + lVar8 * 0x10);
      fVar24 = (*(float *)(unaff_R13 + 0xbf8 + lVar13 * 0x10) - fVar24) * in_XMM5_Da + fVar24;
      fVar25 = (*(float *)(unaff_R13 + 0xbfc + lVar13 * 0x10) - fVar25) * in_XMM5_Da + fVar25;
      if (fVar10 != -NAN) {
        fVar20 = (float)((uint)fVar10 >> 0x10 & 0xff);
        fVar21 = (float)((uint)fVar10 >> 8 & 0xff);
        fVar24 = (float)((uint)fVar10 & 0xff) * (float)((uint)fVar10 & 0xff) * 1.5378702e-05 *
                 fVar24;
        fVar22 = fVar20 * fVar20 * 1.5378702e-05 * fVar22;
        fVar23 = fVar21 * fVar21 * 1.5378702e-05 * fVar23;
      }
    }
    else {
      fVar24 = pfVar17[0x11];
      fVar25 = (float)(int)(in_XMM5_Da + 1.0);
      fVar22 = (float)((uint)fVar24 >> 0x10 & 0xff) * 0.003921569;
      fVar20 = (float)(int)in_XMM5_Da;
      fVar23 = (float)((uint)fVar24 >> 8 & 0xff) * 0.003921569;
      fVar24 = (float)((uint)fVar24 & 0xff) * 0.003921569;
      fVar10 = unaff_R12D;
      if ((-1 < (int)fVar25) && (fVar10 = fVar25, 0x31 < (int)fVar25)) {
        fVar10 = 6.86636e-44;
      }
      fVar25 = unaff_R12D;
      if ((-1 < (int)fVar20) && (fVar25 = fVar20, 0x31 < (int)fVar20)) {
        fVar25 = 6.86636e-44;
      }
      fVar25 = *(float *)(unaff_R13 + 0xbfc + (longlong)(int)fVar25 * 0x10);
      fVar25 = (*(float *)(unaff_R13 + 0xbfc + (longlong)(int)fVar10 * 0x10) - fVar25) *
               (in_XMM5_Da - (float)(int)fVar20) + fVar25;
    }
    pfVar18[0xf] = pfVar17[0x1b];
    uVar7 = (uint)(longlong)(fVar25 * 255.9);
    uVar16 = 0xff;
    if (uVar7 < 0xff) {
      uVar16 = uVar7;
    }
    uVar11 = (uint)(longlong)(fVar22 * 255.9);
    uVar7 = 0xff;
    if (uVar11 < 0xff) {
      uVar7 = uVar11;
    }
    uVar12 = (uint)(longlong)(fVar23 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar14 = (uint)(longlong)(fVar24 * 255.9);
    uVar12 = 0xff;
    if (uVar14 < 0xff) {
      uVar12 = uVar14;
    }
    pfVar18[6] = (float)(((uVar16 << 8 | uVar7) << 8 | uVar11) << 8 | uVar12);
    if ((cStack0000000000000050 == '\0') || (in_stack_00000168 == '\0')) {
      if ((in_stack_00000058 == '\0') || (in_stack_00000168 == '\0')) {
        pfVar18[2] = unaff_R12D;
        fVar26 = 0.0;
      }
      else {
        iVar3 = *(int *)(unaff_R13 + 0xfc4);
        sVar2 = *(short *)((longlong)pfVar17 + 0x32);
        iVar4 = *(int *)(unaff_R13 + 0xfc8);
        pfVar18[2] = (float)((int)sVar2 % iVar3) / (float)iVar3;
        fVar26 = (float)((int)sVar2 / iVar3) / (float)iVar4;
      }
    }
    else {
      uVar16 = *(uint *)(unaff_R13 + 0xfcc);
      uVar9 = (ulonglong)uVar16;
      fVar19 = fVar19 * fVar26 * *(float *)(unaff_R13 + 0xfd0) +
               (float)(int)*(short *)((longlong)pfVar17 + 0x32);
      if (cStack0000000000000054 == '\0') {
        uVar15 = (ulonglong)fVar19;
        if (cStack0000000000000044 == '\0') {
          uVar9 = (ulonglong)(uVar16 - 1);
          if ((uint)uVar15 < uVar16 - 1) {
            uVar9 = uVar15 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar15 & 0xffffffff) % uVar9;
        }
        uVar16 = *(uint *)(unaff_R13 + 0xfc4);
        fVar26 = (float)(uVar9 / uVar16) / (float)*(int *)(unaff_R13 + 0xfc8);
        pfVar18[2] = (float)(uVar9 % (ulonglong)uVar16) / (float)(int)uVar16;
      }
      else if (cStack0000000000000044 == '\0') {
        fVar26 = 0.0;
        fVar22 = (float)(uVar16 - 1);
        if (fVar19 <= (float)(uVar16 - 1)) {
          fVar22 = fVar19;
        }
        pfVar18[2] = fVar22;
      }
      else {
        fVar19 = (float)fmodf(uVar9,(float)uVar9);
        fVar26 = 0.0;
        pfVar18[2] = fVar19;
      }
    }
    unaff_R14 = (longlong *)(unaff_RBP + 0xf8);
    pfVar18[3] = fVar26;
    pfVar18 = pfVar18 + 0x12;
    in_stack_00000170 = in_stack_00000170 + 1;
    lStack0000000000000048 = lStack0000000000000048 + 1;
    in_XMM5_Da = 49.0;
    param_4 = in_stack_00000078;
  } while (lStack0000000000000048 < in_stack_00000070);
  return;
}






// 函数: void FUN_1802d6c32(void)
void FUN_1802d6c32(void)

{
  return;
}






