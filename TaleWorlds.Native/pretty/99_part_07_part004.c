#include "TaleWorlds.Native.Split.h"

// 99_part_07_part004.c - 5 个函数

// 函数: void FUN_1803fdcd0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
void FUN_1803fdcd0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int *piVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_2b8 [32];
  undefined4 uStack_298;
  undefined4 uStack_290;
  char acStack_288 [8];
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  longlong *plStack_258;
  undefined *puStack_250;
  longlong lStack_248;
  undefined4 uStack_240;
  ulonglong uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong *plStack_220;
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [4];
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong *plStack_1b0;
  undefined **ppuStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  float fStack_190;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [72];
  undefined *puStack_118;
  undefined *puStack_110;
  uint uStack_108;
  undefined auStack_100 [136];
  ulonglong uStack_78;
  undefined8 uStack_60;
  
  plVar11 = *(longlong **)(param_2 + 0x448);
  if (plVar11 != (longlong *)0x0) {
    uStack_60 = 0x1803fdd12;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plVar7 = (longlong *)param_1[0x89];
  param_1[0x89] = (longlong)plVar11;
  if (plVar7 != (longlong *)0x0) {
    uStack_60 = 0x1803fdd31;
    (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined2 *)(param_1 + 0x20) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x103) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x107) = 1;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0x101;
  uStack_210 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  plVar11 = (longlong *)0x0;
  uVar10 = 0;
  puStack_118 = &UNK_1809fcc28;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0xc;
  uStack_280 = param_4;
  strcpy_s(auStack_100,0x80,&DAT_180a0eb68);
  puVar5 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar5 = (undefined *)param_1[3];
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar5[lVar3] != '\0');
  iVar2 = (int)lVar3;
  if ((0 < iVar2) && (uStack_108 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_110 + uStack_108,puVar5,(longlong)(iVar2 + 1));
  }
  puVar5 = &DAT_18098bc73;
  if (puStack_110 != (undefined *)0x0) {
    puVar5 = puStack_110;
  }
  FUN_1802c22a0(acStack_288,puVar5);
  puVar5 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar5 = (undefined *)param_1[3];
  }
  ppuStack_1a8 = &puStack_178;
  puStack_178 = &UNK_1809fcc58;
  puStack_170 = auStack_160;
  uStack_168 = 0;
  auStack_160[0] = 0;
  if (puVar5 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_178);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_178);
  }
  if (*(code **)(*param_1 + 0x30) != _guard_check_icall) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  lVar3 = _DAT_180c86870;
  if ((int)param_1[9] < 1) {
    lVar8 = param_1[0x85];
    if ((lVar8 == 0) || (lVar9 = *(longlong *)(lVar8 + 0x1d8), lVar9 == 0)) {
      lVar9 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    lVar8 = param_1[0x89];
    plVar7 = plVar11;
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1e0) != 0)) {
      if (lVar3 != 0) {
        *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(lVar3 + 0x224);
      }
      plVar7 = (longlong *)(*(longlong *)(lVar8 + 0x1e0) + 0x10);
    }
    FUN_18029ad30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,lVar9);
    plVar1 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar7,4);
    }
    lVar3 = _DAT_180c86938;
    plVar1[0x107e] = (longlong)plVar7;
    FUN_18029de40(*(undefined8 *)(lVar3 + 0x1cd8),1);
    fVar18 = 0.0;
    if (*(char *)((longlong)param_1 + 0x4d) == '\0') {
      fVar18 = (float)(int)*(float *)(param_3 + 0x11c18);
      fVar19 = (float)(int)*(float *)(param_3 + 0x11c1c);
      if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
        fVar21 = (float)(double)param_1[0xb];
        fVar20 = (float)(double)param_1[0xc];
      }
      else {
        iVar2 = (int)*(float *)(param_3 + 0x11c20);
        auVar14._0_8_ = (double)iVar2 * (double)param_1[0xb];
        lVar3 = (longlong)auVar14._0_8_;
        if (auVar14._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar15._8_8_ = auVar14._0_8_;
            auVar15._0_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar15);
            auVar14._0_8_ = (double)(longlong)(lVar3 + (ulonglong)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ - 1e-08;
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar14._8_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar14);
            auVar14._0_8_ = (double)(longlong)(lVar3 + (ulonglong)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ + 1e-08;
        }
        fVar21 = (float)(longlong)auVar14._0_8_;
        iVar2 = (int)*(float *)(param_3 + 0x11c24);
        auVar16._0_8_ = (double)iVar2 * (double)param_1[0xc];
        lVar3 = (longlong)auVar16._0_8_;
        if (auVar16._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar17._8_8_ = auVar16._0_8_;
            auVar17._0_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar17);
            auVar16._0_8_ = (double)(longlong)(lVar3 + (ulonglong)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(longlong)(auVar16._0_8_ - 1e-08);
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar16._8_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar16);
            auVar16._0_8_ = (double)(longlong)(lVar3 + (ulonglong)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(longlong)(auVar16._0_8_ + 1e-08);
        }
      }
    }
    else {
      fVar19 = 0.0;
      fVar21 = (float)*(int *)(param_3 + 0x3588);
      fVar20 = (float)*(int *)(param_3 + 0x358c);
    }
    lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uStack_198 = (undefined **)CONCAT44(fVar19,fVar18);
    uStack_18c = SUB42(fVar20,0);
    uStack_18a = (undefined2)((uint)fVar20 >> 0x10);
    uStack_188 = 0;
    uStack_184 = 0x3f800000;
    plVar7 = *(longlong **)(lVar3 + 0x8400);
    fStack_190 = fVar21;
    (**(code **)(*plVar7 + 0x160))(plVar7,1,&uStack_198);
    ppuStack_1a8 = (undefined **)0x0;
    plVar7 = *(longlong **)(lVar3 + 0x8400);
    iStack_1a0 = (int)fVar21;
    iStack_19c = (int)fVar20;
    (**(code **)(*plVar7 + 0x168))(plVar7,1,&ppuStack_1a8);
    if ((*(char *)((longlong)param_1 + 0x4e) != '\0') ||
       ((param_1[0x85] != 0 && (*(char *)(param_1[0x85] + 0xc9) != '\0')))) {
      uVar6 = 1;
      if ((param_1[0x89] != 0) && (uVar6 = 1, *(char *)((longlong)param_1 + 0x4f) == '\0')) {
        uVar6 = 3;
      }
      uStack_290 = 0;
      uStack_298 = 0;
      FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),uVar6,0);
    }
    lVar8 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1df0) =
         *(undefined8 *)(param_3 + 0x35a8);
    *(undefined8 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1df8) = *(undefined8 *)(param_3 + 0x35b0);
    *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1be0) = 0.5 / fVar21;
    *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1be4) = 0.5 / fVar20;
    plVar7 = param_1 + 0x27;
    lVar3 = *plVar7;
    if (lVar3 == 0) {
      *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    lVar3 = _DAT_180c86890;
    if (*(char *)(_DAT_180c86890 + 0x12f8) == '\x01') {
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1c78) =
           *(undefined4 *)(_DAT_180c86890 + 0x1304);
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1c7c) = *(undefined4 *)(lVar3 + 0x12fc);
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1c74) = *(undefined4 *)(lVar3 + 0x1300);
      *(undefined4 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x1bfc) = *(undefined4 *)(lVar3 + 0x1308);
    }
    (**(code **)(*param_1 + 0x10))(param_1,auStack_214,auStack_218);
    FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(_DAT_180c86938 + 0x1c88),
                  *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0,0x230);
    ppuStack_1a8 = (undefined **)0x0;
    uStack_298 = param_5;
    FUN_1801f7d20(param_1,param_3,&uStack_280,&ppuStack_1a8);
    uStack_198 = ppuStack_1a8;
    fStack_190 = (float)uStack_280;
    uStack_18c = 4;
    puStack_278 = (undefined *)param_1[6];
    plStack_258 = (longlong *)0x0;
    puStack_250 = &UNK_180a3c3e0;
    uStack_238 = 0;
    lStack_248 = 0;
    uStack_240 = 0;
    plStack_220 = (longlong *)0x0;
    uStack_268 = CONCAT26(uStack_18a,CONCAT24(4,uStack_280));
    ppuStack_270 = ppuStack_1a8;
    uStack_260 = 2;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uVar6 = *(undefined8 *)(param_1[6] + 0x15b8);
    ppuStack_200 = ppuStack_1a8;
    uStack_1f0 = 2;
    uStack_1e8 = 0;
    puStack_208 = puStack_278;
    uStack_1f8 = uStack_268;
    ppuStack_1a8 = &puStack_208;
    FUN_180627ae0(auStack_1e0,&puStack_250);
    uStack_1c0 = CONCAT44(uStack_22c,uStack_230);
    uStack_1b8 = CONCAT44(uStack_224,uStack_228);
    plStack_1b0 = plStack_220;
    if (plStack_220 != (longlong *)0x0) {
      (**(code **)(*plStack_220 + 0x28))();
    }
    lVar3 = FUN_180299eb0(uVar6,param_3,&puStack_208,acStack_288);
    if (acStack_288[0] == '\0') {
      param_1[0x1f] = lVar3;
      *(undefined1 *)((longlong)param_1 + 0x132) = 0;
      *(undefined4 *)((longlong)param_1 + 0x134) = 1;
      *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_1[0x85] + 0x324);
      if (param_1[0x89] != 0) {
        uVar10 = *(undefined4 *)(param_1[0x89] + 0x324);
      }
      *(undefined4 *)(param_1 + 0x22) = uVar10;
      piVar12 = (int *)((longlong)param_1 + 0x74);
      do {
        if (*plVar7 != 0) {
          uStack_298 = 0xffffffff;
          FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),plVar11,*plVar7,0x10);
        }
        if (*piVar12 == -0x12) {
          lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          lVar8 = *plVar7;
          if (lVar8 != 0) {
            *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
            lVar8 = lVar8 + 0x1a0;
          }
          if ((((*(longlong *)(lVar3 + 0x8540) != lVar8) || (*(int *)(lVar3 + 0x88bc) != -1)) ||
              (*(int *)(lVar3 + 0x8abc) != 0x10)) &&
             (((lVar8 == 0 || (*(longlong *)(lVar8 + 8) != 0)) || (*(longlong *)(lVar8 + 0x10) != 0)
              ))) {
            ppuStack_1a8 = (undefined **)0x0;
            if (lVar8 != 0) {
              ppuStack_1a8 = *(undefined ***)(lVar8 + 0x10);
            }
            (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x40))
                      (*(longlong **)(lVar3 + 0x8400),0x21,1,&ppuStack_1a8);
            *(longlong *)(lVar3 + 0x8540) = lVar8;
            *(undefined4 *)(lVar3 + 0x88bc) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0x8abc) = 0x10;
            *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
          }
        }
        uVar13 = (int)plVar11 + 1;
        plVar11 = (longlong *)(ulonglong)uVar13;
        piVar12 = piVar12 + 1;
        plVar7 = plVar7 + 1;
      } while ((int)uVar13 < 0x10);
      if ((int)param_1[4] == 0x19) {
        iVar2 = strcmp(param_1[3],&UNK_180a0ec10);
        if (iVar2 == 0) {
          uVar6 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
          puVar4 = (undefined8 *)FUN_1802c8e90(*(undefined8 *)(param_3 + 0x99b8),&uStack_280);
          uStack_298 = 0xffffffff;
          FUN_18029d150(uVar6,1,*puVar4);
          if ((longlong *)CONCAT44(uStack_27c,uStack_280) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_27c,uStack_280) + 0x38))();
          }
        }
      }
      FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
      FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),param_1 + 0x1f);
      lVar3 = _DAT_180c86938;
      puVar5 = &DAT_18098bc73;
      if (puStack_110 != (undefined *)0x0) {
        puVar5 = puStack_110;
      }
      if (puVar5 != (undefined *)0x0) {
        lVar8 = strnlen(puVar5,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar5,lVar8);
        *(undefined1 *)(lVar8 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
      if (*(code **)(*param_1 + 0x28) != _guard_check_icall) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      iVar2 = 0;
      lVar8 = 0x8a38;
      lVar3 = 0x8438;
      do {
        if ((*(longlong *)((longlong)param_1 + lVar3 + -0x8300) != 0) &&
           (((lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8), *(longlong *)(lVar3 + lVar9) != 0 ||
             (*(int *)(lVar9 + -0x200 + lVar8) != -1)) || (*(int *)(lVar8 + lVar9) != 0x10)))) {
          ppuStack_1a8 = (undefined **)0x0;
          (**(code **)(**(longlong **)(lVar9 + 0x8400) + 0x40))
                    (*(longlong **)(lVar9 + 0x8400),iVar2,1,&ppuStack_1a8);
          *(undefined8 *)(lVar3 + lVar9) = 0;
          *(undefined4 *)(lVar9 + -0x200 + lVar8) = 0xffffffff;
          *(undefined4 *)(lVar8 + lVar9) = 0x10;
          *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 4;
      } while (iVar2 < 0x10);
    }
    if (plStack_220 != (longlong *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    ppuStack_1a8 = &puStack_250;
    puStack_250 = &UNK_180a3c3e0;
    if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_248 = 0;
    uStack_238 = uStack_238 & 0xffffffff00000000;
    puStack_250 = &UNK_18098bcb0;
    if (plStack_258 != (longlong *)0x0) {
      (**(code **)(*plStack_258 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_178);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  puStack_118 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fdd80(longlong param_1,int *param_2,longlong param_3)
void FUN_1803fdd80(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  longlong lVar2;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  FUN_1801f9270(param_1,param_3);
  puStack_d8 = &UNK_1809fcc28;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = *(uint *)(param_1 + 0x20);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x18);
  }
  strcpy_s(auStack_c0,0x80,puVar4);
  if (uStack_c8 + 1 < 0x7f) {
    *(undefined2 *)(puStack_d0 + uStack_c8) = 0x5f;
    uStack_c8 = uStack_c8 + 1;
  }
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 0x3528) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_3 + 0x3528);
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (puVar4[lVar1] != '\0');
  if ((0 < (int)lVar1) && (uStack_c8 + (int)lVar1 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_d0 + uStack_c8,puVar4,(longlong)((int)lVar2 + 2));
  }
  iVar3 = (((int)((*param_2 + -1 >> 0x1f & 0x3fU) + *param_2 + -1) >> 6) + 1) * 0x40;
  *(int *)(param_1 + 0x458) = iVar3;
  *(int *)(param_1 + 0x45c) =
       (((int)(param_2[1] + -1 + (param_2[1] + -1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
  *param_2 = iVar3;
  param_2[1] = *(int *)(param_1 + 0x45c);
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fdfc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1803fdfc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c86938;
  if (0 < (int)param_1[9]) {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
    return;
  }
  *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83c0) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83c8) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83d0) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83d8) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83e0) = 0;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83e8) = 0;
  FUN_18029de40(*(undefined8 *)(lVar1 + 0x1cd8),7);
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],*(undefined4 *)((longlong)param_1 + 0x454),param_4,
             param_5,0);
  return;
}



