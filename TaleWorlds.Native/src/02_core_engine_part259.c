#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part259.c - 9 个函数

// 函数: void FUN_1802272b0(longlong param_1)
void FUN_1802272b0(longlong param_1)

{
  undefined1 auStack_1b8 [32];
  undefined8 **ppuStack_198;
  undefined **ppuStack_188;
  undefined **appuStack_180 [2];
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [12];
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined1 uStack_e4;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [64];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    puStack_158 = &UNK_180a3c3e0;
    uStack_140 = 0;
    lStack_150 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 3;
    puStack_e0 = &UNK_1809fcc58;
    puStack_d8 = auStack_c8;
    uStack_d0 = 0;
    auStack_c8[0] = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 3;
    ppuStack_188 = (undefined **)&uStack_58;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 3;
    auStack_108._4_8_ = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    uStack_ec = 0;
    auStack_108._0_4_ = 0;
    uStack_e4 = 2;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    pcStack_170 = (code *)&UNK_18022a500;
    puStack_168 = &UNK_18022a4f0;
    appuStack_180[0] = &puStack_158;
    ppuStack_198 = appuStack_180;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
              (*(longlong **)(param_1 + 0x88),&DAT_1809ff9e8,param_1 + 0xc,0);
    if (pcStack_170 != (code *)0x0) {
      (*pcStack_170)(appuStack_180,0,0);
    }
    pcStack_170 = (code *)&UNK_18022a4b0;
    puStack_168 = &UNK_18022a4a0;
    appuStack_180[0] = (undefined **)auStack_108;
    ppuStack_198 = appuStack_180;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
              (*(longlong **)(param_1 + 0x88),&DAT_1809ff9c0,param_1 + 0xc,0);
    if (pcStack_170 != (code *)0x0) {
      (*pcStack_170)(appuStack_180,0,0);
    }
    FUN_180227790(*(undefined8 *)(param_1 + 0xb0),&puStack_158,auStack_108);
    ppuStack_188 = (undefined **)&uStack_58;
    FUN_180229940(&uStack_58);
    ppuStack_188 = (undefined **)&uStack_78;
    FUN_180229ab0(&uStack_78);
    puStack_e0 = &UNK_18098bcb0;
    ppuStack_188 = (undefined **)&uStack_138;
    FUN_1802299a0(&uStack_138);
    ppuStack_188 = &puStack_158;
    puStack_158 = &UNK_180a3c3e0;
    if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_150 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    puStack_158 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1b8);
}





// 函数: void FUN_180227570(undefined8 *param_1)
void FUN_180227570(undefined8 *param_1)

