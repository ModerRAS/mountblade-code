#include "TaleWorlds.Native.Split.h"

// 03_rendering_part581.c - 10 个函数

// 函数: void FUN_180587c07(void)
void FUN_180587c07(void)

{
  return;
}



uint64_t * FUN_180587c30(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  longlong lVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  float fVar19;
  
  puVar17 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 7) * 8;
  lVar11 = (longlong)param_3 + (-0x40 - (longlong)param_2) >> 6;
  if (lVar11 < 0x29) {
    puVar13 = param_3 + -8;
    puVar12 = param_2;
  }
  else {
    lVar11 = lVar11 + 1 >> 3;
    lVar16 = lVar11 * 0x80;
    puVar12 = param_2 + lVar11 * 8;
    lVar11 = func_0x0001805885b0(param_2,puVar12,param_2 + lVar11 * 0x10);
    lVar11 = func_0x0001805885b0((longlong)puVar17 - lVar11,puVar17,lVar11 + (longlong)puVar17);
    puVar13 = (uint64_t *)((longlong)param_3 + (-0x40 - lVar11));
    func_0x0001805885b0((longlong)param_3 + (-0x40 - lVar16),puVar13,param_3 + -8);
  }
  func_0x0001805885b0(puVar12,puVar17,puVar13);
  puVar12 = puVar17 + 8;
  for (; param_2 < puVar17; puVar17 = puVar17 + -8) {
    if ((*(float *)((longlong)puVar17 + -0x14) < *(float *)((longlong)puVar17 + 0x2c)) ||
       (*(float *)((longlong)puVar17 + 0x2c) < *(float *)((longlong)puVar17 + -0x14))) break;
  }
  puVar13 = puVar12;
  puVar18 = puVar17;
  if (puVar12 < param_3) {
    do {
      puVar13 = puVar12;
      if ((*(float *)((longlong)puVar12 + 0x2c) < *(float *)((longlong)puVar17 + 0x2c)) ||
         (*(float *)((longlong)puVar17 + 0x2c) < *(float *)((longlong)puVar12 + 0x2c))) break;
      puVar12 = puVar12 + 8;
      puVar13 = puVar12;
    } while (puVar12 < param_3);
  }
