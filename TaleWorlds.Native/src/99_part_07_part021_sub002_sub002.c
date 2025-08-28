#include "TaleWorlds.Native.Split.h"

// 99_part_07_part021_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804af7b0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
void FUN_1804af7b0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,longlong ***param_6,int param_7,int param_8,int param_9,
                  int param_10,int param_11,int param_12,int param_13,int param_14,
                  undefined8 param_15,float param_16,undefined8 param_17,int param_18,float param_19
                  ,undefined4 param_20,char param_21)

{
  uint *puVar1;
  longlong ***ppplVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  longlong **pplVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined *puVar15;
  uint uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong ****pppplVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong ****pppplVar29;
  longlong *plVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong ****pppplVar33;
  int iVar34;
  bool bVar35;
  undefined8 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auStack_3d8 [32];
  undefined *puStack_3b8;
  longlong **pplStack_3b0;
  longlong **pplStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  char cStack_388;
  uint uStack_384;
  char cStack_380;
  uint uStack_37c;
  longlong ****pppplStack_378;
  int iStack_370;
  undefined8 uStack_368;
  longlong ****pppplStack_360;
  undefined4 uStack_358;
  ulonglong uStack_350;
  int iStack_348;
  uint uStack_344;
  undefined4 uStack_340;
  longlong ***ppplStack_338;
  uint uStack_330;
  undefined4 uStack_32c;
  int aiStack_328 [2];
  longlong *plStack_320;
  longlong ****pppplStack_318;
  int iStack_310;
  longlong **pplStack_308;
  longlong lStack_300;
  longlong ****pppplStack_2f8;
  uint *puStack_2f0;
  longlong ****pppplStack_2e8;
  longlong lStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  longlong ****pppplStack_2c8;
  longlong lStack_2c0;
  longlong *plStack_2b8;
  longlong *plStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  longlong lStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *plStack_268;
  longlong **pplStack_260;
  longlong *plStack_258;
  longlong **pplStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  longlong ****pppplStack_238;
  longlong ****pppplStack_230;
  uint auStack_228 [2];
  longlong ***ppplStack_220;
  undefined4 uStack_218;
  longlong ****pppplStack_210;
  undefined2 uStack_208;
  char cStack_206;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_188;
  undefined *puStack_180;
  int iStack_178;
  undefined auStack_170 [72];
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [72];
  ulonglong uStack_c8;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_3d8;
  iStack_2d0 = param_8;
  iStack_310 = param_10;
  iStack_370 = param_9;
  uStack_248 = param_5;
  pplStack_308 = (longlong **)param_6;
  iStack_2d4 = param_7;
  iStack_2cc = param_11;
  aiStack_328[0] = param_12;
  cStack_388 = param_21;
  uVar28 = 0;
  uVar26 = 0;
  uStack_37c = 0;
  lVar20 = *(longlong *)(param_1 + 0xa20);
  uVar31 = 0xffffffff;
  uVar10 = -1;
  uStack_384 = -1;
  uVar22 = uVar28;
  uVar27 = uVar28;
  plStack_320 = param_2;
  lStack_2c0 = param_1;
  plStack_2b8 = param_3;
  plStack_2b0 = param_4;
  if ((*(longlong *)(param_1 + 0xa28) - lVar20) / 0x50 != 0) {
    do {
      pppplVar33 = *(longlong *****)(lVar20 + 0x20 + uVar27);
      ppplStack_338 = (longlong ***)pppplVar33;
      if (pppplVar33 != (longlong ****)0x0) {
        (*(code *)(*pppplVar33)[5])(pppplVar33);
      }
      uVar36 = FUN_1800b4e00();
      if (pppplVar33 != (longlong ****)0x0) {
        uVar36 = (*(code *)(*pppplVar33)[7])(pppplVar33);
      }
      puVar1 = *(uint **)(uVar27 + 0x28 + *(longlong *)(param_1 + 0xa20));
      puStack_2f0 = puVar1;
      if (puVar1 != (uint *)0x0) {
        uVar36 = (**(code **)(*(longlong *)puVar1 + 0x28))(puVar1);
      }
      FUN_1800b4e00(uVar36,puVar1,0xffffffff);
      if (puVar1 != (uint *)0x0) {
        (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1);
      }
      uVar21 = (int)uVar22 + 1;
      lVar20 = *(longlong *)(param_1 + 0xa20);
      uVar22 = (ulonglong)uVar21;
      uVar27 = uVar27 + 0x50;
    } while ((ulonglong)(longlong)(int)uVar21 <
             (ulonglong)((*(longlong *)(param_1 + 0xa28) - lVar20) / 0x50));
  }
  plVar30 = plStack_2b0;
  plVar13 = plStack_2b8;
  iVar9 = iStack_370;
  pppplStack_378 = (longlong ****)*plStack_320;
  *plStack_320 = 0;
  if (pppplStack_378 != (longlong ****)0x0) {
    (**(code **)((longlong)*pppplStack_378 + 0x38))();
  }
  pppplStack_378 = (longlong ****)*plVar13;
  *plVar13 = 0;
  if (pppplStack_378 != (longlong ****)0x0) {
    (**(code **)((longlong)*pppplStack_378 + 0x38))();
  }
  pppplStack_378 = (longlong ****)*plVar30;
  *plVar30 = 0;
  if (pppplStack_378 != (longlong ****)0x0) {
    (**(code **)((longlong)*pppplStack_378 + 0x38))();
  }
  iStack_2d8 = -1;
  if (*(int *)(param_1 + 0x390) != 0) {
    iStack_2d8 = iVar9;
  }
  uStack_330 = func_0x0001804af450(param_1,&param_15);
  uStack_340 = func_0x0001804af690(param_1,&param_17);
  if (param_16 <= 27.0) {
    uVar26 = 0xff000000;
  }
  else if (param_16 <= 87.0) {
    uVar26 = (int)((param_16 - 27.0) * 4.25) * -0x1000000 - 0x1000000;
  }
  uStack_344 = uVar26 | 0xffffff;
  uVar36 = *(undefined8 *)(param_1 + 0x370);
  uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
  plVar13 = (longlong *)FUN_180275090(uVar12);
  pppplStack_378 = (longlong ****)plVar13;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  uStack_37c = 1;
  FUN_180275a60(uVar36,plVar13,1);
  plVar30 = plStack_320;
  pppplStack_378 = (longlong ****)0x0;
  pppplStack_318 = (longlong ****)*plStack_320;
  *plStack_320 = (longlong)plVar13;
  if (pppplStack_318 != (longlong ****)0x0) {
    (*(code *)(*pppplStack_318)[7])();
  }
  uStack_37c = 0;
  iVar9 = -1;
  iStack_370 = -1;
  iStack_348 = -1;
  lVar20 = *plVar30;
  uVar22 = uVar28;
  uVar27 = uVar28;
  uVar26 = uStack_384;
  iVar34 = iStack_348;
  if (*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4 != 0) {
    do {
      lVar20 = *(longlong *)(uVar22 + *(longlong *)(lVar20 + 0x38));
      puStack_1e8 = &UNK_1809fcc58;
      ppuStack_1e0 = &puStack_1d0;
      puStack_1d0 = (undefined *)((ulonglong)puStack_1d0 & 0xffffffffffffff00);
      uStack_1d8 = (undefined *)CONCAT44((int)((ulonglong)uStack_1d8 >> 0x20),0xd);
      strcpy_s(&puStack_1d0,0x40,&UNK_180a2e428);
      uStack_368 = (undefined **)&UNK_180a3c3e0;
      uStack_350 = 0;
      pppplStack_360 = (longlong ****)0x0;
      uStack_358 = 0;
      FUN_1806277c0(&uStack_368,(ulonglong)uStack_1d8 & 0xffffffff);
      if (0 < (int)uStack_1d8) {
        ppuVar17 = (undefined **)&DAT_18098bc73;
        if (ppuStack_1e0 != (undefined **)0x0) {
          ppuVar17 = ppuStack_1e0;
        }
                    // WARNING: Subroutine does not return
        memcpy(pppplStack_360,ppuVar17,(longlong)((int)uStack_1d8 + 1));
      }
      if ((ppuStack_1e0 != (undefined **)0x0) &&
         (uStack_358 = 0, pppplStack_360 != (longlong ****)0x0)) {
        *(undefined1 *)pppplStack_360 = 0;
      }
      cVar8 = FUN_180063510(lVar20 + 0x218,&uStack_368);
      uStack_368 = (undefined **)&UNK_180a3c3e0;
      if (pppplStack_360 != (longlong ****)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pppplStack_360 = (longlong ****)0x0;
      uStack_350 = uStack_350 & 0xffffffff00000000;
      uStack_368 = (undefined **)&UNK_18098bcb0;
      puStack_1e8 = &UNK_18098bcb0;
      iVar25 = (int)uVar27;
      uVar32 = uVar31;
      iVar34 = iVar25;
      if (cVar8 == '\0') {
        lVar20 = *(longlong *)(uVar22 + *(longlong *)(*plVar30 + 0x38));
        puStack_188 = &UNK_1809fcc58;
        puStack_180 = auStack_170;
        auStack_170[0] = 0;
        iStack_178 = 0xf;
        strcpy_s(auStack_170,0x40,&UNK_180a2e3d0);
        pppplStack_238 = (longlong ****)&UNK_180a3c3e0;
        ppplStack_220 = (longlong ***)0x0;
        pppplStack_230 = (longlong ****)0x0;
        auStack_228[0] = 0;
        FUN_1806277c0(&pppplStack_238,iStack_178);
        if (0 < iStack_178) {
          puVar18 = &DAT_18098bc73;
          if (puStack_180 != (undefined *)0x0) {
            puVar18 = puStack_180;
          }
                    // WARNING: Subroutine does not return
          memcpy(pppplStack_230,puVar18,(longlong)(iStack_178 + 1));
        }
        if ((puStack_180 != (undefined *)0x0) &&
           (auStack_228[0] = 0, pppplStack_230 != (longlong ****)0x0)) {
          *(undefined1 *)pppplStack_230 = 0;
        }
        cVar8 = FUN_180063510(lVar20 + 0x218,&pppplStack_238);
        pppplStack_238 = (longlong ****)&UNK_180a3c3e0;
        if (pppplStack_230 != (longlong ****)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pppplStack_230 = (longlong ****)0x0;
        ppplStack_220 = (longlong ***)((ulonglong)ppplStack_220 & 0xffffffff00000000);
        pppplStack_238 = (longlong ****)&UNK_18098bcb0;
        puStack_188 = &UNK_18098bcb0;
        uVar32 = uVar27;
        iVar34 = iStack_370;
        if (cVar8 == '\0') {
          uVar36 = *(undefined8 *)(uVar22 + *(longlong *)(*plVar30 + 0x38));
          puStack_128 = &UNK_1809fcc58;
          puStack_120 = auStack_110;
          auStack_110[0] = 0;
          uStack_118 = 0x11;
          strcpy_s(auStack_110,0x40,&UNK_180a2e3b8);
          cVar8 = FUN_1800755c0(uVar36,&puStack_128);
          puStack_128 = &UNK_18098bcb0;
          uVar32 = uVar31;
          iVar34 = iStack_370;
          if (cVar8 != '\0') {
            iVar9 = iVar25;
          }
        }
      }
      iStack_370 = iVar34;
      uVar10 = (uint)uVar32;
      lVar20 = *plVar30;
      uVar22 = uVar22 + 0x10;
      uVar27 = (ulonglong)(iVar25 + 1U);
      uVar31 = uVar32;
      param_1 = lStack_2c0;
      uVar26 = uVar10;
      iVar34 = iVar9;
    } while ((ulonglong)(longlong)(int)(iVar25 + 1U) <
             (ulonglong)(*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4));
  }
  iStack_348 = iVar34;
  uStack_384 = uVar26;
  lVar19 = **(longlong **)(lVar20 + 0x38);
  uStack_200 = *(undefined8 *)(lVar19 + 0xb8);
  uStack_1f8 = *(undefined8 *)(lVar19 + 0xc0);
  uVar22 = uVar28;
  uVar27 = uVar28;
  if (*(longlong *)(lVar20 + 0x40) - (longlong)*(longlong **)(lVar20 + 0x38) >> 4 != 0) {
    do {
      lVar20 = *(longlong *)(uVar22 + *(longlong *)(lVar20 + 0x38));
      pppplStack_238 = (longlong ****)&UNK_18098bc80;
      pppplStack_230 = &ppplStack_220;
      ppplStack_220 = (longlong ***)((ulonglong)ppplStack_220 & 0xffffffffffffff00);
      auStack_228[0] = 0xe;
      strcpy_s(&ppplStack_220,0x20,&UNK_180a2e3e8);
      uStack_368 = (undefined **)&UNK_180a3c3e0;
      uStack_350 = 0;
      pppplStack_360 = (longlong ****)0x0;
      uStack_358 = 0;
      FUN_1806277c0(&uStack_368,auStack_228[0]);
      if (0 < (int)auStack_228[0]) {
        pppplVar33 = (longlong ****)&DAT_18098bc73;
        if (pppplStack_230 != (longlong ****)0x0) {
          pppplVar33 = pppplStack_230;
        }
                    // WARNING: Subroutine does not return
        memcpy(pppplStack_360,pppplVar33,(longlong)(int)(auStack_228[0] + 1));
      }
      if ((pppplStack_230 != (longlong ****)0x0) &&
         (uStack_358 = 0, pppplStack_360 != (longlong ****)0x0)) {
        *(undefined1 *)pppplStack_360 = 0;
      }
      cVar8 = FUN_180063510(lVar20 + 0x218,&uStack_368);
      uStack_368 = (undefined **)&UNK_180a3c3e0;
      if (pppplStack_360 != (longlong ****)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pppplStack_360 = (longlong ****)0x0;
      uStack_350 = uStack_350 & 0xffffffff00000000;
      uStack_368 = (undefined **)&UNK_18098bcb0;
      pppplStack_238 = (longlong ****)&UNK_18098bcb0;
      if (cVar8 != '\0') {
        lVar20 = *(longlong *)(*(longlong *)(*plVar30 + 0x38) + (longlong)(int)uVar27 * 0x10);
        uStack_200 = *(undefined8 *)(lVar20 + 0xb8);
        uStack_1f8 = *(undefined8 *)(lVar20 + 0xc0);
        break;
      }
      uVar26 = (int)uVar27 + 1;
      lVar20 = *plVar30;
      uVar22 = uVar22 + 0x10;
      uVar27 = (ulonglong)uVar26;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4));
  }
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 3;
  (**(code **)(*(longlong *)*plVar30 + 0xb8))((longlong *)*plVar30,0,&lStack_298);
  if ((cStack_388 == '\0') && (plVar30 = plStack_320, lStack_290 - lStack_298 >> 3 != 0)) {
    bVar35 = iStack_310 == 5;
    uVar22 = uVar28;
    uVar27 = uVar28;
    do {
      puStack_3b8 = (undefined *)CONCAT71(puStack_3b8._1_7_,bVar35);
      FUN_1804b2750(param_1,*(undefined8 *)(lStack_298 + uVar22));
      pppplVar33 = *(longlong *****)(lStack_298 + uVar22);
      if ((pppplVar33[0x37] != (longlong ***)0x0) &&
         (((ulonglong)pppplVar33[0x37][0x27] & 0x200000) == 0)) {
        ppplStack_338 = (longlong ***)pppplVar33;
        if (pppplVar33 != (longlong ****)0x0) {
          (*(code *)(*pppplVar33)[5])(pppplVar33);
        }
        pppplStack_238 = (longlong ****)0x0;
        pppplStack_230 = (longlong ****)0x0;
        puStack_2f0 = auStack_228;
        pppplStack_210 = (longlong ****)0x0;
        ppplStack_220 = (longlong ***)0x0;
        auStack_228[0] = auStack_228[0] & 0xffffff00;
        if (pppplVar33 != (longlong ****)0x0) {
          pppplStack_378 = pppplVar33;
          (*(code *)(*pppplVar33)[5])(pppplVar33);
        }
        pppplStack_378 = pppplStack_238;
        pppplVar29 = pppplVar33;
        if (pppplStack_238 != (longlong ****)0x0) {
          ppplVar2 = *pppplStack_238;
          pppplStack_238 = pppplVar33;
          (*(code *)ppplVar2[7])();
          pppplVar29 = pppplStack_238;
        }
        pppplStack_238 = pppplVar29;
        uStack_218 = 0;
        ppplStack_220 = (longlong ***)pppplVar33;
        FUN_18007f4c0(auStack_228);
        pppplVar29 = pppplStack_210;
        pppplStack_318 = pppplStack_210;
        if (pppplStack_210 != (longlong ****)0x0) {
          (*(code *)(*pppplStack_210)[5])(pppplStack_210);
        }
        pppplVar23 = pppplStack_230;
        pppplStack_318 = pppplStack_230;
        pppplStack_230 = pppplVar29;
        if (pppplVar23 != (longlong ****)0x0) {
          (*(code *)(*pppplVar23)[7])();
        }
        uStack_208 = 0;
        cStack_206 = '\0';
        if (pppplVar33 != (longlong ****)0x0) {
          (*(code *)(*pppplVar33)[7])(pppplVar33);
        }
        FUN_180234a10(&pppplStack_238,1);
        puStack_1e8 = &UNK_180234790;
        ppuStack_1e0 = (undefined **)&UNK_18022bf60;
        uStack_1d8 = &UNK_1802347a0;
        puStack_1d0 = &UNK_1802347f0;
        puStack_1c8 = &UNK_180234830;
        pcStack_1c0 = FUN_180234880;
        uStack_1b8 = 0;
        uStack_368 = &puStack_1e8;
        pppplStack_360 = pppplStack_230;
        FUN_18040fa30(&uStack_368);
        if ((int)(*(int *)(pppplStack_230 + 0x11) + (*(int *)(pppplStack_230 + 0x11) >> 0x1f & 3U))
            >> 2 < 0) {
          pplStack_3a8 = (longlong **)&DAT_18098bc73;
          if (pppplStack_238[3] != (longlong ***)0x0) {
            pplStack_3a8 = (longlong **)pppplStack_238[3];
          }
          puStack_3a0 = (undefined8 *)
                        CONCAT44(puStack_3a0._4_4_,*(undefined4 *)(pppplStack_230 + 0xc));
          pplStack_3b0 = (longlong **)((ulonglong)pplStack_3b0 & 0xffffffff00000000);
          puStack_3b8 = &UNK_1809ffb30;
          FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3);
        }
        uStack_208 = CONCAT11(uStack_208._1_1_,1);
        if ((pppplStack_238 != (longlong ****)0x0) && (pppplStack_230 != (longlong ****)0x0)) {
          if (cStack_206 != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(auStack_228);
          if ((char)uStack_208 != '\0') {
            FUN_180079520(pppplStack_238);
          }
          if (uStack_208._1_1_ != '\0') {
            FUN_180079520(pppplStack_238);
          }
          pppplVar33 = pppplStack_230;
          pppplStack_2f8 = pppplStack_230;
          pppplStack_230 = (longlong ****)0x0;
          if (pppplVar33 != (longlong ****)0x0) {
            (*(code *)(*pppplVar33)[7])();
          }
        }
        puStack_2f0 = auStack_228;
        FUN_18007f6a0(auStack_228);
        if (pppplStack_210 != (longlong ****)0x0) {
          (*(code *)(*pppplStack_210)[7])();
        }
        if (pppplStack_230 != (longlong ****)0x0) {
          (*(code *)(*pppplStack_230)[7])();
        }
        if (pppplStack_238 != (longlong ****)0x0) {
          (*(code *)(*pppplStack_238)[7])();
        }
      }
      uVar26 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar26;
      uVar22 = uVar22 + 8;
      plVar30 = plStack_320;
      uVar10 = uStack_384;
    } while ((ulonglong)(longlong)(int)uVar26 < (ulonglong)(lStack_290 - lStack_298 >> 3));
  }
  plVar13 = plStack_320;
  fVar5 = param_19;
  uStack_384 = 0;
  lVar20 = *plVar30;
  if (*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4 != 0) {
    pppplStack_2e8 = (longlong ****)(longlong)iStack_370;
    pppplStack_2f8 = (longlong ****)(longlong)(int)uVar10;
    pppplVar33 = (longlong ****)(longlong)iStack_348;
    pppplStack_2c8 = (longlong ****)0x0;
    fStack_29c = (float)(uStack_330 >> 0x18) * 0.003921569;
    uStack_2a8 = (longlong *)
                 CONCAT44((float)(uStack_330 >> 8 & 0xff) * 0.003921569,
                          (float)(uStack_330 >> 0x10 & 0xff) * 0.003921569);
    plVar7 = uStack_2a8;
    fStack_2a0 = (float)(uStack_330 & 0xff) * 0.003921569;
    lStack_300 = 0;
    uVar36 = CONCAT44(fStack_29c,fStack_2a0);
    pppplStack_378 = pppplVar33;
    do {
      pppplVar29 = pppplStack_2c8;
      bVar24 = ~*(byte *)(lStack_300 + 8 + *(longlong *)(lVar20 + 0x38)) & 1;
      lVar20 = *(longlong *)(lStack_300 + *(longlong *)(lVar20 + 0x38));
      *(longlong **)(lVar20 + 0x238) = plVar7;
      *(undefined8 *)(lVar20 + 0x240) = uVar36;
      lStack_2e0 = lVar20;
      uVar10 = (uint)uVar28;
      if (pppplStack_2c8 == pppplStack_2f8) {
        if (bVar24 == 0) {
          lVar19 = *(longlong *)(param_1 + 0xa40) + 0x20;
        }
        else {
          lVar19 = *(longlong *)(param_1 + 0xa40) + 0x28;
        }
        plVar30 = *(longlong **)(lVar19 + (longlong)param_14 * 0x50);
        plStack_268 = plVar30;
        if (plVar30 != (longlong *)0x0) {
          (**(code **)(*plVar30 + 0x28))(plVar30);
        }
        FUN_180076910(lVar20,&plStack_268);
        uStack_26c = 0x3f800000;
        uStack_278 = 0x3f800000;
        uStack_274 = 0x3f800000;
        uStack_270 = 0x3f800000;
        auVar4._8_4_ = 0x3f800000;
        auVar4._0_8_ = 0x3f8000003f800000;
        auVar4._12_4_ = 0x3f800000;
        *(undefined1 (*) [16])(lVar20 + 0x238) = auVar4;
        uVar10 = uStack_384;
        if (plVar30 != (longlong *)0x0) {
          (**(code **)(*plVar30 + 0x38))(plVar30);
          uVar10 = uStack_384;
        }
      }
      if (((pppplVar29 != pppplVar33) && (pppplVar29 != pppplStack_2e8)) &&
         (pppplVar29 != pppplStack_2f8)) {
        if (bVar24 == 0) {
          lVar20 = *(longlong *)(param_1 + 0xa20) + 0x20;
        }
        else {
          lVar20 = *(longlong *)(param_1 + 0xa20) + 0x28;
        }
        pppplVar23 = *(longlong *****)(lVar20 + (longlong)param_13 * 0x50);
        pppplStack_318 = pppplVar23;
        if (pppplVar23 != (longlong ****)0x0) {
          (*(code *)(*pppplVar23)[5])(pppplVar23);
        }
        lVar20 = lStack_2e0;
        if (0 < *(int *)(param_1 + 0x3b0)) {
          lVar19 = (longlong)aiStack_328[0];
          plVar30 = *(longlong **)(*(longlong *)(param_1 + 0x3a8) + 0x40 + lVar19 * 0x48);
          uStack_2a8 = plVar30;
          if (plVar30 != (longlong *)0x0) {
            (**(code **)(*plVar30 + 0x28))(plVar30);
          }
          uStack_368 = (undefined **)0x0;
          pppplStack_360 = (longlong ****)0x0;
          lVar20 = lStack_2e0;
          if (plVar30 != (longlong *)0x0) {
            puVar18 = *(undefined **)(*(longlong *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
            puVar15 = &DAT_18098bc73;
            if (puVar18 != (undefined *)0x0) {
              puVar15 = puVar18;
            }
            lVar20 = strstr(puVar15,&UNK_180a2e3e0);
            cStack_380 = lVar20 != 0;
            FUN_18022cb40(pppplVar23,&uStack_330);
            uStack_37c = uStack_37c | 2;
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            ppplVar2 = pppplVar23[0x17];
            if (ppplVar2 != (longlong ***)0x0) {
              pplStack_260 = (longlong **)ppplVar2;
              (*(code *)(*ppplVar2)[5])(ppplVar2);
            }
            pplStack_260 = *(longlong ***)(lVar20 + 0xb8);
            *(longlong ****)(lVar20 + 0xb8) = ppplVar2;
            if (pplStack_260 != (longlong **)0x0) {
              (**(code **)((longlong)*pplStack_260 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            plVar3 = (longlong *)plVar30[0x17];
            if (plVar3 != (longlong *)0x0) {
              plStack_258 = plVar3;
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            plStack_258 = *(longlong **)(lVar20 + 0x108);
            *(longlong **)(lVar20 + 0x108) = plVar3;
            if (plStack_258 != (longlong *)0x0) {
              (**(code **)(*plStack_258 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            ppplVar2 = pppplVar23[0x19];
            if (ppplVar2 != (longlong ***)0x0) {
              pplStack_250 = (longlong **)ppplVar2;
              (*(code *)(*ppplVar2)[5])(ppplVar2);
            }
            pplStack_250 = *(longlong ***)(lVar20 + 200);
            *(longlong ****)(lVar20 + 200) = ppplVar2;
            if (pplStack_250 != (longlong **)0x0) {
              (**(code **)((longlong)*pplStack_250 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            lVar20 = CONCAT44(uStack_32c,uStack_330);
            plVar3 = (longlong *)plVar30[0x18];
            if (plVar3 != (longlong *)0x0) {
              puStack_2f0 = (uint *)plVar3;
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            puStack_2f0 = *(uint **)(lVar20 + 0x110);
            *(longlong **)(lVar20 + 0x110) = plVar3;
            if (puStack_2f0 != (uint *)0x0) {
              (**(code **)(*(longlong *)puStack_2f0 + 0x38))();
            }
            FUN_18022ce40(lVar20);
            uStack_368 = (undefined **)CONCAT44(uStack_368._4_4_,0x3f800000);
            if (cStack_380 == '\0') {
              iVar9 = *(int *)(param_1 + 0x5c4) + -1;
              fVar39 = fVar5;
              if (0.99 <= fVar5) {
                fVar39 = 0.99;
              }
              fVar39 = (float)iVar9 * fVar39;
              iVar34 = (int)fVar39;
              fVar37 = fVar39;
              if ((iVar34 != -0x80000000) && ((float)iVar34 != fVar39)) {
                auVar38._4_4_ = fVar39;
                auVar38._0_4_ = fVar39;
                auVar38._8_8_ = 0;
                uVar10 = movmskps(iVar9,auVar38);
                fVar37 = (float)(int)(iVar34 - (uVar10 & 1));
              }
              lVar20 = (longlong)(int)(fVar37 + 0.1);
              fVar39 = fVar39 - fVar37;
              fVar37 = 1.0 - fVar39;
              uVar26 = (uint)(longlong)
                             ((fVar37 * *(float *)(param_1 + 0x3c4 + lVar20 * 0x10) +
                              fVar39 * *(float *)(param_1 + 0x3d4 + lVar20 * 0x10)) * 256.0);
              uVar10 = 0xff;
              if (uVar26 < 0xff) {
                uVar10 = uVar26;
              }
              uVar21 = (uint)(longlong)
                             ((fVar39 * *(float *)(param_1 + 0x3d8 + lVar20 * 0x10) +
                              fVar37 * *(float *)(param_1 + 0x3c8 + lVar20 * 0x10)) * 256.0);
              uVar26 = 0xff;
              if (uVar21 < 0xff) {
                uVar26 = uVar21;
              }
              uVar16 = (uint)(longlong)
                             ((fVar39 * *(float *)(param_1 + 0x3dc + lVar20 * 0x10) +
                              fVar37 * *(float *)(param_1 + 0x3cc + lVar20 * 0x10)) * 256.0);
              uVar21 = 0xff;
              if (uVar16 < 0xff) {
                uVar21 = uVar16;
              }
              uVar10 = ((uVar10 | 0xffffff00) << 8 | uVar26) << 8 | uVar21;
              *(float *)(lStack_2e0 + 0x2a8) = (float)(uVar10 >> 0x10 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2ac) = (float)(uVar10 >> 8 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2b0) = (float)(uVar21 & 0xff) * 0.003921569;
              *(float *)(lStack_2e0 + 0x2b4) = (float)(uVar10 >> 0x18) * 0.003921569;
            }
            else {
              if (pppplStack_2e8 != (longlong ****)0xffffffffffffffff) {
                lVar20 = *(longlong *)
                          (*(longlong *)(*plVar13 + 0x38) + (longlong)pppplStack_2e8 * 0x10);
                puVar18 = *(undefined **)(*(longlong *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
                puVar15 = &DAT_18098bc73;
                if (puVar18 != (undefined *)0x0) {
                  puVar15 = puVar18;
                }
                lVar14 = strstr(puVar15,&UNK_180a2e4d0);
                puVar18 = *(undefined **)(*(longlong *)(param_1 + 0x3a8) + 8 + lVar19 * 0x48);
                puVar15 = &DAT_18098bc73;
                if (puVar18 != (undefined *)0x0) {
                  puVar15 = puVar18;
                }
                lVar19 = strstr(puVar15,&UNK_180a2e4c0);
                if (lVar14 != 0) {
                  *(undefined4 *)(lVar20 + 0x2a8) = 0x3f800000;
                }
                if (lVar19 != 0) {
                  *(undefined4 *)(lVar20 + 0x2ac) = 0x3f800000;
                }
              }
              uStack_368 = (undefined **)CONCAT44(0x3f800000,(undefined4)uStack_368);
            }
            lVar20 = lStack_2e0;
            pppplVar33 = (longlong ****)CONCAT44(uStack_32c,uStack_330);
            if (pppplVar33 != (longlong ****)0x0) {
              ppplStack_338 = (longlong ***)pppplVar33;
              (*(code *)(*pppplVar33)[5])(pppplVar33);
            }
            ppplStack_338 = (longlong ***)pppplVar23;
            pppplStack_318 = pppplVar33;
            if (pppplVar23 != (longlong ****)0x0) {
              (*(code *)(*pppplVar23)[7])();
            }
            uStack_37c = uStack_37c & 0xfffffffd;
            pppplVar23 = pppplVar33;
            if ((longlong *)CONCAT44(uStack_32c,uStack_330) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_32c,uStack_330) + 0x38))();
            }
          }
          *(undefined ***)(lVar20 + 0x2b8) = uStack_368;
          *(longlong *****)(lVar20 + 0x2c0) = pppplStack_360;
          pppplVar29 = pppplStack_2c8;
          if (plVar30 != (longlong *)0x0) {
            (**(code **)(*plVar30 + 0x38))(plVar30);
            pppplVar29 = pppplStack_2c8;
          }
        }
        FUN_180076910(lVar20,&pppplStack_318);
        pppplVar33 = pppplStack_378;
        uVar10 = uStack_384;
        if (pppplVar23 != (longlong ****)0x0) {
          (*(code *)(*pppplVar23)[7])(pppplVar23);
          pppplVar33 = pppplStack_378;
          uVar10 = uStack_384;
        }
      }
      uStack_384 = uVar10 + 1;
      uVar28 = (ulonglong)uStack_384;
      pppplStack_2c8 = (longlong ****)((longlong)pppplVar29 + 1);
      lStack_300 = lStack_300 + 0x10;
      lVar20 = *plVar13;
      plVar30 = plStack_320;
    } while ((ulonglong)(longlong)(int)uStack_384 <
             (ulonglong)(*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4));
  }
  iVar34 = 0;
  aiStack_328[0] = param_18;
  lVar19 = (longlong)iStack_370;
  iVar9 = iStack_370;
  if (-1 < iStack_370) {
    uVar11 = 0xffffffff;
    if (-1 < param_13) {
      uVar11 = func_0x0001804af570(param_1,aiStack_328);
    }
    FUN_180094f80(*(undefined8 *)(*(longlong *)(lVar20 + 0x38) + lVar19 * 0x10),uVar11);
    iVar9 = (int)lVar19;
    lVar20 = *plVar30;
  }
  pplVar6 = pplStack_308;
  uVar11 = uStack_340;
  uVar10 = uStack_344;
  cVar8 = cStack_388;
  plVar13 = *(longlong **)(lVar20 + 0x38);
  if (*(longlong *)(lVar20 + 0x40) - (longlong)plVar13 >> 4 != 0) {
    do {
      if ((iVar34 != iStack_348) && (iVar34 != iVar9)) {
        *(undefined4 *)(*plVar13 + 0x2b4) = param_20;
      }
      iVar34 = iVar34 + 1;
      plVar13 = *(longlong **)(lVar20 + 0x38);
      param_1 = lStack_2c0;
    } while ((ulonglong)(longlong)iVar34 <
             (ulonglong)(*(longlong *)(lVar20 + 0x40) - (longlong)plVar13 >> 4));
  }
  if (((0 < iStack_2d8) && (iStack_2d8 < *(int *)(param_1 + 0x390))) && (iStack_310 != 5)) {
    puStack_398 = &uStack_200;
    puStack_3a0 = (undefined8 *)CONCAT71(puStack_3a0._1_7_,cStack_388);
    pplStack_3a8 = pplStack_308;
    pplStack_3b0 = (longlong **)CONCAT44(pplStack_3b0._4_4_,uStack_344);
    puStack_3b8 = (undefined *)CONCAT44(puStack_3b8._4_4_,uStack_340);
    uVar36 = FUN_1804b39e0((longlong)iStack_2d8 * 400 + *(longlong *)(param_1 + 0x388),
                           &ppplStack_338,param_1,iStack_310);
    FUN_180060b80(plStack_2b8,uVar36);
    if ((longlong ****)ppplStack_338 != (longlong ****)0x0) {
      (*(code *)(*ppplStack_338)[7])();
    }
  }
  if (((-1 < iStack_2d4) && (iStack_2d4 < *(int *)(param_1 + 0x380))) && (iStack_2d0 != 5)) {
    puStack_398 = &uStack_200;
    puStack_3a0 = (undefined8 *)CONCAT71(puStack_3a0._1_7_,cVar8);
    pplStack_3a8 = pplVar6;
    pplStack_3b0 = (longlong **)CONCAT44(pplStack_3b0._4_4_,uVar10);
    puStack_3b8 = (undefined *)CONCAT44(puStack_3b8._4_4_,uVar11);
    uVar36 = FUN_1804b4700((longlong)iStack_2d4 * 400 + *(longlong *)(param_1 + 0x378),
                           &ppplStack_338,param_1);
    FUN_180060b80(plStack_2b0,uVar36);
    if ((longlong ****)ppplStack_338 != (longlong ****)0x0) {
      (*(code *)(*ppplStack_338)[7])();
    }
  }
  puStack_3a0 = &uStack_200;
  pplStack_3a8 = (longlong **)CONCAT71(pplStack_3a8._1_7_,cVar8);
  pplStack_3b0 = pplVar6;
  puStack_3b8 = (undefined *)CONCAT44(puStack_3b8._4_4_,uVar10);
  uVar36 = FUN_1804b3c30((longlong)iStack_2cc * 0x58 + *(longlong *)(param_1 + 0x398),&ppplStack_338
                         ,param_1,uVar11);
  FUN_180060b80(uStack_248,uVar36);
  if ((longlong ****)ppplStack_338 != (longlong ****)0x0) {
    (*(code *)(*ppplStack_338)[7])();
  }
  if (lStack_298 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_3d8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001804b10a7)
// WARNING: Removing unreachable block (ram,0x0001804b10b5)
// WARNING: Removing unreachable block (ram,0x0001804b10ac)
// WARNING: Removing unreachable block (ram,0x0001804b10b8)
// WARNING: Removing unreachable block (ram,0x0001804b10bd)
// WARNING: Removing unreachable block (ram,0x0001804b10c7)
// WARNING: Removing unreachable block (ram,0x0001804b13b7)
// WARNING: Removing unreachable block (ram,0x0001804b13d4)
// WARNING: Removing unreachable block (ram,0x0001804b1407)
// WARNING: Removing unreachable block (ram,0x0001804b100a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address






