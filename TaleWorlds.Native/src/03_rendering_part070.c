#include "TaleWorlds.Native.Split.h"

// 03_rendering_part070.c - 9 个函数

// 函数: void FUN_180307ca0(longlong param_1,longlong param_2)
void FUN_180307ca0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong **pplVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auStack_488 [32];
  undefined1 *puStack_468;
  float fStack_460;
  float fStack_458;
  undefined4 uStack_450;
  int iStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined4 uStack_430;
  longlong **pplStack_428;
  int iStack_420;
  undefined4 uStack_41c;
  uint uStack_418;
  uint uStack_414;
  int iStack_410;
  longlong **pplStack_408;
  longlong lStack_400;
  longlong *plStack_3f8;
  longlong *plStack_3f0;
  int *piStack_3e8;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  longlong *plStack_3d8;
  longlong *plStack_3d0;
  longlong *plStack_3c8;
  longlong *plStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 uStack_3b0;
  int *piStack_3a8;
  undefined8 uStack_3a0;
  int *piStack_398;
  longlong lStack_390;
  int *piStack_388;
  undefined8 uStack_380;
  int *piStack_378;
  longlong lStack_370;
  int *piStack_368;
  undefined8 uStack_360;
  int *piStack_358;
  undefined8 uStack_350;
  int *piStack_348;
  undefined8 uStack_340;
  int *piStack_338;
  longlong lStack_330;
  undefined1 auStack_328 [12];
  undefined4 uStack_31c;
  undefined4 uStack_30c;
  undefined4 uStack_2fc;
  undefined4 uStack_2ec;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [128];
  undefined4 uStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined4 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [72];
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [72];
  ulonglong uStack_68;
  
  uStack_3b0 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_488;
  iVar16 = 0;
  iVar12 = 0;
  plVar11 = *(longlong **)(param_1 + 0x1b90);
  lStack_400 = param_1;
  if (plVar11 != *(longlong **)(param_1 + 0x1b98)) {
    do {
      iVar16 = iVar16 + (int)(*(longlong *)(*plVar11 + 0x90) - *(longlong *)(*plVar11 + 0x88) >> 3);
      plVar11 = plVar11 + 1;
    } while (plVar11 != *(longlong **)(param_1 + 0x1b98));
    if (0 < iVar16) {
      piVar1 = (int *)(param_1 + 0x78);
      iVar16 = *piVar1;
      *(int *)(param_2 + 0x124b8) = iVar16;
      iStack_410 = iVar16;
      if (0 < iVar16) {
        iVar3 = *piVar1;
        uStack_3e0 = 0;
        pplStack_428 = (longlong **)piVar1;
        iStack_420 = iVar3;
        piStack_3e8 = piVar1;
        iVar4 = iVar3;
        if (iVar3 != 0) {
          for (; iVar4 != 0; iVar4 = iVar4 >> 1) {
            iVar12 = iVar12 + 1;
          }
          uVar20 = CONCAT44(uStack_41c,iVar3);
          lVar17 = (ulonglong)uStack_3dc << 0x20;
          piStack_3a8 = piVar1;
          uStack_3a0 = uVar20;
          piStack_398 = piVar1;
          lStack_390 = lVar17;
          FUN_180308a90(&piStack_398,&piStack_3a8,(longlong)(iVar12 + -1) * 2);
          if (iVar3 < 0x1d) {
            piStack_348 = piVar1;
            uStack_340 = uVar20;
            piStack_338 = piVar1;
            lStack_330 = lVar17;
            FUN_180308670(&piStack_338,&piStack_348);
          }
          else {
            iStack_420 = 0x1c;
            uStack_380 = CONCAT44(uStack_41c,0x1c);
            pplStack_428 = (longlong **)piVar1;
            piStack_388 = piVar1;
            piStack_378 = piVar1;
            lStack_370 = lVar17;
            FUN_180308670(&piStack_378,&piStack_388);
            iStack_420 = 0x1c;
            uStack_350 = CONCAT44(uStack_41c,0x1c);
            pplStack_428 = (longlong **)piVar1;
            piStack_368 = piVar1;
            uStack_360 = uVar20;
            piStack_358 = piVar1;
            FUN_180308820(&piStack_358,&piStack_368);
          }
        }
        fVar19 = (float)iVar16 * 0.006666667;
        fVar21 = 0.0;
        if ((0.0 <= fVar19) && (fVar21 = fVar19, 1.0 <= fVar19)) {
          fVar21 = 1.0;
        }
        fVar19 = *(float *)(_DAT_180c86870 + 0x388);
        FUN_180287b30(param_2 + 0xf0,auStack_328);
        uStack_31c = 0;
        uStack_30c = 0;
        uStack_2fc = 0;
        uStack_2ec = 0x3f800000;
        puStack_128 = &UNK_1809fcc58;
        puStack_120 = auStack_110;
        auStack_110[0] = 0;
        uStack_118 = 0x1e;
        uVar20 = strcpy_s(auStack_110,0x40,&UNK_180a1a228);
        uStack_430 = 0x100;
        uStack_438 = 1;
        uStack_440 = 0;
        uStack_450 = 0x50;
        fStack_458 = 0.0;
        fStack_460 = 4.2039e-45;
        puStack_468 = (undefined1 *)CONCAT44(puStack_468._4_4_,0x61);
        iStack_448 = iVar16;
        puVar8 = (undefined8 *)
                 FUN_1800b0a10(uVar20,&plStack_3d0,*(undefined4 *)(param_2 + 0x1bd4),&puStack_128);
        uVar20 = *puVar8;
        *puVar8 = 0;
        plStack_3d8 = *(longlong **)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = uVar20;
        if (plStack_3d8 != (longlong *)0x0) {
          (**(code **)(*plStack_3d8 + 0x38))();
        }
        if (plStack_3d0 != (longlong *)0x0) {
          (**(code **)(*plStack_3d0 + 0x38))();
        }
        puStack_128 = &UNK_18098bcb0;
        puStack_c8 = &UNK_1809fcc58;
        puStack_c0 = auStack_b0;
        auStack_b0[0] = 0;
        uStack_b8 = 0x21;
        uVar20 = strcpy_s(auStack_b0,0x40,&UNK_180a1a200);
        uStack_430 = 0x100;
        uStack_438 = 1;
        uStack_440 = 0;
        uStack_450 = 0x1b0;
        fStack_458 = 0.0;
        fStack_460 = 4.2039e-45;
        puStack_468 = (undefined1 *)CONCAT44(puStack_468._4_4_,0x61);
        iStack_448 = iVar16;
        puVar8 = (undefined8 *)
                 FUN_1800b0a10(uVar20,&plStack_3c0,*(undefined4 *)(param_2 + 0x1bd4),&puStack_c8);
        uVar20 = *puVar8;
        *puVar8 = 0;
        plStack_3c8 = *(longlong **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = uVar20;
        if (plStack_3c8 != (longlong *)0x0) {
          (**(code **)(*plStack_3c8 + 0x38))();
        }
        if (plStack_3c0 != (longlong *)0x0) {
          (**(code **)(*plStack_3c0 + 0x38))();
        }
        puStack_c8 = &UNK_18098bcb0;
        uStack_418 = 0;
        if (0 < iVar16) {
          pplStack_428 = (longlong **)(param_1 + 0x980);
          do {
            pplVar5 = pplStack_428;
            LOCK();
            uVar7 = *(uint *)pplStack_428;
            *(uint *)pplStack_428 = *(uint *)pplStack_428 + 1;
            UNLOCK();
            uVar6 = uVar7 >> 0xb;
            uVar14 = (ulonglong)uVar6;
            pcVar13 = (char *)((longlong)pplStack_428 + uVar14 + 0x808);
            puVar15 = (uint *)((longlong)pplStack_428 + ((ulonglong)uVar6 * 2 + 2) * 4);
            lVar17 = -0x808 - (longlong)pplStack_428;
            do {
              iVar12 = (int)uVar14;
              if (*(longlong *)puVar15 == 0) {
                lVar9 = FUN_18062b420(_DAT_180c8ed18,0x28000,0x25);
                LOCK();
                bVar18 = *(longlong *)((longlong)pplVar5 + ((longlong)iVar12 * 2 + 2) * 4) == 0;
                if (bVar18) {
                  *(longlong *)((longlong)pplVar5 + ((longlong)iVar12 * 2 + 2) * 4) = lVar9;
                }
                UNLOCK();
                if (bVar18) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar12 + 0x808 + (longlong)pplVar5) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(lVar9);
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              lVar9 = lStack_400;
              uVar14 = (ulonglong)(iVar12 + 1);
              puVar15 = puVar15 + 2;
              pcVar13 = pcVar13 + 1;
            } while ((longlong)(pcVar13 + lVar17) <= (longlong)(ulonglong)uVar6);
            piStack_3e8 = (int *)(*(longlong *)((longlong)pplVar5 + ((ulonglong)uVar6 * 2 + 2) * 4)
                                 + (ulonglong)(uVar7 - (uVar7 & 0xfffff800)) * 0x50);
            LOCK();
            puVar15 = (uint *)(lStack_400 + 0x1288);
            uStack_414 = *puVar15;
            *puVar15 = *puVar15 + 1;
            UNLOCK();
            uVar7 = uStack_414 >> 0xb;
            uVar14 = (ulonglong)uVar7;
            lVar17 = lStack_400 + 0x1288;
            pcVar13 = (char *)(lStack_400 + 0x1a90 + uVar14);
            plVar11 = (longlong *)(lStack_400 + 0x1290 + (ulonglong)uVar7 * 8);
            do {
              iVar12 = (int)uVar14;
              if (*plVar11 == 0) {
                lVar10 = FUN_18062b420(_DAT_180c8ed18,0xd8000,0x25);
                plVar2 = (longlong *)(lVar9 + 0x1290 + (longlong)iVar12 * 8);
                LOCK();
                bVar18 = *plVar2 == 0;
                if (bVar18) {
                  *plVar2 = lVar10;
                }
                UNLOCK();
                if (bVar18) {
                  FUN_1803085c0(lVar17,iVar12 << 0xb);
                  LOCK();
                  *(undefined1 *)((longlong)iVar12 + 0x808 + lVar17) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              param_1 = lStack_400;
              uVar6 = uStack_418;
              uVar14 = (ulonglong)(iVar12 + 1);
              plVar11 = plVar11 + 1;
              pcVar13 = pcVar13 + 1;
            } while ((longlong)(pcVar13 + (-0x808 - lVar17)) <= (longlong)(ulonglong)uVar7);
            puStack_468 = auStack_328;
            fStack_460 = fVar21 * 0.875;
            fStack_458 = 1.0 / fVar19;
            FUN_1803076d0(lStack_400,
                          *(undefined8 *)
                           (*(longlong *)(lStack_400 + 0x80 + (ulonglong)(uStack_418 >> 0xb) * 8) +
                           (ulonglong)(uStack_418 + (uStack_418 >> 0xb) * -0x800) * 8),
                          *(longlong *)(lStack_400 + 0x1290 + (ulonglong)uVar7 * 8) +
                          (ulonglong)(uStack_414 - (uStack_414 & 0xfffff800)) * 0x1b0,piStack_3e8);
            uStack_418 = uVar6 + 1;
            iVar16 = iStack_410;
          } while ((int)uStack_418 < iStack_410);
        }
        pplStack_428 = (longlong **)&puStack_2e8;
        puStack_2e8 = &UNK_1809fcc28;
        puStack_2e0 = auStack_2d0;
        uStack_2d8 = 0;
        auStack_2d0[0] = 0;
        uStack_250 = 0xb;
        uStack_248 = *(undefined8 *)(param_1 + 0x68);
        uStack_238 = 0x28000;
        lStack_240 = param_1 + 0x988;
        lStack_230 = (longlong)iVar16 * 0x50;
        uVar20 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar11 = (longlong *)FUN_18005ce30(uVar20,&puStack_2e8);
        pplStack_408 = (longlong **)plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        uVar20 = _DAT_180c82868;
        pplStack_428 = &plStack_3f8;
        plStack_3f8 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        FUN_18005e370(uVar20,&plStack_3f8);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11);
        }
        puStack_2e8 = &UNK_18098bcb0;
        pplStack_408 = (longlong **)&puStack_208;
        puStack_208 = &UNK_1809fcc28;
        puStack_200 = auStack_1f0;
        uStack_1f8 = 0;
        auStack_1f0[0] = 0;
        uStack_170 = 0xb;
        uStack_168 = *(undefined8 *)(param_1 + 0x70);
        uStack_158 = 0xd8000;
        lStack_160 = param_1 + 0x1290;
        lStack_150 = (longlong)iVar16 * 0x1b0;
        uVar20 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar11 = (longlong *)FUN_18005ce30(uVar20,&puStack_208);
        ppuStack_3b8 = (undefined **)plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        uVar20 = _DAT_180c82868;
        pplStack_408 = &plStack_3f0;
        plStack_3f0 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        FUN_18005e370(uVar20,&plStack_3f0);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11);
        }
        ppuStack_3b8 = &puStack_208;
        puStack_208 = &UNK_18098bcb0;
      }
      goto LAB_1803084bf;
    }
  }
  *(undefined4 *)(param_2 + 0x124b8) = 0;
