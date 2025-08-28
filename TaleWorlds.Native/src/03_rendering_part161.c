#include "TaleWorlds.Native.Split.h"

// 03_rendering_part161.c - 15 个函数

// 函数: void FUN_1803691c0(undefined8 param_1)
void FUN_1803691c0(undefined8 param_1)

{
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined **appuStack_e8 [2];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined *apuStack_78 [11];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 5;
  strcpy_s(auStack_c0,0x40,&DAT_180a1d570);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 2;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803692d0(undefined8 *param_1)
void FUN_1803692d0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a20cc0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_100 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
  *puVar2 = 0x6f4d6f54656d6954;
  *(undefined4 *)(puVar2 + 1) = 0x416564;
  uStack_f8 = 0xb;
  FUN_1803460a0(param_1,&puStack_108,param_1 + 0xe,2);
  puStack_108 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_1803697a0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x90,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803697f0(undefined8 param_1,undefined8 param_2)
void FUN_1803697f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0x18036981a;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x90,8,3);
  uStack_28 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar2 = &UNK_180a20cc0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_100 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
  *puVar2 = 0x6f4d6f54656d6954;
  *(undefined4 *)(puVar2 + 1) = 0x416564;
  uStack_f8 = 0xb;
  FUN_1803460a0(puVar3,&puStack_108,puVar3 + 0xe,2);
  puStack_108 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180369850(longlong param_1,longlong param_2)
void FUN_180369850(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x10) == 10) {
    iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20c88);
    if ((iVar1 == 0) && (*(float *)(param_1 + 0x88) <= 0.0 && *(float *)(param_1 + 0x88) != 0.0)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180369890(undefined8 param_1)
void FUN_180369890(undefined8 param_1)

{
  undefined1 auStack_368 [32];
  undefined4 uStack_348;
  undefined **appuStack_340 [2];
  undefined8 uStack_330;
  undefined *apuStack_328 [11];
  undefined4 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [72];
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [72];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [72];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_330 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  uStack_348 = 0;
  puStack_2c8 = &UNK_1809fcc58;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0xb;
  strcpy_s(auStack_2b0,0x40,&DAT_180a20c78);
  FUN_1800b8300(apuStack_328,&puStack_2c8);
  uStack_2d0 = 2;
  uStack_348 = 1;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_2c8 = &UNK_18098bcb0;
  puStack_268 = &UNK_1809fcc58;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0xb;
  strcpy_s(auStack_250,0x40,&DAT_180a20c68);
  FUN_1800b8300(apuStack_328,&puStack_268);
  uStack_2d0 = 2;
  uStack_348 = 2;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_268 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc58;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xd;
  strcpy_s(auStack_1f0,0x40,&DAT_180a20c58);
  FUN_1800b8300(apuStack_328,&puStack_208);
  uStack_2d0 = 2;
  uStack_348 = 4;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xd;
  strcpy_s(auStack_190,0x40,&DAT_180a20c48);
  FUN_1800b8300(apuStack_328,&puStack_1a8);
  uStack_2d0 = 2;
  uStack_348 = 8;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xe;
  strcpy_s(auStack_130,0x40,&DAT_180a20ca8);
  FUN_1800b8300(apuStack_328,&puStack_148);
  uStack_2d0 = 2;
  uStack_348 = 0x10;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xe;
  strcpy_s(auStack_d0,0x40,&DAT_180a20c98);
  FUN_1800b8300(apuStack_328,&puStack_e8);
  uStack_2d0 = 2;
  uStack_348 = 0x20;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&DAT_180a20c88);
  FUN_1800b8300(apuStack_328,&puStack_88);
  uStack_2d0 = 2;
  uStack_348 = 0x40;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_368);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180369d50(longlong param_1)
