#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part022.c - 4 个函数
// 函数: void NetworkSystem_c7fe7(float param_1,uint64_t param_2,uint64_t param_3)
void NetworkSystem_c7fe7(float param_1,uint64_t param_2,uint64_t param_3)
{
  char cVar1;
  byte bVar2;
  int in_EAX;
  int64_t lVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_EDI;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint unaff_R14D;
  uint uVar12;
  int8_t unaff_R15B;
  uint64_t uVar13;
  bool in_ZF;
  bool bVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float fVar17;
  float fVar18;
  uint local_var_40;
  uint local_buffer_44;
  uint local_var_48;
  uint local_buffer_4c;
  uint64_t local_buffer_50;
  uint local_buffer_58;
  int iStack000000000000005c;
  fVar17 = 0.0;
  fVar18 = 0.0;
  uVar11 = (uint64_t)unaff_EDI;
  uVar10 = (uint64_t)unaff_EDI;
  *(uint *)(unaff_RBP + 0x30) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x48) = unaff_EDI;
  local_var_40 = unaff_EDI;
  local_buffer_44 = unaff_EDI;
  local_var_48 = unaff_EDI;
  local_buffer_4c = unaff_EDI;
  local_buffer_58 = unaff_EDI;
  iStack000000000000005c = in_EAX;
  if (in_ZF) {
    param_1 = (float)RenderingSystem_5C9600(param_1,unaff_EDI + 3,param_3,unaff_R15B);
    if ((param_1 <= unaff_XMM8_Da) ||
       (((local_buffer_50._4_1_ != '\0' &&
         (lVar3 = *(int64_t *)(*unaff_RBX + 0x20),
         4.0 < *(float *)(lVar3 + 0x1fc) * *(float *)(lVar3 + 0x1fc) +
               *(float *)(lVar3 + 0x200) * *(float *)(lVar3 + 0x200) +
               *(float *)(lVar3 + 0x204) * *(float *)(lVar3 + 0x204))) &&
        (fVar18 = param_1, unaff_XMM6_Da < 5.0)))) {
      uVar10 = (uint64_t)*(uint *)(unaff_RBP + 0x48);
      uVar11 = (uint64_t)*(uint *)(unaff_RBP + 0x30);
    }
    else {
      uVar11 = (uint64_t)*(int *)(unaff_RBP + 0x30);
      uVar10 = (uint64_t)*(int *)(unaff_RBP + 0x48);
      if ((*(uint *)((int64_t)unaff_RBX + 0x209c) >> 2 & 1) != 0) {
        lVar3 = *unaff_RBX;
        cVar1 = SystemFunction_00018051f640(lVar3);
        param_1 = extraout_XMM0_Da;
        if ((cVar1 != '\0') &&
           ((*(byte *)(*(int64_t *)(uVar11 * 0x1f8 + 0xd8 + *(int64_t *)(lVar3 + 0x8f8)) + 0x50 +
                      uVar10 * 0xa0) >> 4 & 1) != 0)) {
          fVar18 = 0.011;
          goto LAB_1805c80dc;
        }
      }
      fVar18 = unaff_XMM6_Da * 0.2 * param_1;
    }
  }
