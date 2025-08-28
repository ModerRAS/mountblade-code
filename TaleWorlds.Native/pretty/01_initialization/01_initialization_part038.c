#include "TaleWorlds.Native.Split.h"

// 01_initialization_part038.c - 4 个函数

// 函数: void FUN_18006c070(longlong param_1)
void FUN_18006c070(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  byte *pbVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 *puVar20;
  longlong lVar21;
  code *pcVar22;
  longlong *plVar23;
  undefined *puVar24;
  ulonglong uVar25;
  undefined1 auStack_278 [32];
  ulonglong uStack_258;
  undefined **ppuStack_248;
  longlong *plStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined1 uStack_228;
  undefined8 uStack_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  byte *pbStack_1f0;
  int iStack_1e8;
  byte abStack_1e0 [256];
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  code *pcStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  ulonglong uVar19;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  cVar9 = *(char *)(*(longlong *)(param_1 + 1000) + 0x58);
  do {
    if ((cVar9 == '\0') || (uVar19 = 0, *(char *)(param_1 + 0x400) != '\0')) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_278);
    }
    puStack_1f8 = &UNK_1809feda8;
    pbStack_1f0 = abStack_1e0;
    iStack_1e8 = 0;
    abStack_1e0[0] = 0;
    pcStack_a0 = (code *)0x0;
    pcStack_98 = _guard_check_icall;
    ppuStack_248 = (undefined **)auStack_90;
    pcStack_80 = (code *)0x0;
    pcStack_78 = _guard_check_icall;
    lStack_c0 = -1;
    uStack_d8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    lStack_d0 = 0;
    lStack_c8 = 0;
    uStack_b8 = 0;
    lVar13 = *(longlong *)(param_1 + 0x3c8);
    lVar14 = *(longlong *)(param_1 + 0x3d0) - lVar13;
    lVar10 = lVar14 >> 0x3f;
    if (lVar14 / 0x1a8 + lVar10 == lVar10) {
      cVar9 = FUN_18006d4e0(param_1 + 200,&puStack_1f8);
      if (cVar9 == '\0') {
        lVar13 = param_1 + 0x378;
        uStack_228 = 0;
        lStack_230 = lVar13;
        iVar17 = _Mtx_lock(lVar13);
        if (iVar17 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar17);
        }
        uStack_228 = 1;
        lVar10 = _Xtime_get_ticks();
        lVar14 = (lVar10 + 50000) * 100;
        lVar10 = lVar14 / 1000000000;
        iStack_48 = (int)lVar10;
        iStack_210 = (int)lVar14 + iStack_48 * -1000000000;
        uStack_218._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_44 = uStack_218._4_4_;
        uStack_3c = uStack_20c;
        uStack_218 = lVar10;
        iStack_40 = iStack_210;
        iVar17 = _Mtx_current_owns(lVar13);
        if (iVar17 == 0) {
          __Throw_Cpp_error_std__YAXH_Z(4);
        }
        uVar16 = _Cnd_timedwait(param_1 + 0x330,lVar13,&iStack_48);
        if ((uVar16 & 0xfffffffd) != 0) {
          __Throw_C_error_std__YAXH_Z(uVar16);
        }
        cVar9 = FUN_18006d4e0(param_1 + 200,&puStack_1f8);
        if (cVar9 == '\0') {
          iVar17 = _Mtx_unlock(lVar13);
          if (iVar17 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar17);
          }
          bVar7 = false;
        }
        else {
          iVar17 = _Mtx_unlock();
          if (iVar17 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar17);
          }
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
      }
    }
    else {
      iStack_1e8 = *(int *)(lVar13 + 0x10);
      puVar24 = &DAT_18098bc73;
      if (*(undefined **)(lVar13 + 8) != (undefined *)0x0) {
        puVar24 = *(undefined **)(lVar13 + 8);
      }
      strcpy_s(pbStack_1f0,0x100,puVar24);
      uStack_e0 = *(undefined8 *)(lVar13 + 0x118);
      uStack_d8 = *(ulonglong *)(lVar13 + 0x120);
      lStack_d0 = *(longlong *)(lVar13 + 0x128);
      lStack_c8 = *(longlong *)(lVar13 + 0x130);
      lStack_c0 = *(longlong *)(lVar13 + 0x138);
      uStack_b8 = *(undefined1 *)(lVar13 + 0x140);
      if (auStack_b0 != (undefined1 *)(lVar13 + 0x148)) {
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(auStack_b0,0,0);
        }
        pcVar22 = *(code **)(lVar13 + 0x158);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(auStack_b0,(undefined1 *)(lVar13 + 0x148),1);
          pcVar22 = *(code **)(lVar13 + 0x158);
        }
        pcStack_98 = *(code **)(lVar13 + 0x160);
        pcStack_a0 = pcVar22;
      }
      if (auStack_90 != (undefined1 *)(lVar13 + 0x168)) {
        if (pcStack_80 != (code *)0x0) {
          (*pcStack_80)(auStack_90,0,0);
        }
        pcVar22 = *(code **)(lVar13 + 0x178);
        if (pcVar22 != (code *)0x0) {
          (*pcVar22)(auStack_90,(undefined1 *)(lVar13 + 0x168),1);
          pcVar22 = *(code **)(lVar13 + 0x178);
        }
        pcStack_78 = *(code **)(lVar13 + 0x180);
        pcStack_80 = pcVar22;
      }
      uStack_70 = *(undefined8 *)(lVar13 + 0x188);
      uStack_68 = *(undefined8 *)(lVar13 + 400);
      uStack_60 = *(undefined8 *)(lVar13 + 0x198);
      uStack_58 = *(undefined8 *)(lVar13 + 0x1a0);
      *(longlong *)(param_1 + 0x3d0) = *(longlong *)(param_1 + 0x3d0) + -0x1a8;
      FUN_180069530();
      bVar7 = true;
    }
    puVar20 = *(undefined8 **)(param_1 + 0xc0);
    if ((undefined *)*puVar20 == &UNK_1809fee70) {
      cVar9 = FUN_180068a90(puVar20 + 2,&plStack_240);
      while (cVar9 != '\0') {
        plVar23 = (longlong *)puVar20[99];
        if (plStack_240 != (longlong *)0x0) {
          *(undefined1 *)(plStack_240 + 4) = 0;
          *plVar23 = *plVar23 - plStack_240[1];
          plVar23[2] = plVar23[2] + plStack_240[1];
          plVar18 = (longlong *)plStack_240[3];
          plVar15 = (longlong *)plVar23[3];
          plVar11 = plStack_240;
          if (plVar18 != plVar15) {
            do {
              if ((plVar18 == (longlong *)0x0) || ((char)plVar18[4] != '\0')) break;
              lVar13 = plVar11[2];
              plVar18[2] = lVar13;
              if (lVar13 != 0) {
                *(longlong **)(lVar13 + 0x18) = plVar18;
              }
              plVar18[1] = plVar18[1] + plVar11[1];
              *plVar11 = plVar23[0x28005];
              plVar23[0x28005] = (longlong)plVar11;
              plVar1 = plVar18 + 3;
              plVar15 = (longlong *)plVar23[3];
              plVar11 = plVar18;
              plVar18 = (longlong *)*plVar1;
            } while ((longlong *)*plVar1 != plVar15);
          }
          plVar18 = (longlong *)plVar11[2];
          while (((plVar11 != plVar15 && (plVar18 != (longlong *)0x0)) && ((char)plVar18[4] == '\0')
                 )) {
            lVar13 = plVar18[2];
            plVar11[2] = lVar13;
            if (lVar13 != 0) {
              *(longlong **)(lVar13 + 0x18) = plVar11;
            }
            plVar11[1] = plVar11[1] + plVar18[1];
            *plVar18 = plVar23[0x28005];
            plVar23[0x28005] = (longlong)plVar18;
            plVar15 = (longlong *)plVar23[3];
            plVar18 = (longlong *)plVar11[2];
          }
        }
        cVar9 = FUN_180068a90(puVar20 + 2,&plStack_240);
      }
    }
    else {
      (**(code **)((undefined *)*puVar20 + 0x18))(puVar20);
    }
    if (bVar7) {
      plVar23 = *(longlong **)(param_1 + 0xc0);
      uVar25 = uVar19;
      if (0 < iStack_1e8) {
        do {
          uVar25 = uVar25 * 0x1f + (longlong)(char)pbStack_1f0[uVar19];
          uVar16 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar16;
        } while ((int)uVar16 < iStack_1e8);
      }
      plVar18 = (longlong *)plVar23[0x67];
      for (lVar13 = plVar18[uVar25 % (ulonglong)*(uint *)(plVar23 + 0x68)]; lVar13 != 0;
          lVar13 = *(longlong *)(lVar13 + 0x120)) {
        iVar17 = *(int *)(lVar13 + 0x10);
        if (iStack_1e8 == iVar17) {
          if (iStack_1e8 != 0) {
            pbVar12 = pbStack_1f0;
            do {
              pbVar3 = pbVar12 + (*(longlong *)(lVar13 + 8) - (longlong)pbStack_1f0);
              iVar17 = (uint)*pbVar12 - (uint)*pbVar3;
              if (iVar17 != 0) break;
              pbVar12 = pbVar12 + 1;
            } while (*pbVar3 != 0);
          }
LAB_18006c61e:
          if (iVar17 == 0) {
            if (lVar13 != 0) {
              lVar10 = plVar23[0x68];
              goto LAB_18006c642;
            }
            break;
          }
        }
        else if (iStack_1e8 == 0) goto LAB_18006c61e;
      }
      lVar10 = plVar23[0x68];
      lVar13 = plVar18[lVar10];
LAB_18006c642:
      if ((lVar13 != plVar18[lVar10]) && (lVar13 = *(longlong *)(lVar13 + 0x118), lVar13 != 0)) {
LAB_18006c852:
        if (lStack_c8 == 0) {
          uVar19 = 0;
          if (lStack_d0 == 0) {
            uVar19 = uStack_d8;
          }
        }
        else {
          uVar19 = uStack_d8;
          if (lStack_d0 == 0) {
            uVar19 = uStack_d8 + lStack_c0;
          }
        }
        LOCK();
        plVar23 = (longlong *)(param_1 + 0x3f0);
        lVar10 = *plVar23;
        *plVar23 = *plVar23 + uVar19;
        UNLOCK();
        LOCK();
        piVar2 = (int *)(param_1 + 0x3f8);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        puVar20 = *(undefined8 **)(param_1 + 0xc0);
        uStack_258 = puVar20[0x6c];
        if (uStack_258 < uVar19) {
          pbVar12 = &DAT_18098bc73;
          if (pbStack_1f0 != (byte *)0x0) {
            pbVar12 = pbStack_1f0;
          }
                    // WARNING: Subroutine does not return
          FUN_180062300(_DAT_180c86928,&UNK_1809ff390,uVar19,pbVar12);
        }
        if (((uStack_258 < lVar10 + uVar19) ||
            ((ulonglong)(longlong)*(int *)(param_1 + 0x3fc) < (longlong)iVar17 + 1U)) ||
           (cVar9 = (**(code **)*puVar20)(puVar20,lVar13,&puStack_1f8), cVar9 == '\0')) {
          LOCK();
          *(longlong *)(param_1 + 0x3f0) = *(longlong *)(param_1 + 0x3f0) - uVar19;
          UNLOCK();
          LOCK();
          *(int *)(param_1 + 0x3f8) = *(int *)(param_1 + 0x3f8) + -1;
          UNLOCK();
          FUN_18006cc50(param_1 + 0x3c8,&puStack_1f8);
LAB_18006ca44:
          pcVar22 = *(code **)(**(longlong **)(param_1 + 0xc0) + 0x28);
          if (pcVar22 != _guard_check_icall) {
            (*pcVar22)();
          }
          Sleep(1);
        }
        pcVar22 = *(code **)(**(longlong **)(param_1 + 0xc0) + 0x20);
        if (pcVar22 != _guard_check_icall) {
          (*pcVar22)();
        }
        goto LAB_18006ca95;
      }
      if (*(int *)((longlong)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        puVar20 = (undefined8 *)*plVar18;
        plVar15 = plVar18;
        if (puVar20 == (undefined8 *)0x0) {
          plVar15 = plVar18 + 1;
          puVar20 = (undefined8 *)*plVar15;
          if (puVar20 == (undefined8 *)0x0) {
            do {
              plVar15 = plVar15 + 1;
              puVar20 = (undefined8 *)*plVar15;
            } while (puVar20 == (undefined8 *)0x0);
            lVar10 = plVar23[0x68];
          }
        }
        if (puVar20 != (undefined8 *)plVar18[lVar10]) {
          do {
            if (*(int *)(puVar20[0x23] + 0x120) == 0) {
              uVar4 = puVar20[0x23];
              *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + -1;
              (**(code **)(*plVar23 + 0x10))(plVar23,uVar4);
              lVar13 = puVar20[0x24];
              plVar23 = plVar15;
              while (lVar13 == 0) {
                plVar23 = plVar23 + 1;
                lVar13 = *plVar23;
              }
              puVar5 = (undefined8 *)*plVar15;
              puVar6 = (undefined8 *)puVar5[0x24];
              if (puVar5 == puVar20) {
                *plVar15 = (longlong)puVar6;
              }
              else {
                for (; puVar6 != puVar20; puVar6 = (undefined8 *)puVar6[0x24]) {
                  puVar5 = puVar6;
                }
                puVar5[0x24] = puVar6[0x24];
              }
              *puVar20 = &UNK_18098bcb0;
              ppuStack_248 = (undefined **)puVar20;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar20);
            }
            puVar20 = (undefined8 *)puVar20[0x24];
            while (puVar20 == (undefined8 *)0x0) {
              plVar15 = plVar15 + 1;
              puVar20 = (undefined8 *)*plVar15;
            }
          } while (puVar20 != *(undefined8 **)(plVar23[0x67] + plVar23[0x68] * 8));
        }
      }
      plVar18 = (longlong *)(param_1 + 0x3c8);
      lVar13 = 0;
      plVar23 = *(longlong **)(param_1 + 0xc0);
      if (*(int *)((longlong)plVar23 + 0x32c) < (int)plVar23[0x65]) {
        uVar19 = *(ulonglong *)(param_1 + 0x3d0);
        if (uVar19 < *(ulonglong *)(param_1 + 0x3d8)) {
          *(ulonglong *)(param_1 + 0x3d0) = uVar19 + 0x1a8;
          FUN_18006cd80(uVar19,&puStack_1f8);
          goto LAB_18006ca44;
        }
        lVar10 = *plVar18;
        lVar14 = (longlong)(uVar19 - lVar10) / 0x1a8;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_18006c9ac:
          lVar13 = FUN_18062b420(_DAT_180c8ed18,lVar14 * 0x1a8,*(undefined1 *)(param_1 + 0x3e0));
          uVar19 = *(ulonglong *)(param_1 + 0x3d0);
          lVar10 = *plVar18;
        }
        else {
          lVar14 = lVar14 * 2;
          if (lVar14 != 0) goto LAB_18006c9ac;
        }
        FUN_18006de00(&lStack_238,lVar10,uVar19,lVar13);
        lVar8 = lStack_238;
        FUN_18006cd80(lStack_238,&puStack_1f8);
        lVar10 = *(longlong *)(param_1 + 0x3d0);
        lVar21 = *plVar18;
        if (lVar21 != lVar10) {
          do {
            FUN_180069530(lVar21);
            lVar21 = lVar21 + 0x1a8;
          } while (lVar21 != lVar10);
          lVar21 = *plVar18;
        }
        if (lVar21 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar21);
        }
        *plVar18 = lVar13;
        *(longlong *)(param_1 + 0x3d0) = lVar8 + 0x1a8;
        *(longlong *)(param_1 + 0x3d8) = lVar14 * 0x1a8 + lVar13;
        goto LAB_18006ca44;
      }
      *(int *)(plVar23 + 0x65) = (int)plVar23[0x65] + 1;
      lVar13 = (**(code **)(*plVar23 + 8))(plVar23,&puStack_1f8);
      if (lVar13 != 0) goto LAB_18006c852;
      (*pcStack_78)(auStack_90);
      ppuStack_248 = (undefined **)auStack_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0,0);
      }
      ppuStack_248 = (undefined **)auStack_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(auStack_b0,0,0);
      }
    }
    else {
      pcVar22 = *(code **)(**(longlong **)(param_1 + 0xc0) + 0x28);
      if (pcVar22 != _guard_check_icall) {
        (*pcVar22)();
      }
LAB_18006ca95:
      ppuStack_248 = (undefined **)auStack_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0,0);
      }
      ppuStack_248 = (undefined **)auStack_b0;
      if (pcStack_a0 != (code *)0x0) {
        (*pcStack_a0)(auStack_b0,0,0);
      }
    }
    ppuStack_248 = &puStack_1f8;
    puStack_1f8 = &UNK_18098bcb0;
    cVar9 = *(char *)(*(longlong *)(param_1 + 1000) + 0x58);
  } while( true );
}





