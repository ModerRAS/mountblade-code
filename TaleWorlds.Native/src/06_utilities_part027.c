#include "TaleWorlds.Native.Split.h"

// 06_utilities_part027.c - 103 个函数

// 函数: void FUN_18094136c(undefined8 param_1,longlong param_2)
void FUN_18094136c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_2 + 0x40);
  iVar2 = func_0x0001808fd8d4();
  if ((iVar2 != 0) && (cVar1 == '\0')) {
    LOCK();
    _DAT_180c821d0 = 0;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941383(undefined8 param_1,longlong param_2)
void FUN_180941383(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_1808fc5ac();
  cVar1 = *(char *)(param_2 + 0x38);
  iVar2 = func_0x0001808fd8d4();
  if ((iVar2 != 0) && (cVar1 == '\0')) {
    LOCK();
    _DAT_180c821d0 = 0;
    UNLOCK();
  }
  return;
}





// 函数: void FUN_18094139f(undefined8 *param_1,longlong param_2)
void FUN_18094139f(undefined8 *param_1,longlong param_2)

{
  FUN_1808fc51c(*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_1808fc074,*(undefined4 *)*param_1,param_1);
  return;
}



bool FUN_1809413d5(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}





// 函数: void FUN_1809413ed(undefined8 param_1,longlong param_2)
void FUN_1809413ed(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x70));
  }
  return;
}





// 函数: void FUN_180941419(undefined8 param_1,longlong param_2)
void FUN_180941419(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                  *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



undefined4 FUN_180941445(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    // WARNING: Subroutine does not return
  terminate();
}





// 函数: void FUN_180941486(undefined8 param_1,longlong param_2)
void FUN_180941486(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1808fc914(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x70),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x88));
  }
  return;
}





// 函数: void FUN_1809414b5(undefined8 *param_1)
void FUN_1809414b5(undefined8 *param_1)

