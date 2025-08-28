#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part221.c - 6 个函数

// 函数: void FUN_180197a20(undefined8 *param_1)
void FUN_180197a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &UNK_180a0c4a0;
  FUN_1801a2ea0();
  puVar1 = (undefined8 *)param_1[0x66c];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[0x66c] = 0;
  FUN_180057830();
  _Mtx_destroy_in_situ();
  FUN_1801b9920(param_1 + 0xc190);
  if ((longlong *)param_1[0xc18f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc18f] + 0x38))();
  }
  if ((longlong *)param_1[0xc18e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc18e] + 0x38))();
  }
  FUN_180319840(param_1 + 0xc182);
  if ((longlong *)param_1[0xc181] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc181] + 0x38))();
  }
  FUN_1801ba4d0();
  FUN_1801ba4d0();
  FUN_18004b730();
  param_1[0xc169] = &UNK_180a3c3e0;
  if (param_1[0xc16a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xc16a] = 0;
  *(undefined4 *)(param_1 + 0xc16c) = 0;
  param_1[0xc169] = &UNK_18098bcb0;
  FUN_180196de0(param_1 + 0xc11e);
  if ((code *)param_1[0xc11c] != (code *)0x0) {
    (*(code *)param_1[0xc11c])(param_1 + 0xc11a,0,0);
  }
  FUN_180397ce0(param_1 + 0xc0fc);
  FUN_180196d20(param_1 + 0xc0e7);
  FUN_18005d580();
  FUN_1808fc8a8(param_1 + 0xc061,0x20,0x20,FUN_18004a130);
  FUN_180196c40(param_1 + 0x1045);
  if ((longlong *)param_1[0x1043] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1043] + 0x38))();
  }
  if ((longlong *)param_1[0x1042] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1042] + 0x38))();
  }
  if ((longlong *)param_1[0x1041] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1041] + 0x38))();
  }
  if ((longlong *)param_1[0x1040] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1040] + 0x38))();
  }
  if ((longlong *)param_1[0x103f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x103f] + 0x38))();
  }
  param_1[0x103a] = &UNK_180a3c3e0;
  if (param_1[0x103b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x103b] = 0;
  *(undefined4 *)(param_1 + 0x103d) = 0;
  param_1[0x103a] = &UNK_18098bcb0;
  FUN_180057830();
  FUN_18005d580();
  FUN_180057830();
  FUN_180057830();
  if (param_1[0x1023] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  FUN_1808fc8a8(param_1 + 0xb97,0x2408,1,FUN_1801b99e0);
  if (param_1[0xb93] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  if (param_1[0xb7f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xb75] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  if (param_1[0xb65] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1800e7c40(param_1 + 0xb5b);
  FUN_1800e7d00(param_1 + 0xa3a);
  FUN_1808fc8a8(param_1 + 0x7f7,0x908,2,FUN_1800e7d00);
  FUN_1800e7c40(param_1 + 0x7ed);
  param_1[0x7da] = &UNK_180a3c3e0;
  if (param_1[0x7db] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x7db] = 0;
  *(undefined4 *)(param_1 + 0x7dd) = 0;
  param_1[0x7da] = &UNK_18098bcb0;
  if (param_1[0x7ce] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180397770(param_1 + 0x6d6);
  FUN_1801431d0(param_1 + 0x66d);
  FUN_1801431d0(param_1 + 0x603);
  FUN_18038bfe0(param_1 + 0x54d);
  _Mtx_destroy_in_situ();
  if (param_1[0x53e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x53a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x536] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180389750(param_1 + 0x534);
  FUN_180389000(param_1 + 0x52e);
  if (*(char *)((longlong)param_1 + 0x2901) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2901) = 0;
    FUN_1801c0df0(param_1 + 0x519);
  }
  FUN_1801c0df0(param_1 + 0x519);
  param_1[0x512] = &UNK_180a3c3e0;
  if (param_1[0x513] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x513] = 0;
  *(undefined4 *)(param_1 + 0x515) = 0;
  param_1[0x512] = &UNK_18098bcb0;
  if (param_1[0x50e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((*(int *)((longlong)param_1 + 0x286c) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  if ((code *)param_1[0x50a] != (code *)0x0) {
    (*(code *)param_1[0x50a])(param_1 + 0x508,0,0);
  }
  if (param_1[0x502] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x4fe] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0x4fd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4fd] + 0x38))();
  }
  param_1[0x4f9] = &UNK_180a3c3e0;
  if (param_1[0x4fa] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x4fa] = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  param_1[0x4f9] = &UNK_18098bcb0;
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 0x4e3);
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 0x4cf);
  if ((longlong *)param_1[0x4ce] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4ce] + 0x38))();
  }
  FUN_18024f2c0(param_1 + 0xae);
  if (param_1[0xa8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xa4] = &UNK_180a3c3e0;
  if (param_1[0xa5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa4] = &UNK_18098bcb0;
  param_1[0xa0] = &UNK_180a3c3e0;
  if (param_1[0xa1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa0] = &UNK_18098bcb0;
  param_1[0x9b] = &UNK_180a3c3e0;
  if (param_1[0x9c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9b] = &UNK_18098bcb0;
  param_1[0x91] = &UNK_180a3c3e0;
  if (param_1[0x92] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x91] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x77] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x77] + 0x38))();
  }
  if ((longlong *)param_1[0x74] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x74] + 0x38))();
  }
  if ((longlong *)param_1[0x73] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x73] + 0x38))();
  }
  if ((longlong *)param_1[0x72] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x72] + 0x38))();
  }
  if ((longlong *)param_1[0x71] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x71] + 0x38))();
  }
  FUN_180057830();
  if ((longlong *)param_1[100] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[100] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x5e,8,4,FUN_180045af0);
  if (param_1[0x5a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180195450(param_1 + 0x4d);
  FUN_180383570(param_1 + 0x24);
  if ((code *)param_1[0x22] != (code *)0x0) {
    (*(code *)param_1[0x22])(param_1 + 0x20,0,0);
  }
  if (param_1[0x1c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1801ba340();
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
  }
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xb] = 0;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801982b0(longlong param_1,longlong param_2)
void FUN_1801982b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lStackX_10;
  
  lVar1 = _DAT_180c8a9c0;
  iVar3 = 0;
  if (**(char **)(param_2 + 0x10) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x2870);
    uVar4 = *(longlong *)(param_1 + 0x2878) - (longlong)plVar2 >> 3;
    if (uVar4 != 0) {
      do {
        if (*plVar2 == param_2) {
          if (iVar3 != -1) {
            return;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        plVar2 = plVar2 + 1;
      } while ((ulonglong)(longlong)iVar3 < uVar4);
    }
    lStackX_10 = param_2;
    FUN_18005ea90(param_1 + 0x2870,&lStackX_10,iVar3,uVar4,0,0xfffffffffffffffe);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x50);
    lStackX_10 = CONCAT44(lStackX_10._4_4_,iVar3);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
    }
    (**(code **)(lVar1 + 0x110))(*(undefined4 *)(param_1 + 0x286c),iVar3);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
    }
  }
  return;
}





