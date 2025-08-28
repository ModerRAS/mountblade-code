n//  的语义化别名
#define SystemCore_StateController
n//  的语义化别名
#define SystemCore_SystemMonitor
n//  的语义化别名
#define SystemCore_DataCompressor
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator
// 02_core_engine_part082_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_18010f0d0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18010f0d0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  local_var_48 = 0;
  local_var_44 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
  local_var_40 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
  local_var_3c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
  local_var_38 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_var_48);
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *(int32_t *)(lVar7 + 0x16c8) = *param_1;
  *(int32_t *)(lVar7 + 0x16cc) = uVar3;
  *(int32_t *)(lVar7 + 0x16d0) = uVar4;
  *(int32_t *)(lVar7 + 0x16d4) = uVar5;
  GenericFunction_18010f040(param_2,&stack_special_x_18);
  lVar7 = SYSTEM_DATA_MANAGER_A;
  puVar1 = (uint64_t *)
           (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  uVar6 = puVar1[1];
  puVar2 = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (int64_t)
           *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  *(int *)(lVar7 + 0x1b80) = *(int *)(lVar7 + 0x1b80) + -1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_Formatter(float *param_1,int param_2,char *param_3,int8_t *param_4,uint param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  int8_t uVar10;
  byte bVar11;
  float fVar12;
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar9 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar9 + 0xb1) = 1;
  lVar1 = *(int64_t *)(lVar5 + 0x1af8);
  if ((param_5 >> 8 & 1) != 0) {
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
    }
    if (param_4 != (int8_t *)0x0) {
      *param_4 = 0;
    }
    iVar8 = *(int *)(lVar5 + 0x1b2c);
    if (iVar8 == param_2) {
      uVar9 = CONCAT71((int7)(uVar9 >> 8),iVar8 != 0);
      *(bool *)(lVar5 + 0x1b3c) = iVar8 != 0;
      if (iVar8 != 0) {
        *(int32_t *)(lVar5 + 0x1b38) = 0;
        *(int8_t *)(lVar5 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar5 + 0x1b2c) = 0;
      *(int32_t *)(lVar5 + 0x1b44) = 0;
      *(int8_t *)(lVar5 + 0x1b3d) = 0;
      *(uint64_t *)(lVar5 + 0x1b50) = 0;
    }
    return uVar9 & 0xffffffffffffff00;
  }
  uVar2 = *(uint64_t *)(lVar5 + 0x1b00);
  uVar3 = param_5 | 2;
  if ((param_5 & 0x1e) != 0) {
    uVar3 = param_5;
  }
  if (((uVar3 & 0x20) == 0) || (*(int64_t *)(lVar5 + 0x1b08) != *(int64_t *)(lVar1 + 0x3a0))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    *(int64_t *)(lVar5 + 0x1b00) = lVar1;
  }
  bVar11 = 0;
  cVar6 = GenericFunction_1801243a0();
  if (cVar6 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(lVar5 + 0x1dd0) != '\0') && ((uVar3 >> 0xc & 1) != 0)) &&
       ((*(byte *)(lVar5 + 0x1dd4) & 4) == 0)) {
      cVar7 = GenericFunction_1801242c0(0x20);
      if (cVar7 != '\0') {
        *(int *)(lVar5 + 0x1b18) = param_2;
        cVar6 = '\x01';
        *(int8_t *)(lVar5 + 0x1b1c) = 0;
        if ((param_2 != 0) && (*(int *)(lVar5 + 0x1b20) != param_2)) {
          *(uint64_t *)(lVar5 + 0x1b24) = 0;
        }
        fVar12 = *(float *)(lVar5 + 0x1b24) + 0.0001;
        iVar8 = SystemFunction_000180128180(fVar12,fVar12 - *(float *)(lVar5 + 0x18),0x3c23d70a,0x3f333333);
        if (iVar8 != 0) {
          bVar11 = 1;
          SystemCore_DataCompressor(lVar1);
        }
      }
    }
  }
  else if (*(char *)(lVar5 + 0x1dd0) != '\0') {
    if ((*(int *)(lVar5 + 0x1dec) == param_2) && ((*(byte *)(lVar5 + 0x1dd4) & 2) == 0)) {
      cVar6 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar4) {
    *(uint64_t *)(lVar5 + 0x1b00) = uVar2;
  }
  if (cVar6 == '\0') goto LAB_18010f4d1;
  if ((((uVar3 & 0x40) != 0) && (*(int *)(lVar5 + 0x1b20) != param_2)) &&
     (*(int *)(lVar5 + 0x1b20) != 0)) {
    cVar6 = '\0';
    goto LAB_18010f4d1;
  }
  if (((uVar3 >> 10 & 1) == 0) ||
     (((*(char *)(lVar5 + 0x134) == '\0' && (*(char *)(lVar5 + 0x135) == '\0')) &&
      (*(char *)(lVar5 + 0x136) == '\0')))) {
    if (((uVar3 & 2) != 0) && (*(char *)(lVar5 + 0x410) != '\0')) {
      SystemFunction_000180123e90(param_2);
      if ((uVar3 >> 0xd & 1) == 0) {
        GenericFunction_180123f30();
      }
      SystemCore_DataCompressor(lVar1);
    }
    if ((((uVar3 & 4) != 0) && (*(char *)(lVar5 + 0x410) != '\0')) ||
       (((uVar3 & 0x10) != 0 && (*(char *)(lVar5 + 0x415) != '\0')))) {
      bVar11 = 1;
      if ((uVar3 >> 0xb & 1) == 0) {
        SystemFunction_000180123e90(param_2);
      }
      else {
        *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
        if (*(int *)(lVar5 + 0x1b2c) != 0) {
          *(int32_t *)(lVar5 + 0x1b38) = 0;
          *(int8_t *)(lVar5 + 0x1b3e) = 0;
        }
        *(int32_t *)(lVar5 + 0x1b2c) = 0;
        *(int32_t *)(lVar5 + 0x1b44) = 0;
        *(int8_t *)(lVar5 + 0x1b3d) = 0;
        *(uint64_t *)(lVar5 + 0x1b50) = 0;
      }
      SystemCore_DataCompressor(lVar1);
    }
    if (((uVar3 & 8) != 0) && (*(char *)(lVar5 + 0x41a) != '\0')) {
      if (((uVar3 & 1) == 0) ||
         (*(float *)(lVar5 + 0x438) <= *(float *)(lVar5 + 0x90) &&
          *(float *)(lVar5 + 0x90) != *(float *)(lVar5 + 0x438))) {
        bVar11 = 1;
      }
      *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
      if (*(int *)(lVar5 + 0x1b2c) != 0) {
        *(int32_t *)(lVar5 + 0x1b38) = 0;
        *(int8_t *)(lVar5 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar5 + 0x1b2c) = 0;
      *(int32_t *)(lVar5 + 0x1b44) = 0;
      *(int8_t *)(lVar5 + 0x1b3d) = 0;
      *(uint64_t *)(lVar5 + 0x1b50) = 0;
    }
    if ((((uVar3 & 1) == 0) || (*(int *)(lVar5 + 0x1b2c) != param_2)) ||
       (*(float *)(lVar5 + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar7 = GenericFunction_180128280(0);
    if (cVar7 == '\0') goto LAB_18010f4c5;
    bVar11 = 1;
  }
  else {
LAB_18010f4c5:
    if (bVar11 == 0) goto LAB_18010f4d1;
  }
  *(int8_t *)(lVar5 + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(lVar5 + 0x1ca0) == param_2) && (*(char *)(lVar5 + 0x1d06) == '\0')) &&
      (*(char *)(lVar5 + 0x1d07) != '\0')) &&
     (((iVar8 = *(int *)(lVar5 + 0x1b2c), iVar8 == 0 || (iVar8 == param_2)) ||
      (iVar8 == *(int *)(lVar1 + 0x84))))) {
    cVar6 = '\x01';
  }
  if (*(int *)(lVar5 + 0x1ca8) == param_2) {
    iVar8 = *(int *)(lVar5 + 0x1ca4);
    fVar12 = (float)CoreEngine_PerformanceMonitor(0);
    cVar7 = 0.0 < fVar12;
    if ((iVar8 == param_2) || ((bool)cVar7)) {
      bVar11 = 1;
    }
    if (((iVar8 == param_2) || ((bool)cVar7)) || (*(int *)(lVar5 + 0x1b2c) == param_2)) {
      *(int *)(lVar5 + 0x1ca4) = param_2;
      SystemFunction_000180123e90(param_2);
      if (((iVar8 == param_2) || (cVar7 != '\0')) && ((uVar3 >> 0xd & 1) == 0)) {
        GenericFunction_180123f30();
      }
      *(int32_t *)(lVar5 + 0x1b44) = 0xf;
    }
  }
  uVar10 = 0;
  if (*(int *)(lVar5 + 0x1b2c) == param_2) {
    if (*(int *)(lVar5 + 0x1b60) == 1) {
      if (*(char *)(lVar5 + 0x1b3c) != '\0') {
        fVar12 = param_1[1];
        *(float *)(lVar5 + 0x1b48) = *(float *)(lVar5 + 0x118) - *param_1;
        *(float *)(lVar5 + 0x1b4c) = *(float *)(lVar5 + 0x11c) - fVar12;
      }
      if (*(char *)(lVar5 + 0x120) == '\0') {
        if (((cVar6 != '\0') && ((uVar3 & 2) != 0)) &&
           ((((uVar3 & 1) == 0 ||
             (*(float *)(lVar5 + 0x438) <= *(float *)(lVar5 + 0x90) &&
              *(float *)(lVar5 + 0x90) != *(float *)(lVar5 + 0x438))) &&
            (*(char *)(lVar5 + 0x1dd0) == '\0')))) {
          bVar11 = 1;
        }
        *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
        if (*(int *)(lVar5 + 0x1b2c) != 0) {
          *(int32_t *)(lVar5 + 0x1b38) = 0;
          *(int8_t *)(lVar5 + 0x1b3e) = 0;
        }
        *(int32_t *)(lVar5 + 0x1b2c) = 0;
        *(int32_t *)(lVar5 + 0x1b44) = 0;
        *(int8_t *)(lVar5 + 0x1b3d) = 0;
        *(uint64_t *)(lVar5 + 0x1b50) = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      if ((uVar3 >> 0xd & 1) == 0) {
        *(int8_t *)(lVar5 + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(lVar5 + 0x1b60) == 2) && (*(int *)(lVar5 + 0x1ca8) != param_2)) {
      *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
      if (*(int *)(lVar5 + 0x1b2c) != 0) {
        *(int32_t *)(lVar5 + 0x1b38) = 0;
        *(int8_t *)(lVar5 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar5 + 0x1b2c) = 0;
      *(int32_t *)(lVar5 + 0x1b44) = 0;
      *(int8_t *)(lVar5 + 0x1b3d) = 0;
      *(uint64_t *)(lVar5 + 0x1b50) = 0;
    }
  }
  if (param_3 != (char *)0x0) {
    *param_3 = cVar6;
  }
  if (param_4 != (int8_t *)0x0) {
    *param_4 = uVar10;
  }
  return (uint64_t)bVar11;
}
char GenericFunction_18010f213(uint64_t param_1,uint param_2)
{
  uint64_t uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int8_t uVar6;
  int64_t unaff_RBX;
  uint uVar7;
  int unaff_ESI;
  int64_t unaff_R14;
  char cVar8;
  float fVar9;
  float *local_buffer_80;
  char *local_buffer_90;
  int8_t *local_buffer_98;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x1b00);
  uVar7 = param_2 | 2;
  if ((param_2 & 0x1e) != 0) {
    uVar7 = param_2;
  }
  if (((uVar7 & 0x20) == 0) ||
     (*(int64_t *)(unaff_RBX + 0x1b08) != *(int64_t *)(unaff_R14 + 0x3a0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *(int64_t *)(unaff_RBX + 0x1b00) = unaff_R14;
  }
  cVar8 = '\0';
  cVar3 = GenericFunction_1801243a0();
  if (cVar3 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(unaff_RBX + 0x1dd0) != '\0') && ((uVar7 >> 0xc & 1) != 0)) &&
       ((*(byte *)(unaff_RBX + 0x1dd4) & 4) == 0)) {
      cVar4 = GenericFunction_1801242c0(0x20);
      if (cVar4 != '\0') {
        *(int *)(unaff_RBX + 0x1b18) = unaff_ESI;
        cVar3 = '\x01';
        *(int8_t *)(unaff_RBX + 0x1b1c) = 0;
        if ((unaff_ESI != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) {
          *(uint64_t *)(unaff_RBX + 0x1b24) = 0;
        }
        fVar9 = *(float *)(unaff_RBX + 0x1b24) + 0.0001;
        iVar5 = SystemFunction_000180128180(fVar9,fVar9 - *(float *)(unaff_RBX + 0x18),0x3c23d70a,0x3f333333
                                   );
        if (iVar5 != 0) {
          cVar8 = '\x01';
          SystemCore_DataCompressor();
        }
      }
    }
  }
  else if (*(char *)(unaff_RBX + 0x1dd0) != '\0') {
    if ((*(int *)(unaff_RBX + 0x1dec) == unaff_ESI) && ((*(byte *)(unaff_RBX + 0x1dd4) & 2) == 0)) {
      cVar3 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar2) {
    *(uint64_t *)(unaff_RBX + 0x1b00) = uVar1;
  }
  if (cVar3 == '\0') goto LAB_18010f4d1;
  if ((((uVar7 & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    cVar3 = '\0';
    goto LAB_18010f4d1;
  }
  if (((uVar7 >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == '\0' && (*(char *)(unaff_RBX + 0x135) == '\0')) &&
      (*(char *)(unaff_RBX + 0x136) == '\0')))) {
    if (((uVar7 & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) {
      SystemFunction_000180123e90(unaff_ESI);
      if ((uVar7 >> 0xd & 1) == 0) {
        GenericFunction_180123f30();
      }
      SystemCore_DataCompressor();
    }
    if ((((uVar7 & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) ||
       (((uVar7 & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != '\0')))) {
      cVar8 = '\x01';
      if ((uVar7 >> 0xb & 1) == 0) {
        SystemFunction_000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = 0;
          *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
        *(int32_t *)(unaff_RBX + 0x1b44) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
        *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
      }
      SystemCore_DataCompressor();
    }
    if (((uVar7 & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != '\0')) {
      if (((uVar7 & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        cVar8 = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
    }
    if ((((uVar7 & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar4 = GenericFunction_180128280(0);
    if (cVar4 == '\0') goto LAB_18010f4c5;
    cVar8 = '\x01';
  }
  else {
LAB_18010f4c5:
    if (cVar8 == '\0') goto LAB_18010f4d1;
  }
  *(int8_t *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
      (*(char *)(unaff_RBX + 0x1d07) != '\0')) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    cVar3 = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar9 = (float)CoreEngine_PerformanceMonitor(0);
    cVar4 = 0.0 < fVar9;
    if ((iVar5 == unaff_ESI) || ((bool)cVar4)) {
      cVar8 = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar4)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      SystemFunction_000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar4 != '\0')) && ((uVar7 >> 0xd & 1) == 0)) {
        GenericFunction_180123f30();
      }
      *(int32_t *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar6 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != '\0') {
        fVar9 = local_buffer_80[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *local_buffer_80;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar9;
      }
      if (*(char *)(unaff_RBX + 0x120) == '\0') {
        if (((cVar3 != '\0') && ((uVar7 & 2) != 0)) &&
           ((((uVar7 & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == '\0')))) {
          cVar8 = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = 0;
          *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
        *(int32_t *)(unaff_RBX + 0x1b44) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
        *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      if ((uVar7 >> 0xd & 1) == 0) {
        *(int8_t *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
    }
  }
  if (local_buffer_90 != (char *)0x0) {
    *local_buffer_90 = cVar3;
  }
  if (local_buffer_98 != (int8_t *)0x0) {
    *local_buffer_98 = uVar6;
  }
  return cVar8;
}
char GenericFunction_18010f227(uint64_t param_1,uint param_2)
{
  uint64_t uVar1;
  bool bVar2;
  byte in_AL;
  char cVar3;
  char cVar4;
  int iVar5;
  int8_t uVar6;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  int64_t unaff_R14;
  char cVar7;
  float fVar8;
  float *local_buffer_80;
  char *local_buffer_90;
  int8_t *local_buffer_98;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x1b00);
  if ((in_AL & 0x1e) != 0) {
    unaff_EBP = param_2;
  }
  if (((unaff_EBP & 0x20) == 0) ||
     (*(int64_t *)(unaff_RBX + 0x1b08) != *(int64_t *)(unaff_R14 + 0x3a0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *(int64_t *)(unaff_RBX + 0x1b00) = unaff_R14;
  }
  cVar7 = '\0';
  cVar3 = GenericFunction_1801243a0();
  if (cVar3 == '\0') {
LAB_18010f2a4:
    if (((*(char *)(unaff_RBX + 0x1dd0) != '\0') && ((unaff_EBP >> 0xc & 1) != 0)) &&
       ((*(byte *)(unaff_RBX + 0x1dd4) & 4) == 0)) {
      cVar4 = GenericFunction_1801242c0(0x20);
      if (cVar4 != '\0') {
        *(int *)(unaff_RBX + 0x1b18) = unaff_ESI;
        cVar3 = '\x01';
        *(int8_t *)(unaff_RBX + 0x1b1c) = 0;
        if ((unaff_ESI != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) {
          *(uint64_t *)(unaff_RBX + 0x1b24) = 0;
        }
        fVar8 = *(float *)(unaff_RBX + 0x1b24) + 0.0001;
        iVar5 = SystemFunction_000180128180(fVar8,fVar8 - *(float *)(unaff_RBX + 0x18),0x3c23d70a,0x3f333333
                                   );
        if (iVar5 != 0) {
          cVar7 = '\x01';
          SystemCore_DataCompressor();
        }
      }
    }
  }
  else if (*(char *)(unaff_RBX + 0x1dd0) != '\0') {
    if ((*(int *)(unaff_RBX + 0x1dec) == unaff_ESI) && ((*(byte *)(unaff_RBX + 0x1dd4) & 2) == 0)) {
      cVar3 = '\0';
    }
    goto LAB_18010f2a4;
  }
  if (bVar2) {
    *(uint64_t *)(unaff_RBX + 0x1b00) = uVar1;
  }
  if (cVar3 == '\0') goto LAB_18010f4d1;
  if ((((unaff_EBP & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    cVar3 = '\0';
    goto LAB_18010f4d1;
  }
  if (((unaff_EBP >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == '\0' && (*(char *)(unaff_RBX + 0x135) == '\0')) &&
      (*(char *)(unaff_RBX + 0x136) == '\0')))) {
    if (((unaff_EBP & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) {
      SystemFunction_000180123e90(unaff_ESI);
      if ((unaff_EBP >> 0xd & 1) == 0) {
        GenericFunction_180123f30();
      }
      SystemCore_DataCompressor();
    }
    if ((((unaff_EBP & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != '\0')) ||
       (((unaff_EBP & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != '\0')))) {
      cVar7 = '\x01';
      if ((unaff_EBP >> 0xb & 1) == 0) {
        SystemFunction_000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = 0;
          *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
        *(int32_t *)(unaff_RBX + 0x1b44) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
        *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
      }
      SystemCore_DataCompressor();
    }
    if (((unaff_EBP & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != '\0')) {
      if (((unaff_EBP & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        cVar7 = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
    }
    if ((((unaff_EBP & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar4 = GenericFunction_180128280(0);
    if (cVar4 == '\0') goto LAB_18010f4c5;
    cVar7 = '\x01';
  }
  else {
LAB_18010f4c5:
    if (cVar7 == '\0') goto LAB_18010f4d1;
  }
  *(int8_t *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == '\0')) &&
      (*(char *)(unaff_RBX + 0x1d07) != '\0')) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    cVar3 = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar8 = (float)CoreEngine_PerformanceMonitor(0);
    cVar4 = 0.0 < fVar8;
    if ((iVar5 == unaff_ESI) || ((bool)cVar4)) {
      cVar7 = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar4)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      SystemFunction_000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar4 != '\0')) && ((unaff_EBP >> 0xd & 1) == 0)) {
        GenericFunction_180123f30();
      }
      *(int32_t *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar6 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != '\0') {
        fVar8 = local_buffer_80[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *local_buffer_80;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar8;
      }
      if (*(char *)(unaff_RBX + 0x120) == '\0') {
        if (((cVar3 != '\0') && ((unaff_EBP & 2) != 0)) &&
           ((((unaff_EBP & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == '\0')))) {
          cVar7 = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = 0;
          *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
        *(int32_t *)(unaff_RBX + 0x1b44) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
        *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      if ((unaff_EBP >> 0xd & 1) == 0) {
        *(int8_t *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
    }
  }
  if (local_buffer_90 != (char *)0x0) {
    *local_buffer_90 = cVar3;
  }
  if (local_buffer_98 != (int8_t *)0x0) {
    *local_buffer_98 = uVar6;
  }
  return cVar7;
}
char GenericFunction_18010f333(void)
{
  char cVar1;
  int8_t uVar2;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  char cVar3;
  uint64_t unaff_RDI;
  int iVar5;
  char unaff_R12B;
  int64_t unaff_R14;
  char unaff_R15B;
  float fVar6;
  uint64_t stack_special_x_20;
  float *local_buffer_80;
  char *local_buffer_90;
  int8_t *local_buffer_98;
  int32_t uVar4;
  *(uint64_t *)(unaff_RBX + 0x1b00) = stack_special_x_20;
  cVar3 = (char)unaff_RDI;
  uVar4 = (int32_t)unaff_RDI;
  if (unaff_R12B == '\0') goto LAB_18010f4d1;
  if ((((unaff_EBP & 0x40) != 0) && (*(int *)(unaff_RBX + 0x1b20) != unaff_ESI)) &&
     (*(int *)(unaff_RBX + 0x1b20) != 0)) {
    unaff_R12B = '\0';
    goto LAB_18010f4d1;
  }
  if (((unaff_EBP >> 10 & 1) == 0) ||
     (((*(char *)(unaff_RBX + 0x134) == cVar3 && (*(char *)(unaff_RBX + 0x135) == cVar3)) &&
      (*(char *)(unaff_RBX + 0x136) == cVar3)))) {
    if (((unaff_EBP & 2) != 0) && (*(char *)(unaff_RBX + 0x410) != cVar3)) {
      SystemFunction_000180123e90(unaff_ESI);
      if ((unaff_EBP >> 0xd & 1) == 0) {
        GenericFunction_180123f30();
      }
      SystemCore_DataCompressor();
    }
    if ((((unaff_EBP & 4) != 0) && (*(char *)(unaff_RBX + 0x410) != cVar3)) ||
       (((unaff_EBP & 0x10) != 0 && (*(char *)(unaff_RBX + 0x415) != cVar3)))) {
      unaff_R15B = '\x01';
      if ((unaff_EBP >> 0xb & 1) == 0) {
        SystemFunction_000180123e90(unaff_ESI);
      }
      else {
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = uVar4;
          *(char *)(unaff_RBX + 0x1b3e) = cVar3;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = uVar4;
        *(int32_t *)(unaff_RBX + 0x1b44) = uVar4;
        *(char *)(unaff_RBX + 0x1b3d) = cVar3;
        *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
      }
      SystemCore_DataCompressor();
    }
    if (((unaff_EBP & 8) != 0) && (*(char *)(unaff_RBX + 0x41a) != cVar3)) {
      if (((unaff_EBP & 1) == 0) ||
         (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
          *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) {
        unaff_R15B = '\x01';
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = uVar4;
        *(char *)(unaff_RBX + 0x1b3e) = cVar3;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = uVar4;
      *(int32_t *)(unaff_RBX + 0x1b44) = uVar4;
      *(char *)(unaff_RBX + 0x1b3d) = cVar3;
      *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
    if ((((unaff_EBP & 1) == 0) || (*(int *)(unaff_RBX + 0x1b2c) != unaff_ESI)) ||
       (*(float *)(unaff_RBX + 0x424) <= 0.0)) goto LAB_18010f4c5;
    cVar1 = GenericFunction_180128280(0);
    if (cVar1 == '\0') goto LAB_18010f4c5;
    unaff_R15B = '\x01';
  }
  else {
LAB_18010f4c5:
    if (unaff_R15B == '\0') goto LAB_18010f4d1;
  }
  *(int8_t *)(unaff_RBX + 0x1d06) = 1;
LAB_18010f4d1:
  if ((((*(int *)(unaff_RBX + 0x1ca0) == unaff_ESI) && (*(char *)(unaff_RBX + 0x1d06) == cVar3)) &&
      (*(char *)(unaff_RBX + 0x1d07) != cVar3)) &&
     (((iVar5 = *(int *)(unaff_RBX + 0x1b2c), iVar5 == 0 || (iVar5 == unaff_ESI)) ||
      (iVar5 == *(int *)(unaff_R14 + 0x84))))) {
    unaff_R12B = '\x01';
  }
  if (*(int *)(unaff_RBX + 0x1ca8) == unaff_ESI) {
    iVar5 = *(int *)(unaff_RBX + 0x1ca4);
    fVar6 = (float)CoreEngine_PerformanceMonitor(0);
    cVar1 = 0.0 < fVar6;
    if ((iVar5 == unaff_ESI) || ((bool)cVar1)) {
      unaff_R15B = '\x01';
    }
    if (((iVar5 == unaff_ESI) || ((bool)cVar1)) || (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI)) {
      *(int *)(unaff_RBX + 0x1ca4) = unaff_ESI;
      SystemFunction_000180123e90(unaff_ESI);
      if (((iVar5 == unaff_ESI) || (cVar1 != '\0')) && ((unaff_EBP >> 0xd & 1) == 0)) {
        GenericFunction_180123f30();
      }
      *(int32_t *)(unaff_RBX + 0x1b44) = 0xf;
    }
  }
  uVar2 = 0;
  if (*(int *)(unaff_RBX + 0x1b2c) == unaff_ESI) {
    if (*(int *)(unaff_RBX + 0x1b60) == 1) {
      if (*(char *)(unaff_RBX + 0x1b3c) != cVar3) {
        fVar6 = local_buffer_80[1];
        *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *local_buffer_80;
        *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar6;
      }
      if (*(char *)(unaff_RBX + 0x120) == cVar3) {
        if (((unaff_R12B != '\0') && ((unaff_EBP & 2) != 0)) &&
           ((((unaff_EBP & 1) == 0 ||
             (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
              *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))) &&
            (*(char *)(unaff_RBX + 0x1dd0) == cVar3)))) {
          unaff_R15B = '\x01';
        }
        *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
        if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
          *(int32_t *)(unaff_RBX + 0x1b38) = uVar4;
          *(char *)(unaff_RBX + 0x1b3e) = cVar3;
        }
        *(int32_t *)(unaff_RBX + 0x1b2c) = uVar4;
        *(int32_t *)(unaff_RBX + 0x1b44) = uVar4;
        *(char *)(unaff_RBX + 0x1b3d) = cVar3;
        *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      if ((unaff_EBP >> 0xd & 1) == 0) {
        *(int8_t *)(unaff_RBX + 0x1d06) = 1;
      }
    }
    else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = uVar4;
        *(char *)(unaff_RBX + 0x1b3e) = cVar3;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = uVar4;
      *(int32_t *)(unaff_RBX + 0x1b44) = uVar4;
      *(char *)(unaff_RBX + 0x1b3d) = cVar3;
      *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
  }
  if (local_buffer_90 != (char *)0x0) {
    *local_buffer_90 = unaff_R12B;
  }
  if (local_buffer_98 != (int8_t *)0x0) {
    *local_buffer_98 = uVar2;
  }
  return unaff_R15B;
}
int8_t GenericFunction_18010f58d(uint64_t param_1,int8_t param_2)
{
  float fVar1;
  int8_t unaff_10000020;
  int64_t unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  char cVar2;
  uint64_t unaff_RDI;
  char unaff_R12B;
  int8_t unaff_R15B;
  float *local_buffer_80;
  char *local_buffer_90;
  int8_t *local_buffer_98;
  int32_t uVar3;
  uVar3 = (int32_t)unaff_RDI;
  cVar2 = (char)unaff_RDI;
  if (*(int *)(unaff_RBX + 0x1b60) == 1) {
    if (*(char *)(unaff_RBX + 0x1b3c) != cVar2) {
      fVar1 = local_buffer_80[1];
      *(float *)(unaff_RBX + 0x1b48) = *(float *)(unaff_RBX + 0x118) - *local_buffer_80;
      *(float *)(unaff_RBX + 0x1b4c) = *(float *)(unaff_RBX + 0x11c) - fVar1;
    }
    if (*(char *)(unaff_RBX + 0x120) == cVar2) {
      if (((unaff_R12B != '\0') && ((unaff_EBP & 2) != 0)) &&
         (((unaff_EBP & 1) == 0 ||
          (*(float *)(unaff_RBX + 0x438) <= *(float *)(unaff_RBX + 0x90) &&
           *(float *)(unaff_RBX + 0x90) != *(float *)(unaff_RBX + 0x438))))) {
        unaff_R15B = unaff_10000020;
        if (*(char *)(unaff_RBX + 0x1dd0) == cVar2) {
          unaff_R15B = 1;
        }
      }
      *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
      if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = uVar3;
        *(char *)(unaff_RBX + 0x1b3e) = cVar2;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = uVar3;
      *(int32_t *)(unaff_RBX + 0x1b44) = uVar3;
      *(char *)(unaff_RBX + 0x1b3d) = cVar2;
      *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
    }
    else {
      param_2 = 1;
    }
    if ((unaff_EBP >> 0xd & 1) == 0) {
      *(int8_t *)(unaff_RBX + 0x1d06) = 1;
    }
  }
  else if ((*(int *)(unaff_RBX + 0x1b60) == 2) && (*(int *)(unaff_RBX + 0x1ca8) != unaff_ESI)) {
    *(bool *)(unaff_RBX + 0x1b3c) = *(int *)(unaff_RBX + 0x1b2c) != 0;
    if (*(int *)(unaff_RBX + 0x1b2c) != 0) {
      *(int32_t *)(unaff_RBX + 0x1b38) = uVar3;
      *(char *)(unaff_RBX + 0x1b3e) = cVar2;
    }
    *(int32_t *)(unaff_RBX + 0x1b2c) = uVar3;
    *(int32_t *)(unaff_RBX + 0x1b44) = uVar3;
    *(char *)(unaff_RBX + 0x1b3d) = cVar2;
    *(uint64_t *)(unaff_RBX + 0x1b50) = unaff_RDI;
  }
  if (local_buffer_90 != (char *)0x0) {
    *local_buffer_90 = unaff_R12B;
  }
  if (local_buffer_98 != (int8_t *)0x0) {
    *local_buffer_98 = param_2;
  }
  return unaff_R15B;
}
int8_t GenericFunction_18010f6c2(uint64_t param_1,int8_t param_2)
{
  int8_t *in_RAX;
  int8_t unaff_R12B;
  int8_t unaff_R15B;
  int8_t *local_buffer_98;
  *in_RAX = unaff_R12B;
  if (local_buffer_98 != (int8_t *)0x0) {
    *local_buffer_98 = param_2;
  }
  return unaff_R15B;
}
int8_t GenericFunction_18010f6d7(uint64_t param_1,int8_t param_2)
{
  int8_t *in_RAX;
  int8_t unaff_R15B;
  *in_RAX = param_2;
  return unaff_R15B;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18010f6f0(char *param_1,uint64_t *param_2,uint param_3)
{
  uint *puVar1;
  float fVar2;
  float *pfVar3;
  int64_t lVar4;
  byte bVar5;
  int iVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  char *pcVar10;
  int64_t lVar11;
  float fVar12;
  float fStackX_20;
  float fStackX_24;
  uint64_t local_var_f48;
  uint64_t uVar13;
  int32_t uVar14;
  char acStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uVar14 = (int32_t)((uint64_t)local_var_f48 >> 0x20);
  uVar8 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar8 + 0xb1) = 1;
  lVar11 = *(int64_t *)(lVar4 + 0x1af8);
  if (*(char *)(lVar11 + 0xb4) == '\0') {
    iVar6 = SystemCore_HandleInput(param_1,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar11 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar11 + 0x218) * 4));
    if (*(int *)(lVar4 + 0x1b2c) == iVar6) {
      *(int *)(lVar4 + 0x1b34) = iVar6;
    }
    if (*(int *)(lVar4 + 0x1b30) == iVar6) {
      *(int8_t *)(lVar4 + 0x1b3f) = 1;
    }
    pcVar10 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar10 != '\0') {
        if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
           (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar3 = *(float **)(lVar4 + 0x19f0);
    fVar2 = *(float *)(lVar4 + 0x19f8);
    if (param_1 == pcVar10) {
      fStack_90 = 0.0;
      fStack_8c = fVar2;
    }
    else {
      uVar13 = CONCAT44(uVar14,0xbf800000);
      SystemCore_StateController(pfVar3,&fStackX_20,fVar2,0x7f7fffff,uVar13,param_1,pcVar10,0);
      uVar14 = (int32_t)((uint64_t)uVar13 >> 0x20);
      fVar12 = fStackX_20;
      if (0.0 < fStackX_20) {
        fVar12 = fStackX_20 - fVar2 / *pfVar3;
      }
      fStack_90 = (float)(int)(fVar12 + 0.95);
      fStack_8c = fStackX_24;
    }
    fVar2 = *(float *)(lVar11 + 0x100);
    fVar12 = *(float *)(lVar11 + 0x104);
    if ((param_3 >> 9 & 1) != 0) {
      if (*(float *)(lVar4 + 0x1660) < *(float *)(lVar11 + 0x128)) {
        fVar12 = fVar12 + (*(float *)(lVar11 + 0x128) - *(float *)(lVar4 + 0x1660));
      }
    }
    GenericFunction_180124550(&fStackX_20,*param_2,
                  *(float *)(lVar4 + 0x165c) + *(float *)(lVar4 + 0x165c) + fStack_90,
                  *(float *)(lVar4 + 0x1660) + *(float *)(lVar4 + 0x1660) + fStack_8c);
    fStack_70 = fStackX_20 + fVar2;
    fStack_6c = fStackX_24 + fVar12;
    fStack_78 = fVar2;
    fStack_74 = fVar12;
    SystemFunction_000180124080(&fStackX_20);
    uVar8 = Memory_GarbageCollector(&fStack_78,iVar6,0);
    if ((char)uVar8 != '\0') {
      uVar9 = param_3 | 1;
      if ((*(uint *)(lVar11 + 0x1a8) & 2) == 0) {
        uVar9 = param_3;
      }
      uVar13 = CONCAT44(uVar14,uVar9);
      bVar5 = SystemCore_Formatter(&fStack_78,iVar6,&fStackX_20,acStack_98,uVar13);
      uVar14 = (int32_t)((uint64_t)uVar13 >> 0x20);
      if (bVar5 != 0) {
        *(int8_t *)(lVar4 + 0x1b3e) = 1;
        puVar1 = (uint *)(*(int64_t *)(lVar4 + 0x1af8) + 0x148);
        *puVar1 = *puVar1 | 4;
      }
      if ((acStack_98[0] == '\0') || (fStackX_20._0_1_ == '\0')) {
        lVar11 = (uint64_t)(fStackX_20._0_1_ != '\0') + 0x15;
      }
      else {
        lVar11 = 0x17;
      }
      pfVar3 = (float *)(lVar4 + 0x1628 + (lVar11 + 10) * 0x10);
      fStack_88 = *pfVar3;
      fStack_84 = pfVar3[1];
      fStack_80 = pfVar3[2];
      fStack_7c = pfVar3[3] * *(float *)(lVar4 + 0x1628);
      uVar7 = SystemFunction_000180121e20(&fStack_88);
      if (iVar6 == *(int *)(lVar4 + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_78,1,lVar4);
      }
      SystemCore_ResourceManager(CONCAT44(fStack_74,fStack_78),CONCAT44(fStack_6c,fStack_70),uVar7,1,
                    CONCAT44(uVar14,*(int32_t *)(lVar4 + 0x1664)));
      lVar11 = SYSTEM_DATA_MANAGER_A;
      fStack_88 = fStack_70 - *(float *)(lVar4 + 0x165c);
      fStack_84 = fStack_6c - *(float *)(lVar4 + 0x1660);
      fStackX_20 = *(float *)(lVar4 + 0x165c) + fStack_78;
      fStackX_24 = *(float *)(lVar4 + 0x1660) + fStack_74;
      pcVar10 = param_1;
      if (param_1 != (char *)0xffffffffffffffff) {
        do {
          if ((*pcVar10 == '\0') || ((*pcVar10 == '#' && (pcVar10[1] == '#')))) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 != (char *)0xffffffffffffffff);
      }
      if (((int)pcVar10 != (int)param_1) &&
         (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStackX_20,
                        &fStack_88,param_1,pcVar10,&fStack_90,lVar4 + 0x16a4,&fStack_78),
         *(char *)(lVar11 + 0x2e38) != '\0')) {
        SystemCore_ThreadController(&fStackX_20,param_1,pcVar10);
      }
      return (uint64_t)bVar5;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18010f750(int32_t param_1,uint64_t param_2)
{
  uint *puVar1;
  int32_t *puVar2;
  float fVar3;
  float *pfVar4;
  int32_t uVar5;
  byte bVar6;
  int iVar7;
  int32_t uVar8;
  int64_t in_RAX;
  uint64_t uVar9;
  uint uVar10;
  int64_t in_RCX;
  char *pcVar11;
  int64_t lVar12;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  uint unaff_R13D;
  char *unaff_R14;
  float fVar13;
  int32_t unaff_XMM7_Da;
  float fVar14;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar15;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  uint64_t local_var_20;
  uint64_t uVar16;
  int32_t uVar17;
  uVar17 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  iVar7 = SystemCore_HandleInput(param_1,param_2,*(int32_t *)(in_RAX + -4 + in_RCX * 4));
  if (*(int *)(unaff_RSI + 0x1b2c) == iVar7) {
    *(int *)(unaff_RSI + 0x1b34) = iVar7;
  }
  if (*(int *)(unaff_RSI + 0x1b30) == iVar7) {
    *(int8_t *)(unaff_RSI + 0x1b3f) = 1;
  }
  pcVar11 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar11 != '\0') {
      if (((*pcVar11 == '#') && (pcVar11[1] == '#')) ||
         (pcVar11 = pcVar11 + 1, pcVar11 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar4 = *(float **)(unaff_RSI + 0x19f0);
  fVar14 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_R14 == pcVar11) {
    fVar13 = 0.0;
  }
  else {
    uVar16 = CONCAT44(uVar17,0xbf800000);
    SystemCore_StateController(pfVar4,unaff_RBP + 0x7f,fVar14,0x7f7fffff,uVar16);
    uVar17 = (int32_t)((uint64_t)uVar16 >> 0x20);
    fVar13 = *(float *)(unaff_RBP + 0x7f);
    if (0.0 < fVar13) {
      fVar13 = fVar13 - fVar14 / *pfVar4;
    }
    fVar14 = *(float *)(unaff_RBP + 0x83);
    fVar13 = (float)(int)(fVar13 + 0.95);
  }
  fVar3 = *(float *)(unaff_RDI + 0x100);
  fVar15 = *(float *)(unaff_RDI + 0x104);
  *(float *)(unaff_RBP + -0x2d) = fVar14;
  *(float *)(unaff_RBP + -0x31) = fVar13;
  if ((unaff_R13D >> 9 & 1) != 0) {
    if (*(float *)(unaff_RSI + 0x1660) < *(float *)(unaff_RDI + 0x128)) {
      fVar15 = fVar15 + (*(float *)(unaff_RDI + 0x128) - *(float *)(unaff_RSI + 0x1660));
    }
  }
  GenericFunction_180124550(unaff_RBP + 0x7f,**(uint64_t **)(unaff_RBP + 0x6f),
                *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RSI + 0x165c) + fVar13,
                *(float *)(unaff_RSI + 0x1660) + *(float *)(unaff_RSI + 0x1660) + fVar14);
  *(float *)(unaff_RBP + -0x19) = fVar3;
  *(float *)(unaff_RBP + -0x15) = fVar15;
  *(float *)(unaff_RBP + -0x11) = *(float *)(unaff_RBP + 0x7f) + fVar3;
  *(float *)(unaff_RBP + -0xd) = *(float *)(unaff_RBP + 0x83) + fVar15;
  SystemFunction_000180124080(unaff_RBP + 0x7f);
  uVar9 = Memory_GarbageCollector(unaff_RBP + -0x19,iVar7,0);
  if ((char)uVar9 == '\0') {
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    uVar10 = unaff_R13D | 1;
    if ((*(uint *)(unaff_RDI + 0x1a8) & 2) == 0) {
      uVar10 = unaff_R13D;
    }
    uVar16 = CONCAT44(uVar17,uVar10);
    bVar6 = SystemCore_Formatter(unaff_RBP + -0x19,iVar7,unaff_RBP + 0x7f,unaff_RBP + -0x39,uVar16);
    uVar17 = (int32_t)((uint64_t)uVar16 >> 0x20);
    if (bVar6 != 0) {
      *(int8_t *)(unaff_RSI + 0x1b3e) = 1;
      puVar1 = (uint *)(*(int64_t *)(unaff_RSI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if ((*(char *)(unaff_RBP + -0x39) == '\0') || (*(char *)(unaff_RBP + 0x7f) == '\0')) {
      lVar12 = (uint64_t)(*(char *)(unaff_RBP + 0x7f) != '\0') + 0x15;
    }
    else {
      lVar12 = 0x17;
    }
    puVar2 = (int32_t *)(unaff_RSI + 0x1628 + (lVar12 + 10) * 0x10);
    uVar8 = puVar2[1];
    uVar5 = puVar2[2];
    fVar14 = (float)puVar2[3];
    *(int32_t *)(unaff_RBP + -0x29) = *puVar2;
    *(int32_t *)(unaff_RBP + -0x25) = uVar8;
    *(int32_t *)(unaff_RBP + -0x21) = uVar5;
    *(float *)(unaff_RBP + -0x1d) = fVar14;
    *(float *)(unaff_RBP + -0x1d) = fVar14 * *(float *)(unaff_RSI + 0x1628);
    uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x29);
    if (iVar7 == *(int *)(unaff_RSI + 0x1ca0)) {
      UtilitiesSystem_Validator(unaff_RBP + -0x19,1);
    }
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -0x19),*(uint64_t *)(unaff_RBP + -0x11),uVar8,1,
                  CONCAT44(uVar17,*(int32_t *)(unaff_RSI + 0x1664)));
    fVar14 = *(float *)(unaff_RSI + 0x1660);
    fVar13 = *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RBP + -0x19);
    *(float *)(unaff_RBP + -0x29) = *(float *)(unaff_RBP + -0x11) - *(float *)(unaff_RSI + 0x165c);
    *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0xd) - fVar14;
    *(float *)(unaff_RBP + 0x7f) = fVar13;
    *(float *)(unaff_RBP + 0x83) = fVar14 + *(float *)(unaff_RBP + -0x15);
    lVar12 = SYSTEM_DATA_MANAGER_A;
    pcVar11 = unaff_R14;
    if (unaff_R14 != (char *)0xffffffffffffffff) {
      do {
        if ((*pcVar11 == '\0') || ((*pcVar11 == '#' && (pcVar11[1] == '#')))) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != (char *)0xffffffffffffffff);
    }
    if (((int)pcVar11 != (int)unaff_R14) &&
       (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),
                      unaff_RBP + 0x7f,unaff_RBP + -0x29,fVar13,pcVar11),
       *(char *)(lVar12 + 0x2e38) != '\0')) {
      SystemCore_ThreadController(unaff_RBP + 0x7f);
    }
    uVar9 = (uint64_t)bVar6;
  }
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
char GenericFunction_18010f90d(void)
{
  uint *puVar1;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  char cVar5;
  int32_t uVar6;
  uint uVar7;
  uint64_t unaff_RBX;
  int64_t lVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char *pcVar9;
  uint unaff_R13D;
  char *unaff_R14;
  int unaff_R15D;
  float fVar10;
  uint64_t local_var_20;
  uint64_t uVar11;
  int32_t uVar12;
  uVar7 = unaff_R13D | 1;
  if ((*(uint *)(unaff_RDI + 0x1a8) & 2) == 0) {
    uVar7 = unaff_R13D;
  }
  uVar11 = CONCAT44((int)((uint64_t)local_var_20 >> 0x20),uVar7);
  cVar5 = SystemCore_Formatter(unaff_RBP + -0x19,unaff_R15D,unaff_RBP + 0x7f,unaff_RBP + -0x39,uVar11);
  uVar12 = (int32_t)((uint64_t)uVar11 >> 0x20);
  if (cVar5 != '\0') {
    *(int8_t *)(unaff_RSI + 0x1b3e) = 1;
    puVar1 = (uint *)(*(int64_t *)(unaff_RSI + 0x1af8) + 0x148);
    *puVar1 = *puVar1 | 4;
  }
  if ((*(char *)(unaff_RBP + -0x39) == (char)unaff_RBX) || (*(char *)(unaff_RBP + 0x7f) == '\0')) {
    lVar8 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),*(char *)(unaff_RBP + 0x7f) != '\0') + 0x15;
  }
  else {
    lVar8 = 0x17;
  }
  puVar2 = (int32_t *)(unaff_RSI + 0x1628 + (lVar8 + 10) * 0x10);
  uVar6 = puVar2[1];
  uVar4 = puVar2[2];
  fVar3 = (float)puVar2[3];
  *(int32_t *)(unaff_RBP + -0x29) = *puVar2;
  *(int32_t *)(unaff_RBP + -0x25) = uVar6;
  *(int32_t *)(unaff_RBP + -0x21) = uVar4;
  *(float *)(unaff_RBP + -0x1d) = fVar3;
  *(float *)(unaff_RBP + -0x1d) = fVar3 * *(float *)(unaff_RSI + 0x1628);
  uVar6 = SystemFunction_000180121e20(unaff_RBP + -0x29);
  if (unaff_R15D == *(int *)(unaff_RSI + 0x1ca0)) {
    UtilitiesSystem_Validator(unaff_RBP + -0x19,1);
  }
  SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -0x19),*(uint64_t *)(unaff_RBP + -0x11),uVar6,1,
                CONCAT44(uVar12,*(int32_t *)(unaff_RSI + 0x1664)));
  fVar3 = *(float *)(unaff_RSI + 0x1660);
  fVar10 = *(float *)(unaff_RSI + 0x165c) + *(float *)(unaff_RBP + -0x19);
  *(float *)(unaff_RBP + -0x29) = *(float *)(unaff_RBP + -0x11) - *(float *)(unaff_RSI + 0x165c);
  *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0xd) - fVar3;
  *(float *)(unaff_RBP + 0x7f) = fVar10;
  *(float *)(unaff_RBP + 0x83) = fVar3 + *(float *)(unaff_RBP + -0x15);
  lVar8 = SYSTEM_DATA_MANAGER_A;
  pcVar9 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar9 != '\0') {
      if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
         (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (((int)pcVar9 != (int)unaff_R14) &&
     (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),unaff_RBP + 0x7f
                    ,unaff_RBP + -0x29,fVar10,pcVar9), *(char *)(lVar8 + 0x2e38) != '\0')) {
    SystemCore_ThreadController(unaff_RBP + 0x7f);
  }
  return cVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18010fad0(uint64_t param_1,int32_t param_2,uint64_t param_3,int32_t param_4)
{
  float *pfVar1;
  int64_t lVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  int32_t astack_special_x_20 [2];
  char acStack_78 [8];
  uint64_t local_var_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  lVar2 = SYSTEM_DATA_MANAGER_A;
  uVar7 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar7 + 0xb1) = 1;
  lVar8 = *(int64_t *)(lVar2 + 0x1af8);
  if (*(char *)(lVar8 + 0xb4) == '\0') {
    astack_special_x_20[0] = param_4;
    local_var_70 = param_3;
    iVar5 = SystemCore_HandleInput(param_1,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar8 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar8 + 0x218) * 4));
    if (*(int *)(lVar2 + 0x1b2c) == iVar5) {
      *(int *)(lVar2 + 0x1b34) = iVar5;
    }
    if (*(int *)(lVar2 + 0x1b30) == iVar5) {
      *(int8_t *)(lVar2 + 0x1b3f) = 1;
    }
    fVar9 = *(float *)(lVar2 + 0x1660);
    fStack_58 = *(float *)(lVar8 + 0x100);
    fStack_54 = *(float *)(lVar8 + 0x104);
    fVar3 = local_var_70._4_4_;
    fVar10 = (float)local_var_70;
    fStack_50 = fStack_58 + (float)local_var_70;
    fStack_4c = fStack_54 + local_var_70._4_4_;
    if (local_var_70._4_4_ < fVar9 + fVar9 + *(float *)(lVar2 + 0x19f8)) {
      fVar9 = 0.0;
    }
    fStack_68 = fStack_50 - fStack_58;
    fStack_64 = fStack_4c - fStack_54;
    SystemFunction_000180124080(&fStack_68,fVar9);
    uVar7 = Memory_GarbageCollector(&fStack_58,iVar5,0);
    if ((char)uVar7 != '\0') {
      bVar4 = SystemCore_Formatter(&fStack_58,iVar5,astack_special_x_20,acStack_78,5);
      if ((acStack_78[0] == '\0') || ((char)astack_special_x_20[0] == '\0')) {
        lVar8 = (uint64_t)((char)astack_special_x_20[0] != '\0') + 0x15;
      }
      else {
        lVar8 = 0x17;
      }
      pfVar1 = (float *)(lVar2 + 0x1628 + (lVar8 + 10) * 0x10);
      fStack_68 = *pfVar1;
      fStack_64 = pfVar1[1];
      fStack_60 = pfVar1[2];
      fStack_5c = pfVar1[3] * *(float *)(lVar2 + 0x1628);
      uVar6 = SystemFunction_000180121e20(&fStack_68);
      if (iVar5 == *(int *)(lVar2 + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_58,1,lVar2);
      }
      SystemCore_ResourceManager(CONCAT44(fStack_54,fStack_58),CONCAT44(fStack_4c,fStack_50),uVar6,1,
                    *(int32_t *)(lVar2 + 0x1664));
      fVar10 = (fVar10 - *(float *)(lVar2 + 0x19f8)) * 0.5;
      fVar9 = (fVar3 - *(float *)(lVar2 + 0x19f8)) * 0.5;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      GenericFunction_180122c80(CONCAT44(fVar9 + fStack_54,fVar10 + fStack_58),param_2,0x3f800000);
      return (uint64_t)bVar4;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}
int8_t GenericFunction_18010fbff(void)
{
  int32_t *puVar1;
  int8_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int unaff_EDI;
  int8_t in_R9B;
  int32_t unaff_R14D;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float fVar6;
  float unaff_XMM8_Da;
  char local_var_30;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint64_t local_buffer_58;
  char local_buffer_c8;
  uVar2 = SystemCore_Formatter(&local_buffer_00000050,unaff_EDI,&local_buffer_000000c8,in_R9B,5);
  if ((local_var_30 == '\0') || (local_buffer_c8 == '\0')) {
    lVar4 = (uint64_t)(local_buffer_c8 != '\0') + 0x15;
  }
  else {
    lVar4 = 0x17;
  }
  puVar1 = (int32_t *)(unaff_RBX + 0x1628 + (lVar4 + 10) * 0x10);
  local_var_40 = *puVar1;
  local_buffer_44 = puVar1[1];
  local_var_48 = puVar1[2];
  fStack000000000000004c = (float)puVar1[3] * *(float *)(unaff_RBX + 0x1628);
  uVar3 = SystemFunction_000180121e20(&local_buffer_00000040);
  if (unaff_EDI == *(int *)(unaff_RBX + 0x1ca0)) {
    UtilitiesSystem_Validator(&local_buffer_00000050,1);
  }
  SystemCore_ResourceManager(CONCAT44(fStack0000000000000054,fStack0000000000000050),local_buffer_58,uVar3,1,
                *(int32_t *)(unaff_RBX + 0x1664));
  fVar6 = (unaff_XMM7_Da - *(float *)(unaff_RBX + 0x19f8)) * 0.5;
  fVar5 = (unaff_XMM6_Da - *(float *)(unaff_RBX + 0x19f8)) * 0.5;
  if (fVar6 <= unaff_XMM8_Da) {
    fVar6 = unaff_XMM8_Da;
  }
  if (fVar5 <= unaff_XMM8_Da) {
    fVar5 = unaff_XMM8_Da;
  }
  GenericFunction_180122c80(CONCAT44(fVar5 + fStack0000000000000054,fVar6 + fStack0000000000000050),unaff_R14D,
                0x3f800000);
  return uVar2;
}
int8_t GenericFunction_18010fd19(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t GenericFunction_18010fd40(int32_t param_1,float *param_2,float param_3)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int8_t uVar5;
  uint uVar6;
  int32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStackX_10;
  float fStackX_14;
  char acStackX_18 [8];
  float fStackX_20;
  float fStackX_24;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  lVar9 = SYSTEM_DATA_MANAGER_A;
  fStack_90 = *param_2 + param_3;
  lVar2 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  fStack_8c = param_2[1] + param_3;
  fStack_98 = *param_2 - param_3;
  fStack_94 = param_2[1] - param_3;
  cVar4 = Memory_GarbageCollector(&fStack_98,param_1,0);
  uVar5 = SystemCore_Formatter(&fStack_98,param_1,acStackX_18,&fStackX_10,0);
  if (cVar4 != '\0') {
    fVar11 = (fStack_98 + fStack_90) * 0.5;
    fVar13 = (fStack_94 + fStack_8c) * 0.5;
    fStackX_20 = fVar11;
    fStackX_24 = fVar13;
    if (acStackX_18[0] != '\0') {
      lVar3 = *(int64_t *)(lVar2 + 0x2e8);
      lVar8 = 0x200;
      if (fStackX_10._0_1_ != '\0') {
        lVar8 = 0x210;
      }
      pfVar1 = (float *)(lVar8 + 0x1628 + lVar9);
      fStack_98 = *pfVar1;
      fStack_94 = pfVar1[1];
      fStack_90 = pfVar1[2];
      fStack_8c = pfVar1[3] * *(float *)(lVar9 + 0x1628);
      uVar6 = SystemFunction_000180121e20(&fStack_98);
      if ((uVar6 & 0xff000000) != 0) {
        fVar10 = param_3;
        if (param_3 <= 2.0) {
          fVar10 = 2.0;
        }
        DataStructure_93860(lVar3,&fStackX_20,fVar10,0,0x40b2b8c3,8);
        DataStructure_93190(lVar3,*(uint64_t *)(lVar3 + 0x88),*(int32_t *)(lVar3 + 0x80),uVar6);
        lVar9 = SYSTEM_DATA_MANAGER_A;
        *(int32_t *)(lVar3 + 0x80) = 0;
      }
    }
    fStack_98 = *(float *)(lVar9 + 0x16c8);
    fStack_94 = *(float *)(lVar9 + 0x16cc);
    fStack_90 = *(float *)(lVar9 + 0x16d0);
    fVar14 = param_3 * 0.7071 - 1.0;
    fStack_8c = *(float *)(lVar9 + 0x16d4) * *(float *)(lVar9 + 0x1628);
    uVar7 = SystemFunction_000180121e20(&fStack_98);
    fVar12 = (fVar11 - 0.5) + fVar14;
    fVar10 = (fVar11 - 0.5) - fVar14;
    fVar11 = (fVar13 - 0.5) - fVar14;
    fVar14 = (fVar13 - 0.5) + fVar14;
    fStackX_10 = fVar10;
    fStackX_14 = fVar11;
    fStackX_20 = fVar12;
    fStackX_24 = fVar14;
    SystemCore_SystemMonitor(*(uint64_t *)(lVar2 + 0x2e8),&fStackX_20,&fStackX_10,uVar7,0x3f800000);
    fStackX_10 = fVar10;
    fStackX_14 = fVar14;
    fStackX_20 = fVar12;
    fStackX_24 = fVar11;
    SystemCore_SystemMonitor(*(uint64_t *)(lVar2 + 0x2e8),&fStackX_20,&fStackX_10,uVar7,0x3f800000);
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t GenericFunction_18010fde5(void)
{
  int32_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int8_t unaff_R14B;
  int64_t unaff_R15;
  bool in_ZF;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM11_Da;
  float fVar11;
  int32_t uVar12;
  fVar8 = (*(float *)(unaff_RBP + -0x39) + *(float *)(unaff_RBP + -0x31)) * 0.5;
  fVar10 = (*(float *)(unaff_RBP + -0x35) + *(float *)(unaff_RBP + -0x2d)) * 0.5;
  *(float *)(unaff_RBP + 0x7f) = fVar8;
  *(float *)(unaff_RBP + 0x83) = fVar10;
  if (!in_ZF) {
    lVar2 = *(int64_t *)(unaff_R15 + 0x2e8);
    lVar6 = 0x200;
    if (*(char *)(unaff_RBP + 0x6f) != '\0') {
      lVar6 = 0x210;
    }
    puVar1 = (int32_t *)(lVar6 + 0x1628 + unaff_RSI);
    uVar12 = puVar1[1];
    uVar4 = puVar1[2];
    fVar7 = (float)puVar1[3];
    *(int32_t *)(unaff_RBP + -0x39) = *puVar1;
    *(int32_t *)(unaff_RBP + -0x35) = uVar12;
    *(int32_t *)(unaff_RBP + -0x31) = uVar4;
    *(float *)(unaff_RBP + -0x2d) = fVar7;
    *(float *)(unaff_RBP + -0x2d) = fVar7 * *(float *)(unaff_RSI + 0x1628);
    uVar5 = SystemFunction_000180121e20(unaff_RBP + -0x39);
    if ((uVar5 & 0xff000000) != 0) {
      uVar12 = 0x40b2b8c3;
      DataStructure_93860(lVar2,unaff_RBP + 0x7f);
      DataStructure_93190(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar5,uVar12);
      unaff_RSI = SYSTEM_DATA_MANAGER_A;
      *(int32_t *)(lVar2 + 0x80) = 0;
    }
  }
  uVar12 = *(int32_t *)(unaff_RSI + 0x16cc);
  uVar4 = *(int32_t *)(unaff_RSI + 0x16d0);
  fVar7 = *(float *)(unaff_RSI + 0x16d4);
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RSI + 0x16c8);
  *(int32_t *)(unaff_RBP + -0x35) = uVar12;
  *(int32_t *)(unaff_RBP + -0x31) = uVar4;
  *(float *)(unaff_RBP + -0x2d) = fVar7;
  fVar11 = unaff_XMM11_Da * 0.7071 - 1.0;
  *(float *)(unaff_RBP + -0x2d) = fVar7 * *(float *)(unaff_RSI + 0x1628);
  uVar12 = SystemFunction_000180121e20(unaff_RBP + -0x39);
  uVar3 = *(uint64_t *)(unaff_R15 + 0x2e8);
  fVar8 = fVar8 - 0.5;
  fVar10 = fVar10 - 0.5;
  fVar9 = fVar8 + fVar11;
  fVar8 = fVar8 - fVar11;
  fVar7 = fVar10 - fVar11;
  fVar10 = fVar10 + fVar11;
  *(float *)(unaff_RBP + 0x7f) = fVar9;
  *(float *)(unaff_RBP + 0x6f) = fVar8;
  *(float *)(unaff_RBP + 0x73) = fVar7;
  *(float *)(unaff_RBP + 0x83) = fVar10;
  SystemCore_SystemMonitor(uVar3,unaff_RBP + 0x7f,unaff_RBP + 0x6f,uVar12,0x3f800000);
  uVar3 = *(uint64_t *)(unaff_R15 + 0x2e8);
  *(float *)(unaff_RBP + 0x6f) = fVar8;
  *(float *)(unaff_RBP + 0x73) = fVar10;
  *(float *)(unaff_RBP + 0x7f) = fVar9;
  *(float *)(unaff_RBP + 0x83) = fVar7;
  SystemCore_SystemMonitor(uVar3,unaff_RBP + 0x7f,unaff_RBP + 0x6f,uVar12,0x3f800000);
  return unaff_R14B;
}
int8_t GenericFunction_18010ffdc(void)
{
  int8_t unaff_R14B;
  return unaff_R14B;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t GenericFunction_180110000(int32_t param_1,float *param_2,int64_t param_3)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int8_t uVar9;
  int32_t uVar10;
  int iVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t uVar14;
  float *pfVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  uint64_t stack_special_x_20;
  uint64_t local_var_e8;
  float fStack_e0;
  float fStack_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  float fStack_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int8_t local_var_a0;
  uint8_t local_var_9f;
  uint64_t local_var_98;
  int64_t lStack_90;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  lVar5 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  fStack_e0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x165c) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x165c) +
              *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) + *param_2;
  local_var_e8 = *(uint64_t *)param_2;
  fStack_dc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) + param_2[1] +
              *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660);
  Memory_GarbageCollector(&local_var_e8,param_1,0);
  uVar9 = SystemCore_Formatter(&local_var_e8,param_1,&fStackX_10,&fStackX_18,0);
  pfVar15 = (float *)&stack_special_x_20;
  if (param_3 == 0) {
    stack_special_x_20 = 0;
  }
  else {
    stack_special_x_20 = (uint64_t)(uint)(0.5 - (float)(int)(*(float *)(lVar7 + 0x1674) * 0.5));
  }
  if ((fStackX_18._0_1_ == '\0') || (fStackX_10._0_1_ == '\0')) {
    lVar12 = (uint64_t)(fStackX_10._0_1_ != '\0') + 0x15;
  }
  else {
    lVar12 = 0x17;
  }
  puVar2 = (int32_t *)(lVar7 + 0x1628 + (lVar12 + 10) * 0x10);
  local_var_d8 = *puVar2;
  local_var_d4 = puVar2[1];
  local_var_d0 = puVar2[2];
  fStack_cc = (float)puVar2[3] * *(float *)(lVar7 + 0x1628);
  cVar17 = fStackX_18._0_1_;
  cVar16 = fStackX_10._0_1_;
  fStackX_10 = (float)SystemFunction_000180121e20(&local_var_d8);
  iVar18 = 8;
  fVar20 = local_var_e8._4_4_;
  fVar19 = (float)local_var_e8;
  lVar12 = lVar7;
  if ((cVar16 != '\0') || (cVar17 != '\0')) {
    lVar6 = *(int64_t *)(lVar5 + 0x2e8);
    fStackX_18 = (fStack_e0 + (float)local_var_e8) * 0.5 + *pfVar15;
    fStackX_1c = ((fStack_dc + local_var_e8._4_4_) * 0.5 + pfVar15[1]) - 0.5;
    if (((uint)fStackX_10 & 0xff000000) != 0) {
      DataStructure_93860(lVar6,&fStackX_18,*(float *)(lVar7 + 0x19f8) * 0.5 + 1.0,0,0x40b2b8c3,8);
      DataStructure_93190(lVar6,*(uint64_t *)(lVar6 + 0x88),*(int32_t *)(lVar6 + 0x80),fStackX_10);
      lVar12 = SYSTEM_DATA_MANAGER_A;
      *(int32_t *)(lVar6 + 0x80) = 0;
    }
  }
  if (param_3 == 0) {
    uVar14 = 3;
    if (*(char *)(lVar5 + 0xb2) != '\0') {
      uVar14 = 1;
    }
    GenericFunction_180122c80(CONCAT44(fVar20 + *(float *)(lVar7 + 0x1660),fVar19 + *(float *)(lVar7 + 0x165c)),
                  uVar14,0x3f800000);
  }
  else {
    local_var_d8 = *(int32_t *)(lVar12 + 0x16c8);
    local_var_d4 = *(int32_t *)(lVar12 + 0x16cc);
    local_var_d0 = *(int32_t *)(lVar12 + 0x16d0);
    fStack_cc = *(float *)(lVar12 + 0x16d4) * *(float *)(lVar12 + 0x1628);
    uVar10 = SystemFunction_000180121e20(&local_var_d8);
    fVar3 = *(float *)(lVar7 + 0x19f8);
    fVar19 = fVar19 + *(float *)(lVar7 + 0x165c);
    fVar20 = fVar20 + *(float *)(lVar7 + 0x1660);
    uVar14 = *(uint64_t *)(lVar5 + 0x2e8);
    fStackX_10 = fVar3 * 0.7 + fVar19;
    fStackX_18 = fVar3 * 0.1 + fVar19;
    fStackX_14 = fVar3 * 0.3 + fVar20;
    fStackX_1c = fVar3 * 0.15 + fVar20;
    MathInterpolationCalculator0(uVar14,&fStackX_18,&fStackX_10,uVar10,0,0xf);
    DataStructure_981f0(uVar14,CONCAT44(fVar3 * 0.85 + fVar20,fVar3 * 0.4 + fVar19),
                  CONCAT44(fVar3 * 0.4,fVar3 * 0.3));
  }
  if ((((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) != 0) &&
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) ==
        *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x144))) &&
      (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) != '\0')) &&
     (fVar19 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x38) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x38),
     fVar19 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x474) || fVar19 == *(float *)(SYSTEM_DATA_MANAGER_A + 0x474))) {
    if (param_3 != 0) {
      lVar6 = *(int64_t *)(param_3 + 8);
      lVar12 = param_3;
      while (lVar8 = lVar6, lVar8 != 0) {
        lVar12 = lVar8;
        lVar6 = *(int64_t *)(lVar8 + 8);
      }
      if ((*(int64_t *)(lVar12 + 0x80) != param_3) || (*(int64_t *)(lVar12 + 0x78) != 0)) {
        if ((*(float *)(lVar7 + 0x44c) <= *(float *)(lVar7 + 0x19f8) * 2.2) &&
           (*(float *)(lVar7 + 0x450) <= *(float *)(lVar7 + 0x19f8) * 1.5)) {
          return uVar9;
        }
        lVar5 = *(int64_t *)(lVar7 + 0x2df8);
        local_var_98 = 0;
        local_var_b0 = 0;
        local_var_c0 = 0;
        iVar13 = *(int *)(lVar5 + 0x14);
        local_var_b8 = 0;
        local_var_a0 = 0;
        iVar11 = *(int *)(lVar5 + 0x10);
        local_var_a8 = 0xffffffff;
        local_var_a4 = 0x3f000000;
        local_var_c8 = 2;
        lStack_90 = param_3;
        if (iVar11 == iVar13) {
          if (iVar13 != 0) {
            iVar18 = iVar13 + iVar13 / 2;
          }
          iVar13 = iVar11 + 1;
          if (iVar11 + 1 < iVar18) {
            iVar13 = iVar18;
          }
          GenericFunction_18013e6c0(lVar5 + 0x10,iVar13);
          iVar11 = *(int *)(lVar5 + 0x10);
        }
        lVar7 = *(int64_t *)(lVar5 + 0x18);
        lVar12 = (int64_t)iVar11 * 0x40;
        *(uint64_t *)(lVar12 + lVar7) = CONCAT44(local_var_c4,local_var_c8);
        ((uint64_t *)(lVar12 + lVar7))[1] = local_var_c0;
        puVar1 = (uint64_t *)(lVar12 + 0x10 + lVar7);
        *puVar1 = local_var_b8;
        puVar1[1] = local_var_b0;
        puVar1 = (uint64_t *)(lVar12 + 0x20 + lVar7);
        *puVar1 = CONCAT44(local_var_a4,local_var_a8);
        puVar1[1] = CONCAT71(local_var_9f,local_var_a0);
        puVar1 = (uint64_t *)(lVar12 + 0x30 + lVar7);
        *puVar1 = local_var_98;
        puVar1[1] = lStack_90;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        return uVar9;
      }
    }
    uVar10 = *(int32_t *)(lVar7 + 0x1b48);
    uVar4 = *(int32_t *)(lVar7 + 0x1b4c);
    GenericFunction_1801248f0(lVar5);
    *(int32_t *)(lVar7 + 0x1b48) = uVar10;
    *(int32_t *)(lVar7 + 0x1b4c) = uVar4;
  }
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t GenericFunction_180110026(int32_t param_1,float *param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t uVar12;
  uint uVar13;
  int32_t uVar14;
  int iVar15;
  int64_t in_RAX;
  int64_t lVar16;
  int iVar17;
  uint64_t uVar18;
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  float *pfVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  int64_t unaff_R15;
  int32_t unaff_XMM8_Da;
  float fVar23;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar24;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM10_Dd;
  lVar5 = *(int64_t *)(lVar7 + 0x1af8);
  fStack0000000000000038 =
       *(float *)(lVar7 + 0x165c) + *(float *)(lVar7 + 0x165c) +
       *(float *)(lVar7 + 0x19f8) + *param_2;
  _fStack0000000000000030 = *(uint64_t *)param_2;
  *(float *)(unaff_RBP + -0x7d) =
       *(float *)(lVar7 + 0x19f8) + param_2[1] +
       *(float *)(lVar7 + 0x1660) + *(float *)(lVar7 + 0x1660);
  Memory_GarbageCollector(&local_buffer_00000030,param_1,0);
  uVar12 = SystemCore_Formatter(&local_buffer_00000030,unaff_EBX,unaff_RBP + 0x6f,unaff_RBP + 0x77,0);
  pfVar19 = (float *)(unaff_RBP + 0x7f);
  if (unaff_R15 == 0) {
    *(uint64_t *)(unaff_RBP + 0x7f) = 0;
  }
  else {
    fVar23 = *(float *)(lVar7 + 0x1674);
    *(int32_t *)(unaff_RBP + 0x83) = 0;
    *(float *)(unaff_RBP + 0x7f) = 0.5 - (float)(int)(fVar23 * 0.5);
  }
  cVar21 = *(char *)(unaff_RBP + 0x77);
  cVar20 = *(char *)(unaff_RBP + 0x6f);
  if ((cVar21 == '\0') || (cVar20 == '\0')) {
    lVar16 = (uint64_t)(cVar20 != '\0') + 0x15;
  }
  else {
    lVar16 = 0x17;
  }
  puVar2 = (int32_t *)(lVar7 + 0x1628 + (lVar16 + 10) * 0x10);
  uVar14 = puVar2[1];
  uVar4 = puVar2[2];
  fVar23 = (float)puVar2[3];
  *(int32_t *)(unaff_RBP + -0x79) = *puVar2;
  *(int32_t *)(unaff_RBP + -0x75) = uVar14;
  *(int32_t *)(unaff_RBP + -0x71) = uVar4;
  *(float *)(unaff_RBP + -0x6d) = fVar23;
  *(float *)(unaff_RBP + -0x6d) = fVar23 * *(float *)(lVar7 + 0x1628);
  uVar13 = SystemFunction_000180121e20(unaff_RBP + -0x79);
  iVar22 = 8;
  fVar24 = fStack0000000000000034;
  fVar23 = fStack0000000000000030;
  *(uint *)(unaff_RBP + 0x6f) = uVar13;
  lVar16 = lVar7;
  if ((cVar20 != '\0') || (cVar21 != '\0')) {
    lVar6 = *(int64_t *)(lVar5 + 0x2e8);
    fVar3 = pfVar19[1];
    *(float *)(unaff_RBP + 0x77) =
         (fStack0000000000000038 + fStack0000000000000030) * 0.5 + *pfVar19;
    *(float *)(unaff_RBP + 0x7b) =
         ((*(float *)(unaff_RBP + -0x7d) + fStack0000000000000034) * 0.5 + fVar3) - 0.5;
    if ((uVar13 & 0xff000000) != 0) {
      DataStructure_93860(lVar6,unaff_RBP + 0x77,*(float *)(lVar7 + 0x19f8) * 0.5 + 1.0,0,0x40b2b8c3);
      DataStructure_93190(lVar6,*(uint64_t *)(lVar6 + 0x88),*(int32_t *)(lVar6 + 0x80),
                    *(int32_t *)(unaff_RBP + 0x6f));
      lVar16 = SYSTEM_DATA_MANAGER_A;
      *(int32_t *)(lVar6 + 0x80) = 0;
    }
  }
  if (unaff_R15 == 0) {
    uVar18 = 3;
    if (*(char *)(lVar5 + 0xb2) != '\0') {
      uVar18 = 1;
    }
    GenericFunction_180122c80(CONCAT44(fVar24 + *(float *)(lVar7 + 0x1660),fVar23 + *(float *)(lVar7 + 0x165c)),
                  uVar18,0x3f800000);
  }
  else {
    uVar14 = *(int32_t *)(lVar16 + 0x16cc);
    uVar4 = *(int32_t *)(lVar16 + 0x16d0);
    fVar3 = *(float *)(lVar16 + 0x16d4);
    *(int32_t *)(unaff_RBP + -0x79) = *(int32_t *)(lVar16 + 0x16c8);
    *(int32_t *)(unaff_RBP + -0x75) = uVar14;
    *(int32_t *)(unaff_RBP + -0x71) = uVar4;
    *(float *)(unaff_RBP + -0x6d) = fVar3;
    *(float *)(unaff_RBP + -0x6d) = fVar3 * *(float *)(lVar16 + 0x1628);
    uVar14 = SystemFunction_000180121e20(unaff_RBP + -0x79);
    fVar3 = *(float *)(lVar7 + 0x19f8);
    fVar23 = fVar23 + *(float *)(lVar7 + 0x165c);
    fVar24 = fVar24 + *(float *)(lVar7 + 0x1660);
    uVar18 = *(uint64_t *)(lVar5 + 0x2e8);
    *(float *)(unaff_RBP + 0x6f) = fVar3 * 0.7 + fVar23;
    *(float *)(unaff_RBP + 0x77) = fVar3 * 0.1 + fVar23;
    *(float *)(unaff_RBP + 0x73) = fVar3 * 0.3 + fVar24;
    *(float *)(unaff_RBP + 0x7b) = fVar3 * 0.15 + fVar24;
    MathInterpolationCalculator0(uVar18,unaff_RBP + 0x77,unaff_RBP + 0x6f,uVar14,0);
    DataStructure_981f0(uVar18,CONCAT44(fVar3 * 0.85 + fVar24,fVar3 * 0.4 + fVar23),
                  CONCAT44(fVar3 * 0.4,fVar3 * 0.3));
  }
  if ((((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) != 0) &&
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) ==
        *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x144))) &&
      (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) != '\0')) &&
     (fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x38) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x38),
     fVar23 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x474) || fVar23 == *(float *)(SYSTEM_DATA_MANAGER_A + 0x474))) {
    if (unaff_R15 != 0) {
      lVar6 = *(int64_t *)(unaff_R15 + 8);
      lVar16 = unaff_R15;
      while (lVar11 = lVar6, lVar11 != 0) {
        lVar16 = lVar11;
        lVar6 = *(int64_t *)(lVar11 + 8);
      }
      if ((*(int64_t *)(lVar16 + 0x80) != unaff_R15) || (*(int64_t *)(lVar16 + 0x78) != 0)) {
        if ((*(float *)(lVar7 + 0x44c) <= *(float *)(lVar7 + 0x19f8) * 2.2) &&
           (*(float *)(lVar7 + 0x450) <= *(float *)(lVar7 + 0x19f8) * 1.5)) {
          return uVar12;
        }
        lVar5 = *(int64_t *)(lVar7 + 0x2df8);
        *(uint64_t *)(unaff_RBP + -0x39) = 0;
        *(uint64_t *)(unaff_RBP + -0x51) = 0;
        *(uint64_t *)(unaff_RBP + -0x61) = 0;
        iVar17 = *(int *)(lVar5 + 0x14);
        *(uint64_t *)(unaff_RBP + -0x59) = 0;
        *(int8_t *)(unaff_RBP + -0x41) = 0;
        iVar15 = *(int *)(lVar5 + 0x10);
        *(int32_t *)(unaff_RBP + -0x49) = 0xffffffff;
        *(int32_t *)(unaff_RBP + -0x45) = 0x3f000000;
        *(int32_t *)(unaff_RBP + -0x69) = 2;
        *(int64_t *)(unaff_RBP + -0x31) = unaff_R15;
        if (iVar15 == iVar17) {
          if (iVar17 != 0) {
            iVar22 = iVar17 + iVar17 / 2;
          }
          iVar17 = iVar15 + 1;
          if (iVar15 + 1 < iVar22) {
            iVar17 = iVar22;
          }
          GenericFunction_18013e6c0(lVar5 + 0x10,iVar17);
          iVar15 = *(int *)(lVar5 + 0x10);
        }
        uVar18 = *(uint64_t *)(unaff_RBP + -0x61);
        uVar8 = *(uint64_t *)(unaff_RBP + -0x59);
        uVar9 = *(uint64_t *)(unaff_RBP + -0x51);
        lVar7 = *(int64_t *)(lVar5 + 0x18);
        lVar16 = (int64_t)iVar15 * 0x40;
        *(uint64_t *)(lVar16 + lVar7) = *(uint64_t *)(unaff_RBP + -0x69);
        ((uint64_t *)(lVar16 + lVar7))[1] = uVar18;
        uVar18 = *(uint64_t *)(unaff_RBP + -0x49);
        uVar10 = *(uint64_t *)(unaff_RBP + -0x41);
        puVar1 = (uint64_t *)(lVar16 + 0x10 + lVar7);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        uVar8 = *(uint64_t *)(unaff_RBP + -0x39);
        uVar9 = *(uint64_t *)(unaff_RBP + -0x31);
        puVar1 = (uint64_t *)(lVar16 + 0x20 + lVar7);
        *puVar1 = uVar18;
        puVar1[1] = uVar10;
        puVar1 = (uint64_t *)(lVar16 + 0x30 + lVar7);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        return uVar12;
      }
    }
    uVar14 = *(int32_t *)(lVar7 + 0x1b48);
    uVar4 = *(int32_t *)(lVar7 + 0x1b4c);
    GenericFunction_1801248f0(lVar5);
    *(int32_t *)(lVar7 + 0x1b48) = uVar14;
    *(int32_t *)(lVar7 + 0x1b4c) = uVar4;
  }
  return uVar12;
}
int8_t GenericFunction_1801103b2(int64_t param_1,int param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_R12D;
  int8_t unaff_R14B;
  int64_t unaff_R15;
  float fVar13;
  if (((param_2 == *(int *)(*(int64_t *)(param_1 + 0x1af8) + 0x144)) &&
      (*(char *)(param_1 + 0x120) != '\0')) &&
     (fVar13 = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38),
     fVar13 < *(float *)(param_1 + 0x474) || fVar13 == *(float *)(param_1 + 0x474))) {
    if (unaff_R15 != 0) {
      lVar5 = *(int64_t *)(unaff_R15 + 8);
      lVar4 = unaff_R15;
      while (lVar12 = lVar5, lVar12 != 0) {
        lVar4 = lVar12;
        lVar5 = *(int64_t *)(lVar12 + 8);
      }
      if ((*(int64_t *)(lVar4 + 0x80) != unaff_R15) || (*(int64_t *)(lVar4 + 0x78) != 0)) {
        if ((*(float *)(unaff_RSI + 0x44c) <= *(float *)(unaff_RSI + 0x19f8) * 2.2) &&
           (*(float *)(unaff_RSI + 0x450) <= *(float *)(unaff_RSI + 0x19f8) * 1.5)) {
          return unaff_R14B;
        }
        lVar4 = *(int64_t *)(unaff_RSI + 0x2df8);
        *(uint64_t *)(unaff_RBP + -0x39) = 0;
        *(uint64_t *)(unaff_RBP + -0x51) = 0;
        *(uint64_t *)(unaff_RBP + -0x61) = 0;
        iVar11 = *(int *)(lVar4 + 0x14);
        *(uint64_t *)(unaff_RBP + -0x59) = 0;
        *(int8_t *)(unaff_RBP + -0x41) = 0;
        iVar10 = *(int *)(lVar4 + 0x10);
        *(int32_t *)(unaff_RBP + -0x49) = 0xffffffff;
        *(int32_t *)(unaff_RBP + -0x45) = 0x3f000000;
        *(int32_t *)(unaff_RBP + -0x69) = 2;
        *(int64_t *)(unaff_RBP + -0x31) = unaff_R15;
        if (iVar10 == iVar11) {
          if (iVar11 != 0) {
            unaff_R12D = iVar11 + iVar11 / 2;
          }
          iVar11 = iVar10 + 1;
          if (iVar10 + 1 < unaff_R12D) {
            iVar11 = unaff_R12D;
          }
          GenericFunction_18013e6c0(lVar4 + 0x10,iVar11);
          iVar10 = *(int *)(lVar4 + 0x10);
        }
        uVar6 = *(uint64_t *)(unaff_RBP + -0x61);
        uVar7 = *(uint64_t *)(unaff_RBP + -0x59);
        uVar8 = *(uint64_t *)(unaff_RBP + -0x51);
        lVar5 = *(int64_t *)(lVar4 + 0x18);
        lVar12 = (int64_t)iVar10 * 0x40;
        *(uint64_t *)(lVar12 + lVar5) = *(uint64_t *)(unaff_RBP + -0x69);
        ((uint64_t *)(lVar12 + lVar5))[1] = uVar6;
        uVar6 = *(uint64_t *)(unaff_RBP + -0x49);
        uVar9 = *(uint64_t *)(unaff_RBP + -0x41);
        puVar1 = (uint64_t *)(lVar12 + 0x10 + lVar5);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        uVar7 = *(uint64_t *)(unaff_RBP + -0x39);
        uVar8 = *(uint64_t *)(unaff_RBP + -0x31);
        puVar1 = (uint64_t *)(lVar12 + 0x20 + lVar5);
        *puVar1 = uVar6;
        puVar1[1] = uVar9;
        puVar1 = (uint64_t *)(lVar12 + 0x30 + lVar5);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        return unaff_R14B;
      }
    }
    uVar2 = *(int32_t *)(unaff_RSI + 0x1b48);
    uVar3 = *(int32_t *)(unaff_RSI + 0x1b4c);
    GenericFunction_1801248f0();
    *(int32_t *)(unaff_RSI + 0x1b48) = uVar2;
    *(int32_t *)(unaff_RSI + 0x1b4c) = uVar3;
  }
  return unaff_R14B;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address