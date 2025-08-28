#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part185.c - 3 个函数

// 函数: void FUN_18016bdb0(longlong ***param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_18016bdb0(longlong ***param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4,
                  uint64_t param_5)

{
  int *piVar1;
  uint64_t *puVar2;
  uint uVar3;
  longlong ***ppplVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong ****pppplVar12;
  uint64_t *puVar13;
  void *puVar14;
  void *puVar15;
  longlong ***ppplVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong **pplVar20;
  longlong *plVar21;
  longlong ****pppplStackX_8;
  longlong ****pppplStackX_10;
  uint64_t *puStackX_18;
  uint64_t *puStackX_20;
  int32_t uVar22;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  void *puStack_c8;
  longlong lStack_c0;
  int iStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_90;
  longlong ****pppplStack_88;
  uint64_t uStack_80;
  longlong ****pppplStack_78;
  
  uStack_80 = 0xfffffffffffffffe;
  puStackX_18 = param_3;
  puStackX_20 = param_4;
  uVar8 = FUN_180628ca0();
  FUN_180627ae0(&puStack_c8,uVar8);
  lVar17 = _DAT_180c8a9b0;
  cVar6 = *(char *)(param_1 + 0xc);
  *(int32_t *)(_DAT_180c8a9b0 + 0x1c04) = 0x44200000;
  *(int32_t *)(lVar17 + 0x1c08) = 0x43f00000;
  *(int32_t *)(lVar17 + 0x1bd4) = 4;
  puVar14 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar14 = *(void **)(param_2 + 8);
  }
  cVar6 = FUN_1801299b0(puVar14,&DAT_180c82862,-(uint)(cVar6 != '\0') & 0x2020);
  lVar17 = _DAT_180c8a9b0;
  iVar19 = 0;
  if (cVar6 == '\0') {
    FUN_18012cfe0();
  }
  else {
    pppplStackX_8 =
         (longlong ****)
         ((ulonglong)
          (uint)(*(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660) +
                 *(float *)(_DAT_180c8a9b0 + 0x19f8) + *(float *)(_DAT_180c8a9b0 + 0x1670)) << 0x20
         ^ 0x8000000000000000);
    *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
    iVar7 = FUN_180121250(&UNK_180a088d8,0,
                          *(int32_t *)
                           (*(longlong *)(*(longlong *)(lVar17 + 0x1af8) + 0x220) + -4 +
                           (longlong)*(int *)(*(longlong *)(lVar17 + 0x1af8) + 0x218) * 4));
    if (*(int *)(lVar17 + 0x1b2c) == iVar7) {
      *(int *)(lVar17 + 0x1b34) = iVar7;
    }
    if (*(int *)(lVar17 + 0x1b30) == iVar7) {
      *(int8_t *)(lVar17 + 0x1b3f) = 1;
    }
    uVar22 = 0x800;
    FUN_1801283f0(&UNK_180a088d8,iVar7,&pppplStackX_8);
    lVar17 = _DAT_180c8a9b0;
    iVar7 = FUN_180121250(&UNK_180a06510,0,
                          *(int32_t *)
                           (*(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x220) + -4 +
                           (longlong)*(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218) * 4));
    if (*(int *)(lVar17 + 0x1b2c) == iVar7) {
      *(int *)(lVar17 + 0x1b34) = iVar7;
    }
    if (*(int *)(lVar17 + 0x1b30) == iVar7) {
      *(int8_t *)(lVar17 + 0x1b3f) = 1;
    }
    if ((*(char *)(lVar17 + 0x41b) != '\0') && (cVar6 = FUN_18012dd30(), cVar6 != '\0')) {
      FUN_18012eb50(iVar7);
    }
    cVar6 = FUN_18012eee0(iVar7,0x141);
    if (cVar6 != '\0') {
      pppplStackX_8 = (longlong ****)0x0;
      cVar6 = FUN_180119960(&UNK_180a088f4,0,0,&pppplStackX_8,uVar22);
      if (cVar6 != '\0') {
        ppplVar4 = (longlong ***)param_1[1];
        ppplVar16 = (longlong ***)*param_1;
        pppplStackX_8 = (longlong ****)ppplVar16;
        if (ppplVar16 != ppplVar4) {
          do {
            pppplStackX_10 = (longlong ****)(ppplVar16 + 1);
            *pppplStackX_10 = (longlong ***)&UNK_180a3c3e0;
            if (ppplVar16[2] != (longlong **)0x0) {
              pppplStackX_8 = (longlong ****)ppplVar16;
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            ppplVar16[2] = (longlong **)0x0;
            *(int32_t *)(ppplVar16 + 4) = 0;
            *pppplStackX_10 = (longlong ***)&UNK_18098bcb0;
            pppplStackX_8 = (longlong ****)(ppplVar16 + 5);
            ppplVar16 = (longlong ***)pppplStackX_8;
          } while (pppplStackX_8 != (longlong ****)ppplVar4);
          ppplVar16 = (longlong ***)*param_1;
          param_3 = puStackX_18;
        }
        param_1[1] = (longlong **)ppplVar16;
        *(int8_t *)((longlong)param_1 + 0x72) = 1;
      }
      FUN_18012f0c0();
    }
    lVar17 = _DAT_180c8a9b0;
    uStack_d8._4_4_ = *(int32_t *)(_DAT_180c8a9b0 + 0x166c);
    uStack_d0 = *(int32_t *)(_DAT_180c8a9b0 + 0x1670);
    uStack_d8._0_4_ = 0xd;
    FUN_18013e000(_DAT_180c8a9b0 + 0x1b90,&uStack_d8);
    *(int32_t *)(lVar17 + 0x166c) = 0x40800000;
    *(int32_t *)(lVar17 + 0x1670) = 0x3f800000;
    pplVar20 = *param_1;
    lVar17 = (longlong)param_1[1] - (longlong)pplVar20 >> 0x3f;
    if (((longlong)param_1[1] - (longlong)pplVar20) / 0x28 + lVar17 != lVar17) {
      uStack_cc = 0x3f800000;
      lVar17 = 0;
      do {
        uStack_d8._0_4_ = 0x3f800000;
        uStack_d8._4_4_ = 0x3f800000;
        uStack_d0 = 0x3f800000;
        if (*(int *)(lVar17 + (longlong)pplVar20) == 4) {
LAB_18016c134:
          uStack_d8._4_4_ = 0x3ecccccd;
          uStack_d0 = 0x3ecccccd;
        }
        else {
          puVar14 = *(void **)(lVar17 + 0x10 + (longlong)pplVar20);
          puVar15 = &DAT_18098bc73;
          if (puVar14 != (void *)0x0) {
            puVar15 = puVar14;
          }
          lVar9 = strstr(puVar15,&UNK_180a08850);
          if (lVar9 != 0) goto LAB_18016c134;
          iVar7 = *(int *)(lVar17 + (longlong)pplVar20);
          if (iVar7 == 3) {
            uStack_d8._4_4_ = 0x3f47ae14;
            uStack_d0 = 0x3f147ae1;
          }
          else if (iVar7 == 2) {
            uStack_d8._0_4_ = 0x3f47ae14;
            uStack_d8._4_4_ = 0x3f47ae14;
          }
          else if (iVar7 == 1) {
            uStack_d8._0_4_ = 0x3ecccccd;
            uStack_d8._4_4_ = 0x3f47ae14;
            uStack_d0 = 0;
          }
        }
        lVar9 = _DAT_180c8a9b0;
        if (*(char *)((longlong)param_1 + 0x72) != '\0') {
          *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
          lVar10 = *(longlong *)(lVar9 + 0x1af8);
          *(int8_t *)(lVar10 + 0xb1) = 1;
          lVar9 = *(longlong *)(lVar9 + 0x1af8);
          *(float *)(lVar9 + 0x98) =
               (float)(int)((*(float *)(lVar10 + 0x10c) - *(float *)(lVar10 + 0x44)) +
                            *(float *)(lVar10 + 0x130) * 0.5 + *(float *)(lVar9 + 0x90));
          *(int32_t *)(lVar9 + 0xa0) = 0x3f000000;
          *(int8_t *)((longlong)param_1 + 0x72) = 0;
        }
        lVar9 = _DAT_180c8a9b0;
        uStack_a8 = 0;
        uStack_a4 = (int32_t)*(uint64_t *)(_DAT_180c8a9b0 + 0x16c8);
        uStack_a0 = (int32_t)((ulonglong)*(uint64_t *)(_DAT_180c8a9b0 + 0x16c8) >> 0x20);
        uStack_9c = (int32_t)*(uint64_t *)(_DAT_180c8a9b0 + 0x16d0);
        uStack_98 = (int32_t)((ulonglong)*(uint64_t *)(_DAT_180c8a9b0 + 0x16d0) >> 0x20);
        FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_a8);
        *(ulonglong *)(lVar9 + 0x16c8) = CONCAT44(uStack_d8._4_4_,(int32_t)uStack_d8);
        *(ulonglong *)(lVar9 + 0x16d0) = CONCAT44(uStack_cc,uStack_d0);
        puVar14 = *(void **)(lVar17 + 0x10 + (longlong)pplVar20);
        puVar15 = &DAT_18098bc73;
        if (puVar14 != (void *)0x0) {
          puVar15 = puVar14;
        }
        FUN_18010e8a0(puVar15,0);
        lVar9 = _DAT_180c8a9b0;
        puVar13 = (uint64_t *)
                  (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
                  (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
        uVar8 = puVar13[1];
        puVar2 = (uint64_t *)
                 (_DAT_180c8a9b0 + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                         (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
        *puVar2 = *puVar13;
        puVar2[1] = uVar8;
        *(int *)(lVar9 + 0x1b80) = *(int *)(lVar9 + 0x1b80) + -1;
        iVar19 = iVar19 + 1;
        lVar17 = lVar17 + 0x28;
        pplVar20 = *param_1;
        param_3 = puStackX_18;
      } while ((ulonglong)(longlong)iVar19 <
               (ulonglong)(((longlong)param_1[1] - (longlong)pplVar20) / 0x28));
    }
    lVar9 = _DAT_180c8a9b0;
    lVar10 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
    lVar17 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
    lVar11 = (longlong)*(int *)(lVar17 + -0xc + lVar10 * 0xc);
    uVar18 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar11 * 0xc);
    if (*(int *)(&UNK_18098d180 + lVar11 * 0xc) == 4) {
      if (*(int *)(&UNK_18098d184 + lVar11 * 0xc) == 1) {
        *(int32_t *)(uVar18 + 0x1628 + _DAT_180c8a9b0) =
             *(int32_t *)(lVar17 + -8 + lVar10 * 0xc);
      }
      else if (*(int *)(&UNK_18098d184 + lVar11 * 0xc) == 2) {
        *(int32_t *)(uVar18 + 0x1628 + _DAT_180c8a9b0) =
             *(int32_t *)(lVar17 + -8 + lVar10 * 0xc);
        *(int32_t *)(uVar18 + 0x162c + lVar9) = *(int32_t *)(lVar17 + -4 + lVar10 * 0xc);
      }
    }
    piVar1 = (int *)(lVar9 + 0x1b90);
    *piVar1 = *piVar1 + -1;
    FUN_1801285e0();
    pppplStackX_8 = (longlong ****)0x0;
    cVar6 = FUN_1801166f0(&UNK_180a088ec,(longlong)param_1 + 0x74,0x400,&pppplStackX_8,0x3e0,
                          &UNK_18016cd70,param_1);
    lVar17 = _DAT_180c8a9b0;
    if (cVar6 != '\0') {
      *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
      lVar17 = *(longlong *)(lVar17 + 0x1af8);
      *(int32_t *)(lVar17 + 0x400) = *(int32_t *)(lVar17 + 0x3f0);
      *(int32_t *)(lVar17 + 0x404) = 0x7fffffff;
      *(int8_t *)((longlong)param_1 + 0x71) = 1;
      if ((*(char *)(param_1 + 0xc) != '\0') && (*(int *)((longlong)param_1 + 100) != -1)) {
        plVar21 = (longlong *)&DAT_18098bc73;
        if (param_1[4][(longlong)*(int *)((longlong)param_1 + 100) * 4 + 1] != (longlong *)0x0) {
          plVar21 = param_1[4][(longlong)*(int *)((longlong)param_1 + 100) * 4 + 1];
        }
        lVar17 = -1;
        do {
          lVar9 = lVar17;
          lVar17 = lVar9 + 1;
        } while (*(char *)((longlong)plVar21 + lVar17) != '\0');
                    // WARNING: Subroutine does not return
        memcpy((longlong)param_1 + 0x74,plVar21,lVar9 + 2);
      }
      lVar17 = FUN_180627910(&uStack_a8,(longlong)param_1 + 0x74);
      if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      iStack_b8 = *(int *)(lVar17 + 0x10);
      lStack_c0 = *(longlong *)(lVar17 + 8);
      uStack_b0 = *(uint64_t *)(lVar17 + 0x18);
      *(int32_t *)(lVar17 + 0x10) = 0;
      *(uint64_t *)(lVar17 + 8) = 0;
      *(uint64_t *)(lVar17 + 0x18) = 0;
      uStack_a8 = 0x80a3c3e0;
      uStack_a4 = 1;
      if (CONCAT44(uStack_9c,uStack_a0) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_90 = 0;
      uStack_a8 = 0x8098bcb0;
      uStack_a4 = 1;
      *(int8_t *)((longlong)param_1 + 0x72) = 1;
      *(int8_t *)((longlong)param_1 + 0x74) = 0;
      lVar17 = _DAT_180c8a9b0;
      *(int8_t *)(param_1 + 0xc) = 0;
      *(int32_t *)((longlong)param_1 + 100) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0xd) != -1) {
      *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
      lVar9 = *(longlong *)(lVar17 + 0x1af8);
      *(int32_t *)(lVar9 + 0x400) = *(int32_t *)(lVar9 + 0x3f0);
      *(int32_t *)(lVar9 + 0x404) = 0x7fffffff;
      *(int8_t *)(param_1 + 0xc) = 0;
    }
    *param_3 = *(uint64_t *)(*(longlong *)(lVar17 + 0x1af8) + 0x14c);
    if ((((*(longlong *)(lVar17 + 0x1c98) != 0) &&
         (*(longlong *)(*(longlong *)(lVar17 + 0x1c98) + 0x3a8) ==
          *(longlong *)(*(longlong *)(lVar17 + 0x1af8) + 0x3a8))) &&
        (*(int *)(lVar17 + 0x1b2c) == 0)) && (*(float *)(lVar17 + 0x424) != 0.0)) {
      *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
      lVar9 = *(longlong *)(lVar17 + 0x1af8);
      *(int32_t *)(lVar9 + 0x400) = *(int32_t *)(lVar9 + 0x3f0);
      *(int32_t *)(lVar9 + 0x404) = 0x7fffffff;
    }
    *puStackX_20 = CONCAT44((*(float *)(lVar17 + 0x19f8) + *(float *)(lVar17 + 0x1670)) * 6.0 +
                            *(float *)(lVar17 + 0x1660) * 12.0,
                            (*(float *)(*(longlong *)(lVar17 + 0x1af8) + 0x154) -
                            *(float *)(*(longlong *)(lVar17 + 0x1af8) + 0x14c)) - 80.0);
    *(float *)((longlong)param_3 + 4) =
         (*(float *)(*(longlong *)(lVar17 + 0x1af8) + 0x158) -
         *(float *)(*(longlong *)(lVar17 + 0x1af8) + 0x150)) + *(float *)((longlong)param_3 + 4);
    *(bool *)param_5 =
         *(longlong *)(lVar17 + 0x1c98) == *(longlong *)(*(longlong *)(lVar17 + 0x1af8) + 0x3a8);
    FUN_18012cfe0();
    iVar19 = _Mtx_unlock(0x180c91970);
    if (iVar19 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar19);
    }
    if (iStack_b8 != 0) {
      pppplVar12 = (longlong ****)FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
      pppplStackX_10 = (longlong ****)&uStack_a8;
      pppplStackX_8 = pppplVar12;
      puVar13 = (uint64_t *)FUN_180627ae0(&uStack_a8,&puStack_c8);
      pppplStack_88 = (longlong ****)puVar13;
      FUN_180049830(pppplVar12);
      *pppplVar12 = (longlong ***)&UNK_180a08928;
      pppplStackX_10 = pppplVar12 + 0x19;
      *pppplStackX_10 = (longlong ***)&UNK_18098bcb0;
      pppplVar12[0x1a] = (longlong ***)0x0;
      *(int32_t *)(pppplVar12 + 0x1b) = 0;
      *pppplStackX_10 = (longlong ***)&UNK_180a3c3e0;
      pppplVar12[0x1c] = (longlong ***)0x0;
      pppplVar12[0x1a] = (longlong ***)0x0;
      *(int32_t *)(pppplVar12 + 0x1b) = 0;
      uVar3 = *(uint *)(puVar13 + 2);
      uVar18 = (ulonglong)uVar3;
      lVar17 = puVar13[1];
      if (lVar17 != 0) {
        FUN_1806277c0(pppplStackX_10,uVar18);
        lVar17 = puVar13[1];
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(pppplVar12[0x1a],lVar17,uVar18);
      }
      *(int32_t *)(pppplVar12 + 0x1b) = 0;
      if (pppplVar12[0x1a] != (longlong ***)0x0) {
        *(int8_t *)(uVar18 + (longlong)pppplVar12[0x1a]) = 0;
      }
      *(int32_t *)((longlong)pppplVar12 + 0xe4) = *(int32_t *)((longlong)puVar13 + 0x1c);
      pppplVar12[0x18] = param_1;
      *puVar13 = &UNK_180a3c3e0;
      if (puVar13[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar13[1] = 0;
      *(int32_t *)(puVar13 + 3) = 0;
      *puVar13 = &UNK_18098bcb0;
      pppplStack_88 = pppplVar12;
      (*(code *)(*pppplVar12)[5])(pppplVar12,lVar17);
      lVar17 = _DAT_180c82868;
      pppplStackX_10 = (longlong ****)&pppplStackX_8;
      pppplStackX_8 = pppplVar12;
      (*(code *)(*pppplVar12)[5])(pppplVar12);
      pppplStack_78 = (longlong ****)&pppplStackX_8;
      puVar13 = (uint64_t *)**(uint64_t **)(lVar17 + 8);
      pcVar5 = *(code **)*puVar13;
      uStack_d8 = &pppplStackX_10;
      pppplStackX_10 = pppplStackX_8;
      if (pppplStackX_8 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_8)[5])();
      }
      (*pcVar5)(puVar13,&pppplStackX_10);
      if (pppplStackX_8 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_8)[7])();
      }
      (*(code *)(*pppplVar12)[7])(pppplVar12);
    }
    iVar19 = _Mtx_lock(0x180c91970);
    if (iVar19 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar19);
    }
  }
  puStack_c8 = &UNK_180a3c3e0;
  if (lStack_c0 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18016c7a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18016c7a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  int iVar11;
  int16_t auStackX_8 [4];
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  puStack_50 = (uint64_t *)0x0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  uStack_38 = 3;
  auStackX_8[0] = 0x3b;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_180057980(param_1 + 200,&puStack_50,auStackX_8,param_4,0xfffffffffffffffe);
  }
  puVar5 = puStack_48;
  puVar4 = puStack_50;
  uVar10 = (longlong)puStack_48 - (longlong)puStack_50 >> 5;
  iVar11 = 0;
  puVar3 = puVar4;
  if (uVar10 != 0) {
    uVar7 = 0;
    puVar9 = puStack_50;
    do {
      puVar1 = puVar4 + uVar7 * 4;
      FUN_180629c00(puVar1,10);
      FUN_180629c00(puVar1,0x20);
      iVar2 = *(int *)(puVar9 + 2);
      if (iVar2 != 0) {
        iVar8 = 0;
        if (0 < iVar2 + -1) {
          lVar6 = (longlong)(iVar2 + -1);
          do {
            if (*(char *)(puVar9[1] + lVar6) != ' ') break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + -1;
          } while (0 < lVar6);
        }
        *(int *)(puVar9 + 2) = iVar2 - iVar8;
        *(int8_t *)((ulonglong)(uint)(iVar2 - iVar8) + puVar9[1]) = 0;
      }
      FUN_180629b30(puVar1);
      FUN_18016a8b0(*(uint64_t *)(param_1 + 0xc0),puVar1);
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 4;
      uVar7 = (ulonglong)iVar11;
    } while (uVar7 < uVar10);
  }
  for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
    (**(code **)*puVar3)(puVar3,0);
  }
  if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  return;
}