// 函数: void FUN_1801983b0(longlong param_1,float *param_2)
void FUN_1801983b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  if (*(char *)(param_1 + 0x3e05) == '\0') {
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = -1.0;
    uStack_3c = 0x7f7fffff;
  }
  else {
    fStack_48 = *(float *)(param_1 + 0x3e0c);
    fStack_44 = *(float *)(param_1 + 0x3e10);
    fStack_40 = *(float *)(param_1 + 0x3e14);
    uStack_3c = *(undefined4 *)(param_1 + 0x3e18);
  }
  fVar1 = fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  fStack_40 = fStack_40 * fVar1;
  fStack_48 = fStack_48 * fVar1;
  fStack_44 = fStack_44 * fVar1;
  if (-0.1 < fStack_40) {
    fStack_40 = -0.1;
    func_0x0001801c2560(&fStack_48);
  }
  fStack_40 = -fStack_40;
  fVar1 = -fStack_44;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 1.0;
  param_2[7] = 3.4028235e+38;
  param_2[8] = -fStack_48;
  param_2[9] = -fStack_44;
  param_2[10] = fStack_40;
  param_2[0xb] = 3.4028235e+38;
  fStack_48 = fStack_40 * 0.0 - fVar1 * 1.0;
  fStack_44 = param_2[8] * 1.0 - param_2[4] * fStack_40;
  fStack_40 = param_2[4] * fVar1 - param_2[8] * 0.0;
  uStack_3c = 0x7f7fffff;
  *param_2 = fStack_48;
  param_2[1] = fStack_44;
  param_2[2] = fStack_40;
  param_2[3] = 3.4028235e+38;
  FUN_1801c24a0(param_2);
  param_2[4] = param_2[2] * param_2[9] - param_2[1] * param_2[10];
  param_2[5] = *param_2 * param_2[10] - param_2[2] * param_2[8];
  param_2[6] = param_2[1] * param_2[8] - *param_2 * param_2[9];
  param_2[7] = 3.4028235e+38;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801985e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1801985e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = _Mtx_lock(param_1 + 0x5b48,param_2,param_3,param_4,0xfffffffffffffffe);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x5b30);
  uStack_28 = (undefined4)param_4;
  uStack_24 = (undefined4)((ulonglong)param_4 >> 0x20);
  uStack_20 = (undefined4)param_5;
  uStack_1c = (undefined4)((ulonglong)param_5 >> 0x20);
  uStack_18 = (undefined4)param_2;
  uStack_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (puVar5 < *(undefined4 **)(param_1 + 0x5b38)) {
    *(undefined4 **)(param_1 + 0x5b30) = puVar5 + 8;
    *puVar5 = (int)param_3;
    puVar5[1] = uStack_2c;
    puVar5[2] = uStack_28;
    puVar5[3] = uStack_24;
    puVar5[4] = uStack_20;
    puVar5[5] = uStack_1c;
    puVar5[6] = uStack_18;
    puVar5[7] = uStack_14;
    goto LAB_180198720;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x5b28);
  lVar4 = (longlong)puVar5 - (longlong)puVar3 >> 5;
  if (lVar4 == 0) {
    lVar4 = 1;
LAB_180198693:
    puVar2 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18,lVar4 << 5,*(undefined1 *)(param_1 + 0x5b40));
    puVar5 = *(undefined4 **)(param_1 + 0x5b30);
    puVar3 = *(undefined4 **)(param_1 + 0x5b28);
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 != 0) goto LAB_180198693;
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar3 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(longlong)puVar5 - (longlong)puVar3);
  }
  *puVar2 = (int)param_3;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  puVar2[4] = uStack_20;
  puVar2[5] = uStack_1c;
  puVar2[6] = uStack_18;
  puVar2[7] = uStack_14;
  if (*(longlong *)(param_1 + 0x5b28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined4 **)(param_1 + 0x5b28) = puVar2;
  *(undefined4 **)(param_1 + 0x5b30) = puVar2 + 8;
  *(undefined4 **)(param_1 + 0x5b38) = puVar2 + lVar4 * 8;
LAB_180198720:
  iVar1 = _Mtx_unlock(param_1 + 0x5b48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180198750(longlong param_1,longlong param_2)
void FUN_180198750(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 auStack_18 [2];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3358);
    FUN_18018d8f0(param_1 + 0x3018);
    *(int *)(param_1 + 0x3358) = iVar1 + 1;
    FUN_1801b4720(param_1,*(undefined4 *)(param_1 + 0x3054));
  }
  puVar7 = (undefined4 *)
           FUN_180145140(param_1 + 0x3018,auStack_18,*(undefined4 *)(param_1 + 0x3f50));
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined1 *)(param_1 + 0x3e05) = 1;
  *(undefined4 *)(param_1 + 0x3e0c) = uVar3;
  *(undefined4 *)(param_1 + 0x3e10) = uVar4;
  *(undefined4 *)(param_1 + 0x3e14) = uVar5;
  *(undefined4 *)(param_1 + 0x3e18) = uVar6;
  *(bool *)(param_1 + 0x3e04) = 0.0 < *(float *)(param_1 + 0x312c);
  if ((*(uint *)(param_1 + 0x3050) & 0x10000000) == 0) {
    fVar12 = *(float *)(param_1 + 0x30c8);
    fVar11 = fVar12 * *(float *)(param_1 + 0x30e0);
    fVar10 = fVar12 * *(float *)(param_1 + 0x30dc);
    fVar12 = fVar12 * *(float *)(param_1 + 0x30e4);
    if (1e-08 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12) {
      *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) & 0xfffffffd;
      goto LAB_180198827;
    }
  }
  *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) | 2;
