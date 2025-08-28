#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part489.c - 6 个函数

// 函数: void FUN_18052af20(longlong param_1)
void FUN_18052af20(longlong param_1)

{
  int32_t *puVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  short *psVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  int32_t uVar24;
  
  if (*(int *)(param_1 + 0x720) == 2) {
    fVar23 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x718) * 8) -
                    *(longlong *)(param_1 + 0x710)) * 2e-05;
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    FUN_1802ea560(*(uint64_t *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8),fVar23);
    if (((0.5 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x718) * 8) -
                       *(longlong *)(param_1 + 0x710)) * 1e-05) &&
        (FUN_1802ea560(*(uint64_t *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8),0x3f800000),
        *(int *)(param_1 + 0x720) != 0)) &&
       (*(int32_t *)(param_1 + 0x720) = 0, *(char *)(param_1 + 0x984) != '\0')) {
      *(int32_t *)(*(longlong *)(param_1 + 0x738) + 0x1a0) = 0;
    }
    FUN_18058ac10(*(uint64_t *)(param_1 + 0x590),*(uint64_t *)(param_1 + 0x658));
  }
  else if (*(int *)(param_1 + 0x720) == 3) {
    if (_DAT_180c92514 == 1) {
      return;
    }
    if (_DAT_180c92514 == 4) {
      return;
    }
    if ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x718) * 8) -
               *(longlong *)(param_1 + 0x710)) * 1e-05 <= 30.0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x10);
    lVar12 = *(longlong *)(param_1 + 0x8d8);
    lVar14 = (longlong)iVar6;
    iVar5 = 0;
    if ((((-1 < iVar6) && (iVar6 < *(int *)(lVar12 + 0x52ed94))) &&
        (-1 < *(short *)(lVar12 + 0x52dda0 + lVar14 * 2))) ||
       ((_DAT_180c92514 != 1 && (_DAT_180c92514 != 4)))) {
      lVar22 = lVar12 + 0x30a0 + lVar14 * 0xa60;
      uVar20 = 0;
      iVar18 = *(int *)(lVar12 + 0x87b318);
      if (0 < iVar18) {
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x87b340) + (uVar20 >> 4) * 8) + 8 +
                      (ulonglong)((uint)uVar20 & 0xf) * 0xbe0) != 0) break;
          uVar15 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar15;
        } while ((int)uVar15 < iVar18);
      }
      if ((int)uVar20 < iVar18) {
        do {
          lVar17 = (ulonglong)((uint)uVar20 & 0xf) * 0xbe0 +
                   *(longlong *)(*(longlong *)(lVar12 + 0x87b340) + (uVar20 >> 4) * 8);
          if (*(int *)(lVar17 + 0x2a0) == iVar6) {
            *(int32_t *)(lVar17 + 0x2a0) = 0xffffffff;
          }
          uVar15 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar15;
          iVar18 = *(int *)(lVar12 + 0x87b318);
          if (iVar18 <= (int)uVar15) break;
          do {
            if (*(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x87b340) + (uVar20 >> 4) * 8) + 8 +
                        (ulonglong)((uint)uVar20 & 0xf) * 0xbe0) != 0) break;
            uVar15 = (uint)uVar20 + 1;
            uVar20 = (ulonglong)uVar15;
          } while ((int)uVar15 < iVar18);
        } while ((int)uVar20 < iVar18);
      }
      if (-1 < *(int *)(lVar22 + 0x6a0)) {
        FUN_1804fc920((longlong)
                      ((int)*(uint64_t *)(lVar22 + 0x6a0) +
                      (int)((ulonglong)*(uint64_t *)(lVar22 + 0x6a0) >> 0x20) *
                      *(int *)(lVar12 + 0x98d238)) * 9 + *(longlong *)(lVar12 + 0x98d248));
      }
      (**(code **)(**(longlong **)(lVar12 + 0x98d250) + 0x18))
                (*(longlong **)(lVar12 + 0x98d250),lVar22);
      lVar17 = _DAT_180c92580;
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        iVar5 = _Mtx_lock(0x180c95528);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
        cVar4 = FUN_180645c10(0x180c95578,0,&unknown_var_3504_ptr);
        if ((cVar4 != '\0') &&
           (cVar4 = FUN_180645c10(0x180c95578,0xd,&unknown_var_3472_ptr), cVar4 != '\0')) {
          FUN_180645c10(0x180c95578,iVar6,&unknown_var_3424_ptr);
        }
        _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
        iVar6 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
        if (0 < iVar6) {
          lVar14 = 0;
          lVar12 = _DAT_180c92cd8;
          do {
            lVar22 = *(longlong *)(lVar12 + lVar14 * 8);
            if ((lVar22 != 0) && (*(char *)(*(longlong *)(lVar22 + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(lVar22,0x180c95578);
              lVar12 = _DAT_180c92cd8;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar6);
        }
        if (_DAT_180c96070 != 0) {
          FUN_180567f30(_DAT_180c92580,0x180c95578);
        }
        _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
        memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
      }
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        iVar18 = 0;
        do {
          FUN_1805b32b0(&system_data_25a0,iVar18 + iVar6 * 0x10);
          iVar18 = iVar18 + 1;
        } while (iVar18 < 0x10);
        if (_DAT_180c92ce0 - _DAT_180c92cd8 >> 3 != 0) {
          lVar17 = 0;
          do {
            FUN_180506ae0(*(longlong *)(lVar17 + _DAT_180c92cd8) + 0x5940,iVar6);
            iVar5 = iVar5 + 1;
            lVar17 = lVar17 + 8;
          } while ((ulonglong)(longlong)iVar5 < (ulonglong)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3));
        }
        if (_DAT_180c92580 != 0) {
          FUN_180506ae0(_DAT_180c92580 + 0x5f8,iVar6);
        }
      }
      else if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
        fVar23 = (float)_DAT_180c8ed38 * 1e-05;
        if (_DAT_180c92514 == 1) {
          iVar5 = 0;
          lVar17 = _DAT_180c92590 + 0x4c488;
          do {
            func_0x0001805697b0(lVar17,iVar5 + iVar6 * 0x10);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x10);
        }
        else {
          uVar15 = iVar6 << 4;
          lVar16 = lVar14 * 0xe00;
          lVar19 = 0x10;
          do {
            lVar3 = *(longlong *)(lVar17 + 0x648);
            if ((ulonglong)(longlong)(int)uVar15 <
                (ulonglong)((*(longlong *)(lVar17 + 0x650) - lVar3) / 0xe0)) {
              uVar8 = uVar15 & 0x8000000f;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
              }
              *(uint64_t *)(lVar3 + 0xd0 + lVar16) = _DAT_180c966e8;
              *(float *)(lVar3 + 0xd8 + lVar16) = fVar23;
              *(int8_t *)(lVar3 + 0xdc + lVar16) = 0;
              switch(uVar8) {
              case 0:
              case 9:
                func_0x0001805b2c90(lVar3 + 0x10 + lVar16);
                break;
              case 1:
                *(uint64_t *)(lVar3 + 0xa0 + lVar16) = 0xffffffffffffffff;
                *(int16_t *)(lVar3 + 200 + lVar16) = 0xff;
                *(uint64_t *)(lVar3 + 0xa8 + lVar16) = 0;
                *(uint64_t *)(lVar3 + 0xb0 + lVar16) = 0;
                *(uint64_t *)(lVar3 + 0xb8 + lVar16) = 0;
                *(uint64_t *)(lVar3 + 0xc0 + lVar16) = 0;
                *(int32_t *)(lVar3 + 0xcc + lVar16) = 0;
                break;
              case 2:
                puVar1 = (int32_t *)(lVar3 + lVar16);
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
                *(int32_t *)(lVar3 + lVar16) = 0;
                break;
              case 6:
                *(int32_t *)(lVar3 + lVar16) = 1;
                break;
              case 0xf:
                *(int32_t *)(lVar3 + lVar16) = 0xffffffff;
              }
            }
            uVar15 = uVar15 + 1;
            lVar16 = lVar16 + 0xe0;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      lVar17 = _DAT_180c8ece0;
      lVar16 = lVar12 + 0x30a0;
      iVar5 = *(int *)(lVar22 + 0x18);
      if ((iVar5 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar5);
      }
      (**(code **)(lVar17 + 0x228))(*(int32_t *)(lVar12 + 0x98d928),iVar5);
      uVar24 = 0;
      if ((iVar5 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar5);
      }
      FUN_18051aff0(lVar22,1,lVar12 + 0x87a948);
      FUN_180507360(lVar22,0);
      *(int8_t *)(lVar22 + 0x1c) = 1;
      plVar13 = (longlong *)(lVar14 * 0xa60 + lVar16);
      (**(code **)(*plVar13 + 0x68))(plVar13);
      *(int32_t *)(plVar13 + 2) = 0xffffffff;
      *(int *)(lVar12 + 0x52ed90) = *(int *)(lVar12 + 0x52ed90) + -1;
      iVar5 = iVar6 + -1;
      uVar20 = (ulonglong)iVar5;
      if (-1 < iVar5) {
        psVar11 = (short *)(lVar16 + (uVar20 + 0x295680) * 2);
        uVar9 = uVar20;
        uVar21 = uVar20;
        do {
          if (*psVar11 == iVar6) {
            sVar2 = *(short *)(lVar12 + 0x52dda0 + lVar14 * 2);
            sVar7 = sVar2 + -1;
            if ((int)sVar2 != *(int *)(lVar12 + 0x52ed94)) {
              sVar7 = sVar2;
            }
            *(short *)(lVar12 + 0x52dda0 + (longlong)(int)uVar21 * 2) = sVar7;
            break;
          }
          uVar21 = (ulonglong)((int)uVar21 - 1);
          psVar11 = psVar11 + -1;
          uVar9 = uVar9 - 1;
        } while (-1 < (longlong)uVar9);
      }
      *(int16_t *)(lVar12 + 0x52dda0 + lVar14 * 2) = 0xffff;
      if ((*(int *)(lVar12 + 0x52ed94) == iVar6 + 1) &&
         (*(int32_t *)(lVar12 + 0x52ed94) = 0, -1 < (longlong)uVar20)) {
        piVar10 = (int *)(uVar20 * 0xa60 + 0x10 + lVar16);
        uVar9 = uVar20;
        iVar18 = iVar5;
        do {
          if (-1 < *piVar10) {
            *(int *)(lVar12 + 0x52ed94) = iVar18 + 1;
            break;
          }
          iVar18 = iVar18 + -1;
          piVar10 = piVar10 + -0x298;
          uVar9 = uVar9 - 1;
        } while (-1 < (longlong)uVar9);
      }
      *(int32_t *)(lVar14 * 0x200 + 0x52edbc + lVar12) = 0xffffffff;
      *(int *)(lVar12 + 0x62ed90) = *(int *)(lVar12 + 0x62ed90) + -1;
      iVar18 = iVar5;
      if (-1 < (longlong)uVar20) {
        psVar11 = (short *)(lVar12 + 0x62dda0 + uVar20 * 2);
        uVar9 = uVar20;
        do {
          if (*psVar11 == iVar6) {
            sVar2 = *(short *)(lVar12 + 0x62dda0 + lVar14 * 2);
            sVar7 = sVar2 + -1;
            if ((int)sVar2 != *(int *)(lVar12 + 0x62ed94)) {
              sVar7 = sVar2;
            }
            *(short *)(lVar12 + 0x62dda0 + (longlong)iVar18 * 2) = sVar7;
            break;
          }
          iVar18 = iVar18 + -1;
          psVar11 = psVar11 + -1;
          uVar9 = uVar9 - 1;
        } while (-1 < (longlong)uVar9);
      }
      *(int16_t *)(lVar12 + 0x62dda0 + lVar14 * 2) = 0xffff;
      if ((*(int *)(lVar12 + 0x62ed94) == iVar6 + 1) &&
         (*(int32_t *)(lVar12 + 0x62ed94) = 0, -1 < (longlong)uVar20)) {
        piVar10 = (int *)(lVar12 + 0x52edbc + uVar20 * 0x200);
        do {
          if (-1 < *piVar10) {
            *(int *)(lVar12 + 0x62ed94) = iVar5 + 1;
            break;
          }
          iVar5 = iVar5 + -1;
          piVar10 = piVar10 + -0x80;
          uVar20 = uVar20 - 1;
        } while (-1 < (longlong)uVar20);
      }
      FUN_1804fc230(lVar12 + 0x62ed98,iVar6,iVar18,uVar20,uVar24);
      FUN_1804fc230(lVar12 + 0x74eb90,iVar6);
      *(int8_t *)(lVar12 + 0x87a940) = 1;
      *(int8_t *)(lVar12 + 0x87b728) = 1;
    }
    return;
  }
  if (((*(int *)(param_1 + 0x568) - 3U < 2) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x40) & 1) != 0)) &&
     ((*(char *)(param_1 + 0xa50) != '\0' ||
      (fVar23 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0xa00) * 8) -
                       *(longlong *)(param_1 + 0x9f8)) * 1e-05,
      *(float *)(param_1 + 0xa08) <= fVar23 && fVar23 != *(float *)(param_1 + 0xa08))))) {
    if (-1 < *(int *)(param_1 + 0x6a0)) {
      FUN_1804fc920((longlong)
                    ((int)*(uint64_t *)(param_1 + 0x6a0) +
                    (int)((ulonglong)*(uint64_t *)(param_1 + 0x6a0) >> 0x20) *
                    *(int *)(*(longlong *)(param_1 + 0x8d8) + 0x98d238)) * 9 +
                    *(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x98d248));
    }
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x98d250);
    (**(code **)(*plVar13 + 0x18))(plVar13,param_1);
  }
  return;
}



