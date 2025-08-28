#include "TaleWorlds.Native.Split.h"

// 03_rendering_part191_sub002_sub002.c - 1 个函数

// 函数: void FUN_18037ae90(longlong param_1,longlong param_2,undefined8 *param_3)
void FUN_18037ae90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  uint uVar24;
  longlong *plVar25;
  undefined2 *puVar26;
  longlong lVar27;
  char cVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auStack_9d8 [32];
  code *pcStack_9b8;
  undefined4 uStack_9b0;
  undefined *puStack_9a8;
  undefined1 *puStack_9a0;
  uint uStack_998;
  ulonglong uStack_990;
  int iStack_988;
  undefined *puStack_980;
  undefined2 *puStack_978;
  undefined4 uStack_970;
  undefined8 uStack_968;
  undefined *puStack_960;
  undefined2 *puStack_958;
  undefined4 uStack_950;
  undefined8 uStack_948;
  longlong *aplStack_940 [3];
  float fStack_928;
  float fStack_924;
  float fStack_920;
  undefined4 uStack_91c;
  float fStack_918;
  float fStack_914;
  float fStack_910;
  undefined4 uStack_90c;
  undefined8 uStack_908;
  ulonglong uStack_900;
  ulonglong uStack_8f8;
  undefined8 uStack_8f0;
  undefined4 uStack_8e8;
  int iStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined8 uStack_8d4;
  undefined8 uStack_8cc;
  undefined1 uStack_8c4;
  undefined8 uStack_8c3;
  undefined4 uStack_8b8;
  undefined1 uStack_8b4;
  undefined4 uStack_8b0;
  int iStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined8 uStack_89c;
  undefined8 uStack_894;
  undefined1 uStack_88c;
  undefined8 uStack_88b;
  undefined4 uStack_880;
  undefined1 uStack_87c;
  float fStack_878;
  float fStack_874;
  float fStack_870;
  undefined4 uStack_86c;
  float fStack_868;
  float fStack_864;
  float fStack_860;
  undefined4 uStack_85c;
  float fStack_858;
  float fStack_854;
  float fStack_850;
  undefined4 uStack_84c;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  undefined4 uStack_83c;
  longlong lStack_838;
  longlong lStack_830;
  undefined8 uStack_828;
  undefined4 uStack_820;
  longlong *plStack_818;
  longlong lStack_810;
  longlong *plStack_808;
  longlong *plStack_800;
  longlong *plStack_7f8;
  longlong lStack_7f0;
  longlong lStack_7e8;
  longlong *plStack_7d8;
  longlong *plStack_7d0;
  longlong *plStack_7c8;
  undefined1 auStack_7c0 [16];
  float fStack_7b0;
  float fStack_7ac;
  ulonglong uStack_7a8;
  undefined1 auStack_7a0 [16];
  undefined4 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_780;
  undefined2 uStack_77c;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined4 uStack_768;
  undefined1 uStack_764;
  undefined4 uStack_760;
  undefined8 uStack_75c;
  undefined2 uStack_754;
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined1 uStack_734;
  undefined8 uStack_720;
  undefined *puStack_718;
  longlong lStack_710;
  undefined4 uStack_700;
  undefined *puStack_6f8;
  longlong lStack_6f0;
  undefined4 uStack_6e0;
  undefined *puStack_6d8;
  longlong lStack_6d0;
  undefined4 uStack_6c0;
  longlong *plStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined4 auStack_668 [2];
  longlong alStack_660 [2];
  undefined2 uStack_650;
  undefined1 uStack_64e;
  undefined8 uStack_64c;
  undefined8 uStack_644;
  undefined8 uStack_63c;
  undefined8 uStack_634;
  undefined8 uStack_62c;
  undefined8 uStack_624;
  undefined8 uStack_61c;
  undefined8 uStack_614;
  undefined8 uStack_60c;
  undefined4 uStack_604;
  undefined2 uStack_600;
  undefined4 uStack_5fe;
  undefined1 uStack_5fa;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined4 uStack_5d8;
  undefined auStack_5d0 [72];
  undefined *puStack_588;
  undefined1 *puStack_580;
  undefined4 uStack_578;
  undefined1 auStack_570 [136];
  undefined *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [136];
  undefined8 auStack_448 [40];
  undefined *apuStack_308 [68];
  ulonglong uStack_e8;
  
  uStack_6b0 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_9d8;
  lVar13 = 0;
  plVar25 = (longlong *)param_3[4];
  lStack_7f0 = param_2;
  lStack_7e8 = param_1;
  if (*(code **)(*plVar25 + 0xc0) == (code *)&UNK_180277e10) {
    cVar28 = (plVar25[8] - plVar25[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar28 = (**(code **)(*plVar25 + 0xc0))(plVar25);
  }
  if (cVar28 == '\0') {
    lVar13 = *(longlong *)plVar25[7];
  }
  lStack_810 = *(longlong *)(lVar13 + 0x1b8);
  pcVar2 = *(code **)(*(longlong *)param_3[2] + 0x198);
  if (pcVar2 == (code *)&UNK_18027d990) {
    pfVar19 = (float *)((longlong)param_3[2] + 0x214);
  }
  else {
    pfVar19 = (float *)(*pcVar2)();
  }
  fVar32 = SQRT(pfVar19[4] * pfVar19[4] + pfVar19[5] * pfVar19[5]);
  fVar29 = SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]);
  if (fVar32 <= fVar29) {
    fVar32 = fVar29;
  }
  fVar32 = fVar32 + fVar32;
  fVar29 = fVar32 * 8.0;
  iVar8 = (int)(((pfVar19[6] - pfVar19[2]) / fVar29) * 2048.0);
  iVar20 = 0x400;
  if (iVar8 < 0x400) {
    iVar20 = iVar8;
  }
  auVar31._0_4_ = (float)iVar20 * 0.25;
  iVar20 = (int)auVar31._0_4_;
  if ((iVar20 != -0x80000000) && ((float)iVar20 != auVar31._0_4_)) {
    auVar31._4_4_ = auVar31._0_4_;
    auVar31._8_8_ = 0;
    uVar9 = movmskps(iVar8,auVar31);
    auVar31._0_4_ = (float)(int)(iVar20 + (uVar9 & 1 ^ 1));
  }
  uStack_790 = 0;
  auStack_7a0 = ZEXT416(0);
  _fStack_7b0 = CONCAT44(fVar32,fVar29 * 0.5);
  uStack_7a8 = (ulonglong)(uint)pfVar19[6];
  auStack_7c0._0_8_ = CONCAT44(fVar32,fVar29 * -0.5) ^ 0x8000000000000000;
  auStack_7c0._8_4_ = pfVar19[2];
  auStack_7c0._12_4_ = 0;
  pcStack_9b8 = FUN_180045af0;
  iStack_988 = (int)(auVar31._0_4_ * 4.0);
  FUN_1808fc838(aplStack_940,8,2,&SUB_18005d5f0);
  uStack_8e0 = 1;
  uStack_8dc = 1;
  uStack_8d4 = 0;
  uStack_8cc = 0x3f80000000000000;
  uStack_8c3 = 1;
  uStack_8c4 = 0;
  uStack_8b8 = 0xffffffff;
  uStack_8b4 = 0;
  uStack_8e8 = 0x800;
  uStack_8d8 = 1;
  puStack_960 = &UNK_180a3c3e0;
  uStack_948 = 0;
  puStack_958 = (undefined2 *)0x0;
  uStack_950 = 0;
  iStack_8e4 = (int)(auVar31._0_4_ * 4.0);
  puVar12 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar12 = 0;
  puStack_958 = puVar12;
  uVar9 = FUN_18064e990(puVar12);
  *puVar12 = 0x5f;
  uStack_950 = 1;
  uStack_948._0_4_ = uVar9;
  lVar13 = FUN_18037c700(0x5f,&puStack_6d8,*(undefined4 *)(param_3 + 3));
  iVar20 = *(int *)(lVar13 + 0x10);
  if (0 < iVar20) {
    if ((iVar20 != -1) && (uVar9 < iVar20 + 2U)) {
      pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
      puVar12 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar12,iVar20 + 2U,0x10);
      puStack_958 = puVar12;
      uStack_948._0_4_ = FUN_18064e990(puVar12);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar12 + 1),*(undefined8 *)(lVar13 + 8),
           (longlong)(*(int *)(lVar13 + 0x10) + 1));
  }
  puStack_6d8 = &UNK_180a3c3e0;
  if (lStack_6d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_6d0 = 0;
  uStack_6c0 = 0;
  puStack_6d8 = &UNK_18098bcb0;
  if (puVar12 == (undefined2 *)0x0) {
    puVar12 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13);
    *(undefined1 *)puVar12 = 0;
    puStack_958 = puVar12;
    uStack_948._0_4_ = FUN_18064e990(puVar12);
  }
  else if (uVar9 < 0x1d) {
    pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
    puVar12 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar12,0x1d,0x10);
    puStack_958 = puVar12;
    uStack_948._0_4_ = FUN_18064e990(puVar12);
  }
  *(undefined8 *)((longlong)puVar12 + 1) = 0x5f61726f6c665f5f;
  *(undefined8 *)((longlong)puVar12 + 9) = 0x72616f626c6c6962;
  *(undefined8 *)((longlong)puVar12 + 0x11) = 0x7375666669645f64;
  *(undefined4 *)((longlong)puVar12 + 0x19) = 0x5f5f65;
  uStack_950 = 0x1c;
  puStack_588 = &UNK_1809fcc28;
  puStack_580 = auStack_570;
  auStack_570[0] = 0;
  uStack_578 = 0x1c;
  puVar26 = (undefined2 *)&DAT_18098bc73;
  if (puVar12 != (undefined2 *)0x0) {
    puVar26 = puVar12;
  }
  strcpy_s(auStack_570,0x80,puVar26);
  puVar14 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_7d0,&puStack_588,&uStack_8e8);
  plVar25 = (longlong *)*puVar14;
  *puVar14 = 0;
  plStack_7d8 = aplStack_940[0];
  if (aplStack_940[0] != (longlong *)0x0) {
    lVar13 = *aplStack_940[0];
    aplStack_940[0] = plVar25;
    (**(code **)(lVar13 + 0x38))();
    plVar25 = aplStack_940[0];
  }
  aplStack_940[0] = plVar25;
  if (plStack_7d0 != (longlong *)0x0) {
    (**(code **)(*plStack_7d0 + 0x38))();
  }
  puStack_588 = &UNK_18098bcb0;
  uStack_8a8 = 1;
  uStack_8a4 = 1;
  uStack_89c = 0;
  uStack_894 = 0x3f80000000000000;
  uStack_88b = 1;
  uStack_88c = 0;
  uStack_880 = 0xffffffff;
  uStack_87c = 0;
  uStack_8b0 = 0x800;
  iStack_8ac = iStack_988;
  uStack_8a0 = 1;
  puStack_980 = &UNK_180a3c3e0;
  uStack_968 = 0;
  puStack_978 = (undefined2 *)0x0;
  uStack_970 = 0;
  puVar12 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar12 = 0;
  puStack_978 = puVar12;
  uVar9 = FUN_18064e990(puVar12);
  *puVar12 = 0x5f;
  uStack_970 = 1;
  uStack_968._0_4_ = uVar9;
  lVar13 = FUN_18037c700(0x5f,&puStack_718,*(undefined4 *)(param_3 + 3));
  iVar20 = *(int *)(lVar13 + 0x10);
  if (0 < iVar20) {
    if ((iVar20 != -1) && (uVar9 < iVar20 + 2U)) {
      pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
      puVar12 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar12,iVar20 + 2U,0x10);
      puStack_978 = puVar12;
      uStack_968._0_4_ = FUN_18064e990(puVar12);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar12 + 1),*(undefined8 *)(lVar13 + 8),
           (longlong)(*(int *)(lVar13 + 0x10) + 1));
  }
  puStack_718 = &UNK_180a3c3e0;
  if (lStack_710 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar20 = 0;
  lVar13 = 0;
  lStack_710 = 0;
  uStack_700 = 0;
  puStack_718 = &UNK_18098bcb0;
  if (puVar12 == (undefined2 *)0x0) {
    puVar12 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x1c,0x13);
    *(undefined1 *)puVar12 = 0;
  }
  else {
    if (0x1b < uVar9) goto LAB_18037b5a5;
    pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
    puVar12 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar12,0x1c,0x10);
  }
  puStack_978 = puVar12;
  uStack_968._0_4_ = FUN_18064e990(puVar12);