LAB_180198827:
  FUN_1801983b0(param_1,param_1 + 0x3830);
  *(undefined4 *)(param_1 + 0x3860) = 0;
  *(undefined4 *)(param_1 + 0x3864) = 0;
  *(undefined4 *)(param_1 + 0x3868) = 0;
  *(undefined4 *)(param_1 + 0x386c) = 0x7f7fffff;
  FUN_1801b32d0(param_1);
  FUN_1801983b0(param_1,param_1 + 0x3830);
  *(int *)(param_1 + 0x28b4) = *(int *)(param_1 + 0x28b4) + 1;
  *(undefined4 *)(param_1 + 0x3860) = 0;
  *(undefined4 *)(param_1 + 0x3864) = 0;
  *(undefined4 *)(param_1 + 0x3868) = 0;
  *(undefined4 *)(param_1 + 0x386c) = 0x7f7fffff;
  auStack_18[0] = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x28c0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28c0) + 0x10))();
    puVar2 = *(undefined8 **)(param_1 + 0x28c0);
    if (puVar2 != (undefined8 *)0x0) {
      lVar8 = __RTCastToVoid(puVar2);
      (**(code **)*puVar2)(puVar2,0);
      if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x28c0) = 0;
  }
  if (*(float *)(param_1 + 0x3140) <= 0.1) {
    plVar9 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
    *plVar9 = (longlong)&UNK_180a0c178;
    plVar9[1] = param_1;
  }
  else if (*(int *)(param_1 + 0x3054) == 2) {
    plVar9 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
    *plVar9 = (longlong)&UNK_180a0c178;
    plVar9[1] = param_1;
    *plVar9 = (longlong)&UNK_180a0c118;
    plVar9[2] = 0;
    plVar9[3] = 0;
  }
  else {
    plVar9 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
    *plVar9 = (longlong)&UNK_180a0c178;
    plVar9[1] = param_1;
    *plVar9 = (longlong)&UNK_180a0c148;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    *(undefined4 *)(plVar9 + 5) = 0;
  }
  *(longlong **)(param_1 + 0x28c0) = plVar9;
  (**(code **)(*plVar9 + 8))();
  *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180198890(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plStackX_20;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,0xd);
  plVar2 = (longlong *)FUN_1802e6b00(uVar1,param_3);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (*param_2 == 0) {
    FUN_180626ee0(&UNK_180a0b200);
  }
  plStackX_20 = (longlong *)*param_2;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  FUN_180198b90(param_1,&plStackX_20,1,1,0,1,0);
  return param_2;
}