undefined8 FUN_1803fe0c0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x4a8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fe1f0(longlong param_1,longlong param_2)
void FUN_1803fe1f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar9;
  undefined1 auStack_188 [32];
  longlong *plStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_134 [8];
  undefined8 uStack_12c;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined4 uStack_121;
  undefined2 uStack_11d;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  uint uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  longlong lVar8;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uVar1 = *(undefined4 *)(param_2 + 0x3588);
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x358c);
  *(undefined4 *)(param_1 + 0x45c) = uVar2;
  auStack_134 = (undefined1  [8])0x0;
  uStack_12c = 0x3f80000000000000;
  uStack_124 = 0x100;
  uStack_121 = 0;
  uStack_11d = 0;
  uStack_118 = 0xffffffff;
  uStack_114 = 0;
  uStack_148 = (undefined *)CONCAT44(uVar2,uVar1);
  puStack_140 = (undefined1 *)0x100000001;
  uStack_138 = 0x1e;
  uStack_122 = 1;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(uint *)(param_1 + 0x20);
  puVar9 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar9 = *(undefined **)(param_1 + 0x18);
  }
  strcpy_s(auStack_d0,0x80,puVar9);
  uVar5 = (ulonglong)uStack_d8;
  uVar6 = uStack_d8 + 1;
  if (uVar6 < 0x7f) {
    *(undefined2 *)(puStack_e0 + uVar5) = 0x5f;
    uVar5 = (ulonglong)uVar6;
    uStack_d8 = uVar6;
  }
  lVar7 = -1;
  puVar9 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x3528) != (undefined *)0x0) {
    puVar9 = *(undefined **)(param_2 + 0x3528);
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (puVar9[lVar7] != '\0');
  if ((0 < (int)lVar7) && ((uint)((int)uVar5 + (int)lVar7) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uVar5,puVar9,(longlong)((int)lVar8 + 2));
  }
  puVar3 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_160,&puStack_e8,&uStack_148);
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_168 = *(longlong **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = uVar4;
  if (plStack_168 != (longlong *)0x0) {
    (**(code **)(*plStack_168 + 0x38))();
  }
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  *(int *)(param_1 + 0x474) =
       (int)(longlong)((double)*(int *)(param_2 + 0x3588) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x478) =
       (int)(longlong)((double)*(int *)(param_2 + 0x358c) * *(double *)(param_1 + 0x60));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_134 + 4;
  auStack_134[4] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_134 + 4,0x40,&UNK_180a0dc58);
  uVar4 = FUN_180240430(uVar4,&uStack_148,1);
  *(undefined8 *)(param_1 + 0x4a0) = uVar4;
  uStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fe480(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
void FUN_1803fe480(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_158 [32];
  undefined4 uStack_138;
  undefined4 uStack_130;
  longlong lStack_128;
  undefined **ppuStack_118;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  ulonglong uStack_78;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  FUN_1802c22a0(auStack_110,&UNK_180a26760);
  puVar6 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar6 = (undefined *)param_1[3];
  }
  ppuStack_118 = &puStack_d8;
  lVar4 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  uStack_c8 = 0;
  auStack_c0[0] = 0;
  if (puVar6 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_d8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_d8);
  }
  if ((int)param_1[9] < 1) {
    *(int *)((longlong)param_1 + 0x46c) =
         (int)(longlong)((double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb]);
    *(int *)(param_1 + 0x8e) =
         (int)(longlong)((double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc]);
    (**(code **)(*param_1 + 0x10))(param_1,auStack_108,auStack_10c);
    lVar3 = _DAT_180c86938;
    fVar10 = *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1d54);
    if (*(int *)((longlong)param_1 + 0x49c) == 1) {
      uVar5 = *(uint *)(param_1 + 0x8e);
      uVar7 = *(uint *)((longlong)param_1 + 0x474);
      uVar1 = *(uint *)(param_1 + 0x8f);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x8e);
      uVar7 = *(uint *)((longlong)param_1 + 0x46c);
      uVar1 = uVar5;
    }
    *(float *)(param_1 + 0x8d) = fVar10;
    fVar9 = (float)*(uint *)((longlong)param_1 + 0x46c);
    fVar8 = 1.0 / (float)uVar7;
    *(float *)((longlong)param_1 + 0x47c) = fVar8 * fVar9;
    *(float *)(param_1 + 0x90) = (1.0 / (float)uVar1) * (float)uVar5;
    *(float *)((longlong)param_1 + 0x484) = fVar9 * 0.5 * fVar8 - 0.5;
    *(float *)(param_1 + 0x91) = (float)uVar5 * 0.5 * (1.0 / (float)uVar1) - 0.5;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    fVar10 = -1.0 / ((8.0 - fVar10 * 8.0) + fVar10 * 5.0);
    *(float *)((longlong)param_1 + 0x48c) = fVar10;
    *(uint *)(param_1 + 0x92) =
         (((uint)fVar10 & 0x7fffff) >> ((&UNK_180a267e0)[(uint)fVar10 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&UNK_180a269e0 + (ulonglong)((uint)fVar10 >> 0x17) * 2);
    fVar8 = fVar9 * 8.0 * fVar8;
    ppuStack_118 = (undefined **)CONCAT44(ppuStack_118._4_4_,fVar8);
    *(float *)((longlong)param_1 + 0x494) = fVar8;
    *(undefined4 *)(param_1 + 0x93) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83b8) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83c0) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83c8) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83d0) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83d8) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83e0) = 0;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83e8) = 0;
    FUN_18029de40(*(undefined8 *)(lVar3 + 0x1cd8),7);
    lVar3 = param_1[0x8b];
    iVar2 = *(int *)((longlong)param_1 + 0x45c);
    *(float *)(param_3 + 0x11c18) = (float)(int)*(float *)(param_3 + 0x11c18);
    *(float *)(param_3 + 0x11c1c) = (float)(int)*(float *)(param_3 + 0x11c1c);
    *(float *)(param_3 + 0x11c20) = (float)(int)lVar3;
    *(float *)(param_3 + 0x11c24) = (float)iVar2;
    *(undefined8 *)(param_3 + 0x11c28) = 0x3f80000000000000;
    if (*(char *)((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xca +
                 *(longlong *)(_DAT_180c86938 + 0x1d20)) != '\0') {
      lVar4 = param_1[0x94];
    }
    uStack_130 = param_5;
    uStack_138 = param_4;
    lStack_128 = lVar4;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
    *(undefined8 *)(param_3 + 0x3598) = 0x3f8000003f800000;
    *(undefined8 *)(param_3 + 0x35a0) = 0x3f8000003f800000;
    lVar4 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1790) = 0x3f8000003f800000;
    ppuStack_118 = (undefined **)0x3f8000003f800000;
    *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x17c0) = 0x3f8000003f800000;
    lVar4 = FUN_180244ff0(param_3);
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar4 + 0x32c);
    lVar4 = FUN_180244ff0(param_3);
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar4 + 0x32e);
    (**(code **)(*param_1 + 0x10))(param_1,auStack_108,auStack_10c);
    FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(_DAT_180c86938 + 0x1c70),
                  *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1100,0x6d0);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_d8);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_158);
}



longlong FUN_1803fea00(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x38))();
  }
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x4d8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




