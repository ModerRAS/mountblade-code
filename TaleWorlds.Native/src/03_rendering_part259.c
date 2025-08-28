#include "TaleWorlds.Native.Split.h"

// 03_rendering_part259.c - 5 个函数

// 函数: void FUN_180411390(void)
void FUN_180411390(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined2 *in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *puVar6;
  longlong unaff_RDI;
  longlong lVar7;
  int unaff_R12D;
  uint uVar8;
  int unaff_R13D;
  uint uVar9;
  longlong lVar10;
  ulonglong unaff_R14;
  uint uVar11;
  longlong *unaff_R15;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStackX_20;
  longlong *in_stack_00000028;
  undefined8 in_stack_00000030;
  int in_stack_00000058;
  int *piStack0000000000000060;
  int *piStack0000000000000068;
  undefined2 *puStack0000000000000070;
  int *piStack0000000000000078;
  
  uVar5 = unaff_R14 & 0xffffffff;
  piStack0000000000000068 = (int *)(unaff_RSI + 0x50);
  *(ulonglong *)(unaff_RBP + -0x58) = unaff_R14;
  piStack0000000000000060 = (int *)(unaff_RSI + 0x48);
  *(longlong *)(unaff_RBP + -0x80) = unaff_RSI + 0xa8;
  piStack0000000000000078 = (int *)(unaff_RSI + 0xa0);
  puStack0000000000000070 = in_RAX;
  do {
    iVar2 = (**(code **)(*unaff_R15 + 8))(unaff_R15,unaff_R12D);
    if (iVar2 - 3U < 2) {
      uVar11 = unaff_R12D * 4;
      *piStack0000000000000060 = unaff_R12D;
      uVar8 = uVar11 | 1;
      *piStack0000000000000068 = unaff_R13D;
      uVar9 = uVar11 | 2;
      if (iVar2 == 3) {
        lVar4 = 1;
        *puStack0000000000000070 = 0x100;
        lVar7 = 0x58;
        *(undefined1 *)(puStack0000000000000070 + 1) = 2;
        *(uint *)(uVar5 + 8 + unaff_RDI) = uVar9;
        lVar10 = 0xc;
        *(uint *)(uVar5 + unaff_RDI) = uVar11;
        *(uint *)(uVar5 + 4 + unaff_RDI) = uVar8;
      }
      else {
        *piStack0000000000000078 = in_stack_00000030._4_4_;
        **(int **)(unaff_RBP + -0x80) = iStackX_20;
        uVar3 = uVar11 | 3;
        (**(code **)(*in_stack_00000028 + 0x20))
                  (in_stack_00000028,unaff_RBP + -0x70,(int)uVar11 >> 2,0);
        (**(code **)(*in_stack_00000028 + 0x20))
                  (in_stack_00000028,unaff_RBP + -0x60,(int)uVar8 >> 2,1);
        (**(code **)(*in_stack_00000028 + 0x20))
                  (in_stack_00000028,unaff_RBP + -0x78,(int)uVar9 >> 2,2);
        (**(code **)(*in_stack_00000028 + 0x20))
                  (in_stack_00000028,unaff_RBP + -0x68,(int)uVar3 >> 2,3);
        fVar12 = *(float *)(unaff_RBP + -0x78) - *(float *)(unaff_RBP + -0x70);
        fVar14 = *(float *)(unaff_RBP + -0x74) - *(float *)(unaff_RBP + -0x6c);
        fVar13 = *(float *)(unaff_RBP + -0x68) - *(float *)(unaff_RBP + -0x60);
        fVar14 = fVar14 * fVar14 + fVar12 * fVar12;
        fVar12 = *(float *)(unaff_RBP + -100) - *(float *)(unaff_RBP + -0x5c);
        fVar12 = fVar12 * fVar12 + fVar13 * fVar13;
        if (fVar12 <= fVar14) {
          if (fVar14 <= fVar12) {
            (**(code **)(*in_stack_00000028 + 0x10))
                      (in_stack_00000028,unaff_RBP + -0x40,(int)uVar11 >> 2,0);
            (**(code **)(*in_stack_00000028 + 0x10))
                      (in_stack_00000028,unaff_RBP + -0x20,(int)uVar8 >> 2,1);
            (**(code **)(*in_stack_00000028 + 0x10))
                      (in_stack_00000028,unaff_RBP + -0x50,(int)uVar9 >> 2,2);
            (**(code **)(*in_stack_00000028 + 0x10))
                      (in_stack_00000028,unaff_RBP + -0x30,(int)uVar3 >> 2,3);
            fVar17 = *(float *)(unaff_RBP + -0x4c) - *(float *)(unaff_RBP + -0x3c);
            fVar14 = *(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c);
            fVar16 = *(float *)(unaff_RBP + -0x50) - *(float *)(unaff_RBP + -0x40);
            fVar13 = *(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20);
            fVar15 = *(float *)(unaff_RBP + -0x48) - *(float *)(unaff_RBP + -0x38);
            fVar12 = *(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18);
            bVar1 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 <=
                    fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = true;
        }
        *(undefined2 *)(unaff_R14 + 0x54 + unaff_RSI) = 0x100;
        lVar4 = 2;
        lVar7 = 0xb0;
        if (bVar1) {
          *(undefined1 *)(unaff_R14 + 0x56 + unaff_RSI) = 2;
          *(uint *)(uVar5 + unaff_RDI) = uVar11;
          *(uint *)(uVar5 + 4 + unaff_RDI) = uVar8;
          *(uint *)(uVar5 + 8 + unaff_RDI) = uVar9;
          *(undefined2 *)(unaff_RSI + 0xac + unaff_R14) = 0x200;
          *(undefined1 *)(unaff_RSI + 0xae + unaff_R14) = 3;
          *(uint *)(uVar5 + 0xc + unaff_RDI) = uVar11;
        }
        else {
          *(undefined1 *)(unaff_R14 + 0x56 + unaff_RSI) = 3;
          *(uint *)(uVar5 + unaff_RDI) = uVar11;
          *(uint *)(uVar5 + 4 + unaff_RDI) = uVar8;
          *(uint *)(uVar5 + 8 + unaff_RDI) = uVar3;
          *(undefined2 *)(unaff_RSI + 0xac + unaff_R14) = 0x201;
          *(undefined1 *)(unaff_RSI + 0xae + unaff_R14) = 3;
          *(uint *)(uVar5 + 0xc + unaff_RDI) = uVar8;
        }
        *(uint *)(uVar5 + 0x10 + unaff_RDI) = uVar9;
        lVar10 = 0x18;
        *(uint *)(uVar5 + 0x14 + unaff_RDI) = uVar3;
      }
      unaff_R14 = unaff_R14 + lVar7;
      unaff_R13D = iStackX_20 + iVar2;
      *(longlong *)(unaff_RBP + -0x58) = *(longlong *)(unaff_RBP + -0x58) + lVar4;
      piStack0000000000000060 = (int *)((longlong)piStack0000000000000060 + lVar7);
      piStack0000000000000068 = (int *)((longlong)piStack0000000000000068 + lVar7);
      puStack0000000000000070 = (undefined2 *)((longlong)puStack0000000000000070 + lVar7);
      piStack0000000000000078 = (int *)((longlong)piStack0000000000000078 + lVar7);
      *(longlong *)(unaff_RBP + -0x80) = *(longlong *)(unaff_RBP + -0x80) + lVar7;
      uVar5 = uVar5 + lVar10;
      unaff_R15 = in_stack_00000028;
      unaff_R12D = in_stack_00000030._4_4_;
      iStackX_20 = unaff_R13D;
    }
    in_stack_00000030._4_4_ = unaff_R12D + 1;
    iVar2 = (**(code **)*unaff_R15)(unaff_R15);
    unaff_R12D = in_stack_00000030._4_4_;
  } while (in_stack_00000030._4_4_ < iVar2);
  lVar4 = (longlong)in_stack_00000058;
  if (0 < lVar4) {
    puVar6 = (undefined4 *)(unaff_RSI + 0x4c);
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x16;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041171e(void)
void FUN_18041171e(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *puVar2;
  undefined4 unaff_R14D;
  int in_stack_00000058;
  
  lVar1 = (longlong)in_stack_00000058;
  if (0 < lVar1) {
    puVar2 = (undefined4 *)(unaff_RSI + 0x4c);
    do {
      *puVar2 = unaff_R14D;
      puVar2 = puVar2 + 0x16;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180411740(longlong param_1)
void FUN_180411740(longlong param_1)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *puVar1;
  undefined4 unaff_R14D;
  
  puVar1 = (undefined4 *)(unaff_RSI + 0x4c);
  do {
    *puVar1 = unaff_R14D;
    puVar1 = puVar1 + 0x16;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}



float FUN_180411780(longlong *param_1,uint *param_2)

{
  float fStackX_8;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  
  (**(code **)(*param_1 + 0x20))(param_1,&fStackX_8,(int)*param_2 >> 2,*param_2 & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&fStackX_10,(int)param_2[1] >> 2,param_2[1] & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&fStackX_18,(int)param_2[2] >> 2,param_2[2] & 3);
  return ABS((fStackX_1c - fStackX_c) * (fStackX_10 - fStackX_8) -
             (fStackX_14 - fStackX_c) * (fStackX_18 - fStackX_8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180411840(longlong param_1,longlong param_2,longlong *param_3,int param_4)
void FUN_180411840(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_198 [32];
  int iStack_178;
  int iStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  longlong *plStack_150;
  float fStack_140;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  ulonglong uStack_f8;
  
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  lVar9 = 0;
  lVar8 = (longlong)param_4;
  iStack_174 = param_4;
  plStack_150 = param_3;
  if (0 < param_4) {
    lVar4 = param_1 + 0x2c;
    puVar6 = (undefined4 *)(param_1 + 8);
    puVar7 = (undefined8 *)(param_1 + 0x18);
    lVar12 = lVar8;
    do {
      puVar6[-2] = 0xffffffff;
      puVar7[-1] = 0;
      *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 4;
      puVar6[-1] = 0xffffffff;
      *puVar7 = 0;
      *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 4;
      *puVar6 = 0xffffffff;
      puVar7[1] = 0;
      *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 4;
      *(undefined8 *)(lVar4 + -4) = 0;
      *(undefined8 *)(lVar4 + 4) = 0;
      *(undefined8 *)(lVar4 + 0xc) = 0;
      *(undefined8 *)(lVar4 + 0x14) = 0;
      lVar12 = lVar12 + -1;
      lVar4 = lVar4 + 0x58;
      puVar6 = puVar6 + 0x16;
      puVar7 = puVar7 + 0xb;
    } while (lVar12 != 0);
    puVar7 = (undefined8 *)(param_1 + 0x34);
    do {
      (**(code **)(*param_3 + 0x10))
                (param_3,&fStack_118,(int)*(uint *)(lVar9 + param_2) >> 2,
                 *(uint *)(lVar9 + param_2) & 3);
      uVar14 = *(uint *)(lVar9 + 4 + param_2);
      (**(code **)(*param_3 + 0x10))(param_3,&fStack_128,(int)uVar14 >> 2,uVar14 & 3);
      uVar14 = *(uint *)(lVar9 + 8 + param_2);
      (**(code **)(*param_3 + 0x10))(param_3,&fStack_108,(int)uVar14 >> 2,uVar14 & 3);
      (**(code **)(*param_3 + 0x20))
                (param_3,&fStack_160,(int)*(uint *)(lVar9 + param_2) >> 2,
                 *(uint *)(lVar9 + param_2) & 3);
      uVar14 = *(uint *)(lVar9 + 4 + param_2);
      (**(code **)(*param_3 + 0x20))(param_3,&fStack_168,(int)uVar14 >> 2,uVar14 & 3);
      uVar14 = *(uint *)(lVar9 + 8 + param_2);
      (**(code **)(*param_3 + 0x20))(param_3,&fStack_158,(int)uVar14 >> 2,uVar14 & 3);
      fVar19 = fStack_154 - fStack_15c;
      fVar18 = fStack_164 - fStack_15c;
      fVar21 = fStack_168 - fStack_160;
      fStack_170 = fVar19 * fVar21 - (fStack_158 - fStack_160) * fVar18;
      fVar22 = -(fStack_158 - fStack_160);
      fVar25 = (fStack_124 - fStack_114) * fVar19 - (fStack_104 - fStack_114) * fVar18;
      fVar24 = (fStack_128 - fStack_118) * fVar19 - (fStack_108 - fStack_118) * fVar18;
      fVar19 = (fStack_120 - fStack_110) * fVar19 - (fStack_100 - fStack_110) * fVar18;
      fVar18 = (fStack_120 - fStack_110) * fVar22 + (fStack_100 - fStack_110) * fVar21;
      uVar14 = 0;
      if (0.0 < fStack_170) {
        uVar14 = 8;
      }
      uVar2 = *(uint *)(puVar7 + 3);
      *(uint *)(puVar7 + 3) = uVar14 | uVar2;
      fVar23 = (fStack_128 - fStack_118) * fVar22 + (fStack_108 - fStack_118) * fVar21;
      fVar21 = (fStack_124 - fStack_114) * fVar22 + (fStack_104 - fStack_114) * fVar21;
      if (1.1754944e-38 < ABS(fStack_170)) {
        fVar20 = SQRT(fVar25 * fVar25 + fVar24 * fVar24 + fVar19 * fVar19);
        fVar22 = SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar18 * fVar18);
        if (uVar14 == 0 && (uVar2 & 8) == 0) {
          fVar17 = -1.0;
        }
        else {
          fVar17 = 1.0;
        }
        if (1.1754944e-38 < fVar20) {
          fVar16 = fVar17 / fVar20;
          fStack_140 = fVar19 * fVar16;
          *(ulonglong *)((longlong)puVar7 + -0xc) = CONCAT44(fVar25 * fVar16,fVar24 * fVar16);
          *(float *)((longlong)puVar7 + -4) = fStack_140;
        }
        if (1.1754944e-38 < fVar22) {
          fVar17 = fVar17 / fVar22;
          fStack_130 = fVar18 * fVar17;
          *puVar7 = CONCAT44(fVar21 * fVar17,fVar23 * fVar17);
          *(float *)(puVar7 + 1) = fStack_130;
        }
        fVar18 = 1.0 / ABS(fStack_170);
        fVar22 = fVar18 * fVar22;
        fVar18 = fVar18 * fVar20;
        *(float *)(puVar7 + 2) = fVar22;
        *(float *)((longlong)puVar7 + 0xc) = fVar18;
        if ((1.1754944e-38 < fVar18) && (1.1754944e-38 < fVar22)) {
          *(uint *)(puVar7 + 3) = uVar14 | uVar2 & 0xfffffffb;
        }
      }
      lVar9 = lVar9 + 0xc;
      puVar7 = puVar7 + 0xb;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar10 = 0;
  iStack_178 = iStack_174 + -1;
  uVar15 = uVar10;
  iVar11 = iStack_178;
  if (0 < iStack_178) {
    do {
      uVar13 = uVar10 + 1;
      if (*(int *)(uVar10 * 0x58 + 0x48 + param_1) == *(int *)(uVar13 * 0x58 + 0x48 + param_1)) {
        uVar14 = *(uint *)(uVar10 * 0x58 + 0x4c + param_1);
        if ((((uVar14 & 1) == 0) &&
            (uVar2 = *(uint *)(uVar13 * 0x58 + 0x4c + param_1), (uVar2 & 1) == 0)) &&
           (((uVar14 ^ uVar2) & 8) != 0)) {
          bVar3 = false;
          if ((uVar2 & 4) == 0) {
            iVar11 = (int)uVar15 * 3;
            fVar18 = (float)FUN_180411780(plStack_150,(longlong)iVar11 * 4 + param_2);
            fVar19 = (float)FUN_180411780(plStack_150,(longlong)(iVar11 + 3) * 4 + param_2);
            uVar5 = uVar13;
            if (fVar19 <= fVar18) goto LAB_180411d45;
          }
          else {
LAB_180411d45:
            bVar3 = true;
            uVar5 = uVar10;
          }
          if (!bVar3) {
            uVar13 = uVar10;
          }
          puVar1 = (uint *)(uVar13 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(uVar13 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 | *(uint *)(uVar5 * 0x58 + 0x4c + param_1) & 8;
          iVar11 = iStack_178;
        }
        lVar8 = 2;
      }
      else {
        lVar8 = 1;
      }
      uVar14 = (int)uVar15 + (int)lVar8;
      uVar10 = uVar10 + lVar8;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar11);
  }
  iVar11 = iStack_174;
  lVar8 = malloc((longlong)iStack_174 * 0x24);
  if (lVar8 == 0) {
    FUN_180413980(param_1,param_2,iVar11);
  }
  else {
    FUN_1804135e0(param_1,lVar8,param_2,iVar11);
    free(lVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_f8 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_180411863(longlong param_1,longlong param_2,longlong *param_3,int param_4,
void FUN_180411863(longlong param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,float param_11,undefined8 param_12,
                  float param_13,undefined8 param_14,float param_15)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong unaff_RBP;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar13;
  uint uVar14;
  undefined8 unaff_R15;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 unaff_XMM6_Da;
  float fVar20;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar21;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar22;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar23;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar24;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  float fVar25;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  float fVar26;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  float fVar27;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  float fVar28;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  float fVar29;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  
  *(undefined8 *)(in_R11 + -0x30) = unaff_R12;
  lVar10 = 0;
  lVar9 = (longlong)param_4;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x40) = unaff_R15;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM6_Dd;
  param_9 = param_3;
  if (0 < param_4) {
    *(undefined4 *)(in_R11 + -0x68) = unaff_XMM7_Da;
    *(undefined4 *)(in_R11 + -100) = unaff_XMM7_Db;
    *(undefined4 *)(in_R11 + -0x60) = unaff_XMM7_Dc;
    *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM7_Dd;
    *(undefined4 *)(in_R11 + -0x78) = unaff_XMM8_Da;
    *(undefined4 *)(in_R11 + -0x74) = unaff_XMM8_Db;
    *(undefined4 *)(in_R11 + -0x70) = unaff_XMM8_Dc;
    *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
    *(undefined4 *)(in_R11 + -0x88) = unaff_XMM9_Da;
    *(undefined4 *)(in_R11 + -0x84) = unaff_XMM9_Db;
    *(undefined4 *)(in_R11 + -0x80) = unaff_XMM9_Dc;
    *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM9_Dd;
    *(undefined4 *)(in_R11 + -0x98) = unaff_XMM10_Da;
    *(undefined4 *)(in_R11 + -0x94) = unaff_XMM10_Db;
    *(undefined4 *)(in_R11 + -0x90) = unaff_XMM10_Dc;
    *(undefined4 *)(in_R11 + -0x8c) = unaff_XMM10_Dd;
    *(undefined4 *)(in_R11 + -0xa8) = unaff_XMM11_Da;
    *(undefined4 *)(in_R11 + -0xa4) = unaff_XMM11_Db;
    *(undefined4 *)(in_R11 + -0xa0) = unaff_XMM11_Dc;
    *(undefined4 *)(in_R11 + -0x9c) = unaff_XMM11_Dd;
    *(undefined4 *)(in_R11 + -0xb8) = unaff_XMM12_Da;
    *(undefined4 *)(in_R11 + -0xb4) = unaff_XMM12_Db;
    *(undefined4 *)(in_R11 + -0xb0) = unaff_XMM12_Dc;
    *(undefined4 *)(in_R11 + -0xac) = unaff_XMM12_Dd;
    *(undefined4 *)(in_R11 + -200) = unaff_XMM13_Da;
    *(undefined4 *)(in_R11 + -0xc4) = unaff_XMM13_Db;
    *(undefined4 *)(in_R11 + -0xc0) = unaff_XMM13_Dc;
    *(undefined4 *)(in_R11 + -0xbc) = unaff_XMM13_Dd;
    *(undefined4 *)(in_R11 + -0xd8) = unaff_XMM14_Da;
    *(undefined4 *)(in_R11 + -0xd4) = unaff_XMM14_Db;
    *(undefined4 *)(in_R11 + -0xd0) = unaff_XMM14_Dc;
    *(undefined4 *)(in_R11 + -0xcc) = unaff_XMM14_Dd;
    *(undefined4 *)(in_R11 + -0xe8) = unaff_XMM15_Da;
    *(undefined4 *)(in_R11 + -0xe4) = unaff_XMM15_Db;
    *(undefined4 *)(in_R11 + -0xe0) = unaff_XMM15_Dc;
    *(undefined4 *)(in_R11 + -0xdc) = unaff_XMM15_Dd;
    lVar5 = param_1 + 0x2c;
    puVar7 = (undefined4 *)(param_1 + 8);
    puVar8 = (undefined8 *)(param_1 + 0x18);
    lVar12 = lVar9;
    do {
      puVar7[-2] = 0xffffffff;
      puVar8[-1] = 0;
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 4;
      puVar7[-1] = 0xffffffff;
      *puVar8 = 0;
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 4;
      *puVar7 = 0xffffffff;
      puVar8[1] = 0;
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 4;
      *(undefined8 *)(lVar5 + -4) = 0;
      *(undefined8 *)(lVar5 + 4) = 0;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      lVar12 = lVar12 + -1;
      lVar5 = lVar5 + 0x58;
      puVar7 = puVar7 + 0x16;
      puVar8 = puVar8 + 0xb;
    } while (lVar12 != 0);
    puVar8 = (undefined8 *)(param_1 + 0x34);
    do {
      (**(code **)(*param_3 + 0x10))
                (param_3,unaff_RBP + -0x80,(int)*(uint *)(lVar10 + param_2) >> 2,
                 *(uint *)(lVar10 + param_2) & 3);
      uVar14 = *(uint *)(lVar10 + 4 + param_2);
      (**(code **)(*param_3 + 0x10))(param_3,&param_14,(int)uVar14 >> 2,uVar14 & 3);
      uVar14 = *(uint *)(lVar10 + 8 + param_2);
      (**(code **)(*param_3 + 0x10))(param_3,unaff_RBP + -0x70,(int)uVar14 >> 2,uVar14 & 3);
      (**(code **)(*param_3 + 0x20))
                (param_3,&param_7,(int)*(uint *)(lVar10 + param_2) >> 2,
                 *(uint *)(lVar10 + param_2) & 3);
      uVar14 = *(uint *)(lVar10 + 4 + param_2);
      (**(code **)(*param_3 + 0x20))(param_3,&param_6,(int)uVar14 >> 2,uVar14 & 3);
      uVar14 = *(uint *)(lVar10 + 8 + param_2);
      (**(code **)(*param_3 + 0x20))(param_3,&param_8,(int)uVar14 >> 2,uVar14 & 3);
      fVar18 = param_8._4_4_ - param_7._4_4_;
      fVar17 = param_6._4_4_ - param_7._4_4_;
      fVar22 = (float)param_6 - (float)param_7;
      fVar19 = *(float *)(unaff_RBP + -0x70) - *(float *)(unaff_RBP + -0x80);
      fVar20 = *(float *)(unaff_RBP + -0x6c) - *(float *)(unaff_RBP + -0x7c);
      fVar21 = *(float *)(unaff_RBP + -0x68) - *(float *)(unaff_RBP + -0x78);
      fVar25 = (float)param_14 - *(float *)(unaff_RBP + -0x80);
      fVar26 = param_14._4_4_ - *(float *)(unaff_RBP + -0x7c);
      fVar24 = param_15 - *(float *)(unaff_RBP + -0x78);
      fVar16 = fVar18 * fVar22 - ((float)param_8 - (float)param_7) * fVar17;
      fVar23 = -((float)param_8 - (float)param_7);
      fVar29 = fVar26 * fVar18 - fVar20 * fVar17;
      fVar28 = fVar25 * fVar18 - fVar19 * fVar17;
      fVar27 = fVar24 * fVar18 - fVar21 * fVar17;
      fVar18 = fVar24 * fVar23 + fVar21 * fVar22;
      fVar17 = ABS(fVar16);
      uVar14 = 0;
      if (0.0 < fVar16) {
        uVar14 = 8;
      }
      uVar2 = *(uint *)(puVar8 + 3);
      *(uint *)(puVar8 + 3) = uVar14 | uVar2;
      fVar16 = fVar25 * fVar23 + fVar19 * fVar22;
      fVar19 = fVar26 * fVar23 + fVar20 * fVar22;
      if (1.1754944e-38 < fVar17) {
        fVar21 = SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar27 * fVar27);
        fVar20 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18);
        if (uVar14 == 0 && (uVar2 & 8) == 0) {
          fVar22 = -1.0;
        }
        else {
          fVar22 = 1.0;
        }
        if (1.1754944e-38 < fVar21) {
          fVar23 = fVar22 / fVar21;
          param_11 = fVar27 * fVar23;
          *(ulonglong *)((longlong)puVar8 + -0xc) = CONCAT44(fVar29 * fVar23,fVar28 * fVar23);
          *(float *)((longlong)puVar8 + -4) = param_11;
        }
        if (1.1754944e-38 < fVar20) {
          fVar22 = fVar22 / fVar20;
          param_13 = fVar18 * fVar22;
          *puVar8 = CONCAT44(fVar19 * fVar22,fVar16 * fVar22);
          *(float *)(puVar8 + 1) = param_13;
        }
        fVar17 = 1.0 / fVar17;
        fVar20 = fVar17 * fVar20;
        fVar17 = fVar17 * fVar21;
        *(float *)(puVar8 + 2) = fVar20;
        *(float *)((longlong)puVar8 + 0xc) = fVar17;
        if ((1.1754944e-38 < fVar17) && (1.1754944e-38 < fVar20)) {
          *(uint *)(puVar8 + 3) = uVar14 | uVar2 & 0xfffffffb;
        }
      }
      lVar10 = lVar10 + 0xc;
      puVar8 = puVar8 + 0xb;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar11 = 0;
  uVar15 = uVar11;
  if (0 < param_4 + -1) {
    do {
      uVar13 = uVar11 + 1;
      if (*(int *)(uVar11 * 0x58 + 0x48 + param_1) == *(int *)(uVar13 * 0x58 + 0x48 + param_1)) {
        uVar14 = *(uint *)(uVar11 * 0x58 + 0x4c + param_1);
        if ((((uVar14 & 1) == 0) &&
            (uVar2 = *(uint *)(uVar13 * 0x58 + 0x4c + param_1), (uVar2 & 1) == 0)) &&
           (((uVar14 ^ uVar2) & 8) != 0)) {
          bVar4 = false;
          if ((uVar2 & 4) == 0) {
            iVar3 = (int)uVar15 * 3;
            fVar17 = (float)FUN_180411780(param_9,(longlong)iVar3 * 4 + param_2);
            fVar16 = (float)FUN_180411780(param_9,(longlong)(iVar3 + 3) * 4 + param_2);
            uVar6 = uVar13;
            if (fVar16 <= fVar17) goto LAB_180411d45;
          }
          else {
LAB_180411d45:
            bVar4 = true;
            uVar6 = uVar11;
          }
          if (!bVar4) {
            uVar13 = uVar11;
          }
          puVar1 = (uint *)(uVar13 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(uVar13 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 | *(uint *)(uVar6 * 0x58 + 0x4c + param_1) & 8;
        }
        lVar9 = 2;
      }
      else {
        lVar9 = 1;
      }
      uVar14 = (int)uVar15 + (int)lVar9;
      uVar11 = uVar11 + lVar9;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < param_4 + -1);
  }
  lVar9 = malloc((longlong)param_4 * 0x24);
  if (lVar9 == 0) {
    FUN_180413980(param_1,param_2,param_4);
  }
  else {
    FUN_1804135e0(param_1,lVar9,param_2,param_4);
    free(lVar9);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}





