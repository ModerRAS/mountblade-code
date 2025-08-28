#include "TaleWorlds.Native.Split.h"

// 99_part_06_part080.c - 8 个函数

// 函数: void FUN_1803f7e50(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
void FUN_1803f7e50(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *plStackX_8;
  undefined8 uStackX_10;
  longlong *plStackX_18;
  
  plVar1 = *(longlong **)(param_1 + 0x460);
  uStackX_10 = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar7 = *(longlong **)(param_1 + 0x1a0);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_1800bdc80();
    plStackX_8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    pplVar8 = &plStackX_8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    plStackX_18 = plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    pplVar8 = &plStackX_18;
    bVar4 = true;
    bVar3 = false;
  }
  *pplVar8 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x460);
  *(longlong **)(param_1 + 0x460) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if ((bVar3) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((bVar4) && (plStackX_18 != (longlong *)0x0)) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  bVar4 = false;
  bVar3 = false;
  if (plVar1 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_1800bd5c0();
    plStackX_8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    pplVar8 = &plStackX_8;
    bVar3 = true;
  }
  else {
    plStackX_18 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    pplVar8 = &plStackX_18;
    bVar4 = true;
    plVar7 = plVar1;
  }
  *pplVar8 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x1a8);
  *(longlong **)(param_1 + 0x1a8) = plVar7;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if ((bVar3) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if ((bVar4) && (plStackX_18 != (longlong *)0x0)) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  iVar6 = *(int *)(param_1 + 0x474);
  if (iVar6 == 1) {
    *(undefined4 *)(param_1 + 0x474) = 2;
    iVar6 = 2;
  }
  lVar5 = _DAT_180c868d0;
  if ((*(char *)(_DAT_180c868d0 + 0x480) == '\0') &&
     (((0.7 < *(float *)(_DAT_180c868d0 + 0x46c) || *(float *)(_DAT_180c868d0 + 0x46c) == 0.7 ||
       ((*(byte *)(_DAT_180c868d0 + 0x47c) & 1) != 0)) && (iVar6 == 0)))) {
    *(undefined4 *)(param_1 + 0x474) = 1;
    iVar6 = 1;
  }
  if ((*(char *)(lVar5 + 0x498) == '\0') &&
     ((0.7 < *(float *)(lVar5 + 0x484) || *(float *)(lVar5 + 0x484) == 0.7 ||
      ((*(byte *)(lVar5 + 0x494) & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0x474) = 0;
    iVar6 = 0;
  }
  lVar5 = _DAT_180c86938;
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1c90) = (float)iVar6 + 0.2;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1cd8) + 0x1c80) = *(undefined4 *)(param_3 + 0x12c00);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1cd8) + 0x1c84) = *(undefined4 *)(param_3 + 0x12c04);
  FUN_1801f6650(param_1,uStackX_10,param_3,param_4,param_5);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



