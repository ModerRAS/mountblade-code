#include "TaleWorlds.Native.Split.h"

// 03_rendering_part062.c - 15 个函数

// 函数: void FUN_18029e3e0(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_18029e3e0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
  lVar3 = FUN_18023a940(param_2);
  uVar2 = *(uint64_t *)(lVar3 + 8);
  lVar3 = FUN_18023a940(param_3);
                    // WARNING: Could not recover jumptable at 0x00018029e43f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(uint64_t *)(lVar3 + 8),uVar2);
  return;
}





// 函数: void FUN_18029e450(longlong param_1,uint64_t param_2,int param_3,int param_4,int param_5,
void FUN_18029e450(longlong param_1,uint64_t param_2,int param_3,int param_4,int param_5,
                  uint64_t param_6,int param_7,int param_8,int param_9)

{
  longlong *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  lVar4 = FUN_18023a940(param_6);
  uVar3 = *(uint64_t *)(lVar4 + 8);
  lVar4 = FUN_18023a940();
  (*pcVar2)(plVar1,*(uint64_t *)(lVar4 + 8),param_3 + param_4 * param_5,0,0,0,uVar3,
            param_8 * param_9 + param_7,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029e500(longlong param_1,longlong param_2,longlong param_3)
void FUN_18029e500(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  lVar4 = _DAT_180c86870;
  plVar1 = *(longlong **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  uVar3 = *(uint64_t *)(param_3 + 0x10);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,0,0,0,uVar3,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029e570(longlong param_1,longlong param_2,longlong param_3,int param_4,int32_t param_5
void FUN_18029e570(longlong param_1,longlong param_2,longlong param_3,int param_4,int32_t param_5
                  ,int param_6)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int *piStack_38;
  int aiStack_28 [4];
  int32_t uStack_18;
  int32_t uStack_14;
  ulonglong uStack_10;
  
  lVar3 = _DAT_180c86870;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x8400);
  aiStack_28[3] = param_6 + param_4;
  uStack_48 = *(uint64_t *)(param_3 + 0x10);
  aiStack_28[1] = 0;
  aiStack_28[2] = 0;
  uStack_18 = 1;
  uStack_14 = 1;
  pcVar2 = *(code **)(*plVar1 + 0x170);
  *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
  piStack_38 = aiStack_28;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  aiStack_28[0] = param_4;
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,param_5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_78);
}





// 函数: void FUN_18029e630(longlong param_1,longlong param_2,int param_3,int param_4,int32_t param_5,
void FUN_18029e630(longlong param_1,longlong param_2,int param_3,int param_4,int32_t param_5,
                  longlong param_6)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x8400);
  bVar1 = *(byte *)(param_2 + 0x335);
  uVar2 = *(uint *)(param_2 + 0x35c);
  pcVar4 = *(code **)(*plVar3 + 0x180);
  uVar5 = *(uint64_t *)(param_6 + 0x10);
  lVar6 = FUN_18023a940(param_2);
  uVar7 = (uint)bVar1;
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar7 = uVar2;
  }
  (*pcVar4)(plVar3,*(uint64_t *)(lVar6 + 8),uVar7 * param_4 + param_3,0,uVar5,param_5,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029e6e0(uint64_t param_1,longlong param_2,int32_t param_3,int32_t param_4,
void FUN_18029e6e0(uint64_t param_1,longlong param_2,int32_t param_3,int32_t param_4,
                  longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  void *puVar3;
  int8_t auStack_1b8 [32];
  uint uStack_198;
  longlong *plStack_190;
  int32_t uStack_188;
  int32_t uStack_180;
  uint uStack_178;
  uint uStack_168;
  uint uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  uint64_t uStack_154;
  int32_t uStack_14c;
  int32_t uStack_148;
  longlong *plStack_140;
  int32_t uStack_138;
  int8_t uStack_134;
  longlong *plStack_130;
  uint64_t uStack_128;
  longlong *plStack_120;
  uint64_t uStack_118;
  void *puStack_110;
  void *puStack_108;
  int32_t uStack_100;
  uint8_t auStack_f8 [16];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  uVar1 = (uint)(*(ushort *)(param_2 + 0x32c) >> ((byte)param_4 & 0x1f));
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  uStack_160 = 1;
  uStack_154 = 0;
  uStack_128 = 0;
  plStack_140 = (longlong *)0x0;
  uStack_138 = 0xffffffff;
  uStack_134 = 0;
  _uStack_168 = CONCAT44(uVar2,uVar2);
  _uStack_15c = CONCAT44(*(int32_t *)(param_2 + 0x324),1);
  uStack_14c = 2;
  uStack_148 = 0x100;
  plStack_120 = param_5;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))(param_5);
  }
  plStack_120 = (longlong *)0x0;
  plStack_140 = param_5;
  puStack_110 = &UNK_1809fdc18;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 9;
  strcpy_s(auStack_f8,0x10,&UNK_180a17398);
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = uStack_100;
  puVar3 = &DAT_18098bc73;
  if (puStack_108 != (void *)0x0) {
    puVar3 = puStack_108;
  }
  strcpy_s(auStack_d0,0x80,puVar3);
  FUN_1800b2450();
  puStack_e8 = &UNK_18098bcb0;
  puStack_110 = &UNK_18098bcb0;
  uStack_178 = (uint)*(byte *)((longlong)plStack_130 + 0x335);
  if ((int)*(uint *)((longlong)plStack_130 + 0x35c) <
      (int)(uint)*(byte *)((longlong)plStack_130 + 0x335)) {
    uStack_178 = *(uint *)((longlong)plStack_130 + 0x35c);
  }
  uStack_198 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    uStack_198 = *(uint *)(param_2 + 0x35c);
  }
  uStack_180 = 0;
  uStack_188 = 0;
  plStack_190 = plStack_130;
  FUN_18029e450(param_1,param_2,param_4,param_3);
  if (plStack_130 != (longlong *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1b8);
}