void FUN_180369d50(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_1802e8fb0(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar6 = *(float *)(param_1 + 0x74) + fVar1;
    fVar7 = fVar6 + *(float *)(param_1 + 0x7c);
    fVar4 = (float)fmodf((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)_DAT_180c91f50 * 8) -
                                _DAT_180c91f48) * 1e-05 + *(float *)(param_1 + 0x88));
    if (fVar4 <= fVar7) {
      if (fVar4 <= fVar6) {
        if (fVar4 <= fVar1) {
          iVar3 = 0;
        }
        else {
          iVar3 = 3;
          fVar4 = fVar4 - fVar1;
        }
      }
      else {
        iVar3 = 1;
        fVar4 = fVar4 - fVar6;
      }
    }
    else {
      iVar3 = 2;
      fVar4 = fVar4 - fVar7;
    }
    uVar5 = 0;
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x80);
    }
    else {
      if (iVar3 == 1) {
        *(undefined4 *)(lVar2 + 0xe4) = *(undefined4 *)(param_1 + 0x84);
        return;
      }
      if (iVar3 == 2) {
        fVar4 = fVar4 / *(float *)(param_1 + 0x70);
        *(float *)(lVar2 + 0xe4) =
             (1.0 - fVar4) * *(float *)(param_1 + 0x84) + fVar4 * *(float *)(param_1 + 0x80);
        return;
      }
      if (iVar3 == 3) {
        fVar4 = fVar4 / *(float *)(param_1 + 0x74);
        *(float *)(lVar2 + 0xe4) =
             (1.0 - fVar4) * *(float *)(param_1 + 0x80) + fVar4 * *(float *)(param_1 + 0x84);
        return;
      }
    }
    *(undefined4 *)(lVar2 + 0xe4) = uVar5;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180369d8d(longlong param_1)
void FUN_180369d8d(longlong param_1)

{
  float fVar1;
  longlong in_RAX;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(unaff_RBX + 0x78);
  fVar5 = *(float *)(unaff_RBX + 0x74) + fVar1;
  fVar6 = fVar5 + *(float *)(unaff_RBX + 0x7c);
  fVar3 = (float)fmodf((float)(*(longlong *)(param_1 + in_RAX * 8) - _DAT_180c91f48) * 1e-05 +
                       *(float *)(unaff_RBX + 0x88));
  if (fVar3 <= fVar6) {
    if (fVar3 <= fVar5) {
      if (fVar3 <= fVar1) {
        iVar2 = 0;
      }
      else {
        iVar2 = 3;
        fVar3 = fVar3 - fVar1;
      }
    }
    else {
      iVar2 = 1;
      fVar3 = fVar3 - fVar5;
    }
  }
  else {
    iVar2 = 2;
    fVar3 = fVar3 - fVar6;
  }
  uVar4 = 0;
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(unaff_RBX + 0x80);
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(unaff_RDI + 0xe4) = *(undefined4 *)(unaff_RBX + 0x84);
      return;
    }
    if (iVar2 == 2) {
      fVar3 = fVar3 / *(float *)(unaff_RBX + 0x70);
      *(float *)(unaff_RDI + 0xe4) =
           (1.0 - fVar3) * *(float *)(unaff_RBX + 0x84) + fVar3 * *(float *)(unaff_RBX + 0x80);
      return;
    }
    if (iVar2 == 3) {
      fVar3 = fVar3 / *(float *)(unaff_RBX + 0x74);
      *(float *)(unaff_RDI + 0xe4) =
           (1.0 - fVar3) * *(float *)(unaff_RBX + 0x80) + fVar3 * *(float *)(unaff_RBX + 0x84);
      return;
    }
  }
  *(undefined4 *)(unaff_RDI + 0xe4) = uVar4;
  return;
}





