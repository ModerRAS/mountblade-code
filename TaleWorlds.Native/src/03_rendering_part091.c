#include "TaleWorlds.Native.Split.h"

// 03_rendering_part091.c - 6 个函数

// 函数: void FUN_18031d820(code **param_1,code *param_2)
void FUN_18031d820(code **param_1,code *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 uVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  longlong lVar13;
  code **ppcVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined4 uStack_170;
  code **ppcStack_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [8];
  code **ppcStack_150;
  code **ppcStack_148;
  code *pcStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined2 uStack_132;
  code *pcStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  longlong *plStack_f8;
  code *pcStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint auStack_90 [2];
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  ppcVar14 = (code **)0x0;
  pcStack_a8 = (code *)&UNK_1809fcc58;
  pcStack_a0 = (code *)auStack_90;
  auStack_90[0] = auStack_90[0] & 0xffffff00;
  uStack_98 = 0x1e;
  uVar17 = strcpy_s(auStack_90,0x40,&UNK_180a1ad98);
  uStack_170 = 1;
  uStack_178 = 1;
  uStack_180 = 0;
  uStack_188 = 4;
  uStack_190 = 0x10;
  uStack_198 = 0x21;
  uStack_1a0 = 0;
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,4);
  FUN_1800b0a10(uVar17,&ppcStack_148,*(undefined4 *)(param_1[0x11] + 0xa0),&pcStack_a8);
  lVar7 = _DAT_180c86898;
  pcStack_a8 = (code *)&UNK_18098bcb0;
  pcVar5 = param_1[0x11];
  if ((*(char *)(*(longlong *)(pcVar5 + 0x60c48) + 0x331d) == '\0') &&
     (iVar4 = *(int *)(pcVar5 + 0x60c40), iVar4 != -1)) {
    lVar16 = *(longlong *)(*(longlong *)(pcVar5 + 0x60c20) + (longlong)iVar4 * 8);
    if (*(longlong *)(lVar16 + 0x40) == 0) {
      lVar16 = *(longlong *)(lVar16 + 0x128);
    }
    else {
      lVar16 = *(longlong *)(lVar16 + 0x28);
    }
    if (lVar16 != 0) {
      pcStack_140 = (code *)0x0;
      uStack_138 = 0;
      uStack_134 = 0;
      if (*(longlong *)(_DAT_180c86898 + 0x410) == 0) {
        puVar12 = (undefined8 *)FUN_18009e9e0((longlong)iVar4,&ppcStack_168,&UNK_180a03740);
        uVar6 = *puVar12;
        *puVar12 = 0;
        ppcStack_150 = *(code ***)(lVar7 + 0x410);
        *(undefined8 *)(lVar7 + 0x410) = uVar6;
        if (ppcStack_150 != (code **)0x0) {
          (**(code **)((longlong)*ppcStack_150 + 0x38))();
        }
        if (ppcStack_168 != (code **)0x0) {
          (**(code **)(*ppcStack_168 + 0x38))();
        }
      }
      pcStack_118 = *(code **)(lVar7 + 0x410);
      plStack_f8 = (longlong *)0x0;
      ppcStack_150 = &pcStack_f0;
      pcStack_f0 = (code *)&UNK_180a3c3e0;
      uStack_d8 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      plStack_c0 = (longlong *)0x0;
      uVar10 = CONCAT26(uStack_132,CONCAT24(uStack_134,uStack_138));
      pcStack_110 = pcStack_140;
      uStack_100 = 2;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar6 = *(undefined8 *)(pcStack_118 + 0x15b8);
      ppcStack_168 = &pcStack_a8;
      uStack_108._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      pcStack_a0 = pcStack_140;
      uStack_98 = uStack_138;
      uStack_94 = uStack_108._4_4_;
      auStack_90[0] = 2;
      uStack_88 = 0;
      uStack_108 = uVar10;
      pcStack_a8 = pcStack_118;
      FUN_180627ae0(auStack_80,&pcStack_f0);
      uStack_60 = (undefined4)uStack_d0;
      uStack_5c = uStack_d0._4_4_;
      uStack_58 = (undefined4)uStack_c8;
      uStack_54 = uStack_c8._4_4_;
      plStack_50 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        (**(code **)(*plStack_c0 + 0x28))();
      }
      lVar13 = FUN_180299eb0(uVar6,0,&pcStack_a8,auStack_158);
      lVar7 = _DAT_180c86938;
      *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1d88) =
           *(undefined4 *)(param_1[0x11] + 0x30b0);
      uVar17 = powf(0x40000000,*(undefined4 *)(param_1[0x11] + 0x320c));
      *(undefined4 *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1d58) = uVar17;
      FUN_18029fc10(*(longlong *)(lVar7 + 0x1cd8),*(undefined8 *)(lVar7 + 0x1c88),
                    *(longlong *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
      lVar7 = *(longlong *)(_DAT_180c86938 + 0x1c88);
      plVar8 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      pcVar5 = *(code **)(*plVar8 + 0x238);
      *(undefined4 *)(lVar7 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
      (*pcVar5)(plVar8,2,1,lVar7 + 0x10);
      lVar7 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if ((lVar13 != 0) && (*(longlong *)(lVar7 + 0x82a0) != (longlong)**(int **)(lVar13 + 0x10))) {
        (**(code **)(**(longlong **)(lVar7 + 0x8400) + 0x228))
                  (*(longlong **)(lVar7 + 0x8400),*(undefined8 *)(*(int **)(lVar13 + 0x10) + 6),0,0)
        ;
        *(longlong *)(lVar7 + 0x82a0) = (longlong)**(int **)(lVar13 + 0x10);
      }
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0xffffffff);
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,lVar16,0x20);
      lVar7 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (ppcStack_148 != (code **)0x0) {
        *(undefined4 *)((longlong)ppcStack_148 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
        ppcVar14 = (code **)ppcStack_148[4];
      }
      plVar8 = *(longlong **)(lVar7 + 0x8400);
      uStack_1a8 = 0;
      ppcStack_168 = ppcVar14;
      (**(code **)(*plVar8 + 0x220))(plVar8,1,1,&ppcStack_168);
      plVar8 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      (**(code **)(*plVar8 + 0x148))(plVar8,1,1,1);
      pcStack_a8 = (code *)&UNK_1809fcc58;
      pcStack_a0 = (code *)auStack_90;
      auStack_90[0] = auStack_90[0] & 0xffffff00;
      uStack_98 = 0x1f;
      uVar17 = strcpy_s(auStack_90,0x40,&UNK_180a1ae38);
      uStack_170 = 1;
      uStack_178 = 1;
      uStack_180 = 0;
      uStack_188 = 4;
      uStack_190 = 0x10;
      uStack_198 = 0x21;
      uStack_1a0 = 2;
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x10);
      FUN_1800b0a10(uVar17,&pcStack_120,*(undefined4 *)(param_1[0x11] + 0xa0),&pcStack_a8);
      pcStack_a8 = (code *)&UNK_18098bcb0;
      ppcVar14 = (code **)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
      pcVar5 = pcStack_120;
      ppcVar14[1] = (code *)0x0;
      ppcVar14[2] = (code *)0x0;
      ppcVar14[3] = (code *)0x0;
      ppcVar14[4] = (code *)0x0;
      ppcVar14[5] = (code *)0x0;
      ppcVar14[6] = (code *)0x0;
      ppcVar14[7] = (code *)0x0;
      ppcVar14[8] = (code *)0x0;
      *ppcVar14 = (code *)0x0;
      ppcVar14[1] = (code *)0x0;
      ppcVar14[2] = (code *)0x0;
      ppcStack_150 = (code **)pcStack_120;
      ppcStack_168 = ppcVar14;
      if (pcStack_120 != (code *)0x0) {
        (**(code **)(*(longlong *)pcStack_120 + 0x28))(pcStack_120);
      }
      ppcStack_150 = (code **)*ppcVar14;
      *ppcVar14 = pcVar5;
      if (ppcStack_150 != (code **)0x0) {
        (**(code **)((longlong)*ppcStack_150 + 0x38))();
      }
      ppcVar11 = ppcStack_148;
      ppcStack_168 = ppcStack_148;
      if (ppcStack_148 != (code **)0x0) {
        (**(code **)(*ppcStack_148 + 0x28))(ppcStack_148);
      }
      ppcStack_168 = (code **)ppcVar14[1];
      ppcVar14[1] = (code *)ppcVar11;
      if (ppcStack_168 != (code **)0x0) {
        (**(code **)(*ppcStack_168 + 0x38))();
      }
      if (param_1 != (code **)0x0) {
        ppcStack_168 = param_1;
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      ppcStack_168 = (code **)ppcVar14[2];
      ppcVar14[2] = (code *)param_1;
      if (ppcStack_168 != (code **)0x0) {
        (**(code **)(*ppcStack_168 + 0x38))();
      }
      ppcVar14[3] = param_2;
      puVar15 = (uint *)FUN_180145140(param_1[0x11] + 0x3018,&pcStack_140,
                                      *(undefined4 *)(param_1[0x11] + 0x3f50));
      uVar1 = puVar15[2];
      uVar9 = puVar15[1];
      *(uint *)((longlong)ppcVar14 + 0x24) = *puVar15 ^ 0x80000000;
      *(uint *)(ppcVar14 + 5) = uVar9 ^ 0x80000000;
      *(uint *)((longlong)ppcVar14 + 0x2c) = uVar1 ^ 0x80000000;
      *(undefined4 *)(ppcVar14 + 6) = 0x7f7fffff;
      pcVar5 = param_1[0x11];
      fVar2 = *(float *)(pcVar5 + 0x30c8);
      fStack_160 = fVar2 * *(float *)(pcVar5 + 0x30e4);
      fVar3 = *(float *)(pcVar5 + 0x30e0);
      uStack_15c = 0x7f7fffff;
      *(float *)((longlong)ppcVar14 + 0x34) = fVar2 * *(float *)(pcVar5 + 0x30dc);
      *(float *)(ppcVar14 + 7) = fVar2 * fVar3;
      *(float *)((longlong)ppcVar14 + 0x3c) = fStack_160;
      *(undefined4 *)(ppcVar14 + 8) = 0x7f7fffff;
      ppcStack_168 = &pcStack_140;
      pcStack_130 = (code *)&UNK_1802e4bc0;
      puStack_128 = &UNK_1800ee4c0;
      pcStack_140 = FUN_18031d520;
      ppcStack_150 = &pcStack_140;
      (*(code *)&UNK_1800ee4c0)(ppcVar14,&pcStack_140);
      if (pcStack_130 != (code *)0x0) {
        (*pcStack_130)(&pcStack_140,0,0);
      }
      if (pcStack_120 != (code *)0x0) {
        (**(code **)(*(longlong *)pcStack_120 + 0x38))();
      }
      if (plStack_c0 != (longlong *)0x0) {
        (**(code **)(*plStack_c0 + 0x38))();
      }
      ppcStack_168 = &pcStack_f0;
      pcStack_f0 = (code *)&UNK_180a3c3e0;
      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_e8 = 0;
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
      pcStack_f0 = (code *)&UNK_18098bcb0;
      if (plStack_f8 != (longlong *)0x0) {
        (**(code **)(*plStack_f8 + 0x38))();
      }
      goto LAB_18031df5a;
    }
  }
  iVar4 = *(int *)(param_2 + 0x4c);
  *(int *)(param_2 + 0x4c) = iVar4 + 1;
  if (iVar4 + 1 == 0x18) {
    *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  }
