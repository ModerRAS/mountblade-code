#include "TaleWorlds.Native.Split.h"

// 99_part_01_part064.c - 3 个函数

// 函数: void FUN_1800e2c60(undefined8 param_1,longlong param_2)
void FUN_1800e2c60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_238 [32];
  undefined4 uStack_218;
  undefined1 auStack_208 [8];
  longlong *plStack_200;
  longlong *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong lStack_1c8;
  undefined4 uStack_1c0;
  ulonglong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  longlong *plStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  longlong **pplStack_130;
  int iStack_128;
  int iStack_124;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined4 uStack_108;
  undefined1 auStack_104 [8];
  ulonglong uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *plStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  pplStack_130 = &plStack_98;
  plStack_98 = (longlong *)&UNK_1809fcc58;
  puStack_90 = auStack_80;
  uStack_88 = 0;
  auStack_80[0] = 0;
  FUN_180049bf0(&plStack_98,&UNK_180a04600);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&plStack_98);
  lVar3 = _DAT_180c86938;
  plVar1 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x9718) + 0x48);
  plVar5 = *(longlong **)(lVar2 + 0x1d8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    if (*plVar5 != 0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar5,1);
      lVar3 = _DAT_180c86938;
    }
  }
  plVar1[0x1077] = (longlong)plVar5;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(lVar3 + 0x1cd8),1);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x9718) + 0x48);
  fStack_b0 = (float)*(ushort *)(lVar2 + 0x32c);
  uStack_ac = (float)*(ushort *)(lVar2 + 0x32e);
  iVar4 = (int)uStack_ac;
  iVar6 = (int)fStack_b0;
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  plVar1 = *(longlong **)(lVar2 + 0x8400);
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&uStack_b8);
  pplStack_130 = (longlong **)0x0;
  plVar1 = *(longlong **)(lVar2 + 0x8400);
  iStack_128 = iVar6;
  iStack_124 = iVar4;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_130);
  puStack_118 = &UNK_1809fcc58;
  puStack_110 = auStack_104 + 4;
  auStack_104[4] = 0;
  uStack_108 = 0x12;
  strcpy_s(auStack_104 + 4,0x40,&UNK_180a04640);
  FUN_1800b4910(_DAT_180c86930,&plStack_200,&puStack_118);
  puStack_118 = &UNK_18098bcb0;
  uStack_b8 = 0;
  fStack_b0 = 0.0;
  uStack_ac._0_2_ = 4;
  plStack_1d8 = (longlong *)0x0;
  plStack_1d0 = (longlong *)&UNK_180a3c3e0;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  uStack_1c0 = 0;
  plStack_1a0 = (longlong *)0x0;
  plStack_1f8 = plStack_200;
  uStack_1f0 = 0;
  uStack_1e0 = 2;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  lVar2 = plStack_200[0x2b7];
  pplStack_130 = &plStack_190;
  plStack_190 = plStack_200;
  uStack_1e8._4_4_ = (undefined4)(CONCAT26(uStack_ac._2_2_,0x400000000) >> 0x20);
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = uStack_1e8._4_4_;
  uStack_178 = 2;
  uStack_170 = 0;
  uStack_1e8 = CONCAT26(uStack_ac._2_2_,0x400000000);
  FUN_180627ae0(auStack_168,&plStack_1d0);
  uStack_148 = (undefined4)uStack_1b0;
  uStack_144 = uStack_1b0._4_4_;
  uStack_140 = (undefined4)uStack_1a8;
  uStack_13c = uStack_1a8._4_4_;
  plStack_138 = plStack_1a0;
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x28))();
  }
  puStack_118 = (undefined *)FUN_180299eb0(lVar2,param_2,&plStack_190,auStack_208);
  uStack_108 = 0xff;
  auStack_104 = (undefined1  [8])0x4000300;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  uStack_e0 = 0x400;
  puStack_110 = (undefined1 *)0xff00000001060101;
  uStack_dc = 1;
  uStack_fc = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x9718) + 0x48) + 0x324);
  uStack_218 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,
                *(undefined8 *)(*(longlong *)(param_2 + 0x9718) + 0x40),0x10);
  uStack_218 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,
                *(undefined8 *)(*(longlong *)(param_2 + 0x9718) + 0x38));
  FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
  FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_118);
  lVar2 = _DAT_180c86938;
  lVar3 = strnlen(&UNK_180a04600,0x3f);
  strncpy(lVar2 + 0x1ce0,&UNK_180a04600,lVar3);
  *(undefined1 *)(lVar3 + 0x1ce0 + lVar2) = 0;
  FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  pplStack_130 = &plStack_1d0;
  plStack_1d0 = (longlong *)&UNK_180a3c3e0;
  if (lStack_1c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1c8 = 0;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  plStack_1d0 = (longlong *)&UNK_18098bcb0;
  if (plStack_1d8 != (longlong *)0x0) {
    (**(code **)(*plStack_1d8 + 0x38))();
  }
  if (plStack_200 != (longlong *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  FUN_1802c2ac0(&plStack_98);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e31a0(undefined8 param_1,longlong *param_2,longlong **param_3)
void FUN_1800e31a0(undefined8 param_1,longlong *param_2,longlong **param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_2b8 [32];
  code *pcStack_298;
  undefined1 *puStack_290;
  longlong *plStack_288;
  longlong **pplStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  undefined8 uStack_260;
  longlong *plStack_258;
  longlong lStack_250;
  undefined4 uStack_248;
  undefined2 uStack_244;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined4 uStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  longlong alStack_208 [14];
  undefined1 auStack_198 [336];
  ulonglong uStack_48;
  
  uStack_260 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  lVar4 = *param_2;
  plVar2 = param_3[3];
  pplStack_280 = param_3;
  plStack_258 = param_2;
  if (plVar2 != (longlong *)0x0) {
    if ((((*(char *)(lVar4 + 0x15) == '\x01') &&
         (*(char *)((longlong)plVar2 + 0x181) == *(char *)(lVar4 + 0x14))) &&
        (*(int *)((longlong)plVar2 + 0x184) == *(int *)(lVar4 + 0x10))) &&
       ((char)plVar2[0x30] == '\x01')) {
      lStack_250 = 0x101010101010101;
      uStack_248 = 0x1010101;
      uStack_244 = 0x101;
      pcStack_298 = FUN_180045af0;
      FUN_1808fc838(auStack_218,8,0x10,&SUB_18005d5f0);
      puStack_290 = auStack_198;
      FUN_180206da0();
      plVar2 = alStack_208;
      plStack_288 = (longlong *)(0x40 - (longlong)alStack_208);
      lStack_278 = 0x30 - (longlong)alStack_208;
      lStack_268 = 0x48 - (longlong)alStack_208;
      lStack_270 = 0x38 - (longlong)alStack_208;
      plVar3 = alStack_208;
      lStack_250 = 0x50 - (longlong)plVar3;
      lVar4 = 2;
      do {
        if (plVar2[-2] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)
                   ((longlong)plVar3 + (0x18 - (longlong)alStack_208) + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[-2] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[-1] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)
                   ((longlong)plVar3 + (0x20 - (longlong)alStack_208) + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[-1] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (*plVar2 != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)
                   ((longlong)plVar3 + (longlong)plVar2 + (0x28 - (longlong)alStack_208));
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(*plVar2 + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[1] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)((longlong)plVar3 + lStack_278 + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[1] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[2] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)((longlong)plVar3 + lStack_270 + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[2] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[3] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)((longlong)plVar3 + (longlong)plStack_288 + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[3] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[4] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)((longlong)plVar3 + lStack_268 + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[4] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        if (plVar2[5] != 0) {
          plVar3 = (longlong *)*param_2;
          lVar1 = *(longlong *)((longlong)plVar3 + lStack_250 + (longlong)plVar2);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(undefined8 *)(plVar2[5] + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   (longlong)*(int *)(lVar1 + 0x1c));
          }
        }
        plVar2 = plVar2 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      FUN_180207110(plVar3,pplStack_280[3],auStack_218);
      FUN_1808fc8a8(auStack_218,8,0x10,FUN_180045af0);
      goto LAB_1800e353e;
    }
    FUN_180205470();
  }
  puStack_240 = &UNK_1809fdc18;
  puStack_238 = auStack_228;
  auStack_228[0] = 0;
  uStack_230 = 0;
  strcpy_s(auStack_228,0x10,&DAT_18098bc73);
  pplStack_280 = &plStack_288;
  plStack_288 = (longlong *)*param_2;
  if (plStack_288 != (longlong *)0x0) {
    (**(code **)(*plStack_288 + 0x28))();
  }
  plVar2 = (longlong *)FUN_180204f70();
  param_3[3] = plVar2;
  puStack_240 = &UNK_18098bcb0;
LAB_1800e353e:
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e3580(undefined8 param_1,longlong *param_2,longlong param_3)
void FUN_1800e3580(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined **ppuStack_78;
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong **pplStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  piVar2 = *(int **)(param_3 + 0x18);
  plStack_58 = param_2;
  if (piVar2 != (int *)0x0) {
    if ((((*(char *)(lVar1 + 0x18) == '\x01') && ((char)piVar2[8] == '\x01')) &&
        (*piVar2 == *(int *)(lVar1 + 0x10))) &&
       ((bool)(*(byte *)(piVar2 + 1) & 1) == (*(int *)(lVar1 + 0x14) == 4))) {
      plStack_68 = (longlong *)0x0;
      ppuStack_78 = &puStack_48;
      FUN_1802072b0(*(byte *)(piVar2 + 1) & 1,*(undefined8 *)(param_3 + 0x18),&plStack_68);
                    // WARNING: Subroutine does not return
      memcpy(plStack_68[2],*(undefined8 *)(*(longlong *)(*param_2 + 0x20) + 0x10),
             (longlong)*(int *)(*(longlong *)(*param_2 + 0x20) + 0x1c));
    }
    FUN_180206cb0();
  }
  puStack_48 = &UNK_1809fdc18;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 0xc;
  strcpy_s(auStack_30,0x10,&UNK_180a04630);
  pplStack_50 = &plStack_68;
  plStack_68 = (longlong *)*param_2;
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  uVar3 = FUN_180206950();
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  puStack_48 = &UNK_18098bcb0;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




