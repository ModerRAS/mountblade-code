#include "TaleWorlds.Native.Split.h"
// 99_part_08_part070.c - 5 个函数
// 函数: void NetworkSystem_b94b0(int64_t *param_1,char param_2)
void NetworkSystem_b94b0(int64_t *param_1,char param_2)
{
  short sVar1;
  int iVar2;
  int8_t uVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  byte bVar15;
  int64_t lVar16;
  int iVar17;
  int iVar18;
  int32_t uVar19;
  float fVar20;
  int32_t astack_special_x_10 [2];
  if ((char)param_1[0x438] == '\0') {
    iVar17 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar17 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if ((int)param_1[0x295] != 9) {
    if ((char)param_1[0x438] == '\0') {
      iVar5 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar5 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (-1 < iVar5) {
      lVar16 = *(int64_t *)((int64_t)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar16 != 0) && (*(char *)(lVar16 + 0x8be) != '\0')) &&
         (*(int *)((int64_t)iVar17 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) goto LAB_1805b9549;
    }
  }
  iVar17 = -1;
LAB_1805b9549:
  lVar16 = param_1[0x291];
  iVar5 = *(int *)(lVar16 + 0x52ed94);
  iVar18 = iVar5;
  if (param_2 == '\0') {
    iVar18 = (*(int *)(lVar16 + 0x98d9d4) + 1) * 5;
  }
  iVar2 = (int)param_1[0x36e];
  uVar10 = (uint64_t)iVar2;
  if (iVar2 < 0) {
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if (iVar2 < iVar5) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (int64_t)(int)uVar10 * 2) != -1) break;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
  }
  uVar3 = Function_bdecac3b(param_1);
  uVar8 = *(uint *)(param_1 + 0x36e);
  uVar10 = (uint64_t)uVar8;
  while ((int)uVar8 < iVar5) {
    lVar16 = *param_1;
    lVar14 = param_1[0x291] + 0x30a0 + (int64_t)(int)uVar10 * 0xa60;
    cVar4 = Function_db537f1b(lVar16,lVar14);
    if (((cVar4 != '\0') && (*(int *)(lVar14 + 0x568) == 1)) &&
       ((iVar2 = *(int *)(lVar14 + 0x10), iVar2 != *(int *)(lVar16 + 0x10) &&
        (*(int *)(lVar14 + 0x560) < 0)))) {
      uVar19 = NetworkSystem_bac30(param_1,lVar14,0,uVar3,astack_special_x_10);
      fVar20 = (float)NetworkSystem_bcba0(param_1,lVar14,uVar19);
      if ((0.0 < fVar20) || (iVar2 == iVar17)) {
        iVar9 = *(int *)((int64_t)param_1 + 0x1b6c);
        if ((iVar9 == 0x10) && (iVar17 == (int)param_1[0x366])) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((iVar2 == iVar17) && (bVar15 != 0)) {
          lVar16 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar14 = *(int64_t *)(param_1[0x291] + 0x87b788);
          *(int32_t *)((int64_t)param_1 + 0x1b34) = uVar19;
          *(float *)(param_1 + 0x367) = fVar20;
          *(float *)((int64_t)param_1 + 0x1b3c) = (float)(lVar16 - lVar14) * 1e-05;
          if ((int)param_1[0x36d] != 1) {
            *(int32_t *)((int64_t)param_1 + 0x1b64) = astack_special_x_10[0];
            *(int32_t *)(param_1 + 0x36d) = 0;
            *(int32_t *)(param_1 + 0x368) = 0;
          }
        }
        else {
          uVar11 = 0;
          uVar10 = uVar11;
          if (0 < iVar9) {
            pfVar6 = (float *)((int64_t)param_1 + 0x17b4);
            do {
              if (*pfVar6 <= fVar20) break;
              uVar8 = (int)uVar11 + 1;
              uVar11 = (uint64_t)uVar8;
              uVar10 = uVar10 + 1;
              pfVar6 = pfVar6 + 0xf;
            } while ((int)uVar8 < iVar9);
          }
          if (iVar2 == iVar17) {
            if ((bVar15 == 0) && (uVar10 == 0x10)) {
              uVar10 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (int64_t)uVar10) goto LAB_1805b9873;
            }
            if (iVar9 < 0x10) {
              iVar9 = iVar9 + 1;
              *(int *)((int64_t)param_1 + 0x1b6c) = iVar9;
            }
            lVar16 = (int64_t)(int)((iVar9 - (uint)bVar15) + -1);
            if ((int64_t)uVar10 < lVar16) {
              puVar12 = (uint64_t *)((lVar16 + 0x65) * 0x3c + (int64_t)param_1);
              lVar16 = lVar16 - uVar10;
              do {
                *puVar12 = *(uint64_t *)((int64_t)puVar12 + -0x3c);
                puVar12[1] = *(uint64_t *)((int64_t)puVar12 + -0x34);
                puVar12[2] = *(uint64_t *)((int64_t)puVar12 + -0x2c);
                puVar12[3] = *(uint64_t *)((int64_t)puVar12 + -0x24);
                puVar12[4] = *(uint64_t *)((int64_t)puVar12 + -0x1c);
                puVar12[5] = *(uint64_t *)((int64_t)puVar12 + -0x14);
                puVar12[6] = *(uint64_t *)((int64_t)puVar12 + -0xc);
                *(int32_t *)(puVar12 + 7) = *(int32_t *)((int64_t)puVar12 + -4);
                puVar12 = (uint64_t *)((int64_t)puVar12 + -0x3c);
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar13 = (uVar10 + 0x65) * 0x3c;
            *(int32_t *)(lVar13 + (int64_t)param_1) = *(int32_t *)(lVar14 + 0x10);
            lVar16 = *(int64_t *)
                      (&system_error_code + (int64_t)*(int *)(param_1[0x291] + 0x87b790) * 8);
            lVar14 = *(int64_t *)(param_1[0x291] + 0x87b788);
            *(int32_t *)(lVar13 + 4 + (int64_t)param_1) = uVar19;
            *(float *)(lVar13 + 8 + (int64_t)param_1) = fVar20;
            lVar7 = uVar10 * 0x3c;
            *(float *)(lVar13 + 0xc + (int64_t)param_1) = (float)(lVar16 - lVar14) * 1e-05;
            *(int32_t *)(lVar7 + 0x17e0 + (int64_t)param_1) = astack_special_x_10[0];
            *(int32_t *)(lVar7 + 0x17e4 + (int64_t)param_1) = 0;
            *(int32_t *)(lVar7 + 0x17bc + (int64_t)param_1) = 0;
          }
          else if ((bVar15 == 0) || (uVar10 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) break;
    }
    lVar16 = param_1[0x291];
    uVar8 = *(uint *)(param_1 + 0x36e);
    uVar10 = (uint64_t)(int)uVar8;
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if ((int)uVar8 < *(int *)(lVar16 + 0x52ed94)) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (int64_t)(int)uVar8 * 2) != -1) break;
          uVar8 = uVar8 + 1;
          uVar10 = (uint64_t)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      uVar10 = (uint64_t)(uint)(int)sVar1;
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
    uVar8 = (uint)uVar10;
  }
  if (iVar5 <= (int)param_1[0x36e]) {
    *(int8_t *)(param_1 + 0x2f5) = 0;
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x2f3] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2f4] * 8) -
         (int64_t)((float)(uVar8 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}
// 函数: void NetworkSystem_b94c4(int64_t *param_1,uint64_t param_2,char param_3)
void NetworkSystem_b94c4(int64_t *param_1,uint64_t param_2,char param_3)
{
  short sVar1;
  int iVar2;
  char in_AL;
  int8_t uVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  byte bVar15;
  int64_t lVar16;
  int iVar17;
  int iVar18;
  int32_t uVar19;
  float fVar20;
  int32_t local_var_98;
  if (in_AL == '\0') {
    iVar17 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar17 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if ((int)param_1[0x295] != 9) {
    if (in_AL == '\0') {
      iVar5 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar5 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (-1 < iVar5) {
      lVar16 = *(int64_t *)((int64_t)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar16 != 0) && (*(char *)(lVar16 + 0x8be) != '\0')) &&
         (*(int *)((int64_t)iVar17 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) goto LAB_1805b9549;
    }
  }
  iVar17 = -1;
LAB_1805b9549:
  lVar16 = param_1[0x291];
  iVar5 = *(int *)(lVar16 + 0x52ed94);
  iVar18 = iVar5;
  if (param_3 == '\0') {
    iVar18 = (*(int *)(lVar16 + 0x98d9d4) + 1) * 5;
  }
  iVar2 = (int)param_1[0x36e];
  uVar10 = (uint64_t)iVar2;
  if (iVar2 < 0) {
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if (iVar2 < iVar5) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (int64_t)(int)uVar10 * 2) != -1) break;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
  }
  uVar3 = Function_bdecac3b(param_1);
  uVar8 = *(uint *)(param_1 + 0x36e);
  uVar10 = (uint64_t)uVar8;
  while ((int)uVar8 < iVar5) {
    lVar16 = *param_1;
    lVar14 = param_1[0x291] + 0x30a0 + (int64_t)(int)uVar10 * 0xa60;
    cVar4 = Function_db537f1b(lVar16,lVar14);
    if (((cVar4 != '\0') && (*(int *)(lVar14 + 0x568) == 1)) &&
       ((iVar2 = *(int *)(lVar14 + 0x10), iVar2 != *(int *)(lVar16 + 0x10) &&
        (*(int *)(lVar14 + 0x560) < 0)))) {
      uVar19 = NetworkSystem_bac30(param_1,lVar14,0,uVar3,&local_buffer_00000098);
      fVar20 = (float)NetworkSystem_bcba0(param_1,lVar14,uVar19);
      if ((0.0 < fVar20) || (iVar2 == iVar17)) {
        iVar9 = *(int *)((int64_t)param_1 + 0x1b6c);
        if ((iVar9 == 0x10) && (iVar17 == (int)param_1[0x366])) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((iVar2 == iVar17) && (bVar15 != 0)) {
          lVar16 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar14 = *(int64_t *)(param_1[0x291] + 0x87b788);
          *(int32_t *)((int64_t)param_1 + 0x1b34) = uVar19;
          *(float *)(param_1 + 0x367) = fVar20;
          *(float *)((int64_t)param_1 + 0x1b3c) = (float)(lVar16 - lVar14) * 1e-05;
          if ((int)param_1[0x36d] != 1) {
            *(int32_t *)((int64_t)param_1 + 0x1b64) = local_var_98;
            *(int32_t *)(param_1 + 0x36d) = 0;
            *(int32_t *)(param_1 + 0x368) = 0;
          }
        }
        else {
          uVar11 = 0;
          uVar10 = uVar11;
          if (0 < iVar9) {
            pfVar6 = (float *)((int64_t)param_1 + 0x17b4);
            do {
              if (*pfVar6 <= fVar20) break;
              uVar8 = (int)uVar11 + 1;
              uVar11 = (uint64_t)uVar8;
              uVar10 = uVar10 + 1;
              pfVar6 = pfVar6 + 0xf;
            } while ((int)uVar8 < iVar9);
          }
          if (iVar2 == iVar17) {
            if ((bVar15 == 0) && (uVar10 == 0x10)) {
              uVar10 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (int64_t)uVar10) goto LAB_1805b9873;
            }
            if (iVar9 < 0x10) {
              iVar9 = iVar9 + 1;
              *(int *)((int64_t)param_1 + 0x1b6c) = iVar9;
            }
            lVar16 = (int64_t)(int)((iVar9 - (uint)bVar15) + -1);
            if ((int64_t)uVar10 < lVar16) {
              puVar12 = (uint64_t *)((lVar16 + 0x65) * 0x3c + (int64_t)param_1);
              lVar16 = lVar16 - uVar10;
              do {
                *puVar12 = *(uint64_t *)((int64_t)puVar12 + -0x3c);
                puVar12[1] = *(uint64_t *)((int64_t)puVar12 + -0x34);
                puVar12[2] = *(uint64_t *)((int64_t)puVar12 + -0x2c);
                puVar12[3] = *(uint64_t *)((int64_t)puVar12 + -0x24);
                puVar12[4] = *(uint64_t *)((int64_t)puVar12 + -0x1c);
                puVar12[5] = *(uint64_t *)((int64_t)puVar12 + -0x14);
                puVar12[6] = *(uint64_t *)((int64_t)puVar12 + -0xc);
                *(int32_t *)(puVar12 + 7) = *(int32_t *)((int64_t)puVar12 + -4);
                puVar12 = (uint64_t *)((int64_t)puVar12 + -0x3c);
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar13 = (uVar10 + 0x65) * 0x3c;
            *(int32_t *)(lVar13 + (int64_t)param_1) = *(int32_t *)(lVar14 + 0x10);
            lVar16 = *(int64_t *)
                      (&system_error_code + (int64_t)*(int *)(param_1[0x291] + 0x87b790) * 8);
            lVar14 = *(int64_t *)(param_1[0x291] + 0x87b788);
            *(int32_t *)(lVar13 + 4 + (int64_t)param_1) = uVar19;
            *(float *)(lVar13 + 8 + (int64_t)param_1) = fVar20;
            lVar7 = uVar10 * 0x3c;
            *(float *)(lVar13 + 0xc + (int64_t)param_1) = (float)(lVar16 - lVar14) * 1e-05;
            *(int32_t *)(lVar7 + 0x17e0 + (int64_t)param_1) = local_var_98;
            *(int32_t *)(lVar7 + 0x17e4 + (int64_t)param_1) = 0;
            *(int32_t *)(lVar7 + 0x17bc + (int64_t)param_1) = 0;
          }
          else if ((bVar15 == 0) || (uVar10 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) break;
    }
    lVar16 = param_1[0x291];
    uVar8 = *(uint *)(param_1 + 0x36e);
    uVar10 = (uint64_t)(int)uVar8;
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if ((int)uVar8 < *(int *)(lVar16 + 0x52ed94)) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (int64_t)(int)uVar8 * 2) != -1) break;
          uVar8 = uVar8 + 1;
          uVar10 = (uint64_t)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      uVar10 = (uint64_t)(uint)(int)sVar1;
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
    uVar8 = (uint)uVar10;
  }
  if (iVar5 <= (int)param_1[0x36e]) {
    *(int8_t *)(param_1 + 0x2f5) = 0;
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x2f3] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2f4] * 8) -
         (int64_t)((float)(uVar8 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}
// 函数: void NetworkSystem_b95de(uint64_t param_1)
void NetworkSystem_b95de(uint64_t param_1)
{
  short sVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  int64_t lVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t *unaff_RBX;
  int64_t lVar11;
  uint64_t uVar12;
  byte bVar13;
  int64_t lVar14;
  int unaff_R12D;
  int8_t unaff_R13B;
  int unaff_R14D;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t uVar15;
  float fVar16;
  int32_t local_var_98;
  do {
    lVar14 = *unaff_RBX;
    lVar11 = unaff_RBX[0x291] + 0x30a0 + (int64_t)(int)param_1 * 0xa60;
    cVar3 = Function_db537f1b(lVar14,lVar11);
    if ((((cVar3 != '\0') && (*(int *)(lVar11 + 0x568) == 1)) &&
        (iVar2 = *(int *)(lVar11 + 0x10), iVar2 != *(int *)(lVar14 + 0x10))) &&
       (*(int *)(lVar11 + 0x560) < 0)) {
      uVar15 = NetworkSystem_bac30(extraout_XMM0_Da,lVar11,0,unaff_R13B,&local_buffer_00000098);
      fVar16 = (float)NetworkSystem_bcba0(uVar15,lVar11,uVar15);
      if ((0.0 < fVar16) || (iVar2 == unaff_R14D)) {
        iVar6 = *(int *)((int64_t)unaff_RBX + 0x1b6c);
        if ((iVar6 == 0x10) && (unaff_R14D == (int)unaff_RBX[0x366])) {
          bVar13 = 1;
        }
        else {
          bVar13 = 0;
        }
        if ((iVar2 == unaff_R14D) && (bVar13 != 0)) {
          lVar14 = *(int64_t *)
                    (&system_error_code + (int64_t)*(int *)(unaff_RBX[0x291] + 0x87b790) * 8);
          lVar11 = *(int64_t *)(unaff_RBX[0x291] + 0x87b788);
          *(int32_t *)((int64_t)unaff_RBX + 0x1b34) = uVar15;
          *(float *)(unaff_RBX + 0x367) = fVar16;
          *(float *)((int64_t)unaff_RBX + 0x1b3c) = (float)(lVar14 - lVar11) * 1e-05;
          if ((int)unaff_RBX[0x36d] != 1) {
            *(int32_t *)((int64_t)unaff_RBX + 0x1b64) = local_var_98;
            *(int32_t *)(unaff_RBX + 0x36d) = 0;
            *(int32_t *)(unaff_RBX + 0x368) = 0;
          }
        }
        else {
          uVar8 = 0;
          uVar12 = uVar8;
          if (0 < iVar6) {
            pfVar4 = (float *)((int64_t)unaff_RBX + 0x17b4);
            do {
              if (*pfVar4 <= fVar16) break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar7;
              uVar12 = uVar12 + 1;
              pfVar4 = pfVar4 + 0xf;
            } while ((int)uVar7 < iVar6);
          }
          if (iVar2 == unaff_R14D) {
            if ((bVar13 == 0) && (uVar12 == 0x10)) {
              uVar12 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (int64_t)uVar12) goto LAB_1805b9873;
            }
            if (iVar6 < 0x10) {
              iVar6 = iVar6 + 1;
              *(int *)((int64_t)unaff_RBX + 0x1b6c) = iVar6;
            }
            lVar14 = (int64_t)(int)((iVar6 - (uint)bVar13) + -1);
            if ((int64_t)uVar12 < lVar14) {
              puVar9 = (uint64_t *)((lVar14 + 0x65) * 0x3c + (int64_t)unaff_RBX);
              lVar14 = lVar14 - uVar12;
              do {
                *puVar9 = *(uint64_t *)((int64_t)puVar9 + -0x3c);
                puVar9[1] = *(uint64_t *)((int64_t)puVar9 + -0x34);
                puVar9[2] = *(uint64_t *)((int64_t)puVar9 + -0x2c);
                puVar9[3] = *(uint64_t *)((int64_t)puVar9 + -0x24);
                puVar9[4] = *(uint64_t *)((int64_t)puVar9 + -0x1c);
                puVar9[5] = *(uint64_t *)((int64_t)puVar9 + -0x14);
                puVar9[6] = *(uint64_t *)((int64_t)puVar9 + -0xc);
                *(int32_t *)(puVar9 + 7) = *(int32_t *)((int64_t)puVar9 + -4);
                puVar9 = (uint64_t *)((int64_t)puVar9 + -0x3c);
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            lVar10 = (uVar12 + 0x65) * 0x3c;
            *(int32_t *)(lVar10 + (int64_t)unaff_RBX) = *(int32_t *)(lVar11 + 0x10);
            lVar14 = *(int64_t *)
                      (&system_error_code + (int64_t)*(int *)(unaff_RBX[0x291] + 0x87b790) * 8);
            lVar11 = *(int64_t *)(unaff_RBX[0x291] + 0x87b788);
            *(int32_t *)(lVar10 + 4 + (int64_t)unaff_RBX) = uVar15;
            *(float *)(lVar10 + 8 + (int64_t)unaff_RBX) = fVar16;
            lVar5 = uVar12 * 0x3c;
            *(float *)(lVar10 + 0xc + (int64_t)unaff_RBX) = (float)(lVar14 - lVar11) * 1e-05;
            *(int32_t *)(lVar5 + 0x17e0 + (int64_t)unaff_RBX) = local_var_98;
            *(int32_t *)(lVar5 + 0x17e4 + (int64_t)unaff_RBX) = 0;
            *(int32_t *)(lVar5 + 0x17bc + (int64_t)unaff_RBX) = 0;
          }
          else if ((bVar13 == 0) || (uVar12 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      unaff_R15D = unaff_R15D + -1;
      if (unaff_R15D == 0) break;
    }
    lVar14 = unaff_RBX[0x291];
    uVar7 = *(uint *)(unaff_RBX + 0x36e);
    param_1 = (uint64_t)(int)uVar7;
    sVar1 = *(short *)(lVar14 + 0x52dda0 + param_1 * 2);
    if (sVar1 == -1) {
      if ((int)uVar7 < *(int *)(lVar14 + 0x52ed94)) {
        do {
          if (*(short *)(lVar14 + 0x52dda0 + (int64_t)(int)uVar7 * 2) != -1) break;
          uVar7 = uVar7 + 1;
          param_1 = (uint64_t)uVar7;
          *(uint *)(unaff_RBX + 0x36e) = uVar7;
        } while ((int)uVar7 < *(int *)(lVar14 + 0x52ed94));
      }
    }
    else {
      param_1 = (uint64_t)(uint)(int)sVar1;
      *(int *)(unaff_RBX + 0x36e) = (int)sVar1;
    }
  } while ((int)param_1 < unaff_R12D);
  if (unaff_R12D <= (int)unaff_RBX[0x36e]) {
    *(int8_t *)(unaff_RBX + 0x2f5) = 0;
    uVar7 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar7 = uVar7 ^ uVar7 >> 0x11;
    uVar7 = uVar7 ^ uVar7 << 5;
    *(uint *)(unaff_RBX + 0x272) = uVar7;
    unaff_RBX[0x2f3] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2f4] * 8) -
         (int64_t)((float)(uVar7 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}
// 函数: void NetworkSystem_b9909(uint64_t param_1,uint64_t param_2,int64_t param_3)
void NetworkSystem_b9909(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint uVar1;
  int64_t unaff_RBX;
  int unaff_R12D;
  if (unaff_R12D <= *(int *)(unaff_RBX + 0x1b70)) {
    *(int8_t *)(unaff_RBX + 0x17a8) = 0;
    uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    uVar1 = uVar1 ^ uVar1 << 5;
    *(uint *)(unaff_RBX + 0x1390) = uVar1;
    *(int64_t *)(unaff_RBX + 0x1798) =
         *(int64_t *)(param_3 + (int64_t)*(int *)(unaff_RBX + 0x17a0) * 8) -
         (int64_t)((float)(uVar1 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}
// 函数: void NetworkSystem_b9926(uint64_t param_1,uint64_t param_2,int64_t param_3)
void NetworkSystem_b9926(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint uVar1;
  int64_t unaff_RBX;
  *(int8_t *)(unaff_RBX + 0x17a8) = 0;
  uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  uVar1 = uVar1 ^ uVar1 << 5;
  *(uint *)(unaff_RBX + 0x1390) = uVar1;
  *(int64_t *)(unaff_RBX + 0x1798) =
       *(int64_t *)(param_3 + (int64_t)*(int *)(unaff_RBX + 0x17a0) * 8) -
       (int64_t)((float)(uVar1 - 1) * 2.3283064e-05 - 350000.0);
  return;
}