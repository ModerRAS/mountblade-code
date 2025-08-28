#include "TaleWorlds.Native.Split.h"

// 99_part_04_part069.c - 3 个函数

// 函数: void FUN_1802c70b0(int32_t *param_1,longlong param_2,longlong param_3,uint64_t param_4)
void FUN_1802c70b0(int32_t *param_1,longlong param_2,longlong param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  lVar4 = param_2 - (longlong)param_1;
  do {
    lVar4 = lVar4 >> 4;
    if (lVar4 < 0x21) {
LAB_1802c7170:
      if (1 < lVar4) {
        FUN_1802c78a0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar4) {
        FUN_1802c7640(param_1,param_2,param_4);
        lVar4 = param_2 - (longlong)param_1 >> 4;
        if (lVar4 < 2) {
          return;
        }
        puVar6 = (int32_t *)(param_2 + -0x10);
        if (lVar4 < 2) goto LAB_1802c71f9;
        do {
          uStack_28 = *puVar6;
          uStack_24 = puVar6[1];
          uStack_20 = puVar6[2];
          uStack_1c = puVar6[3];
          uVar1 = param_1[1];
          uVar2 = param_1[2];
          uVar3 = param_1[3];
          *puVar6 = *param_1;
          puVar6[1] = uVar1;
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          FUN_1802c7e40(param_1,0,(longlong)puVar6 - (longlong)param_1 >> 4,&uStack_28,param_4);
LAB_1802c71f9:
          puVar6 = puVar6 + -4;
        } while (1 < (longlong)puVar6 + (0x10 - (longlong)param_1) >> 4);
        return;
      }
      goto LAB_1802c7170;
    }
    FUN_1802c7220(&uStack_28,param_1,param_2,param_4);
    lVar5 = CONCAT44(uStack_24,uStack_28);
    puVar6 = (int32_t *)CONCAT44(uStack_1c,uStack_20);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(lVar5 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)(param_2 - (longlong)puVar6 & 0xfffffffffffffff0U)) {
      FUN_1802c70b0(param_1,lVar5,param_3,param_4);
      lVar5 = param_2;
      param_1 = puVar6;
    }
    else {
      FUN_1802c70b0(puVar6,param_2,param_3,param_4);
    }
    lVar4 = lVar5 - (longlong)param_1;
    param_2 = lVar5;
  } while( true );
}



uint64_t * FUN_1802c7220(uint64_t *param_1,float *param_2,float *param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar9 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 5) * 4;
  lVar5 = (longlong)param_3 + (-0x10 - (longlong)param_2) >> 4;
  if (lVar5 < 0x29) {
    pfVar7 = param_3 + -4;
    pfVar6 = param_2;
  }
  else {
    lVar5 = lVar5 + 1 >> 3;
    lVar12 = lVar5 * 0x20;
    pfVar6 = param_2 + lVar5 * 4;
    lVar5 = FUN_1802c8010(param_2,pfVar6,param_2 + lVar5 * 8);
    lVar5 = FUN_1802c8010((longlong)pfVar9 - lVar5,pfVar9,lVar5 + (longlong)pfVar9);
    pfVar7 = (float *)((longlong)param_3 + (-0x10 - lVar5));
    FUN_1802c8010((longlong)param_3 + (-0x10 - lVar12),pfVar7,param_3 + -4);
  }
  FUN_1802c8010(pfVar6,pfVar9,pfVar7);
  pfVar6 = pfVar9 + 4;
  if (param_2 < pfVar9) {
    pfVar7 = pfVar9 + -2;
    do {
      fVar13 = *(float *)(param_4 + 0x48) - *pfVar7;
      fVar15 = *(float *)(param_4 + 0x44) - pfVar7[-1];
      fVar17 = *(float *)(param_4 + 0x40) - pfVar7[-2];
      fVar18 = *(float *)(param_4 + 0x44) - pfVar7[3];
      fVar16 = *(float *)(param_4 + 0x48) - pfVar7[4];
      fVar14 = *(float *)(param_4 + 0x40) - *pfVar9;
      fVar15 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13);
      fVar13 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar16 * fVar16);
      if ((fVar15 < fVar13) || (fVar13 < fVar15)) break;
      pfVar9 = pfVar9 + -4;
      pfVar7 = pfVar7 + -4;
    } while (param_2 < pfVar9);
  }
  pfVar7 = pfVar6;
  pfVar10 = pfVar9;
  if (pfVar6 < param_3) {
    fVar14 = *(float *)(param_4 + 0x44) - pfVar9[1];
    fVar15 = *(float *)(param_4 + 0x40) - *pfVar9;
    fVar13 = *(float *)(param_4 + 0x48) - pfVar9[2];
    fVar13 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
    do {
      fVar15 = *(float *)(param_4 + 0x44) - pfVar6[1];
      fVar16 = *(float *)(param_4 + 0x40) - *pfVar6;
      fVar14 = *(float *)(param_4 + 0x48) - pfVar6[2];
      fVar14 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
      pfVar7 = pfVar6;
      if ((fVar14 < fVar13) || (fVar13 < fVar14)) break;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar6;
    } while (pfVar6 < param_3);
  }
