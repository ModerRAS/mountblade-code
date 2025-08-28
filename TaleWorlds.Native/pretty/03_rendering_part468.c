#include "TaleWorlds.Native.Split.h"

// 03_rendering_part468.c - 16 个函数

// 函数: void FUN_18051a8a0(longlong param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18051a8a0(longlong param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar12;
  longlong lStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [24];
  ulonglong uVar11;
  
  if (((*(int *)(param_1 + 0x570) == 2) && (_DAT_180c92514 != 0)) && (_DAT_180c92514 != 5)) {
    FUN_180541010(*(uint64_t *)(param_1 + 0x6d8),0x21,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(param_1 + 0x728);
  uVar11 = 0;
  if (lVar1 != 0) {
    if (*(ushort *)(lVar1 + 0x5aa) != 0) {
      *(ushort *)(lVar1 + 0x5ac) = *(ushort *)(lVar1 + 0x5ac) | *(ushort *)(lVar1 + 0x5aa);
      *(int16_t *)(*(longlong *)(param_1 + 0x728) + 0x5aa) = 0;
      *(int32_t *)(*(longlong *)(param_1 + 0x728) + 0x5a4) = 0xffffffff;
    }
    FUN_180516e40(param_1,0xffff);
    lVar1 = *(longlong *)(param_1 + 0x590);
    *(uint64_t *)(lVar1 + 0x3440) = 0;
    *(uint64_t *)(lVar1 + 0x3448) = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x5e0) != 0) {
      FUN_18052adc0(param_1);
    }
  }
  if (((*(uint *)(param_1 + 0x56c) & 0x801) == 1) &&
     (lVar1 = *(longlong *)(param_1 + 0x590), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x8d8);
    uVar10 = *(uint *)(lVar2 + 0x52ed94);
    if (0 < (int)uVar10) {
      piVar7 = (int *)(lVar2 + 0x30b0);
      uVar6 = uVar11;
      uVar9 = uVar11;
      do {
        if (-1 < *piVar7) goto LAB_18051a9cf;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar9 = uVar9 + 1;
        piVar7 = piVar7 + 0x298;
      } while ((longlong)uVar9 < (longlong)(int)uVar10);
    }
    uVar6 = (ulonglong)uVar10;
LAB_18051a9cf:
    uVar5 = (uint)uVar6;
    while ((int)uVar5 < (int)uVar10) {
      lVar8 = (longlong)(int)uVar6 * 0xa60;
      lVar12 = *(longlong *)(lVar2 + 0x3778 + lVar8);
      if (((lVar12 != 0) && (*(char *)(lVar12 + 0x8be) != '\0')) &&
         (plVar3 = *(longlong **)(lVar8 + 0x3630 + lVar2), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x138))(plVar3,lVar1);
      }
      uVar5 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)uVar6 * 2);
      uVar6 = (ulonglong)uVar5;
    }
    lVar12 = *(longlong *)(lVar2 + 0x87bd08);
    uVar6 = uVar11;
    if ((*(longlong *)(lVar2 + 0x87bd10) - lVar12) / 0x18 != 0) {
      do {
        if ((((*(longlong *)(uVar6 + lVar12) != 0) &&
             (lVar12 = *(longlong *)(*(longlong *)(uVar6 + lVar12) + 0x260), lVar12 != 0)) &&
            (plVar3 = *(longlong **)(lVar12 + 0x210), plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 0x30))(), cVar4 != '\0')) {
          plVar3 = *(longlong **)
                    (*(longlong *)(*(longlong *)(uVar6 + *(longlong *)(lVar2 + 0x87bd08)) + 0x260) +
                    0x210);
          (**(code **)(*plVar3 + 0x138))(plVar3,lVar1);
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        lVar12 = *(longlong *)(lVar2 + 0x87bd08);
        uVar6 = uVar6 + 0x18;
      } while ((ulonglong)(longlong)(int)uVar10 <
               (ulonglong)((*(longlong *)(lVar2 + 0x87bd10) - lVar12) / 0x18));
    }
  }
  FUN_180507360(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if (*(char *)(lVar1 + 0x8be) != '\0') {
    FUN_18053fcb0(lVar1,param_2);
    uStack_48 = *(int32_t *)(lVar1 + 0x938);
    lStack_50 = lVar1;
    FUN_1804dd4d0(*(longlong *)(lVar1 + 0x930) + 0x2b58,auStack_40,&lStack_50);
  }
  if (-1 < *(int *)(param_1 + 0x6a0)) {
    FUN_1804fc920((longlong)
                  ((int)*(uint64_t *)(param_1 + 0x6a0) +
                  (int)((ulonglong)*(uint64_t *)(param_1 + 0x6a0) >> 0x20) *
                  *(int *)(*(longlong *)(param_1 + 0x8d8) + 0x98d238)) * 9 +
                  *(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x98d248));
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x98d250);
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  *(uint64_t *)(param_1 + 0x658) = 0;
  *(uint64_t *)(param_1 + 0x660) = 0;
  *(uint64_t *)(param_1 + 0x660) = *(uint64_t *)(*(longlong *)(param_1 + 0x8d8) + 0x18);
  if (*(longlong *)(param_1 + 0x738) != 0) {
    *(int8_t *)(*(longlong *)(param_1 + 0x738) + 0x198) = 0;
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x730) = 0;
  lVar1 = *(longlong *)(param_1 + 0x728);
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 0x5e0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x5e0) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(uint64_t *)(param_1 + 0x728) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051ac20(longlong param_1,char param_2)
void FUN_18051ac20(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t uVar8;
  longlong *plStackX_8;
  int32_t uStackX_10;
  longlong **pplStackX_18;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  
  lVar7 = 0;
  FUN_18051fa40(param_1,2);
  lVar6 = _DAT_180c8ece0;
  uVar8 = *(int32_t *)(param_1 + 0x568);
  uStackX_10 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar4);
  if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar4);
  }
  uStack_118 = 0;
  uStack_110 = 0x7f7fffff00000000;
  uStack_108 = 0;
  uStack_100 = 0x7f7fffff00000000;
  uStack_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffff000000ff;
  uStack_e0 = 0xff;
  uStack_d8 = 0;
  uStack_d0 = 0x7f7fffff;
  uStack_c8 = 0;
  uStack_c0 = 0xffffffffffffffff;
  uStack_b8 = 0;
  (**(code **)(lVar6 + 0x238))
            (*(int32_t *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),iVar4,0,uVar8,&uStack_118);
  if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar4);
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    plVar1 = *(longlong **)(param_1 + 0x8e0);
    iVar4 = _Mtx_lock(0x180c95528);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar8 = *(int32_t *)(*plVar1 + 0x10);
    cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
    if (((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,0xc,&UNK_1809fa540), cVar3 != '\0'))
       && (cVar3 = FUN_180645c10(0x180c95578,uVar8,&UNK_1809fa510), cVar3 != '\0')) {
      FUN_180645c10(0x180c95578,param_2,&UNK_1809fa560);
    }
    _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
    iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
    lVar6 = _DAT_180c92cd8;
    if (0 < iVar4) {
      do {
        lVar2 = *(longlong *)(lVar6 + lVar7 * 8);
        if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar2,0x180c95578);
          lVar6 = _DAT_180c92cd8;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
    if (_DAT_180c96070 != 0) {
      FUN_180567f30(_DAT_180c92580,0x180c95578);
    }
    _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
    memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
  }
  uVar5 = FUN_1804fb7c0(*(longlong *)(param_1 + 0x8d8) + 0x87bd28);
  if (param_2 == '\0') {
    uVar8 = 0x3f000000;
  }
  else {
    uVar8 = 0;
  }
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x87bd50) + (ulonglong)(uVar5 >> 4) * 8);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1805ae000((ulonglong)(uVar5 & 0xf) * 0x40 + lVar6,*(uint64_t *)(param_1 + 0x8d8),&plStackX_8
                ,uVar8,1);
  FUN_18051a8a0(param_1,0);
  if ((*(int *)(param_1 + 0x720) != 3) &&
     (*(int32_t *)(param_1 + 0x720) = 3, *(char *)(param_1 + 0x984) != '\0')) {
    *(int32_t *)(*(longlong *)(param_1 + 0x738) + 0x1a0) = 3;
  }
  *(uint64_t *)(param_1 + 0x710) =
       *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x718) * 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051aff0(longlong param_1,char param_2,longlong param_3)