// 函数: void FUN_180198980(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
void FUN_180198980(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint in_stack_ffffffffffffffc0;
  
  plStackX_10 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  if (param_2[4] == param_1) {
    if (*(longlong *)(param_1 + 600) != 0) {
      FUN_1803a00c0(*(longlong *)(param_1 + 600),param_2);
    }
    lVar1 = param_2[0x2d];
    uVar5 = 0;
    if (lVar1 == 0) {
      FUN_180398550(param_1 + 0x607e0,param_2);
      if (*(longlong **)(param_1 + 0x81f8) == param_2) {
        plStackX_8 = *(longlong **)(param_1 + 0x81f8);
        *(undefined8 *)(param_1 + 0x81f8) = 0;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
      }
      if (*(longlong **)(param_1 + 0x8200) == param_2) {
        plStackX_8 = *(longlong **)(param_1 + 0x8200);
        *(undefined8 *)(param_1 + 0x8200) = 0;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
      }
      if (*(longlong **)(param_1 + 0x8208) == param_2) {
        plStackX_8 = *(longlong **)(param_1 + 0x8208);
        *(undefined8 *)(param_1 + 0x8208) = 0;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
      }
      if (*(longlong **)(param_1 + 0x8210) == param_2) {
        plStackX_8 = *(longlong **)(param_1 + 0x8210);
        *(undefined8 *)(param_1 + 0x8210) = 0;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
      }
      plVar4 = *(longlong **)(param_1 + 0x28c0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      }
      FUN_1802eaec0(param_2,0,1,1,0,in_stack_ffffffffffffffc0 & 0xffffff00,1,param_5);
    }
    else {
      FUN_1802ed990(lVar1,1);
      FUN_1802eb9a0(lVar1,param_2,0,0,1,param_5);
    }
    iVar2 = FUN_1802ed190(param_2,7);
    if (iVar2 != 0) {
      do {
        plVar4 = (longlong *)FUN_1802ed2b0(param_2,&plStackX_8,7,uVar5);
        lVar1 = *plVar4;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        *(undefined1 *)(lVar1 + 0x39) = 1;
        uVar5 = uVar5 + 1;
        uVar3 = FUN_1802ed190(param_2,7);
      } while (uVar5 < uVar3);
    }
  }
  else {
    FUN_180626f80(&UNK_180a0b258);
  }
                    // WARNING: Could not recover jumptable at 0x000180198b86. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x38))(param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180198b90(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                       undefined8 param_5,undefined1 param_6,char param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint in_stack_ffffffffffffffb0;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  cVar4 = FUN_1802eee20(*param_2,&UNK_180a0c460);
  if (cVar4 != '\0') {
    *(undefined2 *)(param_1 + 0x5c40) = 0x101;
  }
  cVar4 = FUN_1802eee20(*param_2,&UNK_180a0c480);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x5bf0) = 1;
    *(undefined1 *)(param_1 + 0x5c42) = 1;
  }
  lVar6 = *param_2;
  lVar2 = *(longlong *)(lVar6 + 0x168);
  if (lVar2 == 0) {
    plVar3 = *(longlong **)(param_1 + 0x60860);
    plVar7 = *(longlong **)(param_1 + 0x60858);
    if (plVar7 != plVar3) {
      do {
        if (*plVar7 == lVar6) break;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
      if (plVar7 != plVar3) {
        if (param_7 != '\0') {
          puVar9 = &DAT_18098bc73;
          if (*(undefined **)(lVar6 + 0x290) != (undefined *)0x0) {
            puVar9 = *(undefined **)(lVar6 + 0x290);
          }
          plVar7 = (longlong *)FUN_180626f80(&UNK_180a0b220,puVar9);
        }
        if ((longlong *)*param_2 != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x38))();
        }
        return (ulonglong)plVar7 & 0xffffffffffffff00;
      }
    }
  }
  else {
    in_stack_ffffffffffffffb0 = 0;
    FUN_1802eb9a0(lVar2,lVar6,0,*(longlong *)(lVar2 + 0x20) == param_1,param_6,0x16);
  }
  FUN_1802eaec0(*param_2,param_1,param_3,param_4,param_5,in_stack_ffffffffffffffb0 & 0xffffff00,
                param_6,0xffffffff,uVar12);
  FUN_1802f2240(*param_2,*(undefined8 *)(param_1 + 600));
  param_2 = (longlong *)*param_2;
  iVar5 = _Mtx_lock(param_1 + 0x607e0);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar1 = (undefined8 *)(param_1 + 0x60878);
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(param_1 + 0x608a0));
  *(longlong **)(lVar6 + 0x20) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  bVar11 = true;
  puVar10 = puVar1;
  if (*(undefined8 **)(param_1 + 0x60888) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x60888);
    do {
      puVar10 = puVar8;
      bVar11 = *(ulonglong *)(lVar6 + 0x20) < (ulonglong)puVar10[4];
      if (bVar11) {
        puVar8 = (undefined8 *)puVar10[1];
      }
      else {
        puVar8 = (undefined8 *)*puVar10;
      }
    } while (puVar8 != (undefined8 *)0x0);
  }
  puVar8 = puVar10;
  if (bVar11) {
    if (puVar10 == *(undefined8 **)(param_1 + 0x60880)) goto LAB_180198da7;
    puVar8 = (undefined8 *)func_0x00018066b9a0(puVar10);
  }
  if (*(ulonglong *)(lVar6 + 0x20) <= (ulonglong)puVar8[4]) {
    if (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
LAB_180198da7:
  if ((puVar10 == puVar1) || (*(ulonglong *)(lVar6 + 0x20) < (ulonglong)puVar10[4])) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar10,puVar1,uVar12);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



