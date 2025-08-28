#include "TaleWorlds.Native.Split.h"

// 99_part_03_part082.c - 2 个函数

// 函数: void FUN_180247f60(longlong param_1)
void FUN_180247f60(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t auStack_108 [32];
  int iStack_e8;
  int iStack_e0;
  int8_t auStack_d8 [8];
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  uint64_t uStack_b0;
  void **ppuStack_a8;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  FUN_1802c22a0(auStack_d8,&UNK_180a146f8);
  ppuStack_a8 = &puStack_98;
  iVar5 = 0;
  puStack_98 = &UNK_1809fcc58;
  puStack_90 = auStack_80;
  uStack_88 = 0;
  auStack_80[0] = 0;
  FUN_180049bf0(&puStack_98,&UNK_180a146f8);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_98);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x1b0) + 0x332);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1b0) + 0x335);
  uStack_d0 = 0;
  uStack_c8 = 0;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x1a0),1,*(int32_t *)(param_1 + 0x1bd4),&uStack_d0);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&uStack_d0,0,0);
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x1a8),1,*(int32_t *)(param_1 + 0x1bd4),&uStack_d0);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&uStack_d0,0,0);
  }
  iVar3 = iVar5;
  if (bVar1 != 0) {
    do {
      uVar6 = (uint)uVar2;
      iVar4 = iVar5;
      if (uVar2 != 0) {
        do {
          iStack_e8 = iVar3;
          iStack_e0 = iVar4;
          FUN_1802481a0(param_1,*(uint64_t *)(param_1 + 0x1a0),*(uint64_t *)(param_1 + 0x1a8),
                        *(uint64_t *)(param_1 + 0x1b0));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
      iVar4 = iVar5;
      if (uVar6 != 0) {
        do {
          iStack_e8 = iVar3;
          iStack_e0 = iVar4;
          FUN_1802481a0(param_1,*(uint64_t *)(param_1 + 0x188),*(uint64_t *)(param_1 + 400),
                        *(uint64_t *)(param_1 + 0x198));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)bVar1);
  }
  FUN_1802c2ac0(&puStack_98);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802481a0(longlong **param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
void FUN_1802481a0(longlong **param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,int param_6)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  int8_t auStack_248 [32];
  int32_t uStack_228;
  int8_t auStack_218 [4];
  int iStack_214;
  longlong *plStack_210;
  uint64_t uStack_208;
  int8_t uStack_200;
  int16_t uStack_1ff;
  int8_t uStack_1fd;
  int32_t uStack_1fc;
  int32_t uStack_1f8;
  uint64_t uStack_1f4;
  ulonglong uStack_1ec;
  uint64_t uStack_1e4;
  uint64_t uStack_1dc;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  longlong *plStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  int32_t uStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  longlong lStack_198;
  int32_t uStack_190;
  ulonglong uStack_188;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  longlong *plStack_170;
  uint64_t uStack_168;
  longlong *plStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [32];
  uint64_t uStack_118;
  uint64_t uStack_110;
  longlong *plStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  longlong **pplStack_e8;
  int iStack_e0;
  int iStack_dc;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  ulonglong uStack_78;
  
  lVar4 = _DAT_180c86938;
  uStack_168 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  iStack_214 = param_5;
  plVar1 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  pplStack_e8 = param_1;
  if (*(longlong *)(param_4 + 0x1d8) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(param_4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    plVar5 = (longlong *)
             ((longlong)(int)((uint)*(byte *)(param_4 + 0x335) * param_6 + param_5) * 0x10 +
             *(longlong *)(param_4 + 0x1d8));
    if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar5,1);
      lVar4 = _DAT_180c86938;
    }
  }
  plVar1[0x1077] = (longlong)plVar5;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),1);
  lVar4 = _DAT_180c86938;
  *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1ce0) =
       *(int32_t *)(pplStack_e8 + 0x30);
  fStack_f8 = (float)(0x80 >> ((byte)param_5 & 0x1f));
  fVar14 = 1.0;
  fVar8 = 1.0 / fStack_f8;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1be0) = fVar8 * 0.5;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1be4) = fVar8 * 0.5;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1be8) = fVar8;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1bec) = fVar8;
  iVar6 = (int)fStack_f8;
  lVar4 = *(longlong *)(lVar4 + 0x1cd8);
  fVar8 = 0.0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  plVar1 = *(longlong **)(lVar4 + 0x8400);
  uStack_f4 = fStack_f8;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&uStack_100);
  pplStack_e8 = (longlong **)0x0;
  plVar1 = *(longlong **)(lVar4 + 0x8400);
  iStack_e0 = iVar6;
  iStack_dc = iVar6;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_e8);
  lVar4 = _DAT_180c86938;
  switch(param_6) {
  case 0:
    uVar7 = 0x3f800000;
    fVar9 = 1.0;
    fVar11 = 1.0;
    uVar12 = 0;
    fVar10 = -1.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = 0.0;
    fVar8 = -1.0;
    break;
  case 1:
    uVar7 = 0xbf800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0;
    fVar10 = 1.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = 0.0;
    fVar8 = -1.0;
    break;
  case 2:
    uVar7 = 0xbf800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    break;
  case 3:
    uVar7 = 0xbf800000;
    fVar9 = 1.0;
    fVar11 = -1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar14 = fVar11;
    break;
  case 4:
    uVar7 = 0xbf800000;
    fVar9 = 1.0;
    fVar11 = 1.0;
    uVar12 = 0x3f800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar8 = -1.0;
    fVar14 = 0.0;
    break;
  case 5:
    uVar7 = 0x3f800000;
    fVar9 = -1.0;
    fVar11 = 1.0;
    uVar12 = 0xbf800000;
    fVar10 = 0.0;
    fVar13 = 0.0;
    uVar15 = 0;
    fVar8 = -1.0;
    fVar14 = 0.0;
    break;
  default:
    fVar9 = uStack_100._4_4_;
    fVar11 = fStack_f8;
    uVar12 = (int32_t)uStack_100;
    fVar13 = fStack_f8;
    fVar8 = fStack_f8;
    fVar14 = uStack_100._4_4_;
    uVar15 = (int32_t)uStack_100;
    uVar7 = (int32_t)uStack_100;
    fVar10 = uStack_100._4_4_;
  }
  *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1bf0) = uVar7;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1bf4) = fVar9;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1bf8) = fVar11;
  *(int32_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1bfc) = 0x3f800000;
  *(int32_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c10) = uVar12;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c14) = fVar10;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c18) = fVar13;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c1c) = (float)iStack_214;
  *(int32_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c20) = uVar15;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c24) = fVar14;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c28) = fVar8;
  *(int32_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1c2c) = 0x3f800000;
  FUN_18029fc10(*(longlong *)(lVar4 + 0x1cd8),*(uint64_t *)(lVar4 + 0x1c88),
                *(longlong *)(lVar4 + 0x1cd8) + 0x1be0,0x230);
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xd;
  strcpy_s(auStack_c0,0x40,&UNK_180a03628);
  FUN_1800b4910(_DAT_180c86930,&plStack_210,&puStack_d8);
  puStack_d8 = &UNK_18098bcb0;
  uStack_100 = 0;
  fStack_f8 = 0.0;
  uStack_f4._0_2_ = 4;
  plStack_1a8 = (longlong *)0x0;
  plStack_1a0 = (longlong *)&UNK_180a3c3e0;
  uStack_188 = 0;
  lStack_198 = 0;
  uStack_190 = 0;
  plStack_170 = (longlong *)0x0;
  plStack_1c8 = plStack_210;
  uStack_1b8 = CONCAT26(uStack_f4._2_2_,0x400000000);
  uStack_1c0 = 0;
  uStack_1b0 = 2;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  lVar4 = plStack_210[0x2b7];
  pplStack_e8 = &plStack_160;
  plStack_160 = plStack_210;
  uStack_158 = 0;
  uStack_148 = 2;
  uStack_140 = 0;
  uStack_150 = uStack_1b8;
  FUN_180627ae0(auStack_138,&plStack_1a0);
  uStack_118 = CONCAT44(uStack_17c,uStack_180);
  uStack_110 = CONCAT44(uStack_174,uStack_178);
  plStack_108 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x28))();
  }
  uStack_208 = FUN_180299eb0(lVar4,0,&plStack_160,auStack_218);
  uStack_1ff = 0x601;
  uStack_1fc = 0xff000000;
  uStack_1f8 = 0xff;
  uStack_1e4 = 0;
  uStack_1dc = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0x400;
  uStack_1f4 = 0x4000300;
  uStack_200 = 1;
  uStack_1fd = 1;
  uStack_1cc = 1;
  uStack_1ec = (ulonglong)*(uint *)(param_4 + 0x324);
  uVar2 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  if (*(char *)(param_2 + 900) == '\0') {
    param_2 = FUN_1800bde30();
  }
  uStack_228 = 0xffffffff;
  FUN_18029d150(uVar2,5,param_2);
  uVar2 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  if (*(char *)(param_3 + 900) == '\0') {
    param_3 = FUN_1800bde30();
  }
  uStack_228 = 0xffffffff;
  FUN_18029d150(uVar2,0x1e,param_3);
  FUN_18029d000(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),4);
  FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),&uStack_208);
  lVar4 = _DAT_180c86938;
  lVar3 = strnlen(&UNK_180a146c0,0x3f);
  strncpy(lVar4 + 0x1ce0,&UNK_180a146c0,lVar3);
  *(int8_t *)(lVar3 + 0x1ce0 + lVar4) = 0;
  FUN_18029e110(*(uint64_t *)(_DAT_180c86938 + 0x1cd8));
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  pplStack_e8 = &plStack_1a0;
  plStack_1a0 = (longlong *)&UNK_180a3c3e0;
  if (lStack_198 == 0) {
    lStack_198 = 0;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    plStack_1a0 = (longlong *)&UNK_18098bcb0;
    if (plStack_1a8 != (longlong *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_248);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




