#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part024_sub002_sub002.c - 1 个函数

// 函数: void FUN_18027dd70(ulonglong *******param_1,ulonglong *******param_2)
void FUN_18027dd70(ulonglong *******param_1,ulonglong *******param_2)

{
  ulonglong *******pppppppuVar1;
  longlong *plVar2;
  ulonglong *****pppppuVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong ******ppppppuVar11;
  ulonglong ******ppppppuVar12;
  uint64_t uVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong ******ppppppuVar22;
  void *puVar23;
  byte *pbVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong ******ppppppuVar28;
  ulonglong *******pppppppuVar29;
  ulonglong *puVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong ******ppppppuVar33;
  uint *puVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int *piVar39;
  ulonglong ******ppppppuStackX_8;
  ulonglong ******ppppppuStackX_10;
  int iStackX_18;
  ulonglong ******ppppppuStackX_20;
  void *puStack_238;
  byte *pbStack_230;
  uint uStack_228;
  uint64_t uStack_220;
  int *piStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  ulonglong ******ppppppuStack_200;
  uint64_t uStack_1f8;
  ulonglong ******ppppppuStack_1e8;
  ulonglong *puStack_1d8;
  byte *pbStack_1d0;
  uint uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong ******ppppppuStack_1b0;
  ulonglong ******ppppppuStack_1a8;
  int32_t uStack_1a0;
  ulonglong *puStack_198;
  longlong lStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  ulonglong *puStack_170;
  ulonglong *puStack_168;
  ulonglong *puStack_160;
  int32_t uStack_158;
  ulonglong *puStack_150;
  ulonglong *puStack_148;
  ulonglong *puStack_140;
  ulonglong *puStack_138;
  int32_t uStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  ulonglong *puStack_118;
  int32_t uStack_110;
  int8_t auStack_108 [8];
  longlong *plStack_100;
  longlong lStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  longlong *plStack_d8;
  longlong lStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  void *puStack_b8;
  byte *pbStack_b0;
  uint uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [8];
  uint64_t uStack_80;
  uint64_t uStack_70;
  uint64_t uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppppppuStackX_8 = (ulonglong ******)param_1;
  if ((0 < *(int *)(param_1 + 0xb)) && (*(int *)(param_1 + 0xb) < *(int *)(param_2 + 0xb))) {
    *(int *)(param_1 + 0xb) = *(int *)(param_2 + 0xb);
    FUN_180278270();
  }
  if ((0 < *(int *)(param_2 + 0xb)) && (*(int *)(param_2 + 0xb) < *(int *)(param_1 + 0xb))) {
    *(int *)(param_2 + 0xb) = *(int *)(param_1 + 0xb);
    FUN_180278270(param_2);
  }
  ppppppuVar12 = param_2[7];
  if (((longlong)param_2[8] - (longlong)ppppppuVar12 & 0xfffffffffffffff0U) != 0) {
    for (; ppppppuVar12 < param_2[8]; ppppppuVar12 = ppppppuVar12 + 2) {
      if (((ulonglong)ppppppuVar12[1] & 1) != 0) {
        if (*ppppppuVar12 != (ulonglong *****)0x0) goto LAB_18027de2e;
        break;
      }
    }
    ppppppuVar12 = (ulonglong ******)&system_buffer_ptr;
    if (param_2[0x3f] != (ulonglong ******)0x0) {
      ppppppuVar12 = param_2[0x3f];
    }
    FUN_180626f80(&unknown_var_9120_ptr,ppppppuVar12);
  }
LAB_18027de2e:
  pppppppuVar29 = param_1 + 7;
  if ((((longlong)param_1[8] - (longlong)*pppppppuVar29 & 0xfffffffffffffff0U) != 0) ||
     (((longlong)param_2[8] - (longlong)param_2[7] & 0xfffffffffffffff0U) != 0)) {
    uVar37 = 0;
    uStack_e8 = 0x3f800000;
    uStack_e4 = 0x40000000;
    uStack_dc = 3;
    lStack_f8 = 1;
    plStack_100 = (longlong *)&system_data_0000;
    uStack_f0 = 0;
    uStack_e0 = 0;
    ppppppuVar22 = param_2[7];
    lVar19 = (longlong)param_2[8] - (longlong)ppppppuVar22 >> 4;
    ppppppuVar12 = *pppppppuVar29;
    lVar10 = (longlong)param_1[8] - (longlong)ppppppuVar12 >> 4;
    ppppppuStack_1e8 = (ulonglong ******)pppppppuVar29;
    if (lVar19 == 0) {
      uVar38 = uVar37;
      pppppppuVar29 = param_1;
      if (lVar10 != 0) {
        do {
          uStack_188 = pppppppuVar29;
          ppppppuVar22 = ppppppuStack_1e8;
          ppppppuStackX_10 =
               (ulonglong ******)
               CONCAT44(ppppppuStackX_10._4_4_,*(int32_t *)((longlong)ppppppuVar12 + uVar38 + 8))
          ;
          FUN_180284830(auStack_108,&ppppppuStack_200);
          ppppppuVar12 = ppppppuStack_200;
          lVar10 = FUN_180079430(*(uint64_t *)(uVar38 + (longlong)*ppppppuVar22));
          puStack_238 = &unknown_var_3456_ptr;
          uStack_220 = 0;
          pbStack_230 = (byte *)0x0;
          uStack_228 = 0;
          FUN_1806277c0(&puStack_238,*(int32_t *)(lVar10 + 0x10));
          if (0 < *(int *)(lVar10 + 0x10)) {
            puVar23 = &system_buffer_ptr;
            if (*(void **)(lVar10 + 8) != (void *)0x0) {
              puVar23 = *(void **)(lVar10 + 8);
            }
                    // WARNING: Subroutine does not return
            memcpy(pbStack_230,puVar23,(longlong)(*(int *)(lVar10 + 0x10) + 1));
          }
          if ((*(longlong *)(lVar10 + 8) != 0) && (uStack_228 = 0, pbStack_230 != (byte *)0x0)) {
            *pbStack_230 = 0;
          }
          pbVar24 = &system_buffer_ptr;
          if (pbStack_230 != (byte *)0x0) {
            pbVar24 = pbStack_230;
          }
          uVar20 = 0xcbf29ce484222325;
          uVar31 = 0;
          if (uStack_228 != 0) {
            do {
              uVar20 = (uVar20 ^ *pbVar24) * 0x100000001b3;
              uVar31 = uVar31 + 1;
              pbVar24 = pbVar24 + 1;
            } while (uVar31 < uStack_228);
          }
          FUN_180284a50(ppppppuVar12 + 1,&ppppppuStack_200,uVar31,&puStack_238,uVar20);
          ppppppuVar22 = ppppppuStack_200;
          uStack_180 = *(uint64_t *)(uVar38 + (longlong)*ppppppuStack_1e8);
          ppppppuVar12 = (ulonglong ******)ppppppuStack_200[5];
          if (ppppppuVar12 < ppppppuStack_200[6]) {
            ppppppuStack_200[5] = (ulonglong *****)(ppppppuVar12 + 2);
            uStack_180._4_4_ = (int32_t)((ulonglong)uStack_180 >> 0x20);
            *(int32_t *)ppppppuVar12 = (int32_t)uStack_188;
            *(int32_t *)((longlong)ppppppuVar12 + 4) = uStack_188._4_4_;
            *(int32_t *)(ppppppuVar12 + 1) = (int32_t)uStack_180;
            *(int32_t *)((longlong)ppppppuVar12 + 0xc) = uStack_180._4_4_;
          }
          else {
            ppppppuVar33 = (ulonglong ******)ppppppuStack_200[4];
            lVar10 = (longlong)ppppppuVar12 - (longlong)ppppppuVar33 >> 4;
            if (lVar10 == 0) {
              lVar10 = 1;
LAB_18027e092:
              ppppppuVar11 = (ulonglong ******)FUN_18062b420(_DAT_180c8ed18,lVar10 << 4);
              ppppppuVar12 = (ulonglong ******)ppppppuVar22[5];
              ppppppuVar33 = (ulonglong ******)ppppppuVar22[4];
              ppppppuVar28 = ppppppuVar11;
            }
            else {
              lVar10 = lVar10 * 2;
              if (lVar10 != 0) goto LAB_18027e092;
              ppppppuVar11 = (ulonglong ******)0x0;
              ppppppuVar28 = ppppppuVar11;
            }
            for (; ppppppuVar33 != ppppppuVar12; ppppppuVar33 = ppppppuVar33 + 2) {
              pppppuVar3 = ppppppuVar33[1];
              *ppppppuVar11 = *ppppppuVar33;
              ppppppuVar11[1] = pppppuVar3;
              ppppppuVar11 = ppppppuVar11 + 2;
            }
            *(int32_t *)ppppppuVar11 = (int32_t)uStack_188;
            *(int32_t *)((longlong)ppppppuVar11 + 4) = uStack_188._4_4_;
            *(int32_t *)(ppppppuVar11 + 1) = (int32_t)uStack_180;
            *(int32_t *)((longlong)ppppppuVar11 + 0xc) = uStack_180._4_4_;
            if ((ulonglong ******)ppppppuVar22[4] != (ulonglong ******)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            ppppppuVar22[4] = (ulonglong *****)ppppppuVar28;
            ppppppuVar22[5] = (ulonglong *****)(ppppppuVar11 + 2);
            ppppppuVar22[6] = (ulonglong *****)(ppppppuVar28 + lVar10 * 2);
          }
          puStack_238 = &unknown_var_3456_ptr;
          if (pbStack_230 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pbStack_230 = (byte *)0x0;
          uStack_220 = uStack_220 & 0xffffffff00000000;
          puStack_238 = &unknown_var_720_ptr;
          uVar31 = (int)uVar37 + 1;
          uVar37 = (ulonglong)uVar31;
          ppppppuVar12 = (ulonglong ******)*ppppppuStack_1e8;
          uVar38 = uVar38 + 0x10;
          pppppppuVar29 = uStack_188;
        } while ((ulonglong)(longlong)(int)uVar31 <
                 (ulonglong)((longlong)ppppppuStack_1e8[1] - (longlong)ppppppuVar12 >> 4));
      }
    }
    else if (lVar10 == 0) {
      uVar38 = uVar37;
      uVar20 = uVar37;
      pppppppuVar29 = param_2;
      if (lVar19 != 0) {
        do {
          ppppppuStack_200 = (ulonglong ******)pppppppuVar29;
          iVar35 = *(int *)(uVar38 + 8 + (longlong)ppppppuVar22);
          ppppppuStackX_10 = (ulonglong ******)CONCAT44(ppppppuStackX_10._4_4_,iVar35);
          FUN_180284830(auStack_108,&uStack_188,ppppppuVar22,&ppppppuStackX_10,(longlong)iVar35);
          pppppppuVar29 = uStack_188;
          uVar13 = FUN_180079430(*(uint64_t *)(uVar38 + (longlong)param_2[7]));
          FUN_1806279c0(&puStack_b8,uVar13);
          pbVar24 = &system_buffer_ptr;
          if (pbStack_b0 != (byte *)0x0) {
            pbVar24 = pbStack_b0;
          }
          uVar21 = 0xcbf29ce484222325;
          uVar32 = uVar37;
          if (uStack_a8 != 0) {
            do {
              uVar21 = (uVar21 ^ *pbVar24) * 0x100000001b3;
              uVar31 = (int)uVar32 + 1;
              uVar32 = (ulonglong)uVar31;
              pbVar24 = pbVar24 + 1;
            } while (uVar31 < uStack_a8);
          }
          FUN_180284a50(pppppppuVar29 + 1,&uStack_188,uVar32,&puStack_b8,uVar21);
          uStack_1f8 = *(uint64_t *)(uVar38 + (longlong)param_2[7]);
          FUN_180284cf0(uStack_188 + 4,&ppppppuStack_200);
          puStack_b8 = &unknown_var_3456_ptr;
          if (pbStack_b0 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pbStack_b0 = (byte *)0x0;
          uStack_a0 = 0;
          puStack_b8 = &unknown_var_720_ptr;
          uVar31 = (int)uVar20 + 1;
          ppppppuVar22 = param_2[7];
          uVar38 = uVar38 + 0x10;
          uVar20 = (ulonglong)uVar31;
          pppppppuVar29 = (ulonglong *******)ppppppuStack_200;
        } while ((ulonglong)(longlong)(int)uVar31 <
                 (ulonglong)((longlong)param_2[8] - (longlong)ppppppuVar22 >> 4));
      }
    }
    else {
      ppppppuStackX_20 = (ulonglong ******)((ulonglong)ppppppuStackX_20 & 0xffffffff00000000);
      if (lVar10 != 0) {
        plStack_210 = (longlong *)0x0;
        do {
          piStack_218 = (int *)CONCAT44(piStack_218._4_4_,
                                        *(uint *)((longlong)(ppppppuVar12 + 1) +
                                                 (longlong)plStack_210));
          iStackX_18 = 0;
          ppppppuVar22 = param_2[7];
          plVar17 = plStack_210;
          iVar35 = (int)uVar37;
          if ((longlong)param_2[8] - (longlong)ppppppuVar22 >> 4 != 0) {
            plStack_208 = (longlong *)0x0;
            uVar31 = *(uint *)((longlong)(ppppppuVar12 + 1) + (longlong)plStack_210);
            do {
              plVar25 = plStack_208;
              uVar31 = *(uint *)((longlong)plStack_208 + 8 + (longlong)ppppppuVar22) & uVar31;
              ppppppuStackX_10 = (ulonglong ******)CONCAT44(ppppppuStackX_10._4_4_,uVar31);
              if (uVar31 != 0) {
                FUN_180284830(auStack_108,&ppppppuStack_200,iStackX_18,&ppppppuStackX_10,
                              (longlong)(int)uVar31);
                ppppppuVar12 = ppppppuStack_200;
                lVar10 = FUN_180079430(*(uint64_t *)((longlong)plVar17 + (longlong)*pppppppuVar29)
                                      );
                puStack_238 = &unknown_var_3456_ptr;
                uStack_220 = 0;
                pbStack_230 = (byte *)0x0;
                uStack_228 = 0;
                FUN_1806277c0(&puStack_238,*(int32_t *)(lVar10 + 0x10));
                if (0 < *(int *)(lVar10 + 0x10)) {
                  puVar23 = &system_buffer_ptr;
                  if (*(void **)(lVar10 + 8) != (void *)0x0) {
                    puVar23 = *(void **)(lVar10 + 8);
                  }
                    // WARNING: Subroutine does not return
                  memcpy(pbStack_230,puVar23,(longlong)(*(int *)(lVar10 + 0x10) + 1));
                }
                if ((*(longlong *)(lVar10 + 8) != 0) && (uStack_228 = 0, pbStack_230 != (byte *)0x0)
                   ) {
                  *pbStack_230 = 0;
                }
                pbVar24 = &system_buffer_ptr;
                if (pbStack_230 != (byte *)0x0) {
                  pbVar24 = pbStack_230;
                }
                uVar37 = 0xcbf29ce484222325;
                uVar31 = 0;
                if (uStack_228 != 0) {
                  do {
                    uVar37 = (uVar37 ^ *pbVar24) * 0x100000001b3;
                    uVar31 = uVar31 + 1;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar31 < uStack_228);
                }
                FUN_180284a50(ppppppuVar12 + 1,&ppppppuStack_200,uVar31,&puStack_238,uVar37);
                ppppppuVar22 = ppppppuStack_200;
                uStack_180 = *(uint64_t *)((longlong)plStack_210 + (longlong)*ppppppuStack_1e8);
                uStack_188 = (ulonglong *******)ppppppuStackX_8;
                pppppppuVar29 = uStack_188;
                ppppppuVar12 = (ulonglong ******)ppppppuStack_200[5];
                if (ppppppuVar12 < ppppppuStack_200[6]) {
                  ppppppuStack_200[5] = (ulonglong *****)(ppppppuVar12 + 2);
                  uStack_188._0_4_ = SUB84(ppppppuStackX_8,0);
                  uStack_188._4_4_ = (int32_t)((ulonglong)ppppppuStackX_8 >> 0x20);
                  uStack_180._4_4_ = (int32_t)((ulonglong)uStack_180 >> 0x20);
                  *(int32_t *)ppppppuVar12 = (int32_t)uStack_188;
                  *(int32_t *)((longlong)ppppppuVar12 + 4) = uStack_188._4_4_;
                  *(int32_t *)(ppppppuVar12 + 1) = (int32_t)uStack_180;
                  *(int32_t *)((longlong)ppppppuVar12 + 0xc) = uStack_180._4_4_;
                  uStack_188 = pppppppuVar29;
                }
                else {
                  ppppppuVar33 = (ulonglong ******)ppppppuStack_200[4];
                  lVar10 = (longlong)ppppppuVar12 - (longlong)ppppppuVar33 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_18027e4b2:
                    ppppppuVar11 = (ulonglong ******)
                                   FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,
                                                 *(int8_t *)(ppppppuStack_200 + 7));
                    ppppppuVar12 = (ulonglong ******)ppppppuVar22[5];
                    ppppppuVar33 = (ulonglong ******)ppppppuVar22[4];
                    ppppppuVar28 = ppppppuVar11;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    if (lVar10 != 0) goto LAB_18027e4b2;
                    ppppppuVar11 = (ulonglong ******)0x0;
                    ppppppuVar28 = ppppppuVar11;
                  }
                  for (; ppppppuVar33 != ppppppuVar12; ppppppuVar33 = ppppppuVar33 + 2) {
                    pppppuVar3 = ppppppuVar33[1];
                    *ppppppuVar11 = *ppppppuVar33;
                    ppppppuVar11[1] = pppppuVar3;
                    ppppppuVar11 = ppppppuVar11 + 2;
                  }
                  *(int32_t *)ppppppuVar11 = (int32_t)uStack_188;
                  *(int32_t *)((longlong)ppppppuVar11 + 4) = uStack_188._4_4_;
                  *(int32_t *)(ppppppuVar11 + 1) = (int32_t)uStack_180;
                  *(int32_t *)((longlong)ppppppuVar11 + 0xc) = uStack_180._4_4_;
                  if ((ulonglong ******)ppppppuVar22[4] != (ulonglong ******)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  ppppppuVar22[4] = (ulonglong *****)ppppppuVar28;
                  ppppppuVar22[5] = (ulonglong *****)(ppppppuVar11 + 2);
                  ppppppuVar22[6] = (ulonglong *****)(ppppppuVar28 + lVar10 * 2);
                  plVar25 = plStack_208;
                }
                puStack_238 = &unknown_var_3456_ptr;
                if (pbStack_230 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pbStack_230 = (byte *)0x0;
                uStack_220 = uStack_220 & 0xffffffff00000000;
                puStack_238 = &unknown_var_720_ptr;
                FUN_180284830(auStack_108,&ppppppuStack_200);
                ppppppuVar22 = ppppppuStack_200;
                lVar10 = FUN_180079430(*(uint64_t *)((longlong)plVar25 + (longlong)param_2[7]));
                ppppppuVar12 = (ulonglong ******)0x0;
                puStack_1d8 = (ulonglong *)&unknown_var_3456_ptr;
                uStack_1c0 = 0;
                pbStack_1d0 = (byte *)0x0;
                uStack_1c8 = 0;
                FUN_1806277c0(&puStack_1d8,*(int32_t *)(lVar10 + 0x10));
                if (0 < *(int *)(lVar10 + 0x10)) {
                  puVar23 = &system_buffer_ptr;
                  if (*(void **)(lVar10 + 8) != (void *)0x0) {
                    puVar23 = *(void **)(lVar10 + 8);
                  }
                    // WARNING: Subroutine does not return
                  memcpy(pbStack_1d0,puVar23,(longlong)(*(int *)(lVar10 + 0x10) + 1));
                }
                if ((*(longlong *)(lVar10 + 8) != 0) && (uStack_1c8 = 0, pbStack_1d0 != (byte *)0x0)
                   ) {
                  *pbStack_1d0 = 0;
                }
                pbVar24 = &system_buffer_ptr;
                if (pbStack_1d0 != (byte *)0x0) {
                  pbVar24 = pbStack_1d0;
                }
                uVar37 = 0xcbf29ce484222325;
                ppppppuVar33 = ppppppuVar12;
                if (uStack_1c8 != 0) {
                  do {
                    uVar37 = (uVar37 ^ *pbVar24) * 0x100000001b3;
                    uVar31 = (int)ppppppuVar33 + 1;
                    ppppppuVar33 = (ulonglong ******)(ulonglong)uVar31;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar31 < uStack_1c8);
                }
                FUN_180284a50(ppppppuVar22 + 1,&ppppppuStack_200,ppppppuVar33,&puStack_1d8,uVar37);
                ppppppuVar33 = ppppppuStack_200;
                uStack_c0 = *(uint64_t *)((longlong)plVar25 + (longlong)param_2[7]);
                ppppppuVar22 = (ulonglong ******)ppppppuStack_200[5];
                uStack_c8 = param_2;
                if (ppppppuVar22 < ppppppuStack_200[6]) {
                  ppppppuStack_200[5] = (ulonglong *****)(ppppppuVar22 + 2);
                  uStack_c8._0_4_ = SUB84(param_2,0);
                  uStack_c8._4_4_ = (int32_t)((ulonglong)param_2 >> 0x20);
                  uStack_c0._4_4_ = (int32_t)((ulonglong)uStack_c0 >> 0x20);
                  *(int32_t *)ppppppuVar22 = (int32_t)uStack_c8;
                  *(int32_t *)((longlong)ppppppuVar22 + 4) = uStack_c8._4_4_;
                  *(int32_t *)(ppppppuVar22 + 1) = (int32_t)uStack_c0;
                  *(int32_t *)((longlong)ppppppuVar22 + 0xc) = uStack_c0._4_4_;
                }
                else {
                  ppppppuVar11 = (ulonglong ******)ppppppuStack_200[4];
                  lVar10 = (longlong)ppppppuVar22 - (longlong)ppppppuVar11 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_18027e6bc:
                    ppppppuVar12 = (ulonglong ******)
                                   FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,
                                                 *(int8_t *)(ppppppuStack_200 + 7));
                    ppppppuVar22 = (ulonglong ******)ppppppuVar33[5];
                    ppppppuVar11 = (ulonglong ******)ppppppuVar33[4];
                    ppppppuVar28 = ppppppuVar12;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    ppppppuVar28 = ppppppuVar12;
                    if (lVar10 != 0) goto LAB_18027e6bc;
                  }
                  for (; ppppppuVar11 != ppppppuVar22; ppppppuVar11 = ppppppuVar11 + 2) {
                    pppppuVar3 = ppppppuVar11[1];
                    *ppppppuVar12 = *ppppppuVar11;
                    ppppppuVar12[1] = pppppuVar3;
                    ppppppuVar12 = ppppppuVar12 + 2;
                  }
                  *(int32_t *)ppppppuVar12 = (int32_t)uStack_c8;
                  *(int32_t *)((longlong)ppppppuVar12 + 4) = uStack_c8._4_4_;
                  *(int32_t *)(ppppppuVar12 + 1) = (int32_t)uStack_c0;
                  *(int32_t *)((longlong)ppppppuVar12 + 0xc) = uStack_c0._4_4_;
                  if ((ulonglong ******)ppppppuVar33[4] != (ulonglong ******)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  ppppppuVar33[4] = (ulonglong *****)ppppppuVar28;
                  ppppppuVar33[5] = (ulonglong *****)(ppppppuVar12 + 2);
                  ppppppuVar33[6] = (ulonglong *****)(ppppppuVar28 + lVar10 * 2);
                  plVar25 = plStack_208;
                }
                puStack_1d8 = (ulonglong *)&unknown_var_3456_ptr;
                if (pbStack_1d0 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pbStack_1d0 = (byte *)0x0;
                uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
                puStack_1d8 = (ulonglong *)&unknown_var_720_ptr;
                plVar17 = plStack_210;
                pppppppuVar29 = (ulonglong *******)ppppppuStack_1e8;
              }
              iStackX_18 = iStackX_18 + 1;
              plStack_208 = (longlong *)((longlong)plVar25 + 0x10);
              ppppppuVar22 = param_2[7];
              uVar31 = (uint)piStack_218;
            } while ((ulonglong)(longlong)iStackX_18 <
                     (ulonglong)((longlong)param_2[8] - (longlong)ppppppuVar22 >> 4));
            iVar35 = (int)ppppppuStackX_20;
          }
          uVar31 = iVar35 + 1;
          uVar37 = (ulonglong)uVar31;
          ppppppuStackX_20 = (ulonglong ******)CONCAT44(ppppppuStackX_20._4_4_,uVar31);
          plStack_210 = plVar17 + 2;
          ppppppuVar12 = *pppppppuVar29;
        } while ((ulonglong)(longlong)(int)uVar31 <
                 (ulonglong)((longlong)pppppppuVar29[1] - (longlong)ppppppuVar12 >> 4));
      }
    }
    lVar10 = *(longlong *)(_DAT_180c86870 + 0x98);
    puStack_1b8 = (ulonglong *)0x0;
    ppppppuStack_1b0 = (ulonglong ******)0x0;
    puVar27 = (ulonglong *)0x0;
    ppppppuStack_1a8 = (ulonglong ******)0x0;
    uStack_1a0 = 3;
    piStack_218 = (int *)*plStack_100;
    plStack_208 = plStack_100;
    if (piStack_218 == (int *)0x0) {
      plStack_208 = plStack_100 + 1;
      lVar19 = *plStack_208;
      while (lVar19 == 0) {
        plStack_208 = plStack_208 + 1;
        lVar19 = *plStack_208;
      }
      piStack_218 = (int *)*plStack_208;
    }
    plVar25 = plStack_100;
    lVar19 = lStack_f8;
    plVar17 = plStack_208;
    lStack_d0 = lVar10;
    if (piStack_218 != (int *)plStack_100[lStack_f8]) {
      do {
        iVar35 = *piStack_218;
        plVar2 = *(longlong **)(piStack_218 + 4);
        ppppppuStackX_20 = (ulonglong ******)*plVar2;
        plStack_210 = plVar2;
        if ((ulonglong *******)ppppppuStackX_20 == (ulonglong *******)0x0) {
          plStack_210 = plVar2 + 1;
          ppppppuStackX_20 = (ulonglong ******)*plStack_210;
          while ((ulonglong *******)ppppppuStackX_20 == (ulonglong *******)0x0) {
            plStack_210 = plStack_210 + 1;
            ppppppuStackX_20 = (ulonglong ******)*plStack_210;
          }
        }
        piVar39 = piStack_218;
        iStackX_18 = iVar35;
        if ((ulonglong *******)ppppppuStackX_20 !=
            (ulonglong *******)plVar2[*(longlong *)(piStack_218 + 6)]) {
          do {
            pppppppuVar29 = (ulonglong *******)ppppppuStackX_20;
            uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,9);
            pppppppuVar14 = (ulonglong *******)FUN_180075030(uVar13,1);
            uStack_188 = pppppppuVar14;
            if (pppppppuVar14 != (ulonglong *******)0x0) {
              (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
            }
            puStack_238 = &unknown_var_3456_ptr;
            uStack_220 = 0;
            pbStack_230 = (byte *)0x0;
            uStack_228 = 0;
            pbStack_230 = (byte *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
            *pbStack_230 = 0;
            uVar37 = (ulonglong)pbStack_230 & 0xffffffffffc00000;
            uVar31 = 0;
            if (uVar37 != 0) {
              lVar19 = ((longlong)pbStack_230 - uVar37 >> 0x10) * 0x50;
              puVar34 = (uint *)(uVar37 + ((lVar19 + 0x80) -
                                          (ulonglong)*(uint *)(uVar37 + lVar19 + 0x84)));
              if ((*(byte *)((longlong)puVar34 + 0xe) & 2) == 0) {
                uVar31 = puVar34[7];
                if (0x3ffffff < puVar34[7]) {
                  uVar31 = *puVar34 << 0x10;
                }
              }
              else {
                uVar31 = puVar34[7];
                if (uVar31 < 0x4000000) {
                  uVar38 = (ulonglong)uVar31;
                }
                else {
                  uVar38 = (ulonglong)*puVar34 << 0x10;
                }
                if (0x3ffffff < uVar31) {
                  uVar31 = *puVar34 << 0x10;
                }
                uVar31 = uVar31 - (int)(((longlong)pbStack_230 -
                                        (uVar37 + ((longlong)((longlong)puVar34 + (-0x80 - uVar37))
                                                  / 0x50) * 0x10000)) % uVar38);
              }
            }
            *(int32_t *)pbStack_230 = 0x63746162;
            *(int32_t *)((longlong)pbStack_230 + 4) = 0x5f646568;
            *(int32_t *)((longlong)pbStack_230 + 8) = 0x6873656d;
            *(int32_t *)((longlong)pbStack_230 + 0xc) = 0x5f7365;
            uStack_228 = 0xf;
            uStack_220._0_4_ = uVar31;
            FUN_180628040(&puStack_238,&unknown_var_9116_ptr,iVar35);
            uVar31 = uStack_228 + 1;
            if (uVar31 != 0) {
              uVar9 = uStack_228 + 2;
              if (pbStack_230 == (byte *)0x0) {
                if ((int)uVar9 < 0x10) {
                  uVar9 = 0x10;
                }
                pbStack_230 = (byte *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
                *pbStack_230 = 0;
                uStack_220._0_4_ = FUN_18064e990(pbStack_230);
              }
              else if ((uint)uStack_220 < uVar9) {
                pbStack_230 = (byte *)FUN_18062b8b0(_DAT_180c8ed18,pbStack_230,uVar9,0x10,0x13);
                uVar37 = (ulonglong)pbStack_230 & 0xffffffffffc00000;
                if (uVar37 == 0) {
                  uStack_220._0_4_ = 0;
                }
                else {
                  lVar19 = ((longlong)pbStack_230 - uVar37 >> 0x10) * 0x50;
                  puVar34 = (uint *)(uVar37 + ((lVar19 + 0x80) -
                                              (ulonglong)*(uint *)(uVar37 + lVar19 + 0x84)));
                  if ((*(byte *)((longlong)puVar34 + 0xe) & 2) == 0) {
                    uStack_220._0_4_ = puVar34[7];
                    if (0x3ffffff < (uint)uStack_220) {
                      uStack_220._0_4_ = *puVar34 << 0x10;
                    }
                  }
                  else {
                    uStack_220._0_4_ = puVar34[7];
                    if ((uint)uStack_220 < 0x4000000) {
                      uVar38 = (ulonglong)(uint)uStack_220;
                    }
                    else {
                      uVar38 = (ulonglong)*puVar34 << 0x10;
                    }
                    if (0x3ffffff < (uint)uStack_220) {
                      uStack_220._0_4_ = *puVar34 << 0x10;
                    }
                    uStack_220._0_4_ =
                         (uint)uStack_220 -
                         (int)(((longlong)pbStack_230 -
                               (uVar37 + ((longlong)((longlong)puVar34 + (-0x80 - uVar37)) / 0x50) *
                                         0x10000)) % uVar38);
                  }
                }
              }
            }
            *(int16_t *)((ulonglong)uStack_228 + (longlong)pbStack_230) = 0x5f;
            uStack_228 = uVar31;
            if (0 < *(int *)(pppppppuVar29 + 2)) {
              FUN_1806277c0(&puStack_238,uVar31 + *(int *)(pppppppuVar29 + 2));
                    // WARNING: Subroutine does not return
              memcpy((int8_t *)((ulonglong)uStack_228 + (longlong)pbStack_230),pppppppuVar29[1],
                     (longlong)(*(int *)(pppppppuVar29 + 2) + 1));
            }
            pbVar24 = &system_buffer_ptr;
            if (pbStack_230 != (byte *)0x0) {
              pbVar24 = pbStack_230;
            }
            (*(code *)pppppppuVar14[2][2])(pppppppuVar14 + 2,pbVar24);
            ppppppuStack_200 = (ulonglong ******)0x0;
            uStack_1f8 = CONCAT44(uStack_1f8._4_4_,iVar35);
            if (pppppppuVar14 != (ulonglong *******)0x0) {
              uStack_c8 = pppppppuVar14;
              (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
            }
            uStack_c8 = (ulonglong *******)0x0;
            ppppppuStack_200 = (ulonglong ******)pppppppuVar14;
            if ((longlong)pppppppuVar29[5] - (longlong)pppppppuVar29[4] >> 4 != 0) {
              FUN_180076910(pppppppuVar14,pppppppuVar29[4][1] + 0x37);
              *(int32_t *)(pppppppuVar14 + 0x4e) = *(int32_t *)(pppppppuVar29[4][1] + 0x4e);
              ppppppuVar12 = (ulonglong ******)pppppppuVar29[4][1][0x56];
              pppppppuVar14[0x55] = (ulonglong ******)pppppppuVar29[4][1][0x55];
              pppppppuVar14[0x56] = ppppppuVar12;
              pppppuVar3 = pppppppuVar29[4][1];
              uVar5 = *(int32_t *)((longlong)pppppuVar3 + 700);
              uVar6 = *(int32_t *)(pppppuVar3 + 0x58);
              uVar7 = *(int32_t *)((longlong)pppppuVar3 + 0x2c4);
              *(int32_t *)(pppppppuVar14 + 0x57) = *(int32_t *)(pppppuVar3 + 0x57);
              *(int32_t *)((longlong)pppppppuVar14 + 700) = uVar5;
              *(int32_t *)(pppppppuVar14 + 0x58) = uVar6;
              *(int32_t *)((longlong)pppppppuVar14 + 0x2c4) = uVar7;
            }
            if (lVar10 == 0) {
              uStack_98 = 0;
              uStack_90 = 0;
              ppppppuStackX_10 = (ulonglong ******)auStack_88;
              uStack_70 = 0;
              uStack_80 = 0;
              auStack_88[0] = 0;
              FUN_18022f2e0(&uStack_98,pppppppuVar14,0);
              ppppppuVar12 = pppppppuVar29[4];
              puVar16 = puVar27;
              puVar30 = puVar27;
              if ((longlong)pppppppuVar29[5] - (longlong)ppppppuVar12 >> 4 != 0) {
                do {
                  puVar18 = *(ulonglong **)
                             (*(longlong *)((longlong)(ppppppuVar12 + 1) + (longlong)puVar16) +
                             0x238);
                  uVar13 = *(uint64_t *)
                            (*(longlong *)((longlong)(ppppppuVar12 + 1) + (longlong)puVar16) + 0x240
                            );
                  pcVar4 = *(code **)(**(longlong **)((longlong)ppppppuVar12 + (longlong)puVar16) +
                                     0x158);
                  if (pcVar4 == (code *)&unknown_var_2528_ptr) {
                    plVar17 = *(longlong **)((longlong)ppppppuVar12 + (longlong)puVar16) + 0x66;
                  }
                  else {
                    plVar17 = (longlong *)(*pcVar4)();
                    ppppppuVar12 = pppppppuVar29[4];
                  }
                  puStack_1d8 = puVar18;
                  pbStack_1d0 = (byte *)uVar13;
                  FUN_180235ca0(&uStack_98,
                                *(uint64_t *)((longlong)(ppppppuVar12 + 1) + (longlong)puVar16),
                                plVar17,0xff,&puStack_1d8,1,0,0,1);
                  uVar31 = (int)puVar30 + 1;
                  ppppppuVar12 = pppppppuVar29[4];
                  puVar16 = puVar16 + 2;
                  puVar30 = (ulonglong *)(ulonglong)uVar31;
                  piVar39 = piStack_218;
                } while ((ulonglong)(longlong)(int)uVar31 <
                         (ulonglong)((longlong)pppppppuVar29[5] - (longlong)ppppppuVar12 >> 4));
              }
              FUN_18022f410(&uStack_98);
            }
            else {
              puStack_128 = (ulonglong *)0x0;
              puStack_120 = (ulonglong *)0x0;
              puStack_118 = (ulonglong *)0x0;
              uStack_110 = 3;
              puStack_148 = (ulonglong *)0x0;
              puStack_140 = (ulonglong *)0x0;
              puStack_1d8 = (ulonglong *)0x0;
              puStack_138 = (ulonglong *)0x0;
              uStack_130 = 3;
              puStack_170 = (ulonglong *)0x0;
              puStack_168 = (ulonglong *)0x0;
              puStack_160 = (ulonglong *)0x0;
              uStack_158 = 3;
              ppppppuStackX_10 =
                   (ulonglong ******)((ulonglong)ppppppuStackX_10 & 0xffffffff00000000);
              ppppppuVar12 = pppppppuVar29[4];
              if ((longlong)pppppppuVar29[5] - (longlong)ppppppuVar12 >> 4 != 0) {
                lStack_190 = 0;
                puStack_198 = (ulonglong *)0x0;
                puVar16 = puVar27;
                puVar30 = puVar27;
                do {
                  plVar17 = *(longlong **)((longlong)ppppppuVar12 + lStack_190 + 8);
                  puStack_150 = puStack_140;
                  plStack_d8 = plVar17;
                  if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 0x28))(plVar17);
                  }
                  if (puStack_168 < puStack_160) {
                    *puStack_168 = (ulonglong)plVar17;
                    plStack_d8 = (longlong *)0x0;
                    puVar18 = puStack_168;
                  }
                  else {
                    lVar10 = (longlong)puStack_168 - (longlong)puStack_170 >> 3;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ed63:
                      puVar18 = (ulonglong *)
                                FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,(int8_t)uStack_158);
                      puVar16 = puStack_170;
                      puVar15 = puVar18;
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar18 = puVar27;
                      puVar16 = puStack_170;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ed63;
                    }
                    for (; puVar8 = puStack_168, puVar16 != puStack_168; puVar16 = puVar16 + 1) {
                      *puVar18 = *puVar16;
                      *puVar16 = 0;
                      puVar18 = puVar18 + 1;
                    }
                    *puVar18 = (ulonglong)plVar17;
                    plStack_d8 = (longlong *)0x0;
                    puVar16 = puStack_1d8;
                    pppppppuVar29 = (ulonglong *******)ppppppuStackX_20;
                    for (puVar26 = puStack_170; ppppppuStackX_20 = (ulonglong ******)pppppppuVar29,
                        puStack_1d8 = puVar16, puVar26 != puVar8; puVar26 = puVar26 + 1) {
                      if ((longlong *)*puVar26 != (longlong *)0x0) {
                        (**(code **)(*(longlong *)*puVar26 + 0x38))();
                      }
                      puVar16 = puStack_1d8;
                      pppppppuVar29 = (ulonglong *******)ppppppuStackX_20;
                    }
                    if (puStack_170 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900(puStack_170);
                    }
                    puStack_160 = puVar15 + lVar10;
                    puStack_170 = puVar15;
                  }
                  puStack_168 = puVar18 + 1;
                  pcVar4 = *(code **)(**(longlong **)(lStack_190 + (longlong)pppppppuVar29[4]) +
                                     0x158);
                  if (pcVar4 == (code *)&unknown_var_2528_ptr) {
                    puVar18 = (ulonglong *)
                              (*(longlong **)(lStack_190 + (longlong)pppppppuVar29[4]) + 0x66);
                  }
                  else {
                    puVar18 = (ulonglong *)(*pcVar4)();
                  }
                  if (puStack_198 < puVar30) {
                    puStack_120 = puStack_198 + 8;
                    uVar37 = puVar18[1];
                    *puStack_198 = *puVar18;
                    puStack_198[1] = uVar37;
                    uVar37 = puVar18[3];
                    puStack_198[2] = puVar18[2];
                    puStack_198[3] = uVar37;
                    uVar5 = *(int32_t *)((longlong)puVar18 + 0x24);
                    uVar37 = puVar18[5];
                    uVar6 = *(int32_t *)((longlong)puVar18 + 0x2c);
                    *(int *)(puStack_198 + 4) = (int)puVar18[4];
                    *(int32_t *)((longlong)puStack_198 + 0x24) = uVar5;
                    *(int *)(puStack_198 + 5) = (int)uVar37;
                    *(int32_t *)((longlong)puStack_198 + 0x2c) = uVar6;
                    uVar5 = *(int32_t *)((longlong)puVar18 + 0x34);
                    uVar37 = puVar18[7];
                    uVar6 = *(int32_t *)((longlong)puVar18 + 0x3c);
                    *(int *)(puStack_198 + 6) = (int)puVar18[6];
                    *(int32_t *)((longlong)puStack_198 + 0x34) = uVar5;
                    *(int *)(puStack_198 + 7) = (int)uVar37;
                    *(int32_t *)((longlong)puStack_198 + 0x3c) = uVar6;
                  }
                  else {
                    lVar19 = (longlong)puStack_198 - (longlong)puStack_128;
                    lVar10 = lVar19 >> 6;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ee93:
                      puVar15 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar10 << 6,3);
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ee93;
                    }
                    if (puStack_128 != puStack_198) {
                    // WARNING: Subroutine does not return
                      memmove(puVar15,puStack_128,lVar19);
                    }
                    uVar37 = puVar18[1];
                    *puVar15 = *puVar18;
                    puVar15[1] = uVar37;
                    uVar37 = puVar18[3];
                    puVar15[2] = puVar18[2];
                    puVar15[3] = uVar37;
                    uVar5 = *(int32_t *)((longlong)puVar18 + 0x24);
                    uVar37 = puVar18[5];
                    uVar6 = *(int32_t *)((longlong)puVar18 + 0x2c);
                    *(int *)(puVar15 + 4) = (int)puVar18[4];
                    *(int32_t *)((longlong)puVar15 + 0x24) = uVar5;
                    *(int *)(puVar15 + 5) = (int)uVar37;
                    *(int32_t *)((longlong)puVar15 + 0x2c) = uVar6;
                    uVar5 = *(int32_t *)((longlong)puVar18 + 0x34);
                    uVar37 = puVar18[7];
                    uVar6 = *(int32_t *)((longlong)puVar18 + 0x3c);
                    *(int *)(puVar15 + 6) = (int)puVar18[6];
                    *(int32_t *)((longlong)puVar15 + 0x34) = uVar5;
                    *(int *)(puVar15 + 7) = (int)uVar37;
                    *(int32_t *)((longlong)puVar15 + 0x3c) = uVar6;
                    puStack_198 = puVar15 + 8;
                    if (puStack_128 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    puVar30 = puVar15 + lVar10 * 8;
                    pppppppuVar29 = (ulonglong *******)ppppppuStackX_20;
                    puStack_128 = puVar15;
                    puStack_120 = puStack_198;
                    puStack_118 = puVar30;
                  }
                  puVar18 = puStack_150;
                  lVar10 = *(longlong *)(lStack_190 + 8 + (longlong)pppppppuVar29[4]);
                  uVar37 = *(ulonglong *)(lVar10 + 0x238);
                  uVar38 = *(ulonglong *)(lVar10 + 0x240);
                  puStack_198 = puStack_120;
                  if (puStack_150 < puVar16) {
                    puStack_140 = puStack_150 + 2;
                    *puStack_150 = uVar37;
                    puStack_150[1] = uVar38;
                  }
                  else {
                    lVar19 = (longlong)puStack_150 - (longlong)puStack_148;
                    lVar10 = lVar19 >> 4;
                    if (lVar10 == 0) {
                      lVar10 = 1;
LAB_18027ef7d:
                      puVar15 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,3);
                    }
                    else {
                      lVar10 = lVar10 * 2;
                      puVar15 = puVar27;
                      if (lVar10 != 0) goto LAB_18027ef7d;
                    }
                    if (puStack_148 != puVar18) {
                    // WARNING: Subroutine does not return
                      memmove(puVar15,puStack_148,lVar19);
                    }
                    *puVar15 = uVar37;
                    puVar15[1] = uVar38;
                    puStack_150 = puVar15 + 2;
                    if (puStack_148 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    puVar16 = puVar15 + lVar10 * 2;
                    puStack_1d8 = puVar16;
                    puStack_148 = puVar15;
                    puStack_140 = puStack_150;
                    puStack_138 = puVar16;
                  }
                  iVar36 = (int)ppppppuStackX_10 + 1;
                  ppppppuStackX_10 = (ulonglong ******)CONCAT44(ppppppuStackX_10._4_4_,iVar36);
                  lStack_190 = lStack_190 + 0x10;
                  ppppppuVar12 = (ulonglong ******)ppppppuStackX_20[4];
                  pppppppuVar29 = (ulonglong *******)ppppppuStackX_20;
                  iVar35 = iStackX_18;
                  puStack_150 = puStack_140;
                } while ((ulonglong)(longlong)iVar36 <
                         (ulonglong)((longlong)ppppppuStackX_20[5] - (longlong)ppppppuVar12 >> 4));
              }
              pppppppuVar14 = uStack_188;
              uVar13 = *(uint64_t *)(_DAT_180c86870 + 0x98);
              ppppppuStackX_20 = (ulonglong ******)&ppppppuStackX_10;
              ppppppuStackX_10 = (ulonglong ******)uStack_188;
              if (uStack_188 != (ulonglong *******)0x0) {
                (*(code *)(*uStack_188)[5])(uStack_188);
              }
              FUN_18017a600(uVar13,&ppppppuStackX_10,&puStack_170,&puStack_128,&puStack_148);
              FUN_180057830(&puStack_170);
              if (puStack_148 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              piVar39 = piStack_218;
              if (puStack_128 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
            }
            ppppppuVar12 = ppppppuStack_1b0;
            if (ppppppuStack_1b0 < ppppppuStack_1a8) {
              pppppppuVar1 = (ulonglong *******)(ppppppuStack_1b0 + 2);
              ppppppuStackX_10 = ppppppuStack_1b0;
              *ppppppuStack_1b0 = (ulonglong *****)pppppppuVar14;
              ppppppuStack_1b0 = (ulonglong ******)pppppppuVar1;
              if (pppppppuVar14 != (ulonglong *******)0x0) {
                (*(code *)(*pppppppuVar14)[5])(pppppppuVar14);
              }
              *(int *)(ppppppuVar12 + 1) = iVar35;
            }
            else {
              lVar10 = (longlong)ppppppuStack_1b0 - (longlong)puStack_1b8 >> 4;
              if (lVar10 == 0) {
                lVar10 = 1;
LAB_18027f217:
                puVar16 = (ulonglong *)
                          FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,(int8_t)uStack_1a0);
              }
              else {
                lVar10 = lVar10 * 2;
                puVar16 = puVar27;
                if (lVar10 != 0) goto LAB_18027f217;
              }
              lVar19 = FUN_180284fe0(puStack_1b8,ppppppuStack_1b0,puVar16);
              FUN_180280fd0(lVar19,&ppppppuStack_200);
              FUN_180284f90(puStack_1b8,ppppppuStack_1b0);
              if (puStack_1b8 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              ppppppuStack_1a8 = (ulonglong ******)(puVar16 + lVar10 * 2);
              iVar35 = iStackX_18;
              puStack_1b8 = puVar16;
              ppppppuStack_1b0 = (ulonglong ******)(lVar19 + 0x10);
            }
            if (pppppppuVar14 != (ulonglong *******)0x0) {
              (*(code *)(*pppppppuVar14)[7])(pppppppuVar14);
            }
            puStack_238 = &unknown_var_3456_ptr;
            if (pbStack_230 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            pbStack_230 = (byte *)0x0;
            uStack_220 = (ulonglong)uStack_220._4_4_ << 0x20;
            puStack_238 = &unknown_var_720_ptr;
            if (pppppppuVar14 != (ulonglong *******)0x0) {
              (*(code *)(*pppppppuVar14)[7])(pppppppuVar14);
            }
            ppppppuStackX_20 = pppppppuVar29[8];
            while ((ulonglong *******)ppppppuStackX_20 == (ulonglong *******)0x0) {
              plStack_210 = plStack_210 + 1;
              ppppppuStackX_20 = (ulonglong ******)*plStack_210;
            }
            plVar25 = plStack_100;
            lVar10 = lStack_d0;
            lVar19 = lStack_f8;
            plVar17 = plStack_208;
          } while ((ulonglong *******)ppppppuStackX_20 !=
                   *(ulonglong ********)
                    (*(longlong *)(piVar39 + 4) + *(longlong *)(piVar39 + 6) * 8));
        }
        piStack_218 = *(int **)(piVar39 + 0xe);
        while (piStack_218 == (int *)0x0) {
          plVar17 = plVar17 + 1;
          plStack_208 = plVar17;
          piStack_218 = (int *)*plVar17;
        }
      } while (piStack_218 != (int *)plVar25[lVar19]);
    }
    puVar16 = puVar27;
    puVar30 = puVar27;
    if ((longlong)ppppppuStack_1e8[1] - (longlong)*ppppppuStack_1e8 >> 4 != 0) {
      do {
        *(uint64_t *)(*(longlong *)((longlong)puVar16 + (longlong)*ppppppuStack_1e8) + 0x1c8) = 0;
        uVar31 = (int)puVar30 + 1;
        puVar16 = puVar16 + 2;
        puVar30 = (ulonglong *)(ulonglong)uVar31;
      } while ((ulonglong)(longlong)(int)uVar31 <
               (ulonglong)((longlong)ppppppuStack_1e8[1] - (longlong)*ppppppuStack_1e8 >> 4));
    }
    FUN_180284500();
    ppppppuVar12 = ppppppuStackX_8;
    puVar16 = puVar27;
    if ((longlong)ppppppuStack_1b0 - (longlong)puStack_1b8 >> 4 != 0) {
      do {
        ppppppuStackX_10 = (ulonglong ******)&ppppppuStackX_8;
        ppppppuStackX_8 = *(ulonglong *******)((longlong)puStack_1b8 + (longlong)puVar27);
        if ((ulonglong *******)ppppppuStackX_8 != (ulonglong *******)0x0) {
          (*(code *)(*ppppppuStackX_8)[5])();
        }
        FUN_180275e10(ppppppuVar12,*(int32_t *)((longlong)(puStack_1b8 + 1) + (longlong)puVar27),
                      &ppppppuStackX_8,0);
        uVar31 = (int)puVar16 + 1;
        puVar27 = puVar27 + 2;
        puVar16 = (ulonglong *)(ulonglong)uVar31;
      } while ((ulonglong)(longlong)(int)uVar31 <
               (ulonglong)((longlong)ppppppuStack_1b0 - (longlong)puStack_1b8 >> 4));
    }
    if (lVar10 == 0) {
      FUN_180276f30(ppppppuVar12,(longlong)ppppppuVar12 + 0x214,1);
      ppppppuVar12 = (ulonglong ******)ppppppuVar12[5];
      if ((ppppppuVar12 != (ulonglong ******)0x0) &&
         (*(short *)(ppppppuVar12 + 0x56) = *(short *)(ppppppuVar12 + 0x56) + 1,
         ppppppuVar12[0x2d] != (ulonglong *****)0x0)) {
        func_0x0001802eeba0();
      }
    }
    FUN_1802841d0(&puStack_1b8);
    FUN_180284780(auStack_108);
  }
  return;
}