void FUN_18051aff0(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_1 + 0x658) != 0) &&
     ((ushort)(*(short *)(*(longlong *)(param_1 + 0x658) + 0x40) - 2U) < 2)) {
    if (*(longlong *)(param_1 + 0x728) != 0) {
      AcquireSRWLockExclusive(param_3);
      FUN_18052adc0(param_1);
      ReleaseSRWLockExclusive(param_3);
    }
    iVar4 = _Mtx_lock(param_3 + 0x58);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x8d8);
    lVar2 = *(longlong *)(param_1 + 0x658);
    if ((lVar2 != 0) && ((ushort)(*(short *)(lVar2 + 0x40) - 2U) < 3)) {
      if (*(float *)(lVar2 + 0x3c) < 0.0) {
        *(int32_t *)(lVar2 + 0x34) = 0x3dcccccd;
      }
      else {
        *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x3c) + 1.1920929e-07;
      }
      *(int16_t *)(lVar2 + 0x40) = 4;
      if ((*(longlong *)(lVar2 + 0x130) != 0) || (*(longlong *)(lVar2 + 0x138) != 0)) {
        (**(code **)(lVar2 + 0x138))();
      }
    }
    iVar4 = 0;
    plVar3 = *(longlong **)(lVar1 + 0x98d8d8);
    uVar6 = *(longlong *)(lVar1 + 0x98d8e0) - (longlong)plVar3 >> 3;
    plVar5 = plVar3;
    if (uVar6 != 0) {
      do {
        if (*plVar5 == param_1) {
          plVar3[iVar4] = *(longlong *)(*(longlong *)(lVar1 + 0x98d8e0) + -8);
          *(longlong *)(lVar1 + 0x98d8e0) = *(longlong *)(lVar1 + 0x98d8e0) + -8;
          break;
        }
        iVar4 = iVar4 + 1;
        plVar5 = plVar5 + 1;
      } while ((ulonglong)(longlong)iVar4 < uVar6);
    }
    iVar4 = _Mtx_unlock(param_3 + 0x58);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    if ((((param_2 == '\0') && (*(char *)(param_1 + 0xa50) == '\0')) && (_DAT_180c92514 != 1)) &&
       (_DAT_180c92514 != 4)) {
      FUN_1804ec4e0(*(uint64_t *)(param_1 + 0x8d8),param_1,0xffffffff,param_3,0);
      if ((*(int *)(param_1 + 0x720) != 3) &&
         (*(int32_t *)(param_1 + 0x720) = 3, *(char *)(param_1 + 0x984) != '\0')) {
        *(int32_t *)(*(longlong *)(param_1 + 0x738) + 0x1a0) = 3;
      }
      *(uint64_t *)(param_1 + 0x710) =
           *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x718) * 8);
      *(int8_t *)(param_1 + 0xa50) = 1;
      *(int8_t *)(*(longlong *)(param_1 + 0x738) + 0x199) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051b210(longlong param_1,longlong param_2)
