#include "TaleWorlds.Native.Split.h"

// 03_rendering_part469.c - 4 个函数

// 函数: void FUN_18051bd60(longlong param_1,undefined8 *param_2,char param_3,float *param_4)
void FUN_18051bd60(longlong param_1,undefined8 *param_2,char param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)&fStack_108;
  puVar12 = (uint *)((longlong)param_3 * 0x100 +
                    *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_c8 = *(undefined8 *)(puVar12 + 5);
  uStack_f0 = *(undefined8 *)(puVar12 + 7);
  fStack_d4 = (float)puVar12[2];
  fStack_e4 = (float)puVar12[3];
  *puVar12 = 0;
  fVar15 = *(float *)(param_1 + 0x534);
  fVar2 = *(float *)(param_1 + 0x524);
  fVar3 = *param_4;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fStack_108 = *(float *)(lVar11 + 0x84);
  fVar6 = *(float *)(lVar11 + 0x80);
  fVar7 = *(float *)(lVar11 + 0x70);
  fVar8 = *(float *)(lVar11 + 0x74);
  fVar9 = *(float *)(lVar11 + 0xa0);
  fStack_104 = *(float *)(lVar11 + 0xa4);
  fStack_100 = *(float *)(lVar11 + 0x98);
  fStack_fc = *(float *)(lVar11 + 0xa8);
  fVar13 = fStack_d4 * (float)puVar12[4];
  fVar16 = (float)puVar12[1] * fStack_e4;
  fStack_d8 = fStack_d4 * fStack_d4;
  fVar14 = fStack_e4 * (float)puVar12[4] - (float)puVar12[1] * fStack_d4;
  fStack_e8 = fStack_e4 * fStack_e4;
  fVar10 = *(float *)(param_1 + 0x530);
  fVar16 = fVar16 + fVar16 + fVar13 + fVar13;
  uStack_f8._0_4_ = (float)uStack_c8;
  uStack_f8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
  fVar14 = fVar14 + fVar14;
  fVar13 = *(float *)(param_1 + 0x520);
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x7f7fffff;
  fVar15 = (fVar3 - (uStack_f8._4_4_ * fVar6 + (float)uStack_f8 * fVar7 + fVar9)) *
           (fVar10 * fVar14 + fVar16 * fVar13) +
           (fVar4 - (fStack_108 * uStack_f8._4_4_ + fVar8 * (float)uStack_f8 + fStack_104)) *
           (fVar16 * fVar2 + fVar15 * fVar14) +
           (1.0 - (fStack_e8 + fStack_e8 + fStack_d8 + fStack_d8)) *
           (fVar5 - ((float)uStack_f0 * fStack_100 + fStack_fc));
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  *(float *)(param_2 + 1) = fVar15;
  uStack_f8 = uStack_c8;
  fStack_e0 = fStack_e4;
  fStack_dc = fStack_e4;
  fStack_d0 = fStack_d4;
  fStack_cc = fStack_d4;
  uStack_c0 = uStack_f0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)&fStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051c010(longlong param_1,longlong param_2)
