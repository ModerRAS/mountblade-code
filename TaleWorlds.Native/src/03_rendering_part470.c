#include "TaleWorlds.Native.Split.h"

// 03_rendering_part470.c - 1 个函数

// 函数: void FUN_18051d2d0(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)
void FUN_18051d2d0(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStackX_8;
  uint uStack_264;
  uint uStack_260;
  undefined *puStack_258;
  undefined4 *puStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined8 uStack_228;
  int iStack_220;
  undefined8 uStack_218;
  float fStack_210;
  undefined4 uStack_20c;
  uint uStack_208;
  uint uStack_204;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_260 = 0;
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
    bVar20 = 1;
  }
  else {
    bVar20 = 0;
  }
  iStackX_8 = CONCAT31(iStackX_8._1_3_,bVar20);
  if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x728);
    uVar2 = *(ushort *)(lVar15 + 0x5aa);
    if (uVar2 != 0) {
      *(ushort *)(lVar15 + 0x5ac) = *(ushort *)(lVar15 + 0x5ac) | uVar2;
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
      *puVar1 = *puVar1 & ~uVar2;
      lVar15 = *(longlong *)(param_1 + 0x728);
    }
    *(undefined4 *)(lVar15 + 0x5a4) = 0xffffffff;
  }
  if (bVar20 == 0) {
    iVar7 = *(int *)(param_2 + 0xb0);
  }
  else {
    iVar7 = *(int *)((longlong)param_3 + 0x2c);
  }
  if ((-1 < iVar7) &&
     (iVar8 = *(int *)((longlong)iVar7 * 0xa60 + 0x3600 + *(longlong *)(param_1 + 0x8d8)),
     -1 < iVar8)) {
    iVar7 = iVar8;
  }
  iStack_220 = iVar7;
  cVar6 = func_0x000180522f60(param_1);
  if (cVar6 == '\0') {
    if (bVar20 != 0) goto LAB_18051d578;
  }
  else {
    *(undefined1 *)(param_1 + 0x588) = 1;
    if (bVar20 != 0) goto LAB_18051d578;
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      plVar3 = *(longlong **)(param_1 + 0x8e0);
      iVar7 = _Mtx_lock(0x180c95528);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      uVar24 = *(undefined4 *)(*plVar3 + 0x10);
      cVar6 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
      if ((cVar6 != '\0') && (cVar6 = FUN_180645c10(0x180c95578,4,&UNK_1809fa540), cVar6 != '\0')) {
        FUN_180645c10(0x180c95578,uVar24,&UNK_1809fa510);
      }
      lVar15 = *(longlong *)(*plVar3 + 0x8e8);
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      iVar7 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      if (0 < iVar7) {
        lVar14 = 0;
        lVar16 = _DAT_180c92cd8;
        do {
          lVar4 = *(longlong *)(lVar16 + lVar14 * 8);
          if (((lVar4 != 0) && (*(char *)(*(longlong *)(lVar4 + 0x58f8) + 0x1c) != '\0')) &&
             (*(longlong *)(lVar4 + 0x58f8) != lVar15)) {
            FUN_1805b59d0(lVar4,0x180c95578);
            lVar16 = _DAT_180c92cd8;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar7);
      }
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580,0x180c95578);
      }
      _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
      memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x6e0);
  if ((((byte)*(undefined4 *)(lVar15 + 0x209c) & 3) == 3) && (*(int *)(lVar15 + 0x2108) != -1)) {
    FUN_1804f8b80(*(undefined8 *)(param_1 + 0x8d8),*(undefined8 *)(lVar15 + 0x20f0));
  }