float * FUN_18052b130(longlong param_1,float *param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  fVar8 = 0.05;
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  fVar10 = *(float *)(lVar1 + 0x120);
  if (fVar10 != 0.0) {
    fVar9 = ABS(fVar10);
    if (fVar9 <= param_3 * 0.05) {
      *(uint64_t *)(lVar1 + 0x120) = 0;
    }
    else {
      fVar4 = param_3 * 6.0;
      fVar7 = (fVar4 + *(float *)(lVar1 + 0x124)) * (1.0 / fVar9);
      fVar5 = (1.0 / fVar9) * param_3 * 0.05;
      if (fVar4 <= fVar7) {
        fVar7 = fVar4;
      }
      if (fVar7 <= fVar5) {
        fVar7 = fVar5;
      }
      *(float *)(lVar1 + 0x124) = fVar7 * fVar9;
      *(float *)(lVar1 + 0x120) = (1.0 - fVar7) * fVar10;
    }
  }
  fVar10 = *(float *)(param_1 + 0x988);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 3.4028235e+38;
  if (((fVar10 != 0.0) || (*(float *)(param_1 + 0x98c) != 0.0)) ||
     (*(float *)(param_1 + 0x990) != 0.0)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (((*(float *)(lVar1 + 0x38) != 0.0) || (*(float *)(lVar1 + 0x3c) != 0.0)) ||
       (1.0 < *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24) +
              *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
              *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x2c))) {
      fVar8 = 0.0125;
    }
    fVar10 = *(float *)(param_1 + 0x988);
    fVar9 = *(float *)(param_1 + 0x98c);
    fVar8 = fVar8 * *(float *)(lVar1 + 0x1d0);
    fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
    if (fVar8 * fVar8 <= fVar7) {
      fVar7 = SQRT(fVar7);
      fVar7 = (fVar7 - fVar8) / fVar7;
      fVar10 = fVar10 * fVar7;
      fVar9 = fVar9 * fVar7;
    }
    else {
      fStack_84 = 0.0;
      fStack_88 = 0.0;
      fVar10 = fStack_88;
      fVar9 = fStack_84;
    }
    fVar7 = ABS(*(float *)(param_1 + 0x990));
    if (fVar8 + fVar8 <= fVar7) {
      fVar8 = *(float *)(param_1 + 0x990) * ((fVar7 - (fVar8 + fVar8)) / fVar7);
    }
    else {
      fVar8 = 0.0;
    }
    fVar7 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
    if (fVar7 <= 25.0) {
      if (fVar7 <= param_3 * param_3 * 0.0001) {
        fStack_88 = fVar10;
        fStack_80 = fVar8;
        fStack_84 = fVar9;
        if (0.0 < fVar7) {
          *(int32_t *)(param_1 + 0x998) = 0;
          fStack_84 = 0.0;
          fStack_88 = 0.0;
          fStack_80 = 0.0;
        }
      }
      else {
        fVar5 = param_3 * 4.0;
        fVar6 = 1.0 / SQRT(fVar7);
        fVar4 = (fVar5 + *(float *)(param_1 + 0x998)) * fVar6;
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        fVar6 = param_3 * 0.01 * fVar6;
        if (fVar4 <= fVar6) {
          fVar4 = fVar6;
        }
        fVar5 = 1.0 - fVar4;
        *(float *)(param_1 + 0x998) = fVar4 * SQRT(fVar7);
        fStack_88 = fVar10 * fVar5;
        fStack_80 = fVar8 * fVar5;
        fStack_84 = fVar9 * fVar5;
      }
      fVar7 = *(float *)(param_1 + 0x990);
      *param_2 = fStack_88 - fVar10;
      param_2[1] = fStack_84 - fVar9;
      param_2[2] = fStack_80 - fVar8;
      param_2[3] = 3.4028235e+38;
      fVar8 = param_2[2];
      *(float *)(param_1 + 0x98c) = param_2[1] + *(float *)(param_1 + 0x98c);
      *(float *)(param_1 + 0x988) = (fStack_88 - fVar10) + *(float *)(param_1 + 0x988);
      *(float *)(param_1 + 0x990) = fVar7 + fVar8;
      if ((((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x40) & 1) != 0) && (0.0 < param_3)) &&
         ((*(char *)(param_1 + 0x418) != '\0' &&
          (((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xc0), lVar1 != 0 &&
            (*(longlong *)(lVar1 + 0x10) != 0)) && (cVar2 = func_0x000180522f60(), cVar2 == '\0'))))
         )) {
        *(int32_t *)(param_1 + 0x990) = uVar3;
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x988) = 0;
      *(uint64_t *)(param_1 + 0x990) = 0x7f7fffff00000000;
      *(int32_t *)(param_1 + 0x998) = 0;
    }
  }
  return param_2;
}



