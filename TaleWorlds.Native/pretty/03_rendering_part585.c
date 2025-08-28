#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part585.c - 5 个函数
// 函数: void function_58c7f0(int64_t param_1,uint64_t param_2,float *param_3,float *param_4)
void function_58c7f0(int64_t param_1,uint64_t param_2,float *param_3,float *param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  lVar4 = render_system_config;
  lVar9 = (int64_t)*(int *)(param_1 + 0x12b0);
  lVar6 = 0;
  *param_3 = 0.0;
  *param_4 = 0.0;
  if (3 < lVar9) {
    pfVar7 = (float *)(param_1 + 0x130c);
    lVar10 = (lVar9 - 4U >> 2) + 1;
    lVar6 = lVar10 * 4;
    do {
      if (*(short *)(*(int64_t *)(pfVar7 + -0x15) + 0x7e) != -1) {
        fVar1 = pfVar7[-0x12];
        lVar5 = (int64_t)*(short *)(*(int64_t *)(pfVar7 + -0x15) + 0x7e) * 0x68 + lVar4;
        fVar2 = *(float *)(lVar5 + 0x58);
        fVar3 = *param_4;
        *param_3 = fVar1 * *(float *)(lVar5 + 0x54) + *param_3;
        *param_4 = fVar1 * fVar2 + fVar3;
      }
      if (*(short *)(*(int64_t *)(pfVar7 + -3) + 0x7e) != -1) {
        fVar1 = *pfVar7;
        lVar5 = (int64_t)*(short *)(*(int64_t *)(pfVar7 + -3) + 0x7e) * 0x68 + lVar4;
        fVar2 = *(float *)(lVar5 + 0x58);
        fVar3 = *param_4;
        *param_3 = fVar1 * *(float *)(lVar5 + 0x54) + *param_3;
        *param_4 = fVar1 * fVar2 + fVar3;
      }
      if (*(short *)(*(int64_t *)(pfVar7 + 0xf) + 0x7e) != -1) {
        fVar1 = pfVar7[0x12];
        lVar5 = (int64_t)*(short *)(*(int64_t *)(pfVar7 + 0xf) + 0x7e) * 0x68 + lVar4;
        fVar2 = *(float *)(lVar5 + 0x58);
        fVar3 = *param_4;
        *param_3 = fVar1 * *(float *)(lVar5 + 0x54) + *param_3;
        *param_4 = fVar1 * fVar2 + fVar3;
      }
      if (*(short *)(*(int64_t *)(pfVar7 + 0x21) + 0x7e) != -1) {
        fVar1 = pfVar7[0x24];
        lVar5 = (int64_t)*(short *)(*(int64_t *)(pfVar7 + 0x21) + 0x7e) * 0x68 + lVar4;
        fVar2 = *(float *)(lVar5 + 0x58);
        fVar3 = *param_4;
        *param_3 = fVar1 * *(float *)(lVar5 + 0x54) + *param_3;
        *param_4 = fVar1 * fVar2 + fVar3;
      }
      pfVar7 = pfVar7 + 0x48;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lVar6 < lVar9) {
    lVar9 = lVar9 - lVar6;
    plVar8 = (int64_t *)(param_1 + (lVar6 * 9 + 599) * 8);
    do {
      if (*(short *)(*plVar8 + 0x7e) != -1) {
        fVar1 = *(float *)((int64_t)plVar8 + 0xc);
        lVar6 = (int64_t)*(short *)(*plVar8 + 0x7e) * 0x68 + lVar4;
        fVar2 = *(float *)(lVar6 + 0x58);
        fVar3 = *param_4;
        *param_3 = fVar1 * *(float *)(lVar6 + 0x54) + *param_3;
        *param_4 = fVar1 * fVar2 + fVar3;
      }
      plVar8 = plVar8 + 9;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}
float function_58c9d0(int64_t param_1,uint param_2,float param_3,float param_4,float param_5)
{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  lVar3 = (int64_t)*(int *)(param_1 + 0x100);
  lVar5 = 0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  param_3 = param_3 * (1.0 - param_4);
  lVar4 = lVar5;
  if (3 < lVar3) {
    puVar1 = (uint *)(param_1 + 300);
    lVar2 = (lVar3 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    do {
      if ((*puVar1 & param_2) != 0) {
        fVar9 = fVar9 + (float)puVar1[-6];
      }
      if ((puVar1[0x12] & param_2) != 0) {
        fVar9 = fVar9 + (float)puVar1[0xc];
      }
      if ((puVar1[0x24] & param_2) != 0) {
        fVar9 = fVar9 + (float)puVar1[0x1e];
      }
      fVar10 = fVar10 + (float)puVar1[-6] + (float)puVar1[0xc] + (float)puVar1[0x1e] +
               (float)puVar1[0x30];
      if ((puVar1[0x36] & param_2) != 0) {
        fVar9 = fVar9 + (float)puVar1[0x30];
      }
      puVar1 = puVar1 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar3) {
    lVar3 = lVar3 - lVar4;
    puVar1 = (uint *)(param_1 + 300 + lVar4 * 0x48);
    do {
      fVar10 = fVar10 + (float)puVar1[-6];
      if ((*puVar1 & param_2) != 0) {
        fVar9 = fVar9 + (float)puVar1[-6];
      }
      puVar1 = puVar1 + 0x12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar4 = (int64_t)*(int *)(param_1 + 0x12b0);
  fVar6 = 0.0;
  fVar7 = 0.0;
  if (3 < lVar4) {
    puVar1 = (uint *)(param_1 + 0x12dc);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      if ((*puVar1 & param_2) != 0) {
        fVar6 = fVar6 + (float)puVar1[-6];
      }
      if ((puVar1[0x12] & param_2) != 0) {
        fVar6 = fVar6 + (float)puVar1[0xc];
      }
      if ((puVar1[0x24] & param_2) != 0) {
        fVar6 = fVar6 + (float)puVar1[0x1e];
      }
      fVar7 = fVar7 + (float)puVar1[-6] + (float)puVar1[0xc] + (float)puVar1[0x1e] +
              (float)puVar1[0x30];
      if ((puVar1[0x36] & param_2) != 0) {
        fVar6 = fVar6 + (float)puVar1[0x30];
      }
      puVar1 = puVar1 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    lVar4 = lVar4 - lVar5;
    puVar1 = (uint *)(param_1 + 0x12dc + lVar5 * 0x48);
    do {
      fVar7 = fVar7 + (float)puVar1[-6];
      if ((*puVar1 & param_2) != 0) {
        fVar6 = fVar6 + (float)puVar1[-6];
      }
      puVar1 = puVar1 + 0x12;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  fVar8 = 0.0;
  if (0.0 < fVar10) {
    fVar8 = (fVar9 * param_3) / fVar10;
  }
  if (0.0 < fVar7) {
    fVar8 = fVar8 + (fVar6 * param_4) / fVar7;
  }
  if ((0.0 < param_5) && (param_3 = param_3 + param_4, param_3 < 0.9999)) {
    fVar8 = fVar8 + (1.0 - param_3) * param_5;
  }
  return fVar8;
}
float function_58cbf0(int64_t param_1,uint64_t param_2,float param_3,float param_4)
{
  byte *pbVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  lVar3 = (int64_t)*(int *)(param_1 + 0x100);
  lVar5 = 0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  param_3 = param_3 * (1.0 - param_4);
  lVar4 = lVar5;
  if (3 < lVar3) {
    pbVar1 = (byte *)(param_1 + 300);
    lVar2 = (lVar3 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    do {
      if ((*pbVar1 & 0x10) != 0) {
        fVar9 = fVar9 + *(float *)(pbVar1 + -0x14);
      }
      if ((pbVar1[0x48] & 0x10) != 0) {
        fVar9 = fVar9 + *(float *)(pbVar1 + 0x34);
      }
      if ((pbVar1[0x90] & 0x10) != 0) {
        fVar9 = fVar9 + *(float *)(pbVar1 + 0x7c);
      }
      fVar10 = fVar10 + *(float *)(pbVar1 + -0x14) + *(float *)(pbVar1 + 0x34) +
               *(float *)(pbVar1 + 0x7c) + *(float *)(pbVar1 + 0xc4);
      if ((pbVar1[0xd8] & 0x10) != 0) {
        fVar9 = fVar9 + *(float *)(pbVar1 + 0xc4);
      }
      pbVar1 = pbVar1 + 0x120;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar3) {
    lVar3 = lVar3 - lVar4;
    pbVar1 = (byte *)(param_1 + 300 + lVar4 * 0x48);
    do {
      fVar10 = fVar10 + *(float *)(pbVar1 + -0x14);
      if ((*pbVar1 & 0x10) != 0) {
        fVar9 = fVar9 + *(float *)(pbVar1 + -0x14);
      }
      pbVar1 = pbVar1 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar4 = (int64_t)*(int *)(param_1 + 0x12b0);
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (3 < lVar4) {
    pbVar1 = (byte *)(param_1 + 0x12dc);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      if ((*pbVar1 & 0x10) != 0) {
        fVar7 = fVar7 + *(float *)(pbVar1 + -0x14);
      }
      if ((pbVar1[0x48] & 0x10) != 0) {
        fVar7 = fVar7 + *(float *)(pbVar1 + 0x34);
      }
      if ((pbVar1[0x90] & 0x10) != 0) {
        fVar7 = fVar7 + *(float *)(pbVar1 + 0x7c);
      }
      fVar8 = fVar8 + *(float *)(pbVar1 + -0x14) + *(float *)(pbVar1 + 0x34) +
              *(float *)(pbVar1 + 0x7c) + *(float *)(pbVar1 + 0xc4);
      if ((pbVar1[0xd8] & 0x10) != 0) {
        fVar7 = fVar7 + *(float *)(pbVar1 + 0xc4);
      }
      pbVar1 = pbVar1 + 0x120;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    lVar4 = lVar4 - lVar5;
    pbVar1 = (byte *)(param_1 + 0x12dc + lVar5 * 0x48);
    do {
      fVar8 = fVar8 + *(float *)(pbVar1 + -0x14);
      if ((*pbVar1 & 0x10) != 0) {
        fVar7 = fVar7 + *(float *)(pbVar1 + -0x14);
      }
      pbVar1 = pbVar1 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  fVar6 = 0.0;
  if (0.0 < fVar10) {
    fVar6 = (fVar9 * param_3) / fVar10;
  }
  if (0.0 < fVar8) {
    fVar6 = fVar6 + (fVar7 * param_4) / fVar8;
  }
  param_3 = param_3 + param_4;
  if (param_3 < 0.9999) {
    fVar6 = fVar6 + (1.0 - param_3);
  }
  return fVar6;
}
float function_58ce10(int64_t param_1,float param_2,float param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  float *pfVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  lVar7 = (int64_t)*(int *)(param_1 + 0x100);
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (0 < lVar7) {
    pfVar4 = (float *)(param_1 + 0x114);
    do {
      fVar11 = *pfVar4;
      fVar12 = fVar12 + fVar11;
      if (((uint)pfVar4[6] & 0x100) != 0) {
        lVar2 = *(int64_t *)(pfVar4 + -3);
        iVar6 = 0;
        lVar5 = 0;
        plVar3 = (int64_t *)(lVar2 + 0x198);
        do {
          if (((int64_t *)*plVar3 != (int64_t *)0x0) &&
             (iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))(), iVar1 == 3)) {
            lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
            goto LAB_18058ceed;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (iVar6 < 2);
        lVar2 = 0;
LAB_18058ceed:
        fVar9 = *(float *)(lVar2 + 8);
        if (fVar9 < pfVar4[-1]) {
          fVar9 = (pfVar4[-1] - fVar9) / (*(float *)(lVar2 + 0xc) - fVar9);
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          fVar13 = fVar13 + fVar9 * fVar11;
        }
      }
      pfVar4 = pfVar4 + 0x12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = (int64_t)*(int *)(param_1 + 0x12b0);
  fVar11 = 0.0;
  fVar9 = 0.0;
  if (0 < lVar7) {
    pfVar4 = (float *)(param_1 + 0x12c4);
    do {
      fVar8 = *pfVar4;
      fVar9 = fVar9 + fVar8;
      if (((uint)pfVar4[6] & 0x100) != 0) {
        lVar2 = *(int64_t *)(pfVar4 + -3);
        iVar6 = 0;
        lVar5 = 0;
        plVar3 = (int64_t *)(lVar2 + 0x198);
        do {
          if (((int64_t *)*plVar3 != (int64_t *)0x0) &&
             (iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))(), iVar1 == 3)) {
            lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
            goto LAB_18058cf9b;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (iVar6 < 2);
        lVar2 = 0;
LAB_18058cf9b:
        fVar10 = *(float *)(lVar2 + 8);
        if (fVar10 < pfVar4[-1]) {
          fVar10 = (pfVar4[-1] - fVar10) / (*(float *)(lVar2 + 0xc) - fVar10);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          fVar11 = fVar11 + fVar10 * fVar8;
        }
      }
      pfVar4 = pfVar4 + 0x12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  fVar8 = 0.0;
  if (0.0 < fVar12) {
    fVar8 = (fVar13 * param_2 * (1.0 - param_3)) / fVar12;
  }
  if (0.0 < fVar9) {
    fVar8 = fVar8 + (fVar11 * param_3) / fVar9;
  }
  return fVar8;
}
float function_58ce2c(int64_t param_1,float param_2)
{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t unaff_RBX;
  int64_t *plVar3;
  uint64_t unaff_RBP;
  float *pfVar4;
  uint64_t unaff_RSI;
  int64_t lVar5;
  int iVar6;
  uint64_t unaff_RDI;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t unaff_XMM9_Da;
  float fVar12;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float fVar13;
  float unaff_XMM14_Da;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -8) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  lVar7 = (int64_t)*(int *)(param_1 + 0x100);
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  fVar12 = 0.0;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  fVar13 = 0.0;
  if (0 < lVar7) {
    pfVar4 = (float *)(param_1 + 0x114);
    do {
      fVar11 = *pfVar4;
      fVar12 = fVar12 + fVar11;
      if (((uint)pfVar4[6] & 0x100) != 0) {
        lVar2 = *(int64_t *)(pfVar4 + -3);
        iVar6 = 0;
        lVar5 = 0;
        plVar3 = (int64_t *)(lVar2 + 0x198);
        do {
          if (((int64_t *)*plVar3 != (int64_t *)0x0) &&
             (iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))(), iVar1 == 3)) {
            lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
            goto LAB_18058ceed;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (iVar6 < 2);
        lVar2 = 0;
LAB_18058ceed:
        fVar9 = *(float *)(lVar2 + 8);
        if (fVar9 < pfVar4[-1]) {
          fVar9 = (pfVar4[-1] - fVar9) / (*(float *)(lVar2 + 0xc) - fVar9);
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          fVar13 = fVar13 + fVar9 * fVar11;
        }
      }
      pfVar4 = pfVar4 + 0x12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = (int64_t)*(int *)(param_1 + 0x12b0);
  fVar11 = 0.0;
  fVar9 = 0.0;
  if (0 < lVar7) {
    pfVar4 = (float *)(param_1 + 0x12c4);
    do {
      fVar8 = *pfVar4;
      fVar9 = fVar9 + fVar8;
      if (((uint)pfVar4[6] & 0x100) != 0) {
        lVar2 = *(int64_t *)(pfVar4 + -3);
        iVar6 = 0;
        lVar5 = 0;
        plVar3 = (int64_t *)(lVar2 + 0x198);
        do {
          if (((int64_t *)*plVar3 != (int64_t *)0x0) &&
             (iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))(), iVar1 == 3)) {
            lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
            goto LAB_18058cf9b;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (iVar6 < 2);
        lVar2 = 0;
LAB_18058cf9b:
        fVar10 = *(float *)(lVar2 + 8);
        if (fVar10 < pfVar4[-1]) {
          fVar10 = (pfVar4[-1] - fVar10) / (*(float *)(lVar2 + 0xc) - fVar10);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          fVar11 = fVar11 + fVar10 * fVar8;
        }
      }
      pfVar4 = pfVar4 + 0x12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  fVar8 = 0.0;
  if (0.0 < fVar12) {
    fVar8 = (fVar13 * param_2 * (1.0 - unaff_XMM14_Da)) / fVar12;
  }
  if (0.0 < fVar9) {
    fVar8 = fVar8 + (fVar11 * unaff_XMM14_Da) / fVar9;
  }
  return fVar8;
}
// 函数: void function_58cf41(void)
void function_58cf41(void)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t unaff_R13;
  int64_t unaff_R15;
  lVar3 = unaff_R13 + 0x12c4;
  do {
    if ((*(uint *)(lVar3 + 0x18) & 0x100) != 0) {
      iVar4 = 0;
      plVar2 = (int64_t *)(*(int64_t *)(lVar3 + -0xc) + 0x198);
      do {
        if (((int64_t *)*plVar2 != (int64_t *)0x0) &&
           (iVar1 = (**(code **)(*(int64_t *)*plVar2 + 0x18))(), iVar1 == 3)) break;
        iVar4 = iVar4 + 1;
        plVar2 = plVar2 + 1;
      } while (iVar4 < 2);
    }
    lVar3 = lVar3 + 0x48;
    unaff_R15 = unaff_R15 + -1;
    if (unaff_R15 == 0) {
      return;
    }
  } while( true );
}
// 函数: void function_58cfe0(void)
void function_58cfe0(void)
{
  return;
}
float function_58d028(void)
{
  float fVar1;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  fVar1 = (unaff_XMM12_Da * unaff_XMM13_Da) / unaff_XMM9_Da;
  if (unaff_XMM10_Da < unaff_XMM7_Da) {
    fVar1 = fVar1 + (unaff_XMM6_Da * unaff_XMM14_Da) / unaff_XMM7_Da;
  }
  return fVar1;
}
float function_58d054(float param_1)
{
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM14_Da;
  return param_1 + (unaff_XMM6_Da * unaff_XMM14_Da) / unaff_XMM7_Da;
}
// 函数: void function_58d07f(void)
void function_58d07f(void)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int64_t unaff_R13;
  int64_t lVar5;
  int64_t unaff_R15;
  do {
    do {
      lVar5 = unaff_RBP;
      unaff_RBP = lVar5 + 0x48;
      unaff_R15 = unaff_R15 + -1;
      if (unaff_R15 == 0) {
        lVar5 = (int64_t)*(int *)(unaff_R13 + 0x12b0);
        if (0 < lVar5) {
          lVar3 = unaff_R13 + 0x12c4;
          do {
            if ((*(uint *)(lVar3 + 0x18) & 0x100) != 0) {
              iVar4 = 0;
              plVar2 = (int64_t *)(*(int64_t *)(lVar3 + -0xc) + 0x198);
              do {
                if (((int64_t *)*plVar2 != (int64_t *)0x0) &&
                   (iVar1 = (**(code **)(*(int64_t *)*plVar2 + 0x18))(), iVar1 == 3)) break;
                iVar4 = iVar4 + 1;
                plVar2 = plVar2 + 1;
              } while (iVar4 < 2);
            }
            lVar3 = lVar3 + 0x48;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        return;
      }
    } while ((*(uint *)(lVar5 + 0x60) & 0x100) == 0);
    iVar4 = 0;
    plVar2 = (int64_t *)(*(int64_t *)(lVar5 + 0x3c) + 0x198);
    do {
      if (((int64_t *)*plVar2 != (int64_t *)0x0) &&
         (iVar1 = (**(code **)(*(int64_t *)*plVar2 + 0x18))(), iVar1 == 3)) break;
      iVar4 = iVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar4 < 2);
  } while( true );
}
// 函数: void function_58d08c(void)
void function_58d08c(void)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int64_t unaff_R15;
  do {
    do {
      lVar3 = unaff_RBP;
      unaff_RBP = lVar3 + 0x48;
      unaff_R15 = unaff_R15 + -1;
      if (unaff_R15 == 0) {
        return;
      }
    } while ((*(uint *)(lVar3 + 0x60) & 0x100) == 0);
    iVar4 = 0;
    plVar2 = (int64_t *)(*(int64_t *)(lVar3 + 0x3c) + 0x198);
    do {
      if (((int64_t *)*plVar2 != (int64_t *)0x0) &&
         (iVar1 = (**(code **)(*(int64_t *)*plVar2 + 0x18))(), iVar1 == 3)) break;
      iVar4 = iVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar4 < 2);
  } while( true );
}
float * function_58d0a0(int64_t param_1,float *param_2,int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  float *pfVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  lVar14 = param_1 + 0xf0 + (int64_t)param_3 * 0x11b0;
  lVar11 = (int64_t)*(int *)(lVar14 + 0x10);
  if (lVar11 < 4) {
    lVar12 = 0;
  }
  else {
    pfVar13 = (float *)(lVar14 + 0x6c);
    fVar15 = *param_2;
    fVar16 = param_2[1];
    lVar9 = (lVar11 - 4U >> 2) + 1;
    fVar17 = param_2[2];
    lVar12 = lVar9 * 4;
    do {
      pfVar5 = *(float **)(pfVar13 + -0x15);
      fVar1 = pfVar13[-0x12];
      fVar2 = *pfVar13;
      fVar3 = pfVar13[0x12];
      fVar4 = pfVar13[0x24];
      pfVar6 = *(float **)(pfVar13 + -3);
      pfVar7 = *(float **)(pfVar13 + 0xf);
      pfVar8 = *(float **)(pfVar13 + 0x21);
      pfVar13 = pfVar13 + 0x48;
      fVar15 = *pfVar5 * fVar1 + fVar15 + *pfVar6 * fVar2 + *pfVar7 * fVar3 + fVar4 * *pfVar8;
      fVar16 = fVar1 * pfVar5[1] + fVar16 + fVar2 * pfVar6[1] + fVar3 * pfVar7[1] +
               fVar4 * pfVar8[1];
      fVar17 = fVar1 * pfVar5[2] + fVar17 + fVar2 * pfVar6[2] + fVar3 * pfVar7[2] +
               fVar4 * pfVar8[2];
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *param_2 = fVar15;
    param_2[1] = fVar16;
    param_2[2] = fVar17;
  }
  if (lVar12 < lVar11) {
    fVar15 = param_2[1];
    fVar16 = param_2[2];
    lVar11 = lVar11 - lVar12;
    puVar10 = (uint64_t *)(lVar14 + (lVar12 * 9 + 3) * 8);
    do {
      pfVar13 = (float *)*puVar10;
      fVar17 = *(float *)((int64_t)puVar10 + 0xc);
      puVar10 = puVar10 + 9;
      *param_2 = fVar17 * *pfVar13 + *param_2;
      fVar15 = fVar15 + fVar17 * pfVar13[1];
      fVar16 = fVar16 + fVar17 * pfVar13[2];
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    param_2[1] = fVar15;
    param_2[2] = fVar16;
  }
  return param_2;
}
float * function_58d0d0(uint64_t param_1,float *param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  float *pfVar12;
  int64_t in_R11;
  float fVar13;
  float fVar14;
  float fVar15;
  pfVar12 = (float *)(in_R11 + 0x6c);
  fVar13 = *param_2;
  fVar14 = param_2[1];
  lVar9 = (param_3 - 4U >> 2) + 1;
  fVar15 = param_2[2];
  lVar10 = lVar9;
  do {
    pfVar5 = *(float **)(pfVar12 + -0x15);
    fVar1 = pfVar12[-0x12];
    fVar2 = *pfVar12;
    fVar3 = pfVar12[0x12];
    fVar4 = pfVar12[0x24];
    pfVar6 = *(float **)(pfVar12 + -3);
    pfVar7 = *(float **)(pfVar12 + 0xf);
    pfVar8 = *(float **)(pfVar12 + 0x21);
    pfVar12 = pfVar12 + 0x48;
    fVar13 = *pfVar5 * fVar1 + fVar13 + *pfVar6 * fVar2 + *pfVar7 * fVar3 + fVar4 * *pfVar8;
    fVar14 = fVar1 * pfVar5[1] + fVar14 + fVar2 * pfVar6[1] + fVar3 * pfVar7[1] + fVar4 * pfVar8[1];
    fVar15 = fVar1 * pfVar5[2] + fVar15 + fVar2 * pfVar6[2] + fVar3 * pfVar7[2] + fVar4 * pfVar8[2];
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *param_2 = fVar13;
  param_2[1] = fVar14;
  param_2[2] = fVar15;
  if (lVar9 * 4 < param_3) {
    fVar13 = param_2[1];
    fVar14 = param_2[2];
    param_3 = param_3 + lVar9 * -4;
    puVar11 = (uint64_t *)(in_R11 + lVar9 * 0x120 + 0x18);
    do {
      pfVar12 = (float *)*puVar11;
      fVar15 = *(float *)((int64_t)puVar11 + 0xc);
      puVar11 = puVar11 + 9;
      *param_2 = fVar15 * *pfVar12 + *param_2;
      fVar13 = fVar13 + fVar15 * pfVar12[1];
      fVar14 = fVar14 + fVar15 * pfVar12[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    param_2[1] = fVar13;
    param_2[2] = fVar14;
  }
  return param_2;
}
float * function_58d239(uint64_t param_1,float *param_2,int64_t param_3)
{
  float fVar1;
  float *pfVar2;
  uint64_t *puVar3;
  int64_t in_R11;
  float fVar4;
  float fVar5;
  if (0 < param_3) {
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    puVar3 = (uint64_t *)(in_R11 + 0x18);
    do {
      pfVar2 = (float *)*puVar3;
      fVar1 = *(float *)((int64_t)puVar3 + 0xc);
      puVar3 = puVar3 + 9;
      *param_2 = fVar1 * *pfVar2 + *param_2;
      fVar4 = fVar4 + fVar1 * pfVar2[1];
      fVar5 = fVar5 + fVar1 * pfVar2[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    param_2[1] = fVar4;
    param_2[2] = fVar5;
  }
  return param_2;
}
float * function_58d2b0(int64_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  function_58d0a0(param_1,&fStack_18,1);
  function_58d0a0(param_1,&fStack_28,0);
  fVar1 = *(float *)(param_1 + 0x2434);
  fVar2 = 1.0 - fVar1;
  param_2[3] = 3.4028235e+38;
  *param_2 = fStack_28 * fVar2 + fStack_18 * fVar1;
  param_2[1] = fStack_24 * fVar2 + fStack_14 * fVar1;
  param_2[2] = fStack_20 * fVar2 + fStack_10 * fVar1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address