{
  func_0x0001808fd024(*(undefined4 *)*param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809414f0(void)
void FUN_1809414f0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  _DAT_180bf52c0 = &UNK_180a3c3e0;
  if (_DAT_180bf52c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180bf52c8 = 0;
  _DAT_180bf52d8 = 0;
  _DAT_180bf52c0 = &UNK_18098bcb0;
  if (_DAT_180bf5288 == 0) {
    FUN_180048980();
    lVar1 = _DAT_180bf5250;
    for (lVar2 = _DAT_180bf5248; lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
      FUN_180046b10(lVar2);
    }
    if (_DAT_180bf5248 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941590(void)
void FUN_180941590(void)

{
  _DAT_180bf5320 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809415b0(void)
void FUN_1809415b0(void)

{
  _DAT_180bf5770 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809415d0(void)
void FUN_1809415d0(void)

{
  _DAT_180bf5208 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809415f0(void)
void FUN_1809415f0(void)

{
  _DAT_180bf5bc0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941610(void)
void FUN_180941610(void)

{
  _DAT_180bf5c30 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941630(void)
void FUN_180941630(void)

{
  _DAT_180bf6080 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180941650(void)
void FUN_180941650(void)

{
  _Mtx_destroy_in_situ();
                    // WARNING: Could not recover jumptable at 0x000180941680. Too many branches
                    // WARNING: Treating indirect jump as call
  _Cnd_destroy_in_situ();
  return;
}





// 函数: void FUN_180941690(void)
void FUN_180941690(void)

{
  _Mtx_destroy_in_situ();
                    // WARNING: Could not recover jumptable at 0x0001809416c0. Too many branches
                    // WARNING: Treating indirect jump as call
  _Cnd_destroy_in_situ();
  return;
}





// 函数: void FUN_1809416d0(void)
void FUN_1809416d0(void)

{
  _Mtx_destroy_in_situ();
                    // WARNING: Could not recover jumptable at 0x000180941700. Too many branches
                    // WARNING: Treating indirect jump as call
  _Cnd_destroy_in_situ();
  return;
}





// 函数: void FUN_180941710(void)
void FUN_180941710(void)

{
  _Mtx_destroy_in_situ();
                    // WARNING: Could not recover jumptable at 0x000180941740. Too many branches
                    // WARNING: Treating indirect jump as call
  _Cnd_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809417a0(void)
void FUN_1809417a0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001809417b8. Too many branches
                    // WARNING: Treating indirect jump as call
  CloseHandle(_DAT_180c91900);
  return;
}





// 函数: void FUN_1809417c0(void)
void FUN_1809417c0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001809417d8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c91910);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809417e0(void)
void FUN_1809417e0(void)

{
  _DAT_180d49160 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941800(void)
void FUN_180941800(void)

{
  _DAT_180bf64d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941820(void)
void FUN_180941820(void)

{
  _DAT_180bf6530 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941840(void)
void FUN_180941840(void)

{
  _DAT_180bf6590 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941860(void)
void FUN_180941860(void)

{
  _DAT_180bf65c0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941880(void)
void FUN_180941880(void)

{
  _DAT_180bf65f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809418a0(void)
void FUN_1809418a0(void)

{
  _DAT_180bf6620 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809418c0(void)
void FUN_1809418c0(void)

{
  _DAT_180bf6650 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809418e0(void)
void FUN_1809418e0(void)

{
  _DAT_180bf6680 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941900(void)
void FUN_180941900(void)

{
  _DAT_180bf66b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180941920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = _DAT_180d49200;
  FUN_18008d1f0(param_1,_DAT_180d49200[1],param_3,param_4,0xfffffffffffffffe);
  _DAT_180d49200[1] = (longlong)plVar1;
  *_DAT_180d49200 = (longlong)plVar1;
  _DAT_180d49200[2] = (longlong)plVar1;
  _DAT_180d49208 = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_DAT_180d49200,0x58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941980(void)
void FUN_180941980(void)

{
  _DAT_180bf52e8 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809419a0(void)
void FUN_1809419a0(void)

{
  _DAT_180bf5738 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_1809419c0(void)
void FUN_1809419c0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001809419d8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c91970);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809419e0(void)
void FUN_1809419e0(void)

{
  _DAT_180d49218 = &UNK_180a3c3e0;
  if (_DAT_180d49220 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d49220 = 0;
  _DAT_180d49230 = 0;
  _DAT_180d49218 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941a30(void)
void FUN_180941a30(void)

{
  _DAT_180d49240 = &UNK_180a3c3e0;
  if (_DAT_180d49248 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d49248 = 0;
  _DAT_180d49258 = 0;
  _DAT_180d49240 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941ad0(void)
void FUN_180941ad0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = _DAT_180d493f8;
  if (_DAT_180d493f8 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)_DAT_180d493f8 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)_DAT_180d493f8 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *_DAT_180d493f8 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          _DAT_180d493f8,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941b20(void)
void FUN_180941b20(void)

{
  _DAT_180d49638 = &UNK_180a3c3e0;
  if (_DAT_180d49640 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d49640 = 0;
  _DAT_180d49650 = 0;
  _DAT_180d49638 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941b90(void)
void FUN_180941b90(void)

{
  _DAT_180bf7250 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bb0(void)
void FUN_180941bb0(void)

{
  _DAT_180bf72b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bd0(void)
void FUN_180941bd0(void)

{
  _DAT_180bf7310 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941bf0(void)
void FUN_180941bf0(void)

{
  if (DAT_180c91d50 != '\0') {
    FUN_18005a050();
    if ((1 < _DAT_180c91d30) && (_DAT_180c91d28 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (_DAT_180c91d18 != (longlong *)0x0) {
      (**(code **)(*_DAT_180c91d18 + 0x38))();
    }
    if (_DAT_180c91cf0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ();
    FUN_180059ee0(0x180c919f0);


// 函数: void FUN_180941d00(void)
void FUN_180941d00(void)

{
  _DAT_180bf90b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941d20(void)
void FUN_180941d20(void)

{
  _DAT_180bf5b88 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941d50(void)
void FUN_180941d50(void)

{
  _DAT_180d48db8 = &UNK_180a3c3e0;
  if (_DAT_180d48dc0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d48dc0 = 0;
  _DAT_180d48dd0 = 0;
  _DAT_180d48db8 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180941da0(void)
void FUN_180941da0(void)

{
                    // WARNING: Could not recover jumptable at 0x000180941db8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180d49680);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941dd0(void)
void FUN_180941dd0(void)

{
  _DAT_180d49730 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941e00(void)
void FUN_180941e00(void)

{
  FUN_180320e20(0x180d497e0);
  if (_DAT_180d49970 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (_DAT_180d49950 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180320b20(0x180d498a0);
  _DAT_180d49830 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941e90(void)
void FUN_180941e90(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (_DAT_180c91f18 != 0) {
    uVar2 = _DAT_180c91f28 - _DAT_180c91f18 & 0xfffffffffffffff8;
    lVar1 = _DAT_180c91f18;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(_DAT_180c91f18 + -8);
      uVar2 = uVar2 + 0x27;
      if (0x1f < (_DAT_180c91f18 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar1,uVar2);
    _DAT_180c91f28 = 0;
    _DAT_180c91f18 = 0;
    uRam0000000180c91f20 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f00(void)
void FUN_180941f00(void)

{
  _DAT_180bf91b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f20(void)
void FUN_180941f20(void)

{
  _DAT_180bf9210 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f40(void)
void FUN_180941f40(void)

{
  _DAT_180bf9270 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f60(void)
void FUN_180941f60(void)

{
  _DAT_180bf92d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941f80(void)
void FUN_180941f80(void)

{
  _DAT_180bf9330 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fa0(void)
void FUN_180941fa0(void)

{
  _DAT_180bf9390 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fc0(void)
void FUN_180941fc0(void)

{
  _DAT_180bf93f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180941fe0(void)
void FUN_180941fe0(void)

{
  _DAT_180bf9450 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942000(void)
void FUN_180942000(void)

{
  _DAT_180bf94b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942020(void)
void FUN_180942020(void)

{
  _DAT_180bf9510 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942040(void)
void FUN_180942040(void)

{
  _DAT_180bf9570 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942060(void)
void FUN_180942060(void)

{
  _DAT_180bf95d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942080(void)
void FUN_180942080(void)

{
  _DAT_180bf9630 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420a0(void)
void FUN_1809420a0(void)

{
  _DAT_180bf9690 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420c0(void)
void FUN_1809420c0(void)

{
  _DAT_180bf96f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809420e0(void)
void FUN_1809420e0(void)

{
  _DAT_180bf9750 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942100(void)
void FUN_180942100(void)

{
  _DAT_180bf97b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942120(void)
void FUN_180942120(void)

{
  _DAT_180bf9810 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942140(void)
void FUN_180942140(void)

{
  _DAT_180bf9870 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942160(void)
void FUN_180942160(void)

{
  _DAT_180bf98d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942180(void)
void FUN_180942180(void)

{
  _DAT_180bf9930 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421a0(void)
void FUN_1809421a0(void)

{
  _DAT_180bf9990 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421c0(void)
void FUN_1809421c0(void)

{
  _DAT_180bf99f0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809421e0(void)
void FUN_1809421e0(void)

{
  _DAT_180bf9a50 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942200(void)
void FUN_180942200(void)

{
  _DAT_180bf9ab0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942220(void)
void FUN_180942220(void)

{
  _DAT_180bf9b10 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942240(void)
void FUN_180942240(void)

{
  _DAT_180bf9b70 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942260(void)
void FUN_180942260(void)

{
  _DAT_180bf9bd0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942280(void)
void FUN_180942280(void)

{
  _DAT_180bf9c30 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422a0(void)
void FUN_1809422a0(void)

{
  _DAT_180bf9c90 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422c0(void)
void FUN_1809422c0(void)

{
  _DAT_180bf9cf0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809422e0(void)
void FUN_1809422e0(void)

{
  _DAT_180bf9d50 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942300(void)
void FUN_180942300(void)

{
  _DAT_180bf9db0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942320(void)
void FUN_180942320(void)

{
  _DAT_180bf9e10 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942340(void)
void FUN_180942340(void)

{
  _DAT_180bf9e70 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942360(void)
void FUN_180942360(void)

{
  _DAT_180bf9ed0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942380(void)
void FUN_180942380(void)

{
  _DAT_180bf9f30 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423a0(void)
void FUN_1809423a0(void)

{
  _DAT_180bf9f90 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423c0(void)
void FUN_1809423c0(void)

{
  _DAT_180bf9ff0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809423e0(void)
void FUN_1809423e0(void)

{
  _DAT_180bfa050 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942400(void)
void FUN_180942400(void)

{
  _DAT_180bfa0b0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942420(void)
void FUN_180942420(void)

{
  _DAT_180bfa110 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942440(void)
void FUN_180942440(void)

{
  _DAT_180bfa170 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942460(void)
void FUN_180942460(void)

{
  _DAT_180bfa1d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942480(void)
void FUN_180942480(void)

{
  _DAT_180bfa230 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809424a0(void)
void FUN_1809424a0(void)

{
  _DAT_180bfa290 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809424c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1809424c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa2f0;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa2e8;
  if (_DAT_180bfa2e8 != _DAT_180bfa2f0) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa2e8 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa310;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa308;
  if (_DAT_180bfa308 != _DAT_180bfa310) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa308 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = _DAT_180bfa330;
  uVar3 = 0xfffffffffffffffe;
  puVar2 = _DAT_180bfa328;
  if (_DAT_180bfa328 != _DAT_180bfa330) {
    do {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
  }
  if (_DAT_180bfa328 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1809425e0(void)
void FUN_1809425e0(void)

{
                    // WARNING: Could not recover jumptable at 0x0001809425f8. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c91f70);
  return;
}





// 函数: void FUN_180942660(void)
void FUN_180942660(void)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180067070(&DAT_180bfc140);
  if (0xf < uRam0000000180bfc138) {
    lVar1 = CONCAT71(uRam0000000180bfc121,uRam0000000180bfc120);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180bfc138 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180bfc138 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180bfc130 = 0;
  uRam0000000180bfc138 = 0xf;
  uRam0000000180bfc120 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942690(void)
void FUN_180942690(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < _DAT_180bfc118) {
    lVar1 = CONCAT71(uRam0000000180bfc101,DAT_180bfc100);
    lVar2 = lVar1;
    if (0xfff < _DAT_180bfc118 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,_DAT_180bfc118 + 0x28);
      }
    }
    free(lVar2);
  }
  _DAT_180bfc110 = 0;
  _DAT_180bfc118 = 0xf;


// 函数: void FUN_180942700(void)
void FUN_180942700(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < uRam0000000180bfc0f0) {
    lVar1 = CONCAT71(uRam0000000180bfc0d9,uRam0000000180bfc0d8);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180bfc0f0 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180bfc0f0 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180bfc0e8 = 0;
  uRam0000000180bfc0f0 = 0xf;
  uRam0000000180bfc0d8 = 0;
  return;
}





// 函数: void FUN_180942720(void)
void FUN_180942720(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < uRam0000000180d499c0) {
    lVar1 = CONCAT71(uRam0000000180d499a9,uRam0000000180d499a8);
    lVar2 = lVar1;
    if (0xfff < uRam0000000180d499c0 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uRam0000000180d499c0 + 0x28);
      }
    }
    free(lVar2);
  }
  uRam0000000180d499b8 = 0;
  uRam0000000180d499c0 = 0xf;
  uRam0000000180d499a8 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