LAB_18051d578:
  if (*(int *)(param_1 + 0x570) == 2) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + 0x8fd220) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d228) = 0;
  }
  if (iVar7 < 0) {
    uStack_264 = 0;
    puVar9 = &uStack_264;
    uVar23 = 2;
    uStack_260 = 2;
    uStack_208 = 0;
  }
  else {
    puVar9 = (uint *)FUN_180507810((longlong)iVar7 * 0xa60 + *(longlong *)(param_1 + 0x8d8) + 0x30a0
                                   ,&uStack_228);
    uVar23 = 1;
    uStack_260 = 1;
    uStack_208 = *puVar9;
  }
  uStack_204 = uStack_208;
  *puVar9 = 0;
  if ((((uVar23 & 2) != 0) && (uVar23 = uVar23 & 0xfffffffd, uStack_260 = uVar23, uStack_264 != 0))
     && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  if ((((uVar23 & 1) != 0) &&
      (uVar23 = uVar23 & 0xfffffffe, uStack_260 = uVar23, (int)uStack_228 != 0)) &&
     (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  if (bVar20 == 0) {
    uStack_264 = FUN_18051cdd0(param_1,param_2);
  }
  else {
    uStack_264 = *(uint *)(param_3 + 4);
  }
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x598) + 0x120);
  piVar17 = (int *)*puVar5;
  puVar10 = puVar5;
  if (piVar17 == (int *)0x0) {
    puVar10 = puVar5 + 1;
    piVar17 = (int *)*puVar10;
    while (piVar17 == (int *)0x0) {
      puVar10 = puVar10 + 1;
      piVar17 = (int *)*puVar10;
    }
  }
  if (piVar17 != (int *)puVar5[*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x128)]) {
    do {
      uVar21 = piVar17[1];
      if ((uStack_264 == uVar21) ||
         ((((longlong)(int)uStack_264 != -1 && (uVar21 != 0xffffffff)) &&
          ((lVar15 = *(longlong *)
                      ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 +
                       _DAT_180c95fb0 + 0x78),
           iVar7 = *(int *)(lVar15 + 4 + (longlong)(int)uStack_264 * 8),
           iVar7 == *(int *)(lVar15 + 4 + (longlong)(int)uVar21 * 8) && (iVar7 != -1)))))) {
        iStackX_8 = (*piVar17 >> 10 & 7U) - 1;
        break;
      }
      piVar17 = *(int **)(piVar17 + 2);
      while (piVar17 == (int *)0x0) {
        puVar10 = puVar10 + 1;
        piVar17 = (int *)*puVar10;
      }
    } while (piVar17 != (int *)puVar5[*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x128)]);
  }
  if ((bVar20 == 0) && (iStackX_8 == 4)) {
    cVar6 = '\0';
    if (-1 < *(char *)(param_2 + 0xb4)) {
      cVar6 = *(char *)(param_2 + 0xb4);
    }
    FUN_180525ac0(param_1,cVar6);
  }
  uVar24 = *(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xac);
  iVar7 = FUN_18053a410(&DAT_180c95f30,uVar24,uStack_264);
  iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
  if (iVar7 == -1) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
  }
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar25 = *(float *)(lVar15 + 0x1d8);
  fVar28 = *(float *)(lVar15 + 0x188);
  iVar7 = *(int *)(lVar15 + 0x1f0);
  while ((fVar25 == 0.0 && (iVar7 != -1))) {
    fVar29 = fVar29 + fVar28;
    iVar7 = FUN_18053a410(&DAT_180c95f30,uVar24,*(undefined4 *)(lVar15 + 0x1f0));
    iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
    if (iVar7 == -1) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
    }
    fVar25 = *(float *)(lVar16 + 0x1d8);
    fVar28 = *(float *)(lVar16 + 0x188);
    iVar7 = *(int *)(lVar16 + 0x1f0);
  }
  fVar29 = fVar29 + fVar28 * fVar25;
  if ((*(uint *)(param_1 + 0x56c) >> 0xe & 1) != 0) {
    fVar25 = *(float *)(lVar15 + 0x1e0);
    fVar28 = *(float *)(lVar15 + 0x188);
    iVar7 = *(int *)(lVar15 + 0x1f0);
    while ((fVar25 == 0.0 && (iVar7 != -1))) {
      fVar30 = fVar30 + fVar28;
      iVar7 = FUN_18053a410(&DAT_180c95f30,uVar24,*(undefined4 *)(lVar15 + 0x1f0));
      iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
      if (iVar7 == -1) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
      }
      fVar25 = *(float *)(lVar16 + 0x1e0);
      fVar28 = *(float *)(lVar16 + 0x188);
      iVar7 = *(int *)(lVar16 + 0x1f0);
    }
    fVar30 = fVar30 + fVar28 * fVar25;
  }
  if (fVar29 < 0.01) {
    fVar29 = 0.5;
  }
  if (fVar29 <= fVar30) {
    fVar30 = fVar29;
  }
  uStack_228 = (ulonglong)bVar20 << 0x1f;
  *(float *)(param_1 + 0xa08) = fVar29;
  *(float *)(param_1 + 0xa0c) = fVar30;
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    FUN_18051fa40(param_1,4);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x48) < _DAT_180d49ed8) && (FUN_1808fcb90(&DAT_180d49ed8), _DAT_180d49ed8 == -1)) {
      puStack_258 = &UNK_180a3c3e0;
      uStack_240 = 0;
      uStack_23c = 0;
      puStack_250 = (undefined4 *)0x0;
      uStack_248 = 0;
      puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(undefined1 *)puVar11 = 0;
      puStack_250 = puVar11;
      uStack_240 = FUN_18064e990(puVar11);
      *puVar11 = 0x74616544;
      *(undefined2 *)(puVar11 + 1) = 0x68;
      uStack_248 = 5;
      _DAT_180d49edc = FUN_180571e20(&DAT_180c960c0,&puStack_258);
      puStack_258 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar11);
    }
    lVar15 = 0;
    FUN_180508510(param_1,_DAT_180d49edc,0,0);
    uStack_248 = 0;
    uStack_230 = 0x1000000;
    uStack_244 = 0;
    uStack_240 = 0x3f800000;
    uStack_23c = 0xbe4ccccd;
    uStack_238 = 0xbe4ccccd;
    uStack_234 = 0x3ecccccd;
    uStack_22c = 0;
    puStack_258 = (undefined *)((ulonglong)uStack_264 << 0x20);
    puStack_250 = (undefined4 *)uStack_228;
    FUN_18051ec50(param_1,&puStack_258);
    uVar21 = *(uint *)(*(longlong *)(param_1 + 0x590) + 0x2450);
    uStack_264 = uVar21;
    iVar7 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xac),
                          uVar21);
    iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
    if (iVar7 != -1) {
      lVar15 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
    }
    if (iStackX_8 == 1) {
      if (*(float *)(lVar15 + 0x1dc) <= 0.0) {
        fVar25 = *(float *)(lVar15 + 0x1e8) - *(float *)(lVar15 + 0x188);
      }
      else {
        fVar25 = -*(float *)(lVar15 + 0x1dc);
      }
      *(float *)(param_1 + 0x584) = fVar25;
    }
    if (-1 < *(int *)(param_1 + 0x560)) {
      uStack_248 = 0;
      uStack_230 = 0x1000000;
      uStack_244 = 0;
      uStack_240 = 0x3f800000;
      uStack_23c = 0xbe4ccccd;
      uStack_238 = 0xbe4ccccd;
      uStack_234 = 0x3ecccccd;
      uStack_22c = 0;
      puStack_258 = (undefined *)((ulonglong)uVar21 << 0x20);
      puStack_250 = (undefined4 *)0x80000000;
      lVar15 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x560) * 0xa60
      ;
      FUN_18051ec50(lVar15,&puStack_258);
      iVar7 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(lVar15 + 0x590) + 0xac),
                            uVar21);
      iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
      if (iVar7 == -1) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
      }
      if (iStackX_8 == 1) {
        *(undefined4 *)(lVar15 + 0x670) = 0xffffffff;
        fVar25 = *(float *)(lVar16 + 0x1dc);
        *(float *)(lVar15 + 0x584) = -fVar25;
        if (fVar25 <= -0.0) {
          *(float *)(lVar15 + 0x584) = *(float *)(lVar16 + 0x1e8) - *(float *)(lVar16 + 0x188);
        }
      }
      *(longlong *)(lVar15 + 0x6b8) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar15 + 0x6c0) * 8) + 200000;
      lVar14 = FUN_180532320(lVar16);
      FUN_18052e450(lVar15,0xffffffff,1,*(float *)(lVar16 + 0x188) * *(float *)(lVar14 + 8));
      FUN_18052e130(param_1,0xffffffff,1);
      uVar21 = uStack_264;
      if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
        FUN_180530dd0(lVar15);
        uVar21 = uStack_264;
      }
    }
    *(longlong *)(param_1 + 0xa10) =
         *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa18) * 8) + 10000;
    *(undefined8 *)(param_1 + 0x9f8) =
         *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8);
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x590);
    uVar19 = *(ulonglong *)(lVar15 + 0x2460);
    if (uVar19 != 0) {
      uVar19 = *(ulonglong *)(uVar19 + 0x1d0);
    }
    uVar18 = uVar19 & 0xffffffffffffff00;
    if ((char)*(ulonglong *)(lVar15 + 0x2470) == '\0') {
      uVar18 = uVar19;
    }
    uVar19 = *(ulonglong *)(lVar15 + 0x24a8);
    if (uVar19 != 0) {
      uVar19 = *(ulonglong *)(uVar19 + 0x1d0);
    }
    uVar13 = uVar19 & 0xffffffffffffff00;
    if ((char)*(ulonglong *)(lVar15 + 0x24b8) == '\0') {
      uVar13 = uVar19;
    }
    puStack_250 = (undefined4 *)
                  ((uVar13 | uVar18 | *(ulonglong *)(lVar15 + 0x2470) |
                   *(ulonglong *)(lVar15 + 0x24b8)) & 0x200 | uStack_228);
    uStack_248 = 0;
    uStack_230 = 0x1000000;
    uStack_244 = 0;
    uStack_240 = 0x3f800000;
    uStack_23c = 0xbe4ccccd;
    uStack_238 = 0xbe4ccccd;
    uStack_234 = 0x3ecccccd;
    uStack_22c = 0;
    puStack_258 = (undefined *)((ulonglong)uStack_264 << 0x20);
    FUN_18051ec50(param_1,&puStack_258);
    lVar15 = *(longlong *)(param_1 + 0x590);
    uStack_264 = *(uint *)(lVar15 + 0x2450);
    if ((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0xabf0), lVar15 != 0)) {
      *(undefined4 *)(lVar15 + 0x28) = 0xbe99999a;
      *(undefined4 *)(lVar15 + 0x2c) = 0x3f000000;
      *(undefined4 *)(lVar15 + 0x30) = 0x49742400;
      *(undefined4 *)(lVar15 + 0x34) = 0x3e4ccccd;
    }
    if (bVar20 == 0) {
      uVar24 = *(undefined4 *)(param_2 + 0xb8);
      uVar22 = *(undefined8 *)(param_2 + 0x38);
    }
    else {
      uVar24 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar22 = param_3[10];
    }
    uStack_218 = _DAT_180c8ece0;
    iVar7 = *(int *)(param_1 + 0x18);
    uStack_228 = CONCAT44(uStack_228._4_4_,iVar7);
    if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar7);
    }
    uStack_260 = uVar23 | 8;
    iVar8 = (**(code **)(uStack_218 + 0x1e8))
                      (*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),uStack_208,iVar7,
                       uVar24,uVar22);
    uStack_260 = uVar23;
    if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar7);
    }
    FUN_18051fa40(param_1,iVar8);
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                    + 0x48);
    if (iVar8 == 4) {
      uVar12 = _DAT_180d49ee4;
      if ((iVar7 < _DAT_180d49ee0) &&
         (FUN_1808fcb90(&DAT_180d49ee0), uVar12 = _DAT_180d49ee4, _DAT_180d49ee0 == -1)) {
        puStack_258 = &UNK_180a3c3e0;
        uStack_240 = 0;
        uStack_23c = 0;
        puStack_250 = (undefined4 *)0x0;
        uStack_248 = 0;
        puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar11 = 0;
        puStack_250 = puVar11;
        uStack_240 = FUN_18064e990(puVar11);
        *puVar11 = 0x74616544;
        *(undefined2 *)(puVar11 + 1) = 0x68;
        uStack_248 = 5;
        _DAT_180d49ee4 = FUN_180571e20(&DAT_180c960c0,&puStack_258);
        puStack_258 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
    }
    else {
      uVar12 = _DAT_180d49eec;
      if ((iVar7 < _DAT_180d49ee8) &&
         (FUN_1808fcb90(&DAT_180d49ee8), uVar12 = _DAT_180d49eec, _DAT_180d49ee8 == -1)) {
        puStack_258 = &UNK_180a3c3e0;
        uStack_240 = 0;
        uStack_23c = 0;
        puStack_250 = (undefined4 *)0x0;
        uStack_248 = 0;
        puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar11 = 0;
        puStack_250 = puVar11;
        uStack_240 = FUN_18064e990(puVar11);
        *puVar11 = 0x6e757453;
        *(undefined1 *)(puVar11 + 1) = 0;
        uStack_248 = 4;
        _DAT_180d49eec = FUN_180571e20(&DAT_180c960c0,&puStack_258);
        puStack_258 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
    }
    FUN_180508510(param_1,uVar12,0,0);
    if ((DAT_180c8ec8a != '\0') && (*(int *)(param_1 + 0x570) == 2)) {
      FUN_180541010(*(undefined8 *)(param_1 + 0x6d8),0x21);
    }
    uVar21 = uStack_264;
    iVar7 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xac),
                          uStack_264);
    iVar7 = *(int *)(_DAT_180c95f68 + (longlong)iVar7 * 4);
    lVar15 = 0;
    if (iVar7 != -1) {
      lVar15 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar7 * 8);
    }
    if (bVar20 == 0) {
      if ((*(char *)(param_2 + 0x50) == '\0') ||
         (fVar25 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 1.5,
         *(float *)(param_2 + 0x90) <= fVar25 && fVar25 != *(float *)(param_2 + 0x90))) {
        *(undefined8 *)(param_1 + 0xa20) = 0;
        *(undefined8 *)(param_1 + 0xa28) = 0;
        *(undefined8 *)(param_1 + 0xa30) = 0;
        *(undefined8 *)(param_1 + 0xa38) = 0;
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_180534930(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x70,
                                &puStack_258,param_2 + 0x58);
        uVar22 = puVar10[1];
        *(undefined8 *)(param_1 + 0xa20) = *puVar10;
        *(undefined8 *)(param_1 + 0xa28) = uVar22;
        *(undefined8 *)(param_1 + 0xa08) = 0;
        if (((*(uint *)(param_2 + 0x38) >> 0xd & 1) == 0) || (*(char *)(param_2 + 0xb4) != -1)) {
          fVar25 = *(float *)(param_2 + 0x4c);
          fStack_210 = fVar25 * *(float *)(param_2 + 0x28);
          fVar28 = fVar25 * *(float *)(param_2 + 0x24);
          fVar25 = fVar25 * *(float *)(param_2 + 0x20);
          uStack_218 = CONCAT44(fVar28,fVar25);
          *(float *)(param_1 + 0xa30) = fVar25;
          *(float *)(param_1 + 0xa34) = fVar28;
          *(float *)(param_1 + 0xa38) = fStack_210;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0x20);
          fVar32 = *(float *)(lVar16 + 0x14) - *(float *)(param_2 + 0x18);
          fVar31 = *(float *)(lVar16 + 0x10) - *(float *)(param_2 + 0x14);
          fVar30 = *(float *)(lVar16 + 0xc) - *(float *)(param_2 + 0x10);
          fVar28 = fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32;
          auVar26 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
          fVar25 = auVar26._0_4_;
          fVar29 = fVar25 * 0.5 * (3.0 - fVar28 * fVar25 * fVar25);
          fVar25 = (SQRT(*(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
                         *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24) +
                         *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28)) *
                   *(float *)(param_2 + 0x4c)) / (fVar29 * fVar28);
          fStack_210 = fVar32 * fVar29 * fVar25;
          fVar28 = fVar31 * fVar29 * fVar25;
          fVar25 = fVar30 * fVar29 * fVar25;
          uStack_218 = CONCAT44(fVar28,fVar25);
          *(float *)(param_1 + 0xa30) = fVar25;
          *(float *)(param_1 + 0xa34) = fVar28;
          *(float *)(param_1 + 0xa38) = fStack_210;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
        uStack_20c = 0x7f7fffff;
        if (250000.0 <
            *(float *)(param_1 + 0xa30) * *(float *)(param_1 + 0xa30) +
            *(float *)(param_1 + 0xa34) * *(float *)(param_1 + 0xa34) +
            *(float *)(param_1 + 0xa38) * *(float *)(param_1 + 0xa38)) {
          fVar25 = *(float *)(param_1 + 0xa30);
          fVar28 = *(float *)(param_1 + 0xa34);
          fVar29 = *(float *)(param_1 + 0xa38);
          auVar26._4_4_ = fVar29;
          auVar26._0_4_ = fVar29;
          auVar26._8_4_ = fVar29;
          auVar26._12_4_ = fVar29;
          auVar27._4_12_ = auVar26._4_12_;
          auVar27._0_4_ = fVar29 * fVar29;
          fVar31 = fVar28 * fVar28 + fVar25 * fVar25 + auVar27._0_4_;
          auVar26 = rsqrtss(auVar27,ZEXT416((uint)fVar31));
          fVar30 = auVar26._0_4_;
          fVar30 = fVar30 * 0.5 * (3.0 - fVar31 * fVar30 * fVar30);
          uStack_20c = 0x7f7fffff;
          *(float *)(param_1 + 0xa30) = fVar25 * fVar30 * 500.0;
          *(float *)(param_1 + 0xa34) = fVar28 * fVar30 * 500.0;
          *(float *)(param_1 + 0xa38) = fVar29 * fVar30 * 500.0;
          *(undefined4 *)(param_1 + 0xa3c) = 0x7f7fffff;
        }
      }
    }
    else {
      if (((*(float *)(param_3 + 2) != 0.0) || (*(float *)((longlong)param_3 + 0x14) != 0.0)) ||
         (*(float *)(param_3 + 3) != 0.0)) {
        *(undefined8 *)(param_1 + 0xa08) = 0;
      }
      uVar22 = param_3[1];
      *(undefined8 *)(param_1 + 0xa20) = *param_3;
      *(undefined8 *)(param_1 + 0xa28) = uVar22;
      uVar22 = param_3[3];
      *(undefined8 *)(param_1 + 0xa30) = param_3[2];
      *(undefined8 *)(param_1 + 0xa38) = uVar22;
    }
    *(longlong *)(param_1 + 0xa10) =
         *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa18) * 8) + 10000;
    *(undefined8 *)(param_1 + 0x9f8) =
         *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8);
    if (-1 < *(int *)(param_1 + 0x564)) {
      lVar16 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60
      ;
      *(undefined4 *)(lVar16 + 0x4c8) = 0;
      *(undefined8 *)(lVar16 + 0x4cc) = 0;
      puVar1 = (ushort *)(*(longlong *)(lVar16 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x200;
      fVar25 = *(float *)(lVar15 + 0x1dc);
      if (fVar25 <= 0.0) {
        fVar25 = *(float *)(lVar15 + 0x188);
      }
      *(longlong *)(lVar16 + 0x6c8) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar16 + 0x6d0) * 8) -
           (longlong)(fVar25 * -100000.0);
      if (*(int *)(lVar16 + 0x560) == *(int *)(param_1 + 0x10)) {
        FUN_18052e130(lVar16,0xffffffff,1);
      }
      FUN_1805b8920(*(undefined8 *)(lVar16 + 0x6e0));
      *(undefined4 *)(*(longlong *)(lVar16 + 0x738) + 0xa4) =
           *(undefined4 *)(*(longlong *)(lVar16 + 0x6e0) + 0x14a8);
      lStack_108 = *(longlong *)(lVar16 + 0x9d8);
      lVar15 = *(longlong *)(lVar16 + 0x20);
      if ((lStack_108 == 0) ||
         (cVar6 = FUN_18038d0a0(lStack_108,lVar15 + 0xc), lStack_110 = lStack_108, cVar6 == '\0')) {
        lStack_110 = 0;
      }
      uStack_118 = *(undefined8 *)(*(longlong *)(lVar16 + 0x8d8) + 0x18);
      uStack_100 = *(undefined8 *)(lVar15 + 0xc);
      uStack_f8 = *(undefined8 *)(lVar15 + 0x14);
      uStack_f0 = *(undefined4 *)(lVar15 + 0xb0);
      uStack_ec = *(undefined4 *)(lVar15 + 0xb4);
      uStack_e8 = *(undefined4 *)(lVar15 + 0xb8);
      uStack_e4 = *(undefined4 *)(lVar15 + 0xbc);
      uStack_d8 = 3;
      uStack_e0 = uStack_100;
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  fVar25 = _DAT_180c96488;
  uStack_130 = 0xffffffff;
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
    uStack_188 = *param_3;
    uStack_180 = param_3[1];
    uStack_178 = param_3[2];
    uStack_170 = param_3[3];
    uStack_168 = param_3[4];
    uStack_160._0_4_ = (undefined4)param_3[5];
    uStack_158 = param_3[6];
    uStack_150 = param_3[7];
    uStack_148 = param_3[8];
    uStack_140 = param_3[9];
    uStack_138 = *(undefined4 *)(param_3 + 10);
    uStack_134 = *(undefined4 *)((longlong)param_3 + 0x54);
    uStack_130 = *(undefined4 *)(param_3 + 0xb);
    uStack_12c = *(undefined4 *)((longlong)param_3 + 0x5c);
    uStack_128 = param_3[0xc];
  }
  else {
    if (*(char *)(param_2 + 0x50) == '\0') {
      iVar7 = *(int *)(param_2 + 0xb0);
      if ((-1 < iVar7) && (-1 < *(int *)(param_2 + 0x48))) {
        uStack_130 = *(undefined4 *)
                      ((longlong)*(int *)(param_2 + 0x48) * 0x1f8 + 0x38 +
                      *(longlong *)
                       ((longlong)iVar7 * 0xa60 + 0x3998 + *(longlong *)(param_1 + 0x8d8)));
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0xb0);
      uStack_130 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x87b340) +
                        (ulonglong)(*(uint *)(param_2 + 0x48) >> 4) * 8) + 0xf0 +
                      (ulonglong)(*(uint *)(param_2 + 0x48) & 0xf) * 0xbe0) + 0x30);
    }
    uStack_188 = *(undefined8 *)(param_1 + 0xa20);
    uStack_180 = *(undefined8 *)(param_1 + 0xa28);
    uStack_178 = *(undefined8 *)(param_1 + 0xa30);
    uStack_170 = *(undefined8 *)(param_1 + 0xa38);
    uStack_1d8 = CONCAT44(*(undefined4 *)(param_2 + 0xb8),uVar21);
    uStack_160._0_4_ = *(undefined4 *)(param_2 + 0xa8);
    uStack_1d0 = CONCAT44(iVar7,(undefined4)uStack_160);
    uStack_1c8 = CONCAT71(uStack_1c8._1_7_,*(undefined1 *)(param_2 + 0xb5));
    uStack_1c8 = CONCAT44(*(undefined4 *)(param_2 + 0x40),(undefined4)uStack_1c8);
    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,param_4);
    uStack_1bc = (undefined4)*(undefined8 *)(param_2 + 0x58);
    uStack_1b8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
    uStack_1b4 = (undefined4)*(undefined8 *)(param_2 + 0x60);
    uStack_1b0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    uVar22 = *(undefined8 *)(param_2 + 0x38);
    uStack_12c = *(undefined4 *)(param_2 + 0x88);
    uStack_198._0_2_ = CONCAT11(1,*(char *)(param_2 + 0x50));
    uStack_168 = uStack_1d8;
    uStack_150 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_158 = uStack_1c8;
    uStack_148 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_140 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_1a8._0_4_ = (undefined4)uVar22;
    uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
    uStack_138 = (undefined4)uStack_1a8;
    uStack_134 = uStack_1a8._4_4_;
    uStack_128 = uStack_198;
    uStack_1a8 = uVar22;
    uStack_1a0 = uStack_130;
    uStack_19c = uStack_12c;
  }
  uStack_160 = CONCAT44(iStack_220,(undefined4)uStack_160);
  if (((bVar20 == 0) && ((_DAT_180c92514 - 2U & 0xfffffffc) == 0)) && (_DAT_180c92514 != 4)) {
    plVar3 = *(longlong **)(param_1 + 0x8e0);
    iVar7 = _Mtx_lock(0x180c95528);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    FUN_1805ae650(0x180c95578,*(undefined4 *)(*plVar3 + 0x10),&uStack_188);
    lVar16 = 0;
    _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
    iVar7 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
    lVar15 = _DAT_180c92cd8;
    if (0 < iVar7) {
      do {
        lVar14 = *(longlong *)(lVar15 + lVar16 * 8);
        if ((lVar14 != 0) && (*(char *)(*(longlong *)(lVar14 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar14,0x180c95578);
          lVar15 = _DAT_180c92cd8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
    }
    if (_DAT_180c96070 != 0) {
      FUN_180567f30(_DAT_180c92580,0x180c95578);
    }
    _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
    memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
  }
  *(float *)(param_1 + 0xa30) = _DAT_180c96488 * *(float *)(param_1 + 0xa30);
  *(float *)(param_1 + 0xa34) = fVar25 * *(float *)(param_1 + 0xa34);
  *(float *)(param_1 + 0xa38) = fVar25 * *(float *)(param_1 + 0xa38);
  if (iStack_220 < 0) {
    iVar7 = 0;
    uVar21 = uStack_260;
  }
  else {
    iVar7 = *(int *)((longlong)iStack_220 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x8d8));
    uVar21 = uVar23;
    if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
      uStack_228._0_4_ = iVar7;
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar7);
    }
  }
  uStack_260 = uVar21;
  lVar15 = _DAT_180c8ece0;
  uVar24 = *(undefined4 *)(param_1 + 0x568);
  iVar8 = *(int *)(param_1 + 0x18);
  uStack_228 = CONCAT44(uStack_228._4_4_,iVar8);
  if ((iVar8 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar8);
  }
  uStack_260 = uVar23 | 0x20;
  uStack_1f8 = uStack_188;
  uStack_1f0 = uStack_180;
  uStack_1e8 = uStack_178;
  uStack_1e0 = uStack_170;
  uStack_1d8 = uStack_168;
  uStack_1d0 = uStack_160;
  uStack_1c8 = uStack_158;
  uStack_1c0 = (undefined4)uStack_150;
  uStack_1bc = (undefined4)((ulonglong)uStack_150 >> 0x20);
  uStack_1b8 = (undefined4)uStack_148;
  uStack_1b4 = (undefined4)((ulonglong)uStack_148 >> 0x20);
  uStack_1b0 = (undefined4)uStack_140;
  uStack_1ac = (undefined4)((ulonglong)uStack_140 >> 0x20);
  uStack_1a8 = CONCAT44(uStack_134,uStack_138);
  uStack_1a0 = uStack_130;
  uStack_19c = uStack_12c;
  uStack_198 = uStack_128;
  (**(code **)(lVar15 + 0x238))
            (*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),iVar8,iVar7,uVar24,
             &uStack_1f8);
  uStack_260 = uVar23;
  if ((iVar8 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar8);
  }
  if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar7);
  }
  if ((uStack_208 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  return;
}





