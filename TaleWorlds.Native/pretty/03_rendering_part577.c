#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part577.c - 1 个函数
// 函数: void function_583b80(int64_t *param_1,float param_2)
void function_583b80(int64_t *param_1,float param_2)
{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int32_t uVar11;
  float *pfVar12;
  float *pfVar13;
  char cVar14;
  int64_t lVar15;
  void *puVar16;
  int64_t lVar17;
  int *piVar18;
  uint64_t uVar19;
  uint *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int8_t stack_array_798 [32];
  float *pfStack_778;
  int *piStack_770;
  int64_t *plStack_768;
  int *piStack_760;
  float *pfStack_758;
  float *pfStack_750;
  char acStack_748 [4];
  int32_t local_var_744;
  int iStack_740;
  uint local_var_73c;
  int iStack_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float fStack_728;
  float fStack_720;
  float fStack_71c;
  float fStack_718;
  int32_t local_var_714;
  float fStack_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float fStack_6f8;
  int32_t local_var_6f4;
  int32_t local_var_6e8;
  int32_t local_var_6e4;
  float fStack_6e0;
  float fStack_6d8;
  float fStack_6d4;
  float fStack_6d0;
  int32_t local_var_6cc;
  float fStack_6c8;
  float fStack_6c4;
  float fStack_6c0;
  int32_t local_var_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  int32_t local_var_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  int32_t local_var_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  int32_t local_var_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  int32_t local_var_67c;
  float fStack_678;
  float fStack_674;
  float fStack_670;
  int32_t local_var_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  int32_t local_var_65c;
  int32_t local_var_658;
  int32_t local_var_654;
  float fStack_650;
  int32_t local_var_64c;
  float fStack_648;
  float fStack_644;
  float fStack_640;
  int32_t local_var_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  int32_t local_var_62c;
  int64_t lStack_628;
  uint64_t local_var_620;
  uint64_t local_var_618;
  int32_t local_var_610;
  int32_t local_var_60c;
  uint64_t local_var_608;
  uint64_t local_var_600;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  int32_t local_var_5ec;
  int16_t local_var_5e8;
  int32_t local_var_5e4;
  uint64_t local_var_5e0;
  int32_t local_var_5d8;
  int8_t stack_array_5d0 [16];
  uint64_t local_var_5c0;
  uint64_t local_var_5b8;
  uint64_t local_var_5b0;
  uint64_t local_var_5a8;
  int16_t local_var_5a0;
  int8_t local_var_598;
  int32_t local_var_594;
  int32_t local_var_590;
  uint64_t local_var_58c;
  uint64_t local_var_584;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  int32_t local_var_570;
  int iStack_56c;
  uint64_t local_var_568;
  int8_t local_var_560;
  uint64_t local_var_55c;
  int32_t local_var_554;
  uint64_t local_var_548;
  uint64_t local_var_540;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  uint local_var_52c;
  float fStack_528;
  float fStack_524;
  int32_t local_var_520;
  uint64_t local_var_518;
  uint64_t local_var_510;
  float fStack_508;
  float fStack_504;
  int32_t local_var_500;
  int32_t local_var_4fc;
  uint64_t local_var_4f8;
  uint64_t local_var_4f0;
  uint64_t local_var_4e8;
  int8_t stack_array_4e0 [8];
  float fStack_4d8;
  int8_t stack_array_4c8 [32];
  uint64_t local_var_4a8;
  uint64_t local_var_4a0;
  uint64_t local_var_498;
  uint64_t local_var_490;
  float fStack_488;
  char cStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  int32_t local_var_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  int32_t local_var_454;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  int32_t local_var_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  int32_t local_var_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  int32_t local_var_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t local_var_40c;
  int8_t stack_array_408 [16];
  int8_t stack_array_3f8 [16];
  int8_t stack_array_3e8 [16];
  int8_t stack_array_3d8 [16];
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  int32_t local_var_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t local_var_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  int32_t local_var_39c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  int32_t local_var_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  int32_t local_var_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  uint local_var_35c;
  int64_t alStack_358 [25];
  int iStack_290;
  char cStack_288;
  void *plocal_var_278;
  void *plocal_var_270;
  int32_t local_var_268;
  uint8_t stack_array_260 [8];
  void *plocal_var_258;
  void *plocal_var_250;
  int32_t local_var_248;
  uint8_t stack_array_240 [24];
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [72];
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint local_var_1ac;
  int64_t alStack_1a8 [4];
  float afStack_188 [2];
  int8_t stack_array_180 [152];
  int iStack_e8;
  uint64_t local_var_d8;
  local_var_4e8 = 0xfffffffffffffffe;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_798;
  cVar14 = '\0';
  acStack_748[0] = '\0';
  fStack_734 = param_2;
  if (((0.0 < param_2) && (system_status_flag != 1)) && (system_status_flag != 4)) {
    if ((*(byte *)(param_1[2] + 0x87b714) & 1) != 0) {
      function_581090();
    }
    lVar17 = param_1[0x1e];
    uVar22 = 0;
    iVar10 = iRam00000000000000f0;
    if (lVar17 == 0) {
LAB_180583c81:
      lVar21 = *(int64_t *)(lVar17 + 0xd0);
      uVar19 = 1;
    }
    else {
      iVar10 = *(int *)(lVar17 + 0xf0);
      lVar21 = *(int64_t *)(lVar17 + 0xd0);
      uVar19 = uVar22;
      if (*(int *)((int64_t)iVar10 * 0xa0 + 0x5c + lVar21) != 0x13) goto LAB_180583c81;
    }
    local_var_73c = (uint)uVar19;
    if (local_var_73c == 0) {
      local_var_744 = *(int32_t *)((int64_t)iVar10 * 0xa0 + 0x9c + lVar21);
    }
    else {
      local_var_744 = *(int32_t *)((int64_t)iVar10 * 0xa0 + 0x98 + lVar21);
    }
    function_588680(param_1,&fStack_730);
    function_5815f0(param_1,&local_var_6e8,param_1 + 0xb);
    lStack_628 = (int64_t)*(int *)((int64_t)param_1 + 0xbd4);
    if (0 < lStack_628) {
      pfVar13 = (float *)((int64_t)param_1 + 0x3ec);
      do {
        pfVar1 = pfVar13 + -6;
        fVar26 = pfVar13[4];
        if ((fVar26 != 4.2039e-45) ||
           (((lVar17 = *(int64_t *)
                        (*(int64_t *)((int64_t)(int)pfVar13[7] * 0xa60 + 0x3998 + param_1[2]) +
                        0x9f0), lVar17 != 0 && (0 < *(int *)(lVar17 + 0x30))) &&
            (((*(uint64_t *)
                ((int64_t)*(int *)(lVar17 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar17 + 0xd0)) &
              0x200) == 0 || (0 < *(short *)(lVar17 + 8))))))) {
          Function_4593c2d0(alStack_358);
          pfStack_758 = (float *)acStack_748;
          piStack_760 = &iStack_740;
          plStack_768 = alStack_358;
          piStack_770 = &iStack_738;
          pfStack_778 = &fStack_730;
          function_584d80(param_1,pfVar1,uVar19,local_var_744);
          cVar14 = acStack_748[0];
          if ((fVar26 == 8.40779e-45) || (fVar26 == 5.60519e-45)) {
            if (*(byte *)(param_1 + 0x5d) < 0x20) {
              *(short *)((int64_t)param_1 + (uint64_t)*(byte *)(param_1 + 0x5d) * 2 + 0x2a8) =
                   SUB42(pfVar13[7],0);
              *(char *)(param_1 + 0x5d) = (char)param_1[0x5d] + '\x01';
            }
LAB_180583e24:
            if (fVar26 == 4.2039e-45) {
              lVar17 = param_1[2] + 0x30a0 + (int64_t)(int)pfVar13[7] * 0xa60;
              pfStack_750 = &fStack_730;
              pfStack_758 = &fStack_730;
              piStack_760 = (int *)CONCAT44(piStack_760._4_4_,(int)param_1[0x54]);
              pfStack_778 = (float *)CONCAT44(pfStack_778._4_4_,
                                              *(int32_t *)((int64_t)param_1 + 0xc));
              plStack_768 = param_1;
              function_5253f0(lVar17,alStack_358,acStack_748[0] == '\0',0xff);
              if (cStack_288 == '\0') {
                cVar14 = *(char *)(*(int64_t *)
                                    (*(int64_t *)(*(int64_t *)(lVar17 + 0x8f8) + 0x9f0) + 0xf8) +
                                  0x88);
                lVar15 = (int64_t)cVar14;
                lVar21 = *(int64_t *)(lVar17 + 0x658);
                lVar5 = *(int64_t *)(*(int64_t *)(lVar21 + 0x208) + 0x140);
                iVar10 = *(int *)(lVar15 * 0x1b0 + 0x110 + lVar5);
                while ((iVar10 == -1 && (cVar14 = (char)lVar15, cVar14 != -1))) {
                  cVar14 = *(char *)(lVar15 * 0x100 + 0xa0 + *(int64_t *)(lVar21 + 0x18));
                  lVar15 = (int64_t)cVar14;
                  iVar10 = *(int *)(lVar15 * 0x1b0 + 0x110 + lVar5);
                }
                puVar20 = (uint *)((int64_t)cVar14 * 0x100 + *(int64_t *)(lVar21 + 0x18));
                do {
                  LOCK();
                  uVar2 = *puVar20;
                  *puVar20 = *puVar20 | 1;
                  UNLOCK();
                } while ((uVar2 & 1) != 0);
                local_var_548 = *(uint64_t *)(puVar20 + 1);
                local_var_540 = *(uint64_t *)(puVar20 + 3);
                fVar7 = (float)puVar20[5];
                fVar8 = (float)puVar20[6];
                fVar9 = (float)puVar20[7];
                uVar2 = puVar20[8];
                uVar23 = 0;
                *puVar20 = 0;
                lVar21 = *(int64_t *)(*(int64_t *)(lVar17 + 0x6d8) + 0x8a8);
                fStack_538 = fVar7;
                fStack_534 = fVar8;
                fStack_530 = fVar9;
                local_var_52c = uVar2;
                local_var_1c8 = local_var_548;
                local_var_1c0 = local_var_540;
                fStack_1b8 = fVar7;
                fStack_1b4 = fVar8;
                fStack_1b0 = fVar9;
                local_var_1ac = uVar2;
                SystemSecurityManager(&fStack_480,&local_var_548);
                fStack_388 = fStack_470;
                fStack_384 = fStack_46c;
                fStack_380 = fStack_468;
                local_var_37c = local_var_464;
                fStack_378 = fStack_460;
                fStack_374 = fStack_45c;
                fStack_370 = fStack_458;
                local_var_36c = local_var_454;
                fVar29 = *(float *)(lVar21 + 0x98);
                fStack_6d0 = fVar9 * fVar29 + *(float *)(lVar21 + 0xa8);
                fVar27 = *(float *)(lVar21 + 0x74);
                fVar25 = *(float *)(lVar21 + 0x84);
                fStack_6d4 = fVar8 * fVar25 + fVar7 * fVar27 + *(float *)(lVar21 + 0xa4);
                fVar3 = *(float *)(lVar21 + 0x80);
                fVar4 = *(float *)(lVar21 + 0x70);
                fStack_6d8 = fVar7 * fVar4 + fVar8 * fVar3 + *(float *)(lVar21 + 0xa0);
                local_var_6cc = 0x7f7fffff;
                local_var_40c = 0x7f7fffff;
                fVar34 = fStack_458 * fVar29;
                fVar32 = fStack_45c * fVar25 + fStack_460 * fVar27;
                fVar33 = fStack_460 * fVar4 + fStack_45c * fVar3;
                fVar31 = fStack_468 * fVar29;
                fVar30 = fStack_46c * fVar25 + fStack_470 * fVar27;
                fVar28 = fStack_470 * fVar4 + fStack_46c * fVar3;
                fStack_70c = fStack_46c;
                fStack_708 = fStack_468;
                fStack_704 = (float)local_var_464;
                fVar29 = fStack_478 * fVar29;
                fVar27 = fStack_47c * fVar25 + fStack_480 * fVar27;
                fStack_6c8 = fStack_480 * fVar4 + fStack_47c * fVar3;
                local_var_548 = CONCAT44(fStack_47c,fStack_6c8);
                local_var_6bc = 0x7f7fffff;
                local_var_6ac = 0x7f7fffff;
                local_var_69c = 0x7f7fffff;
                local_var_43c = 0x7f7fffff;
                local_var_42c = 0x7f7fffff;
                local_var_41c = 0x7f7fffff;
                fStack_710 = fVar28;
                fStack_6c4 = fVar27;
                fStack_6c0 = fVar29;
                fStack_6b8 = fVar28;
                fStack_6b4 = fVar30;
                fStack_6b0 = fVar31;
                fStack_6a8 = fVar33;
                fStack_6a4 = fVar32;
                fStack_6a0 = fVar34;
                fStack_448 = fStack_6c8;
                fStack_444 = fVar27;
                fStack_440 = fVar29;
                fStack_438 = fVar28;
                fStack_434 = fVar30;
                fStack_430 = fVar31;
                fStack_428 = fVar33;
                fStack_424 = fVar32;
                fStack_420 = fVar34;
                fStack_418 = fStack_6d8;
                fStack_414 = fStack_6d4;
                fStack_410 = fStack_6d0;
                fStack_368 = fVar7;
                fStack_364 = fVar8;
                fStack_360 = fVar9;
                local_var_35c = uVar2;
                function_1c13c0(&fStack_448,&local_var_620,pfVar1);
                fStack_698 = 1.0 / *(float *)(*(int64_t *)(lVar17 + 0x6d8) + 0x8c0);
                fStack_670 = fVar34 * fStack_698;
                fStack_674 = fVar32 * fStack_698;
                fStack_678 = fStack_698 * fVar33;
                fStack_680 = fVar31 * fStack_698;
                fStack_684 = fVar30 * fStack_698;
                fStack_688 = fStack_698 * fVar28;
                fStack_690 = fVar29 * fStack_698;
                fStack_694 = fVar27 * fStack_698;
                fStack_698 = fStack_698 * (float)local_var_548;
                local_var_68c = 0x7f7fffff;
                local_var_3bc = 0x7f7fffff;
                local_var_67c = 0x7f7fffff;
                local_var_3ac = 0x7f7fffff;
                local_var_66c = 0x7f7fffff;
                local_var_39c = 0x7f7fffff;
                fStack_710 = fStack_730 * fStack_698 + fStack_72c * fStack_694 +
                             fStack_728 * fStack_690;
                fStack_70c = fStack_730 * fStack_688 + fStack_72c * fStack_684 +
                             fStack_728 * fStack_680;
                fStack_708 = fStack_730 * fStack_678 + fStack_72c * fStack_674 +
                             fStack_728 * fStack_670;
                fStack_704 = fStack_730 * 3.4028235e+38 + fStack_72c * 3.4028235e+38 +
                             fStack_728 * 3.4028235e+38;
                iVar10 = *(int *)(*(int64_t *)(lVar17 + 0x590) + 0x2498);
                if (((iVar10 == -1) ||
                    (*(int *)((int64_t)iVar10 * 0x68 + 0x58 + render_system_memory) != 2)) ||
                   (*(int64_t *)(lVar17 + 0x288) == 0)) {
                  iVar10 = -1;
                }
                else {
                  iVar10 = *(int *)(*(int64_t *)(lVar17 + 0x288) + 0x18);
                }
                fStack_720 = (float)iStack_290 * 0.3;
                if (-1.0 <= fStack_720) {
                  if (1.0 <= fStack_720) {
                    fStack_720 = 1.0;
                  }
                }
                else {
                  fStack_720 = -1.0;
                }
                fStack_718 = fStack_720 * fStack_708;
                fStack_71c = fStack_720 * fStack_70c;
                fStack_720 = fStack_720 * fStack_710;
                local_var_714 = 0x7f7fffff;
                fStack_3c8 = fStack_698;
                fStack_3c4 = fStack_694;
                fStack_3c0 = fStack_690;
                fStack_3b8 = fStack_688;
                fStack_3b4 = fStack_684;
                fStack_3b0 = fStack_680;
                fStack_3a8 = fStack_678;
                fStack_3a4 = fStack_674;
                fStack_3a0 = fStack_670;
                if (iVar10 == -1) {
                  local_var_610 = 2;
                  local_var_60c = 0xffffffff;
                  local_var_608 = local_var_620;
                  local_var_600 = local_var_618;
                  local_var_5ec = 0x7f7fffff;
                  local_var_5e8 = 0xff;
                  fStack_5f8 = fStack_720;
                  fStack_5f4 = fStack_71c;
                  fStack_5f0 = fStack_718;
                  local_var_5e4 = (int)uVar23;
                  function_5a4590(lVar17 + 0x28,&local_var_610);
                  cVar14 = acStack_748[0];
                }
                else {
                  local_var_598 = (int8_t)uVar23;
                  local_var_5e0 = 0xffffffffffffffff;
                  stack_array_5d0 = ZEXT416(0);
                  local_var_5b8 = 0x3f80000000000000;
                  local_var_5b0 = 0xbe4ccccdbe4ccccd;
                  local_var_5a8 = 0x3ecccccd;
                  local_var_5a0 = 0x100;
                  local_var_594 = 0xf;
                  local_var_590 = 0xffffffff;
                  local_var_58c = local_var_620;
                  local_var_584 = local_var_618;
                  local_var_570 = 0x7f7fffff;
                  local_var_568 = 0xffffffffffffffff;
                  local_var_560 = 0xff;
                  local_var_554 = 0x3f800000;
                  local_var_5d8 = (int)uVar23;
                  local_var_5c0 = uVar23;
                  fStack_57c = fStack_720;
                  fStack_578 = fStack_71c;
                  fStack_574 = fStack_718;
                  iStack_56c = iVar10;
                  local_var_55c = uVar23;
                  UISystem_InputHandler(lVar17 + 0x28,1,&local_var_5e0);
                  cVar14 = acStack_748[0];
                }
              }
            }
          }
          else if (fVar26 == 4.2039e-45) {
            if (*(byte *)((int64_t)param_1 + 0x3c4) < 0x20) {
              *(short *)((int64_t)param_1 +
                        (uint64_t)*(byte *)((int64_t)param_1 + 0x3c4) * 2 + 900) =
                   SUB42(pfVar13[7],0);
              *(char *)((int64_t)param_1 + 0x3c4) = *(char *)((int64_t)param_1 + 0x3c4) + '\x01';
            }
            goto LAB_180583e24;
          }
          iVar10 = iStack_740;
          if ((fVar26 == 8.40779e-45) || (fVar26 == 5.60519e-45)) {
            if (-1 < iStack_740) {
              pfStack_778 = (float *)CONCAT71(pfStack_778._1_7_,*(int8_t *)(pfVar13 + 9));
              function_586470(param_1,pfVar1,iStack_740,pfVar13[7]);
            }
          }
          else if (fVar26 != 9.80909e-45) {
            if (-1 < iStack_740) {
              local_var_4f8 = *(uint64_t *)pfVar1;
              local_var_4f0 = *(uint64_t *)(pfVar13 + -4);
              pfVar12 = (float *)function_588680(param_1,stack_array_408);
              fStack_660 = -pfVar12[2];
              fStack_664 = -pfVar12[1];
              fVar29 = *pfVar12;
              fStack_668 = -fVar29;
              local_var_65c = 0x7f7fffff;
              local_var_4fc = 0x7f7fffff;
              local_var_518 = 0;
              local_var_510 = 0x7f7fffff3f800000;
              fStack_528 = -fStack_664;
              fVar25 = fStack_528 * fStack_528 + fVar29 * fVar29;
              auVar24 = rsqrtss(ZEXT416((uint)(fVar29 * fVar29)),ZEXT416((uint)fVar25));
              fVar27 = auVar24._0_4_;
              fVar27 = fVar27 * 0.5 * (3.0 - fVar25 * fVar27 * fVar27);
              fStack_528 = fVar27 * fStack_528;
              fStack_524 = -(fVar27 * fVar29);
              local_var_520 = 0;
              fStack_504 = -fStack_528;
              local_var_500 = 0;
              fStack_508 = fStack_524;
              function_4ebb80(param_1[2],iVar10,&fStack_528,1);
            }
            if (fVar26 == 2.8026e-45) {
              function_5815f0(param_1,stack_array_4e0,param_1 + 0xd);
              fVar29 = *(float *)(*(int64_t *)(param_1[2] + 0x18) + 0x3ec4);
              bVar6 = fStack_4d8 < fVar29;
              if ((!bVar6) && (fStack_6e0 < fVar29)) {
                local_var_4a8 = 0;
                local_var_4a0 = 0x7f7fffff3f800000;
                fStack_488 = 0.0;
                local_var_498 = 0;
                local_var_490 = 0;
                piStack_770 = (int *)CONCAT71(piStack_770._1_7_,bVar6);
                pfStack_778 = (float *)CONCAT44(pfStack_778._4_4_,0x31b789);
                cStack_484 = bVar6;
                PhysicsSystem_JointManager(*(int64_t *)(param_1[2] + 0x18),stack_array_4c8);
                fVar27 = fStack_488;
                if (cStack_484 == '\0') {
                  fVar27 = 0.0;
                }
                if (fVar27 < fVar29) {
                  local_var_658 = local_var_6e8;
                  local_var_654 = local_var_6e4;
                  local_var_64c = 0x7f7fffff;
                  lVar17 = param_1[2];
                  plocal_var_228 = &memory_allocator_3480_ptr;
                  plocal_var_220 = stack_array_210;
                  stack_array_210[0] = 0;
                  local_var_218 = 0x18;
                  fStack_650 = fVar29;
                  uVar23 = strcpy_s(stack_array_210,0x40,&ui_system_data_1688_ptr);
                  uVar11 = function_0c17c0(uVar23,&plocal_var_228);
                  function_4eb8d0(lVar17,uVar11,&local_var_658,&system_data_01d0);
                  plocal_var_228 = &system_state_ptr;
                }
              }
            }
            else {
              lVar17 = *(int64_t *)
                        (render_system_memory +
                        (int64_t)
                        *(int *)((int64_t)*(int *)(param_1[0x1e] + 0x34) * 0x68 +
                                 *(int64_t *)(render_system_data_memory + 0x38) + 100) * 8);
              piVar18 = (int *)(lVar17 + (int64_t)(int)pfVar13[6] * 0x28);
              iVar10 = *piVar18;
              if (iVar10 < 0) {
                piVar18 = (int *)((int64_t)*(int *)(*(int64_t *)(render_system_data_memory + 0x28) + 100) *
                                  0x28 + lVar17);
                iVar10 = *piVar18;
              }
              if (iVar10 != -1) {
                pfVar12 = (float *)function_588680(param_1,stack_array_3f8);
                fVar27 = *pfVar12 * pfVar13[-2] + pfVar12[1] * pfVar13[-1];
                fVar29 = *pfVar13;
                fVar27 = (fVar29 + fVar29) * pfVar12[2] + fVar27 + fVar27;
                fStack_640 = pfVar12[2] - fVar27 * fVar29;
                fStack_644 = pfVar12[1] - fVar27 * pfVar13[-1];
                fStack_648 = *pfVar12 - fVar27 * pfVar13[-2];
                local_var_63c = 0x7f7fffff;
                fStack_630 = fStack_640 * 0.25 + pfVar13[-4];
                fStack_634 = fStack_644 * 0.25 + pfVar13[-5];
                fStack_638 = fStack_648 * 0.25 + *pfVar1;
                local_var_62c = 0x7f7fffff;
                function_4eb8d0(param_1[2],*piVar18,&fStack_638,&fStack_648);
              }
            }
          }
          if (cVar14 != '\0') {
            if (fVar26 != 9.80909e-45) {
              if ((*(uint64_t *)
                    ((int64_t)*(int *)(param_1[0x1e] + 0xf0) * 0xa0 + 0x50 +
                    *(int64_t *)(param_1[0x1e] + 0xd0)) & 0x6000) != 0) {
                if (iStack_738 == 1) {
                  fVar29 = pfVar13[7];
                }
                else {
                  fVar29 = -NAN;
                }
                function_585e40(param_1,fVar29,pfVar1);
              }
              if ((-1 < (int)param_1[0x54]) &&
                 ((fVar26 != 8.40779e-45 ||
                  ((*(uint64_t *)
                     ((int64_t)*(int *)(param_1[0x1e] + 0xf0) * 0xa0 + 0x50 +
                     *(int64_t *)(param_1[0x1e] + 0xd0)) & 0x5000000000) != 0)))) {
                pfStack_778 = (float *)SystemCore_MemoryManager;
                DataStructureManager(alStack_1a8,0x30,4,function_1c2890);
                iStack_e8 = 0;
                plocal_var_258 = &ui_system_data_1808_ptr;
                plocal_var_250 = stack_array_240;
                stack_array_240[0] = 0;
                local_var_248 = 9;
                strcpy_s(stack_array_240,0xb,&ui_system_data_1672_ptr);
                lVar17 = (int64_t)iStack_e8;
                puVar16 = &system_buffer_ptr;
                if (plocal_var_250 != (void *)0x0) {
                  puVar16 = plocal_var_250;
                }
                (**(code **)(alStack_1a8[lVar17 * 6] + 0x10))(alStack_1a8 + lVar17 * 6,puVar16);
                afStack_188[lVar17 * 0xc] = -NAN;
                afStack_188[lVar17 * 0xc + 1] = 1.0;
                stack_array_180[lVar17 * 0x30] = 0;
                iStack_e8 = iStack_e8 + 1;
                plocal_var_258 = &system_state_ptr;
                lVar17 = param_1[0x1e];
                if (*(int *)((int64_t)*(int *)(lVar17 + 0xf0) * 0xa0 + 0x5c +
                            *(int64_t *)(lVar17 + 0xd0)) == 0x12) {
                  fVar26 = *(float *)((int64_t)param_1 + 0x5c) -
                           *(float *)((int64_t)param_1 + 0x6c);
                  fVar29 = *(float *)(param_1 + 0xb) - *(float *)(param_1 + 0xd);
                  fVar26 = SQRT(fVar29 * fVar29 + fVar26 * fVar26 +
                                (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xe)) *
                                (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xe))) *
                           (1.0 / fStack_734) * 0.033333335;
                  if (1.0 <= fVar26) {
                    fVar26 = 1.0;
                  }
                  plocal_var_278 = &ui_system_data_1856_ptr;
                  plocal_var_270 = stack_array_260;
                  stack_array_260[0] = 0;
                  local_var_268 = 5;
                  strcpy_s(stack_array_260,7,&ui_system_data_1664_ptr);
                  lVar17 = (int64_t)iStack_e8;
                  puVar16 = &system_buffer_ptr;
                  if (plocal_var_270 != (void *)0x0) {
                    puVar16 = plocal_var_270;
                  }
                  (**(code **)(alStack_1a8[lVar17 * 6] + 0x10))(alStack_1a8 + lVar17 * 6,puVar16);
                  afStack_188[lVar17 * 0xc] = -NAN;
                  afStack_188[lVar17 * 0xc + 1] = fVar26;
                  stack_array_180[lVar17 * 0x30] = 1;
                  iStack_e8 = iStack_e8 + 1;
                  plocal_var_278 = &system_state_ptr;
                  lVar17 = param_1[0x1e];
                }
                fStack_6f8 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
                fStack_6fc = *(float *)((int64_t)param_1 + 0x7c) +
                             *(float *)((int64_t)param_1 + 0x5c);
                fStack_700 = *(float *)(param_1 + 0xf) + *(float *)(param_1 + 0xb);
                local_var_6f4 = 0x7f7fffff;
                plStack_768 = alStack_1a8;
                pfStack_778 = &fStack_700;
                function_4f8630(param_1[2],(int)param_1[0x54],lVar17,pfVar13[6]);
                SystemDataValidator(alStack_1a8,0x30,4,SystemCore_MemoryManager);
              }
            }
            break;
          }
          uVar19 = (uint64_t)local_var_73c;
        }
        uVar22 = uVar22 + 1;
        pfVar13 = pfVar13 + 0x10;
      } while ((int64_t)uVar22 < lStack_628);
    }
    *(int32_t *)((int64_t)param_1 + 0xbd4) = 0;
    if (((((*(char *)((int64_t)param_1 + 0x3d2) != '\0') &&
          (pfVar13 = (float *)(**(code **)(*(int64_t *)param_1[0x1d] + 0xa0))
                                        ((int64_t *)param_1[0x1d],stack_array_3e8),
          ABS(*pfVar13) < 0.01)) && (ABS(pfVar13[1]) < 0.01)) &&
        ((ABS(pfVar13[2]) < 0.01 &&
         (pfVar13 = (float *)(**(code **)(*(int64_t *)param_1[0x1d] + 0xb0))
                                       ((int64_t *)param_1[0x1d],stack_array_3d8), ABS(*pfVar13) < 0.01
         )))) && ((ABS(pfVar13[1]) < 0.01 && (ABS(pfVar13[2]) < 0.01)))) {
      function_5828f0(param_1);
      goto LAB_180584d0b;
    }
    if (cVar14 != '\0') goto LAB_180584d0b;
  }
  if (*(char *)((int64_t)param_1 + 0x3d2) == '\0') {
    function_585590(param_1);
  }
LAB_180584d0b:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_798);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address