uint64_t FUN_18052b22a(longlong param_1,float *param_2,uint64_t param_3,float param_4)

{
  longlong lVar1;
  char cVar2;
  longlong in_RAX;
  longlong in_R9;
  uint64_t in_R10;
  longlong in_R11;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  
  if (((unaff_XMM6_Da != *(float *)(in_RAX + 0x38)) || (unaff_XMM6_Da != *(float *)(in_RAX + 0x3c)))
     || (unaff_XMM9_Da <
         *(float *)(in_RAX + 0x24) * *(float *)(in_RAX + 0x24) +
         *(float *)(in_RAX + 0x28) * *(float *)(in_RAX + 0x28) +
         *(float *)(in_RAX + 0x2c) * *(float *)(in_RAX + 0x2c))) {
    param_4 = 0.0125;
  }
  fVar7 = *(float *)(param_1 + 0x988);
  fVar9 = *(float *)(param_1 + 0x98c);
  fVar8 = *(float *)(param_1 + 0x990);
  _fStack0000000000000028 = *(uint64_t *)(param_1 + 0x990);
  param_4 = param_4 * *(float *)(in_RAX + 0x1d0);
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar6 = (float)in_R11;
  if (param_4 * param_4 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar4 = (fVar4 - param_4) / fVar4;
    fVar7 = fVar7 * fVar4;
    fVar9 = fVar9 * fVar4;
  }
  else {
    fStackX_24 = (float)((ulonglong)in_R11 >> 0x20);
    fVar7 = fVar6;
    fVar9 = fStackX_24;
  }
  fVar4 = (float)((uint)fVar8 & unaff_XMM10_Da);
  if (param_4 + param_4 <= fVar4) {
    fVar8 = fVar8 * ((fVar4 - (param_4 + param_4)) / fVar4);
  }
  else {
    fVar8 = 0.0;
  }
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar4 <= 25.0) {
    if (fVar4 <= unaff_XMM8_Da * unaff_XMM8_Da * 0.0001) {
      fStackX_20 = fVar7;
      fVar3 = fVar8;
      fStackX_24 = fVar9;
      if (unaff_XMM6_Da < fVar4) {
        *(float *)(param_1 + 0x998) = fVar6;
        fStackX_24 = 0.0;
        fStackX_20 = 0.0;
        _fStack0000000000000028 = 0;
        fStack0000000000000028 = 0.0;
        fVar3 = fStack0000000000000028;
      }
    }
    else {
      fVar3 = unaff_XMM8_Da * 4.0;
      fVar5 = unaff_XMM9_Da / SQRT(fVar4);
      fVar6 = (fVar3 + *(float *)(param_1 + 0x998)) * fVar5;
      if (fVar3 <= fVar6) {
        fVar6 = fVar3;
      }
      fVar5 = unaff_XMM8_Da * 0.01 * fVar5;
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = unaff_XMM9_Da - fVar6;
      *(float *)(param_1 + 0x998) = fVar6 * SQRT(fVar4);
      fStackX_20 = fVar7 * fVar5;
      fVar3 = fVar8 * fVar5;
      fStackX_24 = fVar9 * fVar5;
    }
    fVar6 = *(float *)(param_1 + 0x990);
    *param_2 = fStackX_20 - fVar7;
    param_2[1] = fStackX_24 - fVar9;
    param_2[2] = fVar3 - fVar8;
    param_2[3] = 3.4028235e+38;
    fVar9 = param_2[2];
    *(float *)(param_1 + 0x98c) = param_2[1] + *(float *)(param_1 + 0x98c);
    *(float *)(param_1 + 0x988) = (fStackX_20 - fVar7) + *(float *)(param_1 + 0x988);
    *(float *)(param_1 + 0x990) = fVar6 + fVar9;
    if ((((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x40) & 1) != 0) &&
        (unaff_XMM6_Da < unaff_XMM8_Da)) &&
       ((*(char *)(param_1 + 0x418) != (char)in_R11 &&
        ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xc0), lVar1 != 0 &&
         (*(longlong *)(lVar1 + 0x10) != in_R11)))))) {
      cVar2 = func_0x000180522f60();
      if (cVar2 == '\0') {
        *(int *)(in_R9 + 0x990) = (int)in_R11;
      }
    }
  }
  else {
    *(uint64_t *)(param_1 + 0x988) = 0;
    *(uint64_t *)(param_1 + 0x990) = 0x7f7fffff00000000;
    *(float *)(param_1 + 0x998) = fVar6;
  }
  return in_R10;
}



