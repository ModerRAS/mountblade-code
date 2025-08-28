#include "TaleWorlds.Native.Split.h"

// 99_part_06_part063_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803e3630(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803e3630(longlong param_1,longlong param_2,longlong param_3)

{
  IMAGE_DOS_HEADER *pIVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  IMAGE_DOS_HEADER *pIVar10;
  IMAGE_DOS_HEADER *pIVar11;
  IMAGE_DOS_HEADER *pIVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  IMAGE_DOS_HEADER *pIVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  IMAGE_DOS_HEADER *pIVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined1 *puVar32;
  uint *puVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  uint *in_stack_fffffffffffffe38;
  undefined7 uVar38;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  uint uStack_188;
  ulonglong uStack_180;
  int iStack_178;
  undefined *puStack_170;
  undefined4 *puStack_168;
  undefined4 uStack_160;
  ulonglong uStack_158;
  undefined *puStack_150;
  undefined4 *puStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined4 *puStack_128;
  undefined4 uStack_120;
  ulonglong uStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined4 uStack_100;
  ulonglong uStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  ulonglong uStack_b0;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  uStack_60 = 0xfffffffffffffffe;
  iStack_178 = 0;
  lStack_d0 = 0;
  do {
    lVar29 = lStack_d0;
    uVar37 = 0;
    puStack_150 = &UNK_180a3c3e0;
    uStack_138 = 0;
    puStack_148 = (undefined4 *)0x0;
    uStack_140 = 0;
    puStack_148 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puStack_148 = 0;
    uVar6 = FUN_18064e990(puStack_148);
    uStack_138 = CONCAT44(uStack_138._4_4_,uVar6);
    *puStack_148 = 0x616f6c66;
    *(undefined2 *)(puStack_148 + 1) = 0x3474;
    *(undefined1 *)((longlong)puStack_148 + 6) = 0;
    uStack_140 = 6;
    puStack_130 = &UNK_180a3c3e0;
    uStack_118 = 0;
    puStack_128 = (undefined4 *)0x0;
    uStack_120 = 0;
    puStack_128 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puStack_128 = 0;
    uVar6 = FUN_18064e990(puStack_128);
    uStack_118 = CONCAT44(uStack_118._4_4_,uVar6);
    *puStack_128 = 0x616f6c66;
    puStack_128[1] = 0x30283474;
    puStack_128[2] = 0x302c302c;
    puStack_128[3] = 0x29302c;
    uStack_120 = 0xf;
    puStack_170 = &UNK_180a3c3e0;
    uStack_158 = 0;
    puStack_168 = (undefined4 *)0x0;
    uStack_160 = 0;
    puStack_168 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puStack_168 = 0;
    uVar6 = FUN_18064e990(puStack_168);
    uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
    *puStack_168 = 0x61626772;
    *(undefined1 *)(puStack_168 + 1) = 0;
    uStack_160 = 4;
    iVar27 = *(int *)(&UNK_180994920 + lVar29 * 4);
    if (iVar27 == 2) {
      (**(code **)(puStack_150 + 0x10))(&puStack_150,&UNK_180a2500c);
      (**(code **)(puStack_170 + 0x10))(&puStack_170,&UNK_180a25014);
      puVar21 = &UNK_180a25018;
LAB_1803e3843:
      (**(code **)(puStack_130 + 0x10))(&puStack_130,puVar21);
    }
    else if (iVar27 == 6) {
      (**(code **)(puStack_150 + 0x10))(&puStack_150,&UNK_180a25148);
      (**(code **)(puStack_170 + 0x10))(&puStack_170,&UNK_1809fcfbc);
      puVar21 = &DAT_180a089e8;
      goto LAB_1803e3843;
    }
    puStack_1b8 = &UNK_180a3c3e0;
    uStack_1a0._0_4_ = 0;
    uStack_1a0._4_4_ = 0;
    puStack_1b0 = (undefined1 *)0x0;
    uStack_1a8 = 0;
    lStack_98 = lVar29 * 0x98;
    puVar30 = (undefined8 *)(&DAT_180bfa788 + lStack_98);
    puVar21 = &DAT_18098bc73;
    if ((undefined *)*puVar30 != (undefined *)0x0) {
      puVar21 = (undefined *)*puVar30;
    }
    puVar18 = (undefined4 *)&DAT_18098bc73;
    if (puStack_148 != (undefined4 *)0x0) {
      puVar18 = puStack_148;
    }
    puStack_88 = puVar30;
    FUN_180628040(&puStack_1b8,&UNK_180a25150,puVar18,puVar21);
    uVar23 = uStack_1a8 + 3;
    if (uVar23 != 0) {
      uVar24 = uStack_1a8 + 4;
      if (puStack_1b0 == (undefined1 *)0x0) {
        if ((int)uVar24 < 0x10) {
          uVar24 = 0x10;
        }
        puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar24,0x13);
        *puStack_1b0 = 0;
      }
      else {
        if (uVar24 <= (uint)uStack_1a0) goto LAB_1803e3943;
        in_stack_fffffffffffffe38 =
             (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
        puStack_1b0 = (undefined1 *)
                      FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar24,0x10,in_stack_fffffffffffffe38
                                   );
      }
      uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
    }
LAB_1803e3943:
    *(undefined4 *)(puStack_1b0 + uStack_1a8) = 0xa5c7b;
    uStack_1a8 = uVar23;
    FUN_180628040(&puStack_1b8,&UNK_180a25198);
    uVar23 = uStack_1a8;
    if (0 < *(int *)(param_2 + 0x78)) {
      uVar24 = uStack_1a8 + 0x16;
      if (uVar24 != 0) {
        uVar25 = uStack_1a8 + 0x17;
        if (puStack_1b0 == (undefined1 *)0x0) {
          if ((int)uVar25 < 0x10) {
            uVar25 = 0x10;
          }
          puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
          *puStack_1b0 = 0;
        }
        else {
          if (uVar25 <= (uint)uStack_1a0) goto LAB_1803e39e7;
          in_stack_fffffffffffffe38 =
               (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
          puStack_1b0 = (undefined1 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar25,0x10,
                                      in_stack_fffffffffffffe38);
        }
        uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
      }
LAB_1803e39e7:
      puVar18 = (undefined4 *)(puStack_1b0 + uStack_1a8);
      *puVar18 = 0x69777309;
      puVar18[1] = 0x28686374;
      puVar18[2] = 0x61727261;
      puVar18[3] = 0x6e695f79;
      puVar18[4] = 0x29786564;
      *(undefined2 *)(puVar18 + 5) = 0xa5c;
      *(undefined1 *)((longlong)puVar18 + 0x16) = 0;
      uVar25 = uVar23 + 0x1a;
      uStack_1a8 = uVar24;
      if (uVar25 != 0) {
        uVar23 = uVar23 + 0x1b;
        if (puStack_1b0 == (undefined1 *)0x0) {
          if ((int)uVar23 < 0x10) {
            uVar23 = 0x10;
          }
          puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar23,0x13);
          *puStack_1b0 = 0;
        }
        else {
          if (uVar23 <= (uint)uStack_1a0) goto LAB_1803e3a8b;
          in_stack_fffffffffffffe38 =
               (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
          puStack_1b0 = (undefined1 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar23,0x10,
                                      in_stack_fffffffffffffe38);
        }
        uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
      }
LAB_1803e3a8b:
      *(undefined4 *)(puStack_1b0 + uStack_1a8) = 0xa5c7b09;
      *(undefined1 *)((longlong)(puStack_1b0 + uStack_1a8) + 4) = 0;
      uStack_1a8 = uVar25;
      if (0 < *(int *)(param_2 + 0x78)) {
        pIVar1 = (IMAGE_DOS_HEADER *)(param_1 + 0x30);
        iStack_a4 = iVar27;
        do {
          uStack_a8 = uVar37;
          FUN_180628040(&puStack_1b8,&UNK_180a24ee8,uVar37);
          uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
          pIVar22 = *(IMAGE_DOS_HEADER **)(param_1 + 0x40);
          pIVar10 = pIVar1;
          pIVar19 = pIVar22;
          if (pIVar22 == (IMAGE_DOS_HEADER *)0x0) {
LAB_1803e3b44:
            pIVar11 = pIVar1;
          }
          else {
            do {
              if ((*(int *)(pIVar19->e_res_4_ + 2) < (int)uVar37) ||
                 ((*(int *)(pIVar19->e_res_4_ + 2) <= (int)uVar37 &&
                  (iVar26._0_2_ = pIVar19->e_oemid, iVar26._2_2_ = pIVar19->e_oeminfo,
                  iVar26 < iVar27)))) {
                bVar31 = true;
                pIVar12 = *(IMAGE_DOS_HEADER **)pIVar19;
              }
              else {
                bVar31 = false;
                pIVar12 = *(IMAGE_DOS_HEADER **)&pIVar19->e_cparhdr;
              }
              pIVar11 = pIVar19;
              if (bVar31) {
                pIVar11 = pIVar10;
              }
              pIVar10 = pIVar11;
              pIVar19 = pIVar12;
            } while (pIVar12 != (IMAGE_DOS_HEADER *)0x0);
            if (((pIVar11 == pIVar1) || ((int)uVar37 < *(int *)(pIVar11->e_res_4_ + 2))) ||
               (((int)uVar37 <= *(int *)(pIVar11->e_res_4_ + 2) &&
                (iVar7._0_2_ = pIVar11->e_oemid, iVar7._2_2_ = pIVar11->e_oeminfo, iVar27 < iVar7)))
               ) goto LAB_1803e3b44;
          }
          if (pIVar11 != pIVar1) {
            lVar29 = *(longlong *)
                      (*(longlong *)(param_2 + 0x80 + (longlong)(int)uVar37 * 8) + 8 +
                      (longlong)*(int *)(&UNK_180994920 + lStack_d0 * 4) * 8);
            pIVar19 = pIVar1;
            pIVar10 = &IMAGE_DOS_HEADER_180000000;
            while (pIVar11 = pIVar22, pIVar12 = pIVar19, pIVar11 != (IMAGE_DOS_HEADER *)0x0) {
              if ((*(int *)(pIVar11->e_res_4_ + 2) < (int)uVar37) ||
                 ((*(int *)(pIVar11->e_res_4_ + 2) <= (int)uVar37 &&
                  (iVar3._0_2_ = pIVar11->e_oemid, iVar3._2_2_ = pIVar11->e_oeminfo, iVar3 < iVar27)
                  ))) {
                bVar31 = true;
                pIVar22 = *(IMAGE_DOS_HEADER **)pIVar11;
              }
              else {
                bVar31 = false;
                pIVar22 = *(IMAGE_DOS_HEADER **)&pIVar11->e_cparhdr;
              }
              pIVar19 = pIVar11;
              pIVar10 = pIVar11;
              if (bVar31) {
                pIVar19 = pIVar12;
                pIVar10 = pIVar12;
              }
            }
            if (((pIVar12 == pIVar1) || ((int)uVar37 < *(int *)(pIVar12->e_res_4_ + 2))) ||
               (((int)uVar37 <= *(int *)(pIVar12->e_res_4_ + 2) &&
                (iVar2._0_2_ = pIVar12->e_oemid, iVar2._2_2_ = pIVar12->e_oeminfo, iVar27 < iVar2)))
               ) {
              puVar33 = &uStack_a8;
              puVar30 = (undefined8 *)FUN_1803e77a0(pIVar1,auStack_58,pIVar10,pIVar12,puVar33);
              uVar6 = (undefined4)((ulonglong)puVar33 >> 0x20);
              pIVar12 = (IMAGE_DOS_HEADER *)*puVar30;
            }
            uStack_90 = *(undefined8 *)pIVar12->e_res2_10_;
            iVar26 = *(int *)(*(longlong *)(param_1 + 0xf0) + (longlong)(int)uStack_90 * 0x10);
            lVar28 = (longlong)(int)uStack_90 * 0x20 + *(longlong *)(param_1 + 0x110);
            puVar14 = (undefined1 *)0x0;
            puStack_110 = &UNK_180a3c3e0;
            uStack_f8 = 0;
            puVar13 = (undefined1 *)0x0;
            puStack_108 = (undefined1 *)0x0;
            uStack_100 = 0;
            if (*(int *)(lVar28 + 0x10) != 0) {
              iVar7 = *(int *)(lVar28 + 0x10) + 1;
              if (iVar7 < 0x10) {
                iVar7 = 0x10;
              }
              puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
              *puVar13 = 0;
              puStack_108 = puVar13;
              uVar8 = FUN_18064e990(puVar13);
              uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar8);
              if (*(int *)(lVar28 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puVar13,*(undefined8 *)(lVar28 + 8),*(int *)(lVar28 + 0x10) + 1);
              }
            }
            lVar5 = lStack_98;
            if (*(longlong *)(lVar28 + 8) != 0) {
              uStack_100 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                *puVar13 = 0;
              }
              uStack_f8 = uStack_f8 & 0xffffffff;
            }
            puStack_c8 = &UNK_180a3c3e0;
            uStack_b0 = 0;
            puStack_c0 = (undefined1 *)0x0;
            uStack_b8 = 0;
            if (*(int *)(&DAT_180bfab20 + lStack_98) != 0) {
              iVar7 = *(int *)(&DAT_180bfab20 + lStack_98) + 1;
              if (iVar7 < 0x10) {
                iVar7 = 0x10;
              }
              puVar14 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
              *puVar14 = 0;
              puStack_c0 = puVar14;
              uVar8 = FUN_18064e990(puVar14);
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
              if (0 < *(int *)(&DAT_180bfab20 + lVar5)) {
                puVar21 = &DAT_18098bc73;
                if (*(undefined **)(&DAT_180bfab18 + lVar5) != (undefined *)0x0) {
                  puVar21 = *(undefined **)(&DAT_180bfab18 + lVar5);
                }
                    // WARNING: Subroutine does not return
                memcpy(puVar14,puVar21,(longlong)(*(int *)(&DAT_180bfab20 + lVar5) + 1));
              }
            }
            if ((*(longlong *)(&DAT_180bfab18 + lVar5) != 0) &&
               (uStack_b8 = 0, puVar14 != (undefined1 *)0x0)) {
              *puVar14 = 0;
            }
            puVar34 = &DAT_18098bc73;
            if (puVar14 != (undefined1 *)0x0) {
              puVar34 = puVar14;
            }
            puVar32 = &DAT_18098bc73;
            if (puVar13 != (undefined1 *)0x0) {
              puVar32 = puVar13;
            }
            in_stack_fffffffffffffe38 = (uint *)CONCAT44(uVar6,uStack_90._4_4_);
            FUN_180628040(&puStack_1b8,&UNK_180a25058,puVar32,puVar34,in_stack_fffffffffffffe38);
            uVar23 = uStack_1a8;
            if (iVar27 == 2) {
              uVar38 = (undefined7)((ulonglong)in_stack_fffffffffffffe38 >> 8);
              if (iVar26 == 0x14) {
                uVar24 = uStack_1a8 + 0x34;
                if (uVar24 != 0) {
                  uVar25 = uStack_1a8 + 0x35;
                  if (puStack_1b0 == (undefined1 *)0x0) {
                    if ((int)uVar25 < 0x10) {
                      uVar25 = 0x10;
                    }
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
                    *puStack_1b0 = 0;
                  }
                  else {
                    if (uVar25 <= (uint)uStack_1a0) goto LAB_1803e3e26;
                    in_stack_fffffffffffffe38 = (uint *)CONCAT71(uVar38,0x13);
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar25,0x10,
                                                in_stack_fffffffffffffe38);
                  }
                  uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
                }
LAB_1803e3e26:
                puVar30 = (undefined8 *)(puStack_1b0 + uStack_1a8);
                *puVar30 = 0x65756c6176090909;
                puVar30[1] = 0x2e32203d2079782e;
                *(undefined4 *)(puVar30 + 2) = 0x2a206630;
                *(undefined4 *)((longlong)puVar30 + 0x14) = 0x6c617620;
                *(undefined4 *)(puVar30 + 3) = 0x722e6575;
                *(undefined4 *)((longlong)puVar30 + 0x1c) = 0x202d2067;
                *(undefined4 *)(puVar30 + 4) = 0x616f6c66;
                *(undefined4 *)((longlong)puVar30 + 0x24) = 0x31283274;
                *(undefined4 *)(puVar30 + 5) = 0x2c66302e;
                *(undefined4 *)((longlong)puVar30 + 0x2c) = 0x66302e31;
                *(undefined4 *)(puVar30 + 6) = 0xa5c3b29;
                *(undefined1 *)((longlong)puVar30 + 0x34) = 0;
                uStack_1a8 = uVar24;
                if (uVar23 + 0x71 != 0) {
                  uVar25 = uVar23 + 0x72;
                  if (puStack_1b0 == (undefined1 *)0x0) {
                    if ((int)uVar25 < 0x10) {
                      uVar25 = 0x10;
                    }
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
                    *puStack_1b0 = 0;
                  }
                  else {
                    if (uVar25 <= (uint)uStack_1a0) goto LAB_1803e3ecd;
                    in_stack_fffffffffffffe38 =
                         (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar25,0x10,
                                                in_stack_fffffffffffffe38);
                  }
                  uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
                }
LAB_1803e3ecd:
                puVar30 = (undefined8 *)(puStack_1b0 + uStack_1a8);
                *puVar30 = 0x65756c6176090909;
                puVar30[1] = 0x727173203d207a2e;
                puVar30[2] = 0x6172757461732874;
                puVar30[3] = 0x2066302e31286574;
                *(undefined4 *)(puVar30 + 4) = 0x6f64202d;
                *(undefined4 *)((longlong)puVar30 + 0x24) = 0x61762874;
                *(undefined4 *)(puVar30 + 5) = 0x2e65756c;
                *(undefined4 *)((longlong)puVar30 + 0x2c) = 0x762c7978;
                puVar30[6] = 0x2979782e65756c61;
                *(undefined4 *)(puVar30 + 7) = 0x5c3b2929;
                *(undefined2 *)((longlong)puVar30 + 0x3c) = 10;
                uStack_1a8 = uVar23 + 0x71;
              }
              else if ((iVar26 == 0x12) && ((*(byte *)(lVar29 + 0x2e0) & 1) != 0)) {
                uVar24 = uStack_1a8 + 0x34;
                if (uVar24 != 0) {
                  uVar25 = uStack_1a8 + 0x35;
                  if (puStack_1b0 == (undefined1 *)0x0) {
                    if ((int)uVar25 < 0x10) {
                      uVar25 = 0x10;
                    }
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
                    *puStack_1b0 = 0;
                  }
                  else {
                    if (uVar25 <= (uint)uStack_1a0) goto LAB_1803e3fa3;
                    in_stack_fffffffffffffe38 = (uint *)CONCAT71(uVar38,0x13);
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar25,0x10,
                                                in_stack_fffffffffffffe38);
                  }
                  uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
                }
LAB_1803e3fa3:
                puVar30 = (undefined8 *)(puStack_1b0 + uStack_1a8);
                *puVar30 = 0x65756c6176090909;
                puVar30[1] = 0x2e32203d2079782e;
                *(undefined4 *)(puVar30 + 2) = 0x2a206630;
                *(undefined4 *)((longlong)puVar30 + 0x14) = 0x6c617620;
                *(undefined4 *)(puVar30 + 3) = 0x612e6575;
                *(undefined4 *)((longlong)puVar30 + 0x1c) = 0x202d2067;
                *(undefined4 *)(puVar30 + 4) = 0x616f6c66;
                *(undefined4 *)((longlong)puVar30 + 0x24) = 0x31283274;
                *(undefined4 *)(puVar30 + 5) = 0x2c66302e;
                *(undefined4 *)((longlong)puVar30 + 0x2c) = 0x66302e31;
                *(undefined4 *)(puVar30 + 6) = 0xa5c3b29;
                *(undefined1 *)((longlong)puVar30 + 0x34) = 0;
                uStack_1a8 = uVar24;
                if (uVar23 + 0x70 != 0) {
                  uVar25 = uVar23 + 0x71;
                  if (puStack_1b0 == (undefined1 *)0x0) {
                    if ((int)uVar25 < 0x10) {
                      uVar25 = 0x10;
                    }
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
                    *puStack_1b0 = 0;
                  }
                  else {
                    if (uVar25 <= (uint)uStack_1a0) goto LAB_1803e404a;
                    in_stack_fffffffffffffe38 =
                         (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar25,0x10,
                                                in_stack_fffffffffffffe38);
                  }
                  uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
                }
LAB_1803e404a:
                puVar30 = (undefined8 *)(puStack_1b0 + uStack_1a8);
                *puVar30 = 0x65756c6176090909;
                puVar30[1] = 0x727173203d207a2e;
                puVar30[2] = 0x6172757461732874;
                puVar30[3] = 0x2066302e31286574;
                *(undefined4 *)(puVar30 + 4) = 0x6f64202d;
                *(undefined4 *)((longlong)puVar30 + 0x24) = 0x61762874;
                *(undefined4 *)(puVar30 + 5) = 0x2e65756c;
                *(undefined4 *)((longlong)puVar30 + 0x2c) = 0x762c7978;
                puVar30[6] = 0x2979782e65756c61;
                *(undefined4 *)(puVar30 + 7) = 0xa5c3b29;
                *(undefined1 *)((longlong)puVar30 + 0x3c) = 0;
                uStack_1a8 = uVar23 + 0x70;
              }
              else {
                uVar23 = uStack_1a8 + 0x3b;
                if (uVar23 != 0) {
                  uVar24 = uStack_1a8 + 0x3c;
                  if (puStack_1b0 == (undefined1 *)0x0) {
                    if ((int)uVar24 < 0x10) {
                      uVar24 = 0x10;
                    }
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar24,0x13);
                    *puStack_1b0 = 0;
                  }
                  else {
                    if (uVar24 <= (uint)uStack_1a0) goto LAB_1803e410b;
                    in_stack_fffffffffffffe38 = (uint *)CONCAT71(uVar38,0x13);
                    puStack_1b0 = (undefined1 *)
                                  FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar24,0x10,
                                                in_stack_fffffffffffffe38);
                  }
                  uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
                }
LAB_1803e410b:
                puVar30 = (undefined8 *)(puStack_1b0 + uStack_1a8);
                *puVar30 = 0x65756c6176090909;
                puVar30[1] = 0x32203d207a79782e;
                puVar30[2] = 0x6176202a2066302e;
                puVar30[3] = 0x207a79782e65756c;
                *(undefined4 *)(puVar30 + 4) = 0x6c66202d;
                *(undefined4 *)((longlong)puVar30 + 0x24) = 0x3374616f;
                *(undefined4 *)(puVar30 + 5) = 0x302e3128;
                *(undefined4 *)((longlong)puVar30 + 0x2c) = 0x2e312c66;
                puVar30[6] = 0x2966302e312c6630;
                *(undefined4 *)(puVar30 + 7) = 0xa5c3b;
                uStack_1a8 = uVar23;
              }
            }
            puStack_c8 = &UNK_180a3c3e0;
            if (puVar14 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar14);
            }
            puStack_c0 = (undefined1 *)0x0;
            uStack_b0 = uStack_b0 & 0xffffffff00000000;
            puStack_c8 = &UNK_18098bcb0;
            puStack_110 = &UNK_180a3c3e0;
            if (puVar13 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar13);
            }
            puStack_108 = (undefined1 *)0x0;
            uStack_f8 = uStack_f8 & 0xffffffff00000000;
            puStack_110 = &UNK_18098bcb0;
          }
          FUN_180628040(&puStack_1b8,&DAT_180a24f58);
          uVar37 = uVar37 + 1;
          puVar30 = puStack_88;
        } while ((int)uVar37 < *(int *)(param_2 + 0x78));
      }
      uVar37 = uStack_1a8 + 4;
      if (uVar37 != 0) {
        uVar23 = uStack_1a8 + 5;
        if (puStack_1b0 == (undefined1 *)0x0) {
          if ((int)uVar23 < 0x10) {
            uVar23 = 0x10;
          }
          puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar23,0x13);
          *puStack_1b0 = 0;
        }
        else {
          if (uVar23 <= (uint)uStack_1a0) goto LAB_1803e4250;
          in_stack_fffffffffffffe38 =
               (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
          puStack_1b0 = (undefined1 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar23,0x10,
                                      in_stack_fffffffffffffe38);
        }
        uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
      }