joined_r0x0001802c7423:
  do {
    pfVar4 = pfVar9;
    if (param_3 <= pfVar6) {
joined_r0x0001802c74ce:
      for (; param_2 < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar8 = pfVar9 + -4;
        fVar14 = *(float *)(param_4 + 0x44) - pfVar9[-3];
        fVar18 = *(float *)(param_4 + 0x44) - pfVar10[1];
        fVar15 = *(float *)(param_4 + 0x40) - *pfVar8;
        fVar16 = *(float *)(param_4 + 0x40) - *pfVar10;
        fVar13 = *(float *)(param_4 + 0x48) - pfVar9[-2];
        fVar17 = *(float *)(param_4 + 0x48) - pfVar10[2];
        fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
        fVar13 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17);
        pfVar11 = pfVar10;
        if (fVar13 <= fVar14) {
          if (fVar13 < fVar14) break;
          pfVar11 = pfVar10 + -4;
          if (pfVar11 != pfVar8) {
            uVar1 = *(uint64_t *)(pfVar9 + -2);
            uVar2 = *(uint64_t *)pfVar11;
            uVar3 = *(uint64_t *)(pfVar10 + -2);
            *(uint64_t *)pfVar11 = *(uint64_t *)pfVar8;
            *(uint64_t *)(pfVar10 + -2) = uVar1;
            *(uint64_t *)pfVar8 = uVar2;
            *(uint64_t *)(pfVar9 + -2) = uVar3;
          }
        }
        pfVar9 = pfVar8;
        pfVar10 = pfVar11;
      }
      if (pfVar4 == param_2) {
        if (pfVar6 == param_3) {
          *param_1 = pfVar10;
          param_1[1] = pfVar7;
          return param_1;
        }
        if (pfVar7 != pfVar6) {
          uVar1 = *(uint64_t *)(pfVar7 + 2);
          uVar2 = *(uint64_t *)pfVar10;
          uVar3 = *(uint64_t *)(pfVar10 + 2);
          *(uint64_t *)pfVar10 = *(uint64_t *)pfVar7;
          *(uint64_t *)(pfVar10 + 2) = uVar1;
          *(uint64_t *)pfVar7 = uVar2;
          *(uint64_t *)(pfVar7 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(pfVar6 + 2);
        uVar2 = *(uint64_t *)pfVar10;
        uVar3 = *(uint64_t *)(pfVar10 + 2);
        *(uint64_t *)pfVar10 = *(uint64_t *)pfVar6;
        *(uint64_t *)(pfVar10 + 2) = uVar1;
        *(uint64_t *)pfVar6 = uVar2;
        *(uint64_t *)(pfVar6 + 2) = uVar3;
        pfVar6 = pfVar6 + 4;
        pfVar7 = pfVar7 + 4;
        pfVar9 = pfVar4;
        pfVar10 = pfVar10 + 4;
      }
      else {
        pfVar9 = pfVar4 + -4;
        if (pfVar6 == param_3) {
          pfVar11 = pfVar10 + -4;
          if (pfVar9 != pfVar11) {
            uVar1 = *(uint64_t *)(pfVar10 + -2);
            uVar2 = *(uint64_t *)pfVar9;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)pfVar9 = *(uint64_t *)pfVar11;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar11 = uVar2;
            *(uint64_t *)(pfVar10 + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(pfVar7 + -2);
          uVar2 = *(uint64_t *)pfVar11;
          uVar3 = *(uint64_t *)(pfVar10 + -2);
          *(uint64_t *)pfVar11 = *(uint64_t *)(pfVar7 + -4);
          *(uint64_t *)(pfVar10 + -2) = uVar1;
          *(uint64_t *)(pfVar7 + -4) = uVar2;
          *(uint64_t *)(pfVar7 + -2) = uVar3;
          pfVar7 = pfVar7 + -4;
          pfVar10 = pfVar11;
        }
        else {
          uVar1 = *(uint64_t *)pfVar6;
          uVar2 = *(uint64_t *)(pfVar6 + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)pfVar6 = *(uint64_t *)pfVar9;
          *(uint64_t *)(pfVar6 + 2) = uVar3;
          pfVar6 = pfVar6 + 4;
          *(uint64_t *)pfVar9 = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x0001802c7423;
    }
    fVar14 = *(float *)(param_4 + 0x44) - pfVar10[1];
    fVar18 = *(float *)(param_4 + 0x44) - pfVar6[1];
    fVar15 = *(float *)(param_4 + 0x40) - *pfVar10;
    fVar16 = *(float *)(param_4 + 0x40) - *pfVar6;
    fVar13 = *(float *)(param_4 + 0x48) - pfVar10[2];
    fVar17 = *(float *)(param_4 + 0x48) - pfVar6[2];
    fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
    fVar13 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17);
    if (fVar13 <= fVar14) {
      if (fVar13 < fVar14) goto joined_r0x0001802c74ce;
      if (pfVar7 != pfVar6) {
        uVar1 = *(uint64_t *)(pfVar6 + 2);
        uVar2 = *(uint64_t *)pfVar7;
        uVar3 = *(uint64_t *)(pfVar7 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar6;
        *(uint64_t *)(pfVar7 + 2) = uVar1;
        *(uint64_t *)pfVar6 = uVar2;
        *(uint64_t *)(pfVar6 + 2) = uVar3;
      }
      pfVar7 = pfVar7 + 4;
    }
    pfVar6 = pfVar6 + 4;
  } while( true );
}



uint64_t * FUN_1802c7238(uint64_t *param_1,float *param_2,float *param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong unaff_RBX;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar9 = param_2 + (unaff_RBX - (longlong)param_2 >> 5) * 4;
  lVar5 = (longlong)param_3 + (-0x10 - (longlong)param_2) >> 4;
  if (lVar5 < 0x29) {
    pfVar7 = param_3 + -4;
    pfVar6 = param_2;
  }
  else {
    lVar5 = lVar5 + 1 >> 3;
    lVar12 = lVar5 * 0x20;
    pfVar6 = param_2 + lVar5 * 4;
    lVar5 = FUN_1802c8010(param_2,pfVar6,param_2 + lVar5 * 8);
    lVar5 = FUN_1802c8010((longlong)pfVar9 - lVar5,pfVar9,lVar5 + (longlong)pfVar9);
    pfVar7 = (float *)((longlong)param_3 + (-0x10 - lVar5));
    FUN_1802c8010((longlong)param_3 + (-0x10 - lVar12),pfVar7,param_3 + -4);
  }
  FUN_1802c8010(pfVar6,pfVar9,pfVar7);
  pfVar6 = pfVar9 + 4;
  if (param_2 < pfVar9) {
    pfVar7 = pfVar9 + -2;
    do {
      fVar13 = *(float *)(param_4 + 0x48) - *pfVar7;
      fVar15 = *(float *)(param_4 + 0x44) - pfVar7[-1];
      fVar17 = *(float *)(param_4 + 0x40) - pfVar7[-2];
      fVar18 = *(float *)(param_4 + 0x44) - pfVar7[3];
      fVar16 = *(float *)(param_4 + 0x48) - pfVar7[4];
      fVar14 = *(float *)(param_4 + 0x40) - *pfVar9;
      fVar15 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13);
      fVar13 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar16 * fVar16);
      if ((fVar15 < fVar13) || (fVar13 < fVar15)) break;
      pfVar9 = pfVar9 + -4;
      pfVar7 = pfVar7 + -4;
    } while (param_2 < pfVar9);
  }
  pfVar7 = pfVar6;
  pfVar10 = pfVar9;
  if (pfVar6 < param_3) {
    fVar14 = *(float *)(param_4 + 0x44) - pfVar9[1];
    fVar15 = *(float *)(param_4 + 0x40) - *pfVar9;
    fVar13 = *(float *)(param_4 + 0x48) - pfVar9[2];
    fVar13 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
    do {
      fVar15 = *(float *)(param_4 + 0x44) - pfVar6[1];
      fVar16 = *(float *)(param_4 + 0x40) - *pfVar6;
      fVar14 = *(float *)(param_4 + 0x48) - pfVar6[2];
      fVar14 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
      pfVar7 = pfVar6;
      if ((fVar14 < fVar13) || (fVar13 < fVar14)) break;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar6;
    } while (pfVar6 < param_3);
  }
joined_r0x0001802c7423:
  do {
    pfVar4 = pfVar9;
    if (param_3 <= pfVar6) {
joined_r0x0001802c74ce:
      for (; param_2 < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar8 = pfVar9 + -4;
        fVar14 = *(float *)(param_4 + 0x44) - pfVar9[-3];
        fVar18 = *(float *)(param_4 + 0x44) - pfVar10[1];
        fVar15 = *(float *)(param_4 + 0x40) - *pfVar8;
        fVar16 = *(float *)(param_4 + 0x40) - *pfVar10;
        fVar13 = *(float *)(param_4 + 0x48) - pfVar9[-2];
        fVar17 = *(float *)(param_4 + 0x48) - pfVar10[2];
        fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
        fVar13 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17);
        pfVar11 = pfVar10;
        if (fVar13 <= fVar14) {
          if (fVar13 < fVar14) break;
          pfVar11 = pfVar10 + -4;
          if (pfVar11 != pfVar8) {
            uVar1 = *(uint64_t *)(pfVar9 + -2);
            uVar2 = *(uint64_t *)pfVar11;
            uVar3 = *(uint64_t *)(pfVar10 + -2);
            *(uint64_t *)pfVar11 = *(uint64_t *)pfVar8;
            *(uint64_t *)(pfVar10 + -2) = uVar1;
            *(uint64_t *)pfVar8 = uVar2;
            *(uint64_t *)(pfVar9 + -2) = uVar3;
          }
        }
        pfVar9 = pfVar8;
        pfVar10 = pfVar11;
      }
      if (pfVar4 == param_2) {
        if (pfVar6 == param_3) {
          *param_1 = pfVar10;
          param_1[1] = pfVar7;
          return param_1;
        }
        if (pfVar7 != pfVar6) {
          uVar1 = *(uint64_t *)(pfVar7 + 2);
          uVar2 = *(uint64_t *)pfVar10;
          uVar3 = *(uint64_t *)(pfVar10 + 2);
          *(uint64_t *)pfVar10 = *(uint64_t *)pfVar7;
          *(uint64_t *)(pfVar10 + 2) = uVar1;
          *(uint64_t *)pfVar7 = uVar2;
          *(uint64_t *)(pfVar7 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(pfVar6 + 2);
        uVar2 = *(uint64_t *)pfVar10;
        uVar3 = *(uint64_t *)(pfVar10 + 2);
        *(uint64_t *)pfVar10 = *(uint64_t *)pfVar6;
        *(uint64_t *)(pfVar10 + 2) = uVar1;
        *(uint64_t *)pfVar6 = uVar2;
        *(uint64_t *)(pfVar6 + 2) = uVar3;
        pfVar6 = pfVar6 + 4;
        pfVar7 = pfVar7 + 4;
        pfVar9 = pfVar4;
        pfVar10 = pfVar10 + 4;
      }
      else {
        pfVar9 = pfVar4 + -4;
        if (pfVar6 == param_3) {
          pfVar11 = pfVar10 + -4;
          if (pfVar9 != pfVar11) {
            uVar1 = *(uint64_t *)(pfVar10 + -2);
            uVar2 = *(uint64_t *)pfVar9;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)pfVar9 = *(uint64_t *)pfVar11;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar11 = uVar2;
            *(uint64_t *)(pfVar10 + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(pfVar7 + -2);
          uVar2 = *(uint64_t *)pfVar11;
          uVar3 = *(uint64_t *)(pfVar10 + -2);
          *(uint64_t *)pfVar11 = *(uint64_t *)(pfVar7 + -4);
          *(uint64_t *)(pfVar10 + -2) = uVar1;
          *(uint64_t *)(pfVar7 + -4) = uVar2;
          *(uint64_t *)(pfVar7 + -2) = uVar3;
          pfVar7 = pfVar7 + -4;
          pfVar10 = pfVar11;
        }
        else {
          uVar1 = *(uint64_t *)pfVar6;
          uVar2 = *(uint64_t *)(pfVar6 + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)pfVar6 = *(uint64_t *)pfVar9;
          *(uint64_t *)(pfVar6 + 2) = uVar3;
          pfVar6 = pfVar6 + 4;
          *(uint64_t *)pfVar9 = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x0001802c7423;
    }
    fVar14 = *(float *)(param_4 + 0x44) - pfVar10[1];
    fVar18 = *(float *)(param_4 + 0x44) - pfVar6[1];
    fVar15 = *(float *)(param_4 + 0x40) - *pfVar10;
    fVar16 = *(float *)(param_4 + 0x40) - *pfVar6;
    fVar13 = *(float *)(param_4 + 0x48) - pfVar10[2];
    fVar17 = *(float *)(param_4 + 0x48) - pfVar6[2];
    fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
    fVar13 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17);
    if (fVar13 <= fVar14) {
      if (fVar13 < fVar14) goto joined_r0x0001802c74ce;
      if (pfVar7 != pfVar6) {
        uVar1 = *(uint64_t *)(pfVar6 + 2);
        uVar2 = *(uint64_t *)pfVar7;
        uVar3 = *(uint64_t *)(pfVar7 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar6;
        *(uint64_t *)(pfVar7 + 2) = uVar1;
        *(uint64_t *)pfVar6 = uVar2;
        *(uint64_t *)(pfVar6 + 2) = uVar3;
      }
      pfVar7 = pfVar7 + 4;
    }
    pfVar6 = pfVar6 + 4;
  } while( true );
}






// 函数: void FUN_1802c72de(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1802c72de(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *unaff_RBX;
  float *pfVar7;
  float *pfVar8;
  float *unaff_RSI;
  float *unaff_RDI;
  uint64_t *unaff_R14;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar5 = unaff_RBX + -2;
  do {
    fVar9 = *(float *)(param_4 + 0x48) - *pfVar5;
    fVar11 = *(float *)(param_4 + 0x44) - pfVar5[-1];
    fVar13 = *(float *)(param_4 + 0x40) - pfVar5[-2];
    fVar14 = *(float *)(param_4 + 0x44) - pfVar5[3];
    fVar12 = *(float *)(param_4 + 0x48) - pfVar5[4];
    fVar10 = *(float *)(param_4 + 0x40) - *unaff_RBX;
    fVar11 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9);
    fVar9 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12);
    if ((fVar11 < fVar9) || (fVar9 < fVar11)) break;
    unaff_RBX = unaff_RBX + -4;
    pfVar5 = pfVar5 + -4;
  } while (unaff_RSI < unaff_RBX);
  pfVar5 = param_1;
  pfVar7 = unaff_RBX;
  if (param_1 < unaff_RDI) {
    fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[1];
    fVar11 = *(float *)(param_4 + 0x40) - *unaff_RBX;
    fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[2];
    fVar9 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    do {
      fVar11 = *(float *)(param_4 + 0x44) - param_1[1];
      fVar12 = *(float *)(param_4 + 0x40) - *param_1;
      fVar10 = *(float *)(param_4 + 0x48) - param_1[2];
      fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      pfVar5 = param_1;
      if ((fVar10 < fVar9) || (fVar9 < fVar10)) break;
      param_1 = param_1 + 4;
      pfVar5 = param_1;
    } while (param_1 < unaff_RDI);
  }
joined_r0x0001802c7423:
  do {
    pfVar4 = unaff_RBX;
    if (unaff_RDI <= param_1) {
joined_r0x0001802c74ce:
      for (; unaff_RSI < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar6 = unaff_RBX + -4;
        fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[-3];
        fVar14 = *(float *)(param_4 + 0x44) - pfVar7[1];
        fVar11 = *(float *)(param_4 + 0x40) - *pfVar6;
        fVar12 = *(float *)(param_4 + 0x40) - *pfVar7;
        fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[-2];
        fVar13 = *(float *)(param_4 + 0x48) - pfVar7[2];
        fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        fVar9 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
        pfVar8 = pfVar7;
        if (fVar9 <= fVar10) {
          if (fVar9 < fVar10) break;
          pfVar8 = pfVar7 + -4;
          if (pfVar8 != pfVar6) {
            uVar1 = *(uint64_t *)(unaff_RBX + -2);
            uVar2 = *(uint64_t *)pfVar8;
            uVar3 = *(uint64_t *)(pfVar7 + -2);
            *(uint64_t *)pfVar8 = *(uint64_t *)pfVar6;
            *(uint64_t *)(pfVar7 + -2) = uVar1;
            *(uint64_t *)pfVar6 = uVar2;
            *(uint64_t *)(unaff_RBX + -2) = uVar3;
          }
        }
        unaff_RBX = pfVar6;
        pfVar7 = pfVar8;
      }
      if (pfVar4 == unaff_RSI) {
        if (param_1 == unaff_RDI) {
          *unaff_R14 = pfVar7;
          unaff_R14[1] = pfVar5;
          return;
        }
        if (pfVar5 != param_1) {
          uVar1 = *(uint64_t *)(pfVar5 + 2);
          uVar2 = *(uint64_t *)pfVar7;
          uVar3 = *(uint64_t *)(pfVar7 + 2);
          *(uint64_t *)pfVar7 = *(uint64_t *)pfVar5;
          *(uint64_t *)(pfVar7 + 2) = uVar1;
          *(uint64_t *)pfVar5 = uVar2;
          *(uint64_t *)(pfVar5 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar7;
        uVar3 = *(uint64_t *)(pfVar7 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar7 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
        param_1 = param_1 + 4;
        pfVar5 = pfVar5 + 4;
        unaff_RBX = pfVar4;
        pfVar7 = pfVar7 + 4;
      }
      else {
        unaff_RBX = pfVar4 + -4;
        if (param_1 == unaff_RDI) {
          pfVar8 = pfVar7 + -4;
          if (unaff_RBX != pfVar8) {
            uVar1 = *(uint64_t *)(pfVar7 + -2);
            uVar2 = *(uint64_t *)unaff_RBX;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)unaff_RBX = *(uint64_t *)pfVar8;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar8 = uVar2;
            *(uint64_t *)(pfVar7 + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(pfVar5 + -2);
          uVar2 = *(uint64_t *)pfVar8;
          uVar3 = *(uint64_t *)(pfVar7 + -2);
          *(uint64_t *)pfVar8 = *(uint64_t *)(pfVar5 + -4);
          *(uint64_t *)(pfVar7 + -2) = uVar1;
          *(uint64_t *)(pfVar5 + -4) = uVar2;
          *(uint64_t *)(pfVar5 + -2) = uVar3;
          pfVar5 = pfVar5 + -4;
          pfVar7 = pfVar8;
        }
        else {
          uVar1 = *(uint64_t *)param_1;
          uVar2 = *(uint64_t *)(param_1 + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)param_1 = *(uint64_t *)unaff_RBX;
          *(uint64_t *)(param_1 + 2) = uVar3;
          param_1 = param_1 + 4;
          *(uint64_t *)unaff_RBX = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x0001802c7423;
    }
    fVar10 = *(float *)(param_4 + 0x44) - pfVar7[1];
    fVar14 = *(float *)(param_4 + 0x44) - param_1[1];
    fVar11 = *(float *)(param_4 + 0x40) - *pfVar7;
    fVar12 = *(float *)(param_4 + 0x40) - *param_1;
    fVar9 = *(float *)(param_4 + 0x48) - pfVar7[2];
    fVar13 = *(float *)(param_4 + 0x48) - param_1[2];
    fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    fVar9 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
    if (fVar9 <= fVar10) {
      if (fVar9 < fVar10) goto joined_r0x0001802c74ce;
      if (pfVar5 != param_1) {
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar5;
        uVar3 = *(uint64_t *)(pfVar5 + 2);
        *(uint64_t *)pfVar5 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar5 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
      }
      pfVar5 = pfVar5 + 4;
    }
    param_1 = param_1 + 4;
  } while( true );
}






// 函数: void FUN_1802c72ee(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1802c72ee(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  float *in_RAX;
  float *pfVar5;
  float *pfVar6;
  float *unaff_RBX;
  float *pfVar7;
  float *pfVar8;
  float *unaff_RSI;
  float *unaff_RDI;
  uint64_t *unaff_R14;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM5_Da;
  float fVar14;
  float unaff_XMM6_Da;
  
  do {
    fVar9 = *(float *)(param_4 + 0x48) - *in_RAX;
    fVar10 = *(float *)(param_4 + 0x48) - in_RAX[4];
    fVar12 = SQRT((unaff_XMM6_Da - in_RAX[-2]) * (unaff_XMM6_Da - in_RAX[-2]) +
                  (in_XMM5_Da - in_RAX[-1]) * (in_XMM5_Da - in_RAX[-1]) + fVar9 * fVar9);
    fVar9 = SQRT((in_XMM5_Da - in_RAX[3]) * (in_XMM5_Da - in_RAX[3]) +
                 (unaff_XMM6_Da - *unaff_RBX) * (unaff_XMM6_Da - *unaff_RBX) + fVar10 * fVar10);
    if ((fVar12 < fVar9) || (fVar9 < fVar12)) break;
    unaff_RBX = unaff_RBX + -4;
    in_RAX = in_RAX + -4;
  } while (unaff_RSI < unaff_RBX);
  pfVar5 = param_1;
  pfVar7 = unaff_RBX;
  if (param_1 < unaff_RDI) {
    fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[1];
    fVar12 = *(float *)(param_4 + 0x40) - *unaff_RBX;
    fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[2];
    fVar9 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9);
    do {
      fVar12 = *(float *)(param_4 + 0x44) - param_1[1];
      fVar11 = *(float *)(param_4 + 0x40) - *param_1;
      fVar10 = *(float *)(param_4 + 0x48) - param_1[2];
      fVar10 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
      pfVar5 = param_1;
      if ((fVar10 < fVar9) || (fVar9 < fVar10)) break;
      param_1 = param_1 + 4;
      pfVar5 = param_1;
    } while (param_1 < unaff_RDI);
  }
joined_r0x0001802c7423:
  do {
    pfVar4 = unaff_RBX;
    if (unaff_RDI <= param_1) {
joined_r0x0001802c74ce:
      for (; unaff_RSI < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar6 = unaff_RBX + -4;
        fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[-3];
        fVar14 = *(float *)(param_4 + 0x44) - pfVar7[1];
        fVar12 = *(float *)(param_4 + 0x40) - *pfVar6;
        fVar11 = *(float *)(param_4 + 0x40) - *pfVar7;
        fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[-2];
        fVar13 = *(float *)(param_4 + 0x48) - pfVar7[2];
        fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9);
        fVar9 = SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar13 * fVar13);
        pfVar8 = pfVar7;
        if (fVar9 <= fVar10) {
          if (fVar9 < fVar10) break;
          pfVar8 = pfVar7 + -4;
          if (pfVar8 != pfVar6) {
            uVar1 = *(uint64_t *)(unaff_RBX + -2);
            uVar2 = *(uint64_t *)pfVar8;
            uVar3 = *(uint64_t *)(pfVar7 + -2);
            *(uint64_t *)pfVar8 = *(uint64_t *)pfVar6;
            *(uint64_t *)(pfVar7 + -2) = uVar1;
            *(uint64_t *)pfVar6 = uVar2;
            *(uint64_t *)(unaff_RBX + -2) = uVar3;
          }
        }
        unaff_RBX = pfVar6;
        pfVar7 = pfVar8;
      }
      if (pfVar4 == unaff_RSI) {
        if (param_1 == unaff_RDI) {
          *unaff_R14 = pfVar7;
          unaff_R14[1] = pfVar5;
          return;
        }
        if (pfVar5 != param_1) {
          uVar1 = *(uint64_t *)(pfVar5 + 2);
          uVar2 = *(uint64_t *)pfVar7;
          uVar3 = *(uint64_t *)(pfVar7 + 2);
          *(uint64_t *)pfVar7 = *(uint64_t *)pfVar5;
          *(uint64_t *)(pfVar7 + 2) = uVar1;
          *(uint64_t *)pfVar5 = uVar2;
          *(uint64_t *)(pfVar5 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar7;
        uVar3 = *(uint64_t *)(pfVar7 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar7 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
        param_1 = param_1 + 4;
        pfVar5 = pfVar5 + 4;
        unaff_RBX = pfVar4;
        pfVar7 = pfVar7 + 4;
      }
      else {
        unaff_RBX = pfVar4 + -4;
        if (param_1 == unaff_RDI) {
          pfVar8 = pfVar7 + -4;
          if (unaff_RBX != pfVar8) {
            uVar1 = *(uint64_t *)(pfVar7 + -2);
            uVar2 = *(uint64_t *)unaff_RBX;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)unaff_RBX = *(uint64_t *)pfVar8;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar8 = uVar2;
            *(uint64_t *)(pfVar7 + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(pfVar5 + -2);
          uVar2 = *(uint64_t *)pfVar8;
          uVar3 = *(uint64_t *)(pfVar7 + -2);
          *(uint64_t *)pfVar8 = *(uint64_t *)(pfVar5 + -4);
          *(uint64_t *)(pfVar7 + -2) = uVar1;
          *(uint64_t *)(pfVar5 + -4) = uVar2;
          *(uint64_t *)(pfVar5 + -2) = uVar3;
          pfVar5 = pfVar5 + -4;
          pfVar7 = pfVar8;
        }
        else {
          uVar1 = *(uint64_t *)param_1;
          uVar2 = *(uint64_t *)(param_1 + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)param_1 = *(uint64_t *)unaff_RBX;
          *(uint64_t *)(param_1 + 2) = uVar3;
          param_1 = param_1 + 4;
          *(uint64_t *)unaff_RBX = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x0001802c7423;
    }
    fVar10 = *(float *)(param_4 + 0x44) - pfVar7[1];
    fVar14 = *(float *)(param_4 + 0x44) - param_1[1];
    fVar12 = *(float *)(param_4 + 0x40) - *pfVar7;
    fVar11 = *(float *)(param_4 + 0x40) - *param_1;
    fVar9 = *(float *)(param_4 + 0x48) - pfVar7[2];
    fVar13 = *(float *)(param_4 + 0x48) - param_1[2];
    fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9);
    fVar9 = SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar13 * fVar13);
    if (fVar9 <= fVar10) {
      if (fVar9 < fVar10) goto joined_r0x0001802c74ce;
      if (pfVar5 != param_1) {
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar5;
        uVar3 = *(uint64_t *)(pfVar5 + 2);
        *(uint64_t *)pfVar5 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar5 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
      }
      pfVar5 = pfVar5 + 4;
    }
    param_1 = param_1 + 4;
  } while( true );
}