void FUN_18051c010(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qa;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char acStackX_8 [8];
  char acStackX_10 [8];
  char cStackX_18;
  int aiStackX_20 [2];
  char *pcVar26;
  char *pcVar27;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  int aiStack_128 [2];
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar8 = 0;
  uVar16 = uVar8;
  if (-1 < *(int *)(param_2 + 0xb0)) {
    uVar16 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_2 + 0xb0) * 0xa60;
  }
  if (*(int *)(param_1 + 0x570) == 1) {
    lVar15 = *(longlong *)(param_1 + 0x6e0);
    if (uVar16 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(undefined4 *)(uVar16 + 0x10);
    }
    *(undefined4 *)(lVar15 + 0x2020) = uVar12;
    puVar1 = (ushort *)(lVar15 + 0x130);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(param_1 + 0x568) == 1) {
    if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
      if ((*(uint *)(param_2 + 0xac) & 0x200) != 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2460);
        if (lVar15 != 0) {
          uVar8 = *(ulonglong *)(lVar15 + 0x1d0);
        }
        bVar14 = (byte)*(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0x2470);
        if (bVar14 == 0) {
          bVar14 = (byte)uVar8;
        }
        if (bVar14 < 0x4a) {
          uStack_170 = (undefined4 *)0x0;
          fStack_168 = 0.0;
          uStack_150 = 0x1000000;
          fStack_164 = 0.0;
          fStack_160 = 1.0;
          fStack_15c = -0.2;
          fStack_158 = -0.2;
          fStack_154 = 0.4;
          uStack_14c = uStack_14c & 0xffffff00;
          uStack_178 = (undefined *)
                       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x598) + 0x1a4) << 0x20);
          FUN_18051ec50(param_1,&uStack_178);
          return;
        }
      }
      if ((((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 0.5 <
           (float)*(int *)(param_2 + 0x88)) ||
         (uVar13 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748),
         uVar13 = uVar13 ^ uVar13 >> 0x11, uVar13 = uVar13 ^ uVar13 << 5,
         *(uint *)(param_1 + 0x748) = uVar13,
         (float)(uVar13 - 1) * 2.3283064e-10 <
         *(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0xc0))) {
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             _DAT_180d49ec8) && (FUN_1808fcb90(&DAT_180d49ec8), _DAT_180d49ec8 == -1)) {
          uStack_178 = &UNK_180a3c3e0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_170 = (undefined4 *)0x0;
          fStack_168 = 0.0;
          puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
          *(undefined1 *)puVar11 = 0;
          uStack_170 = puVar11;
          fStack_160 = (float)FUN_18064e990(puVar11);
          *puVar11 = 0x6e696150;
          *(undefined1 *)(puVar11 + 1) = 0;
          fStack_168 = 5.60519e-45;
          _DAT_180d49ecc = FUN_180571e20(&DAT_180c960c0,&uStack_178);
          uStack_178 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        FUN_180508510(param_1,_DAT_180d49ecc,2,0);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
    aiStackX_20[0] = -1;
    aiStack_128[0] = -1;
    bVar2 = false;
    cStackX_18 = '\0';
    uStack_178 = (undefined *)0x0;
    uStack_170 = (undefined4 *)0x7f7fffff00000000;
    acStackX_10[0] = '\0';
    acStackX_8[0] = '\0';
    fVar21 = 1.0;
    if (((*(int *)(param_2 + 0xb0) < 0) || (*(char *)(param_2 + 0xbc) != '\0')) ||
       ((*(uint *)(param_2 + 0xac) & 0x100) == 0)) {
      pcVar27 = acStackX_8;
      pcVar26 = acStackX_10;
      FUN_18052f6f0(param_1,param_2,aiStackX_20,aiStack_128,pcVar26,pcVar27,&uStack_178);
      uVar12 = (undefined4)((ulonglong)pcVar26 >> 0x20);
      if (acStackX_8[0] != '\0') {
        iVar6 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xac),
                              aiStackX_20[0]);
        iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
        if (iVar6 != -1) {
          uVar8 = *(ulonglong *)(_DAT_180c95f88 + (longlong)iVar6 * 8);
        }
        lVar15 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 +
                 (longlong)*(int *)(param_1 + 0x564) * 0xa60;
        *(undefined4 *)(lVar15 + 0x4c8) = 0;
        *(undefined8 *)(lVar15 + 0x4cc) = 0;
        puVar1 = (ushort *)(*(longlong *)(lVar15 + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x200;
        fVar21 = *(float *)(uVar8 + 0x1dc);
        if (fVar21 <= 0.0) {
          fVar21 = *(float *)(uVar8 + 0x188);
        }
        *(longlong *)(lVar15 + 0x6c8) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar15 + 0x6d0) * 8) -
             (longlong)(fVar21 * -100000.0);
        *(longlong *)(lVar15 + 0x6b8) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar15 + 0x6c0) * 8) + 200000;
        *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
        *(uint *)(param_1 + 0x584) = *(uint *)(uVar8 + 0x1d8) ^ 0x80000000;
        FUN_18052e130(lVar15,0xffffffff,0x180c8ed01);
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
          FUN_1805ed670(_DAT_180c92514,0,*(undefined4 *)(param_1 + 0x564),0xffffffff,
                        CONCAT44(uVar12,0xffffffff),(ulonglong)pcVar27 & 0xffffffff00000000);
        }
        FUN_1805b8920(*(undefined8 *)(lVar15 + 0x6e0));
        *(undefined4 *)(*(longlong *)(lVar15 + 0x738) + 0xa4) =
             *(undefined4 *)(*(longlong *)(lVar15 + 0x6e0) + 0x14a8);
        FUN_180516f50(lVar15,&uStack_178);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
    }
    else {
      bVar2 = true;
      cStackX_18 = '\x01';
    }
    iVar6 = aiStackX_20[0];
    cVar5 = acStackX_10[0];
    if ((((*(byte *)(param_1 + 0x56c) & 0x80) == 0) ||
        ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x6c0) * 8) -
                *(longlong *)(param_1 + 0x6b8)) * 1e-05 <= 0.0)) ||
       ((*(int *)(param_1 + 0x564) != -1 || (cVar4 = func_0x000180522f60(param_1), cVar4 != '\0'))))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((cVar5 != '\0') && (!bVar2)) && (bVar3)) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x40) & 1) != 0 ||
        (0.0 <= *(float *)(*(longlong *)(param_1 + 0x20) + 0x44))))) {
      if (*(longlong *)(param_1 + 0x590) != 0) {
        uVar8 = func_0x000180534e20(*(longlong *)(param_1 + 0x590),0);
      }
      if ((uVar8 >> 0x18 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x584) = 0xbf19999a;
        *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0xb0);
        if (((uVar16 == 0) || ((*(byte *)(uVar16 + 0x56c) & 0x40) == 0)) ||
           (*(int *)(param_2 + 0xa8) - 1U < 2)) {
          fVar20 = (float)uStack_178;
          fVar22 = (float)uStack_170;
          fVar23 = uStack_178._4_4_;
        }
        else {
          fVar20 = 0.0;
          fVar22 = 1.0;
          fVar23 = 0.0;
        }
        *(float *)(param_1 + 0x574) = fVar20 + *(float *)(param_1 + 0x574);
        *(float *)(param_1 + 0x578) = fVar23 + *(float *)(param_1 + 0x578);
        *(float *)(param_1 + 0x57c) = fVar22 + *(float *)(param_1 + 0x57c);
        if ((((_DAT_180c92514 - 2U < 2) && (*(longlong **)(param_1 + 0x8e8) != (longlong *)0x0)) &&
            (**(longlong **)(param_1 + 0x8e8) != 0)) &&
           (lVar15 = **(longlong **)(**(longlong **)(param_1 + 0x8e0) + 0x8e8), lVar15 != 0)) {
          if (*(char *)(lVar15 + 0x31) == '\0') {
            iVar7 = _Mtx_lock(lVar15 + 0x5990);
            if (iVar7 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar7);
            }
            uVar9 = FUN_1805fa9a0(lVar15 + 0x50,0x28);
          }
          else {
            uVar9 = 0;
          }
          cVar5 = FUN_180645c10(uVar9,0,&UNK_1809fa560);
          if (((cVar5 != '\0') && (cVar5 = FUN_180645c10(uVar9,5,&UNK_1809fa540), cVar5 != '\0')) &&
             ((cVar5 = FUN_180645fa0(uVar9), cVar5 != '\0' &&
              (cVar5 = FUN_180645fa0(uVar9), cVar5 != '\0')))) {
            FUN_180645fa0(uVar9);
          }
          if (*(char *)(lVar15 + 0x31) == '\0') {
            FUN_1805faa20(lVar15 + 0x50);
            iVar7 = _Mtx_unlock(lVar15 + 0x5990);
            if (iVar7 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar7);
            }
          }
        }
      }
    }
    if ((*(int *)(param_1 + 0x568) == 1) &&
       ((0.001 < (float)*(int *)(param_2 + 0x88) || (*(int *)(param_2 + 0xa8) - 1U < 2)))) {
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      uStack_178 = (undefined *)0x0;
      uStack_170 = (undefined4 *)0x0;
      fVar22 = fVar17;
      fVar23 = fVar18;
      fVar24 = fVar19;
      fVar25 = fVar20;
      if ((-1 < *(char *)(param_2 + 0xb4)) && ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) {
        pfVar10 = (float *)FUN_180534930(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) +
                                         0x70,&uStack_178,param_2 + 0x58);
        fVar22 = *pfVar10;
        fVar23 = pfVar10[1];
        fVar24 = pfVar10[2];
        fVar25 = pfVar10[3];
        fVar20 = _DAT_180c964d0;
        if ((((!bVar2) &&
             (iVar7 = func_0x00018051cd90(extraout_XMM0_Qa,param_2), fVar20 = _DAT_180c964d0,
             iVar7 != 0)) && (fVar20 = _DAT_180c964d4, iVar7 != 1)) &&
           (fVar20 = _DAT_180c964dc, iVar7 == 2)) {
          fVar20 = _DAT_180c964d8;
        }
        fVar19 = fVar20 * *(float *)(param_2 + 0x80);
        fVar17 = fVar20 * *(float *)(param_2 + 0x7c);
        fVar20 = fVar20 * *(float *)(param_2 + 0x78);
        fVar18 = fVar17 * *(float *)(param_1 + 0x534) + fVar20 * *(float *)(param_1 + 0x530);
        fVar17 = fVar17 * *(float *)(param_1 + 0x524) + fVar20 * *(float *)(param_1 + 0x520);
        fVar20 = 3.4028235e+38;
        uStack_178 = (undefined *)CONCAT44(fVar18,fVar17);
        uStack_170 = (undefined4 *)CONCAT44(0x7f7fffff,fVar19);
      }
      uVar12 = 0;
      if ((*(byte *)(param_2 + 0xac) & 0x40) == 0) {
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             _DAT_180d49ed0) && (FUN_1808fcb90(&DAT_180d49ed0), _DAT_180d49ed0 == -1)) {
          uStack_178 = &UNK_180a3c3e0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_170 = (undefined4 *)0x0;
          fStack_168 = 0.0;
          puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
          *(undefined1 *)puVar11 = 0;
          uStack_170 = puVar11;
          fStack_160 = (float)FUN_18064e990(puVar11);
          *puVar11 = 0x6e696150;
          *(undefined1 *)(puVar11 + 1) = 0;
          fStack_168 = 5.60519e-45;
          _DAT_180d49ed4 = FUN_180571e20(&DAT_180c960c0,&uStack_178);
          uStack_178 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        FUN_180508510(param_1,_DAT_180d49ed4,2);
      }
      if ((iVar6 == -1) && (aiStack_128[0] == -1)) {
        uStack_178 = (undefined *)0xffffffff00000003;
        uStack_170 = (undefined4 *)CONCAT44(fVar23,fVar22);
        uStack_150._0_2_ = (ushort)*(byte *)(param_2 + 0xb4);
        uStack_14c = 0;
        fStack_168 = fVar24;
        fStack_164 = fVar25;
        fStack_160 = fVar17;
        fStack_15c = fVar18;
        fStack_158 = fVar19;
        fStack_154 = fVar20;
        FUN_1805a4590(param_1 + 0x28,&uStack_178);
      }
      else {
        if ((*(int *)(param_2 + 0x48) < 0) && (1 < *(int *)(param_2 + 0xa8) - 1U)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((acStackX_8[0] == '\0') && ((cStackX_18 != '\0' || (bVar2)))) &&
           ((uVar16 == 0 || ((*(byte *)(uVar16 + 0x56c) & 0x40) == 0)))) {
          uVar12 = 1;
        }
        if (uVar16 != 0) {
          if (*(int *)(param_2 + 0xa8) == 2) {
            if ((*(uint *)(param_2 + 0x38) >> 0x1c & 1) != 0) {
              fVar21 = 1.0 / *(float *)(uVar16 + 0x3e4);
            }
          }
          else if (*(int *)(param_2 + 0xa8) == 1) {
            fVar21 = 1.0 / *(float *)(uVar16 + 1000);
          }
        }
        uStack_d8 = 0;
        uStack_120 = 0xffffffffffffffff;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0x3f80000000000000;
        uStack_f0 = 0xbe4ccccdbe4ccccd;
        uStack_e8 = 0x3ecccccd;
        uStack_e4 = 0;
        uStack_e0 = 0x100;
        uStack_d4 = 0x12;
        uStack_d0 = 0xffffffff;
        uStack_a0 = *(undefined1 *)(param_2 + 0xb4);
        uStack_9c = 0;
        iStack_a8 = aiStack_128[0];
        fStack_cc = fVar22;
        fStack_c8 = fVar23;
        fStack_c4 = fVar24;
        fStack_c0 = fVar25;
        fStack_bc = fVar17;
        fStack_b8 = fVar18;
        fStack_b4 = fVar19;
        fStack_b0 = fVar20;
        iStack_ac = iVar6;
        uStack_a4 = uVar12;
        fStack_94 = fVar21;
        FUN_1805a4a20(param_1 + 0x28,1,&uStack_120);
      }
    }
  }
  return;
}