longlong FUN_18016c8e0(longlong param_1,ulonglong param_2)

{
  *(uint64_t *)(param_1 + 200) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 200) = &UNK_18098bcb0;
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016c970(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
void FUN_18016c970(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint *puVar1;
  int *piVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  void *puVar9;
  longlong lVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  void *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  int32_t uVar19;
  ulonglong uVar20;
  uint64_t uStackX_8;
  int32_t uStack_68;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  
  FUN_18012d9c0(2,0);
  lVar17 = _DAT_180c8a9b0;
  uVar18 = 0;
  uVar19 = 0;
  *(uint64_t *)(_DAT_180c8a9b0 + 0x1bf4) = *param_2;
  *(uint64_t *)(lVar17 + 0x1bfc) = 0;
  *(int32_t *)(lVar17 + 0x1bd0) = 1;
  *(int8_t *)(lVar17 + 0x1c14) = 1;
  *(uint64_t *)(lVar17 + 0x1c04) = *param_3;
  *(int32_t *)(lVar17 + 0x1bd4) = 1;
  FUN_1801299b0(&UNK_180a08910,0,0x907);
  lVar17 = _DAT_180c8a9b0;
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1af8);
  puVar1 = (uint *)(lVar17 + 0x1a8);
  *puVar1 = *puVar1 | 1;
  FUN_18011d940(lVar17 + 0x1b8);
  lVar17 = _DAT_180c8a9b0;
  if (*(char *)(param_1 + 0x74) == '\0') {
    uStack_64 = *(uint64_t *)(_DAT_180c8a9b0 + 0x1718);
    uStack_5c = *(uint64_t *)(_DAT_180c8a9b0 + 0x1720);
    uStack_68 = 5;
    FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_68);
    *(uint64_t *)(lVar17 + 0x1718) = 0x3f8000003f800000;
    *(uint64_t *)(lVar17 + 0x1720) = 0x3f8000003f800000;
    FUN_18010f010(&UNK_180a08900);
    lVar17 = _DAT_180c8a9b0;
    puVar3 = (uint64_t *)
             (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
             (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
    uVar11 = puVar3[1];
    puVar4 = (uint64_t *)
             (_DAT_180c8a9b0 + 0x16c8 +
             (longlong)
             *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                     (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    *(int *)(lVar17 + 0x1b80) = *(int *)(lVar17 + 0x1b80) + -1;
  }
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5 != 0) {
    uStackX_8 = 0;
    uVar20 = uVar18;
    do {
      iVar8 = *(int *)(param_1 + 100);
      iVar13 = (int)uVar18;
      if (iVar8 == iVar13) {
        uStack_64 = *(uint64_t *)(lVar17 + 0x1718);
        uStack_5c = *(uint64_t *)(lVar17 + 0x1720);
        uStack_68 = 5;
        FUN_18013e100(lVar17 + 0x1b80,&uStack_68);
        *(uint64_t *)(lVar17 + 0x1718) = 0x3f800000;
        *(uint64_t *)(lVar17 + 0x1720) = 0x3f80000000000000;
      }
      FUN_18012e2d0(uVar18);
      puVar9 = *(void **)(*(longlong *)(param_1 + 0x20) + 8 + uVar20);
      puVar16 = &DAT_18098bc73;
      if (puVar9 != (void *)0x0) {
        puVar16 = puVar9;
      }
      cVar12 = FUN_180119960(puVar16,iVar8 == iVar13,0,&uStackX_8);
      if (cVar12 != '\0') {
        *(int *)(param_1 + 0x68) = iVar13;
      }
      lVar17 = _DAT_180c8a9b0;
      piVar2 = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
      *piVar2 = *piVar2 + -1;
      if (iVar8 == iVar13) {
        if (*(char *)(param_1 + 0x70) != '\0') {
          *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
          lVar10 = *(longlong *)(lVar17 + 0x1af8);
          fVar5 = *(float *)(lVar10 + 0x130);
          fVar6 = *(float *)(lVar10 + 0x10c);
          fVar7 = *(float *)(lVar10 + 0x44);
          *(int8_t *)(lVar10 + 0xb1) = 1;
          lVar10 = *(longlong *)(lVar17 + 0x1af8);
          *(int32_t *)(lVar10 + 0xa0) = 0x3f000000;
          *(float *)(lVar10 + 0x98) =
               (float)(int)((fVar6 - fVar7) + fVar5 * 0.5 + *(float *)(lVar10 + 0x90));
          *(int8_t *)(param_1 + 0x70) = 0;
        }
        puVar3 = (uint64_t *)
                 (*(longlong *)(lVar17 + 0x1b88) + -0x10 +
                 (longlong)*(int *)(lVar17 + 0x1b80) * 0x14);
        uVar11 = puVar3[1];
        puVar4 = (uint64_t *)
                 (lVar17 + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(lVar17 + 0x1b88) + -0x14 +
                         (longlong)*(int *)(lVar17 + 0x1b80) * 0x14) * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        *(int *)(lVar17 + 0x1b80) = *(int *)(lVar17 + 0x1b80) + -1;
      }
      uVar18 = (ulonglong)(iVar13 + 1U);
      uVar20 = uVar20 + 0x20;
    } while ((ulonglong)(longlong)(int)(iVar13 + 1U) <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5));
  }
  *(bool *)param_4 =
       *(longlong *)(lVar17 + 0x1c98) == *(longlong *)(*(longlong *)(lVar17 + 0x1af8) + 0x3a8);
  *(int8_t *)(*(longlong *)(lVar17 + 0x1af8) + 0xb1) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1af8);
  iVar8 = *(int *)(lVar17 + 0x1b8);
  iVar13 = iVar8 + -1;
  *(int *)(lVar17 + 0x1b8) = iVar13;
  if (iVar13 != 0) {
    uVar19 = *(int32_t *)(*(longlong *)(lVar17 + 0x1c0) + -8 + (longlong)iVar8 * 4);
  }
  *(int32_t *)(lVar17 + 0x1a8) = uVar19;
  FUN_18012cfe0();
  lVar10 = _DAT_180c8a9b0;
  lVar14 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  lVar17 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  lVar15 = (longlong)*(int *)(lVar17 + -0xc + lVar14 * 0xc);
  uVar18 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar15 * 0xc);
  if (*(int *)(&UNK_18098d180 + lVar15 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + lVar15 * 0xc) == 1) {
      *(int32_t *)(uVar18 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar17 + -8 + lVar14 * 0xc);
      *(int *)(lVar10 + 0x1b90) = *(int *)(lVar10 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + lVar15 * 0xc) == 2) {
      *(int32_t *)(uVar18 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(lVar17 + -8 + lVar14 * 0xc);
      *(int32_t *)(uVar18 + 0x162c + lVar10) = *(int32_t *)(lVar17 + -4 + lVar14 * 0xc);
    }
  }
  *(int *)(lVar10 + 0x1b90) = *(int *)(lVar10 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



