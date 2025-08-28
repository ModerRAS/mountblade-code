#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part036.c - 3 个函数

// 函数: void FUN_1804bc590(int64_t param_1,uint64_t param_2)
void FUN_1804bc590(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint auStackX_8 [4];
  int8_t auStackX_18 [16];
  
  puVar4 = (uint64_t *)(param_1 + 0xb8);
  auStackX_8[0] = func_0x0001804bb950(param_2);
  puVar2 = (uint64_t *)puVar4[2];
  puVar3 = puVar4;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < auStackX_8[0]) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar3 = puVar1;
    }
  }
  if ((puVar3 == puVar4) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(puVar4,auStackX_18,0,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  FUN_1804b2ea0(puVar3[5],param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1804bc610(uint64_t param_1,float *param_2,int64_t param_3)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t *puVar5;
  float *pfVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  uint64_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  
  fVar15 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  uStackX_8 = param_1;
  uVar4 = func_0x0001804bb950(param_3);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,uVar4);
  puVar5 = (uint64_t *)0x180c95e98;
  puVar2 = system_system_memory;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar5 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar5 == (uint64_t *)0x180c95e98) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_10,0x180c95e98,puVar5,&uStackX_8);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar3 = puVar5[5];
  if (lVar3 == 0) {
    SystemDataInitializer(&unknown_var_7976_ptr);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x298);
    iVar9 = 0;
    if (3 < iVar1) {
      pfVar10 = (float *)(param_3 + 0x40);
      pfVar7 = (float *)(*(int64_t *)(lVar3 + 0x290) + 0x4c);
      pfVar6 = (float *)(*(int64_t *)(lVar3 + 0x290) + 0x278);
      uVar4 = (iVar1 - 4U >> 2) + 1;
      uVar11 = (uint64_t)uVar4;
      iVar9 = uVar4 * 4;
      do {
        if (*(char *)((int64_t)pfVar7 + 6) != '\0') {
          fVar12 = (*pfVar7 - pfVar7[-1]) * pfVar10[-1] + pfVar7[-1];
          fVar14 = (pfVar7[8] - pfVar7[4]) * pfVar10[-1] + pfVar7[4];
          fVar13 = fVar12 * pfVar6[-0x7e];
          fVar12 = fVar12 * pfVar7[0xc];
          fVar20 = fVar20 + fVar14;
          fVar19 = fVar19 + fVar13;
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar18 = fVar18 + fVar12;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          if (fVar17 <= fVar14) {
            fVar17 = fVar14;
          }
        }
        if (*(char *)((int64_t)pfVar7 + 0xae) != '\0') {
          fVar12 = (pfVar7[0x2a] - pfVar7[0x29]) * *pfVar10 + pfVar7[0x29];
          fVar13 = fVar12 * pfVar6[-0x54];
          fVar12 = fVar12 * pfVar7[0x36];
          fVar19 = fVar19 + fVar13;
          fVar18 = fVar18 + fVar12;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          fVar12 = (pfVar7[0x32] - pfVar7[0x2e]) * *pfVar10 + pfVar7[0x2e];
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar20 = fVar20 + fVar12;
          if (fVar17 <= fVar12) {
            fVar17 = fVar12;
          }
        }
        if (*(char *)((int64_t)pfVar6 + -0xd6) != '\0') {
          fVar12 = (pfVar6[-0x37] - pfVar6[-0x38]) * pfVar10[1] + pfVar6[-0x38];
          fVar13 = fVar12 * pfVar6[-0x2a];
          fVar12 = fVar12 * pfVar6[-0x2b];
          fVar19 = fVar19 + fVar13;
          fVar18 = fVar18 + fVar12;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          fVar12 = (pfVar6[-0x2f] - pfVar6[-0x33]) * pfVar10[1] + pfVar6[-0x33];
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar20 = fVar20 + fVar12;
          if (fVar17 <= fVar12) {
            fVar17 = fVar12;
          }
        }
        if (*(char *)((int64_t)pfVar6 + -0x2e) != '\0') {
          fVar12 = (pfVar6[-0xd] - pfVar6[-0xe]) * pfVar10[2] + pfVar6[-0xe];
          fVar14 = (pfVar6[-5] - pfVar6[-9]) * pfVar10[2] + pfVar6[-9];
          fVar13 = fVar12 * *pfVar6;
          fVar12 = fVar12 * pfVar6[-1];
          fVar20 = fVar20 + fVar14;
          fVar19 = fVar19 + fVar13;
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar18 = fVar18 + fVar12;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          if (fVar17 <= fVar14) {
            fVar17 = fVar14;
          }
        }
        pfVar10 = pfVar10 + 4;
        pfVar7 = pfVar7 + 0xa8;
        pfVar6 = pfVar6 + 0xa8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (iVar9 < iVar1) {
      pfVar10 = (float *)(param_3 + 0x3c + (int64_t)iVar9 * 4);
      pcVar8 = (char *)(*(int64_t *)(lVar3 + 0x290) + 0x52 + (int64_t)iVar9 * 0xa8);
      uVar11 = (uint64_t)(uint)(iVar1 - iVar9);
      do {
        if (*pcVar8 != '\0') {
          fVar12 = (*(float *)(pcVar8 + -6) - *(float *)(pcVar8 + -10)) * *pfVar10 +
                   *(float *)(pcVar8 + -10);
          fVar14 = (*(float *)(pcVar8 + 0x1a) - *(float *)(pcVar8 + 10)) * *pfVar10 +
                   *(float *)(pcVar8 + 10);
          fVar13 = fVar12 * *(float *)(pcVar8 + 0x2e);
          fVar12 = fVar12 * *(float *)(pcVar8 + 0x2a);
          fVar20 = fVar20 + fVar14;
          fVar19 = fVar19 + fVar13;
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
          }
          fVar18 = fVar18 + fVar12;
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          if (fVar17 <= fVar14) {
            fVar17 = fVar14;
          }
        }
        pfVar10 = pfVar10 + 1;
        pcVar8 = pcVar8 + 0xa8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (fVar18 < fVar15) goto LAB_1804bc998;
  }
  fVar15 = fVar18;
  fVar18 = fVar15;
LAB_1804bc998:
  if (fVar16 <= fVar19) {
    fVar16 = fVar19;
  }
  if (fVar17 <= fVar20) {
    fVar17 = fVar20;
  }
  param_2[3] = 3.4028235e+38;
  *param_2 = (fVar18 - fVar15) * 0.72 + fVar15 + 1.0;
  param_2[1] = (fVar19 - fVar16) * 0.22 + fVar16 + 1.0;
  param_2[2] = (fVar20 - fVar17) * 0.45 + fVar17 + 1.0;
  return param_2;
}






// 函数: void FUN_1804bc6d7(void)
void FUN_1804bc6d7(void)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  char *pcVar4;
  int iVar5;
  float *unaff_RSI;
  int64_t unaff_RDI;
  float *pfVar6;
  uint64_t uVar7;
  int in_R10D;
  int64_t in_R11;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  iVar5 = 0;
  if (3 < in_R10D) {
    pfVar6 = (float *)(unaff_RDI + 0x40);
    pfVar3 = (float *)(*(int64_t *)(in_R11 + 0x290) + 0x4c);
    pfVar2 = (float *)(*(int64_t *)(in_R11 + 0x290) + 0x278);
    uVar1 = (in_R10D - 4U >> 2) + 1;
    uVar7 = (uint64_t)uVar1;
    iVar5 = uVar1 * 4;
    do {
      if (*(char *)((int64_t)pfVar3 + 6) != '\0') {
        fVar8 = (*pfVar3 - pfVar3[-1]) * pfVar6[-1] + pfVar3[-1];
        fVar10 = (pfVar3[8] - pfVar3[4]) * pfVar6[-1] + pfVar3[4];
        fVar9 = fVar8 * pfVar2[-0x7e];
        fVar8 = fVar8 * pfVar3[0xc];
        unaff_XMM11_Da = unaff_XMM11_Da + fVar10;
        unaff_XMM10_Da = unaff_XMM10_Da + fVar9;
        if (unaff_XMM7_Da <= fVar9) {
          unaff_XMM7_Da = fVar9;
        }
        unaff_XMM9_Da = unaff_XMM9_Da + fVar8;
        if (unaff_XMM6_Da <= fVar8) {
          unaff_XMM6_Da = fVar8;
        }
        if (unaff_XMM8_Da <= fVar10) {
          unaff_XMM8_Da = fVar10;
        }
      }
      if (*(char *)((int64_t)pfVar3 + 0xae) != '\0') {
        fVar8 = (pfVar3[0x2a] - pfVar3[0x29]) * *pfVar6 + pfVar3[0x29];
        fVar9 = fVar8 * pfVar2[-0x54];
        fVar8 = fVar8 * pfVar3[0x36];
        unaff_XMM10_Da = unaff_XMM10_Da + fVar9;
        unaff_XMM9_Da = unaff_XMM9_Da + fVar8;
        if (unaff_XMM6_Da <= fVar8) {
          unaff_XMM6_Da = fVar8;
        }
        fVar8 = (pfVar3[0x32] - pfVar3[0x2e]) * *pfVar6 + pfVar3[0x2e];
        if (unaff_XMM7_Da <= fVar9) {
          unaff_XMM7_Da = fVar9;
        }
        unaff_XMM11_Da = unaff_XMM11_Da + fVar8;
        if (unaff_XMM8_Da <= fVar8) {
          unaff_XMM8_Da = fVar8;
        }
      }
      if (*(char *)((int64_t)pfVar2 + -0xd6) != '\0') {
        fVar8 = (pfVar2[-0x37] - pfVar2[-0x38]) * pfVar6[1] + pfVar2[-0x38];
        fVar9 = fVar8 * pfVar2[-0x2a];
        fVar8 = fVar8 * pfVar2[-0x2b];
        unaff_XMM10_Da = unaff_XMM10_Da + fVar9;
        unaff_XMM9_Da = unaff_XMM9_Da + fVar8;
        if (unaff_XMM6_Da <= fVar8) {
          unaff_XMM6_Da = fVar8;
        }
        fVar8 = (pfVar2[-0x2f] - pfVar2[-0x33]) * pfVar6[1] + pfVar2[-0x33];
        if (unaff_XMM7_Da <= fVar9) {
          unaff_XMM7_Da = fVar9;
        }
        unaff_XMM11_Da = unaff_XMM11_Da + fVar8;
        if (unaff_XMM8_Da <= fVar8) {
          unaff_XMM8_Da = fVar8;
        }
      }
      if (*(char *)((int64_t)pfVar2 + -0x2e) != '\0') {
        fVar8 = (pfVar2[-0xd] - pfVar2[-0xe]) * pfVar6[2] + pfVar2[-0xe];
        fVar10 = (pfVar2[-5] - pfVar2[-9]) * pfVar6[2] + pfVar2[-9];
        fVar9 = fVar8 * *pfVar2;
        fVar8 = fVar8 * pfVar2[-1];
        unaff_XMM11_Da = unaff_XMM11_Da + fVar10;
        unaff_XMM10_Da = unaff_XMM10_Da + fVar9;
        if (unaff_XMM7_Da <= fVar9) {
          unaff_XMM7_Da = fVar9;
        }
        unaff_XMM9_Da = unaff_XMM9_Da + fVar8;
        if (unaff_XMM6_Da <= fVar8) {
          unaff_XMM6_Da = fVar8;
        }
        if (unaff_XMM8_Da <= fVar10) {
          unaff_XMM8_Da = fVar10;
        }
      }
      pfVar6 = pfVar6 + 4;
      pfVar3 = pfVar3 + 0xa8;
      pfVar2 = pfVar2 + 0xa8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar5 < in_R10D) {
    pfVar6 = (float *)(unaff_RDI + 0x3c + (int64_t)iVar5 * 4);
    pcVar4 = (char *)(*(int64_t *)(in_R11 + 0x290) + 0x52 + (int64_t)iVar5 * 0xa8);
    uVar7 = (uint64_t)(uint)(in_R10D - iVar5);
    do {
      if (*pcVar4 != '\0') {
        fVar8 = (*(float *)(pcVar4 + -6) - *(float *)(pcVar4 + -10)) * *pfVar6 +
                *(float *)(pcVar4 + -10);
        fVar10 = (*(float *)(pcVar4 + 0x1a) - *(float *)(pcVar4 + 10)) * *pfVar6 +
                 *(float *)(pcVar4 + 10);
        fVar9 = fVar8 * *(float *)(pcVar4 + 0x2e);
        fVar8 = fVar8 * *(float *)(pcVar4 + 0x2a);
        unaff_XMM11_Da = unaff_XMM11_Da + fVar10;
        unaff_XMM10_Da = unaff_XMM10_Da + fVar9;
        if (unaff_XMM7_Da <= fVar9) {
          unaff_XMM7_Da = fVar9;
        }
        unaff_XMM9_Da = unaff_XMM9_Da + fVar8;
        if (unaff_XMM6_Da <= fVar8) {
          unaff_XMM6_Da = fVar8;
        }
        if (unaff_XMM8_Da <= fVar10) {
          unaff_XMM8_Da = fVar10;
        }
      }
      pfVar6 = pfVar6 + 1;
      pcVar4 = pcVar4 + 0xa8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (unaff_XMM6_Da <= unaff_XMM9_Da) {
    unaff_XMM6_Da = unaff_XMM9_Da;
  }
  if (unaff_XMM7_Da <= unaff_XMM10_Da) {
    unaff_XMM7_Da = unaff_XMM10_Da;
  }
  if (unaff_XMM8_Da <= unaff_XMM11_Da) {
    unaff_XMM8_Da = unaff_XMM11_Da;
  }
  unaff_RSI[3] = 3.4028235e+38;
  *unaff_RSI = (unaff_XMM9_Da - unaff_XMM6_Da) * 0.72 + unaff_XMM6_Da + 1.0;
  unaff_RSI[1] = (unaff_XMM10_Da - unaff_XMM7_Da) * 0.22 + unaff_XMM7_Da + 1.0;
  unaff_RSI[2] = (unaff_XMM11_Da - unaff_XMM8_Da) * 0.45 + unaff_XMM8_Da + 1.0;
  return;
}



void thunk_FUN_1804bc994(void)

{
  float *unaff_RSI;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (unaff_XMM7_Da <= unaff_XMM10_Da) {
    unaff_XMM7_Da = unaff_XMM10_Da;
  }
  if (unaff_XMM8_Da <= unaff_XMM11_Da) {
    unaff_XMM8_Da = unaff_XMM11_Da;
  }
  unaff_RSI[3] = 3.4028235e+38;
  *unaff_RSI = (unaff_XMM9_Da - unaff_XMM9_Da) * 0.72 + unaff_XMM9_Da + 1.0;
  unaff_RSI[1] = (unaff_XMM10_Da - unaff_XMM7_Da) * 0.22 + unaff_XMM7_Da + 1.0;
  unaff_RSI[2] = (unaff_XMM11_Da - unaff_XMM8_Da) * 0.45 + unaff_XMM8_Da + 1.0;
  return;
}






// 函数: void FUN_1804bc994(void)
void FUN_1804bc994(void)

{
  float *unaff_RSI;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (unaff_XMM7_Da <= unaff_XMM10_Da) {
    unaff_XMM7_Da = unaff_XMM10_Da;
  }
  if (unaff_XMM8_Da <= unaff_XMM11_Da) {
    unaff_XMM8_Da = unaff_XMM11_Da;
  }
  unaff_RSI[3] = 3.4028235e+38;
  *unaff_RSI = (unaff_XMM9_Da - unaff_XMM9_Da) * 0.72 + unaff_XMM9_Da + 1.0;
  unaff_RSI[1] = (unaff_XMM10_Da - unaff_XMM7_Da) * 0.22 + unaff_XMM7_Da + 1.0;
  unaff_RSI[2] = (unaff_XMM11_Da - unaff_XMM8_Da) * 0.45 + unaff_XMM8_Da + 1.0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804bca40(int64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  float fVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  int8_t auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  uVar6 = func_0x0001804bb950(param_3);
  plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar6);
  puVar8 = (uint64_t *)0x180c95e98;
  puVar2 = system_system_memory;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar6) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar8 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar8 == (uint64_t *)0x180c95e98) || (uVar6 < *(uint *)(puVar8 + 4))) {
    puVar8 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStack_68,0x180c95e98,puVar8,&plStackX_8);
    puVar8 = (uint64_t *)*puVar8;
  }
  lVar3 = puVar8[5];
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(**(int64_t **)(lVar3 + 0x370) + 0xa8))(*(int64_t **)(lVar3 + 0x370),&plStackX_8);
    plVar5 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    uVar6 = func_0x0001804af450(lVar3,param_3 + 0x548);
    fStack_54 = (float)(uVar6 >> 0x18) * 0.003921569;
    fStack_60 = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
    fStack_5c = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    fStack_58 = (float)(uVar6 & 0xff) * 0.003921569;
    (**(code **)(*plVar5 + 0x108))(plVar5,&fStack_60);
    fVar1 = *(float *)(param_3 + 0x53c);
    if (fVar1 <= 27.0) {
      uVar6 = 0xff000000;
    }
    else if (fVar1 <= 87.0) {
      uVar6 = (int)((fVar1 - 27.0) * 4.25) * -0x1000000 - 0x1000000;
    }
    else {
      uVar6 = 0;
    }
    fStack_54 = (float)(uVar6 >> 0x18) * 0.003921569;
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    plVar9 = (int64_t *)plVar5[7];
    if (plVar9 < (int64_t *)plVar5[8]) {
      do {
        lVar13 = *plVar9;
        *(int32_t *)(lVar13 + 0x248) = 0;
        *(int32_t *)(lVar13 + 0x24c) = 0;
        *(int32_t *)(lVar13 + 0x250) = 0;
        *(float *)(lVar13 + 0x254) = fStack_54;
        plVar9 = plVar9 + 2;
      } while (plVar9 < (int64_t *)plVar5[8]);
    }
    iVar14 = 0;
    lVar13 = plVar5[7];
    if (plVar5[8] - lVar13 >> 4 != 0) {
      lVar12 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar13 + lVar12) + 0x1b8);
        if (*(int *)(lVar4 + 0x20) == 7) {
          lVar10 = 0;
          do {
            lVar11 = lVar10 + 1;
            if (*(char *)(*(int64_t *)(lVar4 + 0x18) + lVar10) != (&unknown_var_7968_ptr)[lVar10])
            goto LAB_1804bcd47;
            lVar10 = lVar11;
          } while (lVar11 != 8);
          lVar13 = *(int64_t *)(lVar13 + lVar12);
          uVar6 = func_0x0001804af570(lVar3,param_3 + 0x550);
          *(float *)(lVar13 + 0x238) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x23c) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x240) = (float)(uVar6 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x244) = (float)(uVar6 >> 0x18) * 0.003921569;
        }
