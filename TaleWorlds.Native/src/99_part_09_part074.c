#include "TaleWorlds.Native.Split.h"

// 99_part_09_part074.c - 11 个函数

// 函数: void FUN_1805ed670(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
void FUN_1805ed670(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar4 = _Mtx_lock(0x180c95528);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  FUN_1800623b0(_DAT_180c86928,0,4,10,&UNK_180a373b8,param_2);
  FUN_1800623b0(_DAT_180c86928,0,4,10,&UNK_180a37388,param_3);
  FUN_1800623b0(_DAT_180c86928,0,4,10,&UNK_180a373f0,param_4);
  cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
  if (((((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,0x12,&UNK_1809fa540), cVar3 != '\0'))
       && (cVar3 = FUN_180645c10(0x180c95578,param_2,&UNK_1809fa560), cVar3 != '\0')) &&
      ((cVar3 = FUN_180645c10(0x180c95578,param_3,&UNK_1809fa510), cVar3 != '\0' &&
       (cVar3 = FUN_180645c10(0x180c95578,param_4,&UNK_1809fa510), cVar3 != '\0')))) &&
     (cVar3 = FUN_180645c10(0x180c95578,param_5,&DAT_180bfbc90), cVar3 != '\0')) {
    uVar5 = FUN_18055f6f0(&UNK_1809fa450,param_6);
    uVar6 = _DAT_180c95b3c >> 0x1f & 0x1f;
    iVar4 = _DAT_180c95b3c + uVar6;
    puVar1 = (ulonglong *)(_DAT_180c95b10 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar4 & 0x1f) - (char)uVar6 & 0x3f);
    _DAT_180c95b40 = _DAT_180c95b40 + 8;
    _DAT_180c95b3c = (ulonglong)_DAT_180c95b40 << 0x20;
  }
  lVar8 = 0;
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  lVar7 = _DAT_180c92cd8;
  if (0 < iVar4) {
    do {
      lVar2 = *(longlong *)(lVar7 + lVar8 * 8);
      if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
        FUN_1805b59d0(lVar2,0x180c95578);
        lVar7 = _DAT_180c92cd8;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580,0x180c95578);
  }
  _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ed8d0(longlong *param_1)
void FUN_1805ed8d0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x560) < 0) {
    lVar7 = *(longlong *)(lVar7 + 0x8e8);
  }
  else {
    lVar7 = *(longlong *)
             ((longlong)*(int *)(lVar7 + 0x560) * 0xa60 + 0x3988 + *(longlong *)(lVar7 + 0x8d8));
  }
  iVar4 = _Mtx_lock(0x180c95528);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar1 = *(undefined4 *)(*param_1 + 0x10);
  cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
  if (cVar3 != '\0') {
    cVar3 = FUN_180645c10(0x180c95578,3,&UNK_1809fa540);
    if (cVar3 != '\0') {
      FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa510);
    }
  }
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  if (0 < iVar4) {
    lVar6 = 0;
    lVar5 = _DAT_180c92cd8;
    do {
      lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
      if (((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) &&
         (*(longlong *)(lVar2 + 0x58f8) != lVar7)) {
        FUN_1805b59d0(lVar2,0x180c95578);
        lVar5 = _DAT_180c92cd8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580,0x180c95578);
  }
  _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ed8d7(longlong *param_1,undefined8 param_2,longlong param_3)
void FUN_1805ed8d7(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_3 + 0x560) < 0) {
    lVar7 = *(longlong *)(param_3 + 0x8e8);
  }
  else {
    lVar7 = *(longlong *)
             ((longlong)*(int *)(param_3 + 0x560) * 0xa60 + 0x3988 + *(longlong *)(param_3 + 0x8d8))
    ;
  }
  iVar4 = _Mtx_lock(0x180c95528);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar1 = *(undefined4 *)(*param_1 + 0x10);
  cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
  if (cVar3 != '\0') {
    cVar3 = FUN_180645c10(0x180c95578,3,&UNK_1809fa540);
    if (cVar3 != '\0') {
      FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa510);
    }
  }
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  if (0 < iVar4) {
    lVar6 = 0;
    lVar5 = _DAT_180c92cd8;
    do {
      lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
      if (((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) &&
         (*(longlong *)(lVar2 + 0x58f8) != lVar7)) {
        FUN_1805b59d0(lVar2,0x180c95578);
        lVar5 = _DAT_180c92cd8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580,0x180c95578);
  }
  _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ed9f3(void)
void FUN_1805ed9f3(void)

{
  FUN_180567f30(_DAT_180c92580,0x180c95578);
  _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805eda50(longlong *param_1,longlong param_2,undefined4 param_3)
void FUN_1805eda50(longlong *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = param_1[3];
  *(undefined4 *)(param_1 + 3) = param_3;
  if (((_DAT_180c96070 != 0) && (-1 < (int)lVar4)) &&
     (lVar4 = (longlong)(int)lVar4 * 0xa60,
     *(longlong **)(lVar4 + 0x3988 + _DAT_180c96070) == param_1)) {
    FUN_180520b40(_DAT_180c96070 + 0x30a0 + lVar4,0);
  }
  if (((param_2 != 0) && (-1 < (int)param_1[3])) &&
     (lVar4 = (longlong)(int)param_1[3] * 0xa60, *(longlong **)(lVar4 + 0x3988 + param_2) != param_1
     )) {
    FUN_180520b40(lVar4 + 0x30a0 + param_2,param_1);
  }
  lVar4 = *param_1;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  uVar5 = _DAT_180bf65b8 - 1 & 0x3ff;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *(uint *)(param_1 + 1) = uVar5;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x31) == '\0') {
      iVar2 = _Mtx_lock(lVar4 + 0x5990);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      uVar3 = FUN_1805fa9a0(lVar4 + 0x50,0x28);
      uVar5 = *(uint *)(param_1 + 1);
    }
    else {
      uVar3 = 0;
    }
    cVar1 = FUN_180645c10(uVar3,0,&UNK_1809fa560);
    if ((cVar1 != '\0') && (cVar1 = FUN_180645c10(uVar3,0x16,&UNK_1809fa540), cVar1 != '\0')) {
      FUN_180645c10(uVar3,uVar5,&UNK_1809fa550);
    }
    if (*(char *)(lVar4 + 0x31) == '\0') {
      FUN_1805faa20(lVar4 + 0x50);
      iVar2 = _Mtx_unlock(lVar4 + 0x5990);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
    }
  }
  return;
}