LAB_18031df5a:
  if (ppcStack_148 != (code **)0x0) {
    (**(code **)(*ppcStack_148 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1c8);
}





// 函数: void FUN_18031dfa0(longlong param_1)
void FUN_18031dfa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if (lVar1 != 0) {
    FUN_18045fb80(lVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031e050(longlong param_1)
void FUN_18031e050(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  int iStack_c8;
  longlong *plStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x60) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    plStack_a8 = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_18031e20e;
    lVar4 = *plVar5;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x70);
    plStack_90 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
      iVar1 = *(int *)(param_1 + 0x60);
      puStack_88 = &UNK_1809fcc58;
      puStack_80 = auStack_70;
      auStack_70[0] = 0;
      uStack_78 = 0x10;
      strcpy_s(auStack_70,0x40,&UNK_180a1ae20);
      uStack_b0 = 1;
      uStack_b8 = 1;
      uStack_d0 = 0x10;
      uStack_d8 = 0;
      uStack_e0 = 1;
      uStack_e8 = 0x41;
      iStack_c8 = iVar1 * 7;
      plStack_c0 = plVar5;
      puVar3 = (undefined8 *)FUN_1800b0a10();
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_a8 = *(longlong **)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1c8) = uVar2;
      if (plStack_a8 != (longlong *)0x0) {
        (**(code **)(*plStack_a8 + 0x38))();
      }
      if (plStack_a0 != (longlong *)0x0) {
        (**(code **)(*plStack_a0 + 0x38))();
      }
      puStack_88 = &UNK_18098bcb0;
      plStack_a8 = *(longlong **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plStack_a8 != (longlong *)0x0) {
        (**(code **)(*plStack_a8 + 0x38))();
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_18031e20e;
    lVar4 = *plVar5;
  }
  (**(code **)(lVar4 + 0x38))(plVar5);
LAB_18031e20e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_18031e240(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 param_4)
void FUN_18031e240(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uVar2;
  
  pfVar1 = &fStack_18;
  FUN_18031c410(pfVar1,param_4,&fStack_38,auStack_28,pfVar1);
  uVar2 = (undefined4)((ulonglong)pfVar1 >> 0x20);
  fStack_38 = fStack_38 + *param_3;
  fStack_34 = fStack_34 + param_3[1];
  fStack_30 = fStack_30 + param_3[2];
  fStack_18 = *param_3;
  fStack_14 = param_3[1];
  fStack_10 = param_3[2];
  fStack_c = param_3[3];
  uStack_2c = 0x7f7fffff;
  FUN_180287020(param_2,&fStack_18,&fStack_38,auStack_28);
  FUN_180286e40(0x41200000,0x3fc90fdb,0x3f800000,0x3c23d70a,CONCAT44(uVar2,0x41200000));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031e320(longlong param_1,longlong param_2)
void FUN_18031e320(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_218 [32];
  undefined1 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined1 uStack_18c;
  undefined8 uStack_18b;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [136];
  ulonglong uStack_88;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  uStack_1d8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  if (plVar5 != (longlong *)0x0) {
    plStack_178 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_178 = *(longlong **)(param_2 + 0x97a0);
  *(longlong **)(param_2 + 0x97a0) = plVar5;
  if (plStack_178 != (longlong *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x24c);
  *(undefined8 *)(param_2 + 0x97c8) = *(undefined8 *)(param_1 + 0x244);
  *(undefined8 *)(param_2 + 0x97d0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x25c);
  *(undefined8 *)(param_2 + 0x97d8) = *(undefined8 *)(param_1 + 0x254);
  *(undefined8 *)(param_2 + 0x97e0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x26c);
  *(undefined8 *)(param_2 + 0x97e8) = *(undefined8 *)(param_1 + 0x264);
  *(undefined8 *)(param_2 + 0x97f0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x27c);
  *(undefined8 *)(param_2 + 0x97f8) = *(undefined8 *)(param_1 + 0x274);
  *(undefined8 *)(param_2 + 0x9800) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x28c);
  *(undefined8 *)(param_2 + 0x9808) = *(undefined8 *)(param_1 + 0x284);
  *(undefined8 *)(param_2 + 0x9810) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x29c);
  *(undefined8 *)(param_2 + 0x9818) = *(undefined8 *)(param_1 + 0x294);
  *(undefined8 *)(param_2 + 0x9820) = uVar6;
  fVar13 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x4b4);
  fVar14 = *(float *)(param_2 + 0x97cc);
  fVar1 = *(float *)(param_2 + 0x97c8);
  fVar19 = *(float *)(param_2 + 0x97d0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97c8) = fVar18;
    *(float *)(param_2 + 0x97cc) = fVar14;
    *(float *)(param_2 + 0x97d0) = fVar19;
    *(undefined4 *)(param_2 + 0x97d4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97dc);
  fVar1 = *(float *)(param_2 + 0x97d8);
  fVar19 = *(float *)(param_2 + 0x97e0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97d8) = fVar18;
    *(float *)(param_2 + 0x97dc) = fVar14;
    *(float *)(param_2 + 0x97e0) = fVar19;
    *(undefined4 *)(param_2 + 0x97e4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97ec);
  fVar1 = *(float *)(param_2 + 0x97e8);
  fVar19 = *(float *)(param_2 + 0x97f0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97e8) = fVar18;
    *(float *)(param_2 + 0x97ec) = fVar14;
    *(float *)(param_2 + 0x97f0) = fVar19;
    *(undefined4 *)(param_2 + 0x97f4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97fc);
  fVar1 = *(float *)(param_2 + 0x97f8);
  fVar19 = *(float *)(param_2 + 0x9800);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97f8) = fVar18;
    *(float *)(param_2 + 0x97fc) = fVar14;
    *(float *)(param_2 + 0x9800) = fVar19;
    *(undefined4 *)(param_2 + 0x9804) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x980c);
  fVar1 = *(float *)(param_2 + 0x9808);
  fVar19 = *(float *)(param_2 + 0x9810);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x9808) = fVar18;
    *(float *)(param_2 + 0x980c) = fVar14;
    *(float *)(param_2 + 0x9810) = fVar19;
    *(undefined4 *)(param_2 + 0x9814) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x981c);
  fVar1 = *(float *)(param_2 + 0x9818);
  fVar19 = *(float *)(param_2 + 0x9820);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar13 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar13,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x9818) = fVar18;
    *(float *)(param_2 + 0x981c) = fVar13;
    *(float *)(param_2 + 0x9820) = fVar19;
    *(undefined4 *)(param_2 + 0x9824) = 0x7f7fffff;
  }
  plVar5 = *(longlong **)(param_1 + 0x228);
  if (plVar5 != (longlong *)0x0) {
    plStack_170 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_170 = *(longlong **)(param_2 + 0x97b8);
  *(longlong **)(param_2 + 0x97b8) = plVar5;
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1d0);
  if (plVar5 != (longlong *)0x0) {
    plStack_168 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  uStack_1d8 = 1;
  plStack_168 = (longlong *)0x0;
  plStack_160 = *(longlong **)(param_2 + 0x97b0);
  *(longlong **)(param_2 + 0x97b0) = plVar5;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  uStack_1d8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  if (plVar5 != (longlong *)0x0) {
    plStack_158 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_158 = *(longlong **)(param_2 + 0x97a8);
  *(longlong **)(param_2 + 0x97a8) = plVar5;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  if (*(longlong *)(param_2 + 0x97a0) == 0) {
    uStack_1e8 = *(longlong **)(param_2 + 0x97c0);
    *(undefined8 *)(param_2 + 0x97c0) = 0;
    if (uStack_1e8 != (longlong *)0x0) {
      (**(code **)(*uStack_1e8 + 0x38))();
    }
    goto LAB_18031ebd1;
  }
  puStack_1d0 = &UNK_180a3c3e0;
  uStack_1b8 = 0;
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1c0 = 0;
  puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x1c,0x13);
  *(undefined1 *)puVar10 = 0;
  puStack_1c8 = puVar10;
  uVar8 = FUN_18064e990(puVar10);
  *puVar10 = 0x666669645f747270;
  puVar10[1] = 0x69626d615f657375;
  puVar10[2] = 0x757365725f746e65;
  *(undefined4 *)(puVar10 + 3) = 0x5f746c;
  uStack_1c0 = 0x1b;
  lVar12 = *(longlong *)(param_1 + 0x88);
  iVar9 = *(int *)(lVar12 + 0x4e8);
  uStack_1b8._0_4_ = uVar8;
  if (0 < iVar9) {
    if ((iVar9 != -0x1b) && (uVar8 < iVar9 + 0x1cU)) {
      uStack_1f8 = 0x13;
      puVar10 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,iVar9 + 0x1cU,0x10);
      puStack_1c8 = puVar10;
      uStack_1b8._0_4_ = FUN_18064e990(puVar10);
      iVar9 = *(int *)(lVar12 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar10 + 0x1b),*(undefined8 *)(lVar12 + 0x4e0),
           (longlong)(iVar9 + 1));
  }
  uStack_1a8 = 1;
  uStack_1a4 = 1;
  uStack_19c = 0;
  uStack_194 = 0x3f80000000000000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  lVar12 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  dVar15 = 1.0;
  dVar17 = 1.0;
  if ((*(char *)(lVar12 + 0xd9) != '\0') &&
     (iVar9 = *(int *)(_DAT_180c86920 + 0x540), iVar9 - 1U < 4)) {
    dVar15 = *(double *)(lVar12 + -8 + (longlong)iVar9 * 0x10);
    dVar17 = *(double *)(lVar12 + (longlong)iVar9 * 0x10);
  }
  uStack_1b0 = (undefined4)(longlong)((double)*(float *)(param_2 + 0x11c20) / dVar15);
  uStack_1ac = (undefined4)(longlong)((double)*(float *)(param_2 + 0x11c24) / dVar17);
  uStack_1a0 = 0x1e;
  puStack_128 = &UNK_1809fcc28;
  puStack_120 = auStack_110;
  auStack_110[0] = 0;
  uStack_118 = 0x1b;
  puVar11 = (undefined8 *)&DAT_18098bc73;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  strcpy_s(auStack_110,0x80,puVar11);
  lVar12 = *(longlong *)(param_1 + 0x230);
  if (lVar12 == 0) {
LAB_18031eaf0:
    puVar11 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_148,&puStack_128,&uStack_1b0);
    uVar6 = *puVar11;
    *puVar11 = 0;
    plStack_150 = *(longlong **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = uVar6;
    if (plStack_150 != (longlong *)0x0) {
      (**(code **)(*plStack_150 + 0x38))();
    }
    if (plStack_148 != (longlong *)0x0) {
      (**(code **)(*plStack_148 + 0x38))();
    }
  }
  else {
    cVar7 = func_0x0001800ba3b0(lVar12 + 0x108,&uStack_1b0);
    if ((cVar7 == '\0') || (puVar10 = puStack_1c8, *(int *)(lVar12 + 0x380) == 0))
    goto LAB_18031eaf0;
  }
  _Thrd_id();
  puStack_128 = &UNK_18098bcb0;
  plVar5 = *(longlong **)(param_1 + 0x230);
  if (plVar5 != (longlong *)0x0) {
    plStack_140 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_140 = *(longlong **)(param_2 + 0x97c0);
  *(longlong **)(param_2 + 0x97c0) = plVar5;
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  puStack_1d0 = &UNK_180a3c3e0;
  if (puVar10 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1b8 = (ulonglong)uStack_1b8._4_4_ << 0x20;
  puStack_1d0 = &UNK_18098bcb0;
LAB_18031ebd1:
  fVar13 = *(float *)(param_1 + 0x210);
  fVar14 = *(float *)(param_1 + 0x214);
  uVar2 = *(undefined4 *)(param_1 + 500);
  uVar3 = *(undefined4 *)(param_1 + 0x1f8);
  iVar9 = *(int *)(param_1 + 0x1e4);
  *(undefined4 *)(param_2 + 0x9750) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_2 + 0x9754) = uVar2;
  *(undefined4 *)(param_2 + 0x9758) = uVar3;
  *(float *)(param_2 + 0x975c) = (float)iVar9;
  uVar2 = *(undefined4 *)(param_1 + 0x204);
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  iVar9 = *(int *)(param_1 + 0x1e8);
  *(undefined4 *)(param_2 + 0x9760) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(param_2 + 0x9764) = uVar2;
  *(undefined4 *)(param_2 + 0x9768) = uVar3;
  *(float *)(param_2 + 0x976c) = (float)iVar9;
  fVar13 = 1.0 / fVar13;
  iVar9 = *(int *)(param_1 + 0x1ec);
  *(float *)(param_2 + 0x9770) = fVar13;
  *(float *)(param_2 + 0x9774) = fVar13;
  *(float *)(param_2 + 0x9778) = 1.0 / fVar14;
  *(float *)(param_2 + 0x977c) = (float)iVar9;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x4b0);
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x4ac);
  uStack_1e8 = (longlong *)CONCAT44(uVar3,uVar2);
  *(undefined4 *)(param_2 + 0x9780) = uVar2;
  *(undefined4 *)(param_2 + 0x9784) = uVar3;
  *(undefined4 *)(param_2 + 0x9788) = 0;
  *(undefined4 *)(param_2 + 0x978c) = 0;
  iVar9 = *(int *)(param_1 + 0x23c);
  iVar4 = *(int *)(param_1 + 0x240);
  uStack_1e0 = 0x3f80000000000000;
  *(float *)(param_2 + 0x9790) = (float)*(int *)(param_1 + 0x238);
  *(float *)(param_2 + 0x9794) = (float)iVar9;
  *(float *)(param_2 + 0x9798) = (float)iVar4;
  *(undefined4 *)(param_2 + 0x979c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_218);
}





