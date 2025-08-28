#include "TaleWorlds.Native.Split.h"

// 03_rendering_part088.c - 4 个函数

// 函数: void FUN_18031a6c0(undefined8 *param_1,longlong param_2,char param_3)
void FUN_18031a6c0(undefined8 *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 auStack_828 [32];
  undefined8 uStack_808;
  undefined8 *puStack_800;
  int iStack_7f8;
  longlong **pplStack_7e8;
  longlong **pplStack_7e0;
  longlong **pplStack_7d8;
  longlong **pplStack_7d0;
  longlong **pplStack_7c8;
  longlong **pplStack_7c0;
  longlong *plStack_7b8;
  longlong *plStack_7b0;
  longlong *plStack_7a8;
  longlong *plStack_7a0;
  longlong *plStack_798;
  longlong *plStack_790;
  undefined **ppuStack_788;
  longlong *plStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined2 uStack_768;
  undefined1 uStack_766;
  undefined4 uStack_764;
  undefined1 uStack_760;
  undefined8 uStack_758;
  longlong *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined2 uStack_718;
  undefined1 uStack_716;
  undefined4 uStack_714;
  undefined1 uStack_710;
  undefined8 uStack_708;
  longlong alStack_700 [3];
  undefined4 uStack_6e8;
  undefined8 uStack_6e0;
  longlong alStack_6d8 [3];
  undefined4 uStack_6c0;
  undefined8 uStack_6b8;
  longlong *plStack_6a8;
  undefined1 *puStack_6a0;
  undefined4 uStack_698;
  undefined1 auStack_690 [128];
  undefined4 uStack_610;
  undefined8 *puStack_608;
  undefined4 uStack_5f8;
  longlong *plStack_5c8;
  undefined1 *puStack_5c0;
  undefined4 uStack_5b8;
  undefined1 auStack_5b0 [128];
  undefined4 uStack_530;
  undefined8 *puStack_528;
  undefined4 uStack_518;
  undefined *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [128];
  undefined4 uStack_450;
  undefined8 *puStack_448;
  undefined4 uStack_438;
  longlong *plStack_408;
  undefined1 *puStack_400;
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [128];
  undefined4 uStack_370;
  undefined8 uStack_368;
  longlong *plStack_328;
  undefined1 *puStack_320;
  undefined4 uStack_318;
  undefined1 auStack_310 [128];
  undefined4 uStack_290;
  undefined8 uStack_288;
  longlong *plStack_248;
  undefined1 *puStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [128];
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [72];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [72];
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_6b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_828;
  if (param_1[8] != 0) {
    FUN_18031b630(param_2 + 0x180,param_1 + 2);
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x18;
  }
  lVar8 = param_1[0x1f];
  if ((*(char *)(*(longlong *)(lVar8 + 0x38) + 0x331d) != '\0') &&
     (*(int *)((longlong)param_1 + 0x4c) != 0x18)) {
    FUN_18031b8e0(param_1);
    lVar8 = param_1[0x1f];
  }
  lVar6 = _DAT_180c86890;
  lVar3 = *(longlong *)(lVar8 + 0x38);
  if (*(char *)(lVar3 + 0x2830) == '\0') {
    iVar7 = *(int *)((longlong)param_1 + 0x4c);
    if (iVar7 == 0x18) {
      if ((((param_1[8] == 0) && (*(int *)(param_1 + 0x26) != *(int *)(lVar3 + 0x3358))) &&
          (*(char *)(lVar8 + 0x50) != '\0')) && (*(char *)(lVar3 + 0x331d) == '\0')) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      }
      else {
        lVar8 = param_1[0x20];
        if (lVar8 != 0) {
          if (*(char *)(lVar3 + 0x331d) == '\0') {
            if (*(int *)(lVar8 + 0x3a8) != *(int *)(_DAT_180c86890 + 0x1500)) {
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
              *(undefined4 *)(lVar8 + 0x3a8) = *(undefined4 *)(lVar6 + 0x1500);
            }
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
            pplStack_7e8 = (longlong **)param_1[0x20];
            param_1[0x20] = 0;
            if (pplStack_7e8 != (longlong **)0x0) {
              (*(code *)(*pplStack_7e8)[7])();
            }
          }
        }
      }
    }
    else if (iVar7 == 0) {
      alStack_6d8[0] = 0;
      alStack_6d8[1] = 0;
      alStack_6d8[2] = 0;
      uStack_6c0 = 3;
      uStack_770 = 0;
      uStack_76c = 0xffffffff;
      uStack_766 = 0;
      uStack_764 = 0xffffffff;
      uStack_760 = 1;
      uStack_758 = 0;
      pplStack_7e8 = &plStack_750;
      plStack_750 = (longlong *)0x0;
      uStack_748 = 0;
      uStack_740 = 0;
      uStack_738 = 3;
      uStack_730 = 0;
      uStack_768 = 1;
      plStack_778 = alStack_6d8;
      iVar7 = FUN_1801a3620(lVar3,&plStack_778);
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
        *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
      }
      else {
        *(int *)((longlong)param_1 + 0x14c) = *(int *)((longlong)param_1 + 0x14c) + 1;
        if (*(int *)((longlong)param_1 + 0x14c) == 100) {
          uStack_728 = 0;
          uStack_720 = 0;
          uStack_71c = 0xffffffff;
          uStack_718 = 1;
          uStack_716 = 0;
          uStack_714 = 0xffffffff;
          uStack_710 = 1;
          uStack_708 = 0;
          pplStack_7e8 = (longlong **)alStack_700;
          alStack_700[0] = 0;
          alStack_700[1] = 0;
          alStack_700[2] = 0;
          uStack_6e8 = 3;
          uStack_6e0 = 0;
          uStack_768 = CONCAT11(uStack_768._1_1_,1);
          FUN_1801a3620(lVar3,&uStack_728);
          *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
          pplStack_7e8 = (longlong **)alStack_700;
          if (alStack_700[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
      }
      pplStack_7e8 = &plStack_750;
      if (plStack_750 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (alStack_6d8[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else if (iVar7 == 1) {
      uVar2 = *(undefined4 *)(param_2 + 0x1bd4);
      iVar7 = 0;
      puStack_168 = &UNK_1809fcc58;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 0xc;
      strcpy_s(auStack_150,0x40,&UNK_180a1ac38);
      uStack_808._0_1_ = 1;
      iStack_7f8 = uVar2;
      FUN_1800db460(&puStack_168,param_1 + 0x22);
      puStack_168 = &UNK_18098bcb0;
      uVar2 = *(undefined4 *)(param_2 + 0x1bd4);
      bVar12 = DAT_180c8aa6a == '\0';
      puStack_108 = &UNK_1809fcc58;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0xc;
      strcpy_s(auStack_f0,0x40,&UNK_180a1ac28);
      iStack_7f8 = uVar2;
      uStack_808._0_1_ = bVar12;
      FUN_1800db460(&puStack_108,param_1 + 0x21);
      puStack_108 = &UNK_18098bcb0;
      uVar2 = *(undefined4 *)(param_2 + 0x1bd4);
      puStack_a8 = &UNK_1809fcc58;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = 0x17;
      strcpy_s(auStack_90,0x40,&UNK_180a1ac10);
      uStack_808 = CONCAT71(uStack_808._1_7_,1);
      iStack_7f8 = uVar2;
      FUN_1800db460(&puStack_a8,param_1 + 0x24);
      puStack_a8 = &UNK_18098bcb0;
      lVar8 = FUN_1800daa50();
      *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
      if (*(code **)(lVar8 + 0x9620) != (code *)0x0) {
        (**(code **)(lVar8 + 0x9620))(lVar8 + 0x9610,0,0);
      }
      *(undefined **)(lVar8 + 0x9620) = &UNK_1800ee4d0;
      *(undefined **)(lVar8 + 0x9628) = &UNK_1800ee4c0;
      *(undefined **)(lVar8 + 0x9610) = &UNK_180317d20;
      *(undefined8 **)(lVar8 + 0x9650) = param_1;
      FUN_180094b30(lVar8,&UNK_180a1aca0);
      FUN_180080810(lVar8 + 0x3580,param_2 + 0x3580);
      do {
        uStack_808 = param_1[0x24];
        iStack_7f8 = iVar7;
        FUN_180317ee0(param_1[0x1f],lVar8,(longlong)param_1 + 0x94);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
      LOCK();
      piVar1 = (int *)(param_2 + 0x11a48);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(longlong *)(param_2 + 0x9a48 + (longlong)iVar7 * 8) = lVar8;
      uVar2 = *(undefined4 *)(param_2 + 0x9a38);
      uVar4 = *(undefined4 *)(param_2 + 0x9a3c);
      uVar5 = *(undefined4 *)(param_2 + 0x9a40);
      *(undefined4 *)(lVar8 + 0x9a34) = *(undefined4 *)(param_2 + 0x9a34);
      *(undefined4 *)(lVar8 + 0x9a38) = uVar2;
      *(undefined4 *)(lVar8 + 0x9a3c) = uVar4;
      *(undefined4 *)(lVar8 + 0x9a40) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    }
    else if (iVar7 != 3) {
      if (iVar7 == 2) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
      }
      else if (iVar7 == 4) {
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 5;
        pplStack_7e8 = &plStack_408;
        plStack_408 = (longlong *)&UNK_1809fcc28;
        puStack_400 = auStack_3f0;
        uStack_3f8 = 0;
        auStack_3f0[0] = 0;
        uStack_370 = 0x18;
        uStack_368 = param_1[0x24];
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_408);
        pplStack_7e0 = (longlong **)plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        uVar9 = _DAT_180c82868;
        pplStack_7e8 = &plStack_7b8;
        plStack_7b8 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        FUN_18005e370(uVar9,&plStack_7b8);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        pplStack_7e0 = &plStack_408;
        plStack_408 = (longlong *)&UNK_18098bcb0;
      }
      else if (iVar7 == 5) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 6;
      }
      else if (iVar7 == 6) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0x13;
        pplStack_7e0 = &plStack_6a8;
        plStack_6a8 = (longlong *)&UNK_1809fcc28;
        puStack_6a0 = auStack_690;
        uStack_698 = 0;
        auStack_690[0] = 0;
        uStack_610 = 0x21;
        uStack_5f8 = *(undefined4 *)(param_2 + 0x1bd4);
        puStack_608 = param_1;
        if ((undefined *)*param_1 == &UNK_180a1ad38) {
          LOCK();
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          UNLOCK();
        }
        else {
          (**(code **)((undefined *)*param_1 + 0x28))(param_1);
        }
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_6a8);
        pplStack_7d8 = (longlong **)plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        uVar9 = _DAT_180c82868;
        pplStack_7e0 = &plStack_7b0;
        plStack_7b0 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        FUN_18005e370(uVar9,&plStack_7b0);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        pplStack_7d8 = &plStack_6a8;
        plStack_6a8 = (longlong *)&UNK_18098bcb0;
      }
      else if (iVar7 != 0x13) {
        if (iVar7 == 7) {
          lVar8 = FUN_1800daa50();
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
          if (*(code **)(lVar8 + 0x9620) != (code *)0x0) {
            (**(code **)(lVar8 + 0x9620))(lVar8 + 0x9610,0,0);
          }
          *(undefined **)(lVar8 + 0x9620) = &UNK_1800ee4d0;
          *(undefined **)(lVar8 + 0x9628) = &UNK_1800ee4c0;
          *(undefined **)(lVar8 + 0x9610) = &UNK_180317d20;
          *(undefined8 **)(lVar8 + 0x9650) = param_1;
          FUN_180094b30(lVar8,&UNK_180a1ac88);
          FUN_180080810(lVar8 + 0x3580,param_2 + 0x3580);
          iVar7 = 0;
          do {
            uStack_808 = param_1[0x22];
            puStack_800 = param_1;
            iStack_7f8 = iVar7;
            FUN_180318670(param_1[0x1f],lVar8,(longlong)param_1 + 0x94,param_1[0x25]);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 6);
          LOCK();
          piVar1 = (int *)(param_2 + 0x11a48);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          *(longlong *)(param_2 + 0x9a48 + (longlong)iVar7 * 8) = lVar8;
          uVar2 = *(undefined4 *)(param_2 + 0x9a38);
          uVar4 = *(undefined4 *)(param_2 + 0x9a3c);
          uVar5 = *(undefined4 *)(param_2 + 0x9a40);
          *(undefined4 *)(lVar8 + 0x9a34) = *(undefined4 *)(param_2 + 0x9a34);
          *(undefined4 *)(lVar8 + 0x9a38) = uVar2;
          *(undefined4 *)(lVar8 + 0x9a3c) = uVar4;
          *(undefined4 *)(lVar8 + 0x9a40) = uVar5;
          *(undefined4 *)((longlong)param_1 + 0x4c) = 9;
        }
        else if (iVar7 != 9) {
          if (iVar7 == 8) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 7;
          }
          else if (iVar7 == 10) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0xb;
            pplStack_7d8 = &plStack_328;
            plStack_328 = (longlong *)&UNK_1809fcc28;
            puStack_320 = auStack_310;
            uStack_318 = 0;
            auStack_310[0] = 0;
            uStack_290 = 0x18;
            uStack_288 = param_1[0x22];
            uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
            plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_328);
            pplStack_7d0 = (longlong **)plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            uVar9 = _DAT_180c82868;
            pplStack_7d8 = &plStack_7a8;
            plStack_7a8 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            FUN_18005e370(uVar9,&plStack_7a8);
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10);
            }
            pplStack_7d0 = &plStack_328;
            plStack_328 = (longlong *)&UNK_18098bcb0;
          }
          else if (iVar7 == 0xb) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0xc;
          }
          else if (iVar7 == 0xc) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0x13;
            pplStack_7d0 = &plStack_5c8;
            plStack_5c8 = (longlong *)&UNK_1809fcc28;
            puStack_5c0 = auStack_5b0;
            uStack_5b8 = 0;
            auStack_5b0[0] = 0;
            uStack_530 = 0x20;
            uStack_518 = *(undefined4 *)(param_2 + 0x1bd4);
            puStack_528 = param_1;
            if ((undefined *)*param_1 == &UNK_180a1ad38) {
              LOCK();
              *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
              UNLOCK();
            }
            else {
              (**(code **)((undefined *)*param_1 + 0x28))(param_1);
            }
            uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
            plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_5c8);
            pplStack_7c8 = (longlong **)plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            uVar9 = _DAT_180c82868;
            pplStack_7d0 = &plStack_7a0;
            plStack_7a0 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10);
            }
            FUN_18005e370(uVar9,&plStack_7a0);
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x38))(plVar10);
            }
            pplStack_7c8 = &plStack_5c8;
            plStack_5c8 = (longlong *)&UNK_18098bcb0;
          }
          else if (iVar7 == 0xd) {
            lVar8 = FUN_1800daa50();
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | 0x8000000;
            pcVar11 = *(code **)(lVar8 + 0x9620);
            if (DAT_180c8aa6a == '\0') {
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(lVar8 + 0x9610,0,0);
              }
              *(undefined **)(lVar8 + 0x9620) = &UNK_1800ee4d0;
              *(undefined **)(lVar8 + 0x9628) = &UNK_1800ee4c0;
              pcVar11 = (code *)&UNK_180317d20;
            }
            else {
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(lVar8 + 0x9610,0,0);
              }
              *(undefined **)(lVar8 + 0x9620) = &UNK_1800ee4d0;
              *(undefined **)(lVar8 + 0x9628) = &UNK_1800ee4c0;
              pcVar11 = FUN_180317e00;
            }
            *(code **)(lVar8 + 0x9610) = pcVar11;
            *(undefined8 **)(lVar8 + 0x9650) = param_1;
            FUN_180094b30(lVar8,&UNK_180a1ac88);
            FUN_180080810(lVar8 + 0x3580,param_2 + 0x3580);
            iVar7 = 0;
            do {
              uStack_808 = param_1[0x21];
              puStack_800 = param_1;
              iStack_7f8 = iVar7;
              FUN_180318670(param_1[0x1f],lVar8,(longlong)param_1 + 0x94,param_1[0x23]);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 6);
            LOCK();
            piVar1 = (int *)(param_2 + 0x11a48);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            *(longlong *)(param_2 + 0x9a48 + (longlong)iVar7 * 8) = lVar8;
            uVar2 = *(undefined4 *)(param_2 + 0x9a38);
            uVar4 = *(undefined4 *)(param_2 + 0x9a3c);
            uVar5 = *(undefined4 *)(param_2 + 0x9a40);
            *(undefined4 *)(lVar8 + 0x9a34) = *(undefined4 *)(param_2 + 0x9a34);
            *(undefined4 *)(lVar8 + 0x9a38) = uVar2;
            *(undefined4 *)(lVar8 + 0x9a3c) = uVar4;
            *(undefined4 *)(lVar8 + 0x9a40) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0xf;
          }
          else if (iVar7 != 0xf) {
            if (iVar7 == 0xe) {
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0xd;
            }
            else if (iVar7 == 0x10) {
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0x11;
              pplStack_7c8 = &plStack_248;
              plStack_248 = (longlong *)&UNK_1809fcc28;
              puStack_240 = auStack_230;
              uStack_238 = 0;
              auStack_230[0] = 0;
              uStack_1b0 = 0x18;
              uStack_1a8 = param_1[0x21];
              uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
              plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_248);
              pplStack_7c0 = (longlong **)plVar10;
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              uVar9 = _DAT_180c82868;
              pplStack_7c8 = &plStack_798;
              plStack_798 = plVar10;
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              FUN_18005e370(uVar9,&plStack_798);
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x38))(plVar10);
              }
              pplStack_7c0 = &plStack_248;
              plStack_248 = (longlong *)&UNK_18098bcb0;
            }
            else if (iVar7 == 0x11) {
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0x12;
            }
            else if (iVar7 == 0x12) {
              uStack_438 = *(undefined4 *)(param_2 + 0x1bd4);
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0x13;
              pplStack_7c0 = (longlong **)&puStack_4e8;
              puStack_4e8 = &UNK_1809fcc28;
              puStack_4e0 = auStack_4d0;
              uStack_4d8 = 0;
              auStack_4d0[0] = 0;
              uStack_450 = 0x1f;
              puStack_448 = param_1;
              if ((undefined *)*param_1 == &UNK_180a1ad38) {
                LOCK();
                *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
                UNLOCK();
              }
              else {
                (**(code **)((undefined *)*param_1 + 0x28))(param_1);
              }
              uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
              plVar10 = (longlong *)FUN_18005ce30(uVar9,&puStack_4e8);
              ppuStack_788 = (undefined **)plVar10;
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              uVar9 = _DAT_180c82868;
              pplStack_7c0 = &plStack_790;
              plStack_790 = plVar10;
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              FUN_18005e370(uVar9,&plStack_790);
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x38))(plVar10);
              }
              ppuStack_788 = &puStack_4e8;
              puStack_4e8 = &UNK_18098bcb0;
            }
            else if (iVar7 == 0x14) {
              FUN_18031b8e0(param_1);
              if ((param_3 != '\0') &&
                 (*(longlong *)(*(longlong *)(param_1[0x1f] + 0x38) + 800) != 0)) {
                *(undefined4 *)((longlong)param_1 + 0x4c) = 0x15;
                FUN_18031c950(*(undefined8 *)(*(longlong *)(param_1[0x1f] + 0x38) + 800));
              }
            }
            else if (iVar7 == 0x17) {
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0x18;
              *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
            }
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)(lVar3 + 0x2830) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_828);
}