LAB_18037b5a5:
  *(undefined8 *)((longlong)puVar12 + 1) = 0x5f61726f6c665f5f;
  *(undefined8 *)((longlong)puVar12 + 9) = 0x72616f626c6c6962;
  *(undefined8 *)((longlong)puVar12 + 0x11) = 0x6c616d726f6e5f64;
  *(undefined2 *)((longlong)puVar12 + 0x19) = 0x5f5f;
  *(undefined1 *)((longlong)puVar12 + 0x1b) = 0;
  uStack_970 = 0x1b;
  puStack_4e8 = &UNK_1809fcc28;
  puStack_4e0 = auStack_4d0;
  auStack_4d0[0] = 0;
  uStack_4d8 = 0x1b;
  puVar26 = (undefined2 *)&DAT_18098bc73;
  if (puVar12 != (undefined2 *)0x0) {
    puVar26 = puVar12;
  }
  strcpy_s(auStack_4d0,0x80,puVar26);
  puVar14 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_818,&puStack_4e8,&uStack_8b0);
  plVar25 = (longlong *)*puVar14;
  *puVar14 = 0;
  plStack_7c8 = aplStack_940[1];
  if (aplStack_940[1] != (longlong *)0x0) {
    lVar27 = *aplStack_940[1];
    aplStack_940[1] = plVar25;
    (**(code **)(lVar27 + 0x38))();
    plVar25 = aplStack_940[1];
  }
  aplStack_940[1] = plVar25;
  if (plStack_818 != (longlong *)0x0) {
    (**(code **)(*plStack_818 + 0x38))();
  }
  puStack_4e8 = &UNK_18098bcb0;
  FUN_180094c20(auStack_448);
  uStack_6a8 = 0x3f800000;
  uStack_6a0 = 0;
  uStack_698 = 0x3f80000000000000;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_680 = 0x3f800000;
  uStack_678 = 0;
  uStack_670 = 0x3f80000000000000;
  FUN_180085970(&uStack_6a8);
  FUN_180287610(auStack_448,&uStack_6a8,auStack_7c0);
  bVar4 = true;
  lVar27 = lVar13;
  do {
    puStack_9a8 = &UNK_180a3c3e0;
    uStack_990 = 0;
    puStack_9a0 = (undefined1 *)0x0;
    uStack_998 = 0;
    puVar23 = &DAT_18098bc73;
    if (*(undefined **)(*_DAT_180c86870 + 0x440) != (undefined *)0x0) {
      puVar23 = *(undefined **)(*_DAT_180c86870 + 0x440);
    }
    FUN_180627c50(&puStack_9a8,puVar23);
    uVar9 = uStack_998;
    uVar24 = uStack_998 + 0x10;
    if (uVar24 != 0) {
      uVar10 = uStack_998 + 0x11;
      if (puStack_9a0 == (undefined1 *)0x0) {
        if ((int)uVar10 < 0x10) {
          uVar10 = 0x10;
        }
        puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar10,0x13);
        *puStack_9a0 = 0;
      }
      else {
        if (uVar10 <= (uint)uStack_990) goto LAB_18037b81a;
        pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
        puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar10,0x10);
      }
      uVar11 = FUN_18064e990(puStack_9a0);
      uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
    }
