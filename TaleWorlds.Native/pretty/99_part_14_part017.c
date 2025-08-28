#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part017.c - 7 个函数
// 函数: void function_8f8d7f(void)
void function_8f8d7f(void)
{
  code *UNRECOVERED_JUMPTABLE;
  _guard_check_icall();
// WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
// WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NVSDK_NGX_D3D11_GetParameters(uint64_t param_1)
{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
// 0x8f8da0  7  NVSDK_NGX_D3D11_GetParameters
  UNRECOVERED_JUMPTABLE = system_system_memory;
  if (system_system_memory == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(system_system_memory);
// WARNING: Could not recover jumptable at 0x0001808f8de2. Too many branches
// WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
NVSDK_NGX_D3D11_GetScratchBufferSize(int32_t param_1,uint64_t param_2,uint64_t param_3)
{
  code *pcVar1;
  uint64_t uVar2;
// 0x8f8df0  8  NVSDK_NGX_D3D11_GetScratchBufferSize
  pcVar1 = system_system_memory;
  if (system_system_memory == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(system_system_memory);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}
uint64_t function_8f8e50(uint64_t param_1,uint64_t param_2)
{
  char cVar1;
  int8_t stack_array_80 [88];
  cVar1 = function_8fbf50(param_2,&processed_var_5560_ptr);
  if (cVar1 == '\0') {
    return 0xbad0000f;
  }
// WARNING: Subroutine does not return
  memset(stack_array_80,0,0x58);
}
// 函数: void function_8f8e9b(uint64_t param_1,uint64_t param_2)
void function_8f8e9b(uint64_t param_1,uint64_t param_2)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  memset(unaff_RBP + -0x29,param_2,(int)param_2 + 0x58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8f8f41(void)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  code *pcVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_R13;
  lVar6 = function_8fa290();
  if (lVar6 != 0) {
    system_system_memory = (code *)GetProcAddress(lVar6,&processed_var_5592_ptr);
    system_system_memory = (code *)GetProcAddress(lVar6,&processed_var_5616_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5648_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5680_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5712_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5752_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5784_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5816_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5848_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5888_ptr);
    system_system_memory = GetProcAddress(lVar6,&processed_var_5928_ptr);
  }
  pcVar5 = system_system_memory;
  pcVar4 = system_system_memory;
  if (((((system_system_memory == (code *)0x0) || (system_system_memory == unaff_R13)) ||
       (system_system_memory == unaff_R13)) ||
      ((system_system_memory == unaff_R13 || (system_system_memory == unaff_R13)))) ||
     ((system_system_memory == unaff_R13 || (system_system_memory == unaff_R13)))) {
    uVar7 = 0xbad00001;
  }
  else if (system_system_memory == (code *)0x0) {
    if (((unaff_RBX == (int64_t *)0x0) || (*unaff_RBX == unaff_R13)) ||
       (*(uint *)(unaff_RBX + 1) <= (uint)unaff_R13)) {
      _guard_check_icall(system_system_memory);
      uVar7 = (*pcVar4)();
    }
    else {
      uVar7 = 0xbad0000c;
    }
  }
  else {
    *(short *)(unaff_RBP + -0x51) = (short)unaff_R13;
    if (unaff_RBX == (int64_t *)0x0) {
      *(int64_t *)(unaff_RBP + -0x41) = unaff_R13;
      *(uint *)(unaff_RBP + -0x39) = (uint)unaff_R13;
    }
    else {
      uVar1 = *(int32_t *)((int64_t)unaff_RBX + 4);
      lVar3 = unaff_RBX[1];
      uVar2 = *(int32_t *)((int64_t)unaff_RBX + 0xc);
      lVar6 = unaff_RBX[2];
      *(int *)(unaff_RBP + -0x41) = (int)*unaff_RBX;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar1;
      *(int *)(unaff_RBP + -0x39) = (int)lVar3;
      *(int32_t *)(unaff_RBP + -0x35) = uVar2;
      *(int64_t *)(unaff_RBP + -0x31) = lVar6;
    }
    *(int64_t *)(unaff_RBP + -0x31) = unaff_RBP + -0x51;
    _guard_check_icall(pcVar5);
    uVar7 = (*pcVar5)();
  }
  return uVar7;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8f90aa(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  code *pcVar5;
  uint64_t uVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  code *unaff_RDI;
  int64_t unaff_R13;
  pcVar5 = system_system_memory;
  if (system_system_memory == (code *)0x0) {
    if (((unaff_RBX == (int64_t *)0x0) || (*unaff_RBX == unaff_R13)) ||
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
    if (unaff_RBX == (int64_t *)0x0) {
      *(int64_t *)(unaff_RBP + -0x41) = unaff_R13;
      *(uint *)(unaff_RBP + -0x39) = (uint)unaff_R13;
    }
    else {
      uVar2 = *(int32_t *)((int64_t)unaff_RBX + 4);
      lVar4 = unaff_RBX[1];
      uVar3 = *(int32_t *)((int64_t)unaff_RBX + 0xc);
      lVar1 = unaff_RBX[2];
      *(int *)(unaff_RBP + -0x41) = (int)*unaff_RBX;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar2;
      *(int *)(unaff_RBP + -0x39) = (int)lVar4;
      *(int32_t *)(unaff_RBP + -0x35) = uVar3;
      *(int64_t *)(unaff_RBP + -0x31) = lVar1;
    }
    *(int64_t *)(unaff_RBP + -0x31) = unaff_RBP + -0x51;
    _guard_check_icall(pcVar5);
    uVar6 = (*pcVar5)();
  }
  return uVar6;
}
// 函数: void function_8f9114(void)
void function_8f9114(void)
{
  return;
}
// 函数: void function_8f911c(void)
void function_8f911c(void)
{
  return;
}
uint64_t function_8f9134(void)
{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  code *unaff_RDI;
  int64_t unaff_R13;
  if (((unaff_RBX == (int64_t *)0x0) || (*unaff_RBX == unaff_R13)) ||
     (*(uint *)(unaff_RBX + 1) <= (uint)unaff_R13)) {
    _guard_check_icall();
    uVar1 = (*unaff_RDI)();
  }
  else {
    uVar1 = 0xbad0000c;
  }
  return uVar1;
}
uint64_t function_8f9165(void)
{
  return 0xbad00001;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NVSDK_NGX_D3D11_ReleaseFeature(uint64_t param_1)
{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
// 0x8f9170  9  NVSDK_NGX_D3D11_ReleaseFeature
  UNRECOVERED_JUMPTABLE = system_system_memory;
  if (system_system_memory == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(system_system_memory);
// WARNING: Could not recover jumptable at 0x0001808f91b2. Too many branches
// WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NVSDK_NGX_D3D11_Shutdown(void)
{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
// 0x8f91c0  10  NVSDK_NGX_D3D11_Shutdown
  _guard_check_icall();
  UNRECOVERED_JUMPTABLE = system_system_memory;
  if (system_system_memory == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(system_system_memory);
// WARNING: Could not recover jumptable at 0x0001808f91f3. Too many branches
// WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}
uint64_t function_8f9200(int64_t param_1)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_1 != 0) {
    iVar1 = GetSystemDirectoryW(0);
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(param_1 + lVar5 * 2) != 0);
    uVar3 = LocalAlloc(0x40,(lVar5 + (uint64_t)(iVar1 + 1)) * 2);
    if (uVar3 != 0) {
      uVar2 = GetSystemDirectoryW(uVar3,iVar1);
      if (*(short *)(uVar3 + (uint64_t)(uVar2 - 1) * 2) != 0x5c) {
        *(int16_t *)(uVar3 + (uint64_t)uVar2 * 2) = 0x5c;
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
          uVar6 = (uint64_t)(iVar1 + 1);
          *(int16_t *)(uVar3 + (uint64_t)(iVar1 + uVar2) * 2) = *(int16_t *)(param_1 + lVar5)
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
bool function_8f92e0(int64_t param_1,uint64_t param_2)
{
  int32_t *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int32_t astack_special_x_8 [2];
  uint64_t uVar5;
  uVar5 = 0;
  astack_special_x_8[0] = 8;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      iVar3 = lstrcmpA(*(uint64_t *)(*(int64_t *)(param_1 + 0x70) + uVar5 * 0x18),&processed_var_6928_ptr)
      ;
      pcVar2 = system_system_memory;
      if (iVar3 == 0) {
        puVar1 = *(int32_t **)(*(int64_t *)(param_1 + 0x70) + 0x10 + uVar5 * 0x18);
        _guard_check_icall(system_system_memory);
        iVar3 = (*pcVar2)(0x10001,&processed_var_6928_ptr,*(uint64_t *)(puVar1 + 2),*puVar1,0,0,param_2,
                          astack_special_x_8);
        return iVar3 == 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x68));
  }
  return false;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8f93b0(int *param_1)
void function_8f93b0(int *param_1)
{
  uint64_t uVar1;
  int iVar2;
  int8_t stack_array_368 [32];
  int32_t local_var_348;
  int32_t local_var_344;
  int32_t local_var_340;
  int32_t local_var_33c;
  int32_t local_var_338;
  int32_t local_var_334;
  int32_t local_var_330;
  int32_t local_var_32c;
  int32_t local_var_328;
  int32_t local_var_324;
  int32_t local_var_320;
  int32_t local_var_31c;
  int32_t local_var_318;
  int32_t local_var_314;
  int32_t local_var_310;
  int32_t local_var_30c;
  int32_t local_var_308;
  int32_t local_var_304;
  int32_t local_var_300;
  int32_t local_var_2fc;
  int32_t local_var_2f8;
  int32_t local_var_2f4;
  int32_t local_var_2f0;
  int32_t local_var_2ec;
  int32_t local_var_2e8;
  int32_t local_var_2e4;
  int32_t local_var_2e0;
  int32_t local_var_2dc;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  int32_t local_var_2cc;
  int32_t local_var_2c8;
  int32_t local_var_2c4;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  int32_t local_var_2b8;
  int32_t local_var_2b4;
  int32_t local_var_2b0;
  int32_t local_var_2ac;
  int32_t local_var_2a8;
  int32_t local_var_2a4;
  int32_t local_var_2a0;
  int32_t local_var_29c;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  int32_t local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  int32_t local_var_27c;
  int32_t local_var_278;
  int32_t local_var_274;
  int32_t local_var_270;
  int32_t local_var_26c;
  int32_t local_var_268;
  int32_t local_var_264;
  int32_t local_var_260;
  int32_t local_var_25c;
  int32_t local_var_258;
  int32_t local_var_254;
  int32_t local_var_250;
  int32_t local_var_24c;
  int32_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int16_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  int32_t local_var_230;
  int32_t local_var_22c;
  int32_t local_var_228;
  int32_t local_var_224;
  int32_t local_var_220;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  int32_t local_var_20c;
  int32_t local_var_208;
  int32_t local_var_204;
  int32_t local_var_200;
  int32_t local_var_1fc;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int32_t local_var_1e0;
  int32_t local_var_1dc;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int16_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int16_t local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_368;
  local_var_348 = 0xa018230;
  local_var_344 = 0x1018202;
  local_var_340 = 0xb123d300;
  local_var_33c = 0x3d4cbcb;
  local_var_338 = 0x9ef012c8;
  local_var_334 = 0xac0b9d0a;
  local_var_330 = 0xb85828f8;
  local_var_32c = 0x8689b316;
  local_var_328 = 0xcd865298;
  local_var_324 = 0xa283d35b;
  local_var_320 = 0x1c2e53f7;
  local_var_31c = 0x677d3d00;
  local_var_318 = 0x38699cb;
  local_var_314 = 0x8aa0b0bd;
  local_var_310 = 0x7f4e922d;
  local_var_30c = 0x34fbd129;
  local_var_308 = 0x169683e9;
  local_var_304 = 0x54dc4193;
  local_var_300 = 0x513e6203;
  local_var_2fc = 0xe5ae6f0a;
  local_var_2f8 = 0x608bf6e8;
  local_var_2f4 = 0x41db24f6;
  local_var_2f0 = 0xc920ef8e;
  local_var_2ec = 0x26028dec;
  local_var_2e8 = 0xa02fc9d1;
  local_var_2e4 = 0x7dd8d9be;
  local_var_2e0 = 0x1f59e138;
  local_var_2dc = 0x8417c037;
  local_var_2d8 = 0xcbb34076;
  local_var_2d4 = 0x5ae1765a;
  local_var_2d0 = 0xa9a5388c;
  local_var_2cc = 0xbb4c73;
  local_var_2c8 = 0x7fd18592;
  local_var_2c4 = 0x194d744e;
  local_var_2c0 = 0x62623963;
  local_var_2bc = 0x869c3b8;
  local_var_2b8 = 0xfe23f767;
  local_var_2b4 = 0x369eab04;
  local_var_2b0 = 0xc83a75c9;
  local_var_2ac = 0xcb8d743;
  local_var_2a8 = 0x12792560;
  local_var_2a4 = 0x7993053e;
  local_var_2a0 = 0x415d5645;
  local_var_29c = 0x194362f3;
  local_var_298 = 0x44ec5ac1;
  local_var_294 = 0x95d2d222;
  local_var_290 = 0x415cf75d;
  local_var_28c = 0x399dbf5;
  local_var_288 = 0xc3a4898b;
  local_var_284 = 0xa88dad93;
  local_var_280 = 0xf03aa90f;
  local_var_27c = 0x81eed7a3;
  local_var_278 = 0x254b80e7;
  local_var_274 = 0xfa8e7d53;
  local_var_270 = 0xfc26493d;
  local_var_26c = 0x734c31dd;
  local_var_268 = 0x89b7cc2d;
  local_var_264 = 0x14e8b1b7;
  local_var_260 = 0x793d6cd;
  local_var_25c = 0xf9b701f9;
  local_var_258 = 0x922fb435;
  local_var_254 = 0xd0b39af5;
  local_var_250 = 0xbf088d38;
  local_var_24c = 0x65a5b022;
  local_var_248 = 0x122a9082;
  local_var_244 = 0x1148a155;
  local_var_240 = 0x10302ff;
  local_var_23c = 0x100;
  local_var_238 = 0xa018230;
  local_var_234 = 0x1018202;
  local_var_230 = 0xc0d4a600;
  local_var_22c = 0x653517cf;
  local_var_228 = 0xda84138e;
  local_var_224 = 0x6ea2e4fa;
  local_var_220 = 0x14e0e785;
  local_var_21c = 0xec186298;
  local_var_218 = 0x55ad9f27;
  local_var_214 = 0x1a119bf7;
  local_var_210 = 0xce43be2b;
  local_var_20c = 0x78426753;
  local_var_208 = 0x7bd7a3b7;
  local_var_204 = 0x79d6c574;
  local_var_200 = 0x7d5c7f88;
  local_var_1fc = 0xaa74da7b;
  local_var_1f8 = 0x9301a697;
  local_var_1f4 = 0xf759a060;
  local_var_1f0 = 0xf94b4f05;
  local_var_1ec = 0xff9bfdec;
  local_var_1e8 = 0x99c1c4e7;
  local_var_1e4 = 0x6029f170;
  local_var_1e0 = 0xd286e20e;
  local_var_1dc = 0xb3527f60;
  local_var_1d8 = 0xe9b10217;
  local_var_1d4 = 0x1b867189;
  local_var_1d0 = 0xd3eff5b9;
  local_var_1cc = 0xe508a395;
  local_var_1c8 = 0x1ad71162;
  local_var_1c4 = 0x528ea274;
  local_var_1c0 = 0x3244c97b;
  local_var_1bc = 0xb5b9fe99;
  local_var_1b8 = 0x37257e6f;
  local_var_1b4 = 0x54584119;
  local_var_1b0 = 0xa53ef505;
  local_var_1ac = 0x8f2b8f1b;
  local_var_1a8 = 0x1e80ebe6;
  local_var_1a4 = 0x89dc86;
  local_var_1a0 = 0xd229ad23;
  local_var_19c = 0xbf254c4a;
  local_var_198 = 0x249e18f7;
  local_var_194 = 0x36bdcf78;
  local_var_190 = 0x24765811;
  local_var_18c = 0x13576df;
  local_var_188 = 0x1a7b34c2;
  local_var_184 = 0x57c64660;
  local_var_180 = 0x154f2823;
  local_var_17c = 0x1eb836e7;
  local_var_178 = 0xbf8ae57a;
  local_var_174 = 0x909ac811;
  local_var_170 = 0xf70ad138;
  local_var_16c = 0x4fa85d1;
  local_var_168 = 0x81d3b2af;
  local_var_164 = 0xe35b9199;
  local_var_160 = 0xa51562e8;
  local_var_15c = 0x6bfcc3d0;
  local_var_158 = 0x8a4f40c6;
  local_var_154 = 0x570bf4da;
  local_var_150 = 0x48902144;
  local_var_14c = 0x35bb55a1;
  local_var_148 = 0x738be375;
  local_var_144 = 0xbf7dfa29;
  local_var_140 = 0x46f0b989;
  local_var_13c = 0xf6abfbcd;
  local_var_138 = 0x76bf5c1;
  local_var_134 = 0x174776bb;
  local_var_130 = 0x10302e7;
  local_var_12c = 0x100;
  local_var_128 = 0xa018230;
  local_var_124 = 0x1018202;
  local_var_120 = 0x6a3faf00;
  local_var_11c = 0xb65c3bae;
  local_var_118 = 0x1afe292c;
  local_var_114 = 0xfe66503b;
  local_var_110 = 0x78d01bf7;
  local_var_10c = 0xf85930b9;
  local_var_108 = 0x7aa800b8;
  local_var_104 = 0x86c53d67;
  local_var_100 = 0xb010d906;
  local_var_fc = 0xaa4f6be6;
  local_var_f8 = 0x69e88da9;
  local_var_f4 = 0x88b1cd60;
  local_var_f0 = 0xc52d19cc;
  local_var_ec = 0x37d8519c;
  local_var_e8 = 0x6ad741b6;
  local_var_e4 = 0x6a5cf079;
  local_var_e0 = 0xefa2fb4e;
  local_var_dc = 0x3238d0b2;
  local_var_d8 = 0x3e5a9d3;
  local_var_d4 = 0xd2ec2beb;
  local_var_d0 = 0x6f1f17f0;
  local_var_cc = 0xdae2e1ae;
  local_var_c8 = 0x42b5105c;
  local_var_c4 = 0xb4dbe63;
  local_var_c0 = 0xb8c17208;
  local_var_bc = 0x461a1abb;
  local_var_b8 = 0xdce7d021;
  local_var_b4 = 0x89f63685;
  local_var_b0 = 0x83cc9d2a;
  local_var_ac = 0xfd8a6759;
  local_var_a8 = 0xd24e5315;
  local_var_a4 = 0x70233a8c;
  local_var_a0 = 0x39631e5d;
  local_var_9c = 0x5454776a;
  local_var_98 = 0x245a6c66;
  local_var_94 = 0xd018dd7c;
  local_var_90 = 0x5a7ca6c0;
  local_var_8c = 0xb9a3e7de;
  local_var_88 = 0x6dad414d;
  local_var_84 = 0x822a5f76;
  local_var_80 = 0x3c0a6f1c;
  local_var_7c = 0xd40e4b1b;
  local_var_78 = 0x8caf5193;
  local_var_74 = 0x6c9e1a04;
  local_var_70 = 0xb0943481;
  local_var_6c = 0x64a1f020;
  local_var_68 = 0x66a73a5a;
  local_var_64 = 0x2e4a66f6;
  local_var_60 = 0x2685def1;
  local_var_5c = 0x9124a954;
  local_var_58 = 0xbf1ea53f;
  local_var_54 = 0x1c9c9d44;
  local_var_50 = 0x2c16f828;
  local_var_4c = 0xc3f3318c;
  local_var_48 = 0x7b9e7179;
  local_var_44 = 0xe96bee9;
  local_var_40 = 0x2365556a;
  local_var_3c = 0xea71d154;
  local_var_38 = 0xb2425171;
  local_var_34 = 0x91f088cc;
  local_var_30 = 0xc6c89e28;
  local_var_2c = 0x8524fdab;
  local_var_28 = 0x5846a44b;
  local_var_24 = 0xd0c3d5ae;
  local_var_20 = 0x10302d5;
  local_var_1c = 0x100;
  if ((*param_1 == 0x10e) && (param_1[4] == 0)) {
    uVar1 = *(uint64_t *)(param_1 + 2);
    iVar2 = memcmp(uVar1,&local_var_348,0x10e);
    if ((iVar2 != 0) && (iVar2 = memcmp(uVar1,&local_var_238,0x10e), iVar2 != 0)) {
      memcmp(uVar1,&local_var_128,0x10e);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_368);
}
// 函数: void function_8f9ae9(int64_t param_1)
void function_8f9ae9(int64_t param_1)
{
  uint64_t uVar1;
  int iVar2;
  int64_t unaff_RBP;
  int8_t astack_special_x_20 [8];
  uVar1 = *(uint64_t *)(param_1 + 8);
  iVar2 = memcmp(uVar1,astack_special_x_20,0x10e);
  if ((iVar2 != 0) && (iVar2 = memcmp(uVar1,unaff_RBP + 0x30,0x10e), iVar2 != 0)) {
    memcmp(uVar1,unaff_RBP + 0x140,0x10e);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x250) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_8f9b4c(void)
void function_8f9b4c(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x250) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address