LAB_1803084bf:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_488);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180308500(uint *param_1,undefined4 *param_2)
void FUN_180308500(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  uVar2 = uVar1 >> 0xb;
  uVar4 = (ulonglong)uVar2;
  if (*(longlong *)(param_1 + (ulonglong)uVar2 * 2 + 2) == 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x18);
    LOCK();
    bVar5 = *(longlong *)(param_1 + uVar4 * 2 + 2) == 0;
    if (bVar5) {
      *(longlong *)(param_1 + uVar4 * 2 + 2) = lVar3;
    }
    UNLOCK();
    if (bVar5) {
      LOCK();
      *(undefined1 *)(uVar4 + 0x408 + (longlong)param_1) = 0;
      UNLOCK();
    }
    else {
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      do {
      } while (*(char *)(uVar4 + 0x408 + (longlong)param_1) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar4 + 0x408 + (longlong)param_1) != '\0');
  }
  *(undefined4 *)(*(longlong *)(param_1 + uVar4 * 2 + 2) + (ulonglong)(uVar1 + uVar2 * -0x800) * 4)
       = *param_2;
  return;
}





// 函数: void FUN_1803085c0(longlong param_1,uint param_2)
void FUN_1803085c0(longlong param_1,uint param_2)

{
  if ((int)param_2 < (int)(param_2 + 0x800)) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0xb) * 8) +
           (longlong)(int)(param_2 + (param_2 >> 0xb) * -0x800) * 0x1b0,0,0x100);
  }
  return;
}