LAB_1804bcd47:
        lVar13 = plVar5[7];
        lVar4 = *(int64_t *)(*(int64_t *)(lVar12 + lVar13) + 0x1b8);
        if ((*(int *)(lVar4 + 0x20) == 0xd) &&
           (iVar7 = strcmp(*(uint64_t *)(lVar4 + 0x18),&unknown_var_8048_ptr), iVar7 == 0)) {
          lVar13 = *(int64_t *)(lVar13 + lVar12);
          uVar6 = func_0x0001804af690(lVar3,param_3 + 0x54c);
          *(float *)(lVar13 + 0x238) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x23c) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x240) = (float)(uVar6 & 0xff) * 0.003921569;
          *(float *)(lVar13 + 0x244) = (float)(uVar6 >> 0x18) * 0.003921569;
        }
        iVar14 = iVar14 + 1;
        lVar12 = lVar12 + 0x10;
        lVar13 = plVar5[7];
      } while ((uint64_t)(int64_t)iVar14 < (uint64_t)(plVar5[8] - lVar13 >> 4));
    }
    *param_2 = plVar5;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804bce70(int64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t *puVar5;
  code *pcVar6;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  uVar4 = func_0x0001804bb950(param_3);
  plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar4);
  puVar5 = (uint64_t *)0x180c95e98;
  puVar1 = system_system_memory;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar4) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar5 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar5 == (uint64_t *)0x180c95e98) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(0x180c95e98,&fStack_28,0x180c95e98,puVar5,&plStackX_8);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar2 = puVar5[5];
  if ((lVar2 == 0) ||
     (plVar3 = *(int64_t **)
                ((int64_t)*(int *)(param_3 + 0xc) * 0x58 + 0x20 + *(int64_t *)(lVar2 + 0x398)),
     plVar3 == (int64_t *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0xa8))(plVar3,&plStackX_8);
    plVar3 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    pcVar6 = *(code **)(*plVar3 + 0x108);
    uVar4 = func_0x0001804af690(lVar2,param_3 + 0x54c);
    fStack_1c = (float)(uVar4 >> 0x18) * 0.003921569;
    fStack_28 = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
    fStack_24 = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
    fStack_20 = (float)(uVar4 & 0xff) * 0.003921569;
    (*pcVar6)(plVar3,&fStack_28);
    *param_2 = plVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804bd030(int64_t *param_1,uint64_t *param_2,int64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int32_t uVar8;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  uVar5 = func_0x0001804bb950(param_3);
  plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar5);
  puVar6 = (uint64_t *)0x180c95e98;
  puVar1 = system_system_memory;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar5) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar6 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar6 == (uint64_t *)0x180c95e98) || (uVar5 < *(uint *)(puVar6 + 4))) {
    puVar6 = (uint64_t *)FUN_1804c0610(0x180c95e98,&fStack_40,0x180c95e98,puVar6,&plStackX_8);
    puVar6 = (uint64_t *)*puVar6;
  }
  lVar2 = puVar6[5];
  if ((lVar2 == 0) ||
     (plVar3 = *(int64_t **)
                ((int64_t)*(int *)(param_3 + 8) * 400 + *(int64_t *)(lVar2 + 0x378) + 0x40 +
                (param_4 & 0xffffffff) * 8), plVar3 == (int64_t *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0xa8))(plVar3,&plStackX_8);
    plVar3 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    pcVar4 = *(code **)(*plStackX_8 + 0x108);
    plVar7 = plStackX_8;
    uVar5 = func_0x0001804af690(lVar2,param_3 + 0x54c);
    fStack_34 = (float)(uVar5 >> 0x18) * 0.003921569;
    fStack_40 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
    fStack_3c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
    fStack_38 = (float)(uVar5 & 0xff) * 0.003921569;
    uVar8 = (*pcVar4)(plVar7,&fStack_40);
    uVar5 = func_0x0001804b9c80(uVar8,*(int32_t *)(param_3 + 0x53c));
    fStack_34 = (float)(uVar5 >> 0x18) * 0.003921569;
    fStack_40 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
    fStack_3c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
    fStack_38 = (float)(uVar5 & 0xff) * 0.003921569;
    plVar7 = (int64_t *)plVar3[7];
    if (plVar7 < (int64_t *)plVar3[8]) {
      do {
        lVar2 = *plVar7;
        *(float *)(lVar2 + 0x248) = fStack_40;
        *(float *)(lVar2 + 0x24c) = fStack_3c;
        *(float *)(lVar2 + 0x250) = fStack_38;
        *(float *)(lVar2 + 0x254) = fStack_34;
        plVar7 = plVar7 + 2;
      } while (plVar7 < (int64_t *)plVar3[8]);
    }
    *param_2 = plVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804bd2b0(int64_t *param_1,uint64_t *param_2,int64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  int iVar8;
  int64_t *plVar9;
  int32_t uVar10;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  uVar5 = func_0x0001804bb950(param_3);
  plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar5);
  puVar7 = (uint64_t *)0x180c95e98;
  puVar1 = system_system_memory;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar5) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar7 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar7 == (uint64_t *)0x180c95e98) || (uVar5 < *(uint *)(puVar7 + 4))) {
    puVar7 = (uint64_t *)FUN_1804c0610(0x180c95e98,&fStack_50,0x180c95e98,puVar7,&plStackX_8);
    puVar7 = (uint64_t *)*puVar7;
  }
  lVar2 = puVar7[5];
  if (lVar2 != 0) {
    iVar8 = *(int *)(lVar2 + 0x390) + -1;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar6 = *(int *)(param_3 + 4);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else {
      if (iVar8 < iVar6) {
        iVar6 = iVar8;
      }
      if (iVar6 < 0) goto LAB_1804bd52a;
    }
    if ((0 < *(int *)(lVar2 + 0x390)) &&
       (plVar3 = *(int64_t **)
                  ((int64_t)iVar6 * 400 + *(int64_t *)(lVar2 + 0x388) + 0x40 +
                  (param_4 & 0xffffffff) * 8), plVar3 != (int64_t *)0x0)) {
      (**(code **)(*plVar3 + 0xa8))(plVar3,&plStackX_8);
      plVar3 = plStackX_8;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      pcVar4 = *(code **)(*plStackX_8 + 0x108);
      plVar9 = plStackX_8;
      uVar5 = func_0x0001804af690(lVar2,param_3 + 0x54c);
      fStack_44 = (float)(uVar5 >> 0x18) * 0.003921569;
      fStack_50 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
      fStack_4c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
      fStack_48 = (float)(uVar5 & 0xff) * 0.003921569;
      uVar10 = (*pcVar4)(plVar9,&fStack_50);
      uVar5 = func_0x0001804b9c80(uVar10,*(int32_t *)(param_3 + 0x53c));
      fStack_44 = (float)(uVar5 >> 0x18) * 0.003921569;
      fStack_50 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
      fStack_4c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
      fStack_48 = (float)(uVar5 & 0xff) * 0.003921569;
      plVar9 = (int64_t *)plVar3[7];
      if (plVar9 < (int64_t *)plVar3[8]) {
        do {
          lVar2 = *plVar9;
          *(float *)(lVar2 + 0x248) = fStack_50;
          *(float *)(lVar2 + 0x24c) = fStack_4c;
          *(float *)(lVar2 + 0x250) = fStack_48;
          *(float *)(lVar2 + 0x254) = fStack_44;
          plVar9 = plVar9 + 2;
        } while (plVar9 < (int64_t *)plVar3[8]);
      }
      *param_2 = plVar3;
      if (plStackX_8 == (int64_t *)0x0) {
        return param_2;
      }
      (**(code **)(*plStackX_8 + 0x38))();
      return param_2;
    }
  }
LAB_1804bd52a:
  *param_2 = 0;
  return param_2;
}