// 函数: void FUN_18029e910(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
void FUN_18029e910(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                  longlong param_6)

{
  byte bVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uStack_28;
  int iStack_20;
  
  bVar1 = *(byte *)(param_2 + 0x335);
  uVar2 = *(uint *)(param_2 + 0x35c);
  uVar5 = 1;
  if (1 < *(ushort *)(param_2 + 0x32e)) {
    uVar5 = (uint)*(ushort *)(param_2 + 0x32e);
  }
  lVar4 = FUN_18023a940(param_2);
  uVar3 = *(uint64_t *)(lVar4 + 8);
  uVar6 = (uint)bVar1;
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar6 = uVar2;
  }
  param_3 = uVar6 * param_4 + param_3;
  (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
            (*(longlong **)(param_1 + 0x8400),uVar3,param_3,4,0,&uStack_28);
  if (iStack_20 == param_5) {
                    // WARNING: Subroutine does not return
    memcpy(uStack_28,*(uint64_t *)(param_6 + 0x10),(longlong)(int)(uVar5 * param_5));
  }
  if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uStack_28,*(uint64_t *)(param_6 + 0x10),(longlong)param_5);
  }
  (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x78))
            (*(longlong **)(param_1 + 0x8400),uVar3,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ea30(longlong param_1,longlong param_2,int param_3,uint64_t param_4,int param_5)
void FUN_18029ea30(longlong param_1,longlong param_2,int param_3,uint64_t param_4,int param_5)

{
  longlong *plVar1;
  code *pcVar2;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_38;
  int aiStack_28 [4];
  int32_t uStack_18;
  int32_t uStack_14;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x8400);
  aiStack_28[3] = param_5 + param_3;
  uStack_38 = 0;
  aiStack_28[1] = 0;
  aiStack_28[2] = 0;
  uStack_40 = 0;
  uStack_18 = 1;
  uStack_14 = 1;
  pcVar2 = *(code **)(*plVar1 + 0x180);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  uStack_48 = param_4;
  aiStack_28[0] = param_3;
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,aiStack_28);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ead0(longlong param_1,longlong param_2,uint64_t param_3,int param_4)
void FUN_18029ead0(longlong param_1,longlong param_2,uint64_t param_3,int param_4)

