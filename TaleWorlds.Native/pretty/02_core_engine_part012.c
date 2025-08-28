#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part012.c - 22 个函数

// 函数: void FUN_1800497d0(void)
void FUN_1800497d0(void)

{
  _Mtx_destroy_in_situ();
  return;
}





// 函数: void FUN_1800497f0(undefined8 param_1)
void FUN_1800497f0(undefined8 param_1)

{
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1);
  return;
}



undefined8 *
FUN_180049830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &UNK_1809fcb90;
  _Cnd_init_in_situ(param_1 + 4);
  _Mtx_init_in_situ(param_1 + 0xd,2,param_3,param_4,uVar1);
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



undefined8 *
FUN_1800498d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x98,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049910(longlong param_1,undefined8 param_2,int param_3)
void FUN_180049910(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x80) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049931(void)
void FUN_180049931(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049956(undefined1 *param_1)
void FUN_180049956(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



undefined8 * FUN_180049970(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc28;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800499c0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1800499c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}



undefined8 *
FUN_180049b30(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc28;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x80,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



undefined8 *
FUN_180049bb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049bf0(longlong param_1,longlong param_2)
void FUN_180049bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x40) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180049c27. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x40);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x40,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180049c70(longlong param_1,undefined8 param_2,int param_3)
void FUN_180049c70(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x40) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049c8f(void)
void FUN_180049c8f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049cb4(undefined1 *param_1)
void FUN_180049cb4(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



undefined8 * FUN_180049cd0(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc58;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180049d20(longlong param_1,longlong param_2,longlong param_3)
void FUN_180049d20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_a0,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_a8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d8);
}



undefined8 *
FUN_180049eb0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc58;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x40,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049f30(undefined8 *param_1)
void FUN_180049f30(undefined8 *param_1)

{
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180049fd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180049fd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_180049fd0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[8] = &UNK_180a3c3e0;
  if (param_2[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[8] = &UNK_18098bcb0;
  param_2[4] = &UNK_180a3c3e0;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180050b00(void)
void FUN_180050b00(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  longlong **pplStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong lStackX_20;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong ***ppplStack_70;
  undefined8 uStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  ulonglong uVar12;
  
  lVar8 = _DAT_180c868d0;
  lVar6 = _DAT_180c86870;
  if (DAT_180c82860 != '\0') {
    FUN_180050b30();
    return;
  }
  uStack_68 = 0xfffffffffffffffe;
  *(undefined8 *)(_DAT_180c868d0 + 0x2038) = *(undefined8 *)(_DAT_180c868d0 + 0x2030);
  puVar10 = (undefined2 *)(lVar8 + 0x14);
  lVar8 = 0x100;
  uVar12 = 0;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 0xc;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18004be90(_DAT_180c8a990 + 0x48);
  _DAT_180c8ed28 = 0;
  _DAT_180bf3ffc = 0;
  if (DAT_180c82851 != '\0') {
    plVar1 = *(longlong **)(lVar6 + 8);
    pplVar9 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
    *pplVar9 = (longlong *)&UNK_180a21690;
    *pplVar9 = (longlong *)&UNK_180a21720;
    *(undefined4 *)(pplVar9 + 1) = 0;
    *pplVar9 = (longlong *)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(pplVar9 + 2) = 0;
    UNLOCK();
    pplVar9[3] = (longlong *)0xffffffffffffffff;
    *pplVar9 = (longlong *)&UNK_180a08c60;
    *(undefined4 *)(pplVar9 + 5) = 4;
    pplVar9[4] = plVar1;
    ppplStack_70 = (longlong ***)pplVar9;
    pplStack_60 = pplVar9;
    (*(code *)(*pplVar9)[5])(pplVar9);
    puVar2 = (undefined8 *)plVar1[0x28];
    pcVar3 = *(code **)*puVar2;
    ppplStack_70 = &pplStackX_8;
    pplStackX_8 = pplVar9;
    (*(code *)(*pplVar9)[5])(pplVar9);
    (*pcVar3)(puVar2,&pplStackX_8);
    FUN_18020f150(plVar1[0x28]);
    (*(code *)(*pplVar9)[7])(pplVar9);
  }
  lVar8 = *(longlong *)(_DAT_180c86950 + 0x18) - *(longlong *)(_DAT_180c86950 + 0x10);
  uVar13 = uVar12;
  if (lVar8 / 0x1c != 0) {
    do {
      FUN_1801edeb0(lVar8,uVar13 * 0x1c + *(longlong *)(_DAT_180c86950 + 0x10));
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      lVar8 = *(longlong *)(_DAT_180c86950 + 0x18) - *(longlong *)(_DAT_180c86950 + 0x10);
      uVar13 = (longlong)(int)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(lVar8 / 0x1c));
  }
  *(undefined8 *)(_DAT_180c86950 + 0x18) = *(undefined8 *)(_DAT_180c86950 + 0x10);
  *(undefined1 *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(lVar6 + 0x3c8) != '\0') {
    FUN_18004e5f0(lVar6);
    LOCK();
    *(undefined1 *)(lVar6 + 0x3c8) = 0;
    UNLOCK();
  }
  lVar8 = _DAT_180c8a9d8;
  *(undefined8 *)(_DAT_180c8a9d8 + 4) = 0;
  *(undefined8 *)(lVar8 + 0xc) = 0;
  *(undefined8 *)(lVar8 + 0x14) = 0;
  FUN_1800572d0(lVar8 + 0x20);
  FUN_1800572d0(lVar8 + 0x50);
  LOCK();
  *(undefined4 *)(lVar8 + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar8 + 0x88) = 0;
  UNLOCK();
  lVar8 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar8 = lStackX_20;
  }
  *(double *)(lVar6 + 0x68) = (double)(lVar8 - _DAT_180c8ed48) * _DAT_180c8ed50;
  if (DAT_180c82863 != '\0') {
    uStack_58 = 0x180c91288;
    iVar7 = _Mtx_lock(0x180c91288);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }


// 函数: void FUN_180050b30(longlong param_1)
void FUN_180050b30(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong **pplVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  longlong **pplStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong lStackX_20;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong ***ppplStack_70;
  undefined8 uStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  ulonglong uVar11;
  
  lVar7 = _DAT_180c868d0;
  uStack_68 = 0xfffffffffffffffe;
  *(undefined8 *)(_DAT_180c868d0 + 0x2038) = *(undefined8 *)(_DAT_180c868d0 + 0x2030);
  puVar9 = (undefined2 *)(lVar7 + 0x14);
  lVar7 = 0x100;
  uVar11 = 0;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 0xc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_18004be90(_DAT_180c8a990 + 0x48);
  _DAT_180c8ed28 = 0;
  _DAT_180bf3ffc = 0;
  if (DAT_180c82851 != '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    pplVar8 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
    *pplVar8 = (longlong *)&UNK_180a21690;
    *pplVar8 = (longlong *)&UNK_180a21720;
    *(undefined4 *)(pplVar8 + 1) = 0;
    *pplVar8 = (longlong *)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(pplVar8 + 2) = 0;
    UNLOCK();
    pplVar8[3] = (longlong *)0xffffffffffffffff;
    *pplVar8 = (longlong *)&UNK_180a08c60;
    *(undefined4 *)(pplVar8 + 5) = 4;
    pplVar8[4] = plVar1;
    ppplStack_70 = (longlong ***)pplVar8;
    pplStack_60 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    puVar2 = (undefined8 *)plVar1[0x28];
    pcVar3 = *(code **)*puVar2;
    ppplStack_70 = &pplStackX_8;
    pplStackX_8 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    (*pcVar3)(puVar2,&pplStackX_8);
    FUN_18020f150(plVar1[0x28]);
    (*(code *)(*pplVar8)[7])(pplVar8);
  }
  lVar7 = *(longlong *)(_DAT_180c86950 + 0x18) - *(longlong *)(_DAT_180c86950 + 0x10);
  uVar12 = uVar11;
  if (lVar7 / 0x1c != 0) {
    do {
      FUN_1801edeb0(lVar7,uVar12 * 0x1c + *(longlong *)(_DAT_180c86950 + 0x10));
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      lVar7 = *(longlong *)(_DAT_180c86950 + 0x18) - *(longlong *)(_DAT_180c86950 + 0x10);
      uVar12 = (longlong)(int)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(lVar7 / 0x1c));
  }
  *(undefined8 *)(_DAT_180c86950 + 0x18) = *(undefined8 *)(_DAT_180c86950 + 0x10);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x140) + 0x208) = 1;
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    FUN_18004e5f0(param_1);
    LOCK();
    *(undefined1 *)(param_1 + 0x3c8) = 0;
    UNLOCK();
  }
  lVar7 = _DAT_180c8a9d8;
  *(undefined8 *)(_DAT_180c8a9d8 + 4) = 0;
  *(undefined8 *)(lVar7 + 0xc) = 0;
  *(undefined8 *)(lVar7 + 0x14) = 0;
  FUN_1800572d0(lVar7 + 0x20);
  FUN_1800572d0(lVar7 + 0x50);
  LOCK();
  *(undefined4 *)(lVar7 + 0x80) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar7 + 0x84) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar7 + 0x88) = 0;
  UNLOCK();
  lVar7 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar7 = lStackX_20;
  }
  *(double *)(param_1 + 0x68) = (double)(lVar7 - _DAT_180c8ed48) * _DAT_180c8ed50;
  if (DAT_180c82863 != '\0') {
    uStack_58 = 0x180c91288;
    iVar6 = _Mtx_lock(0x180c91288);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }


// 函数: void FUN_180051150(longlong param_1,undefined8 param_2)
void FUN_180051150(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined1 auStack_348 [32];
  longlong **pplStack_328;
  undefined *puStack_320;
  undefined4 uStack_318;
  undefined8 uStack_308;
  char cStack_300;
  char acStack_2ff [7];
  longlong *plStack_2f8;
  undefined4 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 auStack_2c8 [2];
  longlong *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 auStack_2a8 [67];
  longlong alStack_90 [3];
  undefined4 uStack_78;
  ulonglong uStack_68;
  ulonglong uVar11;
  
  uStack_2b8 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  fVar15 = (float)param_2;
  _DAT_180c8ed20 = (longlong)(fVar15 * 100000.0);
  _DAT_180c8ed30 = _DAT_180c8ed30 + _DAT_180c8ed20;
  _DAT_180bf3ff8 = fVar15;
  uVar16 = FUN_180091020();
  uVar16 = FUN_1801ed510(uVar16,param_2);
  cVar2 = FUN_180160500(uVar16,0x52);
  cVar3 = FUN_180160500(1,0x51);
  lVar12 = 0xe0;
  if (cVar3 == '\0') {
    if (cVar2 == '\0') goto LAB_18005122d;
  }
  else {


// 函数: void FUN_180051d00(longlong param_1)
void FUN_180051d00(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x218);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
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
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180051d40(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar7 = (undefined1 *)((longlong)param_1 + 0xf);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0xe) = *(undefined1 *)((longlong)param_2 + 0xe);
  lVar6 = 0x100;
  do {
    *puVar7 = puVar7[(longlong)param_2 - (longlong)param_1];
    puVar7[1] = puVar7[((longlong)param_2 - (longlong)param_1) + 1];
    puVar7 = puVar7 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)((longlong)param_1 + 0x20f) = *(undefined1 *)((longlong)param_2 + 0x20f);
  plVar1 = param_1 + 0x43;
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x211) = *(undefined1 *)((longlong)param_2 + 0x211);
  if (plVar1 != param_2 + 0x43) {
    lVar6 = *plVar1;
    lVar2 = param_2[0x44];
    lVar3 = param_2[0x43];
    lVar8 = lVar2 - lVar3;
    uVar9 = lVar8 >> 2;
    if ((ulonglong)(param_1[0x45] - lVar6 >> 2) < uVar9) {
      if (uVar9 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 4,*(undefined1 *)(param_1 + 0x46));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar3,lVar8);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar2 = lVar6 + uVar9 * 4;
      *plVar1 = lVar6;
      param_1[0x44] = lVar2;
      param_1[0x45] = lVar2;
    }
    else {
      lVar4 = param_1[0x44];
      uVar5 = lVar4 - lVar6 >> 2;
      if (uVar5 < uVar9) {
        lVar8 = uVar5 * 4 + lVar3;
        if (lVar3 != lVar8) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar3);
        }
        if (lVar8 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar8,lVar2 - lVar8);
        }
        param_1[0x44] = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar3,lVar8);
        }
        param_1[0x44] = lVar6;
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180051de4(longlong param_1)
void FUN_180051de4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = unaff_RSI[1];
  lVar2 = *unaff_RSI;
  lVar5 = lVar1 - lVar2;
  uVar6 = lVar5 >> 2;
  if ((ulonglong)(in_RAX - param_1 >> 2) < uVar6) {
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 4,(char)unaff_RDI[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar5);
    }
    if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar3 + uVar6 * 4;
    *unaff_RDI = lVar3;
    unaff_RDI[1] = lVar1;
    unaff_RDI[2] = lVar1;
  }
  else {
    lVar3 = unaff_RDI[1];
    uVar4 = lVar3 - param_1 >> 2;
    if (uVar4 < uVar6) {
      lVar5 = uVar4 * 4 + lVar2;
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar5 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar5,lVar1 - lVar5);
      }
      unaff_RDI[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar5);
      }
      unaff_RDI[1] = param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180051e13(void)