uint64_t FUN_18052b354(float param_1,float *param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong in_RCX;
  uint64_t in_R10;
  longlong in_R11;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM12_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  
  if (param_3 <= param_1 * unaff_XMM8_Da * 0.0001) {
    fStackX_20 = in_XMM4_Da;
    fStackX_24 = unaff_XMM7_Da;
    if (unaff_XMM6_Da < param_3) {
      *(int *)(in_RCX + 0x998) = (int)in_R11;
      fStackX_24 = 0.0;
      fStackX_20 = 0.0;
      fStack0000000000000028 = 0.0;
      in_XMM5_Da = fStack0000000000000028;
    }
  }
  else {
    fVar3 = unaff_XMM8_Da * 4.0;
    fVar4 = unaff_XMM9_Da / SQRT(param_3);
    fVar5 = (fVar3 + *(float *)(in_RCX + 0x998)) * fVar4;
    if (fVar3 <= fVar5) {
      fVar5 = fVar3;
    }
    fVar4 = unaff_XMM8_Da * 0.01 * fVar4;
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar3 = unaff_XMM9_Da - fVar5;
    *(float *)(in_RCX + 0x998) = fVar5 * SQRT(param_3);
    in_XMM5_Da = in_XMM5_Da * fVar3;
    fStackX_20 = in_XMM4_Da * fVar3;
    fStackX_24 = unaff_XMM7_Da * fVar3;
  }
  fVar5 = *(float *)(in_RCX + 0x990);
  *param_2 = fStackX_20 - in_XMM4_Da;
  param_2[1] = fStackX_24 - unaff_XMM7_Da;
  param_2[2] = in_XMM5_Da - unaff_XMM12_Da;
  param_2[3] = 3.4028235e+38;
  fVar3 = param_2[2];
  *(float *)(in_RCX + 0x98c) = param_2[1] + *(float *)(in_RCX + 0x98c);
  *(float *)(in_RCX + 0x988) = (fStackX_20 - in_XMM4_Da) + *(float *)(in_RCX + 0x988);
  *(float *)(in_RCX + 0x990) = fVar5 + fVar3;
  if (((((*(byte *)(*(longlong *)(in_RCX + 0x20) + 0x40) & 1) != 0) &&
       (unaff_XMM6_Da < unaff_XMM8_Da)) && (*(char *)(in_RCX + 0x418) != (char)in_R11)) &&
     ((lVar1 = *(longlong *)(*(longlong *)(in_RCX + 0x20) + 0xc0), lVar1 != 0 &&
      (*(longlong *)(lVar1 + 0x10) != in_R11)))) {
    cVar2 = func_0x000180522f60();
    if (cVar2 == '\0') {
      *(int *)(param_4 + 0x990) = (int)in_R11;
    }
  }
  return in_R10;
}