// 函数: void FUN_18006cb90(longlong param_1)
void FUN_18006cb90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18006cc50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uStackX_8;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulonglong)param_1[2]) {
    param_1[1] = uVar2 + 0x1a8;
    uStackX_8 = uVar2;
    FUN_180068ff0();
    *(undefined8 *)(uVar2 + 0x118) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(uVar2 + 0x120) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(uVar2 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(uVar2 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(uVar2 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined1 *)(uVar2 + 0x140) = *(undefined1 *)(param_2 + 0x140);
    *(undefined8 *)(uVar2 + 0x158) = 0;
    *(code **)(uVar2 + 0x160) = _guard_check_icall;
    if (uVar2 + 0x148 != param_2 + 0x148) {
      pcVar5 = *(code **)(param_2 + 0x158);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x148,param_2 + 0x148,1);
        pcVar5 = *(code **)(param_2 + 0x158);
      }
      *(code **)(uVar2 + 0x158) = pcVar5;
      *(undefined8 *)(uVar2 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    }
    *(undefined8 *)(uVar2 + 0x178) = 0;
    *(code **)(uVar2 + 0x180) = _guard_check_icall;
    if (uVar2 + 0x168 != param_2 + 0x168) {
      pcVar5 = *(code **)(param_2 + 0x178);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar2 + 0x168,param_2 + 0x168,1);
        pcVar5 = *(code **)(param_2 + 0x178);
      }
      *(code **)(uVar2 + 0x178) = pcVar5;
      *(undefined8 *)(uVar2 + 0x180) = *(undefined8 *)(param_2 + 0x180);
    }
    *(undefined8 *)(uVar2 + 0x188) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(uVar2 + 400) = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(uVar2 + 0x198) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(uVar2 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
    return uVar2;
  }
  lVar6 = *param_1;
  lVar4 = (longlong)(uVar2 - lVar6) / 0x1a8;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar1 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x1a8,(char)param_1[3]);
  uVar2 = param_1[1];
  lVar6 = *param_1;