// 函数: void FUN_1805edb16(void)
void FUN_1805edb16(void)

{
  char cVar1;
  int iVar2;
  longlong unaff_RBX;
  undefined8 uVar3;
  longlong unaff_RDI;
  undefined4 unaff_R14D;
  bool in_ZF;
  
  if (in_ZF) {
    iVar2 = _Mtx_lock(unaff_RDI + 0x5990);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar3 = FUN_1805fa9a0(unaff_RDI + 0x50,0x28);
    unaff_R14D = *(undefined4 *)(unaff_RBX + 8);
  }
  else {
    uVar3 = 0;
  }
  cVar1 = FUN_180645c10(uVar3,0,&UNK_1809fa560);
  if ((cVar1 != '\0') && (cVar1 = FUN_180645c10(uVar3,0x16,&UNK_1809fa540), cVar1 != '\0')) {
    FUN_180645c10(uVar3,unaff_R14D,&UNK_1809fa550);
  }
  if (*(char *)(unaff_RDI + 0x31) == '\0') {
    FUN_1805faa20(unaff_RDI + 0x50);
    iVar2 = _Mtx_unlock(unaff_RDI + 0x5990);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  return;
}






// 函数: void FUN_1805edbad(void)
void FUN_1805edbad(void)

{
  int iVar1;
  longlong unaff_RDI;
  
  FUN_1805faa20();
  iVar1 = _Mtx_unlock(unaff_RDI + 0x5990);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}






// 函数: void FUN_1805edbd3(void)
void FUN_1805edbd3(void)

{
  return;
}



undefined8 *
FUN_1805edbf0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a378a0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1805edc40(undefined8 *param_1)
void FUN_1805edc40(undefined8 *param_1)

{
  *param_1 = &UNK_180a378a0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 *
FUN_1805edc80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  *param_1 = &UNK_180a19ac8;
  *param_1 = &UNK_180a37930;
  lVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  FUN_18034c080(param_1 + 10);
  FUN_18034c080(param_1 + 0x114);
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  plVar3 = param_1 + 0x224;
  pcVar4 = FUN_180045af0;
  FUN_1808fc838(plVar3,8,3,&SUB_18005d5f0,FUN_180045af0);
  *(undefined4 *)(param_1 + 0x229) = 0x41c64e6d;
  *(undefined4 *)(param_1 + 0x229) = 0x897ee768;
  *(undefined4 *)(param_1 + 5) = 0xbfc4bf74;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3dcccccd;
  param_1[0x221] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x222) = 0xffffffff;
  do {
    plVar1 = (longlong *)*plVar3;
    *plVar3 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar5 = (undefined4)((ulonglong)pcVar4 >> 0x20);
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x1138) = 0;
    lVar2 = lVar2 + 1;
    plVar3 = plVar3 + 1;
  } while (lVar2 < 3);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 9) = 0;
  plVar3 = (longlong *)param_1[0x21e];
  param_1[0x21e] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x21f];
  param_1[0x21f] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x228] = 0;
  *(undefined4 *)(param_1 + 0x223) = 0xffffffff;
  FUN_1805eebb0(param_1,param_2,param_3,param_4,CONCAT44(uVar5,param_5),param_6,param_7,param_8,
                param_9);
  return param_1;
}



