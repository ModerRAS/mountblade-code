#include "TaleWorlds.Native.Split.h"

// 99_part_03_part015.c - 4 个函数

// 函数: void FUN_1801d8e90(longlong param_1,longlong param_2,longlong param_3)
void FUN_1801d8e90(longlong param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int32_t uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint *puVar13;
  uint *puVar14;
  int32_t *puVar15;
  uint64_t *puVar16;
  int8_t *puVar17;
  int iVar18;
  ulonglong uVar19;
  int *piVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int8_t auStack_2f8 [32];
  uint *puStack_2d8;
  char acStack_2c8 [8];
  void *puStack_2c0;
  int8_t *puStack_2b8;
  uint uStack_2b0;
  uint64_t uStack_2a8;
  uint auStack_2a0 [2];
  void *puStack_298;
  int8_t *puStack_290;
  uint uStack_288;
  uint64_t uStack_280;
  longlong lStack_278;
  uint *puStack_270;
  uint64_t uStack_268;
  int16_t uStack_260;
  int8_t uStack_25e;
  uint uStack_258;
  uint uStack_254;
  longlong lStack_250;
  longlong lStack_248;
  uint uStack_240;
  uint uStack_23c;
  uint64_t uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  uint uStack_220;
  longlong lStack_218;
  longlong alStack_210 [2];
  longlong lStack_200;
  longlong alStack_1f8 [2];
  longlong lStack_1e8;
  int8_t uStack_1e0;
  longlong lStack_1d8;
  int8_t uStack_1d0;
  longlong lStack_1c8;
  int8_t uStack_1c0;
  longlong lStack_1b8;
  int8_t uStack_1b0;
  longlong lStack_1a8;
  int8_t uStack_1a0;
  longlong lStack_198;
  uint64_t *puStack_190;
  uint64_t *puStack_188;
  uint64_t *puStack_180;
  longlong lStack_178;
  uint *puStack_170;
  longlong lStack_168;
  uint64_t *puStack_160;
  uint64_t *puStack_158;
  uint64_t *puStack_150;
  longlong lStack_148;
  uint64_t *puStack_140;
  longlong lStack_138;
  uint64_t *puStack_130;
  uint64_t *puStack_128;
  uint64_t *puStack_120;
  longlong lStack_118;
  uint64_t *puStack_110;
  longlong lStack_108;
  uint64_t *puStack_100;
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  longlong lStack_e8;
  uint *puStack_e0;
  uint64_t uStack_d8;
  int8_t auStack_d0 [8];
  int8_t auStack_c8 [8];
  int8_t auStack_c0 [8];
  int8_t auStack_b8 [56];
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint uStack_58;
  ulonglong uStack_50;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  lStack_248 = param_3;
  lStack_218 = param_2;
  FUN_1801ec5c0(auStack_b8,&UNK_180a0da38);
  lVar22 = param_2;
  if ((param_2 == 0) && (lVar22 = *(longlong *)(param_1 + 0x50), param_3 != 0)) {
    lVar22 = param_3;
  }
  uVar19 = 0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  puStack_2b8 = (int8_t *)0x0;
  uStack_2b0 = 0;
  lStack_250 = lVar22;
  if (param_3 == 0) {
    FUN_1801c5700(&puStack_2c0,param_2);
  }
  else {
    uVar9 = *(uint *)(lVar22 + 0x2e0);
    if (*(longlong *)(lVar22 + 0x2d8) == 0) {
LAB_1801d8fc9:
      if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_2b8,*(uint64_t *)(lVar22 + 0x2d8),(ulonglong)uVar9);
      }
    }
    else if (uVar9 != 0) {
      uVar7 = uVar9 + 1;
      if ((int)(uVar9 + 1) < 0x10) {
        uVar7 = 0x10;
      }
      puStack_2b8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puStack_2b8 = 0;
      uVar8 = FUN_18064e990(puStack_2b8);
      uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar8);
      goto LAB_1801d8fc9;
    }
    if (puStack_2b8 != (int8_t *)0x0) {
      puStack_2b8[uVar9] = 0;
    }
    uStack_2a8 = CONCAT44(*(int32_t *)(lVar22 + 0x2ec),(uint)uStack_2a8);
    uStack_2b0 = uVar9;
  }
  iVar18 = uStack_2b0 + 0x1c;
  if (iVar18 != 0) {
    uVar9 = uStack_2b0 + 0x1d;
    if (puStack_2b8 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_2b8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
      *puStack_2b8 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_2a8) goto LAB_1801d907b;
      puStack_2d8 = (uint *)CONCAT71(puStack_2d8._1_7_,0x13);
      puStack_2b8 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_2b8,uVar9,0x10);
    }
    uVar8 = FUN_18064e990(puStack_2b8);
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar8);
  }