LAB_18006ccef:
  FUN_18006de00(&uStackX_8,lVar6,uVar2,lVar1);
  FUN_18006cd80(uStackX_8,param_2);
  lVar6 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar6) {
    do {
      FUN_180069530(lVar3);
      lVar3 = lVar3 + 0x1a8;
    } while (lVar3 != lVar6);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  uVar2 = lVar4 * 0x1a8 + lVar1;
  *param_1 = lVar1;
  param_1[1] = uStackX_8 + 0x1a8;
  param_1[2] = uVar2;
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006cc8d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_18006cc8d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong in_R10;
  longlong in_stack_00000050;
  
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10),8);
  lVar4 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar3 = 0;
      goto LAB_18006ccef;
    }
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x1a8,(char)unaff_RDI[3]);
  param_3 = unaff_RDI[1];
  in_R10 = *unaff_RDI;
LAB_18006ccef:
  FUN_18006de00(&stack0x00000050,in_R10,param_3,lVar3);
  lVar2 = in_stack_00000050;
  FUN_18006cd80(in_stack_00000050);
  lVar1 = unaff_RDI[1];
  lVar5 = *unaff_RDI;
  if (lVar5 != lVar1) {
    do {
      FUN_180069530(lVar5);
      lVar5 = lVar5 + 0x1a8;
    } while (lVar5 != lVar1);
    lVar5 = *unaff_RDI;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *unaff_RDI = lVar3;
  unaff_RDI[1] = lVar2 + 0x1a8;
  unaff_RDI[2] = lVar4 * 0x1a8 + lVar3;
  return;
}





// 函数: void FUN_18006cd43(void)
void FUN_18006cd43(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_18006cd80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180068ff0();
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(code **)(param_1 + 0x160) = _guard_check_icall;
  if (param_1 + 0x148 != param_2 + 0x148) {
    pcVar1 = *(code **)(param_2 + 0x158);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x148,param_2 + 0x148,1,param_4,uVar2);
      pcVar1 = *(code **)(param_2 + 0x158);
    }
    *(code **)(param_1 + 0x158) = pcVar1;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(code **)(param_1 + 0x180) = _guard_check_icall;
  if (param_1 + 0x168 != param_2 + 0x168) {
    pcVar1 = *(code **)(param_2 + 0x178);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x168,param_2 + 0x168,1);
      pcVar1 = *(code **)(param_2 + 0x178);
    }
    *(code **)(param_1 + 0x178) = pcVar1;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}