// 函数: void FUN_18051cdd0(longlong param_1,longlong param_2)
void FUN_18051cdd0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  float fVar12;
  float fStackX_8;
  float fStackX_c;
  
  fStackX_8 = *(float *)(param_2 + 0x78) * *(float *)(param_1 + 0x534) -
              *(float *)(param_1 + 0x530) * *(float *)(param_2 + 0x7c);
  fStackX_c = *(float *)(param_1 + 0x530) * *(float *)(param_2 + 0x78) +
              *(float *)(param_2 + 0x7c) * *(float *)(param_1 + 0x534);
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    uVar6 = 0xffffffff;
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
    fVar12 = fVar1 * fVar1 + fVar12 * fVar12;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10);
    bVar9 = 4 < iVar3;
    iVar5 = -1;
    if (2 < iVar3) {
      iVar5 = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x564) == -1) {
      if (*(char *)(param_2 + 0xb4) < '\0') {
        uVar11 = 0xff;
      }
      else {
        uVar11 = *(undefined1 *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208) + 0x140) +
                   0x104 + (longlong)*(char *)(param_2 + 0xb4) * 0x1b0);
      }
      cVar4 = func_0x000180522f60();
      uVar6 = 0xffffffff;
      if (cVar4 == '\0') {
        if (*(char *)(param_2 + 0x50) != '\0') {
          iVar5 = 0;
          goto LAB_18051cf48;
        }
        if ((((byte)*(undefined4 *)(param_2 + 0xac) & 0x90) != 0x10) ||
           (*(int *)(param_2 + 0xb8) != 2)) {
          iVar5 = -1;
          goto LAB_18051cf48;
        }
        iVar5 = (*(int *)(param_2 + 0xa8) != 3) + 2;
        if (*(int *)(param_2 + 0xa8) == 3) goto LAB_18051cf48;
        fVar12 = 0.25;
      }
      else {
        iVar5 = 5;
LAB_18051cf48:
        fVar12 = 0.5;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x598);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
      bVar9 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * fVar12 <
              (float)*(int *)(param_2 + 0x88);
      bVar7 = 1.0 < fVar2 * fVar2 + fVar1 * fVar1;
      if ((*(longlong *)(param_1 + 0x590) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x590) + 0x34bc) == '\0')) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      goto LAB_18051d023;
    }
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
    uVar6 = *(undefined4 *)
             (*(longlong *)
               ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
               *(longlong *)(param_1 + 0x8d8)) + 0x20);
    bVar9 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 0.25 <
            (float)*(int *)(param_2 + 0x88);
    fVar12 = fVar1 * fVar1 + fVar12 * fVar12;
    iVar5 = -1;
  }
  uVar11 = 0xff;
  uVar10 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x598);
  bVar7 = 1.0 < fVar12;