undefined8 *
FUN_1803f8100(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a26480;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x460,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8150(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
void FUN_1803f8150(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  iVar5 = (int)param_1[0x8b];
  lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  uStack_48 = 0x3f5555553e2aaaab;
  uStack_40 = 0x3f2aaaab3f000000;
  uStack_38 = 0x3eaaaaab;
  uStack_34 = 0;
  uStack_58 = 0;
  *(undefined4 *)(lVar6 + 0x1c88) =
       *(undefined4 *)
        ((longlong)&uStack_48 +
        (longlong)
        (iVar5 + (iVar5 / 6 + (iVar5 >> 0x1f) +
                 (int)(((longlong)iVar5 / 6 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -6) * 4);
  fVar7 = 1.0 / *(float *)(param_3 + 0x12a54);
  fVar1 = *(float *)(param_3 + 0x12a40);
  fVar2 = *(float *)(param_3 + 0x11c24);
  fVar3 = *(float *)(param_3 + 0x12a60);
  uStack_60 = param_5;
  fVar4 = *(float *)(param_3 + 0x12a64);
  *(float *)(lVar6 + 0x1cd0) = 2.0 / ((float)(int)*(float *)(param_3 + 0x11c20) * fVar1);
  *(float *)(lVar6 + 0x1cd4) = (fVar7 * -2.0) / (float)(int)fVar2;
  *(float *)(lVar6 + 0x1cd8) = (0.1 / fVar1) * fVar3 - 1.0 / fVar1;
  *(float *)(lVar6 + 0x1cdc) = fVar7 - fVar7 * 0.1 * fVar4;
  *(int *)(param_1 + 0x8b) = (int)param_1[0x8b] + 1;
  uStack_68 = param_4;
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],*(undefined4 *)((longlong)param_1 + 0x454));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_88);
}



undefined8 *
FUN_1803f82e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a26420;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x458,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8330(longlong *param_1,longlong param_2)
void FUN_1803f8330(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_158 [32];
  undefined4 uStack_138;
  longlong *plStack_128;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined2 uStack_fc;
  char cStack_fa;
  undefined2 uStack_f9;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined2 uStack_f5;
  uint uStack_f0;
  undefined1 uStack_ec;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  FUN_1801f9270();
  puStack_d8 = &UNK_1809fcc28;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = *(uint *)(param_1 + 4);
  puVar7 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar7 = (undefined *)param_1[3];
  }
  strcpy_s(auStack_c0,0x80,puVar7);
  uVar5 = (ulonglong)uStack_c8;
  uVar6 = uStack_c8 + 1;
  if (uVar6 < 0x7f) {
    *(undefined2 *)(puStack_d0 + uVar5) = 0x5f;
    uVar5 = (ulonglong)uVar6;
    uStack_c8 = uVar6;
  }
  puVar7 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x3528) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_2 + 0x3528);
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (puVar7[lVar2] != '\0');
  iVar4 = (int)lVar2;
  if ((0 < iVar4) && ((uint)((int)uVar5 + iVar4) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_d0 + uVar5,puVar7,(longlong)(iVar4 + 1));
  }
  if (*(char *)((longlong)param_1 + 0x4d) == '\0') {
    iVar4 = (int)param_1[0x37];
    if (iVar4 == -1) {
      uStack_118 = 1;
      uStack_114 = 1;
      uStack_fc = 0x100;
      uStack_f9 = 0;
      uStack_f5 = 0;
      uStack_ec = 0;
      uStack_110 = (undefined4)param_1[0xe];
      cStack_fa = (char)param_1[10];
      uStack_f6 = cStack_fa == '\0';
      uStack_f7 = 1;
      uStack_10c = 0;
      uStack_104 = 0;
      uStack_f0 = *(uint *)(param_2 + 0x1bd4);
      if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
        iStack_120 = (int)(longlong)(double)param_1[0xb];
        iStack_11c = (int)(longlong)(double)param_1[0xc];
        if (param_1[0x85] != 0) goto LAB_1803f8744;
        (**(code **)(*param_1 + 8))(param_1,&iStack_120,param_2);
        uVar3 = FUN_1800b1230(_DAT_180c86930,&plStack_128,&puStack_d8,&iStack_120);
        FUN_180060b80(param_1 + 0x85,uVar3);
      }
      else {
        auVar8._0_4_ = (float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3590);
        iVar4 = (int)auVar8._0_4_;
        uVar6 = uStack_f0;
        if (auVar8._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar9._4_4_ = auVar8._0_4_;
            auVar9._0_4_ = auVar8._0_4_;
            auVar9._8_8_ = 0;
            uVar6 = movmskps(uStack_f0,auVar9);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar8._4_4_ = auVar8._0_4_;
            auVar8._8_8_ = 0;
            uVar6 = movmskps(uStack_f0,auVar8);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ + 1e-08;
        }
        iStack_120 = (int)auVar8._0_4_;
        auVar10._0_4_ = (float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x3594);
        iVar4 = (int)auVar10._0_4_;
        if (auVar10._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar11._4_4_ = auVar10._0_4_;
            auVar11._0_4_ = auVar10._0_4_;
            auVar11._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar11);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar10._4_4_ = auVar10._0_4_;
            auVar10._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar10);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ + 1e-08;
        }
        iStack_11c = (int)auVar10._0_4_;
        if (iStack_120 < 1) {
          iStack_120 = 1;
        }
        if (iStack_11c < 1) {
          iStack_11c = 1;
        }
        (**(code **)(*param_1 + 8))(param_1,&iStack_120,param_2);
        uVar3 = FUN_1800b1230(_DAT_180c86930,&plStack_128,&puStack_d8,&iStack_120);
        FUN_180060b80(param_1 + 0x85,uVar3);
      }
    }
    else {
      if (iVar4 == -3) {
        if (((int)param_1[0x3b] == 9) && (iVar4 = strcmp(param_1[0x3a],&UNK_180a0e648), iVar4 == 0))
        {
          uVar3 = FUN_180244ff0(param_2);
          FUN_180056f10(param_1 + 0x85,uVar3);
        }
        else {
          puVar7 = &DAT_18098bc73;
          if ((undefined *)param_1[3] != (undefined *)0x0) {
            puVar7 = (undefined *)param_1[3];
          }
          FUN_180626f80(&UNK_180a0ec50,puVar7);
        }
        goto LAB_1803f8744;
      }
      if (iVar4 != -2) goto LAB_1803f8744;
      uStack_138 = *(undefined4 *)(param_2 + 0x1bd4);
      uVar3 = FUN_1801f9aa0(uVar5,&plStack_128,param_1,param_1 + 0x39);
      FUN_180060b80(param_1 + 0x85,uVar3);
    }
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x9690);
    if (plVar1 != (longlong *)0x0) {
      plStack_128 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStack_128 = (longlong *)param_1[0x85];
    param_1[0x85] = (longlong)plVar1;
  }
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
LAB_1803f8744:
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}