// 函数: void FUN_18031ed90(undefined8 **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_18031ed90(undefined8 **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  uStack_38 = 3;
  if (&puStack_50 != param_1) {
    FUN_1800588c0(&puStack_50,*param_1,param_1[1],param_4,0xfffffffffffffffe);
  }
  puVar3 = puStack_48;
  puVar2 = puStack_50;
  FUN_18031f0e0(puStack_50,puStack_48);
  (**(code **)(*param_2 + 0x10))(param_2,&DAT_18098bc73);
  uVar9 = (longlong)puVar3 - (longlong)puVar2 >> 5;
  iVar7 = 0;
  puVar1 = puVar2;
  if (uVar9 != 0) {
    piVar8 = (int *)(puVar2 + 2);
    do {
      iVar6 = *piVar8;
      if (iVar6 == 4) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 + 1;
          if (*(char *)(*(longlong *)(piVar8 + -2) + lVar4) != (&DAT_180a04ee4)[lVar4])
          goto LAB_18031ee56;
          lVar4 = lVar5;
        } while (lVar5 != 5);
      }
      else {
LAB_18031ee56:
        if (0 < iVar6) {
          FUN_1806277c0(param_2,(int)param_2[2] + iVar6);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(undefined8 *)(piVar8 + -2),
                 (longlong)(*piVar8 + 1));
        }
        iVar6 = (int)param_2[2] + 1;
        FUN_1806277c0(param_2,iVar6);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x20;
        *(int *)(param_2 + 2) = iVar6;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 8;
    } while ((ulonglong)(longlong)iVar7 < uVar9);
  }
  for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}



undefined8 *
FUN_18031ef00(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a1ae60;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





