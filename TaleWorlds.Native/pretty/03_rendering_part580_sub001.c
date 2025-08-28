#include "TaleWorlds.Native.Split.h"

// 03_rendering_part580_sub001.c - 11 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part580.c - 11 个函数


// 函数: void FUN_180587444(int8_t *param_1)
void FUN_180587444(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180587460(longlong param_1,longlong param_2,longlong param_3)
void FUN_180587460(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_70 = &unknown_var_1808_ptr;
  puStack_68 = auStack_58;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_68,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_70 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_1805875c0(longlong param_1,longlong param_2)
void FUN_1805875c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 7) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001805875f7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),7);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,7,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_180587640(longlong param_1,uint64_t param_2,int param_3)
void FUN_180587640(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 7) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}






// 函数: void FUN_18058765f(void)
void FUN_18058765f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}






// 函数: void FUN_180587684(int8_t *param_1)
void FUN_180587684(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805876a0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1805876a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [8];
  ulonglong uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  puStack_60 = &unknown_var_1856_ptr;
  puStack_58 = auStack_48;
  uStack_50 = 0;
  auStack_48[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_58,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_60 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_180587800(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)
void FUN_180587800(uint64_t *param_1,uint64_t *param_2,longlong param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  int8_t auStackX_8 [8];
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  
  lVar22 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar22 = lVar22 >> 6;
    if (lVar22 < 0x21) {
LAB_1805878c6:
      if (((1 < lVar22) && (param_1 != param_2)) && (puVar25 = param_1 + 8, puVar25 != param_2)) {
        lVar22 = 0x40;
        puVar24 = puVar25;
        do {
          uVar4 = *(int32_t *)(puVar24 + 4);
          uVar5 = *(int32_t *)((longlong)puVar24 + 0x24);
          uVar6 = *(int32_t *)(puVar24 + 5);
          fVar2 = *(float *)((longlong)puVar24 + 0x2c);
          uVar10 = *puVar24;
          uVar11 = puVar24[1];
          uVar12 = puVar24[2];
          uVar13 = puVar24[3];
          uVar14 = puVar24[6];
          uVar15 = puVar24[7];
          if (fVar2 < *(float *)((longlong)param_1 + 0x2c)) {
            func_0x00018018a000(auStackX_8);
                    // WARNING: Subroutine does not return
            memmove(puVar25,param_1,lVar22);
          }
          fVar3 = *(float *)((longlong)param_1 + lVar22 + -0x14);
          puVar21 = (uint64_t *)(lVar22 + -0x40 + (longlong)param_1);
          puVar20 = puVar24;
          while (puVar19 = puVar21, fVar2 < fVar3) {
            uVar16 = puVar19[1];
            *puVar20 = *puVar19;
            puVar20[1] = uVar16;
            uVar16 = puVar19[3];
            puVar20[2] = puVar19[2];
            puVar20[3] = uVar16;
            uVar7 = *(int32_t *)((longlong)puVar19 + 0x24);
            uVar8 = *(int32_t *)(puVar19 + 5);
            uVar9 = *(int32_t *)((longlong)puVar19 + 0x2c);
            *(int32_t *)(puVar20 + 4) = *(int32_t *)(puVar19 + 4);
            *(int32_t *)((longlong)puVar20 + 0x24) = uVar7;
            *(int32_t *)(puVar20 + 5) = uVar8;
            *(int32_t *)((longlong)puVar20 + 0x2c) = uVar9;
            uVar16 = puVar19[7];
            puVar20[6] = puVar19[6];
            puVar20[7] = uVar16;
            puVar21 = puVar19 + -8;
            puVar20 = puVar19;
            fVar3 = *(float *)((longlong)puVar19 + -0x14);
          }
          *puVar20 = uVar10;
          puVar20[1] = uVar11;
          puVar20[2] = uVar12;
          puVar20[3] = uVar13;
          *(int32_t *)(puVar20 + 4) = uVar4;
          *(int32_t *)((longlong)puVar20 + 0x24) = uVar5;
          *(int32_t *)(puVar20 + 5) = uVar6;
          *(float *)((longlong)puVar20 + 0x2c) = fVar2;
          puVar20[6] = uVar14;
          puVar20[7] = uVar15;
          puVar24 = puVar24 + 8;
          lVar22 = lVar22 + 0x40;
        } while (puVar24 != param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar22) {
        uVar28 = (longlong)param_2 - (longlong)param_1 >> 6;
        lVar22 = (longlong)param_2 - (longlong)param_1 >> 7;
        if (0 < lVar22) {
          lVar26 = (longlong)(uVar28 - 1) >> 1;
          puVar25 = param_1 + lVar22 * 8;
          do {
            uVar10 = puVar25[-4];
            uVar11 = puVar25[-3];
            lVar22 = lVar22 + -1;
            uVar12 = puVar25[-8];
            uVar13 = puVar25[-7];
            uVar14 = puVar25[-6];
            uVar15 = puVar25[-5];
            uVar16 = puVar25[-2];
            uVar17 = puVar25[-1];
            lVar27 = lVar22;
            while (lVar27 < lVar26) {
              fVar2 = *(float *)(lVar27 * 0x80 + 0x6c + (longlong)param_1);
              pfVar1 = (float *)(lVar27 * 0x80 + 0xac + (longlong)param_1);
              lVar23 = lVar27 * 2 + 1;
              if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
                lVar23 = lVar27 * 2 + 2;
              }
              uVar18 = (param_1 + lVar23 * 8)[1];
              param_1[lVar27 * 8] = param_1[lVar23 * 8];
              (param_1 + lVar27 * 8)[1] = uVar18;
              uVar18 = (param_1 + lVar23 * 8 + 2)[1];
              param_1[lVar27 * 8 + 2] = param_1[lVar23 * 8 + 2];
              (param_1 + lVar27 * 8 + 2)[1] = uVar18;
              uVar18 = (param_1 + lVar23 * 8 + 4)[1];
              param_1[lVar27 * 8 + 4] = param_1[lVar23 * 8 + 4];
              (param_1 + lVar27 * 8 + 4)[1] = uVar18;
              uVar18 = (param_1 + lVar23 * 8 + 6)[1];
              param_1[lVar27 * 8 + 6] = param_1[lVar23 * 8 + 6];
              (param_1 + lVar27 * 8 + 6)[1] = uVar18;
              lVar27 = lVar23;
            }
            if ((lVar27 == lVar26) && ((uVar28 & 1) == 0)) {
              uVar18 = (param_1 + uVar28 * 8 + -8)[1];
              param_1[lVar27 * 8] = param_1[uVar28 * 8 + -8];
              (param_1 + lVar27 * 8)[1] = uVar18;
              uVar18 = (param_1 + uVar28 * 8 + -6)[1];
              param_1[lVar27 * 8 + 2] = param_1[uVar28 * 8 + -6];
              (param_1 + lVar27 * 8 + 2)[1] = uVar18;
              uVar18 = (param_1 + uVar28 * 8 + -4)[1];
              param_1[lVar27 * 8 + 4] = param_1[uVar28 * 8 + -4];
              (param_1 + lVar27 * 8 + 4)[1] = uVar18;
              uVar18 = (param_1 + uVar28 * 8 + -2)[1];
              param_1[lVar27 * 8 + 6] = param_1[uVar28 * 8 + -2];
              (param_1 + lVar27 * 8 + 6)[1] = uVar18;
              lVar27 = uVar28 - 1;
            }
            if (lVar22 < lVar27) {
              uStack_70._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
              do {
                lVar23 = lVar27 + -1 >> 1;
                pfVar1 = (float *)(lVar23 * 0x40 + 0x2c + (longlong)param_1);
                if (uStack_70._4_4_ < *pfVar1 || uStack_70._4_4_ == *pfVar1) break;
                uVar18 = (param_1 + lVar23 * 8)[1];
                param_1[lVar27 * 8] = param_1[lVar23 * 8];
                (param_1 + lVar27 * 8)[1] = uVar18;
                uVar18 = (param_1 + lVar23 * 8 + 2)[1];
                param_1[lVar27 * 8 + 2] = param_1[lVar23 * 8 + 2];
                (param_1 + lVar27 * 8 + 2)[1] = uVar18;
                uVar18 = (param_1 + lVar23 * 8 + 4)[1];
                param_1[lVar27 * 8 + 4] = param_1[lVar23 * 8 + 4];
                (param_1 + lVar27 * 8 + 4)[1] = uVar18;
                uVar18 = (param_1 + lVar23 * 8 + 6)[1];
                param_1[lVar27 * 8 + 6] = param_1[lVar23 * 8 + 6];
                (param_1 + lVar27 * 8 + 6)[1] = uVar18;
                lVar27 = lVar23;
              } while (lVar22 < lVar23);
            }
            param_1[lVar27 * 8] = uVar12;
            (param_1 + lVar27 * 8)[1] = uVar13;
            param_1[lVar27 * 8 + 2] = uVar14;
            (param_1 + lVar27 * 8 + 2)[1] = uVar15;
            param_1[lVar27 * 8 + 4] = uVar10;
            (param_1 + lVar27 * 8 + 4)[1] = uVar11;
            param_1[lVar27 * 8 + 6] = uVar16;
            (param_1 + lVar27 * 8 + 6)[1] = uVar17;
            puVar25 = puVar25 + -8;
          } while (0 < lVar22);
        }
        if ((longlong)uVar28 < 2) {
          return;
        }
        param_2 = param_2 + -8;
        do {
          if (1 < (longlong)uVar28) {
            uStack_98 = *param_2;
            uStack_90 = param_2[1];
            uStack_88 = param_2[2];
            uStack_80 = param_2[3];
            uStack_78 = param_2[4];
            uStack_70 = param_2[5];
            uStack_68 = param_2[6];
            uStack_60 = param_2[7];
            uVar10 = param_1[1];
            *param_2 = *param_1;
            param_2[1] = uVar10;
            uVar10 = param_1[3];
            param_2[2] = param_1[2];
            param_2[3] = uVar10;
            uVar4 = *(int32_t *)((longlong)param_1 + 0x24);
            uVar5 = *(int32_t *)(param_1 + 5);
            uVar6 = *(int32_t *)((longlong)param_1 + 0x2c);
            *(int32_t *)(param_2 + 4) = *(int32_t *)(param_1 + 4);
            *(int32_t *)((longlong)param_2 + 0x24) = uVar4;
            *(int32_t *)(param_2 + 5) = uVar5;
            *(int32_t *)((longlong)param_2 + 0x2c) = uVar6;
            uVar4 = *(int32_t *)((longlong)param_1 + 0x34);
            uVar5 = *(int32_t *)(param_1 + 7);
            uVar6 = *(int32_t *)((longlong)param_1 + 0x3c);
            *(int32_t *)(param_2 + 6) = *(int32_t *)(param_1 + 6);
            *(int32_t *)((longlong)param_2 + 0x34) = uVar4;
            *(int32_t *)(param_2 + 7) = uVar5;
            *(int32_t *)((longlong)param_2 + 0x3c) = uVar6;
            FUN_180588430(param_1,0,(longlong)param_2 - (longlong)param_1 >> 6,&uStack_98,param_4);
          }
          param_2 = param_2 + -8;
          uVar28 = (longlong)param_2 + (0x40 - (longlong)param_1) >> 6;
        } while (1 < (longlong)uVar28);
        return;
      }
      goto LAB_1805878c6;
    }
    FUN_180587c30(&puStack_a8,param_1,param_2,param_4);
    puVar24 = puStack_a0;
    puVar25 = puStack_a8;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)puStack_a8 - (longlong)param_1 & 0xffffffffffffffc0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_a0 & 0xffffffffffffffc0U)) {
      FUN_180587800(param_1,puStack_a8,param_3,param_4);
      puVar25 = param_2;
      param_1 = puVar24;
    }
    else {
      FUN_180587800(puStack_a0,param_2,param_3,param_4);
    }
    lVar22 = (longlong)puVar25 - (longlong)param_1;
    param_2 = puVar25;
  } while( true );
}