{
  longlong *plVar1;
  code *pcVar2;
  uint64_t auStack_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  (*pcVar2)(plVar1,*(uint64_t *)(param_2 + 0x10),0,4,0,auStack_18);
                    // WARNING: Subroutine does not return
  memcpy(auStack_18[0],param_3,(longlong)param_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029eb90(longlong param_1,longlong param_2,int param_3,int param_4,uint64_t *param_5,
void FUN_18029eb90(longlong param_1,longlong param_2,int param_3,int param_4,uint64_t *param_5,
                  int *param_6)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  void *puVar8;
  uint uVar9;
  int8_t auStack_1f8 [32];
  int32_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  int iStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1a8;
  int iStack_1a0;
  uint uStack_198;
  uint uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  uint64_t uStack_184;
  int32_t uStack_17c;
  int32_t uStack_178;
  longlong *plStack_170;
  int32_t uStack_168;
  int8_t uStack_164;
  longlong *plStack_160;
  longlong lStack_158;
  uint64_t *puStack_150;
  uint64_t auStack_148 [2];
  uint64_t uStack_138;
  void *puStack_130;
  void *puStack_128;
  int32_t uStack_120;
  uint8_t auStack_118 [32];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  puStack_150 = param_5;
  lStack_158 = param_1;
  if (*(char *)(param_2 + 900) == '\0') {
    FUN_18023ab60(param_2,param_2,*(int32_t *)(param_2 + 0x1e8));
  }
  uVar3 = (uint)(*(ushort *)(param_2 + 0x32c) >> ((byte)param_4 & 0x1f));
  uVar9 = 1;
  if (1 < uVar3) {
    uVar9 = uVar3;
  }
  uVar4 = (uint)(*(ushort *)(param_2 + 0x32e) >> ((byte)param_4 & 0x1f));
  uVar3 = 1;
  if (1 < uVar4) {
    uVar3 = uVar4;
  }
  uStack_190 = 1;
  uStack_184 = 0;
  uStack_1a8 = 0;
  plStack_170 = (longlong *)0x0;
  uStack_168 = 0xffffffff;
  uStack_164 = 0;
  _uStack_198 = CONCAT44(uVar3,uVar9);
  _uStack_18c = CONCAT44(*(int32_t *)(param_2 + 0x324),1);
  uStack_17c = 2;
  uStack_178 = 0x100;
  puStack_130 = &UNK_18098bc80;
  puStack_128 = auStack_118;
  auStack_118[0] = 0;
  uStack_120 = 0xf;
  strcpy_s(auStack_118,0x20,&UNK_180a173f0);
  puStack_f8 = &UNK_1809fcc28;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = uStack_120;
  puVar8 = &DAT_18098bc73;
  if (puStack_128 != (void *)0x0) {
    puVar8 = puStack_128;
  }
  strcpy_s(auStack_e0,0x80,puVar8);
  FUN_1800b2450();
  puStack_f8 = &UNK_18098bcb0;
  puStack_130 = &UNK_18098bcb0;
  lVar6 = FUN_18023a940(plStack_160);
  uStack_1a8 = *(uint64_t *)(lVar6 + 8);
  uVar4 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    uVar4 = *(uint *)(param_2 + 0x35c);
  }
  iStack_1a0 = param_3 * uVar4 + param_4;
  plVar1 = *(longlong **)(param_1 + 0x8400);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  lVar6 = FUN_18023a940();
  uStack_1c8 = *(uint64_t *)(lVar6 + 8);
  uStack_1b8 = 0;
  iStack_1c0 = iStack_1a0;
  uStack_1d0 = (uint64_t *)((ulonglong)uStack_1d0._4_4_ << 0x20);
  uStack_1d8 = 0;
  (*pcVar2)(plVar1,uStack_1a8,0,0);
  uStack_1d0 = auStack_148;
  uStack_1d8 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),uStack_1a8,0,1);
  if (iVar5 < 0) {
    FUN_180220810(iVar5,&UNK_180a17400);
  }
  else {
    iVar5 = func_0x000180225d90(*(int32_t *)(param_2 + 0x324));
    iVar5 = iVar5 * uVar3 * uVar9;
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,iVar5,0x10,3);
    if (param_6 != (int *)0x0) {
      *param_6 = iVar5;
    }
    iVar5 = func_0x000180225d90(*(int32_t *)(param_2 + 0x324));
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar7,auStack_148[0],(longlong)(int)(iVar5 * uVar9));
    }
    (**(code **)(**(longlong **)(lStack_158 + 0x8400) + 0x78))
              (*(longlong **)(lStack_158 + 0x8400),uStack_1a8,0);
    *puStack_150 = uVar7;
  }
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029ef00(longlong param_1,longlong param_2)
void FUN_18029ef00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int8_t auStack_78 [32];
  int8_t auStack_58 [8];
  int32_t uStack_50;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  lVar4 = FUN_18023a940(param_2);
  plVar1 = *(longlong **)(param_1 + 0x8400);
  plVar2 = *(longlong **)(lVar4 + 8);
  pcVar3 = *(code **)(*plVar1 + 0x1b0);
  lVar4 = FUN_18023a940(param_2);
  (*pcVar3)(plVar1,*(uint64_t *)(lVar4 + 0x10));
  (**(code **)(*plVar2 + 0x50))(plVar2,auStack_58);
  *(int32_t *)(param_2 + 0x35c) = uStack_50;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_78);
}