void FUN_18051b210(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  
  if ((((*(int *)(param_1 + 0x920) == 1) && (-1 < *(int *)(param_1 + 0x560))) &&
      (_DAT_180c92514 != 1)) &&
     ((_DAT_180c92514 != 4 &&
      (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x6d0) * 8) -
                    *(longlong *)(param_1 + 0x6c8)) * 1e-05)))) {
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      uVar4 = FUN_1805ed670(_DAT_180c92514,0x180c8ed01,*(int *)(param_1 + 0x560),0xffffffff,
                            0xffffffff,0,0xfffffffffffffffe);
      FUN_1805ed670(uVar4,0,*(int32_t *)(param_1 + 0x10),0xffffffff,0xffffffff,0);
    }
    iVar2 = *(int *)(param_1 + 0x560);
    lVar3 = *(longlong *)(param_1 + 0x8d8);
    iVar1 = _Mtx_lock(param_2 + 8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    FUN_18052e450((longlong)iVar2 * 0xa60 + lVar3 + 0x30a0,0xffffffff,1,0);
    FUN_18052e130(param_1,0xffffffff,1);
    iVar2 = _Mtx_unlock(param_2 + 8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  if (*(int *)(param_1 + 0x720) != 1) {
    return;
  }
  if ((*(int *)(param_1 + 0x920) == 0) && (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x14a8) != 8))
  {
    return;
  }
  if (*(int *)(param_1 + 0x568) != 1) {
    return;
  }
  iVar2 = _Mtx_lock(param_2 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_18051ac20(param_1,0);
  if ((*(int *)(param_1 + 0x560) < 0) ||
     (lVar3 = (longlong)*(int *)(param_1 + 0x560) * 0xa60 + *(longlong *)(param_1 + 0x8d8) + 0x30a0,
     *(int *)(lVar3 + 0x920) != 0)) {
    if (*(int *)(param_1 + 0x564) < 0) goto LAB_18051b41c;
    lVar3 = (longlong)*(int *)(param_1 + 0x564) * 0xa60 + *(longlong *)(param_1 + 0x8d8) + 0x30a0;
  }
  FUN_18051ac20(lVar3,0);
LAB_18051b41c:
  iVar2 = _Mtx_unlock(param_2 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051b450(longlong param_1,uint64_t param_2)
void FUN_18051b450(longlong param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  int8_t auStack_e8 [32];
  int8_t *puStack_c8;
  uint64_t uStack_b8;
  int8_t auStack_b0 [16];
  int8_t auStack_a0 [16];
  int8_t auStack_90 [24];
  int8_t auStack_78 [64];
  int32_t uStack_38;
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  FUN_1805288a0(param_1,auStack_b0,auStack_a0,auStack_90);
  uStack_38 = 0;
  puStack_c8 = auStack_78;
  cVar1 = FUN_1801ab110(*(uint64_t *)(param_1 + 0x660),param_2,auStack_b0,0x47c35000);
  iVar2 = 0;
  if (cVar1 != '\0') {
    iVar2 = 2;
  }
  uStack_38 = 0;
  puStack_c8 = auStack_78;
  cVar1 = FUN_1801ab110(*(uint64_t *)(param_1 + 0x660),param_2,auStack_a0,0x47c35000);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  uStack_38 = 0;
  puStack_c8 = auStack_78;
  cVar1 = FUN_1801ab110(*(uint64_t *)(param_1 + 0x660),param_2,auStack_90,0x47c35000);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  uStack_38 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050((float)iVar2 * 0.25);
}





// 函数: void FUN_18051b580(longlong param_1,uint64_t param_2,char param_3)
void FUN_18051b580(longlong param_1,uint64_t param_2,char param_3)

{
  if ((*(char *)(param_1 + 0xa50) == '\0') &&
     ((param_3 != '\0' ||
      (*(float *)(param_1 + 0xa08) + 3.0 <
       (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8) -
              *(longlong *)(param_1 + 0x9f8)) * 1e-05)))) {
    FUN_1804ec4e0(*(uint64_t *)(param_1 + 0x8d8),param_1,0xffffffff,param_2,0);
    if ((*(int *)(param_1 + 0x720) != 3) &&
       (*(int32_t *)(param_1 + 0x720) = 3, *(char *)(param_1 + 0x984) != '\0')) {
      *(int32_t *)(*(longlong *)(param_1 + 0x738) + 0x1a0) = 3;
    }
    *(uint64_t *)(param_1 + 0x710) =
         *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x718) * 8);
    *(int8_t *)(param_1 + 0xa50) = 1;
    *(int8_t *)(*(longlong *)(param_1 + 0x738) + 0x199) = 0;
  }
  return;
}





