#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part159.c - 1 个函数

// 函数: void FUN_180760d50(longlong param_1,uint param_2,int param_3)
void FUN_180760d50(longlong param_1,uint param_2,int param_3)

{
  undefined8 **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  char cVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 **ppuVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_568 [32];
  undefined4 *puStack_548;
  int *piStack_540;
  uint uStack_538;
  uint uStack_530;
  char cStack_528;
  uint uStack_524;
  uint uStack_520;
  int iStack_51c;
  int iStack_518;
  uint uStack_514;
  uint uStack_510;
  undefined8 *puStack_508;
  longlong lStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  int iStack_4e8;
  int iStack_4e4;
  longlong lStack_4e0;
  undefined8 *puStack_4d8;
  longlong lStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 auStack_4a8 [2];
  undefined8 *puStack_4a0;
  longlong lStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  longlong alStack_480 [2];
  undefined8 ***pppuStack_470;
  undefined8 ***pppuStack_468;
  undefined8 uStack_460;
  undefined8 ***pppuStack_458;
  undefined8 ***pppuStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined8 uStack_3b0;
  undefined8 ***pppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_318;
  undefined8 ***pppuStack_310;
  undefined8 ***pppuStack_308;
  undefined8 uStack_300;
  undefined8 ***pppuStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2b0;
  undefined4 uStack_294;
  undefined4 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined8 uStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  int *piStack_1b0;
  undefined4 *puStack_1a8;
  longlong *plStack_1a0;
  undefined4 uStack_198;
  int aiStack_190 [2];
  undefined4 *puStack_188;
  undefined4 *puStack_180;
  longlong *plStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [256];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_568;
  piStack_540 = &iStack_4e8;
  puStack_548 = &uStack_4b8;
  puVar13 = (undefined4 *)0x0;
  iStack_4e8 = 0;
  uStack_514 = 0;
  uStack_524 = param_2;
  uStack_520 = param_2;
  iStack_51c = param_3;
  FUN_18075ece0(param_1,*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                &uStack_4b4);
  bVar23 = iStack_4e8 == 0;
  cStack_528 = iStack_4e8 == 0xb;
  puVar11 = *(undefined4 **)(param_1 + 0x210);
  if (puVar11 != (undefined4 *)0x0) {
    lVar12 = *(longlong *)(param_1 + 0xa8);
    bVar24 = lVar12 != 0;
    if (bVar24) {
      func_0x000180743c20(lVar12,7);
      puVar11 = *(undefined4 **)(param_1 + 0x210);
    }
    if ((puVar11 == (undefined4 *)0x0) ||
       (puStack_548 = puVar11, *(char *)((longlong)puVar11 + 0x212) == '\0')) {
      puStack_548 = puVar13;
    }
    puVar11 = puVar13;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x10);
    }
    iVar3 = FUN_180762e40(param_1,puVar11,param_2,*(undefined4 *)(param_1 + 0x148));
    if (iVar3 != 0) {
      if ((bVar24) && (lVar12 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar12,7);
      }
      goto FUN_18076203a;
    }
    if ((bVar24) && (lVar12 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar12,7);
    }
  }
  cVar19 = cStack_528;
  if ((param_2 == 0) || ((*(uint *)(param_1 + 100) & 0x10001) != 0)) {
LAB_180761b18:
    puVar11 = (undefined4 *)0x0;
    if ((cVar19 != '\0') &&
       (puVar14 = *(undefined8 **)(param_1 + 0x138), puVar14 != (undefined8 *)0x0)) {
      if (0 < *(int *)(puVar14 + 1)) {
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + -1;
        puVar14 = *(undefined8 **)(param_1 + 0x138);
      }
      if (*(int *)(puVar14 + 1) == 0) {
        if (puVar14[3] != 0) {
          puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(longlong *)(param_1 + 0x140) + 0x10bd0,puVar14[3],&DAT_18098bc73,0);
        }
        *puVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x107a8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x107a8) = *(undefined8 *)(param_1 + 0x138)
        ;
      }
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
    }
    lVar12 = *(longlong *)(param_1 + 0x210);
    if (lVar12 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xa8);
      bVar23 = lVar9 != 0;
      if (bVar23) {
        func_0x000180743c20(lVar9,7);
        lVar12 = *(longlong *)(param_1 + 0x210);
      }
      if ((lVar12 == 0) ||
         (puStack_548 = (undefined4 *)(lVar12 + 0x214), *(char *)(lVar12 + 0x426) == '\0')) {
        puStack_548 = puVar11;
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x10);
      }
      iVar3 = FUN_180762e40(param_1,puVar11,param_2,*(undefined4 *)(param_1 + 0x148));
      if (iVar3 != 0) {
        if ((bVar23) && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar9,7);
        }
        goto FUN_18076203a;
      }
      if ((bVar23) && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar9,7);
      }
    }
    if (*(longlong *)(param_1 + 0x138) == 0) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x4000;
      UNLOCK();
    }
    else {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffbfff;
      UNLOCK();
    }
    if (*(short *)(param_1 + 0x1aa) != 0) {
      plVar21 = *(longlong **)(param_1 + 400);
      if (plVar21 != (longlong *)(param_1 + 400)) {
        do {
          lVar12 = *(longlong *)((longlong)plVar21 + 0x10);
          lVar9 = *(longlong *)(lVar12 + 0x60);
          if ((*(short *)(lVar9 + 0x5a) != 0) || ((*(byte *)(lVar12 + 0x7c) & 1) != 0)) {
            iVar3 = (int)*(short *)(lVar9 + 0x1b0);
            uVar6 = *(uint *)(lVar12 + 0x7c) & 1;
            plVar21 = (longlong *)(lVar9 + 0x138 + (ulonglong)uVar6 * 0x20);
            if (uVar6 == 0) {
              iVar3 = *(short *)(lVar9 + 0x1a8) - iVar3;
            }
            if (*(ushort *)(lVar9 + 0x118) == 0) {
              if (*(longlong *)(lVar9 + 0x138) == 0) {
                if (iVar3 < 2) {
                  if (*(longlong *)(lVar12 + 0x40) == 0) {
                    uVar6 = *(uint *)(*(longlong *)(lVar12 + 0x58) + 0x148);
                    if (uVar6 != 0) {
                      iVar3 = *(int *)(*(longlong *)(lVar12 + 0x58) + 0x14c);
                      goto LAB_180761d5c;
                    }
                  }
                  else {
                    uVar6 = (uint)*(short *)(lVar12 + 0x3a);
                    iVar3 = 0;
LAB_180761d5c:
                    if (uVar6 != 0) goto LAB_180761db7;
                  }
                  uVar6 = *(uint *)(lVar9 + 0x1c0);
                  if (uVar6 == 0) {
                    iVar3 = 2;
                    uVar6 = 1;
                  }
                  else {
                    iVar3 = 0;
                  }
                }
                else {
                  iVar3 = iStack_51c;
                  if (iStack_51c == 0) {
                    iVar3 = *(int *)(*(longlong *)(lVar9 + 0xa8) + 0x1193c);
                  }
                  if (iVar3 == 1) {
                    uVar6 = *(uint *)(*(longlong *)(lVar9 + 0xa8) + 0x6d4);
                  }
                  else {
                    uVar6 = func_0x0001807462a0(iVar3);
                  }
                }
              }
              else {
                uVar6 = *(uint *)(lVar9 + 0x148);
                iVar3 = *(int *)(lVar9 + 0x14c);
              }
            }
            else {
              iVar3 = *(int *)(lVar9 + 0xc4);
              uVar6 = (uint)*(ushort *)(lVar9 + 0x118);
            }
LAB_180761db7:
            if ((*(longlong *)(param_1 + 0x138) == 0) || (uStack_524 == 0)) {
LAB_180761fe9:
              if (*(int *)(lVar12 + 0x6c) != 0) {
                func_0x000180765bd0(lVar12);
              }
            }
            else {
              if ((*plVar21 == 0) && (*(longlong *)(lVar12 + 0x40) == 0)) {
                if ((((*(float *)(lVar12 + 0x80) == *(float *)(lVar12 + 0x68)) &&
                     (*(float *)(lVar12 + 0x80) == 1.0)) && (*(float *)(lVar12 + 0x68) == 1.0)) &&
                   (*(short *)(lVar9 + 0x1a8) < 2)) {
                  uStack_510 = *(uint *)(param_1 + 0x148);
                  iVar4 = *(int *)(param_1 + 0x14c);
                  iStack_518 = iVar3;
                  if ((uStack_510 != uVar6) || (iVar4 != iVar3)) {
                    if ((iVar4 == 0) && (iVar4 = iStack_51c, 0 < (int)uStack_510)) {
                      iVar4 = func_0x000180746b50(uStack_510);
                    }
                    uVar7 = func_0x0001807462a0(iVar4);
                    if (uVar7 != 0) {
                      uStack_510 = uVar7;
                    }
                    iVar5 = iVar3;
                    if (iVar3 == 0) {
                      if ((int)uVar6 < 1) {
                        iStack_518 = iStack_51c;
                        iVar5 = iStack_51c;
                      }
                      else {
                        iStack_518 = func_0x000180746b50(uVar6);
                        iVar5 = iStack_518;
                      }
                    }
                    uVar8 = func_0x0001807462a0(iVar5);
                    uVar7 = uVar6;
                    if (uVar8 != 0) {
                      uVar7 = uVar8;
                    }
                    if ((uStack_510 != uVar7) || (iVar4 != iStack_518)) goto LAB_180761ebf;
                  }
                  if (uStack_524 != 0) {
                    FUN_18075d580(param_1 + 0x138,plVar21);
                  }
                  goto LAB_180761fe9;
                }
              }
LAB_180761ebf:
              lVar15 = *plVar21;
              uVar7 = *(uint *)(lVar9 + 100) >> 0xf & 1;
              if (lVar15 == 0) {
                puStack_548 = (undefined4 *)((ulonglong)puStack_548 & 0xffffffffffffff00);
                iVar4 = FUN_18075a100(plVar21,*(undefined8 *)(param_1 + 0xa8),uVar6,0);
                if (iVar4 != 0) goto FUN_18076203a;
                lVar15 = *plVar21;
                uVar7 = 1;
                *(int *)((longlong)plVar21 + 0x14) = iVar3;
              }
              if ((uVar7 != 0) &&
                 (((uStack_514 != 0 || (uStack_524 < uStack_520)) ||
                  ((*(longlong *)(lVar12 + 0x40) != 0 &&
                   ((int)*(short *)(lVar12 + 0x3a) != (int)plVar21[2])))))) {
                if (lVar15 != 0) {
                  lVar15 = *(longlong *)(lVar15 + 0x10);
                }
                    // WARNING: Subroutine does not return
                memset(lVar15,0,(ulonglong)(uStack_520 * (int)plVar21[2]) << 2);
              }
              lVar16 = 0;
              if ((*(int *)((longlong)plVar21 + 0x14) == 1) || (*(int *)(param_1 + 0x14c) == 1)) {
                uVar17 = 1;
              }
              else {
                uVar17 = 0;
              }
              lVar20 = lVar16;
              if (*(longlong *)(param_1 + 0x138) != 0) {
                lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10);
              }
              if (lVar15 != 0) {
                lVar16 = *(longlong *)(lVar15 + 0x10);
              }
              uStack_538 = uStack_524;
              piStack_540 = (int *)CONCAT44(piStack_540._4_4_,*(int *)(param_1 + 0x148));
              puStack_548 = (undefined4 *)CONCAT44(puStack_548._4_4_,(int)plVar21[2]);
              uStack_530 = uVar7;
              FUN_1807636f0(lVar12,lVar16 + (ulonglong)((int)plVar21[2] * uStack_514) * 4,
                            lVar20 + (ulonglong)(*(int *)(param_1 + 0x148) * uStack_514) * 4,uVar17)
              ;
            }
          }
          LOCK();
          *(uint *)(lVar9 + 100) = *(uint *)(lVar9 + 100) & 0xffff7fff;
          UNLOCK();
          plVar21 = *(longlong **)(lVar12 + 0x20);
        } while (plVar21 != (longlong *)(param_1 + 400));
      }
      FUN_18075f8e0(param_1 + 0x138);
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffeffff;
    UNLOCK();
    *(undefined4 *)(param_1 + 0x58) = 0;
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffc7ffff;
    UNLOCK();
  }
  else {
    uStack_4c8 = 0;
    uStack_4c0 = 0xffffffff;
    puStack_4d8 = (undefined8 *)0x0;
    lStack_4d0 = 0;
    if (bVar23) {
      uStack_4f8 = 0;
      uStack_4f0 = CONCAT44(uStack_4f0._4_4_,0xffffffff);
      puStack_508 = (undefined8 *)0x0;
      lStack_500 = 0;
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x28);
      }
      ppuVar1 = (undefined8 **)(param_1 + 0x138);
      if ((*ppuVar1 == (undefined8 *)0x0) && (iVar3 != 0)) {
        puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
        iVar4 = FUN_18075a100(ppuVar1,*(undefined8 *)(param_1 + 0xa8),uStack_4b4,uStack_4b8);
        puVar18 = puStack_508;
        puVar14 = puStack_4d8;
        if (iVar4 == 0) goto LAB_180760f3a;
      }
      else {
LAB_180760f3a:
        puStack_548 = (undefined4 *)((ulonglong)puStack_548 & 0xffffffffffffff00);
        iVar4 = FUN_18075a100(&puStack_508,*(undefined8 *)(param_1 + 0xa8),uStack_4b4);
        puVar18 = puStack_508;
        puVar14 = puStack_4d8;
        if (iVar4 == 0) {
          if ((*(uint *)(param_1 + 100) >> 3 & 1) != 0) {
            lVar12 = *(longlong *)(param_1 + 0x158);
            if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) ||
               (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x148))) {
              puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
              iVar4 = FUN_18075a100((longlong *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0xa8),
                                    *(undefined4 *)(param_1 + 0x148));
              if (iVar4 != 0) {
                FUN_18075f8e0(&puStack_508);
                puVar18 = puStack_508;
                puVar14 = puStack_4d8;
                goto LAB_180761496;
              }
            }
          }
          puVar14 = puStack_4d8;
          puVar18 = puStack_508;
          lVar12 = 0;
          alStack_480[0] = lVar12;
          if (*ppuVar1 != (undefined8 *)0x0) {
            alStack_480[0] = (*ppuVar1)[2];
          }
          lStack_4e0 = lVar12;
          if (puStack_508 != (undefined8 *)0x0) {
            lStack_4e0 = puStack_508[2];
          }
          lVar9 = lVar12;
          if (*(longlong *)(param_1 + 0x158) != 0) {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 0x10);
          }
          *(longlong *)(param_1 + 200) = lVar9;
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x168);
          if (iVar3 == 0) {
            uStack_524 = (uint)*(ushort *)(param_1 + 0x5a);
          }
          uVar6 = uStack_524;
          if ((*(float *)(param_1 + 0x1c4) == 1.0) && (*(float *)(param_1 + 0x1d0) == 1.0)) {
            iVar4 = (int)uStack_4f8;
            if (*(code **)(param_1 + 0x128) != (code *)0x0) {
              uStack_4ac = *(undefined4 *)(param_1 + 0x148);
              puStack_180 = &uStack_4b0;
              uStack_4b0 = 0;
              puStack_188 = &uStack_4ac;
              auStack_4a8[0] = 0;
              plStack_178 = alStack_480;
              uStack_170 = *(undefined4 *)(param_1 + 0x14c);
              puStack_1a8 = auStack_4a8;
              piStack_1b0 = &iStack_4e4;
              plStack_1a0 = &lStack_4e0;
              uStack_198 = uStack_4f8._4_4_;
              piStack_540 = (int *)((ulonglong)piStack_540 & 0xffffffff00000000);
              puStack_548 = (undefined4 *)((ulonglong)puStack_548 & 0xffffffff00000000);
              iStack_4e4 = (int)uStack_4f8;
              uStack_1b8 = 1;
              *(longlong *)(param_1 + 0xb0) = param_1;
              aiStack_190[0] = iVar3;
              iVar5 = (**(code **)(param_1 + 0x128))
                                ((longlong *)(param_1 + 0xb0),uStack_524,aiStack_190);
              if (iVar5 == 0xb) {
                cStack_528 = '\x01';
              }
              else if ((iVar5 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
                puStack_548 = (undefined4 *)auStack_168;
                auStack_168[0] = 0;
                    // WARNING: Subroutine does not return
                FUN_180749ef0(iVar5,7,param_1,&UNK_180958a10);
              }
              if ((((*(longlong *)(param_1 + 0xe8) != 0) &&
                   (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x48) != 0)) &&
                  (iVar4 != iStack_4e4)) &&
                 (iStack_4e4 <= *(int *)(*(longlong *)(param_1 + 0xa8) + 0x107b0))) {
                if (iStack_4e4 != 0) {
                  iVar4 = iStack_4e4;
                }
                uStack_4f8 = CONCAT44(uStack_4f8._4_4_,iVar4);
              }
            }
            if (iVar3 == 0) {
              if (*(ushort *)(param_1 + 0x58) == 0) {
                    // WARNING: Subroutine does not return
                memset(lStack_4e0 + (ulonglong)((uStack_524 + uStack_514) * iVar4) * 4,0,
                       (ulonglong)((uStack_520 - uStack_514) - uStack_524) * (longlong)iVar4 * 4);
              }
              uStack_514 = (uint)*(ushort *)(param_1 + 0x58);
                    // WARNING: Subroutine does not return
              memmove(lStack_4e0 + (ulonglong)(iVar4 * uStack_514) * 4,lStack_4e0,
                      (ulonglong)(iVar4 * uVar6) << 2);
            }
            uVar2 = uStack_4f8._4_4_;
            if ((*(float *)(param_1 + 0x1c8) == 1.0) && (*(float *)(param_1 + 0x1d4) == 1.0)) {
              fVar25 = *(float *)(param_1 + 0x1cc);
              if ((fVar25 != 0.0) || (*(float *)(param_1 + 0x1d8) != 0.0)) {
                pppuStack_308 = &pppuStack_310;
                pppuStack_310 = &pppuStack_310;
                uStack_300 = 0;
                pppuStack_2f0 = &pppuStack_2f8;
                uStack_2e8 = 0;
                ppuVar22 = &puStack_4d8;
                if (puVar14 == (undefined8 *)0x0) {
                  ppuVar22 = ppuVar1;
                }
                pppuStack_2f8 = &pppuStack_2f8;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                uStack_2c8 = 0;
                uStack_2d0 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                uStack_318 = 0;
                uStack_2c0 = 0;
                uStack_2b8 = 0;
                func_0x000180763630(&uStack_318,*(undefined8 *)(param_1 + 0xa8),
                                    *(undefined4 *)(param_1 + 0x1d8));
                uVar17 = 0;
                uStack_294 = 0x40;
                fStack_2b0 = *(float *)(param_1 + 0x1cc);
                if (*(float *)(param_1 + 0x1cc) == *(float *)(param_1 + 0x1d8)) {
                  uStack_294 = 0;
                }
                uVar10 = uVar17;
                if (*ppuVar22 != (undefined8 *)0x0) {
                  uVar10 = (*ppuVar22)[2];
                }
                if (puVar18 != (undefined8 *)0x0) {
                  uVar17 = puVar18[2];
                }
                uStack_530 = 0;
                uStack_538 = uStack_524;
                piStack_540 = (int *)CONCAT44(piStack_540._4_4_,*(undefined4 *)(ppuVar22 + 2));
                puStack_548 = (undefined4 *)CONCAT44(puStack_548._4_4_,iVar4);
                FUN_1807636f0(&uStack_318,uVar17,uVar10,0);
                FUN_18075f8e0(&puStack_4d8);
                fVar25 = *(float *)(param_1 + 0x1cc);
              }
              if (((*(float *)(param_1 + 0x1c8) != 0.0) || (*(float *)(param_1 + 0x1d4) != 0.0)) ||
                 ((fVar25 != 0.0 || (cVar19 = '\x01', *(float *)(param_1 + 0x1d8) != 0.0)))) {
                cVar19 = cStack_528;
              }
              *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1c4);
              *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1c8);
              *(float *)(param_1 + 0x1d8) = fVar25;
              FUN_18075f8e0(param_1 + 0x158);
              FUN_18075f8e0(ppuVar1);
              if ((*ppuVar1 == (undefined8 *)0x0) || (iVar3 = FUN_18075f8e0(ppuVar1), iVar3 == 0)) {
                *(longlong *)(param_1 + 0x140) = lStack_500;
                *(undefined4 *)(param_1 + 0x150) = (undefined4)uStack_4f0;
                puStack_508 = (undefined8 *)0x0;
                lStack_500 = 0;
                uStack_4f8 = 0;
                uStack_4f0 = 0;
                *ppuVar1 = puVar18;
                *(int *)(param_1 + 0x148) = iVar4;
                *(undefined4 *)(param_1 + 0x14c) = uVar2;
              }
              LOCK();
              *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
              UNLOCK();
              *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x148);
              if (puStack_508 != (undefined8 *)0x0) {
                iVar3 = *(int *)(puStack_508 + 1);
                if (0 < iVar3) {
                  iVar3 = iVar3 + -1;
                  *(int *)(puStack_508 + 1) = iVar3;
                }
                if (iVar3 == 0) {
                  if (puStack_508[3] != 0) {
                    puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
                    FUN_180742250(lStack_500 + 0x10bd0,puStack_508[3],&DAT_18098bc73,0);
                  }
                  *puStack_508 = *(undefined8 *)(lStack_500 + 0x107a8);
                  *(undefined8 **)(lStack_500 + 0x107a8) = puStack_508;
                }
              }
              param_2 = uStack_520;
              if (puStack_4d8 != (undefined8 *)0x0) {
                iVar3 = *(int *)(puStack_4d8 + 1);
                if (0 < iVar3) {
                  iVar3 = iVar3 + -1;
                  *(int *)(puStack_4d8 + 1) = iVar3;
                }
                if (iVar3 == 0) {
                  if (puStack_4d8[3] != 0) {
                    puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
                    FUN_180742250(lStack_4d0 + 0x10bd0,puStack_4d8[3],&DAT_18098bc73,0);
                  }
                  *puStack_4d8 = *(undefined8 *)(lStack_4d0 + 0x107a8);
                  *(undefined8 **)(lStack_4d0 + 0x107a8) = puStack_4d8;
                }
              }
              goto LAB_180761b18;
            }
            pppuStack_3b8 = &pppuStack_3c0;
            pppuStack_3c0 = &pppuStack_3c0;
            uStack_3b0 = 0;
            pppuStack_3a0 = &pppuStack_3a8;
            uStack_398 = 0;
            pppuStack_3a8 = &pppuStack_3a8;
            uStack_388 = 0;
            uStack_390 = 0;
            uStack_378 = 0;
            uStack_380 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            uStack_3c8 = 0;
            uStack_370 = 0;
            uStack_368 = 0;
            uStack_490 = 0;
            puStack_548 = (undefined4 *)((ulonglong)puStack_548 & 0xffffffffffffff00);
            puStack_4a0 = (undefined8 *)0x0;
            lStack_498 = 0;
            uStack_488 = 0xffffffff;
            iVar3 = FUN_18075a100(&puStack_4a0,*(undefined8 *)(param_1 + 0xa8),iVar4,
                                  uStack_4f8._4_4_);
            if (iVar3 == 0) {
              uVar10 = 0;
              uVar17 = uVar10;
              if (puVar18 != (undefined8 *)0x0) {
                uVar17 = puVar18[2];
              }
              if (puStack_4a0 != (undefined8 *)0x0) {
                uVar10 = puStack_4a0[2];
              }
                    // WARNING: Subroutine does not return
              memcpy(uVar10,uVar17,(ulonglong)(iVar4 * uStack_524) << 2);
            }
            if (puStack_4a0 != (undefined8 *)0x0) {
              iVar3 = *(int *)(puStack_4a0 + 1);
              if (0 < iVar3) {
                iVar3 = iVar3 + -1;
                *(int *)(puStack_4a0 + 1) = iVar3;
              }
              if (iVar3 == 0) {
                if (puStack_4a0[3] != 0) {
                  puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
                  FUN_180742250(lStack_498 + 0x10bd0,puStack_4a0[3],&DAT_18098bc73,0);
                }
                *puStack_4a0 = *(undefined8 *)(lStack_498 + 0x107a8);
                *(undefined8 **)(lStack_498 + 0x107a8) = puStack_4a0;
              }
            }
          }
          else {
            pppuStack_468 = &pppuStack_470;
            pppuStack_470 = &pppuStack_470;
            pppuStack_450 = &pppuStack_458;
            pppuStack_458 = &pppuStack_458;
            uStack_460 = 0;
            uStack_448 = 0;
            uStack_438 = 0;
            uStack_440 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            alStack_480[1] = 0;
            uStack_420 = 0;
            uStack_418 = 0;
            puStack_548 = (undefined4 *)((ulonglong)puStack_548 & 0xffffffffffffff00);
            iVar3 = FUN_18075a100(&puStack_4d8,*(undefined8 *)(param_1 + 0xa8),
                                  *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c))
            ;
            puVar14 = puStack_4d8;
            if (iVar3 == 0) {
              lVar9 = lVar12;
              if (*ppuVar1 != (undefined8 *)0x0) {
                lVar9 = (*ppuVar1)[2];
              }
              if (puStack_4d8 != (undefined8 *)0x0) {
                lVar12 = puStack_4d8[2];
              }
                    // WARNING: Subroutine does not return
              memcpy(lVar12,lVar9,(ulonglong)(*(int *)(param_1 + 0x148) * uStack_524) << 2);
            }
          }
        }
      }