// 函数: void FUN_1803085e2(void)
void FUN_1803085e2(void)

{
  longlong unaff_RBP;
  uint unaff_EDI;
  
                    // WARNING: Subroutine does not return
  memset(*(longlong *)(unaff_RBP + 8 + (ulonglong)(unaff_EDI >> 0xb) * 8) +
         (longlong)(int)(unaff_EDI + (unaff_EDI >> 0xb) * -0x800) * 0x1b0,0,0x100);
}





// 函数: void FUN_180308660(void)
void FUN_180308660(void)

{
  return;
}





// 函数: void FUN_180308670(longlong *param_1,longlong param_2,undefined8 param_3)
void FUN_180308670(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plStackX_10;
  undefined8 uStackX_18;
  longlong *plStackX_20;
  
  uVar9 = *(uint *)(param_1 + 1);
  uStackX_18 = CONCAT44((int)((ulonglong)param_3 >> 0x20),uVar9);
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar9 != uVar1) {
    lVar4 = *param_1;
    lVar3 = *param_1;
    uVar5 = *(uint *)(param_1 + 1);
    while (uVar5 = uVar5 + 1, uVar5 != uVar1) {
      plVar2 = *(longlong **)
                (*(longlong *)(lVar3 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
                (ulonglong)(uVar5 + (uVar5 >> 0xb) * -0x800) * 8);
      uVar8 = uVar5;
      uVar7 = uVar5;
      if (uVar5 != uVar9) {
        do {
          uVar7 = uVar7 - 1;
          plStackX_10 = *(longlong **)
                         (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
                         (ulonglong)(uVar7 & 0x7ff) * 8);
          if (plStackX_10 != (longlong *)0x0) {
            (**(code **)(*plStackX_10 + 0x28))();
          }
          plStackX_20 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x28))(plVar2);
          }
          cVar6 = FUN_180306d20(&plStackX_20,&plStackX_10);
          uVar9 = (uint)uStackX_18;
          if (cVar6 == '\0') break;
          *(undefined8 *)
           (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
           (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8) =
               *(undefined8 *)
                (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
                (ulonglong)(uVar7 & 0x7ff) * 8);
          uVar8 = uVar8 - 1;
        } while (uVar7 != (uint)uStackX_18);
      }
      *(longlong **)
       (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
       (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8) = plVar2;
    }
  }
  return;
}