LAB_1803e4250:
      *(undefined4 *)(puStack_1b0 + uStack_1a8) = 0xa5c7d09;
      *(undefined1 *)((longlong)(puStack_1b0 + uStack_1a8) + 4) = 0;
      uStack_1a8 = uVar37;
    }
    uVar23 = 0;
    uVar37 = 0;
    puVar18 = (undefined4 *)&DAT_18098bc73;
    if (puStack_168 != (undefined4 *)0x0) {
      puVar18 = puStack_168;
    }
    FUN_180628040(&puStack_1b8,&UNK_180a252e8,puVar18);
    iVar26 = uStack_1a8 + 3;
    if (iVar26 != 0) {
      uVar24 = uStack_1a8 + 4;
      if (puStack_1b0 == (undefined1 *)0x0) {
        if ((int)uVar24 < 0x10) {
          uVar24 = 0x10;
        }
        puStack_1b0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar24,0x13);
        *puStack_1b0 = 0;
        uVar35 = (ulonglong)puStack_1b0 & 0xffffffffffc00000;
        uStack_1a0._0_4_ = uVar37;
        if (uVar35 != 0) {
          lVar29 = uVar35 + 0x80 + ((longlong)puStack_1b0 - uVar35 >> 0x10) * 0x50;
          puVar33 = (uint *)(lVar29 - (ulonglong)*(uint *)(lVar29 + 4));
          if ((*(byte *)((longlong)puVar33 + 0xe) & 2) == 0) {
            uStack_1a0._0_4_ = puVar33[7];
            if (0x3ffffff < puVar33[7]) {
              uStack_1a0._0_4_ = *puVar33 << 0x10;
            }
          }
          else {
            uVar24 = puVar33[7];
            if (uVar24 < 0x4000000) {
              uVar36 = (ulonglong)uVar24;
            }
            else {
              uVar36 = (ulonglong)*puVar33 << 0x10;
            }
            if (0x3ffffff < uVar24) {
              uVar24 = *puVar33 << 0x10;
            }
            uStack_1a0._0_4_ =
                 uVar24 - (int)(((longlong)puStack_1b0 -
                                (((longlong)((longlong)puVar33 + (-0x80 - uVar35)) / 0x50) * 0x10000
                                + uVar35)) % uVar36);
          }
        }
      }
      else if ((uint)uStack_1a0 < uVar24) {
        in_stack_fffffffffffffe38 =
             (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
        puStack_1b0 = (undefined1 *)
                      FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar24,0x10,in_stack_fffffffffffffe38
                                   );
        uStack_1a0._0_4_ = FUN_18064e990(puStack_1b0);
      }
    }
    *(undefined4 *)(puStack_1b0 + uStack_1a8) = 0xa5c7d;
    uStack_1a8 = iVar26;
    if (0 < iVar26) {
      FUN_1806277c0(param_3,iVar26 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_3 + 0x10) + *(longlong *)(param_3 + 8),puStack_1b0,
             (longlong)(int)(uStack_1a8 + 1));
    }
    iVar26 = *(int *)(param_3 + 0x10) + 4;
    FUN_1806277c0(param_3,iVar26);
    puVar18 = (undefined4 *)((ulonglong)*(uint *)(param_3 + 0x10) + *(longlong *)(param_3 + 8));
    *puVar18 = 0xa5c0a5c;
    *(undefined1 *)(puVar18 + 1) = 0;
    *(int *)(param_3 + 0x10) = iVar26;
    puStack_1b8 = &UNK_180a3c3e0;
    if (puStack_1b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_1b0 = (undefined1 *)0x0;
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    puStack_1b8 = &UNK_18098bcb0;
    puStack_198 = &UNK_180a3c3e0;
    uStack_180 = 0;
    puStack_190 = (undefined1 *)0x0;
    uStack_188 = 0;
    puVar21 = &DAT_18098bc73;
    if ((undefined *)*puVar30 != (undefined *)0x0) {
      puVar21 = (undefined *)*puVar30;
    }
    FUN_180628040(&puStack_198,&UNK_180a251d8,puVar21);
    uVar24 = uStack_188 + 3;
    if (uVar24 != 0) {
      uVar25 = uStack_188 + 4;
      if (puStack_190 == (undefined1 *)0x0) {
        if ((int)uVar25 < 0x10) {
          uVar25 = 0x10;
        }
        puStack_190 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
        *puStack_190 = 0;
        uVar35 = (ulonglong)puStack_190 & 0xffffffffffc00000;
        if (uVar35 != 0) {
          lVar29 = uVar35 + 0x80 + ((longlong)puStack_190 - uVar35 >> 0x10) * 0x50;
          puVar33 = (uint *)(lVar29 - (ulonglong)*(uint *)(lVar29 + 4));
          if ((*(byte *)((longlong)puVar33 + 0xe) & 2) == 0) {
            uVar37 = puVar33[7];
            if (0x3ffffff < uVar37) {
              uVar37 = *puVar33 << 0x10;
            }
          }
          else {
            uVar37 = puVar33[7];
            if (uVar37 < 0x4000000) {
              uVar36 = (ulonglong)uVar37;
            }
            else {
              uVar36 = (ulonglong)*puVar33 << 0x10;
            }
            if (0x3ffffff < uVar37) {
              uVar37 = *puVar33 << 0x10;
            }
            uVar37 = uVar37 - (int)(((longlong)puStack_190 -
                                    (((longlong)((longlong)puVar33 + (-0x80 - uVar35)) / 0x50) *
                                     0x10000 + uVar35)) % uVar36);
          }
        }
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar37);
      }
      else if ((uint)uStack_180 < uVar25) {
        in_stack_fffffffffffffe38 =
             (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
        puStack_190 = (undefined1 *)
                      FUN_18062b8b0(_DAT_180c8ed18,puStack_190,uVar25,0x10,in_stack_fffffffffffffe38
                                   );
        uVar6 = FUN_18064e990(puStack_190);
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
      }
    }
    *(undefined4 *)(puStack_190 + uStack_188) = 0xa5c7b;
    uStack_188 = uVar24;
    FUN_180628040(&puStack_198,&UNK_180a25210);
    uVar37 = uStack_188;
    if (0 < *(int *)(param_2 + 0x78)) {
      uVar24 = uStack_188 + 0x16;
      if (uVar24 != 0) {
        uVar25 = uStack_188 + 0x17;
        if (puStack_190 == (undefined1 *)0x0) {
          if ((int)uVar25 < 0x10) {
            uVar25 = 0x10;
          }
          puStack_190 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar25,0x13);
          *puStack_190 = 0;
        }
        else {
          if (uVar25 <= (uint)uStack_180) goto LAB_1803e469b;
          in_stack_fffffffffffffe38 =
               (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
          puStack_190 = (undefined1 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puStack_190,uVar25,0x10,
                                      in_stack_fffffffffffffe38);
        }
        uVar6 = FUN_18064e990(puStack_190);
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
      }
LAB_1803e469b:
      puVar18 = (undefined4 *)(puStack_190 + uStack_188);
      *puVar18 = 0x69777309;
      puVar18[1] = 0x28686374;
      puVar18[2] = 0x61727261;
      puVar18[3] = 0x6e695f79;
      puVar18[4] = 0x29786564;
      *(undefined2 *)(puVar18 + 5) = 0xa5c;
      *(undefined1 *)((longlong)puVar18 + 0x16) = 0;
      uVar25 = uVar37 + 0x1a;
      uStack_188 = uVar24;
      if (uVar25 != 0) {
        uVar37 = uVar37 + 0x1b;
        if (puStack_190 == (undefined1 *)0x0) {
          if ((int)uVar37 < 0x10) {
            uVar37 = 0x10;
          }
          puStack_190 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar37,0x13);
          *puStack_190 = 0;
        }
        else {
          if (uVar37 <= (uint)uStack_180) goto LAB_1803e4737;
          in_stack_fffffffffffffe38 =
               (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe38 >> 8),0x13);
          puStack_190 = (undefined1 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puStack_190,uVar37,0x10,
                                      in_stack_fffffffffffffe38);
        }
        uVar6 = FUN_18064e990(puStack_190);
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
      }
