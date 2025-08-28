#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part057.c - 4 个函数

// 函数: void FUN_180092b20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180092b20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  longlong lStackX_8;
  longlong *plStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plStack_80 = (longlong *)0x0;
  lStack_78 = 0;
  puVar17 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 3;
  FUN_1800da760(_DAT_180c86890,param_2,&plStack_80,param_4,0xfffffffffffffffe);
  uVar20 = lStack_78 - (longlong)plStack_80 >> 3;
  puVar11 = puVar17;
  plVar14 = plStack_80;
  if (uVar20 != 0) {
    do {
      if (*(char *)(*plVar14 + 0x11c38) != '\0') {
        lVar22 = plStack_80[(int)puVar11];
        if (lVar22 != 0) goto LAB_180092bbb;
        break;
      }
      uVar9 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar9;
      plVar14 = plVar14 + 1;
    } while ((ulonglong)(longlong)(int)uVar9 < uVar20);
  }
  lVar22 = param_2;
LAB_180092bbb:
  FUN_180634b20(lVar22 + 0x11a50);
  lVar19 = _DAT_180c8ed68;
  iVar10 = (int)(lStack_78 - (longlong)plStack_80 >> 3) + -1;
  lVar15 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(char *)(plStack_80[lVar15] + 0x11c38) != '\0') {
        lStackX_8 = plStack_80[iVar10];
        if (lStackX_8 != 0) goto LAB_180092c16;
        break;
      }
      iVar10 = iVar10 + -1;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  lStackX_8 = param_2;