// 函数: void FUN_1803f8770(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_1803f8770(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_1801f9270(param_1,param_3);
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8790(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1803f8790(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_1a8 [32];
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined *puStack_e0;
  uint uStack_d8;
  undefined auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xc;
  strcpy_s(auStack_d0,0x80,&DAT_180a0eb68);
  puVar3 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar3 = (undefined *)param_1[3];
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (puVar3[lVar2] != '\0');
  iVar1 = (int)lVar2;
  if ((0 < iVar1) && (uStack_d8 + iVar1 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uStack_d8,puVar3,(longlong)(iVar1 + 1));
  }
  puVar3 = &DAT_18098bc73;
  if (puStack_e0 != (undefined *)0x0) {
    puVar3 = puStack_e0;
  }
  FUN_1802c22a0(auStack_168,puVar3);
  puVar3 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar3 = (undefined *)param_1[3];
  }
  ppuStack_158 = &puStack_148;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  uStack_138 = 0;
  auStack_130[0] = 0;
  if (puVar3 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_148,puVar3);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_148);
  }
  if ((int)param_1[9] < 1) {
    uStack_178 = 0;
    uStack_180 = param_5;
    uStack_188 = param_4;
    (**(code **)(*param_1 + 0x50))
              (param_1,param_3,(int)param_1[0x8a],*(undefined4 *)((longlong)param_1 + 0x454));
    FUN_18029ef00(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),param_1[0x85]);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_148);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
}






// 函数: void FUN_1803f89a0(longlong param_1)
void FUN_1803f89a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x74 + (longlong)*(int *)(param_1 + 0x474) * 4) = 0xffffffe8;
  lVar1 = param_1 + (longlong)*(int *)(param_1 + 0x474) * 8;
  plVar2 = *(longlong **)(param_1 + (longlong)*(int *)(param_1 + 0x470) * 8 + 0x458);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(lVar1 + 0x138);
  *(longlong **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x458 + (longlong)(1 - *(int *)(param_1 + 0x470)) * 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x428);
  *(longlong **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x470) = 1 - *(int *)(param_1 + 0x470);
  return;
}