undefined8 FUN_1805ede90(undefined8 param_1,ulonglong param_2)

{
  FUN_1805eded0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1150);
  }
  return param_1;
}






// 函数: void FUN_1805eded0(undefined8 *param_1)
void FUN_1805eded0(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_1 = &UNK_180a37930;
  lVar2 = param_1[0x21f];
  uVar3 = 0;
  if ((lVar2 != 0) &&
     (uVar4 = uVar3, uVar6 = uVar3,
     *(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0)) {
    do {
      puVar1 = (uint *)(*(longlong *)(uVar4 + *(longlong *)(param_1[0x21f] + 0x38)) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x10;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)
             (*(longlong *)(param_1[0x21f] + 0x40) - *(longlong *)(param_1[0x21f] + 0x38) >> 4));
  }
  lVar2 = param_1[0x21e];
  if ((lVar2 != 0) &&
     (uVar4 = uVar3, *(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0)) {
    do {
      puVar1 = (uint *)(*(longlong *)(uVar4 + *(longlong *)(param_1[0x21e] + 0x38)) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar4 = uVar4 + 0x10;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)
             (*(longlong *)(param_1[0x21e] + 0x40) - *(longlong *)(param_1[0x21e] + 0x38) >> 4));
  }
  FUN_1808fc8a8(param_1 + 0x224,8,3,FUN_180045af0,0xfffffffffffffffe);
  if ((longlong *)param_1[0x220] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x220] + 0x38))();
  }
  if ((longlong *)param_1[0x21f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21f] + 0x38))();
  }
  if ((longlong *)param_1[0x21e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21e] + 0x38))();
  }
  if ((longlong *)param_1[0x11b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11b] + 0x38))();
  }
  if ((longlong *)param_1[0x118] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x118] + 0x38))();
  }
  FUN_18034db80(param_1 + 0x114);
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x38))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  FUN_18034db80(param_1 + 10);
  if (param_1[1] == 0) {
    *param_1 = &UNK_180a19ac8;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ee0b0(longlong param_1,float param_2,longlong param_3)
void FUN_1805ee0b0(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  longlong *plStackX_8;
  
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0x1108);
  uVar7 = uVar4;
  uVar9 = uVar4;
  do {
    iVar11 = *piVar3;
    iVar10 = (int)uVar9;
    if (iVar11 != -1) {
      uVar12 = *(undefined1 *)((longlong)iVar10 + 0x1114 + param_1);
      if (-1 < iVar11) {
        if (*(int *)(param_1 + 0x1118) != iVar11) {
          puVar5 = (undefined8 *)
                   FUN_1800b3590(uVar7,&plStackX_8,
                                 *(longlong *)
                                  (*(longlong *)(_DAT_180c8a9f0 + 0x30) + (longlong)iVar11 * 8) +
                                 0x20,0,0xfffffffffffffffe);
          uVar2 = *puVar5;
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          FUN_180208400(param_1 + 0x50,uVar2,uVar12);
        }
        goto LAB_1805ee19e;
      }
      break;
    }
    uVar9 = (ulonglong)(iVar10 + 1);
    uVar7 = uVar7 + 1;
    piVar3 = piVar3 + 1;
    iVar11 = -1;
    iVar10 = -1;
  } while ((longlong)uVar7 < 3);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    plStackX_8 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    plStackX_8 = *(longlong **)(param_1 + 0x70);
    *(longlong **)(param_1 + 0x70) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x898);
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x90);
  }
  plStackX_8 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