uint64_t FUN_18052b485(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  char cVar1;
  longlong in_RAX;
  uint64_t in_R10;
  longlong in_R11;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  
  if ((((unaff_XMM6_Da < unaff_XMM8_Da) && (*(char *)(param_1 + 0x418) != (char)in_R11)) &&
      (*(longlong *)(in_RAX + 0xc0) != 0)) &&
     (*(longlong *)(*(longlong *)(in_RAX + 0xc0) + 0x10) != in_R11)) {
    cVar1 = func_0x000180522f60();
    if (cVar1 == '\0') {
      *(int *)(param_4 + 0x990) = (int)in_R11;
    }
  }
  return in_R10;
}





// 函数: void FUN_18052b4bc(void)
void FUN_18052b4bc(void)

{
  return;
}





// 函数: void FUN_18052b4f0(longlong param_1)
void FUN_18052b4f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  int8_t auStackX_10 [8];
  uint64_t auStack_128 [2];
  int8_t auStack_118 [8];
  float fStack_110;
  int8_t auStack_108 [16];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  float fStack_d8;
  char cStack_d4;
  int8_t auStack_d0 [48];
  uint64_t uStack_a0;
  float fStack_98;
  
  lVar2 = *(longlong *)(param_1 + 0x658);
  lVar11 = *(longlong *)(lVar2 + 0xd0);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x1000);
  }
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210);
  lVar9 = (longlong)*(char *)(lVar3 + 0xdd);
  if (0 < lVar9) {
    pfVar6 = (float *)(param_1 + 0x9e0);
    lVar8 = 0;
    do {
      lVar5 = (longlong)*(char *)(lVar8 + 0xd9 + lVar3);
      lVar10 = lVar5 * 0x1b0 + *(longlong *)(*(longlong *)(lVar2 + 0x208) + 0x140);
      if (0.0 < *(float *)(lVar10 + 0x134)) {
        cVar1 = *(char *)(lVar5 + 0x209 + lVar11);
        if (cVar1 < '\0') {
          puVar7 = (uint64_t *)0x0;
        }
        else {
          puVar7 = *(uint64_t **)(lVar11 + 8 + (longlong)cVar1 * 8);
        }
        (**(code **)(*(longlong *)*puVar7 + 0xa0))((longlong *)*puVar7,auStack_118);
        (**(code **)(*(longlong *)*puVar7 + 200))((longlong *)*puVar7,auStack_d0);
        fVar4 = fStack_98;
        auStack_128[0] = uStack_a0;
        if (fStack_110 < -0.2) {
          cStack_d4 = '\0';
          uStack_f8 = 0;
          uStack_f0 = 0x7f7fffff3f800000;
          fStack_d8 = 0.0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          FUN_1801aa0f0(*(uint64_t *)(param_1 + 0x660),auStack_128,0,auStack_108,0x51b189,
                        (byte)((uint)*(int32_t *)(param_1 + 0x56c) >> 8) & 1);
          fVar12 = fStack_d8;
          if ((cStack_d4 == '\0') &&
             (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x2908),
             fVar12 = -3.4028235e+38, lVar5 != 0)) {
            fVar12 = (float)FUN_1803a56a0(lVar5,auStack_128,auStackX_10);
          }
          fVar12 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0) * *(float *)(lVar10 + 0x134) +
                   fVar12 + 0.1;
          if ((fVar12 < *pfVar6) && (fVar4 <= fVar12)) {
            FUN_18052b7b0(param_1);
          }
        }
        *pfVar6 = fVar4;
      }
      lVar8 = lVar8 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar8 < lVar9);
  }
  return;
}