// 函数: void FUN_18051b596(longlong param_1,uint64_t param_2,char param_3)
void FUN_18051b596(longlong param_1,uint64_t param_2,char param_3)

{
  longlong unaff_RBX;
  float in_XMM1_Da;
  
  if ((param_3 == '\0') &&
     (in_XMM1_Da = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xa00) * 8) -
                          *(longlong *)(param_1 + 0x9f8)) * 1e-05,
     in_XMM1_Da <= *(float *)(param_1 + 0xa08) + 3.0)) {
    return;
  }
  FUN_1804ec4e0(*(uint64_t *)(param_1 + 0x8d8),in_XMM1_Da,0xffffffff,param_2,0);
  if ((*(int *)(unaff_RBX + 0x720) != 3) &&
     (*(int32_t *)(unaff_RBX + 0x720) = 3, *(char *)(unaff_RBX + 0x984) != '\0')) {
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x738) + 0x1a0) = 3;
  }
  *(uint64_t *)(unaff_RBX + 0x710) =
       *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x718) * 8);
  *(int8_t *)(unaff_RBX + 0xa50) = 1;
  *(int8_t *)(*(longlong *)(unaff_RBX + 0x738) + 0x199) = 0;
  return;
}





// 函数: void FUN_18051b654(void)
void FUN_18051b654(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051b660(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_18051b660(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lStackX_8;
  
  if (*(longlong *)(param_1 + 0x658) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0x8be) == '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x700) - *(float *)(lVar1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x6f8) - *(float *)(lVar1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x6fc) - *(float *)(lVar1 + 0x10);
  fVar6 = (5.0 - *(float *)(param_1 + 0xa58)) * 0.2 + 0.01;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (((fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5 <= fVar6) &&
      (iVar3 = *(int *)(*(longlong *)(param_1 + 0x8d8) + 0x98d930),
      iVar3 != *(int *)(param_1 + 0x10))) && (iVar3 != *(int *)(param_1 + 0x560)))
  goto LAB_18051b751;
  iVar3 = _Thrd_id();
  if (_DAT_180c9105c == 0) {
    iVar2 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
joined_r0x00018051b784:
    if (iVar3 != iVar2) {
      lVar1 = *(longlong *)(param_1 + 0x8d8);
      lStackX_8 = param_1;
      lVar4 = FUN_1805333b0(lVar1 + 0x98d5d8);
      if (lVar4 != 0) {
        FUN_1805341e0(lVar4,&lStackX_8);
      }
      iVar3 = _Cnd_signal(lVar1 + 0x98d840);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      goto LAB_18051b751;
    }
  }
  else {
    iVar2 = _DAT_180c9105c;
    if (iVar3 != *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48)) goto joined_r0x00018051b784;
  }
  FUN_18052edc0(param_1);
LAB_18051b751:
  FUN_18052a270(param_1,param_3);
  FUN_18051b7e0(param_1);
  return;
}





// 函数: void FUN_18051b786(void)
void FUN_18051b786(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBX;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x8d8);
  lVar3 = FUN_1805333b0(lVar1 + 0x98d5d8);
  if (lVar3 != 0) {
    FUN_1805341e0(lVar3,&stack0x00000030);
  }
  iVar2 = _Cnd_signal(lVar1 + 0x98d840);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_18052a270();
  FUN_18051b7e0();
  return;
}