undefined8 * FUN_1803f8a80(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1801fa180();
  *param_1 = &UNK_180a0ef58;
  *(undefined4 *)(param_1 + 0x8a) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x454) = param_3;
  *param_1 = &UNK_180a263c0;
  FUN_1808fc838(param_1 + 0x8b,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 4;
  plVar1 = (longlong *)param_1[0x8c];
  param_1[0x8c] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x8c];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0x8b];
  param_1[0x8b] = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



undefined8 * FUN_1803f8b80(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a263c0;
  if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8d] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x8b,8,2,FUN_180045af0,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x478);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803f8c10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x478,8,3,0xfffffffffffffffe);
  lVar4 = FUN_1803f8a80(uVar3,*(undefined4 *)(param_1 + 0x450),*(undefined4 *)(param_1 + 0x454));
  FUN_1801f8ea0(lVar4,param_1);
  *(undefined4 *)(lVar4 + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(lVar4 + 0x454) = *(undefined4 *)(param_1 + 0x454);
  plVar6 = (longlong *)(lVar4 + 0x458);
  lVar5 = 2;
  do {
    plVar1 = *(longlong **)((param_1 - lVar4) + (longlong)plVar6);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar6;
    *plVar6 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar6 = *(longlong **)(param_1 + 0x468);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar1 = *(longlong **)(lVar4 + 0x468);
  *(longlong **)(lVar4 + 0x468) = plVar6;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined4 *)(lVar4 + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(lVar4 + 0x474) = *(undefined4 *)(param_1 + 0x474);
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8d50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1803f8d50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *plStackX_8;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar1 = (longlong *)param_1[0x8d];
  plStack_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar5 = (longlong *)param_1[0x29];
  if (plVar5 != (longlong *)0x0) {
    plStackX_8 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStackX_8 = (longlong *)param_1[0x8d];
  param_1[0x8d] = (longlong)plVar5;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffe8;
  if (plVar1 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_1800bdc80();
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplVar6 = &plStackX_8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    plStack_50 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    pplVar6 = &plStack_50;
    bVar3 = true;
    bVar2 = false;
    plVar5 = plVar1;
  }
  *pplVar6 = (longlong *)0x0;
  plStack_48 = (longlong *)param_1[0x31];
  param_1[0x31] = (longlong)plVar5;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (bVar2) {
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if (bVar3) {
    if (plStack_50 != (longlong *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
  }
  lVar4 = _DAT_180c86938;
  *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83d8) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83e0) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83e8) = 0;
  *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(lVar4 + 0x1cd8),7);
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],(int)param_1[0x8a],param_4,param_5,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8f80(longlong *param_1,longlong param_2)
void FUN_1803f8f80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_1f8 [32];
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined2 uStack_19c;
  undefined1 uStack_19a;
  undefined4 uStack_199;
  undefined2 uStack_195;
  uint uStack_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [136];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  FUN_1801f9270();
  uStack_1b8 = 1;
  uStack_1b4 = 1;
  uStack_1ac = 0;
  uStack_1a4 = 0x3f80000000000000;
  uStack_19c = 0x100;
  uStack_199 = 0;
  uStack_195 = 0;
  uStack_18c = 0;
  uStack_1b0 = (undefined4)param_1[0xe];
  uStack_19a = 1;
  uStack_190 = *(uint *)(param_2 + 0x1bd4);
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    iStack_1c0 = (int)(longlong)(double)param_1[0xb];
    iStack_1bc = (int)(longlong)(double)param_1[0xc];
    if (param_1[0x8b] == 0) {
      puStack_d8 = &UNK_1809fcc28;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0xe;
      strcpy_s(auStack_c0,0x80,&UNK_180a26270);
      plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_d8,&iStack_1c0);
      lVar1 = *plVar3;
      *plVar3 = 0;
      plStack_1d8 = (longlong *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1d8 != (longlong *)0x0) {
        (**(code **)(*plStack_1d8 + 0x38))();
      }
      if (plStack_1c8 != (longlong *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      puStack_d8 = &UNK_18098bcb0;
    }
    if (param_1[0x8c] == 0) {
      puStack_178 = &UNK_1809fcc28;
      puStack_170 = auStack_160;
      auStack_160[0] = 0;
      uStack_168 = 0xe;
      strcpy_s(auStack_160,0x80,&UNK_180a26280);
      plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1d0,&puStack_178,&iStack_1c0);
      lVar1 = *plVar3;
      *plVar3 = 0;
      plStack_1d8 = (longlong *)param_1[0x8c];
      param_1[0x8c] = lVar1;
      if (plStack_1d8 != (longlong *)0x0) {
        (**(code **)(*plStack_1d8 + 0x38))();
      }
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      puStack_178 = &UNK_18098bcb0;
    }
  }
  else {
    auVar5._0_4_ = (float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3590);
    iVar4 = (int)auVar5._0_4_;
    uVar2 = uStack_190;
    if (auVar5._0_4_ <= 0.0) {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar5._0_4_)) {
        auVar6._4_4_ = auVar5._0_4_;
        auVar6._0_4_ = auVar5._0_4_;
        auVar6._8_8_ = 0;
        uVar2 = movmskps(uStack_190,auVar6);
        uVar2 = uVar2 & 1 ^ 1;
        auVar5._0_4_ = (float)(int)(iVar4 + uVar2);
      }
      auVar5._0_4_ = auVar5._0_4_ - 1e-08;
    }
    else {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar5._0_4_)) {
        auVar5._4_4_ = auVar5._0_4_;
        auVar5._8_8_ = 0;
        uVar2 = movmskps(uStack_190,auVar5);
        uVar2 = uVar2 & 1 ^ 1;
        auVar5._0_4_ = (float)(int)(iVar4 + uVar2);
      }
      auVar5._0_4_ = auVar5._0_4_ + 1e-08;
    }
    auVar7._0_4_ = (float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x3594);
    iVar4 = (int)auVar7._0_4_;
    if (auVar7._0_4_ <= 0.0) {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
        auVar8._4_4_ = auVar7._0_4_;
        auVar8._0_4_ = auVar7._0_4_;
        auVar8._8_8_ = 0;
        uVar2 = movmskps(uVar2,auVar8);
        auVar7._0_4_ = (float)(int)(iVar4 + (uVar2 & 1 ^ 1));
      }
      auVar7._0_4_ = auVar7._0_4_ - 1e-08;
    }
    else {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_8_ = 0;
        uVar2 = movmskps(uVar2,auVar7);
        auVar7._0_4_ = (float)(int)(iVar4 + (uVar2 & 1 ^ 1));
      }
      auVar7._0_4_ = auVar7._0_4_ + 1e-08;
    }
    iStack_1c0 = 4;
    if (4 < (int)auVar5._0_4_) {
      iStack_1c0 = (int)auVar5._0_4_;
    }
    iStack_1bc = 4;
    if (4 < (int)auVar7._0_4_) {
      iStack_1bc = (int)auVar7._0_4_;
    }
    puStack_178 = &UNK_1809fcc28;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0xe;
    strcpy_s(auStack_160,0x80,&UNK_180a26270);
    plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_178,&iStack_1c0);
    lVar1 = *plVar3;
    *plVar3 = 0;
    plStack_1d0 = (longlong *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1d0 != (longlong *)0x0) {
      (**(code **)(*plStack_1d0 + 0x38))();
    }
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_178 = &UNK_18098bcb0;
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0xe;
    strcpy_s(auStack_c0,0x80,&UNK_180a26280);
    plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1d8,&puStack_d8,&iStack_1c0);
    lVar1 = *plVar3;
    *plVar3 = 0;
    plStack_1d0 = (longlong *)param_1[0x8c];
    param_1[0x8c] = lVar1;
    if (plStack_1d0 != (longlong *)0x0) {
      (**(code **)(*plStack_1d0 + 0x38))();
    }
    if (plStack_1d8 != (longlong *)0x0) {
      (**(code **)(*plStack_1d8 + 0x38))();
    }
    puStack_d8 = &UNK_18098bcb0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0);
  plStack_1d8 = (longlong *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1d8 != (longlong *)0x0) {
    (**(code **)(*plStack_1d8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1f8);
}



undefined8 *
FUN_1803f9460(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a26368;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




