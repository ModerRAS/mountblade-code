#include "TaleWorlds.Native.Split.h"

// 06_utilities_part028.c - 49 个函数

// 函数: void FUN_180942750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_18005d260(&DAT_180bfaec0,_DAT_180bfaed0,param_3,param_4,0xfffffffffffffffe);
  puVar1 = _DAT_180bfaea8;
  for (puVar2 = _DAT_180bfaea0; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (_DAT_180bfaea0 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942790(void)
void FUN_180942790(void)

{
  _DAT_180c92050 = &UNK_18098bcb0;
                    // WARNING: Could not recover jumptable at 0x0001809427c7. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809427d0(void)
void FUN_1809427d0(void)

{
  _DAT_180bfaef0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809427f0(void)
void FUN_1809427f0(void)

{
  _DAT_180bfb310 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942810(void)
void FUN_180942810(void)

{
  _DAT_180bfb730 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942830(void)
void FUN_180942830(void)

{
  _DAT_180d499d0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942850(void)
void FUN_180942850(void)

{
  _DAT_180d49bf0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942890(void)
void FUN_180942890(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = _DAT_180c92478;
  if (_DAT_180c92478 != (longlong *)0x0) {
    LOCK();
    plVar1 = _DAT_180c92478 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_1809428a2(void)
void FUN_1809428a2(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((longlong)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}





// 函数: void FUN_1809428d8(void)
void FUN_1809428d8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809428e0(void)
void FUN_1809428e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = _DAT_180c92498;
  if (_DAT_180c92498 != (longlong *)0x0) {
    LOCK();
    plVar1 = _DAT_180c92498 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_1809428f2(void)
void FUN_1809428f2(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((longlong)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}





// 函数: void FUN_180942928(void)
void FUN_180942928(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942930(void)
void FUN_180942930(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = _DAT_180c92488;
  if (_DAT_180c92488 != (longlong *)0x0) {
    LOCK();
    plVar1 = _DAT_180c92488 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_180942942(void)
void FUN_180942942(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*unaff_RBX)();
    LOCK();
    piVar2 = (int *)((longlong)unaff_RBX + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*unaff_RBX + 8))();
    }
  }
  return;
}





// 函数: void FUN_180942978(void)
void FUN_180942978(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942980(void)
void FUN_180942980(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < _DAT_180bfc188) {
    lVar1 = CONCAT71(uRam0000000180bfc171,DAT_180bfc170);
    lVar2 = lVar1;
    if (0xfff < _DAT_180bfc188 + 1) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,_DAT_180bfc188 + 0x28);
      }
    }
    free(lVar2);
  }
  _DAT_180bfc180 = 0;
  _DAT_180bfc188 = 0xf;


// 函数: void FUN_1809429f0(void)
void FUN_1809429f0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_R9;
  
  if (lRam0000000180d49d68 != 0) {
    uVar1 = (lRam0000000180d49d78 - lRam0000000180d49d68 >> 3) * 8;
    lVar2 = lRam0000000180d49d68;
    if (0xfff < uVar1) {
      lVar2 = *(longlong *)(lRam0000000180d49d68 + -8);
      if (0x1f < (lRam0000000180d49d68 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lRam0000000180d49d68 - lVar2,uVar1 + 0x27,lVar2,in_R9,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    lRam0000000180d49d68 = 0;
    uRam0000000180d49d70 = 0;
    lRam0000000180d49d78 = 0;
  }
  FUN_1803f33b0(&uRam0000000180d49d58);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(uRam0000000180d49d58,0x40);
  return;
}





// 函数: void FUN_180942a20(void)
void FUN_180942a20(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (lRam0000000180d49d90 != 0) {
    FUN_180477be0(lRam0000000180d49d90,uRam0000000180d49d98);
    uVar2 = lRam0000000180d49da0 - lRam0000000180d49d90 & 0xfffffffffffffff0;
    lVar1 = lRam0000000180d49d90;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(lRam0000000180d49d90 + -8);
      if (0x1f < (lRam0000000180d49d90 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lRam0000000180d49d90 - lVar1,uVar2 + 0x27);
      }
    }
    free(lVar1);
    lRam0000000180d49d90 = 0;
    uRam0000000180d49d98 = 0;
    lRam0000000180d49da0 = 0;
  }
  return;
}





// 函数: void FUN_180942a40(void)
void FUN_180942a40(void)

{
                    // WARNING: Could not recover jumptable at 0x000180942a58. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180d49db0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942a60(void)
void FUN_180942a60(void)

{
  _DAT_180bf6048 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942a80(void)
void FUN_180942a80(void)

{
  _DAT_180bf6498 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180942aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = _DAT_180d49e18;
  if (_DAT_180d49e18 != (undefined8 *)0x0) {
    FUN_1804a9b80(param_1,*_DAT_180d49e18,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_180942b30(void)
void FUN_180942b30(void)

{
  if (DAT_180c95ef0 != '\0') {
    FUN_1804a6ec0();


// 函数: void FUN_180942b80(void)
void FUN_180942b80(void)

{
  if (DAT_180c96008 != '\0') {
    FUN_180552e70(_DAT_180c95ff0);
    _DAT_180c95ff0 = 0;


// 函数: void FUN_180942bb0(void)
void FUN_180942bb0(void)

{
  if (DAT_180c96028 != '\0') {
    if (_DAT_180c96010 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _DAT_180c96010 = 0;


// 函数: void FUN_180942bf0(void)
void FUN_180942bf0(void)

{
  if (DAT_180c96048 != '\0') {
    FUN_180555430(_DAT_180c96030);
    _DAT_180c96030 = 0;


// 函数: void FUN_180942c20(void)
void FUN_180942c20(void)

{
  if (DAT_180c96068 != '\0') {
    FUN_180555430(_DAT_180c96050);
    _DAT_180c96050 = 0;


// 函数: void FUN_180942c50(void)
void FUN_180942c50(void)

{
  if (DAT_180c96098 != '\0') {
    FUN_180057830();
    if (_DAT_180c96070 != (longlong *)0x0) {
      (**(code **)(*_DAT_180c96070 + 0x38))();
    }


// 函数: void FUN_180942cb0(void)
void FUN_180942cb0(void)

{
  if (DAT_180c960b8 != '\0') {
    FUN_18055a350(_DAT_180c960a0);
    _DAT_180c960a0 = 0;


// 函数: void FUN_180942ce0(void)
void FUN_180942ce0(void)

{
  if (DAT_180c96100 != '\0') {
    FUN_1804a5b60();
    FUN_1804a5b00(&DAT_180c960c0);


// 函数: void FUN_180942d30(void)
void FUN_180942d30(void)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c96138;
  if (DAT_180c96140 != '\0') {
    if (_DAT_180c96120 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    _DAT_180c96120 = 0;
    if (_DAT_180c96138 != 0) {
      FUN_1808fc8a8(_DAT_180c96138 + 0x360,0xcc8,8,FUN_1804aa030,0xfffffffffffffffe);
      _Mtx_destroy_in_situ();
      _Cnd_destroy_in_situ();
      FUN_1804a9f00(lVar1 + 0x60);
      FUN_1804a9e30();
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    _DAT_180c96138 = 0;


// 函数: void FUN_180942e20(void)
void FUN_180942e20(void)

{
  if (DAT_180c961d8 != '\0') {
    FUN_1804c3730(&DAT_180c961b0);
    FUN_1804c42a0(&DAT_180c961b0);


// 函数: void FUN_180942e70(void)
void FUN_180942e70(void)

{
  longlong *plVar1;
  
  plVar1 = _DAT_180c95f18;
  if (DAT_180c95f28 != '\0') {
    _DAT_180c95f20 = 0xffffffff;
    _DAT_180c95f18 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (_DAT_180c95f18 != (longlong *)0x0) {
      (**(code **)(*_DAT_180c95f18 + 0x38))();
    }
    if (_DAT_180c95ef8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }


// 函数: void FUN_180942f00(void)
void FUN_180942f00(void)

{
  if (DAT_180c95fe8 != '\0') {
    if (_DAT_180c95fc8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }


// 函数: void FUN_180942f50(void)
void FUN_180942f50(void)

{
  if (DAT_180c96210 != '\0') {
    FUN_1804a5bc0();


// 函数: void FUN_180942fa0(void)
void FUN_180942fa0(void)

{
  _DAT_180bf64f8 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180942fc0(void)
void FUN_180942fc0(void)

{
  _DAT_180bf6558 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180943020(void)
void FUN_180943020(void)

{
                    // WARNING: Could not recover jumptable at 0x000180943038. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180d49e70);
  return;
}





// 函数: void FUN_180943040(void)
void FUN_180943040(void)

{
                    // WARNING: Could not recover jumptable at 0x000180943058. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180d49f10);
  return;
}





// 函数: void FUN_180943070(void)
void FUN_180943070(void)

{
                    // WARNING: Could not recover jumptable at 0x000180943088. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c96690);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180943090(void)
void FUN_180943090(void)

{
  _DAT_180d49f80 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809430b0(void)
void FUN_1809430b0(void)

{
  _DAT_180d49fe0 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809430e0(void)
void FUN_1809430e0(void)

{
  _DAT_180d4a068 = &UNK_180a3c3e0;
  if (_DAT_180d4a070 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _DAT_180d4a070 = 0;
  _DAT_180d4a080 = 0;
  _DAT_180d4a068 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180943140(void)
void FUN_180943140(void)

{
                    // WARNING: Could not recover jumptable at 0x000180943158. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c966f0);
  return;
}





// 函数: void FUN_180943160(void)
void FUN_180943160(void)

{
                    // WARNING: Could not recover jumptable at 0x000180943178. Too many branches
                    // WARNING: Treating indirect jump as call
  _Mtx_destroy_in_situ(0x180c96740);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180943180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180943180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = _DAT_180c967a0;
  if (_DAT_180c967a0 != (undefined8 *)0x0) {
    FUN_180651560(&DAT_180c96790,*_DAT_180c967a0,param_3,param_4,0xfffffffffffffffe);
    FUN_18063cfe0(puVar1 + 5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1809431a0(void)
void FUN_1809431a0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  *(undefined8 *)(lVar1 + 0x18) = &UNK_180a3c3e0;
  if (*(longlong *)(lVar1 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x18) = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180943200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180943200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = _DAT_180c967f0;
  if (_DAT_180c967f0 == (undefined8 *)0x0) {
    return;
  }
  FUN_180657620(&DAT_180c967e0,*_DAT_180c967f0,param_3,param_4,0xfffffffffffffffe);
  puVar1[4] = &UNK_180a3c3e0;
  if (puVar1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}




