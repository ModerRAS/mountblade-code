#include "TaleWorlds.Native.Split.h"

// 03_rendering_part021.c - 1 个函数

// 函数: void FUN_18027ba80(longlong param_1,undefined8 param_2,undefined1 param_3)
void FUN_18027ba80(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 *puStackX_8;
  int aiStackX_18 [2];
  undefined8 *puStackX_20;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  uint uStack_188;
  undefined8 uStack_180;
  int aiStack_178 [2];
  undefined *puStack_170;
  char *pcStack_168;
  uint uStack_160;
  ulonglong uStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined4 uStack_130;
  longlong *plStack_128;
  undefined2 uStack_120;
  char cStack_11e;
  int aiStack_118 [2];
  longlong *plStack_110;
  longlong *plStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  longlong *plStack_e8;
  char cStack_e0;
  char cStack_df;
  char cStack_de;
  undefined *puStack_d8;
  undefined *puStack_d0;
  uint uStack_c8;
  undefined4 uStack_c0;
  int aiStack_b8 [2];
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined4 uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,param_3);
  uStack_50 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x324) < 1) {
    return;
  }
  FUN_1806279c0(auStack_198);
  iVar20 = uStack_188 + -1;
  lVar7 = (longlong)iVar20;
  if (-1 < iVar20) {
    do {
      if (*(char *)(lVar7 + (longlong)puStack_190) == '/') goto LAB_18027baf2;
      iVar20 = iVar20 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar20 = -1;
LAB_18027baf2:
  lVar7 = FUN_180629a40(auStack_198,&puStack_70,0,iVar20);
  if (puStack_190 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_188 = *(uint *)(lVar7 + 0x10);
  puStack_190 = *(undefined **)(lVar7 + 8);
  uStack_180 = *(undefined8 *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = 0;
  puStack_70 = &UNK_18098bcb0;
  uVar17 = uStack_188 + 4;
  FUN_1806277c0(auStack_198,uVar17);
  *(undefined4 *)(puStack_190 + uStack_188) = 0x646d6d2f;
  *(undefined1 *)((longlong)(puStack_190 + uStack_188) + 4) = 0;
  uStack_188 = uVar17;
  FUN_180628380(auStack_198,*(undefined4 *)(param_1 + 0x324));
  iVar20 = uStack_188 + 4;
  FUN_1806277c0(auStack_198,iVar20);
  *(undefined4 *)(puStack_190 + uStack_188) = 0x646d6d2e;
  *(undefined1 *)((longlong)(puStack_190 + uStack_188) + 4) = 0;
  uStack_188 = iVar20;
  puVar8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar15 = &DAT_18098bc73;
  if (puStack_190 != (undefined *)0x0) {
    puVar15 = puStack_190;
  }
  lVar7 = 0;
  *puVar8 = 0;
  *(undefined1 *)(puVar8 + 2) = 0;
  puStackX_20 = puVar8;
  FUN_18062dee0(puVar8,puVar15,&UNK_180a01ff0);
  if (puVar8[1] == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
  fread(aiStack_b8,4,1);
  lVar9 = (longlong)aiStack_b8[0];
  if (aiStack_b8[0] == 0x31444d4d) {
    fread(aiStack_118,4,1,puVar8[1]);
    aiStackX_18[0] = 0;
    if (0 < aiStack_118[0]) {
      do {
        fread(aiStack_178,4,1,puVar8[1]);
        plVar12 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)(aiStack_178[0] + 1),0x10,3);
        plStack_b0 = plVar12;
        fread(plVar12,1,(longlong)aiStack_178[0],puVar8[1]);
        *(undefined1 *)((longlong)aiStack_178[0] + (longlong)plVar12) = 0;
        FUN_180627910(&puStack_d8,plVar12);
        while ((0 < (int)uStack_c8 && (lVar7 = strstr(puStack_d0,&DAT_180a0ff10), lVar7 != 0))) {
          iVar22 = 6;
          iVar20 = (int)lVar7 - (int)puStack_d0;
          if (uStack_c8 < iVar20 + 6U) {
            iVar22 = uStack_c8 - iVar20;
          }
          uVar17 = iVar20 + iVar22;
          if (uVar17 < uStack_c8) {
            lVar7 = (longlong)(int)uVar17;
            lVar9 = lVar7 - iVar22;
            do {
              puStack_d0[lVar9] = puStack_d0[lVar7];
              uVar17 = uVar17 + 1;
              lVar7 = lVar7 + 1;
              lVar9 = lVar9 + 1;
            } while (uVar17 < uStack_c8);
          }
          uStack_c8 = uStack_c8 - iVar22;
          puStack_d0[uStack_c8] = 0;
        }
        fread(auStack_9c,4,1,puVar8[1]);
        fread(&puStackX_8,4,1,puVar8[1]);
        puVar11 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)(int)puStackX_8 << 2,0x10,3);
        fread(puVar11,4,(longlong)(int)puStackX_8);
        bVar3 = false;
        uVar18 = 0;
        lVar7 = *(longlong *)(param_1 + 0x38);
        uVar14 = uVar18;
        if (*(longlong *)(param_1 + 0x40) - lVar7 >> 4 == 0) {
LAB_18027c5be:
          puVar15 = &DAT_18098bc73;
          if (puStack_d0 != (undefined *)0x0) {
            puVar15 = puStack_d0;
          }
          FUN_1806272a0(&UNK_180a168b0,puVar15);
        }
        else {
          do {
            lVar7 = *(longlong *)(uVar18 + lVar7);
            puStack_170 = &UNK_180a3c3e0;
            uStack_158 = 0;
            pcStack_168 = (char *)0x0;
            uStack_160 = 0;
            iVar20 = *(int *)(lVar7 + 0x20);
            if (iVar20 != 0) {
              iVar22 = iVar20 + 1;
              if (iVar22 < 0x10) {
                iVar22 = 0x10;
              }
              pcStack_168 = (char *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar22,
                                                  CONCAT71((uint7)(uint3)((uint)iVar20 >> 8),0x13));
              *pcStack_168 = '\0';
              uVar6 = FUN_18064e990(pcStack_168);
              uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
              if (0 < *(int *)(lVar7 + 0x20)) {
                puVar15 = &DAT_18098bc73;
                if (*(undefined **)(lVar7 + 0x18) != (undefined *)0x0) {
                  puVar15 = *(undefined **)(lVar7 + 0x18);
                }
                    // WARNING: Subroutine does not return
                memcpy(pcStack_168,puVar15,(longlong)(*(int *)(lVar7 + 0x20) + 1));
              }
            }
            if ((*(longlong *)(lVar7 + 0x18) != 0) && (uStack_160 = 0, pcStack_168 != (char *)0x0))
            {
              *pcStack_168 = '\0';
            }
            while ((0 < (int)uStack_160 && (lVar7 = strstr(pcStack_168,&DAT_180a0ff10), lVar7 != 0))
                  ) {
              iVar22 = 6;
              iVar20 = (int)lVar7 - (int)pcStack_168;
              if (uStack_160 < iVar20 + 6U) {
                iVar22 = uStack_160 - iVar20;
              }
              uVar17 = iVar20 + iVar22;
              if (uVar17 < uStack_160) {
                lVar7 = (longlong)(int)uVar17;
                lVar9 = lVar7 - iVar22;
                do {
                  pcStack_168[lVar9] = pcStack_168[lVar7];
                  uVar17 = uVar17 + 1;
                  lVar7 = lVar7 + 1;
                  lVar9 = lVar9 + 1;
                } while (uVar17 < uStack_160);
              }
              uStack_160 = uStack_160 - iVar22;
              pcStack_168[uStack_160] = '\0';
            }
            if (uStack_160 == uStack_c8) {
              if (uStack_160 == 0) {
LAB_18027c2fe:
                if (uStack_c8 != 0) goto LAB_18027c306;
                bVar23 = true;
              }
              else {
                pcVar13 = pcStack_168;
                do {
                  cVar1 = *pcVar13;
                  cVar2 = pcVar13[(longlong)puStack_d0 - (longlong)pcStack_168];
                  if (cVar1 != cVar2) break;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                bVar23 = cVar1 == cVar2;
              }
            }
            else {
              if (uStack_160 == 0) goto LAB_18027c2fe;
LAB_18027c306:
              bVar23 = false;
            }
            if (bVar23) {
              bVar3 = true;
              plVar12 = *(longlong **)(uVar18 + *(longlong *)(param_1 + 0x38));
              FUN_18007ea10(plVar12,0);
              plStack_48 = plVar12;
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStack_150 = (longlong *)0x0;
              plStack_148 = (longlong *)0x0;
              plStack_a8 = &lStack_140;
              plStack_128 = (longlong *)0x0;
              plStack_138 = (longlong *)0x0;
              lStack_140._0_1_ = 0;
              if (plVar12 != (longlong *)0x0) {
                plStack_90 = plVar12;
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStack_90 = plStack_150;
              plVar5 = plVar12;
              if (plStack_150 != (longlong *)0x0) {
                lVar7 = *plStack_150;
                plStack_150 = plVar12;
                (**(code **)(lVar7 + 0x38))();
                plVar5 = plStack_150;
              }
              plStack_150 = plVar5;
              uStack_130 = 0;
              plStack_138 = plVar12;
              FUN_18007f4c0(&lStack_140);
              plVar5 = plStack_128;
              plStack_88 = plStack_128;
              if (plStack_128 != (longlong *)0x0) {
                (**(code **)(*plStack_128 + 0x28))(plStack_128);
              }
              plVar4 = plStack_148;
              plStack_88 = plStack_148;
              plStack_148 = plVar5;
              if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x38))();
              }
              uStack_120 = 0;
              cStack_11e = '\0';
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x38))(plVar12);
              }
              if ((int)plStack_148[0xc] == (int)puStackX_8) {
                uVar16 = 0;
                puVar19 = puVar11;
                uVar21 = uVar16;
                if (0 < (int)puStackX_8) {
                  do {
                    *(undefined4 *)(plStack_148[0xd] + 0x54 + uVar16) = *puVar19;
                    uStack_120 = CONCAT11(uStack_120._1_1_,1);
                    uVar17 = (int)uVar21 + 1;
                    uVar16 = uVar16 + 0x5c;
                    puVar19 = puVar19 + 1;
                    uVar21 = (ulonglong)uVar17;
                  } while ((int)uVar17 < (int)puStackX_8);
                }
              }
              else {
                pcVar13 = "";
                if (pcStack_168 != (char *)0x0) {
                  pcVar13 = pcStack_168;
                }
                FUN_1806272a0(&UNK_180a16850,pcVar13);
              }
              if (plStack_148 != (longlong *)0x0) {
                if (cStack_11e != '\0') {
                  FUN_180075b70(plStack_150);
                }
                FUN_18007f6a0(&lStack_140);
                if ((char)uStack_120 != '\0') {
                  FUN_180079520(plStack_150);
                }
                if (uStack_120._1_1_ != '\0') {
                  FUN_180079520(plStack_150);
                }
                plVar12 = plStack_148;
                plStack_80 = plStack_148;
                plStack_148 = (longlong *)0x0;
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x38))();
                }
              }
              if ((plStack_150 != (longlong *)0x0) && (plStack_148 != (longlong *)0x0)) {
                if (cStack_11e != '\0') {
                  FUN_180075b70();
                }
                FUN_18007f6a0(&lStack_140);
                if ((char)uStack_120 != '\0') {
                  FUN_180079520(plStack_150);
                }
                if (uStack_120._1_1_ != '\0') {
                  FUN_180079520(plStack_150);
                }
                plVar12 = plStack_148;
                plStack_78 = plStack_148;
                plStack_148 = (longlong *)0x0;
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x38))();
                }
              }
              plStack_a8 = &lStack_140;
              FUN_18007f6a0(&lStack_140);
              if (plStack_128 != (longlong *)0x0) {
                (**(code **)(*plStack_128 + 0x38))();
              }
              if (plStack_148 != (longlong *)0x0) {
                (**(code **)(*plStack_148 + 0x38))();
              }
              if (plStack_150 != (longlong *)0x0) {
                (**(code **)(*plStack_150 + 0x38))();
              }
            }
            puStack_170 = &UNK_180a3c3e0;
            if (pcStack_168 != (char *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            pcStack_168 = (char *)0x0;
            uStack_158 = uStack_158 & 0xffffffff00000000;
            puStack_170 = &UNK_18098bcb0;
            uVar17 = (int)uVar14 + 1;
            uVar18 = uVar18 + 0x10;
            lVar7 = *(longlong *)(param_1 + 0x38);
            uVar14 = (ulonglong)uVar17;
          } while ((ulonglong)(longlong)(int)uVar17 <
                   (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar7 >> 4));
          if (!bVar3) goto LAB_18027c5be;
        }
        if (puVar11 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        if (plStack_b0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_d8 = &UNK_180a3c3e0;
        if (puStack_d0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_d0 = (undefined *)0x0;
        uStack_c0 = 0;
        puStack_d8 = &UNK_18098bcb0;
        aiStackX_18[0] = aiStackX_18[0] + 1;
        puVar8 = puStackX_20;
      } while (aiStackX_18[0] < aiStack_118[0]);
    }
  }
  else if (0 < aiStack_b8[0]) {
    do {
      fread(&puStackX_20,4,1,puVar8[1]);
      lVar10 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)((int)puStackX_20 + 1),0x10,3);
      fread(lVar10,1,(longlong)(int)puStackX_20,puVar8[1]);
      *(undefined1 *)((int)puStackX_20 + lVar10) = 0;
      fread(auStack_a0,4,1,puVar8[1]);
      fread(aiStackX_18,4,1,puVar8[1]);
      puVar11 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)aiStackX_18[0] << 2,0x10,3);
      fread(puVar11,4,(longlong)aiStackX_18[0],puVar8[1]);
      plVar12 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x38));
      FUN_18007ea10(plVar12,0);
      plStack_a8 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
      plStack_110 = (longlong *)0x0;
      plStack_108 = (longlong *)0x0;
      puStackX_8 = auStack_100;
      plStack_e8 = (longlong *)0x0;
      uStack_f8 = 0;
      auStack_100[0] = 0;
      FUN_18022f2e0(&plStack_110,plVar12,0);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12);
      }
      uVar14 = 0;
      puVar19 = puVar11;
      uVar18 = uVar14;
      if (0 < aiStackX_18[0]) {
        do {
          *(undefined4 *)(plStack_108[0xd] + 0x54 + uVar14) = *puVar19;
          cStack_e0 = '\x01';
          uVar17 = (int)uVar18 + 1;
          uVar14 = uVar14 + 0x5c;
          puVar19 = puVar19 + 1;
          uVar18 = (ulonglong)uVar17;
        } while ((int)uVar17 < aiStackX_18[0]);
      }
      if (plStack_108 != (longlong *)0x0) {
        if (cStack_de != '\0') {
          FUN_180075b70(plStack_110);
        }
        FUN_18007f6a0(auStack_100);
        if (cStack_e0 != '\0') {
          FUN_180079520(plStack_110);
        }
        if (cStack_df != '\0') {
          FUN_180079520(plStack_110);
        }
        plVar12 = plStack_108;
        plStack_98 = plStack_108;
        plStack_108 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
      }
      if ((plStack_110 != (longlong *)0x0) && (plStack_108 != (longlong *)0x0)) {
        if (cStack_de != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(auStack_100);
        if (cStack_e0 != '\0') {
          FUN_180079520(plStack_110);
        }
        if (cStack_df != '\0') {
          FUN_180079520(plStack_110);
        }
        plVar12 = plStack_108;
        plStack_b0 = plStack_108;
        plStack_108 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
      }
      puStackX_8 = auStack_100;
      FUN_18007f6a0(auStack_100);
      if (plStack_e8 != (longlong *)0x0) {
        (**(code **)(*plStack_e8 + 0x38))();
      }
      if (plStack_108 != (longlong *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
      }
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (puVar11 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
      if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar10);
      }
      lVar7 = lVar7 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (puVar8[1] != 0) {
    fclose();
    puVar8[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