// 函数: void FUN_18051b7cb(void)
void FUN_18051b7cb(void)

{
  int32_t in_EAX;
  
  __Throw_C_error_std__YAXH_Z(in_EAX);
  FUN_18052a270();
  FUN_18051b7e0();
  return;
}





// 函数: void FUN_18051b7e0(longlong param_1)
void FUN_18051b7e0(longlong param_1)

{
  if ((((*(char *)(*(longlong *)(param_1 + 0x6d8) + 0x8be) != '\0') &&
       (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) != 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x658) + 0xa8) >> 3 & 1) == 0)) &&
     (2 < (ushort)(*(short *)(*(longlong *)(param_1 + 0x658) + 0x40) - 2U))) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(*(longlong *)(param_1 + 0x20) + 0x120) +
                  *(float *)(*(longlong *)(param_1 + 0x20) + 0x34));
  }
  return;
}





// 函数: void FUN_18051b83a(void)
void FUN_18051b83a(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(*(longlong *)(unaff_RBX + 0x20) + 0x120) +
                *(float *)(*(longlong *)(unaff_RBX + 0x20) + 0x34));
}





// 函数: void FUN_18051b99d(void)
void FUN_18051b99d(void)

{
  return;
}



ulonglong FUN_18051b9b0(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  int32_t uVar5;
  char cVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fStackX_20;
  float fStackX_24;
  
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x598) + 0x17c);
  }
  if ((*(int *)(param_3 + 0xa8) - 1U < 2) || (0.7 < ABS(*(float *)(param_3 + 0x80)))) {
    if (*(int *)(param_3 + 0xb0) < 0) {
      fStackX_24 = -*(float *)(param_1 + 0x534);
      fStackX_20 = -*(float *)(param_1 + 0x530);
    }
    else {
      lVar3 = *(longlong *)
               ((longlong)*(int *)(param_3 + 0xb0) * 0xa60 + 0x30c0 + *(longlong *)(param_1 + 0x8d8)
               );
      fVar9 = *(float *)(*(longlong *)(param_1 + 0x20) + 0xc) - *(float *)(lVar3 + 0xc);
      fStackX_24 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x10) - *(float *)(lVar3 + 0x10);
      fVar7 = fVar9 * fVar9 + fStackX_24 * fStackX_24;
      fVar7 = (float)(fVar7 <= 1.1754944e-38) * 1.1754944e-38 + fVar7;
      auVar8 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar10 = auVar8._0_4_;
      fStackX_20 = fVar10 * 0.5 * (3.0 - fVar7 * fVar10 * fVar10);
      fStackX_24 = fStackX_20 * fStackX_24;
      fStackX_20 = fStackX_20 * fVar9;
    }
  }
  else {
    fStackX_24 = (float)((ulonglong)*(uint64_t *)(param_3 + 0x78) >> 0x20);
    fStackX_20 = (float)*(uint64_t *)(param_3 + 0x78);
    fVar7 = fStackX_24 * fStackX_24 + fStackX_20 * fStackX_20;
    auVar8 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar10 = auVar8._0_4_;
    fVar7 = fVar10 * 0.5 * (3.0 - fVar7 * fVar10 * fVar10);
    fStackX_24 = fStackX_24 * fVar7;
    fStackX_20 = fStackX_20 * fVar7;
  }
  bVar4 = false;
  uVar5 = 0xffffffff;
  if (param_2 == 5) {
    cVar1 = '\x02';
    lVar3 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    uVar5 = *(int32_t *)(*(longlong *)(lVar3 + 0x3638 + *(longlong *)(param_1 + 0x8d8)) + 0x20);
    bVar4 = 3 < *(int *)(*(longlong *)
                          (*(longlong *)(lVar3 + 0x3630 + *(longlong *)(param_1 + 0x8d8)) + 0x2590)
                        + 0x10);
  }
  else if (param_2 == 4) {
    if (*(int *)(param_3 + 0xa8) == 1) {
      cVar1 = '\x03';
    }
    else {
      if (*(char *)(param_3 + 0xb4) < '\0') {
        cVar1 = -1;
      }
      else {
        cVar1 = *(char *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208) + 0x140) + 0x104 +
                         (longlong)*(char *)(param_3 + 0xb4) * 0x1b0);
      }
      if (cVar1 == '\x03') {
        cVar1 = '\x02';
      }
    }
  }
  else if (*(char *)(param_3 + 0xb4) < '\0') {
    cVar1 = -1;
  }
  else {
    cVar1 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208) + 0x140) +
                      0x104 + (longlong)*(char *)(param_3 + 0xb4) * 0x1b0);
  }
  fVar7 = fStackX_24 * *(float *)(param_1 + 0x534) + fStackX_20 * *(float *)(param_1 + 0x530);
  if (param_2 == 5) {
    fVar10 = fStackX_24 * *(float *)(param_1 + 0x524) + fStackX_20 * *(float *)(param_1 + 0x520);
    if (0.0 <= fVar7) {
      cVar6 = (0.0 < fVar10) + '\x06';
    }
    else {
      cVar6 = (0.0 < fVar10) + '\x03';
    }
  }
  else if (-0.5 <= fVar7) {
    if (fVar7 <= 0.5) {
      cVar6 = 0.5 < fStackX_24 * *(float *)(param_1 + 0x524) +
                    fStackX_20 * *(float *)(param_1 + 0x520);
    }
    else {
      cVar6 = '\x05';
    }
  }
  else {
    cVar6 = '\x02';
  }
  fVar7 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
  uVar2 = FUN_180557850(*(uint64_t *)(param_1 + 0x598),uVar5,cVar6,cVar1,
                        *(int8_t *)(*(longlong *)(param_1 + 0x590) + 0x34bc),bVar4,param_2,
                        1.0 < fVar10 * fVar10 + fVar7 * fVar7);
  return uVar2;
}