// 函数: void FUN_18052b556(void)
void FUN_18052b556(void)

{
  char cVar1;
  float fVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  float *pfVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong lVar7;
  longlong unaff_R15;
  float fVar8;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  float in_stack_00000048;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  float fStack0000000000000080;
  char cStack0000000000000084;
  uint64_t in_stack_000000b8;
  float fStack00000000000000c0;
  int32_t uStack00000000000000c4;
  longlong in_stack_00000160;
  
  pfVar4 = (float *)(unaff_RBX + 0x9e0);
  lVar6 = 0;
  do {
    lVar3 = (longlong)*(char *)(lVar6 + 0xd9 + in_RAX);
    lVar7 = lVar3 * 0x1b0 + *(longlong *)(*(longlong *)(unaff_R13 + 0x208) + 0x140);
    if (0.0 < *(float *)(lVar7 + 0x134)) {
      cVar1 = *(char *)(lVar3 + 0x209 + unaff_R15);
      if (cVar1 < '\0') {
        puVar5 = (uint64_t *)0x0;
      }
      else {
        puVar5 = *(uint64_t **)(unaff_R15 + 8 + (longlong)cVar1 * 8);
      }
      (**(code **)(*(longlong *)*puVar5 + 0xa0))((longlong *)*puVar5,&stack0x00000040);
      (**(code **)(*(longlong *)*puVar5 + 200))((longlong *)*puVar5,&stack0x00000088);
      fVar2 = fStack00000000000000c0;
      in_stack_00000038 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
      in_stack_00000030 = in_stack_000000b8;
      if (in_stack_00000048 < -0.2) {
        cStack0000000000000084 = '\0';
        in_stack_00000060 = 0;
        in_stack_00000068 = 0x7f7fffff3f800000;
        fStack0000000000000080 = 0.0;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_1801aa0f0(*(uint64_t *)(unaff_RBX + 0x660),&stack0x00000030,0,&stack0x00000050,
                      0x51b189);
        fVar8 = fStack0000000000000080;
        if ((cStack0000000000000084 == '\0') &&
           (lVar3 = *(longlong *)(*(longlong *)(unaff_RBX + 0x660) + 0x2908), fVar8 = -3.4028235e+38
           , lVar3 != 0)) {
          fVar8 = (float)FUN_1803a56a0(lVar3,&stack0x00000030,&stack0x00000168);
        }
        fVar8 = *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0) * *(float *)(lVar7 + 0x134) +
                fVar8 + 0.1;
        if ((fVar8 < *pfVar4) && (fVar2 <= fVar8)) {
          FUN_18052b7b0();
        }
      }
      *pfVar4 = fVar2;
    }
    lVar6 = lVar6 + 1;
    pfVar4 = pfVar4 + 1;
    in_RAX = in_stack_00000160;
  } while (lVar6 < unaff_R12);
  return;
}





