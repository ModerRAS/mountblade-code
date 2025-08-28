#include "TaleWorlds.Native.Split.h"

// 03_rendering_part514_sub001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part514.c - 7 个函数


// 函数: void FUN_180541920(longlong param_1,longlong param_2)
void FUN_180541920(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [120];
  
  uStack_f8 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49f68) && (FUN_1808fcb90(&DAT_180d49f68), _DAT_180d49f68 == -1)) {



// 函数: void FUN_180542260(longlong param_1)
void FUN_180542260(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0x818) - *(longlong *)(param_1 + 0x810) >> 3 != 0) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
      FUN_1805ec620(*(undefined8 *)(uVar2 + *(longlong *)(param_1 + 0x810)),0,0,uVar1,uVar1,0);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x818) - *(longlong *)(param_1 + 0x810) >> 3));
  }
  return;
}






// 函数: void FUN_180542286(void)
void FUN_180542286(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  uint unaff_EDI;
  undefined1 uStack0000000000000028;
  
  uVar2 = (ulonglong)unaff_EDI;
  do {
    uStack0000000000000028 = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x8a8) + 0x260);
    FUN_1805ec620(*(undefined8 *)(uVar2 + *(longlong *)(unaff_RBX + 0x810)),0,0,uVar1,uVar1);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x818) - *(longlong *)(unaff_RBX + 0x810) >> 3));
  return;
}