LAB_1805ee19e:
  *(int *)(param_1 + 0x1118) = iVar11;
  if (((param_3 != 0) &&
      (fVar13 = param_2 + *(float *)(param_1 + 0x28), *(float *)(param_1 + 0x28) = fVar13,
      *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x34) + 5.0 <
      fVar13)) &&
     ((iVar11 < 0 ||
      ((*(byte *)(*(longlong *)(*(longlong *)(_DAT_180c8a9f0 + 0x30) + (longlong)iVar11 * 8) + 0x40)
       & 1) != 0)))) {
    uVar6 = *(uint *)(param_1 + 0x1148) << 0xd ^ *(uint *)(param_1 + 0x1148);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(param_1 + 0x1148) = uVar6;
    fVar13 = (float)(uVar6 - 1) * 1.5366822e-11 + 0.05;
    *(float *)(param_1 + 0x2c) = fVar13;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0x34) = fVar13 + fVar13;
    uVar6 = *(uint *)(param_1 + 0x1148) << 0xd ^ *(uint *)(param_1 + 0x1148);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(param_1 + 0x1148) = uVar6;
    *(float *)(param_1 + 0x28) = (float)(uVar6 - 1) * -1.7462298e-10;
  }
  FUN_180208610(param_1 + 0x50,param_2);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    fVar13 = (float)*(int *)(plVar1[0x18] + -0x28) * 0.033333335;
    if ((fVar13 < *(float *)(param_1 + 0x898) || fVar13 == *(float *)(param_1 + 0x898)) &&
       (*(char *)(param_1 + 0x90) == '\0')) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      plStackX_8 = *(longlong **)(param_1 + 0x70);
      *(longlong **)(param_1 + 0x70) = plVar1;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x898);
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x90);
      plStackX_8 = *(longlong **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined2 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      if (iVar10 != -1) {
        *(undefined4 *)(param_1 + 0x1108 + (longlong)iVar10 * 4) = 0xffffffff;
      }
    }
  }
  uVar12 = 0;
  puVar8 = (ulonglong *)(param_1 + 0x1120);
  uVar7 = uVar4;
  uVar9 = uVar4;
  do {
    if (uVar9 != 0) goto LAB_1805ee4ae;
    if (*puVar8 != 0) {
      uVar12 = *(undefined1 *)(uVar4 + 0x1138 + param_1);
      uVar9 = *puVar8;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    uVar4 = uVar4 + 1;
    puVar8 = puVar8 + 1;
  } while ((int)uVar6 < 3);
  if (uVar9 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x8d8);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      plStackX_8 = *(longlong **)(param_1 + 0x8c0);
      *(longlong **)(param_1 + 0x8c0) = plVar1;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x10e8);
      *(undefined4 *)(param_1 + 0x8cc) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x8d0) = *(undefined1 *)(param_1 + 0x8e0);
    }
    plStackX_8 = *(longlong **)(param_1 + 0x8d8);
    *(undefined8 *)(param_1 + 0x8d8) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(undefined2 *)(param_1 + 0x8e0) = 0;
    *(undefined4 *)(param_1 + 0x10e8) = 0;
    *(undefined8 *)(param_1 + 0x1140) = 0;
  }
  else {
LAB_1805ee4ae:
    if (*(ulonglong *)(param_1 + 0x1140) != uVar9) {
      FUN_180208400(param_1 + 0x8a0,uVar9,uVar12);
      *(ulonglong *)(param_1 + 0x1140) = uVar9;
    }
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    fVar13 = param_2 + *(float *)(param_1 + 0x10e8);
    *(float *)(param_1 + 0x10e8) = fVar13;
    fVar14 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0xc0) + -0x28) *
             0.033333335;
    if (fVar14 < fVar13) {
      if (*(char *)(param_1 + 0x8e0) == '\0') {
        *(float *)(param_1 + 0x10e8) = fVar14;
      }
      else {
        fVar13 = fVar13 - fVar14;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        *(float *)(param_1 + 0x10e8) = fVar13;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    fVar13 = param_2 + *(float *)(param_1 + 0x8c8);
    *(float *)(param_1 + 0x8c8) = fVar13;
    fVar14 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x8c0) + 0xc0) + -0x28) *
             0.033333335;
    if (fVar14 < fVar13) {
      if (*(char *)(param_1 + 0x8d0) == '\0') {
        *(float *)(param_1 + 0x8c8) = fVar14;
      }
      else {
        fVar13 = fVar13 - fVar14;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        *(float *)(param_1 + 0x8c8) = fVar13;
      }
    }
    fVar13 = *(float *)(param_1 + 0x8cc) - param_2 * 5.0;
    *(float *)(param_1 + 0x8cc) = fVar13;
    if (fVar13 <= 0.0) {
      plStackX_8 = *(longlong **)(param_1 + 0x8c0);
      *(undefined8 *)(param_1 + 0x8c0) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x8cc) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




