#include "TaleWorlds.Native.Split.h"

// 03_rendering_part502.c - 2 个函数

// 函数: void FUN_180535c60(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180535c60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  short *psVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  ulonglong uStackX_8;
  undefined4 uVar24;
  undefined8 uVar25;
  
  lVar11 = *param_1;
  if (lVar11 != 0) {
    cVar4 = FUN_18055f260(param_3,&uStackX_8,&UNK_1809fa510);
    FUN_1804fe350(&UNK_180a303c8,cVar4,&UNK_180a301f8,&uStackX_8);
    if (cVar4 != '\0') {
      iVar5 = (int)uStackX_8;
      uVar12 = uStackX_8 & 0xffffffff;
      uVar25 = 0xfffffffffffffffe;
      lVar14 = (longlong)(int)uStackX_8;
      iVar15 = 0;
      uVar24 = 0;
      if ((((-1 < (int)uStackX_8) && ((int)uStackX_8 < *(int *)(lVar11 + 0x52ed94))) &&
          (-1 < *(short *)(lVar11 + 0x52dda0 + lVar14 * 2))) ||
         ((_DAT_180c92514 != 1 && (_DAT_180c92514 != 4)))) {
        uVar22 = lVar11 + 0x30a0 + lVar14 * 0xa60;
        uVar8 = 0;
        iVar19 = *(int *)(lVar11 + 0x87b318);
        if (0 < iVar19) {
          do {
            if (*(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x87b340) + (uVar8 >> 4) * 8) + 8 +
                        (ulonglong)((uint)uVar8 & 0xf) * 0xbe0) != 0) break;
            uVar16 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar16;
          } while ((int)uVar16 < iVar19);
        }
        if ((int)uVar8 < iVar19) {
          do {
            lVar18 = (ulonglong)((uint)uVar8 & 0xf) * 0xbe0 +
                     *(longlong *)(*(longlong *)(lVar11 + 0x87b340) + (uVar8 >> 4) * 8);
            if (*(int *)(lVar18 + 0x2a0) == (int)uStackX_8) {
              *(undefined4 *)(lVar18 + 0x2a0) = 0xffffffff;
            }
            uVar16 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar16;
            iVar19 = *(int *)(lVar11 + 0x87b318);
            if (iVar19 <= (int)uVar16) break;
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x87b340) + (uVar8 >> 4) * 8) + 8 +
                          (ulonglong)((uint)uVar8 & 0xf) * 0xbe0) != 0) break;
              uVar16 = (uint)uVar8 + 1;
              uVar8 = (ulonglong)uVar16;
            } while ((int)uVar16 < iVar19);
          } while ((int)uVar8 < iVar19);
        }
        uStackX_8 = uVar22;
        if (-1 < *(int *)(uVar22 + 0x6a0)) {
          FUN_1804fc920((longlong)
                        ((int)*(undefined8 *)(uVar22 + 0x6a0) +
                        (int)((ulonglong)*(undefined8 *)(uVar22 + 0x6a0) >> 0x20) *
                        *(int *)(lVar11 + 0x98d238)) * 9 + *(longlong *)(lVar11 + 0x98d248));
        }
        (**(code **)(**(longlong **)(lVar11 + 0x98d250) + 0x18))
                  (*(longlong **)(lVar11 + 0x98d250),uVar22);
        lVar18 = _DAT_180c92580;
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
          iVar5 = _Mtx_lock(0x180c95528);
          if (iVar5 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar5);
          }
          cVar4 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
          if ((cVar4 != '\0') &&
             (cVar4 = FUN_180645c10(0x180c95578,0xd,&UNK_1809fa540), cVar4 != '\0')) {
            FUN_180645c10(0x180c95578,uVar12,&UNK_1809fa510);
          }
          _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
          iVar5 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
          if (0 < iVar5) {
            lVar14 = 0;
            lVar11 = _DAT_180c92cd8;
            do {
              lVar18 = *(longlong *)(lVar11 + lVar14 * 8);
              if ((lVar18 != 0) && (*(char *)(*(longlong *)(lVar18 + 0x58f8) + 0x1c) != '\0')) {
                FUN_1805b59d0(lVar18,0x180c95578);
                lVar11 = _DAT_180c92cd8;
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < iVar5);
          }
          if (_DAT_180c96070 != 0) {
            FUN_180567f30(_DAT_180c92580,0x180c95578);
          }
          _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
          memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
        }
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
          iVar19 = 0;
          do {
            FUN_1805b32b0(&DAT_180c925a0,iVar19 + iVar5 * 0x10);
            iVar19 = iVar19 + 1;
          } while (iVar19 < 0x10);
          if (_DAT_180c92ce0 - _DAT_180c92cd8 >> 3 != 0) {
            lVar18 = 0;
            do {
              FUN_180506ae0(*(longlong *)(lVar18 + _DAT_180c92cd8) + 0x5940,uVar12);
              iVar15 = iVar15 + 1;
              lVar18 = lVar18 + 8;
            } while ((ulonglong)(longlong)iVar15 < (ulonglong)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3)
                    );
          }
          if (_DAT_180c92580 != 0) {
            FUN_180506ae0(_DAT_180c92580 + 0x5f8,uVar12);
          }
        }
        else if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
          fVar23 = (float)_DAT_180c8ed38 * 1e-05;
          if (_DAT_180c92514 == 1) {
            iVar15 = 0;
            lVar18 = _DAT_180c92590 + 0x4c488;
            do {
              func_0x0001805697b0(lVar18,iVar15 + iVar5 * 0x10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < 0x10);
          }
          else {
            uVar16 = iVar5 << 4;
            lVar17 = lVar14 * 0xe00;
            lVar20 = 0x10;
            do {
              lVar3 = *(longlong *)(lVar18 + 0x648);
              uVar22 = (*(longlong *)(lVar18 + 0x650) - lVar3) / 0xe0;
              if ((ulonglong)(longlong)(int)uVar16 < uVar22) {
                uVar7 = uVar16 & 0x8000000f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                }
                *(undefined8 *)(lVar3 + 0xd0 + lVar17) = _DAT_180c966e8;
                *(float *)(lVar3 + 0xd8 + lVar17) = fVar23;
                *(undefined1 *)(lVar3 + 0xdc + lVar17) = 0;
                switch(uVar7) {
                case 0:
                case 9:
                  func_0x0001805b2c90(lVar3 + 0x10 + lVar17,uVar22,lVar17,lVar3,uVar24,uVar25);
                  break;
                case 1:
                  *(undefined8 *)(lVar3 + 0xa0 + lVar17) = 0xffffffffffffffff;
                  *(undefined2 *)(lVar3 + 200 + lVar17) = 0xff;
                  *(undefined8 *)(lVar3 + 0xa8 + lVar17) = 0;
                  *(undefined8 *)(lVar3 + 0xb0 + lVar17) = 0;
                  *(undefined8 *)(lVar3 + 0xb8 + lVar17) = 0;
                  *(undefined8 *)(lVar3 + 0xc0 + lVar17) = 0;
                  *(undefined4 *)(lVar3 + 0xcc + lVar17) = 0;
                  break;
                case 2:
                  puVar1 = (undefined4 *)(lVar3 + lVar17);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  break;
                case 3:
                case 4:
                case 5:
                case 7:
                case 8:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(undefined4 *)(lVar3 + lVar17) = 0;
                  break;
                case 6:
                  *(undefined4 *)(lVar3 + lVar17) = 1;
                  break;
                case 0xf:
                  *(undefined4 *)(lVar3 + lVar17) = 0xffffffff;
                }
              }
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0xe0;
              lVar20 = lVar20 + -1;
              uVar22 = uStackX_8;
            } while (lVar20 != 0);
          }
        }
        lVar18 = _DAT_180c8ece0;
        lVar17 = lVar11 + 0x30a0;
        iVar15 = *(int *)(uVar22 + 0x18);
        if ((iVar15 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x30))(iVar15);
        }
        (**(code **)(lVar18 + 0x228))(*(undefined4 *)(lVar11 + 0x98d928),iVar15);
        uVar24 = 0;
        if ((iVar15 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar15);
        }
        FUN_18051aff0(uVar22,1,lVar11 + 0x87a948);
        FUN_180507360(uVar22,0);
        *(undefined1 *)(uVar22 + 0x1c) = 1;
        plVar13 = (longlong *)(lVar14 * 0xa60 + lVar17);
        (**(code **)(*plVar13 + 0x68))(plVar13);
        *(undefined4 *)(plVar13 + 2) = 0xffffffff;
        *(int *)(lVar11 + 0x52ed90) = *(int *)(lVar11 + 0x52ed90) + -1;
        iVar15 = iVar5 + -1;
        uVar22 = (ulonglong)iVar15;
        if (-1 < iVar15) {
          psVar10 = (short *)(lVar17 + (uVar22 + 0x295680) * 2);
          uVar8 = uVar22;
          uVar21 = uVar22;
          do {
            if (*psVar10 == iVar5) {
              sVar2 = *(short *)(lVar11 + 0x52dda0 + lVar14 * 2);
              sVar6 = sVar2 + -1;
              if ((int)sVar2 != *(int *)(lVar11 + 0x52ed94)) {
                sVar6 = sVar2;
              }
              *(short *)(lVar11 + 0x52dda0 + (longlong)(int)uVar21 * 2) = sVar6;
              break;
            }
            uVar21 = (ulonglong)((int)uVar21 - 1);
            psVar10 = psVar10 + -1;
            uVar8 = uVar8 - 1;
          } while (-1 < (longlong)uVar8);
        }
        *(undefined2 *)(lVar11 + 0x52dda0 + lVar14 * 2) = 0xffff;
        if ((*(int *)(lVar11 + 0x52ed94) == iVar5 + 1) &&
           (*(undefined4 *)(lVar11 + 0x52ed94) = 0, -1 < (longlong)uVar22)) {
          piVar9 = (int *)(uVar22 * 0xa60 + 0x10 + lVar17);
          uVar8 = uVar22;
          iVar19 = iVar15;
          do {
            if (-1 < *piVar9) {
              *(int *)(lVar11 + 0x52ed94) = iVar19 + 1;
              break;
            }
            iVar19 = iVar19 + -1;
            piVar9 = piVar9 + -0x298;
            uVar8 = uVar8 - 1;
          } while (-1 < (longlong)uVar8);
        }
        *(undefined4 *)(lVar14 * 0x200 + 0x52edbc + lVar11) = 0xffffffff;
        *(int *)(lVar11 + 0x62ed90) = *(int *)(lVar11 + 0x62ed90) + -1;
        iVar19 = iVar15;
        if (-1 < (longlong)uVar22) {
          psVar10 = (short *)(lVar11 + 0x62dda0 + uVar22 * 2);
          uVar8 = uVar22;
          do {
            if (*psVar10 == iVar5) {
              sVar2 = *(short *)(lVar11 + 0x62dda0 + lVar14 * 2);
              sVar6 = sVar2 + -1;
              if ((int)sVar2 != *(int *)(lVar11 + 0x62ed94)) {
                sVar6 = sVar2;
              }
              *(short *)(lVar11 + 0x62dda0 + (longlong)iVar19 * 2) = sVar6;
              break;
            }
            iVar19 = iVar19 + -1;
            psVar10 = psVar10 + -1;
            uVar8 = uVar8 - 1;
          } while (-1 < (longlong)uVar8);
        }
        *(undefined2 *)(lVar11 + 0x62dda0 + lVar14 * 2) = 0xffff;
        if ((*(int *)(lVar11 + 0x62ed94) == iVar5 + 1) &&
           (*(undefined4 *)(lVar11 + 0x62ed94) = 0, -1 < (longlong)uVar22)) {
          piVar9 = (int *)(lVar11 + 0x52edbc + uVar22 * 0x200);
          do {
            if (-1 < *piVar9) {
              *(int *)(lVar11 + 0x62ed94) = iVar15 + 1;
              break;
            }
            iVar15 = iVar15 + -1;
            piVar9 = piVar9 + -0x80;
            uVar22 = uVar22 - 1;
          } while (-1 < (longlong)uVar22);
        }
        FUN_1804fc230(lVar11 + 0x62ed98,uVar12,iVar19,uVar22,uVar24);
        FUN_1804fc230(lVar11 + 0x74eb90,uVar12);
        *(undefined1 *)(lVar11 + 0x87a940) = 1;
        *(undefined1 *)(lVar11 + 0x87b728) = 1;
      }
      return;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804f42d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180535c78(undefined4 param_1)