// 函数: void FUN_1805878e9(void)
void FUN_1805878e9(void)

{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RBP;
  longlong lVar19;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  lVar19 = 0x40;
  do {
    uVar2 = *(int32_t *)(unaff_RBX + 4);
    uVar3 = *(int32_t *)((longlong)unaff_RBX + 0x24);
    uVar4 = *(int32_t *)(unaff_RBX + 5);
    fVar5 = *(float *)((longlong)unaff_RBX + 0x2c);
    uVar9 = *unaff_RBX;
    uVar10 = unaff_RBX[1];
    uVar11 = unaff_RBX[2];
    uVar12 = unaff_RBX[3];
    uVar13 = unaff_RBX[6];
    uVar14 = unaff_RBX[7];
    if (fVar5 < *(float *)(unaff_RDI + 0x2c)) {
      func_0x00018018a000(&stack0x000000e0);
                    // WARNING: Subroutine does not return
      memmove();
    }
    fVar1 = *(float *)(unaff_R14 + -0x54 + lVar19);
    puVar18 = (uint64_t *)(lVar19 + -0x40 + unaff_RDI);
    puVar17 = unaff_RBX;
    while (puVar16 = puVar18, fVar5 < fVar1) {
      uVar15 = puVar16[1];
      *puVar17 = *puVar16;
      puVar17[1] = uVar15;
      uVar15 = puVar16[3];
      puVar17[2] = puVar16[2];
      puVar17[3] = uVar15;
      uVar6 = *(int32_t *)((longlong)puVar16 + 0x24);
      uVar7 = *(int32_t *)(puVar16 + 5);
      uVar8 = *(int32_t *)((longlong)puVar16 + 0x2c);
      *(int32_t *)(puVar17 + 4) = *(int32_t *)(puVar16 + 4);
      *(int32_t *)((longlong)puVar17 + 0x24) = uVar6;
      *(int32_t *)(puVar17 + 5) = uVar7;
      *(int32_t *)((longlong)puVar17 + 0x2c) = uVar8;
      uVar6 = *(int32_t *)((longlong)puVar16 + 0x34);
      uVar7 = *(int32_t *)(puVar16 + 7);
      uVar8 = *(int32_t *)((longlong)puVar16 + 0x3c);
      *(int32_t *)(puVar17 + 6) = *(int32_t *)(puVar16 + 6);
      *(int32_t *)((longlong)puVar17 + 0x34) = uVar6;
      *(int32_t *)(puVar17 + 7) = uVar7;
      *(int32_t *)((longlong)puVar17 + 0x3c) = uVar8;
      puVar18 = puVar16 + -8;
      puVar17 = puVar16;
      fVar1 = *(float *)((longlong)puVar16 + -0x14);
    }
    *puVar17 = uVar9;
    puVar17[1] = uVar10;
    puVar17[2] = uVar11;
    puVar17[3] = uVar12;
    *(int32_t *)(puVar17 + 4) = uVar2;
    *(int32_t *)((longlong)puVar17 + 0x24) = uVar3;
    *(int32_t *)(puVar17 + 5) = uVar4;
    *(float *)((longlong)puVar17 + 0x2c) = fVar5;
    puVar17[6] = uVar13;
    puVar17[7] = uVar14;
    unaff_RBX = unaff_RBX + 8;
    lVar19 = lVar19 + 0x40;
  } while (unaff_RBX != unaff_RBP);
  return;
}