// 函数: void FUN_18052b793(void)
void FUN_18052b793(void)

{
  return;
}





// 函数: void FUN_18052b7b0(longlong param_1)
void FUN_18052b7b0(longlong param_1)

{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int8_t auVar5 [16];
  float fVar6;
  
  fVar6 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0xa00) * 8) -
                 *(longlong *)(param_1 + 0x9f8)) * 5e-06;
  if ((*(byte *)(param_1 + 0x9f0) == 0) || ((float)*(byte *)(param_1 + 0x9f0) < fVar6)) {
    uVar1 = FUN_18052c030(param_1,7);
    if (*(int *)(param_1 + 0x568) == 1) {
      *(int8_t *)(param_1 + 0x9f0) = 0;
      return;
    }
    iVar3 = (int)fVar6;
    fVar4 = fVar6;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
      auVar5._4_4_ = fVar6;
      auVar5._0_4_ = fVar6;
      auVar5._8_8_ = 0;
      uVar2 = movmskps(uVar1,auVar5);
      fVar4 = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
    }
    if (fVar6 <= 0.0) {
      fVar4 = fVar4 - 1e-08;
    }
    else {
      fVar4 = fVar4 + 1e-08;
    }
    *(char *)(param_1 + 0x9f0) = (char)(int)fVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