uint64_t FUN_18029efd0(longlong param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uStackX_10;
  
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*param_2,&uStackX_10,8,0);
    while (iVar1 != 0) {
      Sleep(1);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                        (*(longlong **)(param_1 + 0x8400),*param_2,&uStackX_10,8,0);
    }
    return uStackX_10;
  }
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029f070(longlong param_1,longlong param_2)
void FUN_18029f070(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void *puVar5;
  void *puVar6;
  float fVar7;
  float fVar8;
  int8_t auStack_478 [32];
  int32_t uStack_458;
  float fStack_448;
  int32_t uStack_444;
  longlong lStack_440;
  longlong lStack_438;
  uint64_t uStack_430;
  longlong lStack_428;
  int iStack_420;
  void *puStack_418;
  int8_t *puStack_410;
  int32_t uStack_408;
  int8_t auStack_400 [264];
  int8_t auStack_2f8 [40];
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  void *puStack_298;
  int8_t *puStack_290;
  int32_t uStack_288;
  int8_t auStack_280 [264];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [264];
  ulonglong uStack_58;
  
  uStack_430 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  uStack_458 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                    (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x68),&lStack_428,
                     0x10);
  while (iVar2 != 0) {
    Sleep(1);
    uStack_458 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x68),&lStack_428,
                       0x10);
  }
  lStack_438 = 0;
  uStack_458 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                    (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x70),&lStack_438,8)
  ;
  while (iVar2 != 0) {
    Sleep(1);
    uStack_458 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x70),&lStack_438,
                       8);
  }
  lStack_440 = 0;
  uStack_458 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                    (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x78),&lStack_440,8)
  ;
  while (iVar2 != 0) {
    Sleep(1);
    uStack_458 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x78),&lStack_440,
                       8);
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uStack_458 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*(longlong *)(param_2 + 0x88),auStack_2f8,
                       0x58);
    while (iVar2 != 0) {
      Sleep(1);
      uStack_458 = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                        (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x88),
                         auStack_2f8,0x58);
    }
    puStack_298 = &UNK_1809feda8;
    puStack_290 = auStack_280;
    auStack_280[0] = 0;
    uStack_288 = *(int32_t *)(*(longlong *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(longlong *)(param_2 + 0x58) + 0x28);
    puVar5 = &DAT_18098bc73;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(auStack_280,0x100,puVar5);
    lVar3 = FUN_18029fcf0(param_1 + 0x8208,&puStack_298);
    *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + lStack_2c0;
    puStack_298 = &UNK_18098bcb0;
    puStack_178 = &UNK_1809feda8;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = *(int32_t *)(*(longlong *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(longlong *)(param_2 + 0x58) + 0x28);
    puVar5 = &DAT_18098bc73;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(auStack_160,0x100,puVar5);
    lVar3 = FUN_18029fcf0(param_1 + 0x8208,&puStack_178);
    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + lStack_2c8;
    puStack_178 = &UNK_18098bcb0;
    puStack_418 = &UNK_1809feda8;
    puStack_410 = auStack_400;
    auStack_400[0] = 0;
    uStack_408 = *(int32_t *)(*(longlong *)(param_2 + 0x58) + 0x30);
    puVar6 = *(void **)(*(longlong *)(param_2 + 0x58) + 0x28);
    puVar5 = &DAT_18098bc73;
    if (puVar6 != (void *)0x0) {
      puVar5 = puVar6;
    }
    strcpy_s(auStack_400,0x100,puVar5);
    lVar3 = FUN_18029fcf0(param_1 + 0x8208,&puStack_418);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + lStack_2d0;
    puStack_418 = &UNK_18098bcb0;
  }
  if (*(longlong *)(param_2 + 0x80) != 0) {
    uStack_458 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                      (*(longlong **)(param_1 + 0x8400),*(longlong *)(param_2 + 0x80),&fStack_448,8)
    ;
    while (iVar2 != 0) {
      Sleep(1);
      uStack_458 = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xe8))
                        (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x80),
                         &fStack_448,8);
    }
    lVar3 = CONCAT44(uStack_444,fStack_448);
    puStack_418 = &UNK_1809feda8;
    puStack_410 = auStack_400;
    auStack_400[0] = 0;
    uStack_408 = *(int32_t *)(param_2 + 0x10);
    puVar6 = &DAT_18098bc73;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_2 + 8);
    }
    strcpy_s(auStack_400,0x100,puVar6);
    plVar4 = (longlong *)FUN_18029fcf0(param_1 + 0x8208,&puStack_418);
    *plVar4 = *plVar4 + lVar3;
    puStack_418 = &UNK_18098bcb0;
  }
  if (iStack_420 == 0) {
    fVar8 = (float)(lStack_440 - lStack_438);
    if (lStack_440 - lStack_438 < 0) {
      fVar8 = fVar8 + 1.8446744e+19;
    }
    fVar7 = (float)lStack_428;
    if (lStack_428 < 0) {
      fVar7 = fVar7 + 1.8446744e+19;
    }
    fStack_448 = fVar8 / fVar7;
    sVar1 = _fdtest(&fStack_448);
    lVar3 = *(longlong *)(param_2 + 0x58);
    if (sVar1 != 2) {
      *(double *)(lVar3 + 0x40) = (double)(fVar8 / fVar7);
      goto LAB_18029f52c;
    }
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x58);
  }
  *(uint64_t *)(lVar3 + 0x40) = 0;
