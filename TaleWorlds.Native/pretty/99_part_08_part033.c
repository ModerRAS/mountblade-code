#include "TaleWorlds.Native.Split.h"

// 99_part_08_part033.c - 1 个函数

// 函数: void FUN_1805a0c50(longlong *param_1)
void FUN_1805a0c50(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  float *pfVar15;
  longlong lVar16;
  undefined1 uVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 uVar26;
  undefined8 *puVar27;
  undefined1 auStack_2e8 [32];
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  int *piStack_2b8;
  uint uStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  undefined8 *puStack_290;
  undefined1 uStack_288;
  longlong lStack_278;
  longlong *plStack_270;
  int aiStack_268 [2];
  undefined8 uStack_260;
  int iStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  byte bStack_234;
  undefined2 uStack_233;
  undefined1 uStack_231;
  bool bStack_230;
  undefined1 uStack_22f;
  undefined2 uStack_22e;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined8 uStack_224;
  undefined1 uStack_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined1 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined8 auStack_b8 [2];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  undefined1 auStack_88 [16];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  lVar4 = param_1[4];
  iVar18 = *(int *)(*(longlong *)(lVar4 + 0x590) + 0x2450 +
                   (longlong)*(int *)((longlong)param_1 + 0x3c) * 0x48);
  if ((iVar18 == -1) ||
     ((iVar18 = *(int *)((longlong)iVar18 * 0x68 + 0x58 + _DAT_180c96150), iVar18 != 0x1c &&
      (iVar18 != 0x1f)))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  plStack_270 = param_1;
  if ((*(int *)(lVar4 + 0x568) == 1) && (bVar11)) {
    lStack_250 = *(longlong *)(lVar4 + 0x8d8);
    iVar18 = (int)((param_1[1] - *param_1) / 0xcb0);
    if (0 < iVar18) {
      lVar21 = 0;
      lVar20 = (longlong)iVar18;
      lStack_248 = 0;
      lStack_278 = lVar20;
LAB_1805a0d60:
      lVar16 = *param_1;
      if (*(char *)(lVar21 + 0xc18 + lVar16) == '\0') {
        lVar25 = 0;
LAB_1805a0d8e:
        if ((((((*(int *)(lVar21 + 0xc20 + lVar16) - 3U < 3) && (lVar25 != 0)) &&
              (lVar20 = *(longlong *)(*(longlong *)(lVar25 + 0x8f8) + 0x9f0), lVar20 != 0)) &&
             (0 < *(int *)(lVar20 + 0x30))) &&
            ((uVar5 = *(ulonglong *)
                       ((longlong)*(int *)(lVar20 + 0xf0) * 0xa0 + 0x50 +
                       *(longlong *)(lVar20 + 0xd0)), (uVar5 >> 9 & 1) == 0 ||
             (0 < *(short *)(lVar20 + 8))))) && ((uVar5 >> 0x1c & 1) != 0)) {
          uVar26 = 1;
        }
        else {
          uVar26 = 0;
        }
        aiStack_268[0] = -1;
        if ((lVar25 == 0) || (cVar14 = func_0x00018052da70(), cVar14 == '\0')) {
          cVar14 = *(char *)(lVar21 + 0xc18 + lVar16);
          bVar11 = false;
          if (cVar14 == '\0') goto LAB_1805a0e22;
          bVar12 = true;
        }
        else {
          cVar14 = *(char *)(lVar21 + 0xc18 + lVar16);
          bVar11 = true;
LAB_1805a0e22:
          bVar12 = false;
        }
        if (((cVar14 == '\0') && (*(longlong *)(lVar21 + lVar16) != 0)) &&
           (*(longlong *)(*(longlong *)(lVar21 + lVar16) + 0x10) != 0)) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((bVar12) || (bVar13)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((cVar14 == '\0') && (*(longlong *)(lVar21 + lVar16) != 0)) {
          puVar24 = *(undefined8 **)(*(longlong *)(lVar21 + lVar16) + 0x10);
LAB_1805a0e7b:
          lVar20 = *(longlong *)(lVar21 + 0xc10 + lVar16);
          if (lVar20 == 0) goto LAB_1805a0e8e;
          uVar23 = *(undefined4 *)(lVar20 + 100);
        }
        else {
          puVar24 = (undefined8 *)0x0;
          if (cVar14 == '\0') goto LAB_1805a0e7b;
LAB_1805a0e8e:
          uVar23 = 0xffffffff;
        }
        cVar14 = *(char *)(lVar21 + 0xca0 + lVar16);
        if (cVar14 == -1) {
          uVar17 = 0xff;
        }
        else {
          uVar17 = *(undefined1 *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x6d8) + 0x8a8) + 0x260)
                        + 0x208) + 0x140) + 0x104 + (longlong)cVar14 * 0x1b0);
        }
        uStack_20c = (undefined4)plStack_270[6];
        uStack_178 = 0xbf800000;
        uStack_174 = 0x80000000;
        uStack_170 = 0x80000000;
        uStack_16c = 0x80000000;
        uStack_168 = 0;
        uStack_233 = 0;
        uStack_231 = 0;
        uStack_22e = 0;
        uStack_1fc = 0xffc00000;
        uStack_1f8 = 0xffc00000;
        uStack_1f4 = 0xffc00000;
        uStack_1f0 = 0xffc00000;
        uStack_1bc = 0x7fc00000;
        uStack_1b8 = 0x7fc00000;
        uStack_1b4 = 0x7fc00000;
        uStack_1b0 = 0x7fc00000;
        uStack_1ac = 0x7fc00000;
        uStack_1a8 = 0x7fc00000;
        uStack_1a4 = 0x7fc00000;
        uStack_1a0 = 0x7fc00000;
        _uStack_237 = CONCAT13((byte)~*(byte *)(lVar21 + 0xca2 + lVar16) >> 7,
                               CONCAT12(*(undefined1 *)(lVar21 + 0xc18 + lVar16),
                                        CONCAT11(*(undefined1 *)(lVar4 + 0x7e),
                                                 *(undefined1 *)(lVar21 + 0xcaa + lVar16))));
        _bStack_230 = CONCAT11(*(undefined1 *)(lVar21 + 0xca8 + lVar16),puVar24 != (undefined8 *)0x0
                              );
        uStack_210 = *(undefined1 *)(lVar21 + 0xc24 + lVar16);
        _uStack_22c = CONCAT44((int)plStack_270[5],*(undefined4 *)(lVar21 + 0xc20 + lVar16));
        uStack_224 = 0x200000001;
        _uStack_21c = CONCAT11(uVar17,*(undefined1 *)(lVar21 + 0xca0 + lVar16));
        uStack_21a = *(undefined1 *)(lVar21 + 0xca1 + lVar16);
        _uStack_218 = CONCAT44(uVar23,*(undefined4 *)(lVar4 + 0x70));
        uStack_208 = *(undefined4 *)(lVar21 + 0xc90 + lVar16);
        uStack_204 = *(undefined4 *)(lVar21 + 0xc94 + lVar16);
        uStack_200 = *(undefined4 *)(lVar21 + 0xc98 + lVar16);
        puVar27 = (undefined8 *)(lVar21 + 0xc48 + lVar16);
        uVar9 = *puVar27;
        uVar10 = puVar27[1];
        uStack_1ec = (undefined4)uVar9;
        uStack_1e8 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_1e4 = (undefined4)uVar10;
        uStack_1e0 = (undefined4)((ulonglong)uVar10 >> 0x20);
        puVar1 = (undefined4 *)(lVar21 + 0xc58 + lVar16);
        uStack_1dc = *puVar1;
        uStack_1d8 = *(undefined8 *)(puVar1 + 1);
        uStack_1d0 = puVar1[3];
        puVar27 = (undefined8 *)(lVar16 + 0xc28 + lVar21);
        uStack_19c = 0x7fc00000;
        uStack_198 = 0x7fc000007fc00000;
        uStack_1cc = (undefined4)*puVar27;
        uStack_1c8 = (undefined4)((ulonglong)*puVar27 >> 0x20);
        uStack_1c4 = (undefined4)puVar27[1];
        uStack_1c0 = (undefined4)((ulonglong)puVar27[1] >> 0x20);
        puVar1 = (undefined4 *)(lVar21 + 0xc38 + lVar16);
        uStack_188 = *(undefined8 *)(puVar1 + 1);
        _uStack_190 = CONCAT44(*puVar1,0x7fc00000);
        _uStack_180 = CONCAT44(0xbf800000,puVar1[3]);
        uStack_238 = uVar26;
        if (bVar12) {
          uStack_260 = 0xffffffffffffffff;
          iStack_258 = -1;
          if (lVar25 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (longlong)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0;
          }
          uStack_288 = *(undefined1 *)(lVar21 + 0xcab + lVar16);
          puStack_2c0 = (undefined8 *)(lVar4 + 0x6c);
          puStack_290 = &uStack_260;
          lStack_298 = lVar16 + 0xc78 + lVar21;
          lStack_2a0 = lVar16 + 0xc68 + lVar21;
          lStack_2a8 = CONCAT62(lStack_2a8._2_6_,*(undefined2 *)(lVar4 + 0x7c));
          uStack_2b0 = CONCAT31(uStack_2b0._1_3_,*(undefined1 *)(lVar21 + 0xca9 + lVar16));
          piStack_2b8 = aiStack_268;
          puStack_2c8 = puVar24;
          FUN_1804f91b0(lStack_250,&uStack_238,lVar4,lVar20);
          if (((((int)uStack_260 != -1) || (uStack_260._4_4_ != -1)) || (iStack_258 != -1)) &&
             (lVar25 != 0)) {
            lVar20 = (longlong)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0;
            puVar19 = (uint *)((longlong)*(char *)(lVar21 + 0xca0 + lVar16) * 0x100 +
                              *(longlong *)(*(longlong *)(lVar20 + 0x658) + 0x18));
            do {
              LOCK();
              uVar2 = *puVar19;
              *puVar19 = *puVar19 | 1;
              UNLOCK();
            } while ((uVar2 & 1) != 0);
            uStack_a8 = puVar19[1];
            uStack_a4 = puVar19[2];
            uStack_a0 = puVar19[3];
            uStack_9c = puVar19[4];
            fVar6 = (float)puVar19[5];
            fVar7 = (float)puVar19[6];
            fVar8 = (float)puVar19[7];
            uStack_8c = puVar19[8];
            *puVar19 = 0;
            lVar22 = lStack_250;
            fStack_98 = fVar6;
            fStack_94 = fVar7;
            fStack_90 = fVar8;
            uStack_78 = uStack_a8;
            uStack_74 = uStack_a4;
            uStack_70 = uStack_a0;
            uStack_6c = uStack_9c;
            fStack_68 = fVar6;
            fStack_64 = fVar7;
            fStack_60 = fVar8;
            uStack_5c = uStack_8c;
            pfVar15 = (float *)FUN_180534930(*(longlong *)(*(longlong *)(lVar20 + 0x6d8) + 0x8a8) +
                                             0x70,auStack_88,puVar27);
            uStack_14c = 0x7f7fffff;
            fStack_158 = *pfVar15 - fVar6;
            fStack_154 = pfVar15[1] - fVar7;
            fStack_150 = pfVar15[2] - fVar8;
            FUN_180285b40(&uStack_a8,auStack_b8,&fStack_158);
            uStack_2b0 = uStack_2b0 & 0xffffff00;
            piStack_2b8 = (int *)CONCAT71(piStack_2b8._1_7_,
                                          *(int *)((longlong)plStack_270 + 0x3c) == 1);
            puStack_2c0 = &uStack_260;
            puStack_2c8 = auStack_b8;
            FUN_1805ab940(*(undefined8 *)(lVar22 + 0x98d920),lVar4,lVar20,
                          *(undefined1 *)(lVar21 + 0xca0 + lVar16));
          }
        }
        lVar20 = lStack_278;
        param_1 = plStack_270;
        if (!bVar11) {
          FUN_1805a0af0();
          param_1 = plStack_270;
          if (*(int *)(lVar21 + 0xc20 + lVar16) == 1) {
            *(undefined4 *)(lVar4 + 0x2a8) = *(undefined4 *)(*(longlong *)(lVar4 + 0x2b8) + 8);
          }
          else {
            iVar18 = *(int *)(*(longlong *)(lVar4 + 0x2b8) + 4);
            if (iVar18 != -1) {
              if (lVar25 == 0) {
                uStack_cc = 0xffffffff;
              }
              else {
                uStack_cc = *(undefined4 *)(lVar25 + 0x10);
              }
              uStack_138 = 0;
              uStack_130 = 0;
              uStack_140 = 0;
              uStack_f8 = *(undefined4 *)((longlong)plStack_270 + 0x3c);
              uStack_128 = 0;
              uStack_c4 = 0;
              uStack_100 = 0;
              uStack_148 = 0xffffffffffffffff;
              uStack_120 = 0;
              uStack_11c = 0x3f800000;
              uStack_118 = 0xbe4ccccd;
              uStack_114 = 0xbe4ccccd;
              uStack_110 = 0x3ecccccd;
              uStack_108 = 0x100;
              uStack_fc = 0x11;
              uStack_f4 = 0;
              uStack_f0 = 0;
              uStack_ec = 0;
              uStack_e8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_c8 = 0xff;
              uStack_d0 = 0xffffffff;
              uStack_bc = 0x3f800000;
              iStack_d4 = iVar18;
              FUN_1805a4a20(lVar4 + 0x28,uStack_f8,&uStack_148,0);
            }
          }
          if ((*(int *)(lVar21 + 0xc20 + lVar16) == 2) &&
             (lVar20 = *(longlong *)(lVar21 + 0xc88 + lVar16), lVar20 != 0)) {
            if ((int)param_1[5] < 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = *(longlong *)(lVar4 + 0x8f8) + 8 + (longlong)(int)param_1[5] * 0x1f8;
            }
            piStack_2b8 = (int *)0x0;
            puStack_2c8 = puVar27;
            FUN_1804f8630(*(undefined8 *)(lVar4 + 0x8d8),*(undefined4 *)(lVar4 + 0x10),lVar22,
                          *(undefined4 *)(lVar20 + 100));
          }
          cVar14 = *(char *)(lVar21 + 0xca9 + lVar16);
          if (((cVar14 != '\0') || (*(int *)(lVar21 + 0xc20 + lVar16) - 3U < 3)) ||
             (-1 < *(char *)(lVar21 + 0xca2 + lVar16))) {
            lStack_2a0 = lVar16 + 0xc78 + lVar21;
            lStack_2a8 = lVar16 + 0xc68 + lVar21;
            uStack_2b0 = *(uint *)(lVar4 + 0x10);
            piStack_2b8 = (int *)0x0;
            puStack_2c8 = (undefined8 *)CONCAT44(puStack_2c8._4_4_,(int)param_1[5]);
            FUN_1805253f0((longlong)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0,
                          &uStack_238,cVar14,*(undefined1 *)(lVar21 + 0xca2 + lVar16));
          }
          if (aiStack_268[0] == 1) {
            lVar20 = lStack_278;
            if (lVar25 != 0) {
              bVar3 = *(byte *)(lVar4 + 0x68);
              lVar16 = 0;
              if (bVar3 != 0) {
                do {
                  if ((uint)*(ushort *)(lVar4 + 0x28 + lVar16 * 2) == *(uint *)(lVar25 + 0x10)) {
                    iVar18 = 0;
                    lVar16 = 0;
                    goto LAB_1805a1510;
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 < (longlong)(ulonglong)bVar3);
              }
            }
            goto LAB_1805a1543;
          }
          *(undefined4 *)(lVar4 + 0x2b4) = 0;
          *(undefined8 *)(lVar4 + 0x2b8) = 0;
          goto FUN_1805a15ae;
        }
      }
      else {
        lVar25 = *(longlong *)(lVar21 + 0xc08 + lVar16);
        if ((lVar25 == 0) || (*(int *)(lVar25 + 0x568) == 1)) goto LAB_1805a0d8e;
      }
      goto LAB_1805a1543;
    }
  }
FUN_1805a15ae:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2e8);
  while( true ) {
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 1;
    if ((int)(uint)bVar3 <= iVar18) break;
LAB_1805a1510:
    if ((uint)*(ushort *)(lVar4 + 0x28 + lVar16 * 2) == *(uint *)(lVar25 + 0x10)) {
      *(undefined2 *)(lVar4 + 0x28 + lVar16 * 2) =
           *(undefined2 *)(lVar4 + 0x26 + (ulonglong)bVar3 * 2);
      *(char *)(lVar4 + 0x68) = *(char *)(lVar4 + 0x68) + -1;
      break;
    }
  }
LAB_1805a1543:
  lVar21 = lVar21 + 0xcb0;
  lStack_248 = lStack_248 + 1;
  if (lVar20 <= lStack_248) goto FUN_1805a15ae;
  goto LAB_1805a0d60;
}