LAB_180587d30:
  puVar10 = puVar17;
  puVar14 = puVar13;
  if (puVar13 < param_3) {
    if (0xff < ((longlong)param_3 + (0x3f - (longlong)puVar13) & 0xffffffffffffffc0U)) {
      puVar15 = puVar13 + 8;
      do {
        fVar19 = *(float *)((longlong)puVar18 + 0x2c);
        if (*(float *)((longlong)puVar15 - 0x14) <= fVar19) {
          puVar14 = puVar13;
          if (*(float *)((longlong)puVar15 - 0x14) < fVar19) goto joined_r0x000180587f7b;
          if (puVar12 != puVar13) {
            uVar1 = puVar13[1];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            uVar6 = puVar12[4];
            uVar7 = puVar12[5];
            uVar8 = puVar12[6];
            uVar9 = puVar12[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar1;
            uVar1 = puVar13[3];
            puVar12[2] = puVar13[2];
            puVar12[3] = uVar1;
            uVar1 = puVar13[5];
            puVar12[4] = puVar13[4];
            puVar12[5] = uVar1;
            uVar1 = puVar13[7];
            puVar12[6] = puVar13[6];
            puVar12[7] = uVar1;
            *puVar13 = uVar2;
            puVar13[1] = uVar3;
            puVar13[2] = uVar4;
            puVar13[3] = uVar5;
            puVar13[4] = uVar6;
            puVar13[5] = uVar7;
            puVar13[6] = uVar8;
            puVar13[7] = uVar9;
            fVar19 = *(float *)((longlong)puVar18 + 0x2c);
          }
          puVar12 = puVar12 + 8;
        }
        if (*(float *)((longlong)puVar15 + 0x2c) <= fVar19) {
          puVar14 = puVar15;
          if (*(float *)((longlong)puVar15 + 0x2c) < fVar19) goto joined_r0x000180587f7b;
          if (puVar12 != puVar15) {
            uVar1 = puVar15[1];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            uVar6 = puVar12[4];
            uVar7 = puVar12[5];
            uVar8 = puVar12[6];
            uVar9 = puVar12[7];
            *puVar12 = *puVar15;
            puVar12[1] = uVar1;
            uVar1 = puVar15[3];
            puVar12[2] = puVar15[2];
            puVar12[3] = uVar1;
            uVar1 = puVar15[5];
            puVar12[4] = puVar15[4];
            puVar12[5] = uVar1;
            uVar1 = puVar15[7];
            puVar12[6] = puVar15[6];
            puVar12[7] = uVar1;
            *puVar15 = uVar2;
            puVar15[1] = uVar3;
            puVar15[2] = uVar4;
            puVar15[3] = uVar5;
            puVar15[4] = uVar6;
            puVar15[5] = uVar7;
            puVar15[6] = uVar8;
            puVar15[7] = uVar9;
            fVar19 = *(float *)((longlong)puVar18 + 0x2c);
          }
          puVar12 = puVar12 + 8;
        }
        if (*(float *)((longlong)puVar15 + 0x6c) <= fVar19) {
          puVar14 = puVar15 + 8;
          if (*(float *)((longlong)puVar15 + 0x6c) < fVar19) goto joined_r0x000180587f7b;
          if (puVar12 != puVar14) {
            uVar1 = puVar15[9];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            uVar6 = puVar12[4];
            uVar7 = puVar12[5];
            uVar8 = puVar12[6];
            uVar9 = puVar12[7];
            *puVar12 = *puVar14;
            puVar12[1] = uVar1;
            uVar1 = puVar15[0xb];
            puVar12[2] = puVar15[10];
            puVar12[3] = uVar1;
            uVar1 = puVar15[0xd];
            puVar12[4] = puVar15[0xc];
            puVar12[5] = uVar1;
            uVar1 = puVar15[0xf];
            puVar12[6] = puVar15[0xe];
            puVar12[7] = uVar1;
            *puVar14 = uVar2;
            puVar15[9] = uVar3;
            puVar15[10] = uVar4;
            puVar15[0xb] = uVar5;
            puVar15[0xc] = uVar6;
            puVar15[0xd] = uVar7;
            puVar15[0xe] = uVar8;
            puVar15[0xf] = uVar9;
            fVar19 = *(float *)((longlong)puVar18 + 0x2c);
          }
          puVar12 = puVar12 + 8;
        }
        if (*(float *)((longlong)puVar15 + 0xac) <= fVar19) {
          puVar14 = puVar15 + 0x10;
          if (*(float *)((longlong)puVar15 + 0xac) < fVar19) goto joined_r0x000180587f7b;
          if (puVar12 != puVar14) {
            uVar1 = puVar15[0x11];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            uVar6 = puVar12[4];
            uVar7 = puVar12[5];
            uVar8 = puVar12[6];
            uVar9 = puVar12[7];
            *puVar12 = *puVar14;
            puVar12[1] = uVar1;
            uVar1 = puVar15[0x13];
            puVar12[2] = puVar15[0x12];
            puVar12[3] = uVar1;
            uVar1 = puVar15[0x15];
            puVar12[4] = puVar15[0x14];
            puVar12[5] = uVar1;
            uVar1 = puVar15[0x17];
            puVar12[6] = puVar15[0x16];
            puVar12[7] = uVar1;
            *puVar14 = uVar2;
            puVar15[0x11] = uVar3;
            puVar15[0x12] = uVar4;
            puVar15[0x13] = uVar5;
            puVar15[0x14] = uVar6;
            puVar15[0x15] = uVar7;
            puVar15[0x16] = uVar8;
            puVar15[0x17] = uVar9;
          }
          puVar12 = puVar12 + 8;
        }
        puVar13 = puVar13 + 0x20;
        puVar15 = puVar15 + 0x20;
      } while (puVar13 < param_3 + -0x18);
    }
    for (; puVar14 = puVar13, puVar13 < param_3; puVar13 = puVar13 + 8) {
      if (*(float *)((longlong)puVar13 + 0x2c) <= *(float *)((longlong)puVar18 + 0x2c)) {
        if (*(float *)((longlong)puVar13 + 0x2c) < *(float *)((longlong)puVar18 + 0x2c)) break;
        if (puVar12 != puVar13) {
          uVar1 = puVar13[1];
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          uVar6 = puVar12[4];
          uVar7 = puVar12[5];
          uVar8 = puVar12[6];
          uVar9 = puVar12[7];
          *puVar12 = *puVar13;
          puVar12[1] = uVar1;
          uVar1 = puVar13[3];
          puVar12[2] = puVar13[2];
          puVar12[3] = uVar1;
          uVar1 = puVar13[5];
          puVar12[4] = puVar13[4];
          puVar12[5] = uVar1;
          uVar1 = puVar13[7];
          puVar12[6] = puVar13[6];
          puVar12[7] = uVar1;
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          puVar13[2] = uVar4;
          puVar13[3] = uVar5;
          puVar13[4] = uVar6;
          puVar13[5] = uVar7;
          puVar13[6] = uVar8;
          puVar13[7] = uVar9;
        }
        puVar12 = puVar12 + 8;
      }
    }
  }
joined_r0x000180587f7b:
  do {
    if (puVar10 <= param_2) break;
    puVar15 = puVar17 + -8;
    puVar13 = puVar18;
    if (*(float *)((longlong)puVar18 + 0x2c) <= *(float *)((longlong)puVar17 + -0x14)) {
      if (*(float *)((longlong)puVar18 + 0x2c) < *(float *)((longlong)puVar17 + -0x14)) break;
      puVar13 = puVar18 + -8;
      if (puVar13 != puVar15) {
        uVar1 = puVar17[-7];
        uVar2 = *puVar13;
        uVar3 = puVar18[-7];
        uVar4 = puVar18[-6];
        uVar5 = puVar18[-5];
        uVar6 = puVar18[-4];
        uVar7 = puVar18[-3];
        uVar8 = puVar18[-2];
        uVar9 = puVar18[-1];
        *puVar13 = *puVar15;
        puVar18[-7] = uVar1;
        uVar1 = puVar17[-5];
        puVar18[-6] = puVar17[-6];
        puVar18[-5] = uVar1;
        uVar1 = puVar17[-3];
        puVar18[-4] = puVar17[-4];
        puVar18[-3] = uVar1;
        uVar1 = puVar17[-1];
        puVar18[-2] = puVar17[-2];
        puVar18[-1] = uVar1;
        *puVar15 = uVar2;
        puVar17[-7] = uVar3;
        puVar17[-6] = uVar4;
        puVar17[-5] = uVar5;
        puVar17[-4] = uVar6;
        puVar17[-3] = uVar7;
        puVar17[-2] = uVar8;
        puVar17[-1] = uVar9;
      }
    }
    puVar10 = puVar10 + -8;
    puVar17 = puVar15;
    puVar18 = puVar13;
  } while( true );
  if (puVar10 == param_2) {
    if (puVar14 == param_3) {
      *param_1 = puVar18;
      param_1[1] = puVar12;
      return param_1;
    }
    if (puVar12 != puVar14) {
      uVar1 = puVar12[1];
      uVar2 = *puVar18;
      uVar3 = puVar18[1];
      uVar4 = puVar18[2];
      uVar5 = puVar18[3];
      uVar6 = puVar18[4];
      uVar7 = puVar18[5];
      uVar8 = puVar18[6];
      uVar9 = puVar18[7];
      *puVar18 = *puVar12;
      puVar18[1] = uVar1;
      uVar1 = puVar12[3];
      puVar18[2] = puVar12[2];
      puVar18[3] = uVar1;
      uVar1 = puVar12[5];
      puVar18[4] = puVar12[4];
      puVar18[5] = uVar1;
      uVar1 = puVar12[7];
      puVar18[6] = puVar12[6];
      puVar18[7] = uVar1;
      *puVar12 = uVar2;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      puVar12[6] = uVar8;
      puVar12[7] = uVar9;
    }
    uVar1 = puVar14[1];
    uVar2 = *puVar18;
    uVar3 = puVar18[1];
    uVar4 = puVar18[2];
    uVar5 = puVar18[3];
    uVar6 = puVar18[4];
    uVar7 = puVar18[5];
    uVar8 = puVar18[6];
    uVar9 = puVar18[7];
    *puVar18 = *puVar14;
    puVar18[1] = uVar1;
    uVar1 = puVar14[3];
    puVar18[2] = puVar14[2];
    puVar18[3] = uVar1;
    uVar1 = puVar14[5];
    puVar18[4] = puVar14[4];
    puVar18[5] = uVar1;
    uVar1 = puVar14[7];
    puVar18[6] = puVar14[6];
    puVar18[7] = uVar1;
    *puVar14 = uVar2;
    puVar14[1] = uVar3;
    puVar14[2] = uVar4;
    puVar14[3] = uVar5;
    puVar14[4] = uVar6;
    puVar14[5] = uVar7;
    puVar14[6] = uVar8;
    puVar14[7] = uVar9;
    puVar12 = puVar12 + 8;
    puVar13 = puVar14 + 8;
    puVar17 = puVar10;
    puVar18 = puVar18 + 8;
  }
  else {
    puVar17 = puVar10 + -8;
    if (puVar14 == param_3) {
      puVar15 = puVar18 + -8;
      if (puVar17 != puVar15) {
        uVar1 = puVar18[-7];
        uVar2 = *puVar17;
        uVar3 = puVar10[-7];
        uVar4 = puVar10[-6];
        uVar5 = puVar10[-5];
        uVar6 = puVar10[-4];
        uVar7 = puVar10[-3];
        uVar8 = puVar10[-2];
        uVar9 = puVar10[-1];
        *puVar17 = *puVar15;
        puVar10[-7] = uVar1;
        uVar1 = puVar18[-5];
        puVar10[-6] = puVar18[-6];
        puVar10[-5] = uVar1;
        uVar1 = puVar18[-3];
        puVar10[-4] = puVar18[-4];
        puVar10[-3] = uVar1;
        uVar1 = puVar18[-1];
        puVar10[-2] = puVar18[-2];
        puVar10[-1] = uVar1;
        *puVar15 = uVar2;
        puVar18[-7] = uVar3;
        puVar18[-6] = uVar4;
        puVar18[-5] = uVar5;
        puVar18[-4] = uVar6;
        puVar18[-3] = uVar7;
        puVar18[-2] = uVar8;
        puVar18[-1] = uVar9;
      }
      uVar1 = puVar12[-7];
      uVar2 = *puVar15;
      uVar3 = puVar18[-7];
      uVar4 = puVar18[-6];
      uVar5 = puVar18[-5];
      uVar6 = puVar18[-4];
      uVar7 = puVar18[-3];
      uVar8 = puVar18[-2];
      uVar9 = puVar18[-1];
      *puVar15 = puVar12[-8];
      puVar18[-7] = uVar1;
      uVar1 = puVar12[-5];
      puVar18[-6] = puVar12[-6];
      puVar18[-5] = uVar1;
      uVar1 = puVar12[-3];
      puVar18[-4] = puVar12[-4];
      puVar18[-3] = uVar1;
      uVar1 = puVar12[-1];
      puVar18[-2] = puVar12[-2];
      puVar18[-1] = uVar1;
      puVar12[-8] = uVar2;
      puVar12[-7] = uVar3;
      puVar12[-6] = uVar4;
      puVar12[-5] = uVar5;
      puVar12[-4] = uVar6;
      puVar12[-3] = uVar7;
      puVar12[-2] = uVar8;
      puVar12[-1] = uVar9;
      puVar12 = puVar12 + -8;
      puVar13 = puVar14;
      puVar18 = puVar15;
    }
    else {
      uVar1 = puVar10[-7];
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      uVar6 = puVar14[4];
      uVar7 = puVar14[5];
      uVar8 = puVar14[6];
      uVar9 = puVar14[7];
      *puVar14 = *puVar17;
      puVar14[1] = uVar1;
      uVar1 = puVar10[-5];
      puVar14[2] = puVar10[-6];
      puVar14[3] = uVar1;
      uVar1 = puVar10[-3];
      puVar14[4] = puVar10[-4];
      puVar14[5] = uVar1;
      uVar1 = puVar10[-1];
      puVar14[6] = puVar10[-2];
      puVar14[7] = uVar1;
      *puVar17 = uVar2;
      puVar10[-7] = uVar3;
      puVar10[-6] = uVar4;
      puVar10[-5] = uVar5;
      puVar10[-4] = uVar6;
      puVar10[-3] = uVar7;
      puVar10[-2] = uVar8;
      puVar10[-1] = uVar9;
      puVar13 = puVar14 + 8;
    }
  }
  goto LAB_180587d30;
}