LAB_18037b81a:
    puVar14 = (undefined8 *)(puStack_9a0 + uStack_998);
    *puVar14 = 0x6c694261726f6c46;
    puVar14[1] = 0x2f736472616f626c;
    *(undefined1 *)(puVar14 + 2) = 0;
    lVar15 = param_3[2];
    uStack_998 = uVar24;
    if (0 < *(int *)(lVar15 + 0x200)) {
      iVar20 = uVar24 + *(int *)(lVar15 + 0x200);
      if (iVar20 != 0) {
        uVar9 = iVar20 + 1;
        if (puStack_9a0 == (undefined1 *)0x0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *puStack_9a0 = 0;
        }
        else {
          if (uVar9 <= (uint)uStack_990) goto LAB_18037b8b4;
          pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
          puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar9,0x10);
        }
        uVar11 = FUN_18064e990(puStack_9a0);
        uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
      }
LAB_18037b8b4:
                    // WARNING: Subroutine does not return
      memcpy(puStack_9a0 + uStack_998,*(undefined8 *)(lVar15 + 0x1f8),
             (longlong)(*(int *)(lVar15 + 0x200) + 1));
    }
    uVar24 = uVar9 + 0x11;
    if (uVar24 != 0) {
      uVar9 = uVar9 + 0x12;
      if (puStack_9a0 == (undefined1 *)0x0) {
        if ((int)uVar9 < 0x10) {
          uVar9 = 0x10;
        }
        puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
        *puStack_9a0 = 0;
      }
      else {
        if (uVar9 <= (uint)uStack_990) goto LAB_18037b943;
        pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
        puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar9,0x10);
      }
      uVar11 = FUN_18064e990(puStack_9a0);
      uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
    }