// 函数: void FUN_180369e32(int param_1,undefined4 param_2)
void FUN_180369e32(int param_1,undefined4 param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  float in_XMM0_Da;
  
  if (param_1 == 1) {
    *(undefined4 *)(unaff_RDI + 0xe4) = *(undefined4 *)(unaff_RBX + 0x84);
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 3) {
      in_XMM0_Da = in_XMM0_Da / *(float *)(unaff_RBX + 0x74);
      *(float *)(unaff_RDI + 0xe4) =
           (1.0 - in_XMM0_Da) * *(float *)(unaff_RBX + 0x80) +
           in_XMM0_Da * *(float *)(unaff_RBX + 0x84);
      return;
    }
    *(undefined4 *)(unaff_RDI + 0xe4) = param_2;
    return;
  }
  in_XMM0_Da = in_XMM0_Da / *(float *)(unaff_RBX + 0x70);
  *(float *)(unaff_RDI + 0xe4) =
       (1.0 - in_XMM0_Da) * *(float *)(unaff_RBX + 0x84) + in_XMM0_Da * *(float *)(unaff_RBX + 0x80)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180369ef0(undefined8 *param_1)
void FUN_180369ef0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar6 = param_1;
  FUN_1803456e0();
  *puVar6 = &UNK_180a20f68;
  puVar5 = puVar6 + 0xe;
  *puVar5 = &UNK_18098bcb0;
  puVar6[0xf] = 0;
  *(undefined4 *)(puVar6 + 0x10) = 0;
  *puVar5 = &UNK_180a3c3e0;
  puVar6[0x11] = 0;
  puVar6[0xf] = 0;
  *(undefined4 *)(puVar6 + 0x10) = 0;
  plVar1 = puVar6 + 0x16;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar6[0x17] = 0;
  *(undefined4 *)(puVar6 + 0x18) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar6[0x19] = 0;
  puVar6[0x17] = 0;
  *(undefined4 *)(puVar6 + 0x18) = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puStack_48 = puVar5;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_160 = (undefined8 *)puVar4;
  uVar3 = FUN_18064e990(puVar4);
  *puVar4 = 0x74736554;
  *(undefined1 *)(puVar4 + 1) = 0;
  uStack_158 = 4;
  uStack_150._0_4_ = uVar3;
  FUN_18005d190(puVar5,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (puStack_160 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_160 = (undefined8 *)0x0;
  uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
  puStack_168 = &UNK_18098bcb0;
  plVar2 = (longlong *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x40200000;
  *(undefined1 *)(param_1 + 0x15) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(undefined2 *)(param_1 + 0x1a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined1 *)((longlong)param_1 + 0xd3) = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_160 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
  *puVar5 = 0x6d614e2068746150;
  *(undefined2 *)(puVar5 + 1) = 0x65;
  uStack_158 = 9;
  FUN_1803460a0(param_1,&puStack_168,puStack_48,0);
  puStack_168 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



undefined8 * FUN_18036a6a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a20f68;
  plVar1 = (longlong *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x13] = 0;
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x38))();
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x38))();
  }
  param_1[0x16] = &UNK_180a3c3e0;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = &UNK_18098bcb0;
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x118);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036a7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036a7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_40;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined4 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x74736554;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_30 = 4;
  uStack_28._0_4_ = uVar2;
  FUN_18005d190(param_1 + 0x70,&puStack_40);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_38 = (undefined4 *)0x0;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  puStack_40 = &UNK_18098bcb0;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x40200000;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0xc97423f0c97423f0;
  *(undefined8 *)(param_1 + 0x100) = 0x7f7fffffc97423f0;
  *(undefined8 *)(param_1 + 0x108) = 0x497423f0497423f0;
  *(undefined8 *)(param_1 + 0x110) = 0x7f7fffff497423f0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036a930(longlong param_1)
void FUN_18036a930(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (DAT_180c8aa6b != '\0') {
    puStack_38 = &UNK_1809fdc18;
    puStack_30 = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 7;
    strcpy_s(auStack_20,0x10,&UNK_180a20e68);
    uVar1 = FUN_1800b6de0(_DAT_180c86930,&puStack_38,1);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    puStack_38 = &UNK_18098bcb0;
  }
  FUN_18036b140(param_1);
  puVar2 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_48,
                         param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xd8) = *puVar2;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  FUN_18036abc0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))((longlong *)(param_1 + 0xb0),&DAT_180a20e58)
    ;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036aa50(longlong param_1)
