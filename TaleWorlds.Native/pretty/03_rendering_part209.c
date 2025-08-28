#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part209.c - 9 个函数
// 函数: void function_38b35e(void)
void function_38b35e(void)
{
  uint8_t uVar1;
  int64_t in_RAX;
  int iVar2;
  int64_t in_R9;
  uint64_t in_R10;
  iVar2 = 1;
  if (*(char *)(in_RAX + 0x20) != '\x02') {
    iVar2 = (int)in_R10;
  }
  uVar1 = (uint8_t)((uint64_t)in_R10 >> 8);
  if (((int)CONCAT71(uVar1,*(char *)(*(int64_t *)(in_R9 + 0x60) + 0x20) == '\x02') +
       (int)CONCAT71(uVar1,*(char *)(*(int64_t *)(in_R9 + 0x68) + 0x20) == '\x02') + iVar2 +
       (int)CONCAT71(uVar1,*(char *)(*(int64_t *)(in_R9 + 0x70) + 0x20) == '\x02') != 2) &&
     (*(char *)(in_R9 + 0x138) != '\0')) {
    *(int8_t *)(in_R9 + 0x138) = 0;
  }
  return;
}
uint64_t * function_38b490(int64_t param_1,float *param_2,float *param_3,char param_4)
{
  float fVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_e8;
  float fStack_e4;
  uint64_t local_var_e0;
  float fStack_d8;
  float fStack_d4;
  uint64_t *puVar6;
  puVar6 = (uint64_t *)0x0;
  cVar2 = SystemCore_PerformanceMonitor();
  puVar8 = puVar6;
  if (cVar2 == '\0') {
    if (param_4 == '\0') {
      local_var_e0 = *(uint64_t *)param_3;
    }
    else {
      local_var_e0 = *(uint64_t *)param_3 ^ 0x8000000080000000;
    }
    fVar14 = 1.014;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      fVar11 = (float)local_var_e0;
      puVar7 = (uint64_t *)(param_1 + 0x60);
      fVar10 = ABS((float)local_var_e0);
      local_var_e0._4_4_ = (float)(local_var_e0 >> 0x20);
      fVar1 = local_var_e0._4_4_;
      do {
        puVar3 = (uint64_t *)*puVar7;
        fStack_d8 = (float)*(uint64_t *)*puVar3;
        fStack_d4 = (float)((uint64_t)*(uint64_t *)*puVar3 >> 0x20);
        local_var_e0._0_4_ = (float)*(uint64_t *)puVar3[1];
        local_var_e0._4_4_ = (float)((uint64_t)*(uint64_t *)puVar3[1] >> 0x20);
        fVar12 = (float)local_var_e0 - fStack_d8;
        fVar13 = local_var_e0._4_4_ - fStack_d4;
        if (0.01 <= ABS(fVar12)) {
          if (0.01 <= fVar10) {
            local_var_e0._0_4_ = -(fVar13 / fVar12) - (-1.0 / fVar11) * fVar1;
            if ((float)local_var_e0 == 0.0) goto LAB_18038b844;
            local_var_e0._4_4_ = (fVar12 * fStack_d4 - fVar13 * fStack_d8) / fVar12;
            local_var_e0._0_4_ =
                 (local_var_e0._4_4_ - (fVar11 * param_2[1] - fVar1 * *param_2) / fVar11) /
                 (float)local_var_e0;
            local_var_e0._4_4_ = local_var_e0._4_4_ - (float)local_var_e0 * -(fVar13 / fVar12);
          }
          else {
            local_var_e0._4_4_ =
                 (fVar12 * fStack_d4 - fVar13 * fStack_d8) / fVar12 + (fVar13 / fVar12) * *param_2;
            local_var_e0._0_4_ = *param_2;
          }
        }
        else if (0.01 <= fVar10) {
          local_var_e0._4_4_ =
               (fVar11 * param_2[1] - fVar1 * *param_2) * (1.0 / fVar11) +
               (1.0 / fVar11) * fVar1 * fStack_d8;
          local_var_e0._0_4_ = fStack_d8;
        }
        else {
LAB_18038b844:
          puVar4 = (uint64_t *)function_3975b0();
          local_var_e0._4_4_ = (float)((uint64_t)*puVar4 >> 0x20);
          local_var_e0._0_4_ = (float)*puVar4;
        }
        if (ABS(fVar12) <= ABS(fVar13)) {
          fVar12 = (local_var_e0._4_4_ - fStack_d4) / fVar13;
        }
        else {
          fVar12 = ((float)local_var_e0 - fStack_d8) / fVar12;
        }
        if ((-0.014 <= fVar12) && (fVar12 <= 1.014)) {
          if (fVar10 <= ABS(fVar1)) {
            fVar12 = (local_var_e0._4_4_ - param_2[1]) / fVar1;
          }
          else {
            fVar12 = ((float)local_var_e0 - *param_2) / fVar11;
          }
          if ((-0.014 <= fVar12) && (fVar12 <= fVar14)) {
            puVar8 = puVar3;
            fVar14 = fVar12;
          }
        }
        uVar5 = (int)puVar6 + 1;
        puVar6 = (uint64_t *)(uint64_t)uVar5;
        puVar7 = puVar7 + 1;
      } while ((int)uVar5 < (int)(uint)*(byte *)(param_1 + 0xa8));
    }
  }
  else {
    fVar14 = -0.014;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      plVar9 = (int64_t *)(param_1 + 0x60);
      do {
        puVar7 = (uint64_t *)*plVar9;
        fVar11 = *param_3;
        fStack_e8 = (float)*(uint64_t *)*puVar7;
        fVar1 = fStack_e8;
        fStack_e4 = (float)((uint64_t)*(uint64_t *)*puVar7 >> 0x20);
        fVar10 = fStack_e4;
        local_var_e0._0_4_ = (float)*(uint64_t *)puVar7[1];
        local_var_e0._4_4_ = (float)((uint64_t)*(uint64_t *)puVar7[1] >> 0x20);
        local_var_e0._0_4_ = (float)local_var_e0 - fStack_e8;
        local_var_e0._4_4_ = local_var_e0._4_4_ - fStack_e4;
        if (0.01 <= ABS((float)local_var_e0)) {
          if (ABS(fVar11) < 0.01) {
            fVar12 = *param_2;
            fStack_e4 = ((float)local_var_e0 * fStack_e4 - local_var_e0._4_4_ * fStack_e8) /
                        (float)local_var_e0 + (local_var_e0._4_4_ / (float)local_var_e0) * fVar12;
          }
          else {
            fVar12 = -(local_var_e0._4_4_ / (float)local_var_e0) - -(param_3[1] * (1.0 / fVar11));
            if (fVar12 == 0.0) goto LAB_18038b653;
            fStack_e4 = ((float)local_var_e0 * fStack_e4 - local_var_e0._4_4_ * fStack_e8) /
                        (float)local_var_e0;
            fVar12 = (fStack_e4 - (fVar11 * param_2[1] - param_3[1] * *param_2) * (1.0 / fVar11)) /
                     fVar12;
            fStack_e4 = fStack_e4 - fVar12 * -(local_var_e0._4_4_ / (float)local_var_e0);
          }
        }
        else if (ABS(fVar11) < 0.01) {
LAB_18038b653:
          puVar3 = (uint64_t *)function_3975b0();
          fStack_e4 = (float)((uint64_t)*puVar3 >> 0x20);
          fStack_e8 = (float)*puVar3;
          fVar12 = fStack_e8;
        }
        else {
          fStack_e4 = (fVar11 * param_2[1] - param_3[1] * *param_2) * (1.0 / fVar11) +
                      param_3[1] * (1.0 / fVar11) * fStack_e8;
          fVar12 = fStack_e8;
        }
        if (ABS((float)local_var_e0) <= ABS(local_var_e0._4_4_)) {
          local_var_e0._0_4_ = (fStack_e4 - fVar10) / local_var_e0._4_4_;
        }
        else {
          local_var_e0._0_4_ = (fVar12 - fVar1) / (float)local_var_e0;
        }
        if ((-0.014 <= (float)local_var_e0) && ((float)local_var_e0 <= 1.014)) {
          if (ABS(*param_3) <= ABS(param_3[1])) {
            fVar11 = (fStack_e4 - param_2[1]) / param_3[1];
          }
          else {
            fVar11 = (fVar12 - *param_2) / *param_3;
          }
          if ((fVar14 <= fVar11) && (fVar11 <= 1.014)) {
            puVar8 = puVar7;
            fVar14 = fVar11;
          }
        }
        uVar5 = (int)puVar6 + 1;
        puVar6 = (uint64_t *)(uint64_t)uVar5;
        plVar9 = plVar9 + 1;
      } while ((int)uVar5 < (int)(uint)*(byte *)(param_1 + 0xa8));
    }
  }
  return puVar8;
}
uint64_t * function_38ba40(int64_t param_1,uint64_t *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStackX_8;
  float fStackX_c;
  bVar4 = *(byte *)(param_1 + 0xa8);
  fVar17 = 3.4028235e+38;
  *param_2 = 0;
  uVar10 = (uint64_t)(uint)bVar4;
  if (bVar4 != 0) {
    iVar8 = 1;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    puVar9 = (uint64_t *)(param_1 + 0x80);
    do {
      pfVar5 = *(float **)(param_1 + 0x80 + (int64_t)(iVar8 % (int)(uint)bVar4) * 8);
      pfVar6 = (float *)*puVar9;
      fVar12 = *pfVar6;
      fVar3 = pfVar6[1];
      fVar15 = *pfVar5 - fVar12;
      fVar16 = pfVar5[1] - fVar3;
      fVar18 = fVar16 * fVar16 + fVar15 * fVar15;
      auVar13 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar11 = auVar13._0_4_;
      fVar14 = fVar11 * 0.5 * (3.0 - fVar18 * fVar11 * fVar11);
      fVar11 = (fVar2 - fVar3) * fVar16 * fVar14 + (fVar1 - fVar12) * fVar15 * fVar14;
      if (0.0 <= fVar11) {
        if (fVar11 <= fVar14 * fVar18) {
          uVar7 = CONCAT44(fVar16 * fVar14 * fVar11 + fVar3,fVar15 * fVar14 * fVar11 + fVar12);
        }
        else {
          uVar7 = *(uint64_t *)pfVar5;
        }
      }
      else {
        uVar7 = *(uint64_t *)pfVar6;
      }
      fStackX_8 = (float)uVar7;
      fStackX_8 = fVar1 - fStackX_8;
      fStackX_c = (float)((uint64_t)uVar7 >> 0x20);
      fStackX_c = fVar2 - fStackX_c;
      fVar12 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
      if (fVar12 < fVar17) {
        *param_2 = uVar7;
        fVar17 = fVar12;
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return param_2;
}
// 函数: void function_38ba76(uint64_t param_1,uint64_t param_2,float *param_3,int64_t param_4)
void function_38ba76(uint64_t param_1,uint64_t param_2,float *param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint64_t uVar6;
  int iVar7;
  int unaff_EBX;
  uint64_t *puVar8;
  uint64_t *in_R10;
  int64_t in_R11;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float fVar15;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  iVar7 = 1;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  puVar8 = (uint64_t *)(in_R11 + 0x80);
  do {
    pfVar4 = *(float **)(in_R11 + 0x80 + (int64_t)(iVar7 % unaff_EBX) * 8);
    pfVar5 = (float *)*puVar8;
    fVar10 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar13 = *pfVar4 - fVar10;
    fVar14 = pfVar4[1] - fVar3;
    fVar15 = fVar14 * fVar14 + fVar13 * fVar13;
    auVar11 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar9 = auVar11._0_4_;
    fVar12 = fVar9 * 0.5 * (3.0 - fVar15 * fVar9 * fVar9);
    fVar9 = (fVar2 - fVar3) * fVar14 * fVar12 + (fVar1 - fVar10) * fVar13 * fVar12;
    if (0.0 <= fVar9) {
      if (fVar9 <= fVar12 * fVar15) {
        uVar6 = CONCAT44(fVar14 * fVar12 * fVar9 + fVar3,fVar13 * fVar12 * fVar9 + fVar10);
      }
      else {
        uVar6 = *(uint64_t *)pfVar4;
      }
    }
    else {
      uVar6 = *(uint64_t *)pfVar5;
    }
    fStack00000000000000a0 = (float)uVar6;
    fStack00000000000000a0 = fVar1 - fStack00000000000000a0;
    fStack00000000000000a4 = (float)((uint64_t)uVar6 >> 0x20);
    fStack00000000000000a4 = fVar2 - fStack00000000000000a4;
    fVar10 = fStack00000000000000a4 * fStack00000000000000a4 +
             fStack00000000000000a0 * fStack00000000000000a0;
    if (fVar10 < unaff_XMM6_Da) {
      *in_R10 = uVar6;
      unaff_XMM6_Da = fVar10;
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}
// 函数: void function_38bc21(void)
void function_38bc21(void)
{
  return;
}
float * function_38bc40(int64_t param_1,float *param_2,float *param_3,float *param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  float *pfVar7;
  short sVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float afStackX_8 [2];
  float afStack_c8 [2];
  float afStack_c0 [2];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  bVar5 = *(byte *)(param_1 + 0xa8);
  afStackX_8[0] = 1e+30;
  fStack_b8 = NAN;
  fStack_b4 = NAN;
  fStack_b0 = NAN;
  fStack_ac = NAN;
  if (bVar5 != 0) {
    fVar1 = *param_4;
    puVar11 = (uint64_t *)(param_1 + 0x80);
    fVar2 = param_4[1];
    lVar9 = 0;
    iVar10 = 0;
    afStack_c8[0] = fVar2 * fVar2 + fVar1 * fVar1;
    do {
      iVar10 = iVar10 + 1;
      pfVar6 = (float *)*puVar11;
      fVar12 = pfVar6[1];
      fVar15 = *pfVar6;
      pfVar7 = *(float **)(param_1 + 0x80 + (int64_t)(iVar10 % (int)(uint)bVar5) * 8);
      fVar17 = pfVar7[1] - fVar12;
      fVar16 = *pfVar7 - fVar15;
      fVar13 = fVar1 * fVar17 - fVar2 * fVar16;
      if (-0.001 <= fVar13) {
        fVar3 = pfVar6[2];
        fVar4 = pfVar7[2];
        if (fVar13 == 0.0) {
          fVar13 = -1.0;
        }
        else {
          fVar13 = ((fVar15 - *param_3) * fVar17 - (fVar12 - param_3[1]) * fVar16) / fVar13;
        }
        fVar14 = fVar2 * fVar16 - fVar1 * fVar17;
        if (fVar14 == 0.0) {
          fVar14 = -1.0;
        }
        else {
          fVar14 = ((*param_3 - fVar15) * fVar2 - (param_3[1] - fVar12) * fVar1) / fVar14;
        }
        if ((fVar13 < 0.0) || (1.0 < fVar13)) {
LAB_18038be00:
          if (fVar14 < 0.0) goto LAB_18038be05;
          if (fVar14 <= 1.0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = fVar14 - 1.0;
          }
        }
        else {
          if (0.0 <= fVar14) {
            if (fVar14 <= 1.0) {
              param_2[3] = 3.4028235e+38;
              fVar12 = param_3[1];
              *param_2 = fVar1 * fVar13 + *param_3;
              param_2[1] = fVar2 * fVar13 + fVar12;
              param_2[2] = (fVar4 - fVar3) * fVar14 + fVar3;
              return param_2;
            }
            goto LAB_18038be00;
          }
LAB_18038be05:
          fVar12 = -fVar14;
        }
        if (0.0 <= fVar13) {
          if (fVar13 <= 1.0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = fVar13 - 1.0;
          }
        }
        else {
          fVar15 = -fVar13;
        }
        fVar12 = SQRT(fVar16 * fVar16 + fVar17 * fVar17) * fVar12 + SQRT(afStack_c8[0]) * fVar15;
        if (fVar12 < afStackX_8[0]) {
          fStack_b0 = (fVar4 - fVar3) * fVar14 + fVar3;
          if (0.0 <= fVar13) {
            if (1.0 <= fVar13) {
              fVar13 = 1.0;
            }
          }
          else {
            fVar13 = 0.0;
          }
          fStack_ac = 3.4028235e+38;
          fStack_b8 = fVar1 * fVar13 + *param_3;
          fStack_b4 = fVar2 * fVar13 + param_3[1];
          afStackX_8[0] = fVar12;
        }
      }
      lVar9 = lVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar9 < (int64_t)(uint64_t)bVar5);
  }
  fVar15 = fStack_ac;
  fVar12 = fStack_b0;
  fVar2 = fStack_b4;
  fVar1 = fStack_b8;
  afStackX_8[0] = fStack_b8;
  sVar8 = _fdtest(afStackX_8);
  if (sVar8 != 2) {
    afStack_c8[0] = fStack_b4;
    sVar8 = _fdtest(afStack_c8);
    if (sVar8 != 2) {
      afStack_c0[0] = fStack_b0;
      sVar8 = _fdtest(afStack_c0);
      if (sVar8 != 2) {
        *param_2 = fVar1;
        param_2[1] = fVar2;
        param_2[2] = fVar12;
        param_2[3] = fVar15;
        return param_2;
      }
    }
  }
  param_2[0] = NAN;
  param_2[1] = NAN;
  param_2[2] = NAN;
  param_2[3] = NAN;
  return param_2;
}
// 函数: void function_38bfe0(int64_t param_1)
void function_38bfe0(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  function_38c3d0();
  if (*(int64_t *)(param_1 + 0x4f8) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x4d8) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x4b8) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x498) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x478) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x458) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x438) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  UtilitiesSystem_Processor();
  SystemDataValidator(param_1 + 8,0x20,0x20,function_046860,uVar1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_38c180(void)
void function_38c180(void)
{
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5304_ptr);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_38c3d0(int64_t param_1)
void function_38c3d0(int64_t param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t ****ppppuVar6;
  uint64_t ****ppppuVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t ****ppppuVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iStackX_10;
  uint64_t ***ppplocal_var_70;
  uint64_t ***ppplocal_var_68;
  uint64_t *plocal_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  CoreEngine_0572D0(param_1 + 0x408);
  uVar11 = 0;
  iStackX_10 = 0;
  lVar12 = *(int64_t *)(param_1 + 0x498);
  plVar1 = (int64_t *)(param_1 + 0x4d8);
  uVar10 = uVar11;
  if (*(int64_t *)(param_1 + 0x4a0) - lVar12 >> 3 != 0) {
    do {
      lVar12 = *(int64_t *)(lVar12 + uVar10);
      if (lVar12 != 0) {
        uVar10 = *(uint64_t *)(lVar12 + -0x10);
        uVar9 = uVar10 >> 0x20;
        if ((int)(uVar10 >> 0x20) != 0) {
          do {
            *(uint64_t *)(uVar11 + lVar12) = 0;
            *(int32_t *)(uVar11 + 8 + lVar12) = 0;
            *(int32_t *)(uVar11 + 0x10 + lVar12) = 0;
            uVar11 = (uint64_t)(uint)((int)uVar11 + (int)uVar10);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(*(int64_t *)(param_1 + 0x498) + uVar10) = 0;
      if (*(int64_t *)(*(int64_t *)(param_1 + 0x4b8) + uVar10) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(*(int64_t *)(param_1 + 0x4b8) + uVar10) = 0;
      lVar12 = *(int64_t *)(*plVar1 + uVar10);
      if (lVar12 != 0) {
        uVar10 = *(uint64_t *)(lVar12 + -0x10);
        uVar9 = uVar10 >> 0x20;
        if ((int)(uVar10 >> 0x20) != 0) {
          do {
            if (*(int64_t *)(uVar11 + lVar12 + 0xf8) != 0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            uVar11 = (uint64_t)(uint)((int)uVar11 + (int)uVar10);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer((uint64_t *)(lVar12 + -0x10));
      }
      *(uint64_t *)(*plVar1 + uVar10) = 0;
      iStackX_10 = iStackX_10 + 1;
      lVar12 = *(int64_t *)(param_1 + 0x498);
      uVar10 = uVar10 + 8;
    } while ((uint64_t)(int64_t)iStackX_10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x4a0) - lVar12 >> 3));
  }
  ppppuVar13 = (uint64_t ****)(param_1 + 0x408);
  lVar12 = *(int64_t *)(param_1 + 0x498);
  *(uint64_t *)(param_1 + 0x498) = 0;
  *(uint64_t *)(param_1 + 0x4a0) = 0;
  *(uint64_t *)(param_1 + 0x4a8) = 0;
  *(int32_t *)(param_1 + 0x4b0) = 3;
  if (lVar12 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lVar12 = *(int64_t *)(param_1 + 0x4b8);
  *(uint64_t *)(param_1 + 0x4b8) = 0;
  *(uint64_t *)(param_1 + 0x4c0) = 0;
  *(uint64_t *)(param_1 + 0x4c8) = 0;
  *(int32_t *)(param_1 + 0x4d0) = 3;
  if (lVar12 == 0) {
    function_396940(plVar1);
    *(uint64_t *)(param_1 + 0x440) = *(uint64_t *)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x480) = *(uint64_t *)(param_1 + 0x478);
    *(uint64_t *)(param_1 + 0x460) = *(uint64_t *)(param_1 + 0x458);
    local_var_48 = 3;
    ppplocal_var_70 = &ppplocal_var_70;
    ppplocal_var_68 = &ppplocal_var_70;
    plocal_var_60 = (uint64_t *)0x0;
    local_var_58 = 0;
    local_var_50 = 0;
    if (ppppuVar13 != &ppplocal_var_70) {
      CoreEngine_0572D0(ppppuVar13);
      uVar4 = *(uint64_t *)(param_1 + 0x428);
      *(uint64_t *)(param_1 + 0x428) = local_var_50;
      uVar2 = *(int32_t *)(param_1 + 0x430);
      *(int32_t *)(param_1 + 0x430) = local_var_48;
      puVar5 = *(uint64_t **)(param_1 + 0x418);
      local_var_50 = uVar4;
      local_var_48 = uVar2;
      if (puVar5 == (uint64_t *)0x0) {
        if (plocal_var_60 != (uint64_t *)0x0) {
          *ppppuVar13 = ppplocal_var_70;
          *(uint64_t ****)(param_1 + 0x410) = ppplocal_var_68;
          *(uint64_t **)(param_1 + 0x418) = plocal_var_60;
          plocal_var_60[2] = ppppuVar13;
          ppplocal_var_70 = &ppplocal_var_70;
          ppplocal_var_68 = &ppplocal_var_70;
          plocal_var_60 = (uint64_t *)0x0;
        }
      }
      else if (plocal_var_60 == (uint64_t *)0x0) {
        ppplocal_var_70 = *ppppuVar13;
        ppplocal_var_68 = *(uint64_t ****)(param_1 + 0x410);
        puVar5[2] = &ppplocal_var_70;
        *ppppuVar13 = ppppuVar13;
        *(uint64_t *****)(param_1 + 0x410) = ppppuVar13;
        *(uint64_t *)(param_1 + 0x418) = 0;
        plocal_var_60 = puVar5;
      }
      else {
        ppppuVar6 = (uint64_t ****)*ppppuVar13;
        *ppppuVar13 = ppplocal_var_70;
        ppppuVar7 = *(uint64_t *****)(param_1 + 0x410);
        *(uint64_t ****)(param_1 + 0x410) = ppplocal_var_68;
        puVar5 = *(uint64_t **)(param_1 + 0x418);
        *(uint64_t **)(param_1 + 0x418) = plocal_var_60;
        plocal_var_60[2] = ppppuVar13;
        puVar5[2] = &ppplocal_var_70;
        ppplocal_var_70 = ppppuVar6;
        ppplocal_var_68 = ppppuVar7;
        plocal_var_60 = puVar5;
      }
    }
    puVar5 = plocal_var_60;
    if (plocal_var_60 != (uint64_t *)0x0) {
      SystemCache_Manager(&ppplocal_var_70,*plocal_var_60);
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar5);
    }
    lVar12 = *(int64_t *)(param_1 + 0x440);
    lVar8 = *(int64_t *)(param_1 + 0x438);
    uVar3 = *(uint *)(param_1 + 0x450);
    lVar15 = lVar12 - lVar8;
    lVar14 = lVar15 >> 3;
    uVar10 = uVar11;
    if (lVar14 != 0) {
      uVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar14 * 8,uVar3 & 0xff);
    }
    lVar14 = uVar10 + lVar14 * 8;
    if (lVar8 != lVar12) {
// WARNING: Subroutine does not return
      memmove(uVar10,lVar8,lVar15);
    }
    lVar12 = *(int64_t *)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x438) = uVar10;
    *(int64_t *)(param_1 + 0x440) = lVar14;
    *(int64_t *)(param_1 + 0x448) = lVar14;
    *(uint *)(param_1 + 0x450) = uVar3;
    if (lVar12 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lVar12 = *(int64_t *)(param_1 + 0x480);
    lVar8 = *(int64_t *)(param_1 + 0x478);
    uVar3 = *(uint *)(param_1 + 0x490);
    lVar15 = lVar12 - lVar8;
    lVar14 = lVar15 >> 3;
    uVar10 = uVar11;
    if (lVar14 != 0) {
      uVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar14 * 8,uVar3 & 0xff);
    }
    lVar14 = uVar10 + lVar14 * 8;
    if (lVar8 == lVar12) {
      lVar12 = *(int64_t *)(param_1 + 0x478);
      *(uint64_t *)(param_1 + 0x478) = uVar10;
      *(int64_t *)(param_1 + 0x480) = lVar14;
      *(int64_t *)(param_1 + 0x488) = lVar14;
      *(uint *)(param_1 + 0x490) = uVar3;
      if (lVar12 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lVar12 = *(int64_t *)(param_1 + 0x460);
      lVar8 = *(int64_t *)(param_1 + 0x458);
      uVar3 = *(uint *)(param_1 + 0x470);
      lVar14 = lVar12 - lVar8;
      lVar15 = lVar14 >> 3;
      if (lVar15 != 0) {
        uVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar15 * 8,uVar3 & 0xff);
      }
      lVar15 = uVar11 + lVar15 * 8;
      if (lVar8 == lVar12) {
        lVar12 = *(int64_t *)(param_1 + 0x458);
        *(uint64_t *)(param_1 + 0x458) = uVar11;
        *(int64_t *)(param_1 + 0x460) = lVar15;
        *(int64_t *)(param_1 + 0x468) = lVar15;
        *(uint *)(param_1 + 0x470) = uVar3;
        if (lVar12 == 0) {
          return;
        }
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
// WARNING: Subroutine does not return
      memmove(uVar11,lVar8,lVar14);
    }
// WARNING: Subroutine does not return
    memmove(uVar10,lVar8,lVar15);
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// 函数: void function_38ca20(int64_t param_1)
void function_38ca20(int64_t param_1)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  lVar5 = *(int64_t *)(param_1 + 0x478);
  iVar4 = 0;
  if (*(int64_t *)(param_1 + 0x480) - lVar5 >> 3 != 0) {
    lVar6 = 0;
    do {
      lVar5 = *(int64_t *)(lVar5 + lVar6);
      pfVar1 = *(float **)(lVar5 + 0x80);
      pfVar2 = *(float **)(lVar5 + 0x88);
      pfVar3 = *(float **)(lVar5 + 0x90);
      fVar12 = (pfVar2[1] - pfVar1[1]) * (pfVar3[2] - pfVar1[2]) -
               (pfVar2[2] - pfVar1[2]) * (pfVar3[1] - pfVar1[1]);
      fVar11 = (*pfVar2 - *pfVar1) * (pfVar3[1] - pfVar1[1]) -
               (pfVar2[1] - pfVar1[1]) * (*pfVar3 - *pfVar1);
      fVar8 = (pfVar2[2] - pfVar1[2]) * (*pfVar3 - *pfVar1) -
              (*pfVar2 - *pfVar1) * (pfVar3[2] - pfVar1[2]);
      fVar7 = fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11;
      auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar9 = auVar10._0_4_;
      fVar7 = fVar9 * 0.5 * (3.0 - fVar7 * fVar9 * fVar9);
      *(uint64_t *)(lVar5 + 0xd0) = CONCAT44(fVar8 * fVar7,fVar12 * fVar7);
      *(float *)(lVar5 + 0xd8) = fVar11 * fVar7;
      if (3 < *(byte *)(lVar5 + 0xa8)) {
        pfVar2 = *(float **)(lVar5 + 0x98);
        fVar12 = (pfVar3[1] - pfVar1[1]) * (pfVar2[2] - pfVar1[2]) -
                 (pfVar3[2] - pfVar1[2]) * (pfVar2[1] - pfVar1[1]);
        fVar11 = (*pfVar3 - *pfVar1) * (pfVar2[1] - pfVar1[1]) -
                 (pfVar3[1] - pfVar1[1]) * (*pfVar2 - *pfVar1);
        fVar7 = (pfVar3[2] - pfVar1[2]) * (*pfVar2 - *pfVar1) -
                (*pfVar3 - *pfVar1) * (pfVar2[2] - pfVar1[2]);
        fVar8 = fVar7 * fVar7 + fVar12 * fVar12 + fVar11 * fVar11;
        auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar10._0_4_;
        fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
        *(uint64_t *)(lVar5 + 0xdc) = CONCAT44(fVar7 * fVar8,fVar12 * fVar8);
        *(float *)(lVar5 + 0xe4) = fVar11 * fVar8;
      }
      lVar5 = *(int64_t *)(param_1 + 0x478);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(param_1 + 0x480) - lVar5 >> 3));
  }
  return;
}
// 函数: void function_38ca4a(uint64_t param_1,uint param_2,int64_t param_3,int64_t param_4)
void function_38ca4a(uint64_t param_1,uint param_2,int64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  uVar5 = (uint64_t)param_2;
  do {
    lVar1 = *(int64_t *)(param_3 + uVar5);
    pfVar2 = *(float **)(lVar1 + 0x80);
    pfVar3 = *(float **)(lVar1 + 0x88);
    pfVar4 = *(float **)(lVar1 + 0x90);
    fVar11 = (pfVar3[1] - pfVar2[1]) * (pfVar4[2] - pfVar2[2]) -
             (pfVar3[2] - pfVar2[2]) * (pfVar4[1] - pfVar2[1]);
    fVar10 = (*pfVar3 - *pfVar2) * (pfVar4[1] - pfVar2[1]) -
             (pfVar3[1] - pfVar2[1]) * (*pfVar4 - *pfVar2);
    fVar7 = (pfVar3[2] - pfVar2[2]) * (*pfVar4 - *pfVar2) -
            (*pfVar3 - *pfVar2) * (pfVar4[2] - pfVar2[2]);
    fVar6 = fVar11 * fVar11 + fVar7 * fVar7 + fVar10 * fVar10;
    auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar8 = auVar9._0_4_;
    fVar6 = fVar8 * 0.5 * (3.0 - fVar6 * fVar8 * fVar8);
    *(uint64_t *)(lVar1 + 0xd0) = CONCAT44(fVar7 * fVar6,fVar11 * fVar6);
    *(float *)(lVar1 + 0xd8) = fVar10 * fVar6;
    if (3 < *(byte *)(lVar1 + 0xa8)) {
      pfVar3 = *(float **)(lVar1 + 0x98);
      fVar11 = (pfVar4[1] - pfVar2[1]) * (pfVar3[2] - pfVar2[2]) -
               (pfVar4[2] - pfVar2[2]) * (pfVar3[1] - pfVar2[1]);
      fVar10 = (*pfVar4 - *pfVar2) * (pfVar3[1] - pfVar2[1]) -
               (pfVar4[1] - pfVar2[1]) * (*pfVar3 - *pfVar2);
      fVar6 = (pfVar4[2] - pfVar2[2]) * (*pfVar3 - *pfVar2) -
              (*pfVar4 - *pfVar2) * (pfVar3[2] - pfVar2[2]);
      fVar7 = fVar6 * fVar6 + fVar11 * fVar11 + fVar10 * fVar10;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
      *(uint64_t *)(lVar1 + 0xdc) = CONCAT44(fVar6 * fVar7,fVar11 * fVar7);
      *(float *)(lVar1 + 0xe4) = fVar10 * fVar7;
    }
    param_3 = *(int64_t *)(param_4 + 0x478);
    param_2 = param_2 + 1;
    uVar5 = uVar5 + 8;
  } while ((uint64_t)(int64_t)(int)param_2 <
           (uint64_t)(*(int64_t *)(param_4 + 0x480) - param_3 >> 3));
  return;
}
// 函数: void function_38ccfe(void)
void function_38ccfe(void)
{
  return;
}