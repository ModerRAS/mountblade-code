#include "TaleWorlds.Native.Split.h"

// 99_part_01_part018.c - 3 个函数

// 函数: void FUN_1800b1230(longlong param_1,longlong ***param_2,longlong param_3,int *param_4)
void FUN_1800b1230(longlong param_1,longlong ***param_2,longlong param_3,int *param_4)

{
  double *pdVar1;
  code *pcVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong **pplVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined *puVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  longlong *plVar31;
  longlong lVar32;
  undefined1 auStack_548 [32];
  uint uStack_528;
  longlong ***ppplStack_520;
  longlong *plStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f0;
  longlong lStack_4e8;
  undefined8 *puStack_4e0;
  longlong **pplStack_4d8;
  longlong **pplStack_4d0;
  longlong *plStack_4c8;
  longlong **pplStack_4c0;
  longlong **pplStack_4b8;
  longlong lStack_4b0;
  longlong *plStack_4a8;
  longlong *plStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  longlong **pplStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined8 uStack_438;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  int iStack_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  undefined8 uStack_3f8;
  longlong *plStack_3e8;
  undefined1 *puStack_3e0;
  undefined4 uStack_3d8;
  undefined1 auStack_3d0 [128];
  longlong *aplStack_350 [19];
  longlong *aplStack_2b8 [20];
  longlong *plStack_218;
  undefined1 *puStack_210;
  undefined4 uStack_208;
  undefined1 auStack_200 [128];
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [128];
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong *plStack_60;
  ulonglong uStack_58;
  
  uStack_480 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_548;
  *param_2 = (longlong **)0x0;
  uStack_4f0 = 1;
  puVar29 = (undefined8 *)(param_1 + 0x770);
  ppplStack_520 = param_2;
  lStack_4e8 = param_3;
  puStack_4e0 = puVar29;
  puStack_498 = puVar29;
  pplStack_478 = (longlong **)param_2;
  iVar16 = _Mtx_lock(puVar29);
  if (iVar16 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar16);
  }
  puStack_510 = (undefined8 *)0x0;
  puStack_508 = (undefined8 *)0x0;
  puStack_500 = (undefined8 *)0x0;
  uStack_4f8 = 3;
  uVar25 = 0;
  uStack_528 = 0;
  plVar31 = (longlong *)(param_1 + 0x6c0);
  lVar19 = *plVar31;
  plStack_4a8 = plVar31;
  if (*(longlong *)(param_1 + 0x6c8) - lVar19 >> 3 != 0) {
    uVar28 = 0;
    do {
      puVar24 = puStack_508;
      puVar29 = puStack_510;
      uVar30 = (uint)uVar25;
      if (*(int *)(*(longlong *)(lVar19 + uVar28 * 8) + 8) == 1) {
        uStack_490 = *(longlong *)(*plVar31 + uVar28 * 8);
        uStack_488 = *(undefined8 *)(uStack_490 + 0x270);
        if (puStack_508 < puStack_500) {
          uStack_490._4_4_ = (undefined4)((ulonglong)uStack_490 >> 0x20);
          uStack_488._4_4_ = (undefined4)((ulonglong)uStack_488 >> 0x20);
          *(undefined4 *)puStack_508 = (undefined4)uStack_490;
          *(undefined4 *)((longlong)puStack_508 + 4) = uStack_490._4_4_;
          *(undefined4 *)(puStack_508 + 1) = (undefined4)uStack_488;
          *(undefined4 *)((longlong)puStack_508 + 0xc) = uStack_488._4_4_;
          puStack_508 = puStack_508 + 2;
        }
        else {
          lStack_4b0 = (longlong)puStack_508 - (longlong)puStack_510;
          if (lStack_4b0 >> 4 == 0) {
            lVar19 = 1;
LAB_1800b1376:
            puVar18 = (undefined8 *)
                      FUN_18062b420(_DAT_180c8ed18,lVar19 << 4,CONCAT71((int7)(uVar25 >> 8),3));
          }
          else {
            lVar19 = (lStack_4b0 >> 4) * 2;
            if (lVar19 != 0) goto LAB_1800b1376;
            puVar18 = (undefined8 *)0x0;
          }
          if (puVar29 != puVar24) {
                    // WARNING: Subroutine does not return
            memmove(puVar18,puVar29,lStack_4b0);
          }
          *(undefined4 *)puVar18 = (undefined4)uStack_490;
          *(undefined4 *)((longlong)puVar18 + 4) = uStack_490._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_488;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_488._4_4_;
          if (puVar29 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar29);
          }
          puStack_500 = puVar18 + lVar19 * 2;
          plVar31 = plStack_4a8;
          puStack_510 = puVar18;
          puStack_508 = puVar18 + 2;
          uVar30 = uStack_528;
        }
      }
      uStack_528 = uVar30 + 1;
      uVar25 = (ulonglong)uStack_528;
      lVar19 = *plVar31;
      uVar28 = (ulonglong)uStack_528;
      puVar29 = puStack_4e0;
      param_2 = ppplStack_520;
    } while (uVar28 < (ulonglong)(plVar31[1] - lVar19 >> 3));
  }
  puVar18 = puStack_508;
  puVar24 = puStack_510;
  if (puStack_510 != puStack_508) {
    iVar16 = 0;
    lVar32 = (longlong)puStack_508 - (longlong)puStack_510 >> 4;
    for (lVar19 = lVar32; lVar19 != 0; lVar19 = lVar19 >> 1) {
      iVar16 = iVar16 + 1;
    }
    FUN_1800b95d0(puStack_510,puStack_508,(longlong)(iVar16 + -1) * 2,0);
    if (lVar32 < 0x1d) {
      FUN_1800b9400();
    }
    else {
      puVar24 = puVar24 + 0x38;
      FUN_1800b9400();
      for (; puVar24 != puVar18; puVar24 = puVar24 + 2) {
        uVar21 = *puVar24;
        dVar4 = (double)puVar24[1];
        puVar23 = puVar24;
        puVar3 = puVar24;
        if ((double)puVar24[-1] <= dVar4 && dVar4 != (double)puVar24[-1]) {
          do {
            uVar27 = *(undefined4 *)((longlong)puVar3 + -0xc);
            uVar5 = *(undefined4 *)(puVar3 + -1);
            uVar6 = *(undefined4 *)((longlong)puVar3 + -4);
            *(undefined4 *)puVar23 = *(undefined4 *)(puVar3 + -2);
            *(undefined4 *)((longlong)puVar23 + 4) = uVar27;
            *(undefined4 *)(puVar23 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar6;
            puVar23 = puVar23 + -2;
            pdVar1 = (double *)(puVar3 + -3);
            puVar3 = puVar3 + -2;
          } while (*pdVar1 <= dVar4 && dVar4 != *pdVar1);
        }
        *puVar23 = uVar21;
        puVar23[1] = dVar4;
      }
    }
  }
  uVar25 = 0;
  uVar28 = (longlong)puVar18 - (longlong)puStack_510 >> 4;
  if (uVar28 != 0) {
    do {
      plVar22 = (longlong *)puStack_510[uVar25 * 2];
      if ((((((((int)plVar22[0x21] == *param_4) &&
              (*(int *)((longlong)plVar22 + 0x10c) == param_4[1])) &&
             ((int)plVar22[0x22] == param_4[2])) &&
            ((*(int *)((longlong)plVar22 + 0x114) == param_4[3] &&
             ((int)plVar22[0x23] == param_4[4])))) &&
           ((*(char *)((longlong)plVar22 + 0x12d) == *(char *)((longlong)param_4 + 0x25) &&
            ((*(char *)((longlong)plVar22 + 0x12e) == *(char *)((longlong)param_4 + 0x26) &&
             (*(char *)((longlong)plVar22 + 300) == (char)param_4[9])))))) &&
          (*(char *)((longlong)plVar22 + 0x12f) == *(char *)((longlong)param_4 + 0x27))) &&
         ((((((char)plVar22[0x26] == (char)param_4[10] &&
             (*(char *)((longlong)plVar22 + 0x131) == *(char *)((longlong)param_4 + 0x29))) &&
            (*(char *)((longlong)plVar22 + 0x132) == *(char *)((longlong)param_4 + 0x2a))) &&
           (((ABS(*(float *)((longlong)plVar22 + 0x11c) - (float)param_4[5]) < 0.01 &&
             (ABS(*(float *)(plVar22 + 0x24) - (float)param_4[6]) < 0.01)) &&
            ((ABS(*(float *)((longlong)plVar22 + 0x124) - (float)param_4[7]) < 0.01 &&
             ((ABS(*(float *)(plVar22 + 0x25) - (float)param_4[8]) < 0.01 &&
              (*(char *)((longlong)plVar22 + 0x133) == *(char *)((longlong)param_4 + 0x2b)))))))))
          && (((int)plVar22[0x27] == param_4[0xc] && ((int)plVar22[0x3d] == param_4[0xc])))))) {
        plStack_4a0 = plVar22;
        (**(code **)(*plVar22 + 0x28))(plVar22);
        plStack_4a0 = (longlong *)*param_2;
        *param_2 = (longlong **)plVar22;
        if (plStack_4a0 != (longlong *)0x0) {
          (**(code **)(*plStack_4a0 + 0x38))();
        }
        lVar19 = lStack_4e8;
        puVar26 = &DAT_18098bc73;
        if (*(undefined **)(lStack_4e8 + 8) != (undefined *)0x0) {
          puVar26 = *(undefined **)(lStack_4e8 + 8);
        }
        (**(code **)((longlong)(*param_2)[2] + 0x10))(*param_2 + 2,puVar26);
        if ((char)param_4[0xb] == '\0') {
          if ((int)plVar22[0x70] == 0) {
            LOCK();
            *(undefined4 *)(plVar22 + 0x70) = 1;
            UNLOCK();
            iVar16 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
            iVar17 = _Thrd_id();
            if (iVar17 == iVar16) {
              uStack_468 = *(undefined8 *)param_4;
              uStack_460 = *(undefined8 *)(param_4 + 2);
              uStack_458 = *(undefined8 *)(param_4 + 4);
              uStack_450 = *(undefined8 *)(param_4 + 6);
              iStack_448 = param_4[8];
              iStack_444 = param_4[9];
              iStack_440 = param_4[10];
              iStack_43c = param_4[0xb];
              uStack_438 = *(undefined8 *)(param_4 + 0xc);
              FUN_1800a43c0(_DAT_180c86938,&uStack_468,*param_2);
            }
            else {
              ppplStack_520 = (longlong ***)&plStack_218;
              plStack_218 = (longlong *)&UNK_1809fcc28;
              puStack_210 = auStack_200;
              uStack_208 = 0;
              auStack_200[0] = 0;
              uStack_180 = 0x1c;
              uStack_178 = *(undefined8 *)param_4;
              uStack_170 = *(undefined8 *)(param_4 + 2);
              uStack_168 = *(undefined8 *)(param_4 + 4);
              uStack_160 = *(undefined8 *)(param_4 + 6);
              iStack_158 = param_4[8];
              iStack_154 = param_4[9];
              iStack_150 = param_4[10];
              iStack_14c = param_4[0xb];
              uStack_148 = *(undefined8 *)(param_4 + 0xc);
              plStack_140 = (longlong *)*param_2;
              if ((undefined *)*plStack_140 == &UNK_180a14060) {
                LOCK();
                *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)((undefined *)*plStack_140 + 0x28))();
              }
              uVar21 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
              pplVar20 = (longlong **)FUN_18005ce30(uVar21,&plStack_218);
              pplStack_4d8 = pplVar20;
              if (pplVar20 != (longlong **)0x0) {
                (*(code *)(*pplVar20)[5])(pplVar20);
              }
              lVar19 = _DAT_180c82868;
              ppplStack_520 = &pplStack_4d0;
              pplStack_4d0 = pplVar20;
              if (pplVar20 != (longlong **)0x0) {
                (*(code *)(*pplVar20)[5])(pplVar20);
              }
              FUN_18005e370(lVar19,&pplStack_4d0);
              if (pplVar20 != (longlong **)0x0) {
                (*(code *)(*pplVar20)[7])(pplVar20);
              }
              ppplStack_520 = (longlong ***)&plStack_218;
              plStack_218 = (longlong *)&UNK_18098bcb0;
            }
            break;
          }
          if ((int)plVar22[0x70] != 2) break;
          FUN_18023a940(*param_2);
          ppplStack_520 = (longlong ***)aplStack_350;
          puStack_4e0 = (undefined8 *)FUN_180049b30(aplStack_350,lVar19);
        }
        else {
          if ((int)plVar22[0x70] != 2) break;
          FUN_18023a940(*param_2);
          ppplStack_520 = (longlong ***)aplStack_2b8;
          puStack_4e0 = (undefined8 *)FUN_180049b30(aplStack_2b8,lVar19);
        }
        *puStack_4e0 = &UNK_18098bcb0;
        break;
      }
      uVar25 = (ulonglong)((int)uVar25 + 1);
    } while (uVar25 < uVar28);
  }
  if (*param_2 == (longlong **)0x0) {
    uVar27 = 4;
    if (1 < (uint)param_4[2]) {
      uVar27 = 6;
    }
    uVar21 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
    plVar22 = (longlong *)FUN_18023a2e0(uVar21,uVar27);
    if (plVar22 != (longlong *)0x0) {
      pplStack_4c0 = (longlong **)plVar22;
      (**(code **)(*plVar22 + 0x28))(plVar22);
    }
    pplStack_4c0 = *param_2;
    *param_2 = (longlong **)plVar22;
    if (pplStack_4c0 != (longlong **)0x0) {
      (*(code *)(*pplStack_4c0)[7])();
    }
    iVar16 = param_4[1];
    iVar17 = param_4[2];
    iVar7 = param_4[3];
    iVar8 = param_4[4];
    iVar9 = param_4[5];
    iVar10 = param_4[6];
    iVar11 = param_4[7];
    iVar12 = param_4[8];
    iVar13 = param_4[9];
    iVar14 = param_4[10];
    iVar15 = param_4[0xb];
    lVar19 = *(longlong *)(param_4 + 0xc);
    plVar22 = (longlong *)*param_2;
    *(int *)(plVar22 + 0x21) = *param_4;
    *(int *)((longlong)plVar22 + 0x10c) = iVar16;
    *(int *)(plVar22 + 0x22) = iVar17;
    *(int *)((longlong)plVar22 + 0x114) = iVar7;
    *(int *)(plVar22 + 0x23) = iVar8;
    *(int *)((longlong)plVar22 + 0x11c) = iVar9;
    *(int *)(plVar22 + 0x24) = iVar10;
    *(int *)((longlong)plVar22 + 0x124) = iVar11;
    *(int *)(plVar22 + 0x25) = iVar12;
    *(int *)((longlong)plVar22 + 300) = iVar13;
    *(int *)(plVar22 + 0x26) = iVar14;
    *(int *)((longlong)plVar22 + 0x134) = iVar15;
    plVar22[0x27] = lVar19;
    plVar22 = (longlong *)*param_2;
    iVar16 = param_4[1];
    *(short *)((longlong)plVar22 + 0x32c) = (short)*param_4;
    *(short *)((longlong)plVar22 + 0x32e) = (short)iVar16;
    *(short *)((longlong)plVar22 + 0x332) = (short)param_4[2];
    iVar16 = param_4[3];
    *(char *)((longlong)plVar22 + 0x335) = (char)iVar16;
    *(int *)((longlong)plVar22 + 0x35c) = iVar16;
    *(int *)((longlong)plVar22 + 0x324) = param_4[4];
    if ((char)param_4[10] != '\0') {
      *(uint *)(plVar22 + 0x65) = *(uint *)(plVar22 + 0x65) | 0x2000;
    }
    if ((char)param_4[9] != '\0') {
      *(undefined1 *)((longlong)plVar22 + 0x355) = 1;
    }
    puVar26 = &DAT_18098bc73;
    if (*(undefined **)(lStack_4e8 + 8) != (undefined *)0x0) {
      puVar26 = *(undefined **)(lStack_4e8 + 8);
    }
    (**(code **)((longlong)(*param_2)[2] + 0x10))(*param_2 + 2,puVar26);
    if ((char)param_4[0xb] == '\0') {
      LOCK();
      *(undefined4 *)(*param_2 + 0x70) = 1;
      UNLOCK();
      iVar16 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
      iVar17 = _Thrd_id();
      if (iVar17 == iVar16) {
        uStack_428 = *(undefined8 *)param_4;
        uStack_420 = *(undefined8 *)(param_4 + 2);
        uStack_418 = *(undefined8 *)(param_4 + 4);
        uStack_410 = *(undefined8 *)(param_4 + 6);
        iStack_408 = param_4[8];
        iStack_404 = param_4[9];
        iStack_400 = param_4[10];
        iStack_3fc = param_4[0xb];
        uStack_3f8 = *(undefined8 *)(param_4 + 0xc);
        FUN_1800a43c0(_DAT_180c86938,&uStack_428,*param_2);
        pplStack_4b8 = &plStack_3e8;
        plStack_3e8 = (longlong *)&UNK_1809fcc28;
        puStack_3e0 = auStack_3d0;
        auStack_3d0[0] = 0;
        uStack_3d8 = *(undefined4 *)(lStack_4e8 + 0x10);
        puVar26 = &DAT_18098bc73;
        if (*(undefined **)(lStack_4e8 + 8) != (undefined *)0x0) {
          puVar26 = *(undefined **)(lStack_4e8 + 8);
        }
        strcpy_s(auStack_3d0,0x80,puVar26);
        pplStack_4d8 = &plStack_3e8;
      }
      else {
        ppplStack_520 = (longlong ***)&plStack_138;
        plStack_138 = (longlong *)&UNK_1809fcc28;
        puStack_130 = auStack_120;
        uStack_128 = 0;
        auStack_120[0] = 0;
        uStack_a0 = 0x1c;
        uStack_98 = *(undefined8 *)param_4;
        uStack_90 = *(undefined8 *)(param_4 + 2);
        uStack_88 = *(undefined8 *)(param_4 + 4);
        uStack_80 = *(undefined8 *)(param_4 + 6);
        iStack_78 = param_4[8];
        iStack_74 = param_4[9];
        iStack_70 = param_4[10];
        iStack_6c = param_4[0xb];
        uStack_68 = *(undefined8 *)(param_4 + 0xc);
        plStack_60 = (longlong *)*param_2;
        if ((undefined *)*plStack_60 == &UNK_180a14060) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)((undefined *)*plStack_60 + 0x28))();
        }
        uVar21 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar22 = (longlong *)FUN_18005ce30(uVar21,&plStack_138);
        pplStack_4b8 = (longlong **)plVar22;
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x28))(plVar22);
        }
        lVar19 = _DAT_180c82868;
        pplStack_4d8 = &plStack_518;
        plStack_518 = plVar22;
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x28))(plVar22);
        }
        pplStack_4c0 = &plStack_518;
        puVar24 = *(undefined8 **)(*(longlong *)(lVar19 + 8) + 8);
        pcVar2 = *(code **)*puVar24;
        pplStack_4d8 = &plStack_4c8;
        plStack_4c8 = plStack_518;
        if (plStack_518 != (longlong *)0x0) {
          (**(code **)(*plStack_518 + 0x28))();
        }
        (*pcVar2)(puVar24,&plStack_4c8);
        if (plStack_518 != (longlong *)0x0) {
          (**(code **)(*plStack_518 + 0x38))();
        }
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x38))(plVar22);
        }
        pplStack_4b8 = &plStack_138;
        plStack_138 = (longlong *)&UNK_18098bcb0;
      }
    }
    puStack_470 = puVar29;
    iVar16 = _Mtx_lock(puVar29);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
    FUN_1800b88d0(plVar31,param_2);
    *(int *)(*param_2 + 0x3d) = param_4[0xc];
    iVar16 = _Mtx_unlock(puVar29);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
  }
  *(undefined1 *)((longlong)*param_2 + 0xc9) = 0;
  (*param_2)[0x68] = (longlong *)(longlong)*(int *)(_DAT_180c86870 + 0x224);
  if (puStack_510 == (undefined8 *)0x0) {
    iVar16 = _Mtx_unlock(puStack_498);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_548);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puStack_510);
}