LAB_18037b943:
    uVar21 = (ulonglong)uStack_998;
    *(undefined2 *)(puStack_9a0 + uVar21) = 0x5f;
    uStack_998 = uVar24;
    lVar15 = FUN_18037c700(puStack_9a0 + uVar21,&puStack_6f8,*(undefined4 *)(param_3 + 3));
    if (0 < *(int *)(lVar15 + 0x10)) {
      iVar20 = uStack_998 + *(int *)(lVar15 + 0x10);
      if (iVar20 != 0) {
        uVar9 = iVar20 + 1;
        if (puStack_9a0 == (undefined1 *)0x0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *puStack_9a0 = 0;
        }
        else {
          if (uVar9 <= (uint)uStack_990) goto LAB_18037b9e3;
          pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
          puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar9,0x10);
        }
        uVar11 = FUN_18064e990(puStack_9a0);
        uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
      }
LAB_18037b9e3:
                    // WARNING: Subroutine does not return
      memcpy(puStack_9a0 + uStack_998,*(undefined8 *)(lVar15 + 8),
             (longlong)(*(int *)(lVar15 + 0x10) + 1));
    }
    puStack_6f8 = &UNK_180a3c3e0;
    if (lStack_6f0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_6f0 = 0;
    uStack_6e0 = 0;
    puStack_6f8 = &UNK_18098bcb0;
    if (lVar27 == 0) {
      iVar8 = uStack_998 + 0x23;
      if (iVar8 != 0) {
        uVar9 = uStack_998 + 0x24;
        if (puStack_9a0 == (undefined1 *)0x0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *puStack_9a0 = 0;
        }
        else {
          if (uVar9 <= (uint)uStack_990) goto LAB_18037bab0;
          pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
          puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar9,0x10);
        }
        uVar11 = FUN_18064e990(puStack_9a0);
        uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
      }
LAB_18037bab0:
      puVar14 = (undefined8 *)(puStack_9a0 + uStack_998);
      *puVar14 = 0x5f61726f6c665f5f;
      puVar14[1] = 0x72616f626c6c6962;
      puVar14[2] = 0x7375666669645f64;
      puVar14[3] = 0x2e6e65672e5f5f65;
      *(undefined4 *)(puVar14 + 4) = 0x686374;
      lVar15 = 0xb8;
      uStack_998 = iVar8;
    }
    else {
      iVar8 = uStack_998 + 0x22;
      if (iVar8 != 0) {
        uVar9 = uStack_998 + 0x23;
        if (puStack_9a0 == (undefined1 *)0x0) {
          if ((int)uVar9 < 0x10) {
            uVar9 = 0x10;
          }
          puStack_9a0 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
          *puStack_9a0 = 0;
        }
        else {
          if (uVar9 <= (uint)uStack_990) goto LAB_18037bb4c;
          pcStack_9b8 = (code *)CONCAT71(pcStack_9b8._1_7_,0x13);
          puStack_9a0 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_9a0,uVar9,0x10);
        }
        uVar11 = FUN_18064e990(puStack_9a0);
        uStack_990 = CONCAT44(uStack_990._4_4_,uVar11);
      }