// 函数: void FUN_18051b9d8(void)
void FUN_18051b9d8(void)

{
  longlong lVar1;
  int32_t uVar2;
  char cVar3;
  char cVar4;
  longlong in_R9;
  longlong in_R10;
  int in_R11D;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000038;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if ((*(int *)(in_R9 + 0xa8) - 1U < 2) || (0.7 < ABS(*(float *)(in_R9 + 0x80)))) {
    if (*(int *)(in_R9 + 0xb0) < 0) {
      fStack000000000000007c = -*(float *)(in_R10 + 0x534);
      fStack0000000000000078 = -*(float *)(in_R10 + 0x530);
    }
    else {
      lVar1 = *(longlong *)
               ((longlong)*(int *)(in_R9 + 0xb0) * 0xa60 + 0x30c0 + *(longlong *)(in_R10 + 0x8d8));
      fVar7 = *(float *)(*(longlong *)(in_R10 + 0x20) + 0xc) - *(float *)(lVar1 + 0xc);
      fStack000000000000007c =
           *(float *)(*(longlong *)(in_R10 + 0x20) + 0x10) - *(float *)(lVar1 + 0x10);
      fVar5 = fVar7 * fVar7 + fStack000000000000007c * fStack000000000000007c;
      fVar5 = (float)(fVar5 <= 1.1754944e-38) * 1.1754944e-38 + fVar5;
      auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar8 = auVar6._0_4_;
      fStack0000000000000078 = fVar8 * 0.5 * (3.0 - fVar5 * fVar8 * fVar8);
      fStack000000000000007c = fStack0000000000000078 * fStack000000000000007c;
      fStack0000000000000078 = fStack0000000000000078 * fVar7;
    }
  }
  else {
    fStack000000000000007c = (float)((ulonglong)*(uint64_t *)(in_R9 + 0x78) >> 0x20);
    fStack0000000000000078 = (float)*(uint64_t *)(in_R9 + 0x78);
    fVar5 = fStack000000000000007c * fStack000000000000007c +
            fStack0000000000000078 * fStack0000000000000078;
    auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar8 = auVar6._0_4_;
    fVar5 = fVar8 * 0.5 * (3.0 - fVar5 * fVar8 * fVar8);
    fStack000000000000007c = fStack000000000000007c * fVar5;
    fStack0000000000000078 = fStack0000000000000078 * fVar5;
  }
  uStack0000000000000028 = false;
  uVar2 = 0xffffffff;
  if (in_R11D == 5) {
    cVar4 = '\x02';
    lVar1 = (longlong)*(int *)(in_R10 + 0x564) * 0xa60;
    uVar2 = *(int32_t *)(*(longlong *)(lVar1 + 0x3638 + *(longlong *)(in_R10 + 0x8d8)) + 0x20);
    uStack0000000000000028 =
         3 < *(int *)(*(longlong *)
                       (*(longlong *)(lVar1 + 0x3630 + *(longlong *)(in_R10 + 0x8d8)) + 0x2590) +
                     0x10);
  }
  else if (in_R11D == 4) {
    if (*(int *)(in_R9 + 0xa8) == 1) {
      cVar4 = '\x03';
    }
    else {
      if (*(char *)(in_R9 + 0xb4) < '\0') {
        cVar4 = -1;
      }
      else {
        cVar4 = *(char *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(in_R10 + 0x658) + 0x208) + 0x140) + 0x104 +
                         (longlong)*(char *)(in_R9 + 0xb4) * 0x1b0);
      }
      if (cVar4 == '\x03') {
        cVar4 = '\x02';
      }
    }
  }
  else if (*(char *)(in_R9 + 0xb4) < '\0') {
    cVar4 = -1;
  }
  else {
    cVar4 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R10 + 0x658) + 0x208) + 0x140) +
                      0x104 + (longlong)*(char *)(in_R9 + 0xb4) * 0x1b0);
  }
  fVar5 = fStack000000000000007c * *(float *)(in_R10 + 0x534) +
          fStack0000000000000078 * *(float *)(in_R10 + 0x530);
  if (in_R11D == 5) {
    fVar8 = fStack000000000000007c * *(float *)(in_R10 + 0x524) +
            fStack0000000000000078 * *(float *)(in_R10 + 0x520);
    if (0.0 <= fVar5) {
      cVar3 = (0.0 < fVar8) + '\x06';
    }
    else {
      cVar3 = (0.0 < fVar8) + '\x03';
    }
  }
  else if (-0.5 <= fVar5) {
    if (fVar5 <= 0.5) {
      cVar3 = 0.5 < fStack000000000000007c * *(float *)(in_R10 + 0x524) +
                    fStack0000000000000078 * *(float *)(in_R10 + 0x520);
    }
    else {
      cVar3 = '\x05';
    }
  }
  else {
    cVar3 = '\x02';
  }
  fVar5 = *(float *)(*(longlong *)(in_R10 + 0x20) + 0x20);
  fVar8 = *(float *)(*(longlong *)(in_R10 + 0x20) + 0x1c);
  uStack0000000000000038 = 1.0 < fVar8 * fVar8 + fVar5 * fVar5;
  FUN_180557850(*(uint64_t *)(in_R10 + 0x598),uVar2,cVar3,cVar4,
                *(int8_t *)(*(longlong *)(in_R10 + 0x590) + 0x34bc));
  return;
}





