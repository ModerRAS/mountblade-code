#include "TaleWorlds.Native.Split.h"

// 99_part_14_part017.c - 7 个函数

// 函数: void FUN_1808f8d7f(void)
void FUN_1808f8d7f(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  _guard_check_icall();
                    // WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 NVSDK_NGX_D3D11_GetParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    // 0x8f8da0  7  NVSDK_NGX_D3D11_GetParameters
  UNRECOVERED_JUMPTABLE = _DAT_180c69ea0;
  if (_DAT_180c69ea0 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(_DAT_180c69ea0);
                    // WARNING: Could not recover jumptable at 0x0001808f8de2. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
NVSDK_NGX_D3D11_GetScratchBufferSize(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    // 0x8f8df0  8  NVSDK_NGX_D3D11_GetScratchBufferSize
  pcVar1 = _DAT_180c69e98;
  if (_DAT_180c69e98 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(_DAT_180c69e98);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}



undefined8 FUN_1808f8e50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_80 [88];
  
  cVar1 = FUN_1808fbf50(param_2,&UNK_18098a888);
  if (cVar1 == '\0') {
    return 0xbad0000f;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_80,0,0x58);
}






// 函数: void FUN_1808f8e9b(undefined8 param_1,undefined8 param_2)
void FUN_1808f8e9b(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x29,param_2,(int)param_2 + 0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808f8f41(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R13;
  
  lVar6 = FUN_1808fa290();
  if (lVar6 != 0) {
    _DAT_180c69e80 = (code *)GetProcAddress(lVar6,&UNK_18098a8a8);
    _DAT_180c69e88 = (code *)GetProcAddress(lVar6,&UNK_18098a8c0);
    _DAT_180c69e90 = GetProcAddress(lVar6,&UNK_18098a8e0);
    _DAT_180c69ea0 = GetProcAddress(lVar6,&UNK_18098a900);
    _DAT_180c69e98 = GetProcAddress(lVar6,&UNK_18098a920);
    _DAT_180c69ea8 = GetProcAddress(lVar6,&UNK_18098a948);
    _DAT_180c69eb0 = GetProcAddress(lVar6,&UNK_18098a968);
    _DAT_180c69eb8 = GetProcAddress(lVar6,&UNK_18098a988);
    _DAT_180c69ec0 = GetProcAddress(lVar6,&UNK_18098a9a8);
    _DAT_180c69ec8 = GetProcAddress(lVar6,&UNK_18098a9d0);
    _DAT_180c69ed0 = GetProcAddress(lVar6,&UNK_18098a9f8);
  }
  pcVar5 = _DAT_180c69e88;
  pcVar4 = _DAT_180c69e80;
  if (((((_DAT_180c69e80 == (code *)0x0) || (_DAT_180c69e90 == unaff_R13)) ||
       (_DAT_180c69ea0 == unaff_R13)) ||
      ((_DAT_180c69e98 == unaff_R13 || (_DAT_180c69ea8 == unaff_R13)))) ||
     ((_DAT_180c69eb0 == unaff_R13 || (_DAT_180c69eb8 == unaff_R13)))) {
    uVar7 = 0xbad00001;
  }
  else if (_DAT_180c69e88 == (code *)0x0) {
    if (((unaff_RBX == (longlong *)0x0) || (*unaff_RBX == unaff_R13)) ||
       (*(uint *)(unaff_RBX + 1) <= (uint)unaff_R13)) {
      _guard_check_icall(_DAT_180c69e80);
      uVar7 = (*pcVar4)();
    }
    else {
      uVar7 = 0xbad0000c;
    }
  }
  else {
    *(short *)(unaff_RBP + -0x51) = (short)unaff_R13;
    if (unaff_RBX == (longlong *)0x0) {
      *(longlong *)(unaff_RBP + -0x41) = unaff_R13;
      *(uint *)(unaff_RBP + -0x39) = (uint)unaff_R13;
    }
    else {
      uVar1 = *(undefined4 *)((longlong)unaff_RBX + 4);
      lVar3 = unaff_RBX[1];
      uVar2 = *(undefined4 *)((longlong)unaff_RBX + 0xc);
      lVar6 = unaff_RBX[2];
      *(int *)(unaff_RBP + -0x41) = (int)*unaff_RBX;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar1;
      *(int *)(unaff_RBP + -0x39) = (int)lVar3;
      *(undefined4 *)(unaff_RBP + -0x35) = uVar2;
      *(longlong *)(unaff_RBP + -0x31) = lVar6;
    }
    *(longlong *)(unaff_RBP + -0x31) = unaff_RBP + -0x51;
    _guard_check_icall(pcVar5);
    uVar7 = (*pcVar5)();
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808f90aa(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  code *unaff_RDI;
  longlong unaff_R13;
  
  pcVar5 = _DAT_180c69e88;
  if (_DAT_180c69e88 == (code *)0x0) {
    if (((unaff_RBX == (longlong *)0x0) || (*unaff_RBX == unaff_R13)) ||
       (*(uint *)(unaff_RBX + 1) <= (uint)unaff_R13)) {
      _guard_check_icall();
      uVar6 = (*unaff_RDI)();
    }
    else {
      uVar6 = 0xbad0000c;
    }
  }
  else {
    *(short *)(unaff_RBP + -0x51) = (short)unaff_R13;
    if (unaff_RBX == (longlong *)0x0) {
      *(longlong *)(unaff_RBP + -0x41) = unaff_R13;
      *(uint *)(unaff_RBP + -0x39) = (uint)unaff_R13;
    }
    else {
      uVar2 = *(undefined4 *)((longlong)unaff_RBX + 4);
      lVar4 = unaff_RBX[1];
      uVar3 = *(undefined4 *)((longlong)unaff_RBX + 0xc);
      lVar1 = unaff_RBX[2];
      *(int *)(unaff_RBP + -0x41) = (int)*unaff_RBX;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar2;
      *(int *)(unaff_RBP + -0x39) = (int)lVar4;
      *(undefined4 *)(unaff_RBP + -0x35) = uVar3;
      *(longlong *)(unaff_RBP + -0x31) = lVar1;
    }
    *(longlong *)(unaff_RBP + -0x31) = unaff_RBP + -0x51;
    _guard_check_icall(pcVar5);
    uVar6 = (*pcVar5)();
  }
  return uVar6;
}






// 函数: void FUN_1808f9114(void)
void FUN_1808f9114(void)

{
  return;
}






// 函数: void FUN_1808f911c(void)
void FUN_1808f911c(void)

{
  return;
}



undefined8 FUN_1808f9134(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  code *unaff_RDI;
  longlong unaff_R13;
  
  if (((unaff_RBX == (longlong *)0x0) || (*unaff_RBX == unaff_R13)) ||
     (*(uint *)(unaff_RBX + 1) <= (uint)unaff_R13)) {
    _guard_check_icall();
    uVar1 = (*unaff_RDI)();
  }
  else {
    uVar1 = 0xbad0000c;
  }
  return uVar1;
}



undefined8 FUN_1808f9165(void)

{
  return 0xbad00001;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 NVSDK_NGX_D3D11_ReleaseFeature(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    // 0x8f9170  9  NVSDK_NGX_D3D11_ReleaseFeature
  UNRECOVERED_JUMPTABLE = _DAT_180c69eb8;
  if (_DAT_180c69eb8 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(_DAT_180c69eb8);
                    // WARNING: Could not recover jumptable at 0x0001808f91b2. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 NVSDK_NGX_D3D11_Shutdown(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    // 0x8f91c0  10  NVSDK_NGX_D3D11_Shutdown
  _guard_check_icall();
  UNRECOVERED_JUMPTABLE = _DAT_180c69e90;
  if (_DAT_180c69e90 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(_DAT_180c69e90);
                    // WARNING: Could not recover jumptable at 0x0001808f91f3. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



ulonglong FUN_1808f9200(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_1 != 0) {
    iVar1 = GetSystemDirectoryW(0);
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(param_1 + lVar5 * 2) != 0);
    uVar3 = LocalAlloc(0x40,(lVar5 + (ulonglong)(iVar1 + 1)) * 2);
    if (uVar3 != 0) {
      uVar2 = GetSystemDirectoryW(uVar3,iVar1);
      if (*(short *)(uVar3 + (ulonglong)(uVar2 - 1) * 2) != 0x5c) {
        *(undefined2 *)(uVar3 + (ulonglong)uVar2 * 2) = 0x5c;
        uVar2 = uVar2 + 1;
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(param_1 + lVar5 * 2) != 0);
      if (lVar5 != 0) {
        do {
          lVar5 = uVar6 * 2;
          iVar1 = (int)uVar6;
          uVar6 = (ulonglong)(iVar1 + 1);
          *(undefined2 *)(uVar3 + (ulonglong)(iVar1 + uVar2) * 2) = *(undefined2 *)(param_1 + lVar5)
          ;
          uVar4 = 0xffffffffffffffff;
          do {
            uVar4 = uVar4 + 1;
          } while (*(short *)(param_1 + uVar4 * 2) != 0);
        } while (uVar6 < uVar4);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808f92e0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 auStackX_8 [2];
  ulonglong uVar5;
  
  uVar5 = 0;
  auStackX_8[0] = 8;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      iVar3 = lstrcmpA(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x18),&UNK_18098ade0)
      ;
      pcVar2 = _DAT_180c69f78;
      if (iVar3 == 0) {
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar5 * 0x18);
        _guard_check_icall(_DAT_180c69f78);
        iVar3 = (*pcVar2)(0x10001,&UNK_18098ade0,*(undefined8 *)(puVar1 + 2),*puVar1,0,0,param_2,
                          auStackX_8);
        return iVar3 == 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x68));
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f93b0(int *param_1)
void FUN_1808f93b0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_368 [32];
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  uStack_348 = 0xa018230;
  uStack_344 = 0x1018202;
  uStack_340 = 0xb123d300;
  uStack_33c = 0x3d4cbcb;
  uStack_338 = 0x9ef012c8;
  uStack_334 = 0xac0b9d0a;
  uStack_330 = 0xb85828f8;
  uStack_32c = 0x8689b316;
  uStack_328 = 0xcd865298;
  uStack_324 = 0xa283d35b;
  uStack_320 = 0x1c2e53f7;
  uStack_31c = 0x677d3d00;
  uStack_318 = 0x38699cb;
  uStack_314 = 0x8aa0b0bd;
  uStack_310 = 0x7f4e922d;
  uStack_30c = 0x34fbd129;
  uStack_308 = 0x169683e9;
  uStack_304 = 0x54dc4193;
  uStack_300 = 0x513e6203;
  uStack_2fc = 0xe5ae6f0a;
  uStack_2f8 = 0x608bf6e8;
  uStack_2f4 = 0x41db24f6;
  uStack_2f0 = 0xc920ef8e;
  uStack_2ec = 0x26028dec;
  uStack_2e8 = 0xa02fc9d1;
  uStack_2e4 = 0x7dd8d9be;
  uStack_2e0 = 0x1f59e138;
  uStack_2dc = 0x8417c037;
  uStack_2d8 = 0xcbb34076;
  uStack_2d4 = 0x5ae1765a;
  uStack_2d0 = 0xa9a5388c;
  uStack_2cc = 0xbb4c73;
  uStack_2c8 = 0x7fd18592;
  uStack_2c4 = 0x194d744e;
  uStack_2c0 = 0x62623963;
  uStack_2bc = 0x869c3b8;
  uStack_2b8 = 0xfe23f767;
  uStack_2b4 = 0x369eab04;
  uStack_2b0 = 0xc83a75c9;
  uStack_2ac = 0xcb8d743;
  uStack_2a8 = 0x12792560;
  uStack_2a4 = 0x7993053e;
  uStack_2a0 = 0x415d5645;
  uStack_29c = 0x194362f3;
  uStack_298 = 0x44ec5ac1;
  uStack_294 = 0x95d2d222;
  uStack_290 = 0x415cf75d;
  uStack_28c = 0x399dbf5;
  uStack_288 = 0xc3a4898b;
  uStack_284 = 0xa88dad93;
  uStack_280 = 0xf03aa90f;
  uStack_27c = 0x81eed7a3;
  uStack_278 = 0x254b80e7;
  uStack_274 = 0xfa8e7d53;
  uStack_270 = 0xfc26493d;
  uStack_26c = 0x734c31dd;
  uStack_268 = 0x89b7cc2d;
  uStack_264 = 0x14e8b1b7;
  uStack_260 = 0x793d6cd;
  uStack_25c = 0xf9b701f9;
  uStack_258 = 0x922fb435;
  uStack_254 = 0xd0b39af5;
  uStack_250 = 0xbf088d38;
  uStack_24c = 0x65a5b022;
  uStack_248 = 0x122a9082;
  uStack_244 = 0x1148a155;
  uStack_240 = 0x10302ff;
  uStack_23c = 0x100;
  uStack_238 = 0xa018230;
  uStack_234 = 0x1018202;
  uStack_230 = 0xc0d4a600;
  uStack_22c = 0x653517cf;
  uStack_228 = 0xda84138e;
  uStack_224 = 0x6ea2e4fa;
  uStack_220 = 0x14e0e785;
  uStack_21c = 0xec186298;
  uStack_218 = 0x55ad9f27;
  uStack_214 = 0x1a119bf7;
  uStack_210 = 0xce43be2b;
  uStack_20c = 0x78426753;
  uStack_208 = 0x7bd7a3b7;
  uStack_204 = 0x79d6c574;
  uStack_200 = 0x7d5c7f88;
  uStack_1fc = 0xaa74da7b;
  uStack_1f8 = 0x9301a697;
  uStack_1f4 = 0xf759a060;
  uStack_1f0 = 0xf94b4f05;
  uStack_1ec = 0xff9bfdec;
  uStack_1e8 = 0x99c1c4e7;
  uStack_1e4 = 0x6029f170;
  uStack_1e0 = 0xd286e20e;
  uStack_1dc = 0xb3527f60;
  uStack_1d8 = 0xe9b10217;
  uStack_1d4 = 0x1b867189;
  uStack_1d0 = 0xd3eff5b9;
  uStack_1cc = 0xe508a395;
  uStack_1c8 = 0x1ad71162;
  uStack_1c4 = 0x528ea274;
  uStack_1c0 = 0x3244c97b;
  uStack_1bc = 0xb5b9fe99;
  uStack_1b8 = 0x37257e6f;
  uStack_1b4 = 0x54584119;
  uStack_1b0 = 0xa53ef505;
  uStack_1ac = 0x8f2b8f1b;
  uStack_1a8 = 0x1e80ebe6;
  uStack_1a4 = 0x89dc86;
  uStack_1a0 = 0xd229ad23;
  uStack_19c = 0xbf254c4a;
  uStack_198 = 0x249e18f7;
  uStack_194 = 0x36bdcf78;
  uStack_190 = 0x24765811;
  uStack_18c = 0x13576df;
  uStack_188 = 0x1a7b34c2;
  uStack_184 = 0x57c64660;
  uStack_180 = 0x154f2823;
  uStack_17c = 0x1eb836e7;
  uStack_178 = 0xbf8ae57a;
  uStack_174 = 0x909ac811;
  uStack_170 = 0xf70ad138;
  uStack_16c = 0x4fa85d1;
  uStack_168 = 0x81d3b2af;
  uStack_164 = 0xe35b9199;
  uStack_160 = 0xa51562e8;
  uStack_15c = 0x6bfcc3d0;
  uStack_158 = 0x8a4f40c6;
  uStack_154 = 0x570bf4da;
  uStack_150 = 0x48902144;
  uStack_14c = 0x35bb55a1;
  uStack_148 = 0x738be375;
  uStack_144 = 0xbf7dfa29;
  uStack_140 = 0x46f0b989;
  uStack_13c = 0xf6abfbcd;
  uStack_138 = 0x76bf5c1;
  uStack_134 = 0x174776bb;
  uStack_130 = 0x10302e7;
  uStack_12c = 0x100;
  uStack_128 = 0xa018230;
  uStack_124 = 0x1018202;
  uStack_120 = 0x6a3faf00;
  uStack_11c = 0xb65c3bae;
  uStack_118 = 0x1afe292c;
  uStack_114 = 0xfe66503b;
  uStack_110 = 0x78d01bf7;
  uStack_10c = 0xf85930b9;
  uStack_108 = 0x7aa800b8;
  uStack_104 = 0x86c53d67;
  uStack_100 = 0xb010d906;
  uStack_fc = 0xaa4f6be6;
  uStack_f8 = 0x69e88da9;
  uStack_f4 = 0x88b1cd60;
  uStack_f0 = 0xc52d19cc;
  uStack_ec = 0x37d8519c;
  uStack_e8 = 0x6ad741b6;
  uStack_e4 = 0x6a5cf079;
  uStack_e0 = 0xefa2fb4e;
  uStack_dc = 0x3238d0b2;
  uStack_d8 = 0x3e5a9d3;
  uStack_d4 = 0xd2ec2beb;
  uStack_d0 = 0x6f1f17f0;
  uStack_cc = 0xdae2e1ae;
  uStack_c8 = 0x42b5105c;
  uStack_c4 = 0xb4dbe63;
  uStack_c0 = 0xb8c17208;
  uStack_bc = 0x461a1abb;
  uStack_b8 = 0xdce7d021;
  uStack_b4 = 0x89f63685;
  uStack_b0 = 0x83cc9d2a;
  uStack_ac = 0xfd8a6759;
  uStack_a8 = 0xd24e5315;
  uStack_a4 = 0x70233a8c;
  uStack_a0 = 0x39631e5d;
  uStack_9c = 0x5454776a;
  uStack_98 = 0x245a6c66;
  uStack_94 = 0xd018dd7c;
  uStack_90 = 0x5a7ca6c0;
  uStack_8c = 0xb9a3e7de;
  uStack_88 = 0x6dad414d;
  uStack_84 = 0x822a5f76;
  uStack_80 = 0x3c0a6f1c;
  uStack_7c = 0xd40e4b1b;
  uStack_78 = 0x8caf5193;
  uStack_74 = 0x6c9e1a04;
  uStack_70 = 0xb0943481;
  uStack_6c = 0x64a1f020;
  uStack_68 = 0x66a73a5a;
  uStack_64 = 0x2e4a66f6;
  uStack_60 = 0x2685def1;
  uStack_5c = 0x9124a954;
  uStack_58 = 0xbf1ea53f;
  uStack_54 = 0x1c9c9d44;
  uStack_50 = 0x2c16f828;
  uStack_4c = 0xc3f3318c;
  uStack_48 = 0x7b9e7179;
  uStack_44 = 0xe96bee9;
  uStack_40 = 0x2365556a;
  uStack_3c = 0xea71d154;
  uStack_38 = 0xb2425171;
  uStack_34 = 0x91f088cc;
  uStack_30 = 0xc6c89e28;
  uStack_2c = 0x8524fdab;
  uStack_28 = 0x5846a44b;
  uStack_24 = 0xd0c3d5ae;
  uStack_20 = 0x10302d5;
  uStack_1c = 0x100;
  if ((*param_1 == 0x10e) && (param_1[4] == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    iVar2 = memcmp(uVar1,&uStack_348,0x10e);
    if ((iVar2 != 0) && (iVar2 = memcmp(uVar1,&uStack_238,0x10e), iVar2 != 0)) {
      memcmp(uVar1,&uStack_128,0x10e);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_368);
}






// 函数: void FUN_1808f9ae9(longlong param_1)
void FUN_1808f9ae9(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong unaff_RBP;
  undefined1 auStackX_20 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = memcmp(uVar1,auStackX_20,0x10e);
  if ((iVar2 != 0) && (iVar2 = memcmp(uVar1,unaff_RBP + 0x30,0x10e), iVar2 != 0)) {
    memcmp(uVar1,unaff_RBP + 0x140,0x10e);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x250) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f9b4c(void)
void FUN_1808f9b4c(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x250) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