void FUN_18036aa50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if (DAT_180c8aa6b != '\0') {
    puStack_38 = &UNK_1809fdc18;
    puStack_30 = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 7;
    strcpy_s(auStack_20,0x10,&UNK_180a20e68);
    uVar1 = FUN_1800b6de0(_DAT_180c86930,&puStack_38,1);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    puStack_38 = &UNK_18098bcb0;
  }
  FUN_18036b140(param_1);
  puVar2 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_48,
                         param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xd8) = *puVar2;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  FUN_18036abc0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))((longlong *)(param_1 + 0xb0),&DAT_180a20e58)
    ;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036ab70(undefined8 param_1,undefined8 param_2)
void FUN_18036ab70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x118,8,3);
  uStack_40 = 0xfffffffffffffffe;
  puVar7 = puVar6;
  FUN_1803456e0(puVar6,param_2,param_1);
  *puVar7 = &UNK_180a20f68;
  puVar5 = puVar7 + 0xe;
  *puVar5 = &UNK_18098bcb0;
  puVar7[0xf] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *puVar5 = &UNK_180a3c3e0;
  puVar7[0x11] = 0;
  puVar7[0xf] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  plVar1 = puVar7 + 0x16;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar7[0x17] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar7[0x19] = 0;
  puVar7[0x17] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puStack_48 = puVar5;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_160 = (undefined8 *)puVar4;
  uVar3 = FUN_18064e990(puVar4);
  *puVar4 = 0x74736554;
  *(undefined1 *)(puVar4 + 1) = 0;
  uStack_158 = 4;
  uStack_150._0_4_ = uVar3;
  FUN_18005d190(puVar5,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (puStack_160 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_160 = (undefined8 *)0x0;
  uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
  puStack_168 = &UNK_18098bcb0;
  plVar2 = (longlong *)puVar6[0x1c];
  puVar6[0x1c] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  puVar6[0x13] = 0;
  *(undefined4 *)((longlong)puVar6 + 0xa4) = 0x40200000;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(undefined2 *)(puVar6 + 0x1a) = 0x100;
  *(undefined1 *)((longlong)puVar6 + 0xd2) = 1;
  *(undefined1 *)((longlong)puVar6 + 0xd3) = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_160 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
  *puVar5 = 0x6d614e2068746150;
  *(undefined2 *)(puVar5 + 1) = 0x65;
  uStack_158 = 9;
  FUN_1803460a0(puVar6,&puStack_168,puStack_48,0);
  puStack_168 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}





// 函数: void FUN_18036abc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036abc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plStackX_8;
  
  plVar3 = (longlong *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar3;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != lVar2) {
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  }
  if ((lVar1 != 0) &&
     ((lVar1 != lVar2 || ((lVar2 != 0 && (*(int *)(param_1 + 0xf4) < *(int *)(lVar2 + 0x70))))))) {
    *(longlong *)(param_1 + 0xd8) = lVar1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x288);
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(lVar1 + 0x80) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar1 + 0x80);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar4);
    FUN_18036b380(param_1);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x70);
  }
  return;
}





// 函数: void FUN_18036ac90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036ac90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *aplStackX_8 [4];
  
  puVar1 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0xd8) = *puVar1;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_18036b380(param_1);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x70);
  }
  return;
}



undefined8 FUN_18036adb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 7) {
    lVar3 = 0;
    while (lVar4 = lVar3 + 1,
          *(char *)(*(longlong *)(param_2 + 8) + lVar3) == (&DAT_180a20e40)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 8) {
        return 0;
      }
    }
  }
  if (((iVar2 != 10) ||
      ((iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e30), iVar1 != 0 &&
       (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e80), iVar1 != 0)))) &&
     ((iVar2 != 0xc || (iVar2 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e70), iVar2 != 0))))
  {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