LAB_18051d023:
  FUN_180557d20(uVar8,uVar6,bVar9,uVar10,&fStackX_8,uVar11,iVar5,bVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051d060(longlong param_1,byte param_2,int param_3)
void FUN_18051d060(longlong param_1,byte param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uStack_d8 = 0xfffffffffffffffe;
  if (param_3 != -1) {
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x728);
      uVar2 = *(ushort *)(lVar5 + 0x5aa);
      if (uVar2 != 0) {
        *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar2;
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar2;
        lVar5 = *(longlong *)(param_1 + 0x728);
      }
      *(undefined4 *)(lVar5 + 0x5a4) = 0xffffffff;
    }
    uStack_158 = 0x1000000;
    uStack_16c = 0x3f80000000000000;
    uStack_164 = 0xbe4ccccdbe4ccccd;
    uStack_15c = 0x3ecccccd;
    uStack_154 = 0;
    uStack_180 = 0;
    uStack_170 = 0x3f7d70a4;
    uStack_178 = 0x80000000;
    iStack_17c = param_3;
    FUN_18051ec50(param_1,&uStack_180);
    if ((((*(uint *)(param_1 + 0x56c) & 0x800) != 0) && (*(longlong *)(param_1 + 0x590) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0xabf0), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0x28) = 0xbe99999a;
      *(undefined4 *)(lVar5 + 0x2c) = 0x3f000000;
      *(undefined4 *)(lVar5 + 0x30) = 0x49742400;
      *(undefined4 *)(lVar5 + 0x34) = 0x3e4ccccd;
    }
  }
  FUN_18051fa40(param_1,param_2 + 3);
  lVar5 = _DAT_180c8ece0;
  uStack_118 = CONCAT31(uStack_118._1_3_,0xff);
  uStack_114 = 0xffffffff;
  uStack_110 = CONCAT31(uStack_110._1_3_,0xff);
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0x7f7fffff;
  uStack_f8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x568);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar4);
  }
  uStack_c8 = 0;
  uStack_c0 = 0x7f7fffff00000000;
  uStack_b8 = 0;
  uStack_b0 = 0x7f7fffff00000000;
  uStack_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = CONCAT44(uStack_114,uStack_118);
  uStack_90 = CONCAT44(uStack_10c,uStack_110);
  uStack_88 = CONCAT44(uStack_104,uStack_108);
  uStack_80 = CONCAT44(uStack_fc,uStack_100);
  uStack_78 = (undefined4)uStack_f8;
  uStack_74 = uStack_f8._4_4_;
  uStack_70 = (undefined4)uStack_f0;
  uStack_6c = uStack_f0._4_4_;
  uStack_68 = CONCAT62(uStack_e6,uStack_e8);
  (**(code **)(lVar5 + 0x238))
            (*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),iVar4,0,uVar3,&uStack_c8);
  if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