LAB_1805c80dc:
  if (*(char *)(unaff_RBP + 0x40) == '\0') {
    fVar15 = (float)RenderingSystem_5C9600(param_1,3);
    fVar16 = (float)RenderingSystem_5C9600(fVar15,1);
    uVar9 = (uint64_t)(int)local_buffer_4c;
    uVar13 = (uint64_t)(int)unaff_EDI;
    local_var_40 = local_buffer_4c;
    if (unaff_XMM8_Da < fVar15) {
      lVar3 = *(int64_t *)(uVar9 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8));
      if (((*(byte *)(lVar3 + 0x50 + uVar13 * 0xa0) & 0x40) == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar3 + 100 + uVar13 * 0xa0) * 0x170 + 0x140 +
                    system_system_ui) & 0x10) == 0)) {
        fVar17 = 5.0 / (unaff_XMM6_Da + 0.01);
      }
      else {
        fVar17 = 5.0 / (unaff_XMM6_Da + 0.01) + 10.0;
      }
      fVar17 = fVar17 * fVar15;
    }
    if ((unaff_XMM8_Da < fVar16) &&
       ((((lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar3 == 0 ||
          (lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1), *(int *)(lVar3 + 0x30) < 1)) ||
         (((*(uint *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)))) ||
        (lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1),
        (*(byte *)((int64_t)
                   *(int *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                           *(int64_t *)(lVar3 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10) ==
        0)))) {
      if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
        bVar2 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((int64_t)unaff_RBX + 0x11c);
      }
      if ((bVar2 != 0) && (pfVar4 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar4)) {
        unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
      }
      unaff_XMM8_Da = (5.0 / (unaff_XMM6_Da + 0.01)) * fVar16;
      goto LAB_1805c8373;
    }
  }
  else {
    uVar13 = (uint64_t)local_buffer_58;
    local_var_48 = unaff_EDI;
    local_buffer_44 = unaff_R14D;
LAB_1805c8373:
    uVar9 = (uint64_t)local_var_40;
  }
  fVar15 = fVar18 + fVar17 + unaff_XMM8_Da;
  uVar5 = local_var_48;
  uVar12 = local_buffer_44;
  if (fVar15 < 0.01) {
    unaff_XMM8_Da = 1.0;
    uVar5 = unaff_EDI;
    uVar12 = unaff_EDI;
  }
  if ((fVar17 <= unaff_XMM8_Da) || (fVar17 <= fVar18)) {
    if (fVar18 <= unaff_XMM8_Da) {
      uVar8 = (uint64_t)uVar5;
      uVar9 = (uint64_t)uVar12;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar10 & 0xffffffff;
      uVar9 = uVar11 & 0xffffffff;
      uVar7 = 2;
    }
  }
  else {
    uVar8 = uVar13 & 0xffffffff;
    uVar9 = uVar9 & 0xffffffff;
    uVar7 = 3;
  }
  NetworkSystem_c9310(fVar15,uVar7,uVar9,uVar8);
  if (iStack000000000000005c != *(int *)((int64_t)unaff_RBX + 0x215c)) {
    uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(unaff_RBX + 0x272) = uVar5;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
         (int64_t)((float)(uVar5 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((local_buffer_50._4_1_ == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    fVar18 = (float)(uVar6 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar6;
  }
  else {
    pfVar4 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (5.0 <= *pfVar4) {
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar6 = uVar6 << 5 ^ uVar6;
      fVar18 = (float)(uVar6 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar18 = *pfVar4 - 2.4;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    if (fVar18 <= 0.4) {
      fVar18 = 0.4;
    }
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(unaff_RBX + 0x272) = uVar6;
    fVar18 = fVar18 * -100000.0 - (fVar18 * 0.5 - fVar18) * (float)(uVar6 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar18;
  uVar6 = *(uint *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar6 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) == 1) {
    if (uVar6 != uVar12) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == uVar5;
  }
  else if (*(int *)((int64_t)unaff_RBX + 0x215c) == 2) {
    if (uVar6 != (uint)uVar11) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == (uint)uVar10;
  }
  else {
    if (uVar6 != local_var_40) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == (uint)uVar13;
  }
  if (bVar14) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_c8009(float param_1,uint64_t param_2,uint64_t param_3)
void NetworkSystem_c8009(float param_1,uint64_t param_2,uint64_t param_3)
{
  char cVar1;
  byte bVar2;
  uint in_EAX;
  int64_t lVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint uVar8;
  uint unaff_EDI;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint unaff_R14D;
  int8_t unaff_R15B;
  uint64_t uVar13;
  bool in_ZF;
  bool bVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar17;
  float unaff_XMM10_Da;
  uint local_var_40;
  uint local_buffer_44;
  uint local_var_48;
  uint local_buffer_4c;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uVar12 = (uint64_t)unaff_EDI;
  uVar11 = (uint64_t)unaff_EDI;
  *(uint *)(unaff_RBP + 0x30) = unaff_EDI;
  *(uint *)(unaff_RBP + 0x48) = unaff_EDI;
  local_var_40 = in_EAX;
  local_buffer_44 = unaff_EDI;
  local_var_48 = unaff_EDI;
  local_buffer_4c = in_EAX;
  if (in_ZF) {
    param_1 = (float)RenderingSystem_5C9600(param_1,unaff_EDI + 3,param_3,unaff_R15B);
    if ((param_1 <= unaff_XMM8_Da) ||
       (((local_buffer_50._4_1_ != '\0' &&
         (lVar3 = *(int64_t *)(*unaff_RBX + 0x20),
         4.0 < *(float *)(lVar3 + 0x1fc) * *(float *)(lVar3 + 0x1fc) +
               *(float *)(lVar3 + 0x200) * *(float *)(lVar3 + 0x200) +
               *(float *)(lVar3 + 0x204) * *(float *)(lVar3 + 0x204))) &&
        (unaff_XMM10_Da = param_1, unaff_XMM6_Da < 5.0)))) {
      uVar11 = (uint64_t)*(uint *)(unaff_RBP + 0x48);
      uVar12 = (uint64_t)*(uint *)(unaff_RBP + 0x30);
    }
    else {
      uVar12 = (uint64_t)*(int *)(unaff_RBP + 0x30);
      uVar11 = (uint64_t)*(int *)(unaff_RBP + 0x48);
      if ((*(uint *)((int64_t)unaff_RBX + 0x209c) >> 2 & 1) != 0) {
        lVar3 = *unaff_RBX;
        cVar1 = SystemFunction_00018051f640(lVar3);
        param_1 = extraout_XMM0_Da;
        if ((cVar1 != '\0') &&
           ((*(byte *)(*(int64_t *)(uVar12 * 0x1f8 + 0xd8 + *(int64_t *)(lVar3 + 0x8f8)) + 0x50 +
                      uVar11 * 0xa0) >> 4 & 1) != 0)) {
          unaff_XMM10_Da = 0.011;
          goto LAB_1805c80dc;
        }
      }
      unaff_XMM10_Da = unaff_XMM6_Da * 0.2 * param_1;
    }
  }
LAB_1805c80dc:
  if (*(char *)(unaff_RBP + 0x40) == '\0') {
    fVar15 = (float)RenderingSystem_5C9600(param_1,3);
    fVar16 = (float)RenderingSystem_5C9600(fVar15,1);
    uVar10 = (uint64_t)(int)local_buffer_4c;
    uVar13 = (uint64_t)(int)in_EAX;
    local_var_40 = local_buffer_4c;
    if (unaff_XMM8_Da < fVar15) {
      lVar3 = *(int64_t *)(uVar10 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8));
      if (((*(byte *)(lVar3 + 0x50 + uVar13 * 0xa0) & 0x40) == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar3 + 100 + uVar13 * 0xa0) * 0x170 + 0x140 +
                    system_system_ui) & 0x10) == 0)) {
        fVar17 = 5.0 / (unaff_XMM6_Da + 0.01);
      }
      else {
        fVar17 = 5.0 / (unaff_XMM6_Da + 0.01) + 10.0;
      }
      unaff_XMM9_Da = fVar17 * fVar15;
    }
    if ((unaff_XMM8_Da < fVar16) &&
       ((((lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar3 == 0 ||
          (lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1), *(int *)(lVar3 + 0x30) < 1)) ||
         (((*(uint *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)))) ||
        (lVar3 = SystemFunction_0001805b6e80(unaff_RBX + 1),
        (*(byte *)((int64_t)
                   *(int *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                           *(int64_t *)(lVar3 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10) ==
        0)))) {
      if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
        bVar2 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((int64_t)unaff_RBX + 0x11c);
      }
      if ((bVar2 != 0) && (pfVar4 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar4)) {
        unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
      }
      unaff_XMM8_Da = (5.0 / (unaff_XMM6_Da + 0.01)) * fVar16;
      goto LAB_1805c8373;
    }
  }
  else {
    uVar13 = (uint64_t)in_EAX;
    local_buffer_44 = unaff_R14D;
    local_var_48 = unaff_ESI;
LAB_1805c8373:
    uVar10 = (uint64_t)local_var_40;
  }
  fVar15 = unaff_XMM10_Da + unaff_XMM9_Da + unaff_XMM8_Da;
  uVar5 = local_buffer_44;
  uVar8 = local_var_48;
  if (fVar15 < 0.01) {
    unaff_XMM8_Da = 1.0;
    uVar5 = unaff_EDI;
    uVar8 = unaff_EDI;
  }
  if ((unaff_XMM9_Da <= unaff_XMM8_Da) || (unaff_XMM9_Da <= unaff_XMM10_Da)) {
    if (unaff_XMM10_Da <= unaff_XMM8_Da) {
      uVar9 = (uint64_t)uVar8;
      uVar10 = (uint64_t)uVar5;
      uVar7 = 1;
    }
    else {
      uVar9 = uVar11 & 0xffffffff;
      uVar10 = uVar12 & 0xffffffff;
      uVar7 = 2;
    }
  }
  else {
    uVar9 = uVar13 & 0xffffffff;
    uVar10 = uVar10 & 0xffffffff;
    uVar7 = 3;
  }
  NetworkSystem_c9310(fVar15,uVar7,uVar10,uVar9);
  if (local_buffer_58._4_4_ != *(int *)((int64_t)unaff_RBX + 0x215c)) {
    uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(unaff_RBX + 0x272) = uVar5;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
         (int64_t)((float)(uVar5 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((local_buffer_50._4_1_ == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    fVar15 = (float)(uVar6 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar6;
  }
  else {
    pfVar4 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (5.0 <= *pfVar4) {
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar6 = uVar6 << 5 ^ uVar6;
      fVar15 = (float)(uVar6 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar15 = *pfVar4 - 2.4;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    if (fVar15 <= 0.4) {
      fVar15 = 0.4;
    }
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(unaff_RBX + 0x272) = uVar6;
    fVar15 = fVar15 * -100000.0 - (fVar15 * 0.5 - fVar15) * (float)(uVar6 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar15;
  uVar6 = *(uint *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar6 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) == 1) {
    if (uVar6 != uVar5) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == uVar8;
  }
  else if (*(int *)((int64_t)unaff_RBX + 0x215c) == 2) {
    if (uVar6 != (uint)uVar12) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == (uint)uVar11;
  }
  else {
    if (uVar6 != local_var_40) goto LAB_1805c85d3;
    bVar14 = unaff_EDI == (uint)uVar13;
  }
  if (bVar14) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_c80f4(int32_t param_1,uint64_t param_2,uint64_t param_3)
void NetworkSystem_c80f4(int32_t param_1,uint64_t param_2,uint64_t param_3)
{
  byte bVar1;
  int64_t lVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *unaff_RBX;
  uint uVar7;
  uint unaff_EDI;
  uint64_t uVar8;
  uint unaff_R12D;
  uint64_t unaff_R13;
  uint uVar9;
  int8_t unaff_R15B;
  bool bVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar13;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  int64_t lStack0000000000000028;
  uint64_t *plocal_var_30;
  uint64_t local_var_40;
  uint local_var_48;
  uint local_buffer_4c;
  uint local_buffer_50;
  char cStack0000000000000054;
  uint64_t local_buffer_58;
  lStack0000000000000028 = (int64_t)&local_buffer_00000048 + 4;
  fVar11 = (float)RenderingSystem_5C9600(param_1,3,param_3,unaff_R15B);
  plocal_var_30 = (uint64_t *)&local_buffer_00000048;
  lStack0000000000000028 = (int64_t)&local_buffer_00000040 + 4;
  fVar12 = (float)RenderingSystem_5C9600(fVar11,1);
  uVar4 = local_buffer_50;
  uVar8 = (uint64_t)(int)local_buffer_4c;
  if (unaff_XMM8_Da < fVar11) {
    lVar2 = *(int64_t *)(uVar8 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8));
    if (((*(byte *)(lVar2 + 0x50 + (int64_t)(int)local_buffer_50 * 0xa0) & 0x40) == 0) ||
       ((*(byte *)((int64_t)*(int *)(lVar2 + 100 + (int64_t)(int)local_buffer_50 * 0xa0) *
                   0x170 + 0x140 + system_system_ui) & 0x10) == 0)) {
      fVar13 = unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da);
    }
    else {
      fVar13 = unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da) + 10.0;
    }
    unaff_XMM9_Da = fVar13 * fVar11;
  }
  if ((unaff_XMM8_Da < fVar12) &&
     ((((lVar2 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar2 == 0 ||
        (lVar2 = SystemFunction_0001805b6e80(unaff_RBX + 1), *(int *)(lVar2 + 0x30) < 1)) ||
       (((*(uint *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar2 + 0xd0)) >>
          9 & 1) != 0 && (*(short *)(lVar2 + 8) < 1)))) ||
      (lVar2 = SystemFunction_0001805b6e80(unaff_RBX + 1),
      (*(byte *)((int64_t)
                 *(int *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                         *(int64_t *)(lVar2 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10) == 0
      )))) {
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar1 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar1;
    }
    else {
      bVar1 = *(byte *)((int64_t)unaff_RBX + 0x11c);
    }
    if ((bVar1 != 0) && (pfVar3 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar3)) {
      unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
    }
    unaff_XMM8_Da = (unaff_XMM13_Da / (unaff_XMM6_Da + unaff_XMM11_Da)) * fVar12;
    uVar8 = (uint64_t)local_buffer_4c;
  }
  fVar11 = unaff_XMM10_Da + unaff_XMM9_Da + unaff_XMM8_Da;
  uVar9 = local_var_40._4_4_;
  uVar7 = local_var_48;
  if (fVar11 < unaff_XMM11_Da) {
    unaff_XMM8_Da = 1.0;
    uVar9 = unaff_EDI;
    uVar7 = unaff_EDI;
  }
  if ((unaff_XMM9_Da <= unaff_XMM8_Da) || (unaff_XMM9_Da <= unaff_XMM10_Da)) {
    if (unaff_XMM10_Da <= unaff_XMM8_Da) {
      uVar8 = (uint64_t)uVar9;
      uVar6 = 1;
      uVar5 = uVar7;
    }
    else {
      uVar8 = unaff_R13 & 0xffffffff;
      uVar6 = 2;
      uVar5 = unaff_R12D;
    }
  }
  else {
    uVar8 = uVar8 & 0xffffffff;
    uVar6 = 3;
    uVar5 = uVar4;
  }
  NetworkSystem_c9310(fVar11,uVar6,uVar8,uVar5);
  if (local_buffer_58._4_4_ != *(int *)((int64_t)unaff_RBX + 0x215c)) {
    uVar4 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RBX + 0x272) = uVar4;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
         (int64_t)((float)(uVar4 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((cStack0000000000000054 == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    fVar11 = (float)(uVar5 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar5;
  }
  else {
    pfVar3 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (unaff_XMM13_Da <= *pfVar3) {
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      fVar11 = (float)(uVar5 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar11 = *pfVar3 - 2.4;
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    if (fVar11 <= 0.4) {
      fVar11 = 0.4;
    }
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(unaff_RBX + 0x272) = uVar5;
    fVar11 = fVar11 * -100000.0 - (fVar11 * 0.5 - fVar11) * (float)(uVar5 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar11;
  uVar5 = *(uint *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar5 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) == 1) {
    if (uVar5 != uVar9) goto LAB_1805c85d3;
    bVar10 = unaff_EDI == uVar7;
  }
  else if (*(int *)((int64_t)unaff_RBX + 0x215c) == 2) {
    if (uVar5 != (uint)unaff_R13) goto LAB_1805c85d3;
    bVar10 = unaff_EDI == unaff_R12D;
  }
  else {
    if (uVar5 != local_buffer_4c) goto LAB_1805c85d3;
    bVar10 = unaff_EDI == uVar4;
  }
  if (bVar10) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_c81de(float param_1)
void NetworkSystem_c81de(float param_1)
{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int64_t lVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  uint64_t uVar9;
  uint64_t uVar10;
  uint unaff_R14D;
  uint64_t uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float fVar15;
  float unaff_XMM9_Da;
  float fVar16;
  float unaff_XMM13_Da;
  uint local_var_40;
  uint local_buffer_44;
  uint local_var_48;
  uint local_buffer_4c;
  int iStack0000000000000050;
  char cStack0000000000000054;
  uint64_t local_buffer_58;
  uVar6 = *(uint *)(unaff_RBP + 0x30);
  uVar1 = *(uint *)(unaff_RBP + 0x48);
  if ((*(uint *)((int64_t)unaff_RBX + 0x209c) >> 2 & 1) == 0) {
LAB_1805c823b:
    fVar16 = unaff_XMM6_Da * 0.2 * param_1;
  }
  else {
    lVar4 = *unaff_RBX;
    cVar2 = SystemFunction_00018051f640(lVar4);
    param_1 = extraout_XMM0_Da;
    if ((cVar2 == '\0') ||
       ((*(byte *)(*(int64_t *)((int64_t)(int)uVar6 * 0x1f8 + 0xd8 + *(int64_t *)(lVar4 + 0x8f8))
                   + 0x50 + (int64_t)(int)uVar1 * 0xa0) >> 4 & 1) == 0)) goto LAB_1805c823b;
    fVar16 = 0.011;
  }
  if (*(char *)(unaff_RBP + 0x40) == '\0') {
    fVar13 = (float)RenderingSystem_5C9600(param_1,3);
    fVar14 = (float)RenderingSystem_5C9600(fVar13,1);
    uVar10 = (uint64_t)(int)local_buffer_4c;
    uVar11 = (uint64_t)iStack0000000000000050;
    local_var_40 = local_buffer_4c;
    if (unaff_XMM8_Da < fVar13) {
      lVar4 = *(int64_t *)(uVar10 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8));
      if (((*(byte *)(lVar4 + 0x50 + uVar11 * 0xa0) & 0x40) == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar4 + 100 + uVar11 * 0xa0) * 0x170 + 0x140 +
                    system_system_ui) & 0x10) == 0)) {
        fVar15 = unaff_XMM13_Da / (unaff_XMM6_Da + 0.01);
      }
      else {
        fVar15 = unaff_XMM13_Da / (unaff_XMM6_Da + 0.01) + 10.0;
      }
      unaff_XMM9_Da = fVar15 * fVar13;
    }
    if ((unaff_XMM8_Da < fVar14) &&
       ((((lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar4 == 0 ||
          (lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1), *(int *)(lVar4 + 0x30) < 1)) ||
         (((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar4 + 8) < 1)))) ||
        (lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1),
        (*(byte *)((int64_t)
                   *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                           *(int64_t *)(lVar4 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10) ==
        0)))) {
      if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
        bVar3 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar3;
      }
      else {
        bVar3 = *(byte *)((int64_t)unaff_RBX + 0x11c);
      }
      if ((bVar3 != 0) && (pfVar5 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar5)) {
        unaff_XMM6_Da = unaff_XMM6_Da * 1.25;
      }
      unaff_XMM8_Da = (unaff_XMM13_Da / (unaff_XMM6_Da + 0.01)) * fVar14;
      goto LAB_1805c8373;
    }
  }
  else {
    uVar11 = local_buffer_58 & 0xffffffff;
    local_buffer_44 = unaff_R14D;
    local_var_48 = unaff_ESI;
LAB_1805c8373:
    uVar10 = (uint64_t)local_var_40;
  }
  fVar13 = fVar16 + unaff_XMM9_Da + unaff_XMM8_Da;
  if (fVar13 < 0.01) {
    unaff_XMM8_Da = 1.0;
    local_buffer_44 = unaff_EDI;
    local_var_48 = unaff_EDI;
  }
  if ((unaff_XMM9_Da <= unaff_XMM8_Da) || (unaff_XMM9_Da <= fVar16)) {
    if (fVar16 <= unaff_XMM8_Da) {
      uVar9 = (uint64_t)local_var_48;
      uVar10 = (uint64_t)local_buffer_44;
      uVar8 = 1;
    }
    else {
      uVar9 = (uint64_t)uVar1;
      uVar10 = (uint64_t)uVar6;
      uVar8 = 2;
    }
  }
  else {
    uVar9 = uVar11 & 0xffffffff;
    uVar10 = uVar10 & 0xffffffff;
    uVar8 = 3;
  }
  NetworkSystem_c9310(fVar13,uVar8,uVar10,uVar9);
  if (local_buffer_58._4_4_ != *(int *)((int64_t)unaff_RBX + 0x215c)) {
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(unaff_RBX + 0x272) = uVar6;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
         (int64_t)((float)(uVar6 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((cStack0000000000000054 == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar7 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar7 = uVar7 >> 0x11 ^ uVar7;
    uVar7 = uVar7 << 5 ^ uVar7;
    fVar16 = (float)(uVar7 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar7;
  }
  else {
    pfVar5 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    uVar7 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (unaff_XMM13_Da <= *pfVar5) {
      uVar7 = uVar7 >> 0x11 ^ uVar7;
      uVar7 = uVar7 << 5 ^ uVar7;
      fVar16 = (float)(uVar7 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar16 = *pfVar5 - 2.4;
    uVar7 = uVar7 >> 0x11 ^ uVar7;
    if (fVar16 <= 0.4) {
      fVar16 = 0.4;
    }
    uVar7 = uVar7 << 5 ^ uVar7;
    *(uint *)(unaff_RBX + 0x272) = uVar7;
    fVar16 = fVar16 * -100000.0 - (fVar16 * 0.5 - fVar16) * (float)(uVar7 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar16;
  uVar7 = *(uint *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar7 != unaff_EDI) {
    unaff_EDI = *(uint *)(*(int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) == 1) {
    if (uVar7 != local_buffer_44) goto LAB_1805c85d3;
    bVar12 = unaff_EDI == local_var_48;
  }
  else if (*(int *)((int64_t)unaff_RBX + 0x215c) == 2) {
    if (uVar7 != uVar6) goto LAB_1805c85d3;
    bVar12 = unaff_EDI == uVar1;
  }
  else {
    if (uVar7 != local_var_40) goto LAB_1805c85d3;
    bVar12 = unaff_EDI == (uint)uVar11;
  }
  if (bVar12) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address