LAB_18029f52c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_478);
}





// 函数: void FUN_18029f560(longlong param_1,uint64_t *param_2,char param_3,char param_4)
void FUN_18029f560(longlong param_1,uint64_t *param_2,char param_3,char param_4)

{
  int *piVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  piVar1 = (int *)*param_2;
  uVar4 = 0xffffffffffffffff;
  if (piVar1 == (int *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (ulonglong)*piVar1;
  }
  if ((int *)param_2[3] == (int *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (ulonglong)*(int *)param_2[3];
  }
  if ((int *)param_2[4] == (int *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = (ulonglong)*(int *)param_2[4];
  }
  if ((int *)param_2[5] == (int *)0x0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (ulonglong)*(int *)param_2[5];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    uVar4 = (ulonglong)*(int *)param_2[1];
  }
  if (param_3 != '\0') {
    uVar7 = uVar7 | 0x1000000000000;
    uVar8 = uVar8 | 0x1000000000000;
    uVar5 = uVar5 | 0x1000000000000;
    uVar6 = uVar6 | 0x1000000000000;
    uVar4 = uVar4 | 0x1000000000000;
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x8278) != uVar7) {
    uVar2 = uVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint64_t *)(piVar1 + 6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x58))
              (*(longlong **)(param_1 + 0x8400),uVar2,0,0);
    *(ulonglong *)(param_1 + 0x8278) = uVar7;
  }
  if (*(ulonglong *)(param_1 + 0x8280) != uVar8) {
    uVar2 = uVar3;
    if (param_2[3] != 0) {
      uVar2 = *(uint64_t *)(param_2[3] + 0x18);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x1e0))
              (*(longlong **)(param_1 + 0x8400),uVar2,0,0);
    *(ulonglong *)(param_1 + 0x8280) = uVar8;
  }
  if (*(ulonglong *)(param_1 + 0x8288) != uVar5) {
    uVar2 = uVar3;
    if (param_2[4] != 0) {
      uVar2 = *(uint64_t *)(param_2[4] + 0x18);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x200))
              (*(longlong **)(param_1 + 0x8400),uVar2,0,0);
    *(ulonglong *)(param_1 + 0x8288) = uVar5;
  }
  if (*(ulonglong *)(param_1 + 0x8290) != uVar6) {
    if (param_2[5] != 0) {
      uVar3 = *(uint64_t *)(param_2[5] + 0x18);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xb8))
              (*(longlong **)(param_1 + 0x8400),uVar3,0,0);
    *(ulonglong *)(param_1 + 0x8290) = uVar6;
  }
  if (param_4 == '\0') {
    if (*(ulonglong *)(param_1 + 0x8298) != uVar4) {
      (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x48))
                (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2[1] + 0x18),0,0);
      *(ulonglong *)(param_1 + 0x8298) = uVar4;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x8298) != 0xfffffffffffffffe) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x48))(*(longlong **)(param_1 + 0x8400),0,0,0);
    *(uint64_t *)(param_1 + 0x8298) = 0xfffffffffffffffe;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029f830(longlong param_1,uint param_2,uint param_3)