LAB_1801d907b:
  puVar15 = (int32_t *)(puStack_2b8 + uStack_2b0);
  *puVar15 = 0x706d6f63;
  puVar15[1] = 0x73736572;
  puVar15[2] = 0x735f6465;
  puVar15[3] = 0x65646168;
  *(uint64_t *)(puVar15 + 4) = 0x2e65686361635f72;
  puVar15[6] = 0x6b636173;
  *(int8_t *)(puVar15 + 7) = 0;
  alStack_1f8[0] = -1;
  puVar17 = &DAT_18098bc73;
  if (puStack_2b8 != (int8_t *)0x0) {
    puVar17 = puStack_2b8;
  }
  uStack_2b0 = iVar18;
  FUN_18063ba00(alStack_1f8,puVar17,5,0x104);
  lVar25 = alStack_1f8[0];
  if (alStack_1f8[0] != -1) {
    auStack_2a0[0] = 0;
    do {
      uVar23 = 0x1000000;
      if (4 - uVar19 < 0x1000000) {
        uVar23 = 4 - uVar19 & 0xffffffff;
      }
      uStack_258 = 0;
      puStack_2d8 = (uint *)0x0;
      iVar18 = ReadFile(lVar25,(longlong)auStack_2a0 + uVar19,uVar23,&uStack_258);
    } while (((iVar18 != 0) && (uStack_258 != 0)) && (uVar19 = uVar19 + uStack_258, uVar19 < 4));
    lStack_278 = 0;
    puStack_270 = (uint *)0x0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_25e = 3;
    if (auStack_2a0[0] != 0) {
      FUN_180639bf0(&lStack_278,auStack_2a0[0]);
    }
    lVar26 = lStack_278;
    uVar23 = (ulonglong)auStack_2a0[0];
    uVar19 = 0;
    if (auStack_2a0[0] != 0) {
      do {
        uVar10 = uVar23 - uVar19;
        uVar24 = 0x1000000;
        if (uVar10 < 0x1000000) {
          uVar24 = uVar10 & 0xffffffff;
        }
        uStack_254 = 0;
        puStack_2d8 = (uint *)0x0;
        iVar18 = ReadFile(lVar25,uVar19 + lVar26,uVar24,&uStack_254);
        param_2 = lStack_218;
      } while (((iVar18 != 0) && (uStack_254 != 0)) &&
              (uVar19 = uVar19 + uStack_254, uVar19 < uVar23));
    }
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_1f8[0]);
    alStack_1f8[0] = -1;
    puVar21 = puStack_270 + 1;
    if ((lStack_248 == 0) || (*puStack_270 == 0x5ef)) {
      if ((param_2 == 0) && (lStack_248 == 0)) {
        uVar9 = *puVar21;
        *(uint *)(param_1 + 0x90) = uVar9;
        piVar20 = (int *)(puStack_270 + 2);
        puStack_270 = (uint *)piVar20;
        uVar11 = FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,3);
        *(uint64_t *)(param_1 + 0x88) = uVar11;
                    // WARNING: Subroutine does not return
        memcpy(uVar11,piVar20,(longlong)(int)*(uint *)(param_1 + 0x90));
      }
      uVar9 = *puVar21;
      uVar19 = (ulonglong)uVar9;
      puVar21 = puStack_270 + 2;
      puStack_270 = puVar21;
      if (param_2 == 0) {
        if (lStack_248 == 0) {
          lVar25 = lVar22 + 0x360;
          uStack_1c0 = 0;
          lStack_1c8 = lVar25;
          AcquireSRWLockExclusive(lVar25);
          uStack_1c0 = 1;
          if (0 < (int)uVar9) {
            do {
              uStack_80 = *(uint64_t *)puVar21;
              uStack_78 = *(uint64_t *)(puVar21 + 2);
              uStack_70 = puVar21[4];
              uVar9 = puVar21[5];
              puVar21 = puVar21 + 6;
              puStack_270 = puVar21;
              uStack_220 = uVar9;
              puVar13 = (uint *)FUN_1801e6800(*(uint64_t *)(lVar22 + 0x318),&uStack_80);
              *puVar13 = uVar9;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        else {
          lVar22 = *(longlong *)(lStack_248 + 800);
          lStack_1d8 = lStack_248 + 0x360;
          uStack_1d0 = 0;
          AcquireSRWLockExclusive(lStack_1d8);
          uStack_1d0 = 1;
          if (0 < (int)uVar9) {
            do {
              uVar11 = *(uint64_t *)puVar21;
              uVar3 = *(uint64_t *)(puVar21 + 2);
              uVar9 = puVar21[4];
              uVar7 = puVar21[5];
              puVar21 = puVar21 + 6;
              puStack_270 = puVar21;
              uStack_220 = uVar7;
              uStack_80 = uVar11;
              uStack_78 = uVar3;
              uStack_70 = uVar9;
              uStack_68 = uVar11;
              uStack_60 = uVar3;
              uStack_58 = uVar9;
              lVar25 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(lVar22 + 0x28));
              *(uint64_t *)(lVar25 + 0x20) = uVar11;
              *(uint64_t *)(lVar25 + 0x28) = uVar3;
              *(uint *)(lVar25 + 0x30) = uVar9;
              *(uint *)(lVar25 + 0x34) = uVar7;
              lVar26 = FUN_1801ea730(lVar22,acStack_2c8,lVar25 + 0x20);
              if (acStack_2c8[0] != '\0') {
                if (lVar26 != lVar22) {
                  if (*(uint *)(lVar26 + 0x20) <= *(uint *)(lVar25 + 0x20)) {
                    if (*(uint *)(lVar25 + 0x20) <= *(uint *)(lVar26 + 0x20)) {
                      if (*(ushort *)(lVar25 + 0x30) < *(ushort *)(lVar26 + 0x30))
                      goto LAB_1801d960a;
                      if (*(ushort *)(lVar25 + 0x30) <= *(ushort *)(lVar26 + 0x30)) {
                        if (*(uint *)(lVar25 + 0x24) < *(uint *)(lVar26 + 0x24)) goto LAB_1801d960a;
                        if (*(uint *)(lVar25 + 0x24) <= *(uint *)(lVar26 + 0x24)) {
                          if (*(uint *)(lVar25 + 0x28) < *(uint *)(lVar26 + 0x28))
                          goto LAB_1801d960a;
                          if (*(uint *)(lVar25 + 0x28) <= *(uint *)(lVar26 + 0x28)) {
                            if ((*(uint *)(lVar25 + 0x2c) < *(uint *)(lVar26 + 0x2c)) ||
                               ((*(uint *)(lVar25 + 0x2c) <= *(uint *)(lVar26 + 0x2c) &&
                                (*(byte *)(lVar25 + 0x32) < *(byte *)(lVar26 + 0x32)))))
                            goto LAB_1801d960a;
                          }
                        }
                      }
                    }
                    // WARNING: Subroutine does not return
                    FUN_18066bdc0(lVar25,lVar26,lVar22,1);
                  }
                }
LAB_1801d960a:
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar25,lVar26,lVar22,0);
              }
              if (lVar25 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(lVar25);
              }
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          lVar25 = lStack_248 + 0x360;
        }
      }
      else {
        uStack_238 = 0xffffffffffffffff;
        uStack_230 = CONCAT26(uStack_230._6_2_,0xffffffffffff);
        puVar1 = (uint64_t *)(lVar22 + 0x328);
        lVar25 = lVar22 + 0x360;
        uStack_1e0 = 0;
        lStack_1e8 = lVar25;
        AcquireSRWLockExclusive(lVar25);
        uStack_1e0 = 1;
        if (0 < (int)uVar9) {
          uVar19 = (ulonglong)uVar9;
          do {
            uStack_240 = *puVar21;
            uStack_23c = puVar21[1];
            uStack_238 = *(uint64_t *)(puVar21 + 2);
            uStack_230 = *(uint64_t *)(puVar21 + 4);
            uStack_228 = *(uint64_t *)(puVar21 + 6);
            uVar9 = puVar21[8];
            puVar21 = puVar21 + 9;
            puVar12 = puVar1;
            puStack_270 = puVar21;
            puVar16 = *(uint64_t **)(lVar22 + 0x338);
            while (puVar16 != (uint64_t *)0x0) {
              puStack_140 = puVar16 + 4;
              lStack_198 = (longlong)&uStack_228 + 4;
              puStack_190 = &uStack_228;
              puStack_188 = &uStack_230;
              puStack_180 = &uStack_238;
              lStack_178 = (longlong)&uStack_230 + 4;
              puStack_170 = &uStack_240;
              lStack_168 = (longlong)puVar16 + 0x3c;
              puStack_160 = puVar16 + 7;
              puStack_158 = puVar16 + 6;
              puStack_150 = puVar16 + 5;
              lStack_148 = (longlong)puVar16 + 0x34;
              cVar6 = func_0x0001801eb6f0(&lStack_168,&lStack_198);
              if (cVar6 == '\0') {
                puVar12 = puVar16;
                puVar16 = (uint64_t *)puVar16[1];
              }
              else {
                puVar16 = (uint64_t *)*puVar16;
              }
            }
            if (puVar12 == puVar1) {
LAB_1801d94be:
              puStack_2d8 = &uStack_240;
              puVar12 = (uint64_t *)FUN_1801e8280(puVar1,auStack_d0);
              puVar12 = (uint64_t *)*puVar12;
            }
            else {
              puStack_110 = puVar12 + 4;
              lStack_138 = (longlong)puVar12 + 0x3c;
              puStack_130 = puVar12 + 7;
              puStack_128 = puVar12 + 6;
              puStack_120 = puVar12 + 5;
              lStack_118 = (longlong)puVar12 + 0x34;
              lStack_108 = (longlong)&uStack_228 + 4;
              puStack_100 = &uStack_228;
              puStack_f8 = &uStack_230;
              puStack_f0 = &uStack_238;
              lStack_e8 = (longlong)&uStack_230 + 4;
              puStack_e0 = &uStack_240;
              cVar6 = func_0x0001801eb6f0(&lStack_108,&lStack_138);
              if (cVar6 != '\0') goto LAB_1801d94be;
            }
            *(uint *)(puVar12 + 8) = uVar9;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      ReleaseSRWLockExclusive(lVar25);
      lVar26 = lStack_250 + 0x70;
      lVar25 = 6;
      lStack_200 = 6;
      lVar22 = lVar26;
      do {
        uStack_1b0 = 0;
        lStack_1b8 = lVar22;
        AcquireSRWLockExclusive(lVar22);
        uStack_1b0 = 1;
        uVar9 = *puVar21;
        puVar21 = puVar21 + 1;
        puStack_270 = puVar21;
        if (0 < (int)uVar9) {
          uVar19 = (ulonglong)uVar9;
          do {
            puVar14 = (uint *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,0x11);
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14[4] = 0xffffffff;
            puVar14[0] = 0;
            puVar14[1] = 0;
            uVar9 = puVar21[1];
            uVar7 = puVar21[2];
            uVar2 = puVar21[3];
            *puVar14 = *puVar21;
            puVar14[1] = uVar9;
            puVar14[2] = uVar7;
            puVar14[3] = uVar2;
            uVar9 = puVar21[5];
            uVar7 = puVar21[6];
            uVar2 = puVar21[7];
            puVar14[4] = puVar21[4];
            puVar14[5] = uVar9;
            puVar14[6] = uVar7;
            puVar14[7] = uVar2;
            puVar21 = puVar21 + 8;
            puVar13 = puVar14 + 6;
            puVar16 = *(uint64_t **)(lVar22 + -0x20);
            puVar1 = (uint64_t *)(lVar22 + -0x30);
            puVar12 = puVar1;
            if (puVar16 != (uint64_t *)0x0) {
              do {
                if (*(int *)(puVar16 + 4) < (int)*puVar13) {
                  puVar16 = (uint64_t *)*puVar16;
                }
                else {
                  puVar12 = puVar16;
                  puVar16 = (uint64_t *)puVar16[1];
                }
              } while (puVar16 != (uint64_t *)0x0);
            }
            puStack_270 = puVar21;
            if ((puVar12 == puVar1) || ((int)*puVar13 < *(int *)(puVar12 + 4))) {
              puStack_2d8 = puVar13;
              puVar12 = (uint64_t *)FUN_180179aa0(puVar1,auStack_c8);
              puVar12 = (uint64_t *)*puVar12;
            }
            puVar12[5] = puVar14;
            if (*(int *)(lVar22 + 8) < (int)*puVar13) {
              *(uint *)(lVar22 + 8) = *puVar13;
            }
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        ReleaseSRWLockExclusive(lVar22);
        lVar5 = lStack_218;
        lVar4 = lStack_250;
        lVar22 = lVar22 + 0x70;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      if (lStack_218 == 0) {
        *(int8_t *)(lStack_250 + 0x358) = 1;
      }
      else {
        *(int8_t *)(lStack_218 + 0x358) = 1;
      }
      puVar21 = puStack_270;
      if ((*(char *)(_DAT_180c8aa08 + 9) != '\0') && (lStack_218 != 0)) {
        puStack_298 = &UNK_180a3c3e0;
        uStack_280 = 0;
        puStack_290 = (int8_t *)0x0;
        uStack_288 = 0;
        FUN_1806277c0(&puStack_298,0);
        uStack_288 = 0;
        if (puStack_290 != (int8_t *)0x0) {
          *puStack_290 = 0;
        }
        if (lStack_248 == 0) {
          FUN_1801c5700(&puStack_298,lVar5);
        }
        else {
          uVar9 = *(uint *)(lVar4 + 0x2e0);
          uVar19 = (ulonglong)uVar9;
          if (*(longlong *)(lVar4 + 0x2d8) != 0) {
            FUN_1806277c0(&puStack_298,uVar19);
          }
          if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_290,*(uint64_t *)(lVar4 + 0x2d8),uVar19);
          }
          if (puStack_290 != (int8_t *)0x0) {
            puStack_290[uVar19] = 0;
          }
          uStack_280 = CONCAT44(*(int32_t *)(lVar4 + 0x2ec),(int32_t)uStack_280);
          uStack_288 = 0;
        }
        iVar18 = uStack_288 + 0x1c;
        FUN_1806277c0(&puStack_298,iVar18);
        puVar15 = (int32_t *)(puStack_290 + uStack_288);
        *puVar15 = 0x706d6f63;
        puVar15[1] = 0x73736572;
        puVar15[2] = 0x735f6465;
        puVar15[3] = 0x65646168;
        *(uint64_t *)(puVar15 + 4) = 0x2e65686361635f72;
        puVar15[6] = 0x6b636173;
        *(int8_t *)(puVar15 + 7) = 0;
        alStack_210[0] = -1;
        puVar17 = &DAT_18098bc73;
        if (puStack_290 != (int8_t *)0x0) {
          puVar17 = puStack_290;
        }
        uStack_288 = iVar18;
        FUN_18063ba00(alStack_210,puVar17,5,0x104);
        lVar22 = alStack_210[0];
        do {
          uStack_1a0 = 0;
          lStack_1a8 = lVar26;
          AcquireSRWLockExclusive(lVar26);
          uStack_1a0 = 1;
          for (lVar25 = *(longlong *)(lVar26 + -0x28); lVar25 != lVar26 + -0x30;
              lVar25 = func_0x00018066bd70(lVar25)) {
            puVar1 = *(uint64_t **)(lVar25 + 0x28);
            SetFilePointerEx(lVar22,puVar1[1],auStack_c0,0);
            if (*(int *)(puVar1 + 2) == 0) {
              iVar18 = 0;
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(puVar1 + 2),3);
              iVar18 = *(int *)(puVar1 + 2);
            }
            *puVar1 = uVar11;
            FUN_18063bc80(alStack_210,uVar11,(longlong)iVar18);
          }
          ReleaseSRWLockExclusive(lVar26);
          lVar26 = lVar26 + 0x70;
          lStack_200 = lStack_200 + -1;
        } while (lStack_200 != 0);
        if (lVar22 != -1) {
          LOCK();
          _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
          UNLOCK();
          CloseHandle(alStack_210[0]);
          lVar22 = -1;
          alStack_210[0] = -1;
        }
        if (lVar22 != -1) {
          LOCK();
          _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
          UNLOCK();
          CloseHandle(alStack_210[0]);
          alStack_210[0] = -1;
        }
        puStack_298 = &UNK_180a3c3e0;
        if (puStack_290 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_290 = (int8_t *)0x0;
        uStack_280 = uStack_280 & 0xffffffff00000000;
        puStack_298 = &UNK_18098bcb0;
        puVar21 = puStack_270;
      }
    }
    puStack_270 = puVar21;
    if (((char)uStack_260 == '\0') && (lStack_278 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_2c0 = &UNK_180a3c3e0;
  if (puStack_2b8 == (int8_t *)0x0) {
    puStack_2b8 = (int8_t *)0x0;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    puStack_2c0 = &UNK_18098bcb0;
    FUN_1801ec3f0(auStack_b8);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_2f8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d9b10(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1801d9b10(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  int iVar10;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  uint64_t *puStack_b0;
  uint64_t *puStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  uint *puStack_88;
  int32_t uStack_80;
  uint auStack_78 [4];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [16];
  ulonglong uStack_40;
  ulonglong uVar11;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  iVar9 = -1;
  puStack_b8 = (uint64_t *)0x0;
  puStack_b0 = (uint64_t *)0x0;
  uVar3 = 0;
  puStack_a8 = (uint64_t *)0x0;
  uStack_a0 = 3;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 2;
  strcpy_s(auStack_50,0x10,&DAT_180a02638);
  FUN_1801e8b60(&puStack_b8,&puStack_68);
  puStack_68 = &UNK_18098bcb0;
  puStack_90 = &UNK_1809fdc18;
  puStack_88 = auStack_78;
  auStack_78[0] = auStack_78[0] & 0xffffff00;
  uStack_80 = 2;
  strcpy_s(auStack_78,0x10,&DAT_180a02640);
  puVar5 = puStack_a8;
  if (puStack_b0 < puStack_a8) {
    puVar8 = puStack_b0 + 5;
    puStack_b0 = puVar8;
    FUN_1801e8210();
  }
  else {
    FUN_1801e8b60(&puStack_b8,&puStack_90);
    puVar5 = puStack_a8;
    puVar8 = puStack_b0;
  }
  puStack_90 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 2;
  strcpy_s(auStack_50,0x10,&DAT_180a02648);
  if (puVar8 < puVar5) {
    puStack_b0 = puVar8 + 5;
    FUN_1801e8210(puVar8);
    puVar8 = puVar8 + 5;
  }
  else {
    FUN_1801e8b60(&puStack_b8,&puStack_68);
    puVar5 = puStack_a8;
    puVar8 = puStack_b0;
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_90 = &UNK_1809fdc18;
  puStack_88 = auStack_78;
  auStack_78[0] = auStack_78[0] & 0xffffff00;
  uStack_80 = 2;
  strcpy_s(auStack_78,0x10,&DAT_180a02644);
  if (puVar8 < puVar5) {
    puStack_b0 = puVar8 + 5;
    FUN_1801e8210(puVar8);
    puVar8 = puVar8 + 5;
  }
  else {
    FUN_1801e8b60(&puStack_b8,&puStack_90);
    puVar5 = puStack_a8;
    puVar8 = puStack_b0;
  }
  puStack_90 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 2;
  strcpy_s(auStack_50,0x10,&DAT_180a0263c);
  if (puVar8 < puVar5) {
    puStack_b0 = puVar8 + 5;
    FUN_1801e8210(puVar8);
    puVar8 = puVar8 + 5;
  }
  else {
    FUN_1801e8b60(&puStack_b8,&puStack_68);
    puVar5 = puStack_a8;
    puVar8 = puStack_b0;
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_90 = &UNK_1809fdc18;
  puStack_88 = auStack_78;
  auStack_78[0] = auStack_78[0] & 0xffffff00;
  uStack_80 = 2;
  strcpy_s(auStack_78,0x10,&DAT_180a0264c);
  if (puVar8 < puVar5) {
    puStack_b0 = puVar8 + 5;
    FUN_1801e8210(puVar8);
    puVar5 = puVar8 + 5;
  }
  else {
    FUN_1801e8b60(&puStack_b8,&puStack_90);
    puVar5 = puStack_b0;
  }
  puVar8 = puStack_b8;
  puStack_90 = &UNK_18098bcb0;
  lVar1 = (longlong)puVar5 - (longlong)puStack_b8 >> 0x3f;
  lVar6 = ((longlong)puVar5 - (longlong)puStack_b8) / 0x28 + lVar1;
  uVar11 = uVar3;
  if (lVar6 != lVar1) {
    do {
      iVar10 = (int)uVar11;
      iVar2 = FUN_1806299b0(param_2,puVar8 + uVar3 * 5);
      if (iVar2 <= iVar9) {
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      uVar3 = (ulonglong)(int)(iVar10 + 1U);
      uVar11 = (ulonglong)(iVar10 + 1U);
    } while (uVar3 < (ulonglong)(lVar6 - lVar1));
  }
  uVar4 = FUN_180629a40(param_2,&puStack_90,0,iVar9 + -1);
  FUN_18005d190(param_3,uVar4);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (uint *)0x0;
  auStack_78[0] = 0;
  puStack_90 = &UNK_18098bcb0;
  for (puVar7 = puVar8; puVar7 != puVar5; puVar7 = puVar7 + 5) {
    (**(code **)*puVar7)(puVar7,0);
  }
  if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_d8);
}






// 函数: void FUN_1801d9f10(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d9f10(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d9f30(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1801d9f30(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  longlong *param_5,longlong *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  int8_t auStack_118 [32];
  longlong lStack_f8;
  ulonglong uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  uint uStack_c0;
  ushort uStack_bc;
  uint64_t uStack_b8;
  longlong *plStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  plStack_b0 = param_6;
  uVar11 = param_5[1] - *param_5 >> 2;
  uVar3 = *(uint64_t *)(param_2 + 0x1e0);
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  uStack_98 = 0x1b;
  uStack_e8 = param_4;
  uStack_e0 = param_3;
  lStack_d0 = param_2;
  strcpy_s(auStack_90,0x40,&DAT_180a04a78);
  uVar6 = FUN_180240430(uVar3,&puStack_a8,0);
  puStack_a8 = &UNK_18098bcb0;
  if ((int)uVar11 != 0) {
    lStack_f8 = 0;
    uStack_f0 = uVar11 & 0xffffffff;
    do {
      uVar4 = uStack_e0;
      uVar3 = uStack_e8;
      uVar1 = *(uint *)(lStack_f8 + *param_5);
      if (param_7 == -1) {
        bVar5 = *(byte *)(param_2 + 0x38c);
        if (bVar5 == 9) {
          uVar2 = *(uint *)(param_2 + 0x388);
          if ((uVar2 >> 0x1e & 1) == 0) {
            if ((uVar2 >> 0x1c & 1) == 0) {
              bVar5 = (byte)(uVar2 >> 0x18);
              if ((int)uVar2 < 0) {
                if ((uVar2 >> 0x1b & 1) == 0) {
                  bVar5 = bVar5 & 1 | 0xc;
                  *(byte *)(param_2 + 0x38c) = bVar5;
                  uVar10 = (ushort)bVar5;
                }
                else {
                  bVar5 = bVar5 & 1 | 0xe;
                  *(byte *)(param_2 + 0x38c) = bVar5;
                  uVar10 = (ushort)bVar5;
                }
              }
              else {
                if ((uVar2 >> 0x19 & 1) == 0) {
                  bVar5 = bVar5 & 1;
                  *(byte *)(param_2 + 0x38c) = bVar5;
                  goto LAB_1801da102;
                }
                if ((uVar2 >> 0x1b & 1) == 0) {
                  bVar5 = bVar5 & 1 | 2;
                  *(byte *)(param_2 + 0x38c) = bVar5;
                  uVar10 = (ushort)bVar5;
                }
                else {
                  bVar5 = ((uVar2 >> 0x18 & 1) != 0) + 7;
                  *(byte *)(param_2 + 0x38c) = bVar5;
                  uVar10 = (ushort)bVar5;
                }
              }
            }
            else {
              *(int8_t *)(param_2 + 0x38c) = 4;
              uVar10 = 4;
            }
          }
          else {
            *(int8_t *)(param_2 + 0x38c) = 9;
            uVar10 = 9;
          }
        }
        else {
LAB_1801da102:
          uVar10 = (ushort)bVar5;
        }
      }
      else {
        uVar10 = (ushort)param_7;
      }
      iVar9 = 0;
      lVar7 = *param_6;
      if (param_6[1] - lVar7 >> 3 != 0) {
        lVar8 = 0;
        do {
          uVar11 = *(ulonglong *)(lVar8 + lVar7);
          if ((1 < (ushort)(uVar10 - 10)) || ((uVar1 >> 8 & 1) == 0)) {
            if ((uVar6 != 0) && ((uVar1 >> 8 & 1) == 0)) {
              uVar11 = uVar11 & ~uVar6;
            }
            uStack_d8 = uVar3;
            uStack_c8 = uVar11;
            uStack_c0 = uVar1;
            uStack_bc = uVar10;
            FUN_1801e66c0(uVar4,&uStack_d8,&uStack_c8);
          }
          iVar9 = iVar9 + 1;
          lVar8 = lVar8 + 8;
          lVar7 = *param_6;
          param_2 = lStack_d0;
        } while ((ulonglong)(longlong)iVar9 < (ulonglong)(param_6[1] - lVar7 >> 3));
      }
      lStack_f8 = lStack_f8 + 4;
      uStack_f0 = uStack_f0 - 1;
    } while (uStack_f0 != 0);
  }
  if (*param_6 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001801dab3e)
// WARNING: Removing unreachable block (ram,0x0001801dab47)
// WARNING: Removing unreachable block (ram,0x0001801db3bd)
// WARNING: Removing unreachable block (ram,0x0001801db3c2)
// WARNING: Removing unreachable block (ram,0x0001801db3c4)
// WARNING: Removing unreachable block (ram,0x0001801dabc9)
// WARNING: Removing unreachable block (ram,0x0001801daba1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