// 函数: void FUN_1805881e0(int param_1,int param_2,longlong *param_3)
void FUN_1805881e0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    param_3 = (longlong *)*param_3;
    lVar3 = (longlong)param_1 << 3;
    uVar2 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      if (*(char *)(lVar1 + 0x3fe4) == '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x3fc0);
      }
      FUN_18057f6e0(param_3[1],*(uint64_t *)(lVar3 + lVar1),param_3[2],*(int32_t *)param_3[3],
                    *(uint64_t *)param_3[4],param_3[5]);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_1805881ec(int param_1,int param_2)
void FUN_1805881ec(int param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  longlong lStack0000000000000028;
  
  lVar3 = (longlong)param_1 << 3;
  uVar2 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar1 = *unaff_RBX;
    if (*(char *)(lVar1 + 0x3fe4) == '\0') {
      lVar1 = *(longlong *)(lVar1 + 0x3fc0);
    }
    lStack0000000000000028 = unaff_RBX[5];
    FUN_18057f6e0(unaff_RBX[1],*(uint64_t *)(lVar3 + lVar1),unaff_RBX[2],
                  *(int32_t *)unaff_RBX[3],*(uint64_t *)unaff_RBX[4]);
    lVar3 = lVar3 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}





// 函数: void FUN_18058825c(void)
void FUN_18058825c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180588260(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b6c0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180588350(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b700;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180588430(longlong param_1,longlong param_2,ulonglong param_3,uint64_t *param_4)
void FUN_180588430(longlong param_1,longlong param_2,ulonglong param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar8 = param_2;
  lVar7 = param_2;
  if (param_2 < lVar9) {
    do {
      fVar4 = *(float *)(lVar7 * 0x80 + 0x6c + param_1);
      pfVar3 = (float *)(lVar7 * 0x80 + 0xac + param_1);
      lVar8 = lVar7 * 2 + 1;
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) {
        lVar8 = lVar7 * 2 + 2;
      }
      lVar7 = lVar7 * 0x40;
      lVar6 = lVar8 * 0x40;
      uVar5 = ((uint64_t *)(lVar6 + param_1))[1];
      *(uint64_t *)(lVar7 + param_1) = *(uint64_t *)(lVar6 + param_1);
      ((uint64_t *)(lVar7 + param_1))[1] = uVar5;
      puVar1 = (uint64_t *)(lVar6 + 0x10 + param_1);
      uVar5 = puVar1[1];
      puVar2 = (uint64_t *)(lVar7 + 0x10 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (uint64_t *)(lVar6 + 0x20 + param_1);
      uVar5 = puVar1[1];
      puVar2 = (uint64_t *)(lVar7 + 0x20 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (uint64_t *)(lVar6 + 0x30 + param_1);
      uVar5 = puVar1[1];
      puVar2 = (uint64_t *)(lVar7 + 0x30 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar7 = lVar8;
    } while (lVar8 < lVar9);
  }
  if ((lVar8 == lVar9) && ((param_3 & 1) == 0)) {
    lVar7 = param_3 * 0x40;
    lVar8 = lVar8 * 0x40;
    puVar1 = (uint64_t *)(lVar7 + -0x40 + param_1);
    uVar5 = puVar1[1];
    *(uint64_t *)(lVar8 + param_1) = *puVar1;
    ((uint64_t *)(lVar8 + param_1))[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + -0x30 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + -0x20 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + -0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x30 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar8 = param_3 - 1;
  }
  while (param_2 < lVar8) {
    lVar9 = lVar8 + -1 >> 1;
    lVar7 = lVar9 * 0x40;
    pfVar3 = (float *)(lVar7 + 0x2c + param_1);
    if (*(float *)((longlong)param_4 + 0x2c) < *pfVar3 ||
        *(float *)((longlong)param_4 + 0x2c) == *pfVar3) break;
    uVar5 = ((uint64_t *)(lVar7 + param_1))[1];
    lVar8 = lVar8 * 0x40;
    *(uint64_t *)(lVar8 + param_1) = *(uint64_t *)(lVar7 + param_1);
    ((uint64_t *)(lVar8 + param_1))[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + 0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + 0x20 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (uint64_t *)(lVar7 + 0x30 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (uint64_t *)(lVar8 + 0x30 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar8 = lVar9;
  }
  uVar5 = param_4[1];
  lVar8 = lVar8 * 0x40;
  *(uint64_t *)(lVar8 + param_1) = *param_4;
  ((uint64_t *)(lVar8 + param_1))[1] = uVar5;
  uVar5 = param_4[3];
  puVar1 = (uint64_t *)(lVar8 + 0x10 + param_1);
  *puVar1 = param_4[2];
  puVar1[1] = uVar5;
  uVar5 = param_4[5];
  puVar1 = (uint64_t *)(lVar8 + 0x20 + param_1);
  *puVar1 = param_4[4];
  puVar1[1] = uVar5;
  uVar5 = param_4[7];
  puVar1 = (uint64_t *)(lVar8 + 0x30 + param_1);
  *puVar1 = param_4[6];
  puVar1[1] = uVar5;
  return;
}



float * FUN_180588680(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    fStack_38 = *(float *)(param_1 + 0x8c);
    fStack_34 = *(float *)(param_1 + 0x90);
    fStack_30 = *(float *)(param_1 + 0x94);
    fStack_2c = *(float *)(param_1 + 0x98);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xa0))(*(longlong **)(param_1 + 0xe8),&fStack_38)
    ;
  }
  *param_2 = fStack_38;
  param_2[1] = fStack_34;
  param_2[2] = fStack_30;
  param_2[3] = fStack_2c;
  fVar1 = fStack_38 * fStack_38 + fStack_34 * fStack_34 + fStack_30 * fStack_30;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  *param_2 = fStack_38 * fVar1;
  param_2[1] = fStack_34 * fVar1;
  param_2[2] = fStack_30 * fVar1;
  return param_2;
}



uint64_t * FUN_1805887f0(uint64_t *param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  
  *param_1 = &UNK_180a19ac8;
  *param_1 = &UNK_180a199c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &UNK_180a37038;
  param_1[0x12] = 0;
  lVar1 = 2;
  FUN_1808fc838(param_1 + 0x1e,0x11b0,2,FUN_180434170,FUN_180434250);
  puVar2 = param_1 + 0x48a;
  do {
    func_0x00018058d8e0(puVar2);
    puVar2 = puVar2 + 9;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[0x49c] = 0;
  param_1[0x49d] = 0;
  param_1[0x49e] = 0;
  param_1[0x49f] = 0;
  FUN_180588970(param_1);
  return param_1;
}



uint64_t FUN_1805888d0(uint64_t param_1,ulonglong param_2)

{
  FUN_180588910();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2500);
  }
  return param_1;
}





// 函数: void FUN_180588910(uint64_t *param_1)
void FUN_180588910(uint64_t *param_1)

{
  *param_1 = &UNK_180a37038;
  FUN_1808fc8a8(param_1 + 0x1e,0x11b0,2,FUN_180434250,0xfffffffffffffffe);
  *param_1 = &UNK_180a199c8;
  *param_1 = &UNK_180a19ac8;
  return;
}





// 函数: void FUN_180588970(longlong param_1)
void FUN_180588970(longlong param_1)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0xf0;
  *(int32_t *)(param_1 + 0x9c) = 0;
  puVar1 = (int32_t *)(param_1 + 0x2458);
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  lVar2 = 2;
  *(int32_t *)(param_1 + 0xac) = 0;
  *(int16_t *)(param_1 + 0xb8) = 0;
  *(int8_t *)(param_1 + 0xba) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x60) = 0x3f800000;
  *(int32_t *)(param_1 + 100) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0xa4) = 0x3f800000;
  *(int32_t *)(param_1 + 0xa0) = 0x3f800000;
  *(int8_t *)(param_1 + 0xa8) = 1;
  do {
    *(uint64_t *)(puVar1 + -2) = 0xffffffffffffffff;
    *puVar1 = 0;
    *(uint64_t *)(puVar1 + 2) = 0;
    *(uint64_t *)(puVar1 + 4) = 0;
    *(uint64_t *)(puVar1 + 6) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0x3f800000;
    puVar1[10] = 0xbe4ccccd;
    puVar1[0xb] = 0xbe4ccccd;
    *(uint64_t *)(puVar1 + 0xc) = 0x3ecccccd;
    *(int16_t *)(puVar1 + 0xe) = 0x100;
    FUN_180431730(lVar3);
    lVar3 = lVar3 + 0x11b0;
    puVar1 = puVar1 + 0x12;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(uint64_t *)(param_1 + 0xbc) = 0;
  *(uint64_t *)(param_1 + 0xc4) = 0;
  *(int8_t *)(param_1 + 0x58) = 0xff;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(int8_t *)(param_1 + 0xcc) = 0;
  return;
}





// 函数: void FUN_180588b60(longlong param_1,int param_2,int32_t param_3,int32_t param_4,
void FUN_180588b60(longlong param_1,int param_2,int32_t param_3,int32_t param_4,
                  int8_t param_5)

{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180432170(param_1 + 0xf0 + (longlong)param_2 * 0x11b0,param_3,auStackX_20,param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180588fe0(void)
void FUN_180588fe0(void)

{
  char in_R9B;
  int8_t auStack_1b8 [32];
  int8_t auStack_198 [256];
  ulonglong uStack_98;
  
  uStack_98 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
                    // WARNING: Subroutine does not return
  memset(auStack_198,0,(longlong)in_R9B << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180589480(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_180589480(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,float *param_10,float *param_11)

{
  float fVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_1a8 [64];
  int8_t uStack_168;
  longlong lStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  uStack_120 = param_7;
  uStack_128 = param_8;
  cVar2 = *(char *)(param_1 + 0x58);
  uStack_118 = param_6;
  if (-1 < cVar2) {
    fVar7 = *param_11;
    fVar9 = param_11[cVar2];
    fVar1 = *param_10;
    fVar8 = (1.0 - fVar9) * param_10[cVar2] + fVar9;
    *(float *)(param_1 + 0x74) = fVar8;
    if (fVar8 <= 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = fVar9 / fVar8;
    }
    fVar8 = fVar8 - ((1.0 - fVar7) * fVar1 + fVar7);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x70) = fVar8 * fVar9;
    if (0.0 < fVar8 * fVar9) {
      lVar5 = (longlong)*(int *)(param_1 + 0x12b0);
      lVar6 = 0;
      fVar9 = 0.0;
      fVar7 = 0.0;
      if (3 < lVar5) {
        pbVar3 = (byte *)(param_1 + 0x12dc);
        lVar4 = (lVar5 - 4U >> 2) + 1;
        lVar6 = lVar4 * 4;
        do {
          if ((*pbVar3 & 8) != 0) {
            fVar7 = fVar7 + *(float *)(pbVar3 + -0x18);
          }
          if ((pbVar3[0x48] & 8) != 0) {
            fVar7 = fVar7 + *(float *)(pbVar3 + 0x30);
          }
          if ((pbVar3[0x90] & 8) != 0) {
            fVar7 = fVar7 + *(float *)(pbVar3 + 0x78);
          }
          fVar9 = fVar9 + *(float *)(pbVar3 + -0x18) + *(float *)(pbVar3 + 0x30) +
                  *(float *)(pbVar3 + 0x78) + *(float *)(pbVar3 + 0xc0);
          if ((pbVar3[0xd8] & 8) != 0) {
            fVar7 = fVar7 + *(float *)(pbVar3 + 0xc0);
          }
          pbVar3 = pbVar3 + 0x120;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar6 < lVar5) {
        lVar5 = lVar5 - lVar6;
        pbVar3 = (byte *)(param_1 + 0x12dc + lVar6 * 0x48);
        do {
          fVar9 = fVar9 + *(float *)(pbVar3 + -0x18);
          if ((*pbVar3 & 8) != 0) {
            fVar7 = fVar7 + *(float *)(pbVar3 + -0x18);
          }
          pbVar3 = pbVar3 + 0x48;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (fVar7 == 0.0) {
        *(int32_t *)(param_1 + 0x70) = 0;
      }
      else {
        *(float *)(param_1 + 0x70) = (fVar7 / fVar9) * *(float *)(param_1 + 0x70);
      }
    }
  }
  uStack_130 = *(uint64_t *)(param_2 + 0x208);
  uStack_168 = *(float *)(param_2 + 0x38) <= 0.005 && *(float *)(param_2 + 0x38) != 0.005;
  lStack_138 = param_1;
  if (0.0 < *(float *)(param_1 + 0x1284)) {
                    // WARNING: Subroutine does not return
    memset(param_5,0,0x1050);
  }
  if (0.0 < *(float *)(param_1 + 0x2434)) {
                    // WARNING: Subroutine does not return
    memset(param_6,0,0x1050);
  }
  *(uint64_t *)(param_1 + 0x80) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x88) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_1a8);
}