// 函数: void FUN_1805422e2(void)
void FUN_1805422e2(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805422f0(longlong param_1,uint *param_2,float *param_3,undefined8 param_4)
void FUN_1805422f0(longlong param_1,uint *param_2,float *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong ******pppppplVar2;
  longlong *****ppppplVar3;
  longlong *plVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *******ppppppplVar7;
  uint uVar8;
  longlong ******pppppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *******ppppppplVar12;
  longlong lVar13;
  longlong *******ppppppplVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong ******pppppplVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  float fVar22;
  undefined1 auStack_1f8 [32];
  longlong *******ppppppplStack_1d8;
  longlong *******ppppppplStack_1d0;
  longlong *******ppppppplStack_1c8;
  undefined8 uStack_1c0;
  undefined8 **ppuStack_1b8;
  longlong *******ppppppplStack_1a8;
  undefined4 uStack_1a0;
  longlong *plStack_198;
  longlong *******ppppppplStack_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  longlong *******ppppppplStack_170;
  float *pfStack_168;
  longlong *******ppppppplStack_160;
  longlong *******ppppppplStack_158;
  longlong ******pppppplStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined4 uStack_130;
  longlong *******ppppppplStack_128;
  longlong *******ppppppplStack_120;
  longlong *plStack_118;
  longlong ******pppppplStack_110;
  float *pfStack_108;
  longlong *******ppppppplStack_100;
  longlong ******pppppplStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong *******ppppppplStack_d8;
  float **ppfStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  ppppppplVar14 = (longlong *******)0x0;
  uStack_1a0 = 0;
  fStack_c4 = param_3[1];
  fStack_c0 = param_3[2];
  fStack_bc = param_3[3];
  uStack_b8 = *(undefined8 *)(param_3 + 4);
  uStack_b0 = *(undefined8 *)(param_3 + 6);
  uStack_a8 = *(undefined8 *)(param_3 + 8);
  uStack_a0 = *(undefined8 *)(param_3 + 10);
  uStack_98 = *(undefined8 *)(param_3 + 0xc);
  uStack_90 = *(undefined8 *)(param_3 + 0xe);
  uStack_88 = *(undefined8 *)(param_3 + 0x10);
  uStack_80 = *(undefined8 *)(param_3 + 0x12);
  fStack_c8 = (float)(int)*param_3;
  lStack_f0 = param_1;
  uStack_e8 = param_4;
  pppppplVar9 = (longlong ******)FUN_18062b1e0(_DAT_180c8ed18,0x570,4,3);
  *(undefined4 *)(pppppplVar9 + 0xad) = 0x41c64e6d;
  *(undefined1 *)((longlong)pppppplVar9 + 0x56c) = 0;
  ppppppplStack_1d8._0_4_ = param_2[7];
  pppppplStack_f8 = pppppplVar9;
  FUN_180570190(pppppplVar9,param_2[9],param_2[8],&fStack_c8);
  ppppppplStack_1d8 =
       (longlong *******)
       CONCAT44(ppppppplStack_1d8._4_4_,*(undefined4 *)((longlong)pppppplVar9 + 0x55c));
  FUN_1804bba40(0x180c95de0,*(undefined4 *)(pppppplVar9 + 2),
                *(undefined4 *)((longlong)pppppplVar9 + 0x14),
                *(undefined4 *)((longlong)pppppplVar9 + 0x53c));
  pppppplVar2 = *(longlong *******)(param_1 + 0x260);
  pppppplStack_150 = pppppplVar2;
  if ((*param_2 & 0x20) != 0) {
    ppppppplStack_1d8 = (longlong *******)CONCAT44(ppppppplStack_1d8._4_4_,param_2[2]);
    uVar10 = FUN_1804bc2d0(0x180c95de0,param_2[9],param_2[8],
                           *(undefined4 *)((longlong)pppppplVar9 + 0x53c));
    uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    ppppppplVar12 = (longlong *******)FUN_180275090(uVar11);
    ppppppplStack_170 = ppppppplVar12;
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_1a0 = 1;
    FUN_180275a60(uVar10,ppppppplVar12,1);
    fVar22 = *(float *)(pppppplVar9 + 0xa8);
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    ppppplVar3 = (*ppppppplVar12)[0x21];
    uVar8 = FUN_1804bbc50(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (longlong *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar12,&uStack_188);
    fStack_17c = (float)(-(int)(fVar22 * fVar22 * 255.0) - 1U & 0xff) * 0.003921569;
    uStack_188 = (longlong *******)0x0;
    fStack_180 = 0.0;
    pppppplVar18 = ppppppplVar12[7];
    if (pppppplVar18 < ppppppplVar12[8]) {
      do {
        ppppplVar3 = *pppppplVar18;
        ppppplVar3[0x49] = (longlong ****)0x0;
        ppppplVar3[0x4a] = (longlong ****)((ulonglong)(uint)fStack_17c << 0x20);
        pppppplVar18 = pppppplVar18 + 2;
      } while (pppppplVar18 < ppppppplVar12[8]);
    }
    FUN_1802fc0f0(pppppplVar2,ppppppplVar12);
    if (param_2[1] != 0) {
      ppppppplStack_1d8 =
           (longlong *******)
           CONCAT44(ppppppplStack_1d8._4_4_,*(undefined4 *)((longlong)pppppplVar9 + 0x53c));
      lVar13 = FUN_1804bc420(0x180c95de0,param_2[9],param_2[8]);
      if (lVar13 != 0) {
        FUN_1802759e0(lVar13,&uStack_178);
        ppppppplStack_1a8 = uStack_178;
        if (uStack_178 != (longlong *******)0x0) {
          (*(code *)(*uStack_178)[5])();
        }
        ppppppplStack_158 = (longlong *******)&ppppppplStack_1a8;
        FUN_1802fc0f0(pppppplVar2,ppppppplStack_1a8);
        if (ppppppplStack_1a8 != (longlong *******)0x0) {
          (*(code *)(*ppppppplStack_1a8)[7])();
        }
        if (uStack_178 != (longlong *******)0x0) {
          (*(code *)(*uStack_178)[7])();
        }
      }
    }
    uStack_1a0 = 0;
    (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
  }
  ppppppplStack_128 = (longlong *******)0x0;
  ppppppplStack_120 = (longlong *******)0x0;
  if ((*param_2 & 0x80) != 0) {
    uVar10 = FUN_1804bc380(0x180c95de0,param_2[9],param_2[8],
                           *(undefined4 *)((longlong)pppppplVar9 + 0x53c));
    uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    ppppppplVar14 = (longlong *******)FUN_180275090(uVar11);
    ppppppplStack_190 = ppppppplVar14;
    ppppppplStack_128 = ppppppplVar14;
    if (ppppppplVar14 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar14)[5])(ppppppplVar14);
    }
    uStack_1a0 = 2;
    FUN_180275a60(uVar10,ppppppplVar14,1);
    ppppppplStack_190 = (longlong *******)0x0;
    plStack_198 = (longlong *)0x0;
    uStack_1a0 = 0;
    ppppplVar3 = (*ppppppplVar14)[0x21];
    ppppppplStack_120 = ppppppplVar14;
    uVar8 = FUN_1804bbc50(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (longlong *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar14,&uStack_188);
    ppppppplStack_1a8 = ppppppplVar14;
    (*(code *)(*ppppppplVar14)[5])(ppppppplVar14);
    ppppppplStack_170 = (longlong *******)&ppppppplStack_1a8;
    FUN_1802fc0f0(pppppplVar2,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
  }
  if ((*param_2 & 0x100) != 0) {
    uVar10 = FUN_1804bc4f0(0x180c95de0,param_2[9],param_2[8],
                           *(undefined4 *)((longlong)pppppplVar9 + 0x53c));
    uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    ppppppplVar12 = (longlong *******)FUN_180275090(uVar11);
    ppppppplStack_170 = ppppppplVar12;
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_1a0 = 4;
    FUN_180275a60(uVar10,ppppppplVar12,1);
    ppppplVar3 = (*ppppppplVar12)[0x21];
    uVar8 = FUN_1804bbc50(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (longlong *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar12,&uStack_188);
    ppppppplStack_1a8 = ppppppplVar12;
    (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    ppppppplStack_158 = (longlong *******)&ppppppplStack_1a8;
    FUN_1802fc0f0(pppppplVar2,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
    uStack_1a0 = 0;
    (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
  }
  ppppppplVar12 = (longlong *******)0x0;
  ppppppplStack_158 = (longlong *******)0x0;
  if ((*param_2 & 1) != 0) {
    if (((param_2[3] & 0xfffffffa) == 0) && (param_2[3] != 5)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    uVar10 = FUN_1805707a0(pppppplVar9,uVar10);
    plStack_118 = (longlong *)0x0;
    pppppplStack_110 = (longlong ******)0x0;
    pfStack_108 = (float *)0x0;
    ppppppplStack_100 = (longlong *******)0x0;
    plVar15 = (longlong *)FUN_1804bca40(uVar10,&plStack_198,pppppplVar9);
    plVar4 = (longlong *)*plVar15;
    *plVar15 = 0;
    ppppppplStack_190 = (longlong *******)0x0;
    uVar10 = extraout_XMM0_Qa;
    plStack_118 = plVar4;
    if (plStack_198 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    plVar15 = (longlong *)FUN_1804bd030(uVar10,&plStack_198,pppppplVar9,param_2[3]);
    pppppplVar2 = (longlong ******)*plVar15;
    *plVar15 = 0;
    ppppppplStack_190 = (longlong *******)0x0;
    uVar10 = extraout_XMM0_Qa_00;
    pppppplStack_110 = pppppplVar2;
    if (plStack_198 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    puVar16 = (undefined8 *)FUN_1804bd2b0(uVar10,&plStack_198,pppppplVar9,param_2[4]);
    pfVar5 = (float *)*puVar16;
    *puVar16 = 0;
    ppppppplStack_190 = (longlong *******)0x0;
    uVar10 = extraout_XMM0_Qa_01;
    pfStack_108 = pfVar5;
    if (plStack_198 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    puVar16 = (undefined8 *)FUN_1804bce70(uVar10,&ppppppplStack_160,pppppplVar9);
    ppppppplVar12 = (longlong *******)*puVar16;
    *puVar16 = 0;
    ppppppplStack_190 = (longlong *******)0x0;
    ppppppplStack_170 = ppppppplVar12;
    ppppppplStack_100 = ppppppplVar12;
    if (ppppppplStack_160 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_160)[7])();
    }
    ppppppplStack_160 = (longlong *******)FUN_18062b1e0(_DAT_180c8ed18,0x1a8,8,0x12);
    ppppppplStack_190 = (longlong *******)&uStack_178;
    uStack_178 = ppppppplVar12;
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    ppppppplStack_d8 = (longlong *******)&ppppppplStack_1a8;
    ppppppplStack_1a8 = (longlong *******)pppppplVar2;
    if (pppppplVar2 != (longlong ******)0x0) {
      (*(code *)(*pppppplVar2)[5])(pppppplVar2);
    }
    ppfStack_d0 = &pfStack_168;
    pfStack_168 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      (**(code **)(*(longlong *)pfVar5 + 0x28))(pfVar5);
    }
    uStack_188 = (longlong *******)&plStack_198;
    plStack_198 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
    ppppppplStack_1c8 = (longlong *******)CONCAT71(ppppppplStack_1c8._1_7_,1);
    ppppppplStack_1d0 = (longlong *******)0x0;
    ppppppplStack_1d8 = (longlong *******)&uStack_178;
    ppppppplVar12 =
         (longlong *******)
         FUN_180546fa0(ppppppplStack_160,&plStack_198,&pfStack_168,&ppppppplStack_1a8);
    if (ppppppplVar12 != (longlong *******)0x0) {
      ppppppplStack_160 = ppppppplVar12;
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    ppppppplStack_160 = (longlong *******)0x0;
    ppppppplStack_1a8 = ppppppplVar12;
    ppppppplStack_158 = ppppppplVar12;
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_188 = (longlong *******)&ppppppplStack_1a8;
    FUN_1802fc0f0(pppppplStack_150,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
    *(undefined1 *)(ppppppplVar12 + 0x32) = 0;
    (*(code *)(*ppppppplVar12)[0x38])(ppppppplVar12,0x40000000,0xffffffff);
    *(bool *)((longlong)ppppppplVar12 + 0x194) = *(byte *)((longlong)param_2 + 0x1a) != 0;
    *(bool *)((longlong)ppppppplVar12 + 0x193) = *(byte *)((longlong)param_2 + 0x19) != 0;
    uVar8 = param_2[4];
    uVar1 = param_2[3];
    ppppppplVar12[0x30] = pppppplStack_150;
    *(uint *)((longlong)ppppppplVar12 + 0x174) = uVar1;
    *(uint *)(ppppppplVar12 + 0x2f) = uVar8;
    ppppppplVar12[0x31] = pppppplVar9;
    *(undefined1 *)((longlong)pppppplVar9 + 0x565) = 0;
    FUN_18054a3b0(ppppppplVar12,pppppplStack_150,param_2[5]);
    FUN_180548880(ppppppplVar12,1);
    if (ppppppplStack_170 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_170)[7])();
    }
    if (pfVar5 != (float *)0x0) {
      (**(code **)(*(longlong *)pfVar5 + 0x38))(pfVar5);
    }
    if (pppppplVar2 != (longlong ******)0x0) {
      (*(code *)(*pppppplVar2)[7])(pppppplVar2);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
  }
  puStack_148 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = 3;
  uVar8 = func_0x0001804bb9d0(*(undefined4 *)(pppppplVar9 + 2),
                              *(undefined4 *)((longlong)pppppplVar9 + 0x14),
                              *(undefined4 *)((longlong)pppppplVar9 + 0x53c));
  puVar17 = (undefined8 *)0x180c95e98;
  puVar16 = _DAT_180c95ea8;
  while (puVar16 != (undefined8 *)0x0) {
    if (*(uint *)(puVar16 + 4) < uVar8) {
      puVar16 = (undefined8 *)*puVar16;
    }
    else {
      puVar17 = puVar16;
      puVar16 = (undefined8 *)puVar16[1];
    }
  }
  ppppppplStack_1a8._0_4_ = uVar8;
  if ((puVar17 == (undefined8 *)0x180c95e98) || (uVar8 < *(uint *)(puVar17 + 4))) {
    ppppppplStack_1d8 = (longlong *******)&ppppppplStack_1a8;
    puVar17 = (undefined8 *)FUN_1804c0610(0x180c95e98,&uStack_188,0x180c95e98,puVar17);
    puVar17 = (undefined8 *)*puVar17;
  }
  ppppppplStack_170 = (longlong *******)puVar17[5];
  lVar13 = (longlong)*(int *)((longlong)ppppppplStack_170 + 0x298);
  ppppppplStack_190 = (longlong *******)lVar13;
  FUN_1800e8140(&puStack_148,lVar13);
  ppppppplVar7 = ppppppplStack_170;
  uVar8 = param_2[4];
  ppppppplStack_1a8 = (longlong *******)CONCAT44(ppppppplStack_1a8._4_4_,uVar8);
  puVar16 = puStack_148;
  if (0 < lVar13) {
    lVar20 = 0;
    pfStack_168 = (float *)((longlong)pppppplVar9 + 0x3c);
    puVar17 = puStack_138;
    puVar19 = puStack_140;
    puVar21 = puStack_148;
    do {
      fVar22 = *pfStack_168;
      if ((uVar8 == 5) &&
         (*(char *)(*(longlong *)((longlong)ppppppplVar7 + 0x290) + 0x51 + lVar20) != '\0')) {
        fVar22 = 0.0;
      }
      lVar6 = *(longlong *)((longlong)ppppppplVar7 + 0x290);
      fVar22 = (*(float *)(lVar6 + 0x4c + lVar20) - *(float *)(lVar6 + 0x48 + lVar20)) * fVar22 +
               *(float *)(lVar6 + 0x48 + lVar20);
      puVar16 = puVar21;
      if (fVar22 != 0.0) {
        uStack_178 = (longlong *******)CONCAT44(fVar22,*(undefined4 *)(lVar6 + 0x44 + lVar20));
        if (puVar19 < puVar17) {
          *puVar19 = uStack_178;
          ppppppplStack_190 = (longlong *******)lVar13;
        }
        else {
          ppppppplStack_170 = (longlong *******)((longlong)puVar19 - (longlong)puVar21);
          if ((longlong)ppppppplStack_170 >> 3 == 0) {
            plStack_198 = (longlong *)0x1;
LAB_180542d7d:
            puVar16 = (undefined8 *)
                      FUN_18062b420(_DAT_180c8ed18,(longlong)plStack_198 * 8,(undefined1)uStack_130)
            ;
          }
          else {
            plStack_198 = (longlong *)(((longlong)ppppppplStack_170 >> 3) * 2);
            if (plStack_198 != (longlong *)0x0) goto LAB_180542d7d;
            puVar16 = (undefined8 *)0x0;
          }
          if (puVar21 != puVar19) {
                    // WARNING: Subroutine does not return
            memmove(puVar16,puVar21,ppppppplStack_170);
          }
          *puVar16 = uStack_178;
          if (puVar21 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar21);
          }
          puVar17 = puVar16 + (longlong)plStack_198;
          puStack_148 = puVar16;
          puStack_138 = puVar17;
          puVar19 = puVar16;
        }
        puVar19 = puVar19 + 1;
        lVar13 = (longlong)ppppppplStack_190;
        uVar8 = (uint)ppppppplStack_1a8;
        puStack_140 = puVar19;
      }
      pfStack_168 = pfStack_168 + 1;
      lVar20 = lVar20 + 0xa8;
      lVar13 = lVar13 + -1;
      puVar21 = puVar16;
      ppppppplStack_190 = (longlong *******)lVar13;
    } while (lVar13 != 0);
    ppppppplStack_190 = (longlong *******)0x0;
    ppppppplVar14 = ppppppplStack_128;
    pppppplVar9 = pppppplStack_f8;
  }
  ppuStack_1b8 = &puStack_148;
  uStack_1c0 = uStack_e8;
  ppppppplStack_1d8 =
       (longlong *******)
       CONCAT44(ppppppplStack_1d8._4_4_,*(undefined4 *)((longlong)pppppplVar9 + 0x53c));
  ppppppplStack_1d0 = ppppppplVar12;
  ppppppplStack_1c8 = ppppppplVar14;
  FUN_180573020(*(undefined8 *)(*(longlong *)(lStack_f0 + 0x260) + 0x210),pppppplStack_150[0x41],
                *(undefined4 *)(pppppplVar9 + 2),*(undefined4 *)((longlong)pppppplVar9 + 0x14));
  if (puVar16 == (undefined8 *)0x0) {
    if (ppppppplVar12 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
    }
    if (ppppppplVar14 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar14)[7])(ppppppplVar14);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_1f8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar16);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180542ed0(longlong param_1,uint *param_2,float *param_3,undefined1 param_4)
void FUN_180542ed0(longlong param_1,uint *param_2,float *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined8 **ppuStack_d8;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 *puStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_c8 = (longlong *)((ulonglong)uStack_c8 & 0xffffffff00000000);
  fStack_94 = param_3[1];
  fStack_90 = param_3[2];
  fStack_8c = param_3[3];
  uStack_88 = *(undefined8 *)(param_3 + 4);
  uStack_80 = *(undefined8 *)(param_3 + 6);
  uStack_78 = *(undefined8 *)(param_3 + 8);
  uStack_70 = *(undefined8 *)(param_3 + 10);
  uStack_68 = *(undefined8 *)(param_3 + 0xc);
  uStack_60 = *(undefined8 *)(param_3 + 0xe);
  fStack_58 = param_3[0x10];
  fStack_54 = param_3[0x11];
  fStack_50 = param_3[0x12];
  fStack_4c = param_3[0x13];
  fStack_98 = (float)(int)*param_3;
  lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x570,4,3);
  *(undefined4 *)(lVar4 + 0x568) = 0x41c64e6d;
  *(undefined1 *)(lVar4 + 0x56c) = 0;
  ppuStack_d8._0_4_ = param_2[7];
  FUN_180570190(lVar4,param_2[9],param_2[8],&fStack_98);
  ppuStack_d8 = (undefined8 **)CONCAT44(ppuStack_d8._4_4_,*(undefined4 *)(lVar4 + 0x55c));
  fVar9 = (float)FUN_1804bba40(0x180c95de0,*(undefined4 *)(lVar4 + 0x10),
                               *(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x53c));
  fVar11 = *(float *)(param_1 + 0x8c0) - fVar9;
  if (((fVar11 <= -0.001) || (0.001 <= fVar11)) &&
     (*(float *)(param_1 + 0x8c0) = fVar9, _DAT_180c96070 != 0)) {
    *(undefined1 *)(_DAT_180c96070 + 0x87b728) = 1;
  }
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(lVar4 + 0x53c);
  uVar3 = func_0x0001804bb950(lVar4);
  puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,uVar3);
  puVar5 = (undefined8 *)0x180c95e98;
  puVar1 = _DAT_180c95ea8;
  while (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar3) {
      puVar1 = (undefined8 *)*puVar1;
    }
    else {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)puVar1[1];
    }
  }
  if ((puVar5 == (undefined8 *)0x180c95e98) || (uVar3 < *(uint *)(puVar5 + 4))) {
    ppuStack_d8 = &puStack_b8;
    puVar5 = (undefined8 *)FUN_1804c0610(0x180c95e98,&plStack_b0,0x180c95e98,puVar5);
    puVar5 = (undefined8 *)*puVar5;
  }
  uVar10 = func_0x000180544b60(param_1,(*(longlong *)
                                         (*(longlong *)(puVar5[5] + 0x3b8) +
                                         (longlong)*(int *)(lVar4 + 0x24) * 8) - _DAT_180c960e0) /
                                       0x60,*(undefined4 *)(lVar4 + 0x560));
  FUN_180543290(uVar10,param_2,lVar4);
  FUN_1805435c0(param_1,param_2,lVar4);
  if ((*param_2 & 0x100) != 0) {
    uVar10 = FUN_1804bc4f0(0x180c95de0,param_2[9],param_2[8],*(undefined4 *)(lVar4 + 0x53c));
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar7 = (longlong *)FUN_180275090(uVar6);
    plStack_b0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    FUN_180275a60(uVar10,plVar7,1);
    pcVar2 = *(code **)(*plVar7 + 0x108);
    uVar3 = FUN_1804bbc50(0x180c95de0,lVar4);
    fStack_bc = (float)(uVar3 >> 0x18) * 0.003921569;
    uStack_c8 = (longlong *)
                CONCAT44((float)(uVar3 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar3 >> 0x10 & 0xff) * 0.003921569);
    fStack_c0 = (float)(uVar3 & 0xff) * 0.003921569;
    (*pcVar2)(plVar7,&uStack_c8);
    puStack_b8 = &uStack_c8;
    uStack_c8 = plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    FUN_180544860(param_1,6,&uStack_c8);
    lVar8 = *(longlong *)(param_1 + 0x8a8);
    if (lVar8 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x260);
    }
    FUN_1802fc0f0(lVar8,*(undefined8 *)(param_1 + 0x48));
    uStack_c8 = (longlong *)((ulonglong)uStack_c8 & 0xffffffff00000000);
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  FUN_180544ac0(param_1);
  if ((*param_2 & 1) != 0) {
    FUN_1805439d0(param_1,param_2,lVar4,param_4);
  }
  FUN_180544ac0(param_1);
  FUN_1802f3c20(*(undefined8 *)(param_1 + 0x8a8));
  FUN_180544ac0(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