void FUN_18029f830(longlong param_1,uint param_2,uint param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  uint uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint64_t *apuStack_18 [2];
  
  uVar13 = (ulonglong)param_2;
  uVar15 = (ulonglong)param_3;
  lVar14 = *(longlong *)(_DAT_180c86938 + 0x1c90);
  *(int32_t *)(lVar14 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  iVar11 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                     (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(lVar14 + 0x10),0,4,0,
                      apuStack_18);
  if (iVar11 < 0) {
    FUN_180220810(iVar11,&UNK_180a17358);
  }
  uVar6 = param_2 >> 0xe;
  lVar14 = (longlong)*(int *)(_DAT_180c86890 + 0x1538) * 0x488 + _DAT_180c86890 + 0x1a18;
  if (uVar6 != param_2 + param_3 >> 0xe) {
    if (param_3 != 0) {
      do {
        iVar11 = (int)uVar13;
        uVar5 = uVar13 >> 0xe;
        uVar13 = (ulonglong)(iVar11 + 1);
        lVar3 = *(longlong *)(lVar14 + 8 + uVar5 * 8);
        lVar12 = (ulonglong)(uint)(iVar11 + (int)uVar5 * -0x4000) * 0x40;
        uVar10 = ((uint64_t *)(lVar3 + lVar12))[1];
        *apuStack_18[0] = *(uint64_t *)(lVar3 + lVar12);
        apuStack_18[0][1] = uVar10;
        puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar12);
        uVar10 = puVar1[1];
        apuStack_18[0][2] = *puVar1;
        apuStack_18[0][3] = uVar10;
        puVar2 = (int32_t *)(lVar3 + 0x20 + lVar12);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        *(int32_t *)(apuStack_18[0] + 4) = *puVar2;
        *(int32_t *)((longlong)apuStack_18[0] + 0x24) = uVar7;
        *(int32_t *)(apuStack_18[0] + 5) = uVar8;
        *(int32_t *)((longlong)apuStack_18[0] + 0x2c) = uVar9;
        puVar1 = (uint64_t *)(lVar3 + 0x30 + lVar12);
        uVar10 = puVar1[1];
        apuStack_18[0][6] = *puVar1;
        apuStack_18[0][7] = uVar10;
        uVar15 = uVar15 - 1;
        apuStack_18[0] = apuStack_18[0] + 8;
      } while (uVar15 != 0);
    }
    plVar4 = *(longlong **)(param_1 + 0x8400);
    lVar14 = *(longlong *)(_DAT_180c86938 + 0x1c90);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x78);
    *(int32_t *)(lVar14 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
                    // WARNING: Could not recover jumptable at 0x00018029f9a3. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(plVar4,*(uint64_t *)(lVar14 + 0x10),0,UNRECOVERED_JUMPTABLE);
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(apuStack_18[0],
         *(longlong *)(lVar14 + 8 + (ulonglong)uVar6 * 8) +
         (ulonglong)(param_2 + uVar6 * -0x4000) * 0x40,uVar15 << 6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029f9b0(longlong param_1,uint64_t param_2,int param_3)
void FUN_18029f9b0(longlong param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint64_t auStack_18 [2];
  
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1c90);
  *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(lVar1 + 0x10),0,4,0,auStack_18
                    );
  if (iVar2 < 0) {
    FUN_180220810(iVar2,&UNK_180a17358);
  }
                    // WARNING: Subroutine does not return
  memcpy(auStack_18[0],param_2,(longlong)param_3 << 5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