LAB_180761496:
      if (puVar18 != (undefined8 *)0x0) {
        iVar3 = *(int *)(puVar18 + 1);
        if (0 < iVar3) {
          iVar3 = iVar3 + -1;
          *(int *)(puVar18 + 1) = iVar3;
        }
        if (iVar3 == 0) {
          if (puVar18[3] != 0) {
            puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
            FUN_180742250(lStack_500 + 0x10bd0,puVar18[3],&DAT_18098bc73,0);
          }
          *puVar18 = *(undefined8 *)(lStack_500 + 0x107a8);
          *(undefined8 **)(lStack_500 + 0x107a8) = puVar18;
        }
      }
    }
    else {
      if (((*(float *)(param_1 + 0x1cc) == 0.0) && (*(float *)(param_1 + 0x1d8) == 0.0)) ||
         (*(longlong *)(param_1 + 0x138) == 0)) goto LAB_180761b18;
      pppuStack_258 = &pppuStack_260;
      pppuStack_260 = &pppuStack_260;
      pppuStack_240 = &pppuStack_248;
      pppuStack_248 = &pppuStack_248;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_268 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      puStack_548 = (undefined4 *)((ulonglong)puStack_548._1_7_ << 8);
      iVar3 = FUN_18075a100(&puStack_4d8,*(undefined8 *)(param_1 + 0xa8),
                            *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
      puVar14 = puStack_4d8;
      if (iVar3 == 0) {
        puVar11 = puVar13;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x10);
        }
        if (puStack_4d8 != (undefined8 *)0x0) {
          puVar13 = (undefined4 *)puStack_4d8[2];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar13,puVar11,(ulonglong)(*(int *)(param_1 + 0x148) * param_2) << 2);
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      iVar3 = *(int *)(puVar14 + 1);
      if (0 < iVar3) {
        iVar3 = iVar3 + -1;
        *(int *)(puVar14 + 1) = iVar3;
      }
      if (iVar3 == 0) {
        if (puVar14[3] != 0) {
          puStack_548 = (undefined4 *)CONCAT71(puStack_548._1_7_,1);
                    // WARNING: Subroutine does not return
          FUN_180742250(lStack_4d0 + 0x10bd0,puVar14[3],&DAT_18098bc73,0);
        }
        *puVar14 = *(undefined8 *)(lStack_4d0 + 0x107a8);
        *(undefined8 **)(lStack_4d0 + 0x107a8) = puVar14;
      }
    }
  }
FUN_18076203a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_568);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