LAB_1803e4737:
      *(undefined4 *)(puStack_190 + uStack_188) = 0xa5c7b09;
      *(undefined1 *)((longlong)(puStack_190 + uStack_188) + 4) = 0;
      uStack_188 = uVar25;
      if (0 < *(int *)(param_2 + 0x78)) {
        puVar30 = (undefined8 *)(param_1 + 0x30);
        iStack_9c = iVar27;
        do {
          uStack_a0 = uVar23;
          FUN_180628040(&puStack_198,&UNK_180a24ee8,uVar23);
          puVar4 = *(undefined8 **)(param_1 + 0x40);
          puVar15 = puVar30;
          puVar17 = puVar4;
          if (puVar4 == (undefined8 *)0x0) {
LAB_1803e47e4:
            puVar16 = puVar30;
          }
          else {
            do {
              if ((*(int *)(puVar17 + 4) < (int)uVar23) ||
                 ((*(int *)(puVar17 + 4) <= (int)uVar23 &&
                  (*(int *)((longlong)puVar17 + 0x24) < iVar27)))) {
                bVar31 = true;
                puVar20 = (undefined8 *)*puVar17;
              }
              else {
                bVar31 = false;
                puVar20 = (undefined8 *)puVar17[1];
              }
              puVar16 = puVar17;
              if (bVar31) {
                puVar16 = puVar15;
              }
              puVar15 = puVar16;
              puVar17 = puVar20;
            } while (puVar20 != (undefined8 *)0x0);
            if (((puVar16 == puVar30) || ((int)uVar23 < *(int *)(puVar16 + 4))) ||
               (((int)uVar23 <= *(int *)(puVar16 + 4) &&
                (iVar27 < *(int *)((longlong)puVar16 + 0x24))))) goto LAB_1803e47e4;
          }
          puVar15 = puVar30;
          if (puVar16 != puVar30) {
            while (puVar17 = puVar15, puVar4 != (undefined8 *)0x0) {
              if ((*(int *)(puVar4 + 4) < (int)uVar23) ||
                 ((*(int *)(puVar4 + 4) <= (int)uVar23 &&
                  (*(int *)((longlong)puVar4 + 0x24) < iVar27)))) {
                bVar31 = true;
                puVar20 = (undefined8 *)*puVar4;
              }
              else {
                bVar31 = false;
                puVar20 = (undefined8 *)puVar4[1];
              }
              puVar15 = puVar4;
              puVar4 = puVar20;
              if (bVar31) {
                puVar15 = puVar17;
              }
            }
            if (((puVar17 == puVar30) || ((int)uVar23 < *(int *)(puVar17 + 4))) ||
               (((int)uVar23 <= *(int *)(puVar17 + 4) &&
                (iVar27 < *(int *)((longlong)puVar17 + 0x24))))) {
              in_stack_fffffffffffffe38 = &uStack_a0;
              puVar17 = (undefined8 *)FUN_1803e77a0(puVar30,auStack_50);
              puVar17 = (undefined8 *)*puVar17;
            }
            lVar29 = (longlong)*(int *)(puVar17 + 5);
            uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 4 + lVar29 * 0x10);
            uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8 + lVar29 * 0x10);
            lVar29 = lVar29 * 0x20 + *(longlong *)(param_1 + 0x110);
            puVar13 = (undefined1 *)0x0;
            puStack_f0 = &UNK_180a3c3e0;
            uStack_d8 = 0;
            puStack_e8 = (undefined1 *)0x0;
            uStack_e0 = 0;
            if (*(int *)(lVar29 + 0x10) != 0) {
              iVar26 = *(int *)(lVar29 + 0x10) + 1;
              if (iVar26 < 0x10) {
                iVar26 = 0x10;
              }
              puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar26,0x13);
              *puVar13 = 0;
              puStack_e8 = puVar13;
              uVar9 = FUN_18064e990(puVar13);
              uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar9);
              if (*(int *)(lVar29 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puVar13,*(undefined8 *)(lVar29 + 8),*(int *)(lVar29 + 0x10) + 1);
              }
            }
            if (*(longlong *)(lVar29 + 8) != 0) {
              uStack_e0 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                *puVar13 = 0;
              }
              uStack_d8 = uStack_d8 & 0xffffffff;
            }
            FUN_1806279c0(&puStack_80,&DAT_180bfab10 + (longlong)iStack_178 * 0x98);
            FUN_180628040(&puStack_198,&UNK_180a25230,uVar6,uVar8);
            puStack_80 = &UNK_180a3c3e0;
            if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_78 = 0;
            uStack_68 = 0;
            puStack_80 = &UNK_18098bcb0;
            puStack_f0 = &UNK_180a3c3e0;
            if (puVar13 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar13);
            }
            puStack_e8 = (undefined1 *)0x0;
            uStack_d8 = uStack_d8 & 0xffffffff00000000;
            puStack_f0 = &UNK_18098bcb0;
          }
          FUN_180628040(&puStack_198,&DAT_180a24f58);
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < *(int *)(param_2 + 0x78));
      }
      uVar37 = uStack_188 + 4;
      FUN_1806277c0(&puStack_198,uVar37);
      *(undefined4 *)(puStack_190 + uStack_188) = 0xa5c7d09;
      *(undefined1 *)((longlong)(puStack_190 + uStack_188) + 4) = 0;
      uStack_188 = uVar37;
    }
    puVar18 = (undefined4 *)&DAT_18098bc73;
    if (puStack_168 != (undefined4 *)0x0) {
      puVar18 = puStack_168;
    }
    FUN_180628040(&puStack_198,&DAT_180a25028,puVar18);
    iVar27 = uStack_188 + 3;
    FUN_1806277c0(&puStack_198,iVar27);
    *(undefined4 *)(puStack_190 + uStack_188) = 0xa5c7d;
    uStack_188 = iVar27;
    if (0 < iVar27) {
      FUN_1806277c0(param_3,iVar27 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_3 + 0x10) + *(longlong *)(param_3 + 8),puStack_190,
             (longlong)(int)(uStack_188 + 1));
    }
    iVar27 = *(int *)(param_3 + 0x10) + 4;
    FUN_1806277c0(param_3,iVar27);
    puVar18 = (undefined4 *)((ulonglong)*(uint *)(param_3 + 0x10) + *(longlong *)(param_3 + 8));
    *puVar18 = 0xa5c0a5c;
    *(undefined1 *)(puVar18 + 1) = 0;
    *(int *)(param_3 + 0x10) = iVar27;
    puStack_198 = &UNK_180a3c3e0;
    if (puStack_190 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_190 = (undefined1 *)0x0;
    uStack_180 = uStack_180 & 0xffffffff00000000;
    puStack_198 = &UNK_18098bcb0;
    puStack_170 = &UNK_180a3c3e0;
    if (puStack_168 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_168 = (undefined4 *)0x0;
    uStack_158 = uStack_158 & 0xffffffff00000000;
    puStack_170 = &UNK_18098bcb0;
    puStack_130 = &UNK_180a3c3e0;
    if (puStack_128 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_128 = (undefined4 *)0x0;
    uStack_118 = uStack_118 & 0xffffffff00000000;
    puStack_130 = &UNK_18098bcb0;
    puStack_150 = &UNK_180a3c3e0;
    if (puStack_148 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iStack_178 = iStack_178 + 1;
    lStack_d0 = lStack_d0 + 1;
    if (5 < iStack_178) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






