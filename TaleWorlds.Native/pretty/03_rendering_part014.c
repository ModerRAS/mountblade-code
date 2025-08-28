#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part014.c - 3 个函数
// 函数: void DataStructure_768b0(int64_t param_1,int64_t *param_2)
void DataStructure_768b0(int64_t param_1,int64_t *param_2)
{
  byte bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t uVar5;
  byte bVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  plVar8 = *(int64_t **)(param_1 + 0x38);
  if (plVar8 < *(int64_t **)(param_1 + 0x40)) {
    do {
      lVar2 = *plVar8;
      plVar10 = (int64_t *)*param_2;
      if (plVar10 != *(int64_t **)(lVar2 + 0x1b8)) {
        if (*(char *)(lVar2 + 0xb1) == '\0') {
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          plVar3 = *(int64_t **)(lVar2 + 0x1b8);
          *(int64_t **)(lVar2 + 0x1b8) = plVar10;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          lVar4 = *(int64_t *)(lVar2 + 0x1b8);
          if (lVar4 != 0) {
            bVar6 = (byte)((uint)*(int32_t *)(*(int64_t *)(lVar4 + 0x1e0) + 0x1588) >> 0x1b) <<
                    7;
            bVar1 = *(byte *)(lVar2 + 0xfd);
            *(byte *)(lVar2 + 0xfd) = bVar6 | bVar1 & 0x7f;
            uVar7 = *(uint *)(lVar4 + 0x138) & 0x3000;
            if (uVar7 == 0x1000) {
              *(int8_t *)(lVar2 + 0xf7) = 1;
            }
            else {
              uVar5 = 0;
              if (uVar7 == 0x2000) {
                uVar5 = 2;
              }
              *(int8_t *)(lVar2 + 0xf7) = uVar5;
            }
            bVar6 = bVar6 | bVar1 & 0x77;
            *(byte *)(lVar2 + 0xfd) = bVar6;
            lVar9 = 0;
            plVar10 = (int64_t *)(lVar4 + 0xb8);
            do {
              if (0xf < lVar9) break;
              if ((*plVar10 != 0) && (*(int *)(*plVar10 + 0x36c) != 0)) {
                bVar6 = bVar6 | 8;
                *(byte *)(lVar2 + 0xfd) = bVar6;
              }
              lVar9 = lVar9 + 1;
              plVar10 = plVar10 + 1;
            } while ((bVar6 & 8) == 0);
            GenericFunction_1800781e0(lVar2);
          }
        }
        else {
          SystemDataInitializer(&processed_var_5232_ptr);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 < *(int64_t **)(param_1 + 0x40));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_76a70(uint64_t *param_1,int64_t param_2,float *param_3,float *param_4,
void DataStructure_76a70(uint64_t *param_1,int64_t param_2,float *param_3,float *param_4,
                  int32_t param_5,int param_6,int64_t param_7,char param_8)
{
  uint *puVar1;
  uint64_t *puVar2;
  float fVar3;
  uint uVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t uVar18;
  float *pfVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int8_t stack_array_208 [32];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint64_t local_var_128;
  uint64_t local_var_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int8_t stack_array_e8 [12];
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  float fStack_cc;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint64_t local_var_88;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  if (*(int *)(param_1 + 0x42) != 0) {
    if ((void *)*param_1 == &processed_var_9304_ptr) {
      pfVar19 = (float *)(param_1 + 0x66);
    }
    else {
      pfVar19 = (float *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    }
    fVar6 = *(float *)(param_7 + 0x70);
    fVar7 = *(float *)(param_7 + 0x74);
    fVar8 = *(float *)(param_7 + 0x78);
    fVar9 = *(float *)(param_7 + 0x7c);
    fVar10 = *(float *)(param_7 + 0x80);
    fVar11 = *(float *)(param_7 + 0x84);
    fVar12 = *(float *)(param_7 + 0x88);
    fVar13 = *(float *)(param_7 + 0x8c);
    fVar14 = *(float *)(param_7 + 0x90);
    fVar15 = *(float *)(param_7 + 0x94);
    fVar16 = *(float *)(param_7 + 0x98);
    fVar17 = *(float *)(param_7 + 0x9c);
    fVar21 = pfVar19[1];
    fVar22 = *pfVar19;
    fVar23 = pfVar19[2];
    fVar24 = pfVar19[5];
    fVar27 = pfVar19[9];
    fVar3 = pfVar19[0xd];
    fVar25 = pfVar19[4];
    fVar31 = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14;
    fVar32 = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15;
    fVar33 = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16;
    fStack_15c = fVar21 * fVar13 + fVar22 * fVar9 + fVar23 * fVar17;
    fVar21 = pfVar19[6];
    fVar22 = pfVar19[8];
    fVar28 = fVar24 * fVar10 + fVar25 * fVar6 + fVar21 * fVar14;
    fVar29 = fVar24 * fVar11 + fVar25 * fVar7 + fVar21 * fVar15;
    fVar30 = fVar24 * fVar12 + fVar25 * fVar8 + fVar21 * fVar16;
    fStack_14c = fVar24 * fVar13 + fVar25 * fVar9 + fVar21 * fVar17;
    fVar21 = pfVar19[10];
    fVar23 = pfVar19[0xc];
    fVar24 = fVar27 * fVar10 + fVar22 * fVar6 + fVar21 * fVar14;
    fVar25 = fVar27 * fVar11 + fVar22 * fVar7 + fVar21 * fVar15;
    fVar26 = fVar27 * fVar12 + fVar22 * fVar8 + fVar21 * fVar16;
    fVar27 = fVar27 * fVar13 + fVar22 * fVar9 + fVar21 * fVar17;
    fVar21 = pfVar19[0xe];
    fStack_138 = fVar3 * fVar10 + fVar23 * fVar6 + fVar21 * fVar14 + *(float *)(param_7 + 0xa0);
    fStack_134 = fVar3 * fVar11 + fVar23 * fVar7 + fVar21 * fVar15 + *(float *)(param_7 + 0xa4);
    fStack_130 = fVar3 * fVar12 + fVar23 * fVar8 + fVar21 * fVar16 + *(float *)(param_7 + 0xa8);
    fStack_12c = fVar3 * fVar13 + fVar23 * fVar9 + fVar21 * fVar17 + *(float *)(param_7 + 0xac);
    fVar21 = *param_3 - fStack_138;
    fVar22 = param_3[1] - fStack_134;
    fVar23 = param_3[2] - fStack_130;
    fStack_1d8 = fVar21 * fVar31 + fVar22 * fVar32 + fVar23 * fVar33;
    fStack_1d4 = fVar21 * fVar28 + fVar22 * fVar29 + fVar23 * fVar30;
    fStack_1d0 = fVar21 * fVar24 + fVar22 * fVar25 + fVar23 * fVar26;
    _fStack_1c8 = CONCAT44(fStack_1d4,fStack_1d8);
    _fStack_1c0 = CONCAT44(fVar21 * fVar27 + fVar22 * fVar27 + fVar23 * fVar27,fStack_1d0);
    lVar20 = (int64_t)param_8 * 0x100;
    lVar5 = *(int64_t *)(*(int64_t *)(param_7 + 0x260) + 0x18);
    do {
      LOCK();
      puVar1 = (uint *)(lVar20 + lVar5);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
    } while ((uVar4 & 1) != 0);
    puVar2 = (uint64_t *)(lVar20 + 4 + lVar5);
    local_var_128 = *puVar2;
    local_var_120 = puVar2[1];
    pfVar19 = (float *)(lVar20 + 0x14 + lVar5);
    fStack_118 = *pfVar19;
    fStack_114 = pfVar19[1];
    fStack_110 = pfVar19[2];
    fStack_10c = pfVar19[3];
    fStack_1d8 = fStack_1d8 - fStack_118;
    *(int32_t *)(lVar20 + lVar5) = 0;
    local_var_1cc = 0x7f7fffff;
    fStack_1d4 = fStack_1d4 - fStack_114;
    fStack_1d0 = fStack_1d0 - fStack_110;
    fStack_168 = fVar31;
    fStack_164 = fVar32;
    fStack_160 = fVar33;
    fStack_158 = fVar28;
    fStack_154 = fVar29;
    fStack_150 = fVar30;
    fStack_148 = fVar24;
    fStack_144 = fVar25;
    fStack_140 = fVar26;
    fStack_13c = fVar27;
    local_var_c8 = local_var_128;
    local_var_c0 = local_var_120;
    fStack_b8 = fStack_118;
    fStack_b4 = fStack_114;
    fStack_b0 = fStack_110;
    fStack_ac = fStack_10c;
    SystemCore_EventHandler(&local_var_128,&fStack_1e8,&fStack_1d8);
    fVar23 = *param_4 - fStack_138;
    fVar22 = param_4[2] - fStack_130;
    fVar21 = param_4[1] - fStack_134;
    lVar5 = *(int64_t *)(*(int64_t *)(param_7 + 0x260) + 0x18);
    fStack_1a8 = fVar23 * fVar31 + fVar21 * fVar32 + fVar22 * fVar33;
    fStack_1a4 = fVar23 * fVar28 + fVar21 * fVar29 + fVar22 * fVar30;
    fStack_1a0 = fVar23 * fVar24 + fVar21 * fVar25 + fVar22 * fVar26;
    fStack_19c = fVar23 * fVar27 + fVar21 * fVar27 + fVar22 * fVar27;
    do {
      LOCK();
      puVar1 = (uint *)(lVar20 + lVar5);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
    } while ((uVar4 & 1) != 0);
    puVar2 = (uint64_t *)(lVar20 + 4 + lVar5);
    local_var_108 = *puVar2;
    local_var_100 = puVar2[1];
    pfVar19 = (float *)(lVar20 + 0x14 + lVar5);
    fStack_f8 = *pfVar19;
    fStack_f4 = pfVar19[1];
    fStack_f0 = pfVar19[2];
    fStack_ec = pfVar19[3];
    fStack_1b8 = fStack_1a8 - fStack_f8;
    *(int32_t *)(lVar20 + lVar5) = 0;
    local_var_1ac = 0x7f7fffff;
    fStack_1b4 = fStack_1a4 - fStack_f4;
    fStack_1b0 = fStack_1a0 - fStack_f0;
    local_var_a8 = local_var_108;
    local_var_a0 = local_var_100;
    fStack_98 = fStack_f8;
    fStack_94 = fStack_f4;
    fStack_90 = fStack_f0;
    fStack_8c = fStack_ec;
    SystemCore_EventHandler(&local_var_108,&local_var_198,&fStack_1b8);
    if ((((*(float *)((int64_t)param_1 + 0x214) <= fStack_1e8) &&
         (fStack_1e8 < *(float *)((int64_t)param_1 + 0x224) ||
          fStack_1e8 == *(float *)((int64_t)param_1 + 0x224))) &&
        (*(float *)(param_1 + 0x43) <= fStack_1e4)) &&
       (((fStack_1e4 < *(float *)(param_1 + 0x45) || fStack_1e4 == *(float *)(param_1 + 0x45) &&
         (*(float *)((int64_t)param_1 + 0x21c) <= fStack_1e0)) &&
        (fStack_1e0 < *(float *)((int64_t)param_1 + 0x22c) ||
         fStack_1e0 == *(float *)((int64_t)param_1 + 0x22c))))) {
      if (*(int *)(param_1 + 99) == -1) {
        *(int32_t *)((int64_t)param_1 + 0x314) = param_5;
        uVar18 = GenericFunction_1801b9a40(param_2 + 0x1218);
        *(int32_t *)(param_1 + 99) = uVar18;
        LOCK();
        *(int32_t *)(param_1 + 0x62) = 0;
        UNLOCK();
      }
      fStack_cc = (float)param_6;
      local_var_d8 = local_var_198;
      local_var_d4 = local_var_194;
      local_var_d0 = local_var_190;
      local_var_dc = 0x3e19999a;
      DataStructure_0a7b0(param_1 + 0x61,param_2,stack_array_e8);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_88 ^ (uint64_t)stack_array_208);
}
// 函数: void DataStructure_76ad4(int64_t param_1)
void DataStructure_76ad4(int64_t param_1)
{
  uint *puVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t uVar21;
  int64_t in_RAX;
  float *pfVar22;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  int64_t lVar23;
  int64_t in_R11;
  char unaff_R12B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int32_t unaff_XMM6_Da;
  float fVar32;
  int32_t unaff_XMM6_Db;
  float fVar33;
  int32_t unaff_XMM6_Dc;
  float fVar34;
  int32_t unaff_XMM6_Dd;
  float fVar35;
  int32_t unaff_XMM7_Da;
  float fVar36;
  int32_t unaff_XMM7_Db;
  float fVar37;
  int32_t unaff_XMM7_Dc;
  float fVar38;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar39;
  int32_t unaff_XMM8_Db;
  float fVar40;
  int32_t unaff_XMM8_Dc;
  float fVar41;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float local_var_30;
  float fStack0000000000000034;
  float local_var_38;
  int32_t local_buffer_3c;
  uint64_t local_var_40;
  uint64_t local_var_48;
  float local_buffer_50;
  float fStack0000000000000054;
  float local_buffer_58;
  int32_t local_buffer_5c;
  float local_buffer_60;
  float fStack0000000000000064;
  float local_buffer_68;
  float fStack000000000000006c;
  int32_t local_buffer_70;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
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
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  if (in_RAX == param_1) {
    pfVar22 = (float *)(unaff_RBX + 0x330);
  }
  else {
    pfVar22 = (float *)(**(code **)(in_RAX + 0x158))();
  }
  fVar27 = *(float *)(unaff_R15 + 0x70);
  fVar28 = *(float *)(unaff_R15 + 0x74);
  fVar29 = *(float *)(unaff_R15 + 0x78);
  fVar10 = *(float *)(unaff_R15 + 0x7c);
  fVar11 = *(float *)(unaff_R15 + 0x80);
  fVar12 = *(float *)(unaff_R15 + 0x84);
  fVar13 = *(float *)(unaff_R15 + 0x88);
  fVar14 = *(float *)(unaff_R15 + 0x8c);
  fVar15 = *(float *)(unaff_R15 + 0x90);
  fVar16 = *(float *)(unaff_R15 + 0x94);
  fVar17 = *(float *)(unaff_R15 + 0x98);
  fVar18 = *(float *)(unaff_R15 + 0x9c);
  fVar24 = pfVar22[1];
  fVar26 = *pfVar22;
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[5];
  fVar25 = pfVar22[9];
  fVar4 = pfVar22[0xd];
  fVar5 = pfVar22[4];
  fVar39 = fVar24 * fVar11 + fVar26 * fVar27 + fVar31 * fVar15;
  fVar40 = fVar24 * fVar12 + fVar26 * fVar28 + fVar31 * fVar16;
  fVar41 = fVar24 * fVar13 + fVar26 * fVar29 + fVar31 * fVar17;
  fVar6 = pfVar22[6];
  fVar30 = unaff_RDI[1];
  fVar7 = pfVar22[8];
  fVar36 = fVar3 * fVar11 + fVar5 * fVar27 + fVar6 * fVar15;
  fVar37 = fVar3 * fVar12 + fVar5 * fVar28 + fVar6 * fVar16;
  fVar38 = fVar3 * fVar13 + fVar5 * fVar29 + fVar6 * fVar17;
  *(float *)(unaff_RBP + -0xc) = fVar39;
  *(float *)((int64_t)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((int64_t)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
  fVar24 = pfVar22[10];
  fVar26 = pfVar22[0xc];
  fVar31 = unaff_RDI[2];
  fVar32 = fVar25 * fVar11 + fVar7 * fVar27 + fVar24 * fVar15;
  fVar33 = fVar25 * fVar12 + fVar7 * fVar28 + fVar24 * fVar16;
  fVar34 = fVar25 * fVar13 + fVar7 * fVar29 + fVar24 * fVar17;
  fVar35 = fVar25 * fVar14 + fVar7 * fVar10 + fVar24 * fVar18;
  fVar24 = pfVar22[0xe];
  fVar7 = *(float *)(unaff_R15 + 0xac);
  fVar25 = *unaff_RDI;
  fVar27 = fVar4 * fVar11 + fVar26 * fVar27 + fVar24 * fVar15 + *(float *)(unaff_R15 + 0xa0);
  fVar28 = fVar4 * fVar12 + fVar26 * fVar28 + fVar24 * fVar16 + *(float *)(unaff_R15 + 0xa4);
  fVar29 = fVar4 * fVar13 + fVar26 * fVar29 + fVar24 * fVar17 + *(float *)(unaff_R15 + 0xa8);
  *(float *)(unaff_RBP + -10) = fVar36;
  *(float *)((int64_t)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((int64_t)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((int64_t)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((int64_t)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((int64_t)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((int64_t)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  local_var_30 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  local_var_38 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  local_var_40 = CONCAT44(fStack0000000000000034,local_var_30);
  local_var_48 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,local_var_38);
  lVar23 = (int64_t)unaff_R12B * 0x100;
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[3];
  unaff_RBP[8] = uVar19;
  unaff_RBP[9] = uVar20;
  *(float *)(unaff_RBP + 10) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((int64_t)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  local_var_30 = local_var_30 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((int64_t)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((int64_t)unaff_RBP + -4) = fVar3;
  *(int32_t *)(lVar23 + lVar9) = 0;
  local_buffer_3c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  local_var_38 = local_var_38 - fVar31;
  SystemCore_EventHandler(unaff_RBP + -4,&fStackX_20,&local_buffer_00000030);
  local_var_48 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((int64_t)unaff_RBP + -0x2c);
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x260) + 0x18);
  local_buffer_60 = fVar31 * fVar39 + fVar24 * fVar40 + fVar26 * fVar41;
  fStack0000000000000064 = fVar31 * fVar36 + fVar24 * fVar37 + fVar26 * fVar38;
  local_buffer_68 = fVar31 * fVar32 + fVar24 * fVar33 + fVar26 * fVar34;
  fStack000000000000006c = fVar31 * fVar35 + fVar24 * fVar35 + fVar26 * fVar35;
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  local_buffer_58 = pfVar22[2];
  fVar31 = pfVar22[3];
  unaff_RBP[0xc] = uVar19;
  unaff_RBP[0xd] = uVar20;
  *(float *)(unaff_RBP + 0xe) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = local_buffer_58;
  *(float *)((int64_t)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  local_buffer_50 = local_buffer_60 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((int64_t)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = local_buffer_58;
  *(float *)((int64_t)unaff_RBP + 0x1c) = fVar31;
  *(int32_t *)(lVar23 + lVar9) = 0;
  local_buffer_5c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar26;
  local_buffer_58 = local_buffer_68 - local_buffer_58;
  SystemCore_EventHandler(fVar26,&local_buffer_00000070,&local_buffer_00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= fStack0000000000000028)) &&
      (fStack0000000000000028 < *(float *)(unaff_RBX + 0x22c) ||
       fStack0000000000000028 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar21 = GenericFunction_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = local_buffer_70;
    *(int32_t *)((int64_t)unaff_RBP + 0x34) = local_buffer_74;
    *(int32_t *)(unaff_RBP + 7) = local_buffer_78;
    *(float *)((int64_t)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((int64_t)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = 0x3e19999a;
    DataStructure_0a7b0(unaff_RBX + 0x308,local_buffer_74,unaff_RBP + 4);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(unaff_RBP[0x10] ^ (uint64_t)&local_buffer_00000000);
}