// 函数: void FUN_180587966(void)
void FUN_180587966(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  longlong in_RAX;
  longlong lVar22;
  uint64_t *puVar23;
  uint64_t *unaff_RBP;
  longlong lVar24;
  uint64_t *puVar25;
  uint64_t *unaff_RDI;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  
  if (in_RAX < 0x21) {
    if (((1 < in_RAX) && (unaff_RDI != unaff_RBP)) &&
       (puVar25 = unaff_RDI + 8, puVar25 != unaff_RBP)) {
      lVar27 = 0x40;
      puVar23 = puVar25;
      do {
        uVar4 = *(int32_t *)(puVar23 + 4);
        uVar5 = *(int32_t *)((longlong)puVar23 + 0x24);
        uVar6 = *(int32_t *)(puVar23 + 5);
        fVar2 = *(float *)((longlong)puVar23 + 0x2c);
        uVar10 = *puVar23;
        uVar11 = puVar23[1];
        uVar12 = puVar23[2];
        uVar13 = puVar23[3];
        uVar14 = puVar23[6];
        uVar15 = puVar23[7];
        if (fVar2 < *(float *)((longlong)unaff_RDI + 0x2c)) {
          func_0x00018018a000(&stack0x000000e0);
                    // WARNING: Subroutine does not return
          memmove(puVar25);
        }
        fVar3 = *(float *)((longlong)unaff_RDI + lVar27 + -0x14);
        puVar21 = (uint64_t *)(lVar27 + -0x40 + (longlong)unaff_RDI);
        puVar20 = puVar23;
        while (puVar19 = puVar21, fVar2 < fVar3) {
          uVar16 = puVar19[1];
          *puVar20 = *puVar19;
          puVar20[1] = uVar16;
          uVar16 = puVar19[3];
          puVar20[2] = puVar19[2];
          puVar20[3] = uVar16;
          uVar7 = *(int32_t *)((longlong)puVar19 + 0x24);
          uVar8 = *(int32_t *)(puVar19 + 5);
          uVar9 = *(int32_t *)((longlong)puVar19 + 0x2c);
          *(int32_t *)(puVar20 + 4) = *(int32_t *)(puVar19 + 4);
          *(int32_t *)((longlong)puVar20 + 0x24) = uVar7;
          *(int32_t *)(puVar20 + 5) = uVar8;
          *(int32_t *)((longlong)puVar20 + 0x2c) = uVar9;
          uVar7 = *(int32_t *)((longlong)puVar19 + 0x34);
          uVar8 = *(int32_t *)(puVar19 + 7);
          uVar9 = *(int32_t *)((longlong)puVar19 + 0x3c);
          *(int32_t *)(puVar20 + 6) = *(int32_t *)(puVar19 + 6);
          *(int32_t *)((longlong)puVar20 + 0x34) = uVar7;
          *(int32_t *)(puVar20 + 7) = uVar8;
          *(int32_t *)((longlong)puVar20 + 0x3c) = uVar9;
          puVar21 = puVar19 + -8;
          puVar20 = puVar19;
          fVar3 = *(float *)((longlong)puVar19 + -0x14);
        }
        *puVar20 = uVar10;
        puVar20[1] = uVar11;
        puVar20[2] = uVar12;
        puVar20[3] = uVar13;
        *(int32_t *)(puVar20 + 4) = uVar4;
        *(int32_t *)((longlong)puVar20 + 0x24) = uVar5;
        *(int32_t *)(puVar20 + 5) = uVar6;
        *(float *)((longlong)puVar20 + 0x2c) = fVar2;
        puVar20[6] = uVar14;
        puVar20[7] = uVar15;
        puVar23 = puVar23 + 8;
        lVar27 = lVar27 + 0x40;
      } while (puVar23 != unaff_RBP);
    }
  }
  else {
    uVar28 = (longlong)unaff_RBP - (longlong)unaff_RDI >> 6;
    lVar27 = (longlong)unaff_RBP - (longlong)unaff_RDI >> 7;
    if (0 < lVar27) {
      lVar24 = (longlong)(uVar28 - 1) >> 1;
      puVar25 = unaff_RDI + lVar27 * 8;
      do {
        uVar10 = puVar25[-4];
        uVar11 = puVar25[-3];
        lVar27 = lVar27 + -1;
        uVar12 = puVar25[-8];
        uVar13 = puVar25[-7];
        uVar14 = puVar25[-6];
        uVar15 = puVar25[-5];
        uVar16 = puVar25[-2];
        uVar17 = puVar25[-1];
        lVar26 = lVar27;
        while (lVar26 < lVar24) {
          fVar2 = *(float *)(lVar26 * 0x80 + 0x6c + (longlong)unaff_RDI);
          pfVar1 = (float *)(lVar26 * 0x80 + 0xac + (longlong)unaff_RDI);
          lVar22 = lVar26 * 2 + 1;
          if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
            lVar22 = lVar26 * 2 + 2;
          }
          uVar18 = (unaff_RDI + lVar22 * 8)[1];
          unaff_RDI[lVar26 * 8] = unaff_RDI[lVar22 * 8];
          (unaff_RDI + lVar26 * 8)[1] = uVar18;
          uVar18 = (unaff_RDI + lVar22 * 8 + 2)[1];
          unaff_RDI[lVar26 * 8 + 2] = unaff_RDI[lVar22 * 8 + 2];
          (unaff_RDI + lVar26 * 8 + 2)[1] = uVar18;
          uVar18 = (unaff_RDI + lVar22 * 8 + 4)[1];
          unaff_RDI[lVar26 * 8 + 4] = unaff_RDI[lVar22 * 8 + 4];
          (unaff_RDI + lVar26 * 8 + 4)[1] = uVar18;
          uVar18 = (unaff_RDI + lVar22 * 8 + 6)[1];
          unaff_RDI[lVar26 * 8 + 6] = unaff_RDI[lVar22 * 8 + 6];
          (unaff_RDI + lVar26 * 8 + 6)[1] = uVar18;
          lVar26 = lVar22;
        }
        if ((lVar26 == lVar24) && ((uVar28 & 1) == 0)) {
          uVar18 = (unaff_RDI + uVar28 * 8 + -8)[1];
          unaff_RDI[lVar26 * 8] = unaff_RDI[uVar28 * 8 + -8];
          (unaff_RDI + lVar26 * 8)[1] = uVar18;
          uVar18 = (unaff_RDI + uVar28 * 8 + -6)[1];
          unaff_RDI[lVar26 * 8 + 2] = unaff_RDI[uVar28 * 8 + -6];
          (unaff_RDI + lVar26 * 8 + 2)[1] = uVar18;
          uVar18 = (unaff_RDI + uVar28 * 8 + -4)[1];
          unaff_RDI[lVar26 * 8 + 4] = unaff_RDI[uVar28 * 8 + -4];
          (unaff_RDI + lVar26 * 8 + 4)[1] = uVar18;
          uVar18 = (unaff_RDI + uVar28 * 8 + -2)[1];
          unaff_RDI[lVar26 * 8 + 6] = unaff_RDI[uVar28 * 8 + -2];
          (unaff_RDI + lVar26 * 8 + 6)[1] = uVar18;
          lVar26 = uVar28 - 1;
        }
        if (lVar27 < lVar26) {
          in_stack_00000068._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
          do {
            lVar22 = lVar26 + -1 >> 1;
            pfVar1 = (float *)(lVar22 * 0x40 + 0x2c + (longlong)unaff_RDI);
            if (in_stack_00000068._4_4_ < *pfVar1 || in_stack_00000068._4_4_ == *pfVar1) break;
            uVar18 = (unaff_RDI + lVar22 * 8)[1];
            unaff_RDI[lVar26 * 8] = unaff_RDI[lVar22 * 8];
            (unaff_RDI + lVar26 * 8)[1] = uVar18;
            uVar18 = (unaff_RDI + lVar22 * 8 + 2)[1];
            unaff_RDI[lVar26 * 8 + 2] = unaff_RDI[lVar22 * 8 + 2];
            (unaff_RDI + lVar26 * 8 + 2)[1] = uVar18;
            uVar18 = (unaff_RDI + lVar22 * 8 + 4)[1];
            unaff_RDI[lVar26 * 8 + 4] = unaff_RDI[lVar22 * 8 + 4];
            (unaff_RDI + lVar26 * 8 + 4)[1] = uVar18;
            uVar18 = (unaff_RDI + lVar22 * 8 + 6)[1];
            unaff_RDI[lVar26 * 8 + 6] = unaff_RDI[lVar22 * 8 + 6];
            (unaff_RDI + lVar26 * 8 + 6)[1] = uVar18;
            lVar26 = lVar22;
          } while (lVar27 < lVar22);
        }
        unaff_RDI[lVar26 * 8] = uVar12;
        (unaff_RDI + lVar26 * 8)[1] = uVar13;
        unaff_RDI[lVar26 * 8 + 2] = uVar14;
        (unaff_RDI + lVar26 * 8 + 2)[1] = uVar15;
        unaff_RDI[lVar26 * 8 + 4] = uVar10;
        (unaff_RDI + lVar26 * 8 + 4)[1] = uVar11;
        unaff_RDI[lVar26 * 8 + 6] = uVar16;
        (unaff_RDI + lVar26 * 8 + 6)[1] = uVar17;
        puVar25 = puVar25 + -8;
      } while (0 < lVar27);
    }
    if (1 < (longlong)uVar28) {
      puVar25 = unaff_RBP + -8;
      do {
        if (1 < (longlong)uVar28) {
          in_stack_00000040 = *puVar25;
          in_stack_00000048 = puVar25[1];
          in_stack_00000050 = puVar25[2];
          in_stack_00000058 = puVar25[3];
          in_stack_00000060 = puVar25[4];
          in_stack_00000068 = puVar25[5];
          in_stack_00000070 = puVar25[6];
          in_stack_00000078 = puVar25[7];
          uVar10 = unaff_RDI[1];
          *puVar25 = *unaff_RDI;
          puVar25[1] = uVar10;
          uVar10 = unaff_RDI[3];
          puVar25[2] = unaff_RDI[2];
          puVar25[3] = uVar10;
          uVar4 = *(int32_t *)(unaff_RDI + 4);
          uVar5 = *(int32_t *)((longlong)unaff_RDI + 0x24);
          uVar6 = *(int32_t *)(unaff_RDI + 5);
          uVar7 = *(int32_t *)((longlong)unaff_RDI + 0x2c);
          *(int32_t *)(puVar25 + 4) = uVar4;
          *(int32_t *)((longlong)puVar25 + 0x24) = uVar5;
          *(int32_t *)(puVar25 + 5) = uVar6;
          *(int32_t *)((longlong)puVar25 + 0x2c) = uVar7;
          uVar5 = *(int32_t *)((longlong)unaff_RDI + 0x34);
          uVar6 = *(int32_t *)(unaff_RDI + 7);
          uVar7 = *(int32_t *)((longlong)unaff_RDI + 0x3c);
          *(int32_t *)(puVar25 + 6) = *(int32_t *)(unaff_RDI + 6);
          *(int32_t *)((longlong)puVar25 + 0x34) = uVar5;
          *(int32_t *)(puVar25 + 7) = uVar6;
          *(int32_t *)((longlong)puVar25 + 0x3c) = uVar7;
          FUN_180588430(uVar4,0,(longlong)puVar25 - (longlong)unaff_RDI >> 6,&stack0x00000040);
        }
        puVar25 = puVar25 + -8;
        uVar28 = (longlong)puVar25 + (0x40 - (longlong)unaff_RDI) >> 6;
      } while (1 < (longlong)uVar28);
    }
  }
  return;
}