undefined4 * FUN_18031b630(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 2);
  *(longlong **)(param_1 + 2) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 4);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 4);
  *(longlong **)(param_1 + 4) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 6);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 6);
  *(longlong **)(param_1 + 6) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 10);
  *(longlong **)(param_1 + 10) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 0xc);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0xc);
  *(longlong **)(param_1 + 0xc) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031b790(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
void FUN_18031b790(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  longlong *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    plStack_98 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plStack_98 = *(longlong **)(param_1 + 0x30);
  *(longlong **)(param_1 + 0x30) = param_2;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  if (param_3 != (longlong *)0x0) {
    plStack_98 = param_3;
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plStack_98 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = param_3;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x10) = param_4;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    puStack_88 = &UNK_1809fcc58;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = 0x14;
    strcpy_s(auStack_70,0x40,&UNK_180a1ac70);
    uStack_a8 = param_5;
    uStack_b8 = 1;
    FUN_1800db460(&puStack_88,param_1 + 0x40);
    puStack_88 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_18031b8e0(longlong param_1)
void FUN_18031b8e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_18023b050(*(longlong *)(param_1 + 0x110),0);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_18023b050(*(longlong *)(param_1 + 0x108),0);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_18023b050(*(longlong *)(param_1 + 0x118),0);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x18;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x38) + 0x3358);
  return;
}





// 函数: void FUN_18031b950(longlong param_1,float *param_2,char param_3)
void FUN_18031b950(longlong param_1,float *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x6c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(float *)(param_1 + 0x48) =
       SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6] +
            *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2] +
            param_2[8] * param_2[8] + param_2[9] * param_2[9] + param_2[10] * param_2[10]);
  FUN_18031bc40();
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }
  return;
}



undefined8 *
FUN_18031ba60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a1ad38;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_18024e7b0();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1f] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  uVar1 = 1;
  FUN_18031b950(param_1,&DAT_180a00300,1,param_4,uVar2);
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



undefined8 * FUN_18031bb70(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x38))();
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x38))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x38))();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x38))();
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x38))();
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x38))();
  }
  FUN_18024e720(param_1 + 2);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}