void FUN_180535c78(undefined4 param_1)

{
  undefined4 *puVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  short *psVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong unaff_RDI;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  int iStack0000000000000030;
  undefined4 uVar23;
  
  cVar3 = FUN_18055f260(param_1,&stack0x00000030);
  FUN_1804fe350(&UNK_180a303c8,cVar3,&UNK_180a301f8,&stack0x00000030);
  if (cVar3 == '\0') {
    return;
  }
  iVar4 = iStack0000000000000030;
  uVar10 = _iStack0000000000000030 & 0xffffffff;
  lVar12 = (longlong)iStack0000000000000030;
  iVar13 = 0;
  if ((((-1 < iStack0000000000000030) && (iStack0000000000000030 < *(int *)(unaff_RDI + 0x52ed94)))
      && (-1 < *(short *)(unaff_RDI + 0x52dda0 + lVar12 * 2))) ||
     ((_DAT_180c92514 != 1 && (_DAT_180c92514 != 4)))) {
    lVar21 = unaff_RDI + 0x30a0 + lVar12 * 0xa60;
    uVar19 = 0;
    iVar17 = *(int *)(unaff_RDI + 0x87b318);
    if (0 < iVar17) {
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x87b340) + (uVar19 >> 4) * 8) + 8 +
                    (ulonglong)((uint)uVar19 & 0xf) * 0xbe0) != 0) break;
        uVar14 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
      } while ((int)uVar14 < iVar17);
    }
    if ((int)uVar19 < iVar17) {
      do {
        lVar16 = (ulonglong)((uint)uVar19 & 0xf) * 0xbe0 +
                 *(longlong *)(*(longlong *)(unaff_RDI + 0x87b340) + (uVar19 >> 4) * 8);
        if (*(int *)(lVar16 + 0x2a0) == iStack0000000000000030) {
          *(undefined4 *)(lVar16 + 0x2a0) = 0xffffffff;
        }
        uVar14 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
        iVar17 = *(int *)(unaff_RDI + 0x87b318);
        if (iVar17 <= (int)uVar14) break;
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x87b340) + (uVar19 >> 4) * 8) + 8 +
                      (ulonglong)((uint)uVar19 & 0xf) * 0xbe0) != 0) break;
          uVar14 = (uint)uVar19 + 1;
          uVar19 = (ulonglong)uVar14;
        } while ((int)uVar14 < iVar17);
      } while ((int)uVar19 < iVar17);
    }
    _iStack0000000000000030 = lVar21;
    if (-1 < *(int *)(lVar21 + 0x6a0)) {
      FUN_1804fc920((longlong)
                    ((int)*(undefined8 *)(lVar21 + 0x6a0) +
                    (int)((ulonglong)*(undefined8 *)(lVar21 + 0x6a0) >> 0x20) *
                    *(int *)(unaff_RDI + 0x98d238)) * 9 + *(longlong *)(unaff_RDI + 0x98d248));
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x98d250) + 0x18))
              (*(longlong **)(unaff_RDI + 0x98d250),lVar21);
    lVar16 = _DAT_180c92580;
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      iVar4 = _Mtx_lock(0x180c95528);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
      if ((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,0xd,&UNK_1809fa540), cVar3 != '\0'))
      {
        FUN_180645c10(0x180c95578,uVar10,&UNK_1809fa510);
      }
      _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
      iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
      if (0 < iVar4) {
        lVar21 = 0;
        lVar12 = _DAT_180c92cd8;
        do {
          lVar16 = *(longlong *)(lVar12 + lVar21 * 8);
          if ((lVar16 != 0) && (*(char *)(*(longlong *)(lVar16 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar16,0x180c95578);
            lVar12 = _DAT_180c92cd8;
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar4);
      }
      if (_DAT_180c96070 != 0) {
        FUN_180567f30(_DAT_180c92580,0x180c95578);
      }
      _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
      memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      iVar17 = 0;
      do {
        FUN_1805b32b0(&DAT_180c925a0,iVar17 + iVar4 * 0x10);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 0x10);
      if (_DAT_180c92ce0 - _DAT_180c92cd8 >> 3 != 0) {
        lVar16 = 0;
        do {
          FUN_180506ae0(*(longlong *)(lVar16 + _DAT_180c92cd8) + 0x5940,uVar10);
          iVar13 = iVar13 + 1;
          lVar16 = lVar16 + 8;
        } while ((ulonglong)(longlong)iVar13 < (ulonglong)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3));
      }
      if (_DAT_180c92580 != 0) {
        FUN_180506ae0(_DAT_180c92580 + 0x5f8,uVar10);
      }
    }
    else if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
      fVar22 = (float)_DAT_180c8ed38 * 1e-05;
      if (_DAT_180c92514 == 1) {
        iVar13 = 0;
        lVar16 = _DAT_180c92590 + 0x4c488;
        do {
          func_0x0001805697b0(lVar16,iVar13 + iVar4 * 0x10);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 0x10);
      }
      else {
        uVar14 = iVar4 << 4;
        lVar15 = lVar12 * 0xe00;
        lVar18 = 0x10;
        do {
          lVar21 = *(longlong *)(lVar16 + 0x648);
          if ((ulonglong)(longlong)(int)uVar14 <
              (ulonglong)((*(longlong *)(lVar16 + 0x650) - lVar21) / 0xe0)) {
            uVar6 = uVar14 & 0x8000000f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            *(undefined8 *)(lVar21 + 0xd0 + lVar15) = _DAT_180c966e8;
            *(float *)(lVar21 + 0xd8 + lVar15) = fVar22;
            *(undefined1 *)(lVar21 + 0xdc + lVar15) = 0;
            switch(uVar6) {
            case 0:
            case 9:
              func_0x0001805b2c90(lVar21 + 0x10 + lVar15);
              break;
            case 1:
              *(undefined8 *)(lVar21 + 0xa0 + lVar15) = 0xffffffffffffffff;
              *(undefined2 *)(lVar21 + 200 + lVar15) = 0xff;
              *(undefined8 *)(lVar21 + 0xa8 + lVar15) = 0;
              *(undefined8 *)(lVar21 + 0xb0 + lVar15) = 0;
              *(undefined8 *)(lVar21 + 0xb8 + lVar15) = 0;
              *(undefined8 *)(lVar21 + 0xc0 + lVar15) = 0;
              *(undefined4 *)(lVar21 + 0xcc + lVar15) = 0;
              break;
            case 2:
              puVar1 = (undefined4 *)(lVar21 + lVar15);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
              *(undefined4 *)(lVar21 + lVar15) = 0;
              break;
            case 6:
              *(undefined4 *)(lVar21 + lVar15) = 1;
              break;
            case 0xf:
              *(undefined4 *)(lVar21 + lVar15) = 0xffffffff;
            }
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0xe0;
          lVar18 = lVar18 + -1;
          lVar21 = _iStack0000000000000030;
        } while (lVar18 != 0);
      }
    }
    lVar16 = _DAT_180c8ece0;
    lVar15 = unaff_RDI + 0x30a0;
    iVar13 = *(int *)(lVar21 + 0x18);
    if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar13);
    }
    (**(code **)(lVar16 + 0x228))(*(undefined4 *)(unaff_RDI + 0x98d928),iVar13);
    uVar23 = 0;
    if ((iVar13 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar13);
    }
    FUN_18051aff0(lVar21,1,unaff_RDI + 0x87a948);
    FUN_180507360(lVar21,0);
    *(undefined1 *)(lVar21 + 0x1c) = 1;
    plVar11 = (longlong *)(lVar12 * 0xa60 + lVar15);
    (**(code **)(*plVar11 + 0x68))(plVar11);
    *(undefined4 *)(plVar11 + 2) = 0xffffffff;
    *(int *)(unaff_RDI + 0x52ed90) = *(int *)(unaff_RDI + 0x52ed90) + -1;
    iVar13 = iVar4 + -1;
    uVar19 = (ulonglong)iVar13;
    if (-1 < iVar13) {
      psVar9 = (short *)(lVar15 + (uVar19 + 0x295680) * 2);
      uVar7 = uVar19;
      uVar20 = uVar19;
      do {
        if (*psVar9 == iVar4) {
          sVar2 = *(short *)(unaff_RDI + 0x52dda0 + lVar12 * 2);
          sVar5 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(unaff_RDI + 0x52ed94)) {
            sVar5 = sVar2;
          }
          *(short *)(unaff_RDI + 0x52dda0 + (longlong)(int)uVar20 * 2) = sVar5;
          break;
        }
        uVar20 = (ulonglong)((int)uVar20 - 1);
        psVar9 = psVar9 + -1;
        uVar7 = uVar7 - 1;
      } while (-1 < (longlong)uVar7);
    }
    *(undefined2 *)(unaff_RDI + 0x52dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(unaff_RDI + 0x52ed94) == iVar4 + 1) &&
       (*(undefined4 *)(unaff_RDI + 0x52ed94) = 0, -1 < (longlong)uVar19)) {
      piVar8 = (int *)(uVar19 * 0xa60 + 0x10 + lVar15);
      uVar7 = uVar19;
      iVar17 = iVar13;
      do {
        if (-1 < *piVar8) {
          *(int *)(unaff_RDI + 0x52ed94) = iVar17 + 1;
          break;
        }
        iVar17 = iVar17 + -1;
        piVar8 = piVar8 + -0x298;
        uVar7 = uVar7 - 1;
      } while (-1 < (longlong)uVar7);
    }
    *(undefined4 *)(lVar12 * 0x200 + 0x52edbc + unaff_RDI) = 0xffffffff;
    *(int *)(unaff_RDI + 0x62ed90) = *(int *)(unaff_RDI + 0x62ed90) + -1;
    iVar17 = iVar13;
    if (-1 < (longlong)uVar19) {
      psVar9 = (short *)(unaff_RDI + 0x62dda0 + uVar19 * 2);
      uVar7 = uVar19;
      do {
        if (*psVar9 == iVar4) {
          sVar2 = *(short *)(unaff_RDI + 0x62dda0 + lVar12 * 2);
          sVar5 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(unaff_RDI + 0x62ed94)) {
            sVar5 = sVar2;
          }
          *(short *)(unaff_RDI + 0x62dda0 + (longlong)iVar17 * 2) = sVar5;
          break;
        }
        iVar17 = iVar17 + -1;
        psVar9 = psVar9 + -1;
        uVar7 = uVar7 - 1;
      } while (-1 < (longlong)uVar7);
    }
    *(undefined2 *)(unaff_RDI + 0x62dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(unaff_RDI + 0x62ed94) == iVar4 + 1) &&
       (*(undefined4 *)(unaff_RDI + 0x62ed94) = 0, -1 < (longlong)uVar19)) {
      piVar8 = (int *)(unaff_RDI + 0x52edbc + uVar19 * 0x200);
      do {
        if (-1 < *piVar8) {
          *(int *)(unaff_RDI + 0x62ed94) = iVar13 + 1;
          break;
        }
        iVar13 = iVar13 + -1;
        piVar8 = piVar8 + -0x80;
        uVar19 = uVar19 - 1;
      } while (-1 < (longlong)uVar19);
    }
    FUN_1804fc230(unaff_RDI + 0x62ed98,uVar10,iVar17,uVar19,uVar23);
    FUN_1804fc230(unaff_RDI + 0x74eb90,uVar10);
    *(undefined1 *)(unaff_RDI + 0x87a940) = 1;
    *(undefined1 *)(unaff_RDI + 0x87b728) = 1;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804f42d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