LAB_18037bb4c:
      puVar14 = (undefined8 *)(puStack_9a0 + uStack_998);
      *puVar14 = 0x5f61726f6c665f5f;
      puVar14[1] = 0x72616f626c6c6962;
      puVar14[2] = 0x6c616d726f6e5f64;
      puVar14[3] = 0x742e6e65672e5f5f;
      *(undefined2 *)(puVar14 + 4) = 0x6863;
      *(undefined1 *)((longlong)puVar14 + 0x22) = 0;
      lVar15 = 200;
      uStack_998 = iVar8;
    }
    lVar16 = FUN_180624440(apuStack_308,&puStack_9a8);
    puVar23 = &DAT_18098bc73;
    if (*(undefined **)(lVar16 + 8) != (undefined *)0x0) {
      puVar23 = *(undefined **)(lVar16 + 8);
    }
    (**(code **)(puStack_9a8 + 0x10))(&puStack_9a8,puVar23);
    apuStack_308[0] = &UNK_18098bcb0;
    alStack_660[0] = 0;
    alStack_660[1] = 0;
    uStack_650 = 0;
    uStack_64e = 3;
    uStack_5fe = 0;
    uStack_60c = 0;
    uStack_604 = 0;
    uStack_600 = 0;
    uStack_5fa = 0;
    uStack_64c = 0;
    uStack_644 = 0;
    uStack_63c = 0;
    uStack_634 = 0;
    uStack_62c = 0;
    uStack_624 = 0;
    uStack_61c = 0;
    uStack_614 = 0;
    auStack_668[0] = 0;
    if ((*(char *)(param_3 + 5) == '\0') &&
       (cVar28 = FUN_1802a1dd0(&puStack_9a8,auStack_668), lVar16 = lStack_810, cVar28 != '\0')) {
      pcStack_9b8 = *(code **)(lVar15 + lStack_810);
      uStack_9b0 = 0xffffffff;
      FUN_1800a5810(_DAT_180c86938,alStack_660,1);
      FUN_18023ce10(*(undefined8 *)(lVar15 + lVar16));
      if (lVar27 == 0) {
        puVar17 = (undefined4 *)*param_3;
      }
      else {
        puVar17 = (undefined4 *)param_3[1];
      }
      *puVar17 = 1;
      if (uStack_650._1_1_ == '\0') {
        if (((char)uStack_650 == '\0') && (alStack_660[0] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        alStack_660[0] = 0;
        alStack_660[1] = 0;
        uStack_650 = 0;
      }
      puStack_9a8 = &UNK_180a3c3e0;
      if (puStack_9a0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else {
      puVar17 = (undefined4 *)FUN_1800daa50();
      plVar25 = aplStack_940[lVar27];
      if (plVar25 != (longlong *)0x0) {
        plStack_808 = plVar25;
        (**(code **)(*plVar25 + 0x28))(plVar25);
      }
      plStack_808 = *(longlong **)(puVar17 + 0x25a4);
      *(longlong **)(puVar17 + 0x25a4) = plVar25;
      if (plStack_808 != (longlong *)0x0) {
        (**(code **)(*plStack_808 + 0x38))();
      }
      plStack_800 = *(longlong **)(puVar17 + 0x25aa);
      *(undefined8 *)(puVar17 + 0x25aa) = 0;
      if (plStack_800 != (longlong *)0x0) {
        (**(code **)(*plStack_800 + 0x38))();
      }
      puStack_5e8 = &UNK_1809fcc58;
      puStack_5e0 = auStack_5d0;
      auStack_5d0[0] = 0;
      uStack_5d8 = 0x1a;
      strcpy_s(auStack_5d0,0x40,&UNK_180a218e0);
      puVar17[0xd4c] = uStack_5d8;
      puVar23 = &DAT_18098bc73;
      if (puStack_5e0 != (undefined *)0x0) {
        puVar23 = puStack_5e0;
      }
      strcpy_s(*(undefined8 *)(puVar17 + 0xd4a),0x40,puVar23);
      puStack_5e8 = &UNK_18098bcb0;
      *puVar17 = 1;
      *(undefined8 *)(puVar17 + 0x4706) = 0;
      puVar17[0x470a] = 0;
      puVar17[0x470b] = 0x3f800000;
      puVar17[1] = 0x210083;
      puVar17[0x268b] = 0xfffffff9;
      if (lVar27 == 0) {
        puVar17[0x473c] = 0xff00ff;
        puVar17[0x4708] = 0x45000000;
        puVar17[0x4709] = (float)iStack_988;
        if (*(code **)(puVar17 + 0x2588) != (code *)0x0) {
          (**(code **)(puVar17 + 0x2588))(puVar17 + 0x2584,0,0);
        }
        *(undefined **)(puVar17 + 0x2588) = &UNK_1800ee4d0;
        *(undefined **)(puVar17 + 0x258a) = &UNK_1800ee4c0;
        *(code **)(puVar17 + 0x2584) = FUN_18037ac70;
        puVar14 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x30,3);
        *(undefined8 **)(puVar17 + 0x2594) = puVar14;
        uVar30 = param_3[1];
        *puVar14 = *param_3;
        puVar14[1] = uVar30;
        uVar30 = param_3[3];
        puVar14[2] = param_3[2];
        puVar14[3] = uVar30;
        uVar30 = param_3[5];
        puVar14[4] = param_3[4];
        puVar14[5] = uVar30;
        lVar15 = _DAT_180c86890;
        puVar17[6] = *(undefined4 *)(_DAT_180c86890 + 0x1420);
        plVar25 = *(longlong **)(lVar15 + 0x1418);
        if (plVar25 != (longlong *)0x0) {
          plStack_7f8 = plVar25;
          (**(code **)(*plVar25 + 0x28))(plVar25);
        }
        plStack_7f8 = *(longlong **)(puVar17 + 4);
        *(longlong **)(puVar17 + 4) = plVar25;
        if (plStack_7f8 != (longlong *)0x0) {
          (**(code **)(*plStack_7f8 + 0x38))();
        }
        puVar17[2] = *(undefined4 *)(lVar15 + 0x1410);
      }
      else {
        puVar17[0x473c] = 0xff7f7fff;
        if (lVar27 == 1) {
          puVar17[0x4708] = 0x45000000;
          puVar17[0x4709] = (float)iStack_988;
          if (*(code **)(puVar17 + 0x2588) != (code *)0x0) {
            (**(code **)(puVar17 + 0x2588))(puVar17 + 0x2584,0,0);
          }
          *(undefined **)(puVar17 + 0x2588) = &UNK_1800ee4d0;
          *(undefined **)(puVar17 + 0x258a) = &UNK_1800ee4c0;
          *(code **)(puVar17 + 0x2584) = FUN_18037ad00;
          puVar14 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x30,3);
          *(undefined8 **)(puVar17 + 0x2594) = puVar14;
          uVar30 = param_3[1];
          *puVar14 = *param_3;
          puVar14[1] = uVar30;
          uVar30 = param_3[3];
          puVar14[2] = param_3[2];
          puVar14[3] = uVar30;
          uVar30 = param_3[5];
          puVar14[4] = param_3[4];
          puVar14[5] = uVar30;
          FUN_1801be080(puVar17 + 2,_DAT_180c86890 + 0x1428);
        }
      }
      lVar15 = 2;
      puVar14 = (undefined8 *)(puVar17 + 0xc);
      puVar6 = auStack_448;
      do {
        puVar22 = puVar6;
        puVar18 = puVar14;
        uVar30 = puVar22[1];
        *puVar18 = *puVar22;
        puVar18[1] = uVar30;
        uVar30 = puVar22[3];
        puVar18[2] = puVar22[2];
        puVar18[3] = uVar30;
        uVar30 = puVar22[5];
        puVar18[4] = puVar22[4];
        puVar18[5] = uVar30;
        uVar30 = puVar22[7];
        puVar18[6] = puVar22[6];
        puVar18[7] = uVar30;
        uVar30 = puVar22[9];
        puVar18[8] = puVar22[8];
        puVar18[9] = uVar30;
        uVar30 = puVar22[0xb];
        puVar18[10] = puVar22[10];
        puVar18[0xb] = uVar30;
        uVar30 = puVar22[0xd];
        puVar18[0xc] = puVar22[0xc];
        puVar18[0xd] = uVar30;
        uVar30 = puVar22[0xf];
        puVar18[0xe] = puVar22[0xe];
        puVar18[0xf] = uVar30;
        lVar15 = lVar15 + -1;
        puVar14 = puVar18 + 0x10;
        puVar6 = puVar22 + 0x10;
      } while (lVar15 != 0);
      uVar30 = puVar22[0x11];
      puVar18[0x10] = puVar22[0x10];
      puVar18[0x11] = uVar30;
      uVar30 = puVar22[0x13];
      puVar18[0x12] = puVar22[0x12];
      puVar18[0x13] = uVar30;
      uVar30 = puVar22[0x15];
      puVar18[0x14] = puVar22[0x14];
      puVar18[0x15] = uVar30;
      uVar30 = puVar22[0x17];
      puVar18[0x16] = puVar22[0x16];
      puVar18[0x17] = uVar30;
      FUN_18024b8d0();
      *(undefined1 *)(puVar17 + 0x718) = 1;
      if ((((puVar17[0x492f] == 0) && (puVar17[0xa48] == 0)) && (puVar17[0x842] == 0)) &&
         (puVar17[0x7f8] == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((*(int *)(_DAT_180c86890 + 0x12d8) == 0x12) || ((*(byte *)(puVar17 + 0x6f6) & 0x20) == 0)
          ) || (((*(longlong *)(puVar17 + 0x266e) == 0 ||
                 ((*(uint *)(*(longlong *)(puVar17 + 0x266e) + 0x98) & 0x8000101e) == 0)) &&
                (((*(char *)(puVar17 + 0x4931) == '\0' && (!bVar5)) && (puVar17[0x6f7] == 0)))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)((longlong)puVar17 + 0x1c61) = uVar7;
      iVar8 = iVar20;
      if (puVar17[2] != -1) {
        iVar8 = puVar17[6];
      }
      *(byte *)((longlong)puVar17 + 0x1c62) = (byte)iVar8 & 1;
      uVar11 = func_0x00018024c420(puVar17);
      puVar17[0x719] = uVar11;
      uStack_908 = 0;
      uStack_8f0 = 0x3f80000000000000;
      fStack_840 = -0.0;
      auVar31._0_4_ = -1.0;
      fStack_848 = -4.371139e-08;
      fStack_910 = 0.0;
      fStack_914 = -4.371139e-08;
      fStack_918 = 1.0;
      uStack_83c = 0x7f7fffff;
      uStack_86c = 0x7f7fffff;
      uStack_900 = 0x3f800000;
      uStack_8f8 = (ulonglong)(uint)(fVar32 * 0.5 - fVar29 * 0.5);
      uStack_85c = 0x7f7fffff;
      uStack_84c = 0x7f7fffff;
      lVar15 = 8;
      fStack_928 = fStack_848;
      fStack_924 = auVar31._0_4_;
      fStack_920 = fStack_840;
      fStack_878 = fStack_918;
      fStack_874 = fStack_914;
      fStack_870 = fStack_910;
      fStack_844 = auVar31._0_4_;
      do {
        uStack_90c = 0;
        uStack_91c = 0;
        uStack_788 = 0;
        uStack_77c = 0xff00;
        uStack_778 = 0;
        uStack_770 = 0xffffffffffffffff;
        uStack_768 = 0xffffffff;
        uStack_764 = 0xff;
        uStack_760 = 0xffffffff;
        uStack_75c = 0;
        uStack_754 = 0x400;
        uStack_750 = 0;
        uStack_748 = 0;
        uStack_740 = 0;
        uStack_738 = 0;
        uStack_734 = 0;
        uStack_720 = 0;
        uStack_780 = 6;
        pcStack_9b8 = (code *)&uStack_788;
        cVar28 = (**(code **)(*(longlong *)param_3[2] + 0x1c8))
                           ((longlong *)param_3[2],puVar17,auVar31._0_4_,&fStack_928);
        if ((bVar4) && (cVar28 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        fStack_860 = fStack_910 * -0.70710677 + fStack_920 * 0.70710677;
        fStack_864 = fStack_914 * -0.70710677 + fStack_924 * 0.70710677;
        auVar31._0_4_ = fStack_928 * 0.70710677 - fStack_918 * 0.70710677;
        fStack_910 = fStack_910 * 0.70710677 - fStack_920 * -0.70710677;
        fStack_914 = fStack_914 * 0.70710677 - fStack_924 * -0.70710677;
        fStack_918 = fStack_918 * 0.70710677 - fStack_928 * -0.70710677;
        uStack_91c = 0;
        uStack_90c = 0;
        uStack_900 = uStack_900 & 0xffffffff;
        uStack_8f0 = CONCAT44(0x3f800000,(undefined4)uStack_8f0);
        uStack_8f8 = CONCAT44(uStack_8f8._4_4_,(float)uStack_8f8 + fVar32);
        lVar15 = lVar15 + -1;
        fStack_928 = auVar31._0_4_;
        fStack_924 = fStack_864;
        fStack_920 = fStack_860;
        fStack_868 = auVar31._0_4_;
        fStack_858 = fStack_918;
        fStack_854 = fStack_914;
        fStack_850 = fStack_910;
      } while (lVar15 != 0);
      LOCK();
      piVar1 = (int *)(lStack_7f0 + 0x11a48);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(undefined4 **)(lStack_7f0 + 0x9a48 + (longlong)iVar8 * 8) = puVar17;
      uVar30 = *(undefined8 *)(lStack_7f0 + 0x9a3c);
      *(undefined8 *)(puVar17 + 0x268d) = *(undefined8 *)(lStack_7f0 + 0x9a34);
      *(undefined8 *)(puVar17 + 0x268f) = uVar30;
      if (uStack_650._1_1_ == '\0') {
        if (((char)uStack_650 == '\0') && (alStack_660[0] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        alStack_660[0] = 0;
        alStack_660[1] = 0;
        uStack_650 = 0;
      }
      puStack_9a8 = &UNK_180a3c3e0;
      if (puStack_9a0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    uStack_990 = uStack_990 & 0xffffffff00000000;
    puStack_9a0 = (undefined1 *)0x0;
    puStack_9a8 = &UNK_18098bcb0;
    lVar27 = lVar27 + 1;
    if (1 < lVar27) {
      lStack_838 = 0;
      lStack_830 = 0;
      uStack_828 = 0;
      uStack_820 = 3;
      (**(code **)(*(longlong *)param_3[2] + 0xb8))((longlong *)param_3[2],0,&lStack_838);
      lVar27 = lStack_7e8;
      if (lStack_830 - lStack_838 >> 3 != 0) {
        do {
          uVar11 = *(undefined4 *)(*(longlong *)(lVar27 + 0x2148) + 0xa0);
          plVar25 = (longlong *)(*(longlong *)(*(longlong *)(lStack_838 + lVar13) + 0x1b8) + 0xb8);
          lVar15 = 0x10;
          do {
            plVar3 = (longlong *)*plVar25;
            if (plVar3 != (longlong *)0x0) {
              plStack_6b8 = plVar3;
              uVar30 = (**(code **)(*plVar3 + 0x28))(plVar3);
              FUN_1800b4e00(uVar30,plVar3,uVar11);
              (**(code **)(*plVar3 + 0x38))(plVar3);
            }
            plVar25 = plVar25 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          iVar20 = iVar20 + 1;
          lVar13 = lVar13 + 8;
        } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lStack_830 - lStack_838 >> 3));
      }
      if (lStack_838 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_980 = &UNK_180a3c3e0;
      if (puStack_978 != (undefined2 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_978 = (undefined2 *)0x0;
      uStack_968 = (ulonglong)uStack_968._4_4_ << 0x20;
      puStack_980 = &UNK_18098bcb0;
      puStack_960 = &UNK_180a3c3e0;
      if (puStack_958 != (undefined2 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_958 = (undefined2 *)0x0;
      uStack_948 = (ulonglong)uStack_948._4_4_ << 0x20;
      puStack_960 = &UNK_18098bcb0;
      FUN_1808fc8a8(aplStack_940,8,2,FUN_180045af0);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_9d8);
    }
  } while( true );
}



undefined8 *
FUN_18037c700(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  if (iVar3 == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,6,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = 0x6d6d7573;
    *(undefined2 *)(puVar1 + 1) = 0x7265;
    *(undefined1 *)((longlong)puVar1 + 6) = 0;
    *(undefined4 *)(param_2 + 2) = 6;
  }
  else if (iVar3 == 1) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,4,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = 0x6c6c6166;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)(param_2 + 2) = 4;
  }
  else if (iVar3 == 2) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,6,0,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = 0x746e6977;
    *(undefined2 *)(puVar1 + 1) = 0x7265;
    *(undefined1 *)((longlong)puVar1 + 6) = 0;
    *(undefined4 *)(param_2 + 2) = 6;
  }
  else if (iVar3 == 3) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,6,1,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = 0x69727073;
    *(undefined2 *)(puVar1 + 1) = 0x676e;
    *(undefined1 *)((longlong)puVar1 + 6) = 0;
    *(undefined4 *)(param_2 + 2) = 6;
  }
  else {
    uVar2 = FUN_180628ca0();
    FUN_180627ae0(param_2,uVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





