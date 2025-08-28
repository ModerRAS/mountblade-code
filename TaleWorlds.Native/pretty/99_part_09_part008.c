// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "ultra_high_freq_fun_definitions.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
// 99_part_09_part008.c - 2 个函数
// 函数: void NetworkSystem_c08f2(void)
void NetworkSystem_c08f2(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  uint uVar7;
  uint64_t *puVar8;
  int in_R11D;
  uint unaff_R13D;
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  uint unaff_XMM6_Da;
  float fVar14;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int8_t astack_special_x_20 [8];
  float local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  float local_var_48;
  float fStack000000000000004c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  uint64_t local_buffer_68;
  int32_t local_buffer_70;
  if ((0 < *(int *)((int64_t)unaff_RDI + 0x1b6c)) && ((unaff_R13D & 3) == 0)) {
    uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
    uVar5 = uVar5 ^ uVar5 >> 0x11;
    uVar5 = uVar5 ^ uVar5 << 5;
    *(uint *)(unaff_RDI + 0x272) = uVar5;
    fVar9 = (float)(uVar5 - 1);
    if (((fVar9 * 2.1684043e-19 + 1.8626451e-09) * unaff_XMM10_Da * fVar9 +
        (fVar9 * 1.8626451e-09 + 16.0) * unaff_XMM10_Da) * unaff_XMM10_Da <
        (float)(*(uint *)((int64_t)unaff_RDI + 0x17b4) ^ unaff_XMM6_Da)) {
      unaff_R13D = unaff_R13D | 1;
    }
  }
  if ((unaff_R13D & 2) == 0) {
    if ((unaff_R13D & 1) != 0) {
      uVar5 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffd | 1;
      goto LAB_1805c09a3;
    }
  }
  else {
    uVar5 = *(uint *)((int64_t)unaff_RDI + 0x1484) & 0xfffffffe | 2;
LAB_1805c09a3:
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar5;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  uVar5 = *(uint *)((int64_t)unaff_RDI + 0x1484);
  lVar4 = *unaff_RDI;
  if ((uVar5 & 2) != 0) {
    local_buffer_68 = 0;
    local_var_30 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x8d8) + 0x18);
    fVar11 = *(float *)(unaff_RDI + 0x3b) - *(float *)(*(int64_t *)(lVar4 + 0x20) + 0xc);
    fVar12 = *(float *)((int64_t)unaff_RDI + 0x1dc) -
             *(float *)(*(int64_t *)(lVar4 + 0x20) + 0x10);
    fVar9 = unaff_XMM10_Da * unaff_XMM10_Da * 0.5;
    if (fVar11 * fVar11 + fVar12 * fVar12 < fVar9) {
      if ((unaff_R13D & 2) != 0) {
        NetworkSystem_c1160(fVar9,astack_special_x_20,uVar5,*(uint64_t *)(unaff_RBP + 200));
        fVar9 = -1.0;
        goto LAB_1805c111b;
      }
      *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar5 & 0xfffffffd | 1;
      *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
    }
    fVar9 = -1.0;
    goto LAB_1805c111b;
  }
  if ((uVar5 & 1) == 0) {
    lVar4 = UtilitiesSystem_FormatConverter(*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar4 + 0x590) + 0x2590) + 0xc78) + 0x60,0);
    fVar9 = *(float *)(lVar4 + 0x10) * 0.9;
    goto LAB_1805c111b;
  }
  lVar1 = *(int64_t *)(lVar4 + 0x20);
  local_buffer_68 = 0;
  local_var_30 = *(uint64_t *)(*(int64_t *)(lVar4 + 0x8d8) + 0x18);
  local_var_48 = *(float *)(lVar1 + 0xc);
  fStack000000000000004c = *(float *)(lVar1 + 0x10);
  local_buffer_50 = *(int32_t *)(lVar1 + 0x14);
  local_buffer_54 = *(int32_t *)(lVar1 + 0x18);
  if ((unaff_R13D & 1) == 0) {
    *(uint *)((int64_t)unaff_RDI + 0x1484) = uVar5 & 0xfffffffc;
    *(int8_t *)((int64_t)unaff_RDI + 0x2201) = 1;
  }
  else {
    fVar9 = *(float *)((int64_t)unaff_RDI + 0x1dc) - fStack000000000000004c;
    if ((*(float *)(unaff_RDI + 0x3b) - local_var_48) *
        (*(float *)(unaff_RDI + 0x3b) - local_var_48) + fVar9 * fVar9 <
        unaff_XMM10_Da * unaff_XMM10_Da * 0.5) {
      if (((*(uint *)(lVar4 + 0x56c) & 0x200000) == 0) ||
         (*(int *)((int64_t)unaff_RDI + 0x1b6c) < 1)) {
        if (in_R11D < 1) {
          puVar3 = (uint64_t *)UltraHighFreq_MemoryManager1(lVar4,unaff_RBP + -0x78);
          puVar8 = *(uint64_t **)(unaff_RBP + 200);
          *puVar8 = *puVar3;
          uVar2 = puVar3[4];
          puVar8[3] = puVar3[3];
          puVar8[4] = uVar2;
          uVar2 = puVar3[6];
          puVar8[5] = puVar3[5];
          puVar8[6] = uVar2;
          puVar8[1] = puVar3[1];
          puVar8[2] = puVar3[2];
          puVar8[7] = puVar3[7];
          *(int32_t *)(puVar8 + 8) = *(int32_t *)(puVar3 + 8);
          uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar6 = uVar6 ^ uVar6 >> 0x11;
          uVar6 = uVar6 ^ uVar6 << 5;
          uVar5 = uVar6 << 0xd ^ uVar6;
          uVar5 = uVar5 ^ uVar5 >> 0x11;
          uVar5 = uVar5 ^ uVar5 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar5;
          fVar9 = *(float *)(puVar8 + 3);
          fVar11 = *(float *)((int64_t)puVar8 + 0x1c);
          fVar12 = ((float)(uVar5 - 1) * 1.3969839e-09 - unaff_XMM7_Da) * unaff_XMM8_Da + fVar9;
          fVar14 = ((float)(uVar6 - 1) * 2.3283064e-09 - 5.0) * unaff_XMM8_Da + fVar11;
          *(float *)(unaff_RBP + 0xc4) = fVar14;
          *(float *)(unaff_RBP + 0xc0) = fVar12;
          if ((fVar9 != fVar12) || (fVar11 != fVar14)) {
            if (*(int *)(puVar8 + 8) != 0) goto LAB_1805c1095;
            goto LAB_1805c109d;
          }
        }
        else {
          puVar3 = (uint64_t *)UltraHighFreq_MemoryManager1(lVar4,unaff_RBP + -0x78);
          puVar8 = *(uint64_t **)(unaff_RBP + 200);
          *puVar8 = *puVar3;
          uVar2 = puVar3[4];
          puVar8[3] = puVar3[3];
          puVar8[4] = uVar2;
          uVar2 = puVar3[6];
          puVar8[5] = puVar3[5];
          puVar8[6] = uVar2;
          puVar8[1] = puVar3[1];
          puVar8[2] = puVar3[2];
          puVar8[7] = puVar3[7];
          *(int32_t *)(puVar8 + 8) = *(int32_t *)(puVar3 + 8);
          uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
          uVar6 = uVar6 ^ uVar6 >> 0x11;
          uVar6 = uVar6 ^ uVar6 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar6;
          fVar9 = *(float *)(puVar8 + 3);
          fVar11 = *(float *)((int64_t)puVar8 + 0x1c);
          uVar7 = uVar6 << 0xd ^ uVar6;
          uVar7 = uVar7 ^ uVar7 >> 0x11;
          uVar7 = uVar7 ^ uVar7 << 5;
          uVar5 = uVar7 << 0xd ^ uVar7;
          fVar13 = (float)(uVar6 - 1) * 2.3283064e-10 + 0.5;
          uVar5 = uVar5 ^ uVar5 >> 0x11;
          uVar5 = uVar5 ^ uVar5 << 5;
          *(uint *)(unaff_RDI + 0x272) = uVar5;
          fVar12 = (float)(uVar5 - 1) * 2.3283064e-10;
          fVar14 = (float)(uVar7 - 1) * 2.3283064e-10;
          fVar12 = (((unaff_XMM12_Da * unaff_XMM10_Da * fVar13 + fVar9 + fVar12) - 0.5) + fVar12) -
                   0.5;
          fVar11 = (((unaff_XMM11_Da * unaff_XMM10_Da * fVar13 + fVar11 + fVar14) - 0.5) + fVar14) -
                   0.5;
          fVar9 = *(float *)(puVar8 + 3);
          *(float *)(unaff_RBP + 0xc4) = fVar11;
          *(float *)(unaff_RBP + 0xc0) = fVar12;
          if ((fVar12 != fVar9) || (fVar11 != *(float *)((int64_t)puVar8 + 0x1c))) {
            if (*(int *)(puVar8 + 8) != 0) {
              *(int32_t *)(puVar8 + 8) = 0;
            }
            puVar8[3] = *(uint64_t *)(unaff_RBP + 0xc0);
          }
        }
      }
      else {
        UltraHighFreq_MemoryManager1((int64_t)*(int *)((int64_t)unaff_RDI + 0x17ac) * 0xa60 +
                      unaff_RDI[0x291] + 0x30a0,&local_buffer_00000030);
        if (0 < *(int *)(unaff_RBP + 0xd8)) {
          fVar11 = local_var_48 - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0xc);
          fVar12 = fStack000000000000004c - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x10);
          fVar14 = fVar12 * fVar12 + fVar11 * fVar11;
          auVar10 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar9 = auVar10._0_4_;
          fVar9 = fVar9 * 0.5 * (3.0 - fVar14 * fVar9 * fVar9);
          if (0.99 < ABS(unaff_XMM11_Da * fVar9 * fVar12 + unaff_XMM12_Da * fVar9 * fVar11)) {
            uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
            uVar5 = uVar5 ^ uVar5 >> 0x11;
            uVar5 = uVar5 ^ uVar5 << 5;
            *(uint *)(unaff_RDI + 0x272) = uVar5;
// WARNING: Subroutine does not return
            AdvancedSystemController((float)(uVar5 - 1) * 3.949879e-10 - 0.84823006);
          }
        }
        puVar8 = *(uint64_t **)(unaff_RBP + 200);
        *puVar8 = local_var_30;
        puVar8[1] = local_var_38;
        puVar8[2] = local_var_40;
        puVar8[7] = local_buffer_68;
        *(int32_t *)(puVar8 + 8) = local_buffer_70;
        *(float *)(puVar8 + 3) = local_var_48;
        *(float *)((int64_t)puVar8 + 0x1c) = fStack000000000000004c;
        *(int32_t *)(puVar8 + 4) = local_buffer_50;
        *(int32_t *)((int64_t)puVar8 + 0x24) = local_buffer_54;
        *(int32_t *)(puVar8 + 5) = local_buffer_58;
        *(int32_t *)((int64_t)puVar8 + 0x2c) = local_buffer_5c;
        *(int32_t *)(puVar8 + 6) = local_buffer_60;
        *(int32_t *)((int64_t)puVar8 + 0x34) = local_buffer_64;
        uVar6 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
        uVar6 = uVar6 ^ uVar6 >> 0x11;
        uVar6 = uVar6 ^ uVar6 << 5;
        uVar5 = uVar6 << 0xd ^ uVar6;
        uVar5 = uVar5 ^ uVar5 >> 0x11;
        uVar5 = uVar5 ^ uVar5 << 5;
        *(uint *)(unaff_RDI + 0x272) = uVar5;
        fVar9 = *(float *)(puVar8 + 3);
        fVar11 = *(float *)((int64_t)puVar8 + 0x1c);
        fVar12 = ((float)(uVar5 - 1) * 9.313226e-10 - 2.0) * local_var_28 + fVar9;
        fVar14 = ((float)(uVar6 - 1) * 9.313226e-10 - 2.0) * local_var_28 + fVar11;
        *(float *)(unaff_RBP + 0xc4) = fVar14;
        *(float *)(unaff_RBP + 0xc0) = fVar12;
        if ((fVar9 != fVar12) || (fVar11 != fVar14)) {
LAB_1805c1095:
          *(int32_t *)(puVar8 + 8) = 0;
LAB_1805c109d:
          puVar8[3] = *(uint64_t *)(unaff_RBP + 0xc0);
        }
      }
    }
  }
  lVar4 = UtilitiesSystem_FormatConverter(*(int64_t *)
                         (*(int64_t *)(*(int64_t *)(*unaff_RDI + 0x590) + 0x2590) + 0xc78) + 0x60,
                        0);
  fVar9 = *(float *)(lVar4 + 0x10) * 1.8;