// 函数: void FUN_180308820(undefined1 (*param_1) [16],longlong param_2,undefined8 param_3)
void FUN_180308820(undefined1 (*param_1) [16],longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint uStackX_18;
  undefined4 uStackX_1c;
  longlong **pplStackX_20;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  
  auStack_58 = *param_1;
  uVar10 = auStack_58._8_4_;
  _uStackX_18 = CONCAT44((int)((ulonglong)param_3 >> 0x20),*(uint *)(param_2 + 8));
  if (uVar10 != *(uint *)(param_2 + 8)) {
    uVar3 = auStack_58._0_8_;
    uVar8 = auStack_58._0_4_;
    uVar9 = auStack_58._4_4_;
    while( true ) {
      auVar4 = auStack_58;
      uStack_68 = CONCAT44(uVar9,uVar8);
      plVar1 = *(longlong **)
                (*(longlong *)(uVar3 + 8 + (ulonglong)(uVar10 >> 0xb) * 8) +
                (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 8);
      uVar7 = uVar10;
      uVar2 = uVar10;
      while( true ) {
        uVar2 = uVar2 - 1;
        pplStackX_20 = &plStackX_8;
        plStackX_8 = *(longlong **)
                      (*(longlong *)(uVar3 + 8 + (ulonglong)(uVar2 >> 0xb) * 8) +
                      (ulonglong)(uVar2 & 0x7ff) * 8);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        plStackX_10 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        cVar6 = FUN_180306d20(&plStackX_10,&plStackX_8);
        if (cVar6 == '\0') break;
        *(undefined8 *)
         (*(longlong *)(uStack_68 + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
         (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 8) =
             *(undefined8 *)
              (*(longlong *)(uVar3 + 8 + (ulonglong)(uVar2 >> 0xb) * 8) +
              (ulonglong)(uVar2 & 0x7ff) * 8);
        uVar7 = uVar7 - 1;
      }
      *(longlong **)
       (*(longlong *)(uStack_68 + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
       (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 8) = plVar1;
      uVar10 = uVar10 + 1;
      auStack_58._8_4_ = uVar10;
      auVar5 = auStack_58;
      if (uVar10 == uStackX_18) break;
      auStack_58._0_4_ = auVar4._0_4_;
      auStack_58._4_4_ = auVar4._4_4_;
      uVar8 = auStack_58._0_4_;
      uVar9 = auStack_58._4_4_;
      auStack_58 = auVar5;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803089a0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c05030;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180308a90(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)
void FUN_180308a90(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uStackX_20;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  lVar4 = (int)param_2[1] - lVar8;
  uStackX_20 = param_4;
  while ((0x1c < lVar4 && (0 < param_3))) {
    uVar9 = (int)param_2[1] - 1;
    uVar6 = uVar9 >> 0xb;
    uVar3 = (int)(((int)param_2[1] - lVar8) / 2) + uVar1;
    uVar7 = uVar3 >> 0xb;
    puVar5 = (undefined8 *)
             FUN_180308f10(*(longlong *)(*param_1 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
                           (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 8,
                           *(longlong *)(*param_1 + 8 + (ulonglong)uVar7 * 8) +
                           (ulonglong)(uVar3 + uVar7 * -0x800) * 8,
                           *(longlong *)(*param_2 + 8 + (ulonglong)uVar6 * 8) +
                           (ulonglong)(uVar9 + uVar6 * -0x800) * 8);
    uStack_a8 = (undefined4)*param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = (undefined4)param_2[1];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_98 = (undefined4)*param_1;
    uStack_94 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_90 = (undefined4)param_1[1];
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStackX_20 = *puVar5;
    FUN_1803090c0(&lStack_88,&uStack_98,&uStack_a8,&uStackX_20);
    lVar2 = lStack_80;
    lVar4 = lStack_88;
    uStack_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_3 = param_3 + -1;
    lStack_68 = lStack_88;
    lStack_60 = lStack_80;
    FUN_180308a90(&lStack_68,&uStack_78,param_3,FUN_180306d20);
    *param_2 = lVar4;
    param_2[1] = lVar2;
    lVar4 = (int)param_2[1] - lVar8;
  }
  if (param_3 == 0) {
    lStack_58 = *param_2;
    lStack_50 = param_2[1];
    uStack_38 = (undefined4)*param_1;
    uStack_34 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_30 = (undefined4)param_1[1];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    lStack_48 = lStack_58;
    lStack_40 = lStack_50;
    FUN_180308c30(&uStack_38,&lStack_48,&lStack_58);
  }
  return;
}





// 函数: void FUN_180308aa7(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_180308aa7(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,longlong param_11,undefined8 param_12,
                  undefined8 param_13,longlong param_14,longlong param_15,longlong param_16,
                  longlong param_17,longlong param_18,longlong param_19,undefined4 param_20,
                  undefined4 param_21)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong in_RAX;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong lVar8;
  longlong *unaff_RDI;
  uint uVar9;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000f8;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBP;
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R14;
  if (0x1c < in_RAX - lVar8) {
    *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
    *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
    *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
    *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar9 = (int)unaff_RDI[1] - 1;
      uVar6 = uVar9 >> 0xb;
      uVar4 = (int)(((int)unaff_RDI[1] - lVar8) / 2) + uVar1;
      uVar7 = uVar4 >> 0xb;
      puVar5 = (undefined8 *)
               FUN_180308f10(*(longlong *)(*param_1 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
                             (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 8,
                             *(longlong *)(*param_1 + 8 + (ulonglong)uVar7 * 8) +
                             (ulonglong)(uVar4 + uVar7 * -0x800) * 8,
                             *(longlong *)(*unaff_RDI + 8 + (ulonglong)uVar6 * 8) +
                             (ulonglong)(uVar9 + uVar6 * -0x800) * 8);
      param_6._0_4_ = (undefined4)*unaff_RDI;
      param_6._4_4_ = *(undefined4 *)((longlong)unaff_RDI + 4);
      param_7._0_4_ = (undefined4)unaff_RDI[1];
      param_7._4_4_ = *(undefined4 *)((longlong)unaff_RDI + 0xc);
      param_8._0_4_ = (undefined4)*param_1;
      param_8._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
      param_9._0_4_ = (undefined4)param_1[1];
      param_9._4_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
      in_stack_000000f8 = *puVar5;
      FUN_1803090c0(&param_10,&param_8,&param_6,&stack0x000000f8);
      lVar3 = param_11;
      lVar2 = param_10;
      param_12._0_4_ = (undefined4)*unaff_RDI;
      param_12._4_4_ = *(undefined4 *)((longlong)unaff_RDI + 4);
      param_13._0_4_ = (undefined4)unaff_RDI[1];
      param_13._4_4_ = *(undefined4 *)((longlong)unaff_RDI + 0xc);
      param_3 = param_3 + -1;
      param_14 = param_10;
      param_15 = param_11;
      FUN_180308a90(&param_14,&param_12,param_3,FUN_180306d20);
      *unaff_RDI = lVar2;
      unaff_RDI[1] = lVar3;
    } while (0x1c < (int)unaff_RDI[1] - lVar8);
  }
  if (param_3 == 0) {
    param_16 = *unaff_RDI;
    param_17 = unaff_RDI[1];
    param_20 = (undefined4)*param_1;
    uStack00000000000000a4 = *(undefined4 *)((longlong)param_1 + 4);
    param_21 = (undefined4)param_1[1];
    uStack00000000000000ac = *(undefined4 *)((longlong)param_1 + 0xc);
    param_18 = param_16;
    param_19 = param_17;
    FUN_180308c30(&param_20,&param_18,&param_16);
  }
  return;
}