// 函数: void FUN_18051bc7a(uint64_t param_1,float param_2,float param_3,uint64_t param_4)
void FUN_18051bc7a(uint64_t param_1,float param_2,float param_3,uint64_t param_4)

{
  float fVar1;
  int32_t unaff_EDI;
  int iVar2;
  uint64_t in_R8;
  undefined7 uVar3;
  longlong in_R10;
  float unaff_XMM6_Da;
  float fVar4;
  int8_t uStack0000000000000038;
  
  fVar4 = unaff_XMM6_Da * *(float *)(in_R10 + 0x524) + param_3 * *(float *)(in_R10 + 0x520);
  uVar3 = (undefined7)((ulonglong)in_R8 >> 8);
  if (0.0 <= param_2) {
    iVar2 = (int)CONCAT71(uVar3,0.0 < fVar4) + 6;
  }
  else {
    iVar2 = (int)CONCAT71(uVar3,0.0 < fVar4) + 3;
  }
  fVar4 = *(float *)(*(longlong *)(in_R10 + 0x20) + 0x20);
  fVar1 = *(float *)(*(longlong *)(in_R10 + 0x20) + 0x1c);
  uStack0000000000000038 = 1.0 < fVar1 * fVar1 + fVar4 * fVar4;
  FUN_180557850(*(uint64_t *)(in_R10 + 0x598),unaff_EDI,iVar2,param_4,
                *(int8_t *)(*(longlong *)(in_R10 + 0x590) + 0x34bc));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