void FUN_180051e13(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_R14 * 4,(char)unaff_RDI[3]);
  }
  if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_R14 * 4;
  *unaff_RDI = lVar2;
  unaff_RDI[1] = lVar1;
  unaff_RDI[2] = lVar1;
  return;
}





// 函数: void FUN_180051e74(longlong param_1)
void FUN_180051e74(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  
  lVar2 = *(longlong *)(unaff_RDI + 8);
  uVar3 = lVar2 - param_1 >> 2;
  if (uVar3 < unaff_R14) {
    lVar1 = uVar3 * 4 + unaff_RSI;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RBP - lVar1);
    }
    *(longlong *)(unaff_RDI + 8) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RDI + 8) = param_1;
  }
  return;
}





// 函数: void FUN_180051eef(void)
void FUN_180051eef(void)

{
  return;
}



bool FUN_180051f00(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  puVar1 = (undefined8 *)(param_1 + 0x2e0);
  FUN_1806279c0(&puStack_30);
  puVar8 = *(undefined8 **)(param_1 + 0x2f0);
  puVar11 = puVar1;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar9 = (undefined8 *)puVar8[1];
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar8[5] - (longlong)pbStack_28];
            iVar6 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar3 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar9 = (undefined8 *)puVar8[1];
            goto LAB_180051f8b;
          }
        }
        puVar9 = (undefined8 *)*puVar8;
      }
LAB_180051f8b:
      puVar10 = puVar8;
      if (bVar3) {
        puVar10 = puVar11;
      }
      puVar8 = puVar9;
      puVar11 = puVar10;
    } while (puVar9 != (undefined8 *)0x0);
    if (puVar10 != puVar1) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_180051fc9;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar7 = (longlong)pbStack_28 - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar7];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar2 - uVar5) < 1) goto LAB_180051fc9;
      }
    }
  }
  puVar10 = puVar1;
LAB_180051fc9:
  puStack_30 = &UNK_180a3c3e0;
  if (pbStack_28 == (byte *)0x0) {
    return puVar10 != puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180052020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180627ae0(param_2,_DAT_180c86870 + 0x2c0,param_3,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180052070(longlong param_1)
void FUN_180052070(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined1 auStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uStack_e8 = 0;
  lStack_b0 = param_1;
  FUN_180627ae0(param_1,_DAT_180c86870 + 0x170);
  uStack_e8 = 1;
  iVar2 = *(int *)(param_1 + 0x10) + 8;
  FUN_1806277c0(param_1,iVar2);
  puVar1 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *puVar1 = 0x2f73656873617263;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
                    // WARNING: Subroutine does not return
  memset(auStack_a8,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