{
  FUN_1802299a0();
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





// 函数: void FUN_1802275d0(longlong param_1)
void FUN_1802275d0(longlong param_1)

{
  FUN_180229940();
  FUN_180229ab0();
  *(undefined **)(param_1 + 0x28) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180227630(ulonglong *param_1)
void FUN_180227630(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0xe0) {
    *(undefined **)(uVar4 + 8) = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180227650(ulonglong *param_1)
void FUN_180227650(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0x150) {
    *(undefined **)(uVar4 + 0xa0) = &UNK_18098bcb0;
    *(undefined **)(uVar4 + 8) = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180227670(longlong *param_1)
void FUN_180227670(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18040d990(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180227690(longlong param_1)
void FUN_180227690(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x18) == '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x1e0,0x10,3,0xfffffffffffffffe);
    plVar5 = (longlong *)FUN_18040af60(uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar1 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    puVar6 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar6 = *(undefined **)(param_1 + 0x70);
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,puVar6);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_1;
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    lVar2 = _DAT_180c86930;
    plVar5 = *(longlong **)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *(undefined1 *)((longlong)plVar5 + 0xb2) = 1;
    FUN_1802abe00((longlong)iVar3 * 0x98 + lVar2 + 8,plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180227790(longlong param_1,longlong param_2,undefined4 *param_3)
void FUN_180227790(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  char cVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float *pfVar27;
  undefined *puVar28;
  int *piVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auStack_1a8 [32];
  longlong lStack_188;
  undefined8 uStack_180;
  float fStack_178;
  undefined4 uStack_174;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  ulonglong uStack_130;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_b8;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  puVar28 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar28 = *(undefined **)(param_2 + 8);
  }
  lStack_170 = param_2;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))((longlong *)(param_1 + 0x10),puVar28);
  *(undefined4 *)(param_1 + 0x1ac) = *param_3;
  puVar28 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 0xc) != (undefined *)0x0) {
    puVar28 = *(undefined **)(param_3 + 0xc);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1b8) + 0x10))((longlong *)(param_1 + 0x1b8),puVar28);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_3 + 9);
  piVar4 = *(int **)(param_2 + 0x20);
  uVar35 = (*(longlong *)(param_2 + 0x28) - (longlong)piVar4) / 0xe0;
  if ((((0.01 <= ABS((float)param_3[1])) || (0.01 <= ABS((float)param_3[2]))) ||
      (0.01 <= ABS((float)param_3[3]))) ||
     (((0.01 <= ABS((float)param_3[5]) || (0.01 <= ABS((float)param_3[6]))) ||
      (0.01 <= ABS((float)param_3[7]))))) {
    uVar20 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x180) = uVar20;
    fVar39 = (float)param_3[5];
    fVar40 = (float)param_3[6];
    fVar41 = (float)param_3[7];
    uVar42 = param_3[8];
    *(undefined1 *)(param_1 + 0x1d8) = 1;
  }
  else {
    fVar39 = 1e+08;
    fVar40 = 1e+08;
    fVar41 = 1e+08;
    uStack_168 = (undefined *)0x4cbebc204cbebc20;
    uStack_160 = 0x7f7fffff4cbebc20;
    fStack_158 = -1e+08;
    fStack_154 = -1e+08;
    fStack_150 = -1e+08;
    uStack_14c = 0x7f7fffff;
    uVar42 = 0x7f7fffff;
    if (0 < (int)uVar35) {
      uVar34 = uVar35 & 0xffffffff;
      uStack_160._0_4_ = 1e+08;
      uStack_168._4_4_ = 1e+08;
      uStack_168._0_4_ = 1e+08;
      piVar29 = piVar4;
      fVar39 = (float)uStack_168;
      fVar40 = uStack_168._4_4_;
      fVar41 = (float)uStack_160;
      do {
        uStack_110 = *(undefined8 **)(piVar29 + 0x2a);
        uStack_100 = *(ulonglong *)(piVar29 + 0x2e);
        uStack_f0 = *(undefined8 *)(piVar29 + 0x32);
        uStack_e0 = *(undefined8 *)(piVar29 + 0x36);
        iVar33 = *piVar29;
        puVar28 = *(undefined **)(piVar29 + 0x28);
        uVar20 = *(undefined8 *)(piVar29 + 0x2c);
        uVar21 = *(undefined8 *)(piVar29 + 0x30);
        uVar22 = *(undefined8 *)(piVar29 + 0x34);
        while( true ) {
          uStack_e8._0_4_ = (float)uVar22;
          uStack_e8._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
          if (iVar33 == -1) break;
          lVar23 = (longlong)iVar33;
          pfVar27 = (float *)(piVar4 + lVar23 * 0x38 + 0x28);
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          fVar51 = pfVar27[2];
          fVar52 = pfVar27[3];
          pfVar27 = (float *)(piVar4 + lVar23 * 0x38 + 0x2c);
          fVar7 = *pfVar27;
          fVar8 = pfVar27[1];
          fVar46 = pfVar27[2];
          fVar50 = pfVar27[3];
          pfVar27 = (float *)(piVar4 + lVar23 * 0x38 + 0x30);
          fVar9 = *pfVar27;
          fVar10 = pfVar27[1];
          fVar11 = pfVar27[2];
          fVar12 = pfVar27[3];
          pfVar27 = (float *)(piVar4 + lVar23 * 0x38 + 0x34);
          uStack_118._4_4_ = (float)((ulonglong)puVar28 >> 0x20);
          fVar43 = uStack_118._4_4_ * fVar46;
          fVar47 = uStack_118._4_4_ * fVar50;
          uStack_118._0_4_ = SUB84(puVar28,0);
          fVar57 = (float)uStack_118 * fVar51;
          fVar58 = (float)uStack_118 * fVar52;
          uStack_108._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
          fVar44 = uStack_108._4_4_ * fVar46;
          fVar48 = uStack_108._4_4_ * fVar50;
          uStack_108._0_4_ = (float)uVar20;
          fVar55 = (float)uStack_108 * fVar51;
          fVar56 = (float)uStack_108 * fVar52;
          uStack_f8._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
          fVar45 = uStack_f8._4_4_ * fVar46;
          fVar49 = uStack_f8._4_4_ * fVar50;
          uStack_f8._0_4_ = (float)uVar21;
          fVar53 = (float)uStack_f8 * fVar51;
          fVar54 = (float)uStack_f8 * fVar52;
          fVar46 = uStack_e8._4_4_ * fVar46;
          fVar50 = uStack_e8._4_4_ * fVar50;
          fVar51 = (float)uStack_e8 * fVar51;
          fVar52 = (float)uStack_e8 * fVar52;
          uStack_118 = (undefined *)
                       CONCAT44((float)uStack_118 * fVar6 + uStack_118._4_4_ * fVar8 +
                                (float)uStack_110 * fVar10,
                                (float)uStack_118 * fVar5 + uStack_118._4_4_ * fVar7 +
                                (float)uStack_110 * fVar9);
          uStack_110 = (undefined8 *)
                       CONCAT44(fVar58 + fVar47 + (float)uStack_110 * fVar12,
                                fVar57 + fVar43 + (float)uStack_110 * fVar11);
          uStack_108 = CONCAT44((float)uStack_108 * fVar6 + uStack_108._4_4_ * fVar8 +
                                (float)uStack_100 * fVar10,
                                (float)uStack_108 * fVar5 + uStack_108._4_4_ * fVar7 +
                                (float)uStack_100 * fVar9);
          uStack_100 = CONCAT44(fVar56 + fVar48 + (float)uStack_100 * fVar12,
                                fVar55 + fVar44 + (float)uStack_100 * fVar11);
          uStack_f8 = CONCAT44((float)uStack_f8 * fVar6 + uStack_f8._4_4_ * fVar8 +
                               (float)uStack_f0 * fVar10,
                               (float)uStack_f8 * fVar5 + uStack_f8._4_4_ * fVar7 +
                               (float)uStack_f0 * fVar9);
          uStack_f0 = CONCAT44(fVar54 + fVar49 + (float)uStack_f0 * fVar12,
                               fVar53 + fVar45 + (float)uStack_f0 * fVar11);
          uStack_e8 = CONCAT44((float)uStack_e8 * fVar6 + uStack_e8._4_4_ * fVar8 +
                               (float)uStack_e0 * fVar10 + pfVar27[1],
                               (float)uStack_e8 * fVar5 + uStack_e8._4_4_ * fVar7 +
                               (float)uStack_e0 * fVar9 + *pfVar27);
          uStack_e0 = CONCAT44(fVar52 + fVar50 + (float)uStack_e0 * fVar12 + pfVar27[3],
                               fVar51 + fVar46 + (float)uStack_e0 * fVar11 + pfVar27[2]);
          iVar33 = piVar4[lVar23 * 0x38];
          puVar28 = uStack_118;
          uVar20 = uStack_108;
          uVar21 = uStack_f8;
          uVar22 = uStack_e8;
        }
        if ((float)uStack_e8 <= fVar39) {
          fVar39 = (float)uStack_e8;
        }
        if (uStack_e8._4_4_ <= fVar40) {
          fVar40 = uStack_e8._4_4_;
        }
        if ((float)uStack_e0 <= fVar41) {
          fVar41 = (float)uStack_e0;
        }
        uStack_168 = (undefined *)CONCAT44(fVar40,fVar39);
        uStack_160 = CONCAT44(uStack_124,fVar41);
        fVar5 = (float)uStack_e8;
        if ((float)uStack_e8 < fStack_158) {
          fVar5 = fStack_158;
        }
        fStack_158 = fVar5;
        fVar5 = uStack_e8._4_4_;
        if (uStack_e8._4_4_ < fStack_154) {
          fVar5 = fStack_154;
        }
        fStack_154 = fVar5;
        uStack_180 = CONCAT44(fStack_154,fStack_158);
        if (fStack_150 <= (float)uStack_e0) {
          fStack_178 = (float)uStack_e0;
        }
        else {
          fStack_178 = fStack_150;
        }
        fStack_150 = fStack_178;
        uStack_14c = uStack_174;
        piVar29 = piVar29 + 0x38;
        uVar34 = uVar34 - 1;
        uVar42 = uStack_124;
        uStack_118 = puVar28;
        uStack_108 = uVar20;
        uStack_f8 = uVar21;
        uStack_e8 = uVar22;
      } while (uVar34 != 0);
    }
    *(float *)(param_1 + 0x178) = fVar39;
    *(float *)(param_1 + 0x17c) = fVar40;
    *(float *)(param_1 + 0x180) = fVar41;
    *(undefined4 *)(param_1 + 0x184) = uVar42;
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    fVar39 = fStack_158;
    fVar40 = fStack_154;
    fVar41 = fStack_150;
    uVar42 = uStack_14c;
  }
  *(float *)(param_1 + 0x188) = fVar39;
  *(float *)(param_1 + 0x18c) = fVar40;
  *(float *)(param_1 + 400) = fVar41;
  *(undefined4 *)(param_1 + 0x194) = uVar42;
  uStack_130 = uVar35;
  FUN_1800b9f60();
  FUN_18040b250(param_1,uVar35 & 0xff);
  uVar34 = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (0 < (int)uVar35) {
    uStack_180 = 0;
    lStack_188 = 0;
    uVar35 = uVar34;
    uVar37 = uVar34;
    uVar38 = uVar34;
    do {
      if (*(char *)(uVar38 + *(longlong *)(param_3 + 0x24)) != '\0') {
        *(ulonglong *)(param_1 + 0x150) =
             *(ulonglong *)(param_1 + 0x150) | 1L << (uStack_180 & 0x3f);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xf0 + uVar37) =
           *(undefined1 *)(lStack_188 + *(longlong *)(lStack_170 + 0x20));
      lVar23 = *(longlong *)(param_1 + 0x140);
      uStack_118 = &UNK_1809fcc58;
      uStack_110 = &uStack_100;
      uStack_100 = uStack_100 & 0xffffffffffffff00;
      uStack_108 = CONCAT44((int)((ulonglong)uStack_108 >> 0x20),
                            *(undefined4 *)(lStack_188 + 0x18 + *(longlong *)(lStack_170 + 0x20)));
      puVar28 = *(undefined **)(lStack_188 + 0x10 + *(longlong *)(lStack_170 + 0x20));
      puVar30 = &DAT_18098bc73;
      if (puVar28 != (undefined *)0x0) {
        puVar30 = puVar28;
      }
      strcpy_s(&uStack_100,0x40,puVar30);
      lVar23 = *(longlong *)(lVar23 + 0x180 + uVar37);
      *(float *)(lVar23 + 0x10) = (float)uStack_108;
      puVar32 = (undefined8 *)&DAT_18098bc73;
      if (uStack_110 != (undefined8 *)0x0) {
        puVar32 = uStack_110;
      }
      strcpy_s(*(undefined8 *)(lVar23 + 8),0x40,puVar32);
      uStack_118 = &UNK_18098bcb0;
      FUN_18040cec0(*(longlong *)(param_1 + 0x140) + uVar37,
                    lStack_188 + 0xa0 + *(longlong *)(lStack_170 + 0x20));
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x104 + uVar37) =
           *(undefined1 *)(uVar38 + 0xf8 + *(longlong *)(param_3 + 0x24));
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x180 + uVar37) + 0x58) =
           *(undefined4 *)(uVar38 + 0xfc + *(longlong *)(param_3 + 0x24));
      lVar23 = *(longlong *)(param_3 + 0x24);
      puVar32 = (undefined8 *)(uVar38 + 0x104 + lVar23);
      uVar20 = puVar32[1];
      puVar1 = (undefined8 *)(uVar38 + 0x114 + lVar23);
      uVar21 = *puVar1;
      uVar22 = puVar1[1];
      uVar42 = *(undefined4 *)(uVar38 + 0x124 + lVar23);
      lVar23 = *(longlong *)(param_1 + 0x140);
      puVar1 = (undefined8 *)(lVar23 + 0x114 + uVar37);
      *puVar1 = *puVar32;
      puVar1[1] = uVar20;
      puVar32 = (undefined8 *)(lVar23 + 0x124 + uVar37);
      *puVar32 = uVar21;
      puVar32[1] = uVar22;
      *(undefined4 *)(lVar23 + 0x134 + uVar37) = uVar42;
      lVar23 = *(longlong *)(param_3 + 0x24);
      puVar32 = (undefined8 *)(uVar38 + 0x128 + lVar23);
      uVar20 = puVar32[1];
      puVar1 = (undefined8 *)(uVar38 + 0x138 + lVar23);
      uVar21 = *puVar1;
      uVar22 = puVar1[1];
      uVar42 = *(undefined4 *)(uVar38 + 0x148 + lVar23);
      lVar23 = *(longlong *)(param_1 + 0x140);
      puVar1 = (undefined8 *)(lVar23 + 0x138 + uVar37);
      *puVar1 = *puVar32;
      puVar1[1] = uVar20;
      puVar32 = (undefined8 *)(lVar23 + 0x148 + uVar37);
      *puVar32 = uVar21;
      puVar32[1] = uVar22;
      *(undefined4 *)(lVar23 + 0x158 + uVar37) = uVar42;
      lVar23 = *(longlong *)(param_3 + 0x24);
      puVar2 = (undefined4 *)(uVar38 + 0x128 + lVar23);
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar3 = (undefined4 *)(uVar38 + 0x138 + lVar23);
      uVar16 = *puVar3;
      uVar17 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      uVar42 = *(undefined4 *)(uVar38 + 0x148 + lVar23);
      lVar23 = *(longlong *)(param_1 + 0x140);
      puVar3 = (undefined4 *)(lVar23 + 0x15c + uVar37);
      *puVar3 = *puVar2;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      puVar2 = (undefined4 *)(lVar23 + 0x16c + uVar37);
      *puVar2 = uVar16;
      puVar2[1] = uVar17;
      puVar2[2] = uVar18;
      puVar2[3] = uVar19;
      *(undefined4 *)(lVar23 + 0x17c + uVar37) = uVar42;
      puVar28 = *(undefined **)(uVar38 + 0xa8 + *(longlong *)(param_3 + 0x24));
      puVar30 = &DAT_18098bc73;
      if (puVar28 != (undefined *)0x0) {
        puVar30 = puVar28;
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x188 + uVar37) + 0x10))
                (*(longlong *)(param_1 + 0x140) + 0x188 + uVar37,puVar30);
      lVar23 = *(longlong *)(param_3 + 0x24);
      fVar39 = *(float *)(uVar38 + 0x100 + lVar23);
      pfVar27 = (float *)(uVar38 + 0x148 + lVar23);
      if (*pfVar27 <= fVar39 && fVar39 != *pfVar27) {
        *(float *)(*(longlong *)(param_1 + 0x140) + 0x17c + uVar37) = fVar39;
        lVar23 = *(longlong *)(param_3 + 0x24);
      }
      iVar33 = *(int *)(uVar38 + 0xb0 + lVar23);
      if (iVar33 != 0) {
        if (iVar33 == 5) {
          uVar25 = uVar34;
          do {
            uVar26 = uVar25 + 1;
            if (*(char *)(*(longlong *)(uVar38 + 0xa8 + lVar23) + uVar25) !=
                (&UNK_180a139e0)[uVar25]) goto LAB_180227e59;
            uVar25 = uVar26;
          } while (uVar26 != 6);
        }
        else {
LAB_180227e59:
          if (*(char *)(param_3 + 9) != '\x01') {
            FUN_1806279c0(&uStack_168,lVar23 + 0xa0 + uVar38);
            if (fStack_158 == 0.0) {
              FUN_180626f80(&UNK_180a27738);
              cVar24 = -1;
            }
            else {
              cVar24 = FUN_18040b460(*(undefined1 *)(param_3 + 9),&uStack_168);
            }
            uStack_168 = &UNK_180a3c3e0;
            if (uStack_160 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            uStack_160 = 0;
            fStack_150 = 0.0;
            uStack_168 = &UNK_18098bcb0;
            if (cVar24 < '\0') {
              puVar28 = *(undefined **)(uVar38 + 0xa8 + *(longlong *)(param_3 + 0x24));
              puVar30 = &DAT_18098bc73;
              if (puVar28 != (undefined *)0x0) {
                puVar30 = puVar28;
              }
              puVar28 = *(undefined **)(lStack_188 + 0x10 + *(longlong *)(lStack_170 + 0x20));
              puVar31 = &DAT_18098bc73;
              if (puVar28 != (undefined *)0x0) {
                puVar31 = puVar28;
              }
              FUN_180627020(&UNK_180a138c0,puVar31,puVar30);
            }
            else {
              *(char *)((longlong)cVar24 + 0xc0 + param_1) = (char)uVar35;
            }
          }
        }
      }
      uVar36 = (int)uVar35 + 1;
      uVar35 = (ulonglong)uVar36;
      uStack_180 = uStack_180 + 1;
      uVar37 = uVar37 + 0x1b0;
      uVar38 = uVar38 + 0x150;
      lStack_188 = lStack_188 + 0xe0;
    } while ((int)uVar36 < (int)uStack_130);
  }
  if ((undefined8 *)(param_1 + 0x158) != (undefined8 *)(param_3 + 0x2c)) {
    FUN_18022a310((undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_3 + 0x2c),
                  *(undefined8 *)(param_3 + 0x2e));
  }
  uVar35 = uVar34;
  if ('\0' < *(char *)(param_1 + 0x148)) {
    do {
      lVar23 = *(longlong *)(param_1 + 0x140);
      cVar24 = *(char *)(uVar35 + 0xf0 + lVar23);
      iVar33 = (int)uVar34;
      if (cVar24 < '\0') {
        lVar23 = (longlong)iVar33 * 0x1b0 + lVar23;
        puVar32 = (undefined8 *)(lVar23 + 0x50);
      }
      else {
        pfVar27 = (float *)((longlong)cVar24 * 0x1b0 + lVar23);
        fVar5 = *pfVar27;
        fVar6 = pfVar27[1];
        fVar51 = pfVar27[2];
        fVar52 = pfVar27[3];
        fVar7 = pfVar27[4];
        fVar8 = pfVar27[5];
        fVar46 = pfVar27[6];
        fVar50 = pfVar27[7];
        fVar9 = pfVar27[8];
        fVar10 = pfVar27[9];
        fVar11 = pfVar27[10];
        fVar12 = pfVar27[0xb];
        fVar39 = *(float *)(uVar35 + 0x54 + lVar23);
        fVar40 = *(float *)(uVar35 + 0x50 + lVar23);
        fVar41 = *(float *)(uVar35 + 0x58 + lVar23);
        uStack_118 = (undefined *)
                     CONCAT44(fVar39 * fVar8 + fVar40 * fVar6 + fVar41 * fVar10,
                              fVar39 * fVar7 + fVar40 * fVar5 + fVar41 * fVar9);
        uStack_110 = (undefined8 *)
                     CONCAT44(fVar39 * fVar50 + fVar40 * fVar52 + fVar41 * fVar12,
                              fVar39 * fVar46 + fVar40 * fVar51 + fVar41 * fVar11);
        fVar39 = *(float *)(uVar35 + 100 + lVar23);
        fVar40 = *(float *)(uVar35 + 0x60 + lVar23);
        fVar41 = *(float *)(uVar35 + 0x68 + lVar23);
        uStack_108 = CONCAT44(fVar39 * fVar8 + fVar40 * fVar6 + fVar41 * fVar10,
                              fVar39 * fVar7 + fVar40 * fVar5 + fVar41 * fVar9);
        uStack_100 = CONCAT44(fVar39 * fVar50 + fVar40 * fVar52 + fVar41 * fVar12,
                              fVar39 * fVar46 + fVar40 * fVar51 + fVar41 * fVar11);
        fVar39 = *(float *)(uVar35 + 0x74 + lVar23);
        fVar40 = *(float *)(uVar35 + 0x70 + lVar23);
        fVar41 = *(float *)(uVar35 + 0x78 + lVar23);
        uStack_f8 = CONCAT44(fVar39 * fVar8 + fVar40 * fVar6 + fVar41 * fVar10,
                             fVar39 * fVar7 + fVar40 * fVar5 + fVar41 * fVar9);
        uStack_f0 = CONCAT44(fVar39 * fVar50 + fVar40 * fVar52 + fVar41 * fVar12,
                             fVar39 * fVar46 + fVar40 * fVar51 + fVar41 * fVar11);
        fVar39 = *(float *)(uVar35 + 0x84 + lVar23);
        fVar40 = *(float *)(uVar35 + 0x80 + lVar23);
        fVar41 = *(float *)(uVar35 + 0x88 + lVar23);
        uStack_e8 = CONCAT44(fVar39 * fVar8 + fVar40 * fVar6 + fVar41 * fVar10 + pfVar27[0xd],
                             fVar39 * fVar7 + fVar40 * fVar5 + fVar41 * fVar9 + pfVar27[0xc]);
        uStack_e0 = CONCAT44(fVar39 * fVar50 + fVar40 * fVar52 + fVar41 * fVar12 + pfVar27[0xf],
                             fVar39 * fVar46 + fVar40 * fVar51 + fVar41 * fVar11 + pfVar27[0xe]);
        lVar23 = (longlong)iVar33 * 0x1b0 + lVar23;
        puVar32 = &uStack_118;
      }
      FUN_18040cf70(lVar23,puVar32);
      uVar34 = (ulonglong)(iVar33 + 1U);
      uVar35 = uVar35 + 0x1b0;
    } while ((int)(iVar33 + 1U) < (int)*(char *)(param_1 + 0x148));
  }
  FUN_18040cc40();
  cVar24 = '\0';
  if ('\0' < *(char *)(param_1 + 0x148)) {
    do {
      *(undefined1 *)(param_1 + 0x100 + (longlong)cVar24) =
           *(undefined1 *)((longlong)cVar24 * 0x1b0 + 0xf0 + *(longlong *)(param_1 + 0x140));
      cVar24 = cVar24 + '\x01';
    } while (cVar24 < *(char *)(param_1 + 0x148));
  }
  FUN_18040b510(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_1a8);
}





// 函数: void FUN_1802281a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802281a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_180228450(&puStack_48,param_1,param_3,param_4,0xfffffffffffffffe,&uStack_28);
  FUN_180228280(&puStack_48,param_3);
  FUN_1802299a0(&uStack_28);
  puStack_48 = &UNK_180a3c3e0;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