LAB_180092c16:
  iVar10 = _Mtx_lock(lStackX_8 + 0x11a50);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  iVar10 = _Mtx_lock(lVar19);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  lVar15 = *(longlong *)(lVar19 + 0x178);
  puVar11 = puVar17;
  puVar18 = puVar17;
  if ((*(longlong *)(lVar19 + 0x180) - lVar15) / 0x50 != 0) {
    do {
      if (*(ulonglong *)(lStackX_8 + 0x11bd0) < *(ulonglong *)(lStackX_8 + 0x11bd8)) {
        *(ulonglong *)(lStackX_8 + 0x11bd0) = *(ulonglong *)(lStackX_8 + 0x11bd0) + 0x50;
        FUN_1800940b0();
      }
      else {
        FUN_180093d90(lStackX_8 + 0x11bc8,(longlong)puVar11 * 0x50 + lVar15);
      }
      uVar9 = (int)puVar18 + 1;
      lVar15 = *(longlong *)(lVar19 + 0x178);
      puVar11 = (undefined8 *)(longlong)(int)uVar9;
      puVar18 = (undefined8 *)(ulonglong)uVar9;
    } while ((undefined8 *)(longlong)(int)uVar9 <
             (undefined8 *)((*(longlong *)(lVar19 + 0x180) - lVar15) / 0x50));
  }
  iVar10 = _Mtx_unlock(lVar19);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  iVar10 = _Mtx_unlock(lStackX_8 + 0x11a50);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  func_0x00018005c480(_DAT_180c8ed68);
  if (*(char *)(param_1 + 0x1610) == '\0') {
    fVar24 = (float)_DAT_180c8ed30 * 1e-05;
    lVar19 = *(longlong *)(lVar22 + 0x11ae8);
    lVar12 = *(longlong *)(lVar22 + 0x11af0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = _DAT_180c8ed68;
        fVar3 = *(float *)(lVar19 + 0x2c + (longlong)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (longlong)puVar11) < fVar3)) {
          puVar21 = *(undefined8 **)(_DAT_180c8ed68 + 0xa0);
          if (puVar21 < *(undefined8 **)(_DAT_180c8ed68 + 0xa8)) {
            *(undefined8 **)(_DAT_180c8ed68 + 0xa0) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar21 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar21 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar21 + 0x14) = uVar4;
            *(undefined4 *)(puVar21 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
          }
          else {
            puVar16 = *(undefined8 **)(_DAT_180c8ed68 + 0x98);
            lVar12 = ((longlong)puVar21 - (longlong)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_180092e59:
              puVar8 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x30,
                                     *(undefined1 *)(_DAT_180c8ed68 + 0xb0));
              puVar21 = *(undefined8 **)(lVar15 + 0xa0);
              puVar16 = *(undefined8 **)(lVar15 + 0x98);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_180092e59;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (longlong)puVar8 - (longlong)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(undefined8 *)(lVar23 + (longlong)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (undefined8 *)(lVar23 + -0x10 + (longlong)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(undefined4 *)(lVar23 + (longlong)puVar16) = *(undefined4 *)puVar16;
                *(undefined4 *)(lVar23 + 4 + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 4);
                *(undefined4 *)(lVar23 + 0xc + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 0xc);
                *(undefined4 *)(lVar23 + 8 + (longlong)puVar16) = *(undefined4 *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar13 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar13 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uVar4;
            *(undefined4 *)(puVar13 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar6;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
            if (*(longlong *)(lVar15 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(lVar15 + 0x98) = puVar8;
            *(undefined8 **)(lVar15 + 0xa0) = puVar13 + 6;
            *(undefined8 **)(lVar15 + 0xa8) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(longlong *)(lVar22 + 0x11ae8);
        puVar11 = puVar11 + 6;
        puVar18 = (undefined8 *)(ulonglong)uVar9;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)((*(longlong *)(lVar22 + 0x11af0) - lVar19) / 0x30));
    }
    lVar19 = *(longlong *)(lVar22 + 0x11b08);
    lVar12 = *(longlong *)(lVar22 + 0x11b10) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = _DAT_180c8ed68;
        fVar3 = *(float *)(lVar19 + 0x2c + (longlong)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (longlong)puVar11) < fVar3)) {
          puVar21 = *(undefined8 **)(_DAT_180c8ed68 + 0xc0);
          if (puVar21 < *(undefined8 **)(_DAT_180c8ed68 + 200)) {
            *(undefined8 **)(_DAT_180c8ed68 + 0xc0) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar21 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar21 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar21 + 0x14) = uVar4;
            *(undefined4 *)(puVar21 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
          }
          else {
            puVar16 = *(undefined8 **)(_DAT_180c8ed68 + 0xb8);
            lVar12 = ((longlong)puVar21 - (longlong)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_180093089:
              puVar8 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x30,
                                     *(undefined1 *)(_DAT_180c8ed68 + 0xd0));
              puVar21 = *(undefined8 **)(lVar15 + 0xc0);
              puVar16 = *(undefined8 **)(lVar15 + 0xb8);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_180093089;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (longlong)puVar8 - (longlong)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(undefined8 *)(lVar23 + (longlong)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (undefined8 *)(lVar23 + -0x10 + (longlong)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(undefined4 *)(lVar23 + (longlong)puVar16) = *(undefined4 *)puVar16;
                *(undefined4 *)(lVar23 + 4 + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 4);
                *(undefined4 *)(lVar23 + 0xc + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 0xc);
                *(undefined4 *)(lVar23 + 8 + (longlong)puVar16) = *(undefined4 *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar13 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar13 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uVar4;
            *(undefined4 *)(puVar13 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar6;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
            if (*(longlong *)(lVar15 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(lVar15 + 0xb8) = puVar8;
            *(undefined8 **)(lVar15 + 0xc0) = puVar13 + 6;
            *(undefined8 **)(lVar15 + 200) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(longlong *)(lVar22 + 0x11b08);
        puVar11 = puVar11 + 6;
        puVar18 = (undefined8 *)(ulonglong)uVar9;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)((*(longlong *)(lVar22 + 0x11b10) - lVar19) / 0x30));
    }
    lVar19 = *(longlong *)(lVar22 + 0x11ac8);
    lVar12 = *(longlong *)(lVar22 + 0x11ad0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = _DAT_180c8ed68;
        fVar3 = *(float *)(lVar19 + 0x2c + (longlong)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (longlong)puVar11) < fVar3)) {
          puVar21 = *(undefined8 **)(_DAT_180c8ed68 + 0x80);
          if (puVar21 < *(undefined8 **)(_DAT_180c8ed68 + 0x88)) {
            *(undefined8 **)(_DAT_180c8ed68 + 0x80) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar21 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar21 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar21 + 0x14) = uVar4;
            *(undefined4 *)(puVar21 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
          }
          else {
            puVar16 = *(undefined8 **)(_DAT_180c8ed68 + 0x78);
            lVar12 = ((longlong)puVar21 - (longlong)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1800932b6:
              puVar8 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x30,
                                     *(undefined1 *)(_DAT_180c8ed68 + 0x90));
              puVar21 = *(undefined8 **)(lVar15 + 0x80);
              puVar16 = *(undefined8 **)(lVar15 + 0x78);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_1800932b6;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (longlong)puVar8 - (longlong)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(undefined8 *)(lVar23 + (longlong)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (undefined8 *)(lVar23 + -0x10 + (longlong)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(undefined4 *)(lVar23 + (longlong)puVar16) = *(undefined4 *)puVar16;
                *(undefined4 *)(lVar23 + 4 + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 4);
                *(undefined4 *)(lVar23 + 0xc + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 0xc);
                *(undefined4 *)(lVar23 + 8 + (longlong)puVar16) = *(undefined4 *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar13 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar13 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uVar4;
            *(undefined4 *)(puVar13 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar6;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
            if (*(longlong *)(lVar15 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(lVar15 + 0x78) = puVar8;
            *(undefined8 **)(lVar15 + 0x80) = puVar13 + 6;
            *(undefined8 **)(lVar15 + 0x88) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(longlong *)(lVar22 + 0x11ac8);
        puVar11 = puVar11 + 6;
        puVar18 = (undefined8 *)(ulonglong)uVar9;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)((*(longlong *)(lVar22 + 0x11ad0) - lVar19) / 0x30));
    }
    lVar19 = *(longlong *)(lVar22 + 0x11aa8);
    lVar12 = *(longlong *)(lVar22 + 0x11ab0) - lVar19;
    lVar15 = lVar12 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar12 / 0x30 + lVar15 != lVar15) {
      do {
        lVar15 = _DAT_180c8ed68;
        fVar3 = *(float *)(lVar19 + 0x2c + (longlong)puVar11);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar19 + 0x28 + (longlong)puVar11) < fVar3)) {
          puVar21 = *(undefined8 **)(_DAT_180c8ed68 + 0x60);
          if (puVar21 < *(undefined8 **)(_DAT_180c8ed68 + 0x68)) {
            *(undefined8 **)(_DAT_180c8ed68 + 0x60) = puVar21 + 6;
            puVar21[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar21 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar21[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar21 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar21 + 0x14) = uVar4;
            *(undefined4 *)(puVar21 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar21 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
          }
          else {
            puVar16 = *(undefined8 **)(_DAT_180c8ed68 + 0x58);
            lVar12 = ((longlong)puVar21 - (longlong)puVar16) / 0x30;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1800934cd:
              puVar8 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x30,
                                     *(undefined1 *)(_DAT_180c8ed68 + 0x70));
              puVar21 = *(undefined8 **)(lVar15 + 0x60);
              puVar16 = *(undefined8 **)(lVar15 + 0x58);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar8 = puVar17;
              if (lVar12 != 0) goto LAB_1800934cd;
            }
            puVar13 = puVar8;
            if (puVar16 != puVar21) {
              lVar23 = (longlong)puVar8 - (longlong)puVar16;
              puVar16 = puVar16 + 4;
              do {
                *(undefined8 *)(lVar23 + (longlong)puVar16) = 0xffffffffffffffff;
                uVar7 = puVar16[-3];
                *puVar13 = puVar16[-4];
                puVar13[1] = uVar7;
                uVar7 = puVar16[-1];
                puVar2 = (undefined8 *)(lVar23 + -0x10 + (longlong)puVar16);
                *puVar2 = puVar16[-2];
                puVar2[1] = uVar7;
                *(undefined4 *)(lVar23 + (longlong)puVar16) = *(undefined4 *)puVar16;
                *(undefined4 *)(lVar23 + 4 + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 4);
                *(undefined4 *)(lVar23 + 0xc + (longlong)puVar16) =
                     *(undefined4 *)((longlong)puVar16 + 0xc);
                *(undefined4 *)(lVar23 + 8 + (longlong)puVar16) = *(undefined4 *)(puVar16 + 1);
                puVar13 = puVar13 + 6;
                puVar2 = puVar16 + 2;
                puVar16 = puVar16 + 6;
              } while (puVar2 != puVar21);
            }
            puVar13[4] = 0xffffffffffffffff;
            uVar7 = ((undefined8 *)(lVar19 + (longlong)puVar11))[1];
            *puVar13 = *(undefined8 *)(lVar19 + (longlong)puVar11);
            puVar13[1] = uVar7;
            puVar1 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar11);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *(undefined4 *)(puVar13 + 2) = *puVar1;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uVar4;
            *(undefined4 *)(puVar13 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar6;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x24) =
                 *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar13 + 0x2c) =
                 *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar11);
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar11);
            if (*(longlong *)(lVar15 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(lVar15 + 0x58) = puVar8;
            *(undefined8 **)(lVar15 + 0x60) = puVar13 + 6;
            *(undefined8 **)(lVar15 + 0x68) = puVar8 + lVar12 * 6;
          }
        }
        uVar9 = (int)puVar18 + 1;
        lVar19 = *(longlong *)(lVar22 + 0x11aa8);
        puVar11 = puVar11 + 6;
        puVar18 = (undefined8 *)(ulonglong)uVar9;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)((*(longlong *)(lVar22 + 0x11ab0) - lVar19) / 0x30));
    }
    lVar22 = *(longlong *)(lStackX_8 + 0x11bc8);
    lVar15 = *(longlong *)(lStackX_8 + 0x11bd0) - lVar22;
    lVar19 = lVar15 >> 0x3f;
    puVar11 = puVar17;
    puVar18 = puVar17;
    if (lVar15 / 0x50 + lVar19 != lVar19) {
      do {
        fVar3 = *(float *)(lVar22 + 0x48 + (longlong)puVar17);
        if ((fVar3 != 0.0) && (fVar24 - *(float *)(lVar22 + 0x44 + (longlong)puVar17) < fVar3)) {
          uVar20 = *(ulonglong *)(_DAT_180c8ed68 + 0x180);
          if (uVar20 < *(ulonglong *)(_DAT_180c8ed68 + 0x188)) {
            *(ulonglong *)(_DAT_180c8ed68 + 0x180) = uVar20 + 0x50;
            FUN_1800940b0(uVar20);
          }
          else {
            FUN_180093d90(_DAT_180c8ed68 + 0x178,(longlong)puVar11 * 0x50 + lVar22);
          }
        }
        uVar9 = (int)puVar18 + 1;
        puVar17 = puVar17 + 10;
        lVar22 = *(longlong *)(lStackX_8 + 0x11bc8);
        puVar11 = (undefined8 *)(longlong)(int)uVar9;
        puVar18 = (undefined8 *)(ulonglong)uVar9;
      } while ((undefined8 *)(longlong)(int)uVar9 <
               (undefined8 *)((*(longlong *)(lStackX_8 + 0x11bd0) - lVar22) / 0x50));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1610) = 0;
  }
  if (plStack_80 == (longlong *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180093710(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  
  if (param_3 < (ulonglong)
                (*(longlong *)(_DAT_180c86950 + 0x1870) - *(longlong *)(_DAT_180c86950 + 0x1868) >>
                3)) {
    plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86950 + 0x1868) + param_3 * 8);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093780(undefined8 param_1,int param_2,int param_3)
void FUN_180093780(undefined8 param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uStackX_8;
  longlong *plStackX_20;
  
  lVar1 = *(longlong *)(_DAT_180c86870 + 8);
  uVar7 = (ulonglong)(*(uint *)(lVar1 + 0x13c) & 1);
  lVar2 = *(longlong *)(_DAT_180c86870 + 8);
  uVar8 = (ulonglong)(*(uint *)(lVar2 + 0x13c) & 1);
  uVar5 = param_2 - (*(int *)(lVar1 + 0xc0 + uVar7 * 0x48) - *(int *)(lVar2 + 0xec + uVar8 * 0x48));
  uVar10 = (int)uVar5 >> 0x1f;
  uVar6 = param_3 - (*(int *)(lVar1 + 0xc4 + uVar7 * 0x48) - *(int *)(lVar2 + 0xf0 + uVar8 * 0x48));
  uVar11 = (int)uVar6 >> 0x1f;
  if ((0 < (int)((uVar5 ^ uVar10) - uVar10)) || (0 < (int)((uVar6 ^ uVar11) - uVar11))) {
    lVar2 = *(longlong *)(_DAT_180c86870 + 8);
    uStackX_8 = CONCAT44(param_3,param_2);
    plVar9 = (longlong *)
             FUN_18062b1e0(_DAT_180c8ed18,0x48,8,CONCAT71((int7)((ulonglong)lVar1 >> 8),3),
                           0xfffffffffffffffe);
    *plVar9 = (longlong)&UNK_180a21690;
    *plVar9 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar9 + 1) = 0;
    *plVar9 = (longlong)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(plVar9 + 2) = 0;
    UNLOCK();
    plVar9[3] = -1;
    *plVar9 = (longlong)&UNK_180a08c60;
    *(undefined4 *)(plVar9 + 5) = 5;
    plVar9[4] = lVar2;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    plVar9[6] = uStackX_8;
    puVar3 = *(undefined8 **)(lVar2 + 0x140);
    pcVar4 = *(code **)*puVar3;
    plStackX_20 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    (*pcVar4)(puVar3,&plStackX_20);
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093950(void)
void FUN_180093950(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = _DAT_180c86950;
  uVar6 = 0xfffffffffffffffe;
  lVar1 = _DAT_180c86950 + 0x1808;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar4 = _DAT_180c86870;
  *(undefined1 *)(_DAT_180c86870 + 0x1ec) = 0;
  lVar5 = *(longlong *)(lVar2 + 0x1800);
  if (lVar5 == 0) {
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x160,8,3,uVar6);
    uVar6 = FUN_180288040(uVar6);
    FUN_180056f10(lVar2 + 0x1800,uVar6);
    lVar5 = *(longlong *)(lVar2 + 0x1800);
    lVar4 = _DAT_180c86870;
  }
  *(undefined4 *)(lVar4 + 0x200) = 0x3d088889;
  *(undefined1 *)(lVar5 + 0xdd) = 1;
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180093a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = _DAT_180c86950;
  lVar1 = _DAT_180c86950 + 0x1808;
  iVar4 = _Mtx_lock(lVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar5 = _DAT_180c86870;
  *(undefined1 *)(_DAT_180c86870 + 0x1ec) = 1;
  plVar2 = *(longlong **)(lVar3 + 0x1800);
  if (plVar2 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    *(undefined1 *)(*(longlong *)(lVar3 + 0x1800) + 0xf0) = 1;
    lVar5 = _DAT_180c86870;
  }
  *(float *)(lVar5 + 0x200) = 1.0 / (float)*(int *)(_DAT_180c86920 + 0x1b90);
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