LAB_1805c111b:
  *(float *)((int64_t)unaff_RDI + 0x2204) = fVar9;
  return;
}
// WARNING: Removing unreachable block (ram,0x0001805c1509)
// 函数: void NetworkSystem_c1160(int64_t *param_1,uint64_t *param_2,float param_3,uint64_t *param_4)
void NetworkSystem_c1160(int64_t *param_1,uint64_t *param_2,float param_3,uint64_t *param_4)
{
  float *pfVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fStack_148;
  float fStack_144;
  int iStack_140;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int64_t lStack_e8;
  lStack_e8 = *(int64_t *)(*(int64_t *)param_1[0x33] + 0x9d8);
  if (lStack_e8 == 0) {
    iStack_140 = -1;
  }
  else {
    iStack_140 = *(int *)(lStack_e8 + 0x128);
  }
  pfVar1 = (float *)(param_4 + 3);
  lVar9 = 0;
  fStack_144 = (float)((uint64_t)*param_2 >> 0x20);
  fStack_148 = (float)*param_2;
  lVar6 = *param_1;
  lVar11 = *(int64_t *)(lVar6 + 0x9d8);
  lVar10 = *(int64_t *)(lVar6 + 0x20);
  if ((lVar11 == 0) || (cVar5 = SystemCore_PerformanceMonitor(lVar11,lVar10 + 0xc), lVar8 = lVar11, cVar5 == '\0'))
  {
    lVar8 = lVar9;
  }
  local_var_f8 = 0;
  local_var_118 = *(uint64_t *)(lVar10 + 0xc);
  local_var_110 = *(uint64_t *)(lVar10 + 0x14);
  uVar3 = *(uint64_t *)(lVar10 + 0xb0);
  uVar4 = *(uint64_t *)(lVar10 + 0xb8);
  *param_4 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x8d8) + 0x18);
  param_4[1] = lVar8;
  param_4[5] = uVar3;
  param_4[6] = uVar4;
  param_4[7] = local_var_118;
  param_4[2] = lVar11;
  *(uint64_t *)pfVar1 = local_var_118;
  param_4[4] = local_var_110;
  *(int32_t *)(param_4 + 8) = 3;
  uVar7 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
  uVar7 = uVar7 >> 0x11 ^ uVar7;
  uVar7 = uVar7 << 5 ^ uVar7;
  *(uint *)(param_1 + 0x272) = uVar7;
  fVar12 = (float)(uVar7 - 1) * 9.313226e-11 + 0.8;
  fVar13 = fStack_148 * param_3 * fVar12 + *pfVar1;
  fVar12 = fStack_144 * param_3 * fVar12 + *(float *)((int64_t)param_4 + 0x1c);
  if ((*pfVar1 != fVar13) || (*(float *)((int64_t)param_4 + 0x1c) != fVar12)) {
    *(uint64_t *)pfVar1 = CONCAT44(fVar12,fVar13);
    *(int32_t *)(param_4 + 8) = 0;
  }
  lVar6 = param_1[0x291];
  cVar5 = UISystem_f6190(lVar6,pfVar1);
  if (cVar5 != '\0') {
    lVar6 = *(int64_t *)(lVar6 + 0x18);
    if (*(int64_t *)(lVar6 + 0x2ee8) - *(int64_t *)(lVar6 + 12000) >> 3 != 0) {
      SystemCore_Validator(param_4,2);
      if ((*(int *)(param_4 + 8) < 2) || (param_4[1] == 0)) goto LAB_1805c14f2;
      if (lStack_e8 != 0) {
        SystemCore_Validator(param_4,2);
        lVar6 = lVar9;
        if (1 < *(int *)(param_4 + 8)) {
          lVar6 = param_4[1];
        }
        if (*(int *)(lVar6 + 0x128) != iStack_140) goto LAB_1805c14f2;
      }
    }
    if (param_1[0x423] - param_1[0x422] >> 2 != 0) {
      lVar6 = *(int64_t *)(*param_1 + 0x20);
      lVar11 = *(int64_t *)(param_1[0x291] + 0x18);
      lVar10 = *(int64_t *)(*param_1 + 0x9d8);
      uVar2 = *(int32_t *)(lVar6 + 0x1d0);
      if (lVar10 != 0) {
        SystemCore_PerformanceMonitor(lVar10,lVar6 + 0xc);
      }
      local_var_118 = *(uint64_t *)(lVar6 + 0xc);
      local_var_110 = *(uint64_t *)(lVar6 + 0x14);
      local_var_108 = *(int32_t *)(lVar6 + 0xb0);
      local_var_104 = *(int32_t *)(lVar6 + 0xb4);
      local_var_100 = *(int32_t *)(lVar6 + 0xb8);
      local_var_fc = *(int32_t *)(lVar6 + 0xbc);
      local_var_f0 = 3;
      local_var_f8 = local_var_118;
      SystemCore_Validator(param_4,2);
      if (1 < *(int *)(param_4 + 8)) {
        lVar9 = param_4[1];
      }
      RenderingSystem_92a30(lVar11 + 0x2a68,*(uint64_t *)(*(int64_t *)param_1[0x33] + 0x9d8),lVar9,
                    &local_var_118,pfVar1,uVar2,0,0xffffffff,0,0x49742400,param_1 + 0x422,0x3f800000);
    }
  }
LAB_1805c14f2:
// WARNING: Subroutine does not return
  AdvancedSystemController(0x3db2b8c3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address