// 函数: void FUN_1800b1d50(ulonglong *param_1)
void FUN_1800b1d50(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b1d80(undefined8 param_1,longlong *param_2,longlong param_3,int *param_4)
void FUN_1800b1d80(undefined8 param_1,longlong *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_408 [32];
  longlong **pplStack_3e8;
  longlong *plStack_3e0;
  longlong **pplStack_3d8;
  undefined4 uStack_3d0;
  longlong *plStack_3c8;
  longlong *plStack_3c0;
  longlong **pplStack_3b8;
  undefined **ppuStack_3b0;
  longlong lStack_3a8;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  undefined8 uStack_388;
  int iStack_380;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  undefined8 uStack_368;
  int iStack_360;
  undefined8 uStack_358;
  longlong *plStack_350;
  longlong lStack_348;
  longlong *aplStack_340 [19];
  undefined *apuStack_2a8 [20];
  longlong *plStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined4 uStack_170;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  int iStack_150;
  longlong lStack_148;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [128];
  undefined4 uStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  longlong lStack_68;
  ulonglong uStack_48;
  
  lVar3 = _DAT_180c86930;
  uStack_358 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_408;
  uVar15 = 0;
  *param_2 = 0;
  uStack_3d0 = 1;
  lVar1 = lVar3 + 0x7c0;
  lStack_3a8 = lVar1;
  plStack_350 = param_2;
  iVar8 = _Mtx_lock(lVar1);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar16 = (longlong *)(lVar3 + 0x6e0);
  lVar12 = *plVar16;
  if (*(longlong *)(lVar3 + 0x6e8) - lVar12 >> 3 != 0) {
    do {
      if ((((((*(int *)(*(longlong *)(lVar12 + uVar15 * 8) + 8) == 1) &&
             (plVar11 = *(longlong **)(*plVar16 + uVar15 * 8), (int)plVar11[0x28] == *param_4)) &&
            (*(int *)((longlong)plVar11 + 0x144) == param_4[1])) &&
           (((int)plVar11[0x29] == param_4[2] && (*(int *)((longlong)plVar11 + 0x14c) == param_4[3])
            ))) && (((float)param_4[4] == *(float *)(plVar11 + 0x2a) &&
                    ((*(char *)((longlong)plVar11 + 0x154) == (char)param_4[5] &&
                     (*(char *)((longlong)plVar11 + 0x157) == *(char *)((longlong)param_4 + 0x17))))
                    ))) &&
         ((*(char *)((longlong)plVar11 + 0x156) == *(char *)((longlong)param_4 + 0x16) &&
          ((int)plVar11[0x3d] == param_4[6])))) {
        if (plVar11 != (longlong *)0x0) {
          pplStack_3d8 = (longlong **)plVar11;
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        pplStack_3d8 = (longlong **)*param_2;
        *param_2 = (longlong)plVar11;
        if (pplStack_3d8 != (longlong **)0x0) {
          (*(code *)(*pplStack_3d8)[7])();
        }
        puVar13 = &DAT_18098bc73;
        if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
          puVar13 = *(undefined **)(param_3 + 8);
        }
        (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar13);
        lVar3 = *param_2;
        iVar8 = param_4[1];
        *(short *)(lVar3 + 0x32c) = (short)*param_4;
        *(short *)(lVar3 + 0x32e) = (short)iVar8;
        *(short *)(lVar3 + 0x332) = (short)param_4[2];
        *(int *)(lVar3 + 0x324) = param_4[3];
        if (*(int *)(*param_2 + 0x380) == 0) {
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
          iVar9 = _Thrd_id();
          if (iVar9 == iVar8) {
            iStack_398 = *param_4;
            iStack_394 = param_4[1];
            iStack_390 = param_4[2];
            iStack_38c = param_4[3];
            uStack_388 = *(undefined8 *)(param_4 + 4);
            iStack_380 = param_4[6];
            FUN_1800a4c50(_DAT_180c86938,&iStack_398,*param_2);
          }
          else {
            pplStack_3d8 = &plStack_208;
            plStack_208 = (longlong *)&UNK_1809fcc28;
            puStack_200 = auStack_1f0;
            uStack_1f8 = 0;
            auStack_1f0[0] = 0;
            uStack_170 = 0x1d;
            iStack_168 = *param_4;
            iStack_164 = param_4[1];
            iStack_160 = param_4[2];
            iStack_15c = param_4[3];
            uStack_158 = *(undefined8 *)(param_4 + 4);
            iStack_150 = param_4[6];
            lStack_148 = *param_2;
            uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
            plVar11 = (longlong *)FUN_18005ce30(uVar10,&plStack_208);
            pplStack_3e8 = (longlong **)plVar11;
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x28))(plVar11);
            }
            lVar3 = _DAT_180c82868;
            pplStack_3d8 = &plStack_3c8;
            plStack_3c8 = plVar11;
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x28))(plVar11);
            }
            FUN_18005e370(lVar3,&plStack_3c8);
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11);
            }
            pplStack_3e8 = &plStack_208;
            plStack_208 = (longlong *)&UNK_18098bcb0;
          }
        }
        else if (*(int *)(*param_2 + 0x380) == 2) {
          FUN_18023a940(*param_2);
          pplStack_3e8 = aplStack_340;
          pplStack_3d8 = (longlong **)FUN_180049b30(aplStack_340,param_3);
          *pplStack_3d8 = (longlong *)&UNK_18098bcb0;
        }
        break;
      }
      uVar15 = (ulonglong)((int)uVar15 + 1);
      lVar12 = *plVar16;
    } while (uVar15 < (ulonglong)(*(longlong *)(lVar3 + 0x6e8) - lVar12 >> 3));
  }
  iVar8 = _Mtx_unlock(lStack_3a8);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  if (*param_2 == 0) {
    uVar2 = param_4[2];
    uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
    uVar14 = 5;
    if (uVar2 < 2) {
      uVar14 = 3;
    }
    plVar11 = (longlong *)FUN_18023a2e0(uVar10,uVar14);
    if (plVar11 != (longlong *)0x0) {
      pplStack_3b8 = (longlong **)plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    pplStack_3b8 = (longlong **)*param_2;
    *param_2 = (longlong)plVar11;
    if (pplStack_3b8 != (longlong **)0x0) {
      (*(code *)(*pplStack_3b8)[7])();
    }
    iVar9 = param_4[1];
    iVar6 = param_4[2];
    iVar7 = param_4[3];
    uVar10 = *(undefined8 *)(param_4 + 4);
    iVar8 = param_4[6];
    lVar3 = *param_2;
    *(int *)(lVar3 + 0x140) = *param_4;
    *(int *)(lVar3 + 0x144) = iVar9;
    *(int *)(lVar3 + 0x148) = iVar6;
    *(int *)(lVar3 + 0x14c) = iVar7;
    *(undefined8 *)(lVar3 + 0x150) = uVar10;
    *(int *)(lVar3 + 0x158) = iVar8;
    lVar3 = *param_2;
    iVar8 = param_4[1];
    *(short *)(lVar3 + 0x32c) = (short)*param_4;
    *(short *)(lVar3 + 0x32e) = (short)iVar8;
    *(short *)(lVar3 + 0x332) = (short)param_4[2];
    *(int *)(lVar3 + 0x324) = param_4[3];
    puVar13 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar13 = *(undefined **)(param_3 + 8);
    }
    (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar13);
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
    iVar9 = _Thrd_id();
    if (iVar9 == iVar8) {
      iStack_378 = *param_4;
      iStack_374 = param_4[1];
      iStack_370 = param_4[2];
      iStack_36c = param_4[3];
      uStack_368 = *(undefined8 *)(param_4 + 4);
      iStack_360 = param_4[6];
      FUN_1800a4c50(_DAT_180c86938,&iStack_378,*param_2);
      ppuStack_3b0 = apuStack_2a8;
      pplStack_3e8 = (longlong **)FUN_180049b30(apuStack_2a8,param_3);
      *pplStack_3e8 = (longlong *)&UNK_18098bcb0;
    }
    else {
      pplStack_3e8 = (longlong **)&puStack_128;
      puStack_128 = &UNK_1809fcc28;
      puStack_120 = auStack_110;
      uStack_118 = 0;
      auStack_110[0] = 0;
      uStack_90 = 0x1d;
      iStack_88 = *param_4;
      iStack_84 = param_4[1];
      iStack_80 = param_4[2];
      iStack_7c = param_4[3];
      uStack_78 = *(undefined8 *)(param_4 + 4);
      iStack_70 = param_4[6];
      lStack_68 = *param_2;
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar11 = (longlong *)FUN_18005ce30(uVar10,&puStack_128);
      ppuStack_3b0 = (undefined **)plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      lVar3 = _DAT_180c82868;
      pplStack_3e8 = &plStack_3e0;
      plStack_3e0 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      pplStack_3b8 = &plStack_3e0;
      puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 8) + 8);
      pcVar5 = *(code **)*puVar4;
      pplStack_3e8 = &plStack_3c0;
      plStack_3c0 = plStack_3e0;
      if (plStack_3e0 != (longlong *)0x0) {
        (**(code **)(*plStack_3e0 + 0x28))();
      }
      (*pcVar5)(puVar4,&plStack_3c0);
      if (plStack_3e0 != (longlong *)0x0) {
        (**(code **)(*plStack_3e0 + 0x38))();
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11);
      }
      ppuStack_3b0 = &puStack_128;
      puStack_128 = &UNK_18098bcb0;
    }
    lStack_348 = lVar1;
    iVar8 = _Mtx_lock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    FUN_1800b88d0(plVar16,param_2);
    iVar8 = _Mtx_unlock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
  }
  *(longlong *)(*param_2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_408);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




