#include "TaleWorlds.Native.Split.h"

// 03_rendering_part587.c - 1 个函数

// 函数: void FUN_18058e3b0(longlong param_1)
void FUN_18058e3b0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_30;
  ulonglong uVar12;
  
  if (((*(uint *)((longlong)*(int *)(param_1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(param_1 + 0xd0))
        >> 0x1d & 1) != 0) && (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 != 0)) {
    if ((*(longlong *)(lVar7 + 0xb8) == 0) && (*(longlong *)(lVar7 + 0xa8) != 0)) {
      uStack_30 = 0x18058e405;
      FUN_1800b4e00(param_1,lVar7,0xffffffff);
      lVar7 = *(longlong *)(param_1 + 0x38);
    }
    puVar6 = *(undefined8 **)(lVar7 + 0xb8);
    if (*(float *)(puVar6 + 0x25) == 0.0) {
      uVar10 = 0;
      fStack_b8 = -3.4028235e+38;
      fStack_b4 = -3.4028235e+38;
      fStack_b0 = -3.4028235e+38;
      uStack_7c = 0xff7fffff;
      lVar7 = puVar6[8];
      fStack_c8 = -3.4028235e+38;
      fStack_c4 = -3.4028235e+38;
      fStack_c0 = -3.4028235e+38;
      fStack_d8 = 3.4028235e+38;
      fStack_d4 = 3.4028235e+38;
      fStack_d0 = 3.4028235e+38;
      uStack_cc = 0x7f7fffff;
      lVar13 = puVar6[9] - lVar7 >> 0x3f;
      lVar15 = (puVar6[9] - lVar7) / 0x88 + lVar13;
      uVar9 = uVar10;
      uVar14 = uVar10;
      fStack_a8 = fStack_b8;
      fStack_a4 = fStack_b4;
      fStack_a0 = fStack_b0;
      if (lVar15 != lVar13) {
        do {
          lVar5 = *(longlong *)(lVar7 + 0x28 + uVar9);
          uVar16 = *(longlong *)(lVar7 + 0x30 + uVar9) - lVar5 >> 4;
          if (uVar16 != 0) {
            pfVar8 = (float *)(lVar5 + 8);
            uVar12 = uVar10;
            do {
              fStack_a8 = pfVar8[-2];
              fStack_b8 = fStack_a8;
              if (fStack_d8 <= fStack_a8) {
                fStack_b8 = fStack_d8;
              }
              fStack_a4 = pfVar8[-1];
              fStack_b4 = fStack_a4;
              if (fStack_d4 <= fStack_a4) {
                fStack_b4 = fStack_d4;
              }
              fStack_a0 = *pfVar8;
              fStack_b0 = fStack_a0;
              if (fStack_d0 <= fStack_a0) {
                fStack_b0 = fStack_d0;
              }
              fStack_d8 = fStack_b8;
              fStack_d4 = fStack_b4;
              fStack_d0 = fStack_b0;
              uStack_cc = uStack_ac;
              if (fStack_a8 <= fStack_c8) {
                fStack_a8 = fStack_c8;
              }
              if (fStack_a4 <= fStack_c4) {
                fStack_a4 = fStack_c4;
              }
              if (fStack_a0 <= fStack_c0) {
                fStack_a0 = fStack_c0;
              }
              fStack_c8 = fStack_a8;
              fStack_c4 = fStack_a4;
              fStack_c0 = fStack_a0;
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
              pfVar8 = pfVar8 + 4;
              uStack_7c = uStack_9c;
            } while ((ulonglong)(longlong)(int)uVar11 < uVar16);
          }
          uVar11 = (int)uVar14 + 1;
          uVar9 = uVar9 + 0x88;
          uVar14 = (ulonglong)uVar11;
          fStack_b8 = fStack_a8;
          fStack_b4 = fStack_a4;
          fStack_b0 = fStack_a0;
        } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar15 - lVar13));
      }
      pfVar8 = (float *)*puVar6;
      lVar7 = puVar6[1] - (longlong)pfVar8 >> 0x3f;
      lVar13 = (puVar6[1] - (longlong)pfVar8) / 0x30 + lVar7;
      if (lVar13 != lVar7) {
        uStack_30 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
        uVar9 = uVar10;
        do {
          fVar1 = *pfVar8;
          fStack_b8 = pfVar8[1];
          fVar2 = pfVar8[5];
          fStack_b0 = pfVar8[3];
          fStack_a8 = fStack_b8;
          if (fVar2 <= fStack_b8) {
            fStack_a8 = fVar2;
          }
          fStack_b4 = pfVar8[2];
          fVar3 = pfVar8[7];
          fVar4 = pfVar8[6];
          fStack_a0 = fStack_b0;
          if (fVar3 <= fStack_b0) {
            fStack_a0 = fVar3;
          }
          fStack_a4 = fStack_b4;
          if (fVar4 <= fStack_b4) {
            fStack_a4 = fVar4;
          }
          fStack_a8 = fStack_a8 - fVar1;
          fStack_a0 = fStack_a0 - fVar1;
          fStack_a4 = fStack_a4 - fVar1;
          if (fStack_d8 <= fStack_a8) {
            fStack_a8 = fStack_d8;
          }
          if (fStack_d4 <= fStack_a4) {
            fStack_a4 = fStack_d4;
          }
          if (fStack_d0 <= fStack_a0) {
            fStack_a0 = fStack_d0;
          }
          fStack_d8 = fStack_a8;
          fStack_d4 = fStack_a4;
          fStack_d0 = fStack_a0;
          uStack_cc = uStack_9c;
          if (fStack_b8 <= fVar2) {
            fStack_b8 = fVar2;
          }
          if (fStack_b0 <= fVar3) {
            fStack_b0 = fVar3;
          }
          if (fStack_b4 <= fVar4) {
            fStack_b4 = fVar4;
          }
          fStack_b8 = fStack_b8 + fVar1;
          fStack_b0 = fStack_b0 + fVar1;
          fStack_b4 = fStack_b4 + fVar1;
          if (fStack_b8 <= fStack_c8) {
            fStack_b8 = fStack_c8;
          }
          if (fStack_b4 <= fStack_c4) {
            fStack_b4 = fStack_c4;
          }
          if (fStack_b0 <= fStack_c0) {
            fStack_b0 = fStack_c0;
          }
          fStack_c8 = fStack_b8;
          fStack_c4 = fStack_b4;
          fStack_c0 = fStack_b0;
          uVar11 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar11;
          pfVar8 = pfVar8 + 0xc;
          uStack_7c = uStack_ac;
        } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar13 - lVar7));
      }
      lVar7 = puVar6[4];
      uVar14 = puVar6[5] - lVar7 >> 5;
      uVar9 = uVar10;
      if (uVar14 != 0) {
        do {
          fStack_b0 = *(float *)(lVar7 + uVar10);
          fStack_b8 = *(float *)(lVar7 + 4 + uVar10);
          fStack_b4 = *(float *)(lVar7 + 8 + uVar10);
          fVar1 = *(float *)(lVar7 + 0xc + uVar10);
          fStack_a8 = fStack_b8 - fStack_b0;
          fStack_a4 = fStack_b4 - fStack_b0;
          fStack_a0 = fVar1 - fStack_b0;
          if (fStack_d8 <= fStack_a8) {
            fStack_a8 = fStack_d8;
          }
          if (fStack_d4 <= fStack_a4) {
            fStack_a4 = fStack_d4;
          }
          if (fStack_d0 <= fStack_a0) {
            fStack_a0 = fStack_d0;
          }
          fStack_d8 = fStack_a8;
          fStack_d4 = fStack_a4;
          fStack_d0 = fStack_a0;
          uStack_cc = uStack_9c;
          fStack_b8 = fStack_b0 + fStack_b8;
          if (fStack_b8 <= fStack_c8) {
            fStack_b8 = fStack_c8;
          }
          fStack_b4 = fStack_b0 + fStack_b4;
          fStack_b0 = fStack_b0 + fVar1;
          if (fStack_b4 <= fStack_c4) {
            fStack_b4 = fStack_c4;
          }
          if (fStack_b0 <= fStack_c0) {
            fStack_b0 = fStack_c0;
          }
          fStack_c8 = fStack_b8;
          fStack_c4 = fStack_b4;
          fStack_c0 = fStack_b0;
          uVar11 = (int)uVar9 + 1;
          uVar10 = uVar10 + 0x20;
          uVar9 = (ulonglong)uVar11;
          uStack_7c = uStack_ac;
        } while ((ulonglong)(longlong)(int)uVar11 < uVar14);
      }
      fStack_98 = fStack_d8;
      fStack_94 = fStack_d4;
      fStack_90 = fStack_d0;
      uStack_8c = uStack_cc;
      fStack_88 = fStack_b8;
      fStack_84 = fStack_b4;
      fStack_80 = fStack_b0;
      FUN_1800b9f60(&fStack_98);
      puVar6[0x1f] = CONCAT44(fStack_94,fStack_98);
      puVar6[0x20] = CONCAT44(uStack_8c,fStack_90);
      puVar6[0x21] = CONCAT44(fStack_84,fStack_88);
      puVar6[0x22] = CONCAT44(uStack_7c,fStack_80);
      puVar6[0x23] = uStack_78;
      puVar6[0x24] = uStack_70;
      *(undefined4 *)(puVar6 + 0x25) = uStack_68;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



