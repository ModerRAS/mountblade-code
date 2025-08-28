#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part048.c - 4 个函数
// 函数: void NetworkSystem_a97d0(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint *param_5,
void NetworkSystem_a97d0(uint64_t param_1,int64_t param_2,int param_3,int param_4,uint *param_5,
                  uint64_t *param_6,int32_t param_7)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t uVar8;
  uint64_t local_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  char cStack_2ac;
  int8_t local_var_2ab;
  int8_t local_var_2aa;
  uint64_t local_var_2a8;
  int8_t local_var_2a0;
  int32_t local_var_29c;
  uint64_t local_var_298;
  uint64_t local_var_290;
  int32_t local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  uint64_t local_var_27c;
  uint64_t local_var_274;
  uint64_t local_var_26c;
  uint64_t local_var_264;
  uint64_t local_var_25c;
  uint64_t local_var_254;
  uint64_t local_var_24c;
  uint64_t local_var_244;
  uint64_t local_var_23c;
  uint64_t local_var_234;
  uint64_t local_var_22c;
  uint64_t local_var_224;
  uint local_var_21c;
  uint local_var_218;
  uint local_var_214;
  int32_t local_var_210;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  uint64_t local_var_1b0;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int16_t local_var_198;
  uint8_t local_var_196;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint local_var_180;
  uint local_var_17c;
  uint local_var_178;
  uint local_var_174;
  uint local_var_170;
  uint local_var_16c;
  uint local_var_168;
  uint local_var_164;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int iStack_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  uint64_t local_var_118;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int iStack_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  lVar7 = (int64_t)param_3 * 0xa60;
  if (*(int *)(lVar7 + 0x3608 + param_2) == 1) {
    local_var_1e8 = 0;
    local_var_1e0 = 0;
    local_var_1d8 = 0;
    local_var_1d0 = 0;
    local_var_1c8 = 0;
    local_var_1c0 = 0;
    local_var_1b8 = 0;
    local_var_1b0 = 0;
    local_var_1a8 = 0;
    local_var_1a4 = CONCAT31(local_var_1a4._1_3_,0xff);
    local_var_1a0 = 0xffffffff;
    local_var_19c = 0;
    local_var_198 = 0;
    local_var_160 = 0;
    local_var_158 = 0;
    local_var_150 = 0;
    local_var_148 = 0;
    local_var_144 = 1;
    local_var_134 = CONCAT22(local_var_134._2_2_,0xff00);
    uVar5 = (uint)local_var_12c >> 8;
    local_var_128 = 0;
    cStack_2ac = *(char *)(*(int64_t *)
                            (*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(lVar7 + 0x3778 + param_2) + 0x8a8) +
                              0x260) + 0x210) + 0xe1);
    local_var_134 = CONCAT31(local_var_134._1_3_,cStack_2ac);
    uVar8 = *(int8_t *)
             (*(int64_t *)
               (*(int64_t *)
                 (*(int64_t *)(*(int64_t *)((int64_t)param_4 * 0xa60 + 0x3778 + param_2) + 0x8a8)
                 + 0x260) + 0x210) + 0xde);
    local_var_130 = 2;
    local_var_180 = *param_5;
    local_var_17c = param_5[1];
    local_var_178 = param_5[2];
    local_var_174 = param_5[3];
    uVar3 = *param_6;
    uVar4 = param_6[1];
    local_var_13c = 0x10;
    local_var_140 = 3;
    local_var_12c = CONCAT31((uint3)uVar5 & 0xff0000,1);
    if (cStack_2ac == -1) {
      local_var_2ab = 0xff;
    }
    else {
      local_var_2ab = *(int8_t *)
                    ((int64_t)cStack_2ac * 0x1b0 + 0x104 +
                    *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(lVar7 + 0x36f8 + param_2) + 0x208) + 0x140));
    }
    local_var_190 = uVar3;
    local_var_188 = uVar4;
    local_var_170 = local_var_180;
    local_var_16c = local_var_17c;
    local_var_168 = local_var_178;
    local_var_164 = local_var_174;
    iStack_138 = param_4;
    SystemFunction_0001805345e0(&local_var_2c8);
    lVar6 = system_system_data_memory;
    local_var_2c8 = 0x1000000;
    local_var_2c0 = 0;
    local_var_2a8 = 0xffffffffffffffff;
    local_var_2a0 = 0;
    local_var_2b8 = 0xffffffffffffffff;
    local_var_29c = 0xffc00000;
    local_var_298 = 0xffc00000ffc00000;
    local_var_290 = 0xffc00000ffc00000;
    local_var_288 = 0xffc00000;
    local_var_280 = 0xffc00000;
    local_var_27c = 0x7fc000007fc00000;
    local_var_274 = 0x7fc000007fc00000;
    local_var_26c = 0x7fc000007fc00000;
    local_var_264 = 0x7fc000007fc00000;
    local_var_24c = 0x7fc000007fc00000;
    local_var_244 = 0x7fc000007fc00000;
    local_var_23c = 0x7fc000007fc00000;
    local_var_234 = 0x7fc000007fc00000;
    local_var_22c = 0x7fc000007fc00000;
    local_var_224 = 0x7fc000007fc00000;
    local_var_2bc = 1;
    local_var_284 = param_7;
    local_var_2b0 = 2;
    local_var_214 = local_var_178 ^ 0x80000000;
    local_var_21c = local_var_180 ^ 0x80000000;
    local_var_218 = local_var_17c ^ 0x80000000;
    local_var_210 = 0x7f7fffff;
    iVar1 = *(int *)(lVar7 + 0x30b8 + param_2);
    local_var_2aa = uVar8;
    local_var_25c = uVar3;
    local_var_254 = uVar4;
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    iVar2 = *(int *)((int64_t)param_4 * 0xa60 + 0x30b8 + param_2);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    local_var_108 = local_var_1e8;
    local_var_100 = local_var_1e0;
    local_var_f8 = local_var_1d8;
    local_var_f0 = local_var_1d0;
    local_var_e8 = local_var_1c8;
    local_var_e0 = local_var_1c0;
    local_var_d8 = CONCAT44(local_var_1b4,local_var_1b8);
    local_var_d0 = local_var_1b0;
    local_var_c8 = CONCAT44(local_var_1a4,local_var_1a8);
    local_var_c0 = CONCAT44(local_var_19c,local_var_1a0);
    local_var_b8 = CONCAT62(local_var_196,local_var_198);
    local_var_b0 = local_var_190;
    local_var_a0 = CONCAT44(local_var_17c,local_var_180);
    local_var_a8 = local_var_188;
    local_var_98 = CONCAT44(local_var_174,local_var_178);
    local_var_90 = CONCAT44(local_var_16c,local_var_170);
    local_var_88 = CONCAT44(local_var_164,local_var_168);
    local_var_80 = local_var_160;
    local_var_78 = local_var_158;
    local_var_70 = local_var_150;
    local_var_68 = local_var_148;
    local_var_64 = local_var_144;
    local_var_60 = local_var_140;
    local_var_5c = local_var_13c;
    iStack_58 = iStack_138;
    local_var_54 = local_var_134;
    local_var_50 = local_var_130;
    local_var_4c = local_var_12c;
    local_var_48 = CONCAT44(local_var_124,local_var_128);
    (**(code **)(lVar6 + 0x1c8))
              (*(int32_t *)(param_2 + 0x98d928),&local_var_2c8,&local_var_108,iVar2,iVar1);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
    }
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
  }
  return;
}
int32_t
NetworkSystem_a9bc0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,int16_t param_6)
{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  iVar1 = *(int *)(param_1 + 0x288);
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (uint64_t)(uVar5 + (uVar5 >> 6) * -0x40) * 0x24;
      lVar4 = *(int64_t *)(param_1 + 0x290 + (uint64_t)(uVar5 >> 6) * 8) + lVar3;
      NetworkSystem_a9ce0(lVar3,*(int16_t *)(lVar4 + 0x20),*(int16_t *)(lVar4 + 0x22),param_6,
                    param_5,param_4,param_3,param_2);
      NetworkSystem_a9ce0();
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  uVar2 = *(int32_t *)(param_1 + 0x288);
  LOCK();
  *(int32_t *)(param_1 + 0x288) = 0;
  UNLOCK();
  return uVar2;
}
int32_t NetworkSystem_a9bff(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int32_t uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t unaff_RBX;
  int64_t lVar3;
  uint unaff_ESI;
  int unaff_R12D;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t local_var_38;
  int64_t lStack0000000000000040;
  int64_t local_var_90;
  uint64_t local_buffer_b0;
  int16_t local_var_b8;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lStack0000000000000040 = param_3;
  do {
    lVar2 = (uint64_t)(unaff_ESI + (unaff_ESI >> 6) * -0x40) * 0x24;
    lVar3 = *(int64_t *)(lStack0000000000000040 + (uint64_t)(unaff_ESI >> 6) * 8) + lVar2;
    local_var_38 = param_2;
    NetworkSystem_a9ce0(lVar2,*(int16_t *)(lVar3 + 0x20),*(int16_t *)(lVar3 + 0x22),
                  local_var_b8,local_buffer_b0);
    local_var_38 = param_2;
    NetworkSystem_a9ce0();
    unaff_ESI = unaff_ESI + 1;
  } while ((int)unaff_ESI < unaff_R12D);
  uVar1 = *(int32_t *)(local_var_90 + 0x288);
  LOCK();
  *(int32_t *)(local_var_90 + 0x288) = 0;
  UNLOCK();
  return uVar1;
}
int32_t NetworkSystem_a9cc1(void)
{
  int32_t uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  uVar1 = *(int32_t *)(unaff_RDI + 0x288);
  LOCK();
  *(int32_t *)(unaff_RDI + 0x288) = unaff_EBP;
  UNLOCK();
  return uVar1;
}
// 函数: void NetworkSystem_a9ce0(uint64_t param_1,short param_2,short param_3,short param_4,int64_t param_5,
void NetworkSystem_a9ce0(uint64_t param_1,short param_2,short param_3,short param_4,int64_t param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8)
{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  char cVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t stack_array_248 [72];
  if ((param_2 == param_4) || (param_3 == param_4)) {
    if (param_5 != 0) {
      lVar13 = 4;
      lVar11 = (int64_t)param_2 * 0x240;
      if ((*(byte *)(lVar11 + 8 + param_5) & 1) == 0) {
        lVar14 = 4;
        puVar7 = (uint64_t *)(lVar11 + param_6);
        puVar8 = stack_array_248;
        do {
          puVar12 = puVar8;
          puVar10 = puVar7;
          uVar3 = puVar10[1];
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          *puVar12 = *puVar10;
          puVar12[1] = uVar3;
          uVar3 = puVar10[4];
          uVar6 = puVar10[5];
          puVar12[2] = uVar4;
          puVar12[3] = uVar5;
          uVar4 = puVar10[6];
          uVar5 = puVar10[7];
          puVar12[4] = uVar3;
          puVar12[5] = uVar6;
          uVar3 = puVar10[8];
          uVar6 = puVar10[9];
          puVar12[6] = uVar4;
          puVar12[7] = uVar5;
          uVar4 = puVar10[10];
          uVar5 = puVar10[0xb];
          puVar12[8] = uVar3;
          puVar12[9] = uVar6;
          uVar3 = puVar10[0xc];
          uVar6 = puVar10[0xd];
          puVar12[10] = uVar4;
          puVar12[0xb] = uVar5;
          uVar4 = puVar10[0xe];
          uVar5 = puVar10[0xf];
          puVar12[0xc] = uVar3;
          puVar12[0xd] = uVar6;
          puVar12[0xe] = uVar4;
          puVar12[0xf] = uVar5;
          lVar14 = lVar14 + -1;
          puVar7 = puVar10 + 0x10;
          puVar8 = puVar12 + 0x10;
        } while (lVar14 != 0);
        uVar3 = puVar10[0x11];
        uVar4 = puVar10[0x12];
        uVar5 = puVar10[0x13];
        puVar12[0x10] = puVar10[0x10];
        puVar12[0x11] = uVar3;
        uVar3 = puVar10[0x14];
        uVar6 = puVar10[0x15];
        puVar12[0x12] = uVar4;
        puVar12[0x13] = uVar5;
        uVar4 = puVar10[0x16];
        uVar5 = puVar10[0x17];
        puVar12[0x14] = uVar3;
        puVar12[0x15] = uVar6;
        puVar12[0x16] = uVar4;
        puVar12[0x17] = uVar5;
        lVar14 = 4;
        puVar7 = (uint64_t *)(lVar11 + param_5);
        puVar8 = stack_array_248;
        do {
          puVar12 = puVar8;
          puVar10 = puVar7;
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          *puVar10 = *puVar12;
          puVar10[1] = uVar3;
          uVar3 = puVar12[4];
          uVar6 = puVar12[5];
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          uVar4 = puVar12[6];
          uVar5 = puVar12[7];
          puVar10[4] = uVar3;
          puVar10[5] = uVar6;
          uVar3 = puVar12[8];
          uVar6 = puVar12[9];
          puVar10[6] = uVar4;
          puVar10[7] = uVar5;
          uVar4 = puVar12[10];
          uVar5 = puVar12[0xb];
          puVar10[8] = uVar3;
          puVar10[9] = uVar6;
          uVar3 = puVar12[0xc];
          uVar6 = puVar12[0xd];
          puVar10[10] = uVar4;
          puVar10[0xb] = uVar5;
          uVar4 = puVar12[0xe];
          uVar5 = puVar12[0xf];
          puVar10[0xc] = uVar3;
          puVar10[0xd] = uVar6;
          puVar10[0xe] = uVar4;
          puVar10[0xf] = uVar5;
          lVar14 = lVar14 + -1;
          puVar7 = puVar10 + 0x10;
          puVar8 = puVar12 + 0x10;
        } while (lVar14 != 0);
        uVar3 = puVar12[0x11];
        uVar4 = puVar12[0x12];
        uVar5 = puVar12[0x13];
        puVar10[0x10] = puVar12[0x10];
        puVar10[0x11] = uVar3;
        uVar3 = puVar12[0x14];
        uVar6 = puVar12[0x15];
        puVar10[0x12] = uVar4;
        puVar10[0x13] = uVar5;
        uVar4 = puVar12[0x16];
        uVar5 = puVar12[0x17];
        puVar10[0x14] = uVar3;
        puVar10[0x15] = uVar6;
        puVar10[0x16] = uVar4;
        puVar10[0x17] = uVar5;
      }
      lVar11 = (int64_t)param_3 * 0x240;
      if ((*(byte *)(lVar11 + 8 + param_5) & 1) == 0) {
        lVar14 = 4;
        puVar7 = (uint64_t *)(lVar11 + param_6);
        puVar8 = stack_array_248;
        do {
          puVar12 = puVar8;
          puVar10 = puVar7;
          uVar3 = puVar10[1];
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          *puVar12 = *puVar10;
          puVar12[1] = uVar3;
          uVar3 = puVar10[4];
          uVar6 = puVar10[5];
          puVar12[2] = uVar4;
          puVar12[3] = uVar5;
          uVar4 = puVar10[6];
          uVar5 = puVar10[7];
          puVar12[4] = uVar3;
          puVar12[5] = uVar6;
          uVar3 = puVar10[8];
          uVar6 = puVar10[9];
          puVar12[6] = uVar4;
          puVar12[7] = uVar5;
          uVar4 = puVar10[10];
          uVar5 = puVar10[0xb];
          puVar12[8] = uVar3;
          puVar12[9] = uVar6;
          uVar3 = puVar10[0xc];
          uVar6 = puVar10[0xd];
          puVar12[10] = uVar4;
          puVar12[0xb] = uVar5;
          uVar4 = puVar10[0xe];
          uVar5 = puVar10[0xf];
          puVar12[0xc] = uVar3;
          puVar12[0xd] = uVar6;
          puVar12[0xe] = uVar4;
          puVar12[0xf] = uVar5;
          lVar14 = lVar14 + -1;
          puVar7 = puVar10 + 0x10;
          puVar8 = puVar12 + 0x10;
        } while (lVar14 != 0);
        uVar3 = puVar10[0x11];
        uVar4 = puVar10[0x12];
        uVar5 = puVar10[0x13];
        puVar12[0x10] = puVar10[0x10];
        puVar12[0x11] = uVar3;
        uVar3 = puVar10[0x14];
        uVar6 = puVar10[0x15];
        puVar12[0x12] = uVar4;
        puVar12[0x13] = uVar5;
        uVar4 = puVar10[0x16];
        uVar5 = puVar10[0x17];
        puVar12[0x14] = uVar3;
        puVar12[0x15] = uVar6;
        puVar12[0x16] = uVar4;
        puVar12[0x17] = uVar5;
        puVar7 = (uint64_t *)(lVar11 + param_5);
        puVar8 = stack_array_248;
        do {
          puVar12 = puVar8;
          puVar10 = puVar7;
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          *puVar10 = *puVar12;
          puVar10[1] = uVar3;
          uVar3 = puVar12[4];
          uVar6 = puVar12[5];
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          uVar4 = puVar12[6];
          uVar5 = puVar12[7];
          puVar10[4] = uVar3;
          puVar10[5] = uVar6;
          uVar3 = puVar12[8];
          uVar6 = puVar12[9];
          puVar10[6] = uVar4;
          puVar10[7] = uVar5;
          uVar4 = puVar12[10];
          uVar5 = puVar12[0xb];
          puVar10[8] = uVar3;
          puVar10[9] = uVar6;
          uVar3 = puVar12[0xc];
          uVar6 = puVar12[0xd];
          puVar10[10] = uVar4;
          puVar10[0xb] = uVar5;
          uVar4 = puVar12[0xe];
          uVar5 = puVar12[0xf];
          puVar10[0xc] = uVar3;
          puVar10[0xd] = uVar6;
          puVar10[0xe] = uVar4;
          puVar10[0xf] = uVar5;
          lVar13 = lVar13 + -1;
          puVar7 = puVar10 + 0x10;
          puVar8 = puVar12 + 0x10;
        } while (lVar13 != 0);
        uVar3 = puVar12[0x11];
        uVar4 = puVar12[0x12];
        uVar5 = puVar12[0x13];
        puVar10[0x10] = puVar12[0x10];
        puVar10[0x11] = uVar3;
        uVar3 = puVar12[0x14];
        uVar6 = puVar12[0x15];
        puVar10[0x12] = uVar4;
        puVar10[0x13] = uVar5;
        uVar4 = puVar12[0x16];
        uVar5 = puVar12[0x17];
        puVar10[0x14] = uVar3;
        puVar10[0x15] = uVar6;
        puVar10[0x16] = uVar4;
        puVar10[0x17] = uVar5;
      }
    }
    lVar11 = (int64_t)param_3 * 0x200 + param_7;
    param_7 = (int64_t)param_2 * 0x200 + param_7;
    if (param_5 == 0) {
      param_5 = param_6;
    }
    lVar13 = (int64_t)param_2 * 0x240 + param_5;
    param_5 = (int64_t)param_3 * 0x240 + param_5;
    fVar1 = *(float *)(param_5 + 0x28);
    fVar2 = *(float *)(param_5 + 0x2c);
    fVar17 = *(float *)(lVar13 + 0x28) - fVar1;
    fVar15 = *(float *)(lVar13 + 0x2c) - fVar2;
    fVar16 = *(float *)(lVar13 + 0x24) - *(float *)(param_5 + 0x24);
    if ((((*(uint *)(lVar11 + 0x24) & 0x40) != 0) && ((*(byte *)(param_7 + 0x24) & 0x80) != 0)) &&
       (*(char *)(param_7 + 0x98) == '\0')) {
      if ((*(uint *)(lVar11 + 0x24) & 1) != 0) {
        *(uint *)(param_5 + 8) = *(uint *)(param_5 + 8) & 0xfffffeff;
      }
      if (((46.24 < fVar1 * fVar1 + *(float *)(param_5 + 0x24) * *(float *)(param_5 + 0x24) +
                    fVar2 * fVar2) &&
          (0.0 < *(float *)(lVar13 + 0x44) || *(float *)(lVar13 + 0x44) == 0.0)) &&
         (25.0 < fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15)) {
        if ((*(char *)(lVar11 + 0x99) != '\0') &&
           (cVar9 = SystemFunction_000180508340(param_8 + 0x87b760,lVar11,param_7), cVar9 == '\0')) {
          return;
        }
        if (*(int *)(param_7 + 0x194) == 1) {
          *(int32_t *)(lVar13 + 0x158) = 0xbf19999a;
        }
      }
    }
  }
  return;
}
// 函数: void NetworkSystem_a9d08(void)
void NetworkSystem_a9d08(void)
{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  char cVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  short unaff_BX;
  int64_t lVar13;
  int64_t lVar14;
  int64_t in_R10;
  short in_R11W;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t stack_special_x_20;
  int64_t local_var_298;
  int64_t local_var_2a0;
  int64_t local_var_2a8;
  if (in_R10 != 0) {
    lVar13 = 4;
    lVar11 = (int64_t)unaff_BX * 0x240;
    if ((*(byte *)(lVar11 + 8 + in_R10) & 1) == 0) {
      lVar14 = 4;
      puVar7 = (uint64_t *)(lVar11 + local_var_298);
      puVar8 = &stack_special_x_20;
      do {
        puVar12 = puVar8;
        puVar10 = puVar7;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        *puVar12 = *puVar10;
        puVar12[1] = uVar3;
        uVar3 = puVar10[4];
        uVar6 = puVar10[5];
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar12[4] = uVar3;
        puVar12[5] = uVar6;
        uVar3 = puVar10[8];
        uVar6 = puVar10[9];
        puVar12[6] = uVar4;
        puVar12[7] = uVar5;
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar12[8] = uVar3;
        puVar12[9] = uVar6;
        uVar3 = puVar10[0xc];
        uVar6 = puVar10[0xd];
        puVar12[10] = uVar4;
        puVar12[0xb] = uVar5;
        uVar4 = puVar10[0xe];
        uVar5 = puVar10[0xf];
        puVar12[0xc] = uVar3;
        puVar12[0xd] = uVar6;
        puVar12[0xe] = uVar4;
        puVar12[0xf] = uVar5;
        lVar14 = lVar14 + -1;
        puVar7 = puVar10 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar14 != 0);
      uVar3 = puVar10[0x11];
      uVar4 = puVar10[0x12];
      uVar5 = puVar10[0x13];
      puVar12[0x10] = puVar10[0x10];
      puVar12[0x11] = uVar3;
      uVar3 = puVar10[0x14];
      uVar6 = puVar10[0x15];
      puVar12[0x12] = uVar4;
      puVar12[0x13] = uVar5;
      uVar4 = puVar10[0x16];
      uVar5 = puVar10[0x17];
      puVar12[0x14] = uVar3;
      puVar12[0x15] = uVar6;
      puVar12[0x16] = uVar4;
      puVar12[0x17] = uVar5;
      lVar14 = 4;
      puVar7 = (uint64_t *)(lVar11 + in_R10);
      puVar8 = &stack_special_x_20;
      do {
        puVar12 = puVar8;
        puVar10 = puVar7;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar10 = *puVar12;
        puVar10[1] = uVar3;
        uVar3 = puVar12[4];
        uVar6 = puVar12[5];
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        puVar10[4] = uVar3;
        puVar10[5] = uVar6;
        uVar3 = puVar12[8];
        uVar6 = puVar12[9];
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        puVar10[8] = uVar3;
        puVar10[9] = uVar6;
        uVar3 = puVar12[0xc];
        uVar6 = puVar12[0xd];
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar4 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        puVar10[0xc] = uVar3;
        puVar10[0xd] = uVar6;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        lVar14 = lVar14 + -1;
        puVar7 = puVar10 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar14 != 0);
      uVar3 = puVar12[0x11];
      uVar4 = puVar12[0x12];
      uVar5 = puVar12[0x13];
      puVar10[0x10] = puVar12[0x10];
      puVar10[0x11] = uVar3;
      uVar3 = puVar12[0x14];
      uVar6 = puVar12[0x15];
      puVar10[0x12] = uVar4;
      puVar10[0x13] = uVar5;
      uVar4 = puVar12[0x16];
      uVar5 = puVar12[0x17];
      puVar10[0x14] = uVar3;
      puVar10[0x15] = uVar6;
      puVar10[0x16] = uVar4;
      puVar10[0x17] = uVar5;
    }
    lVar11 = (int64_t)in_R11W * 0x240;
    if ((*(byte *)(lVar11 + 8 + in_R10) & 1) == 0) {
      lVar14 = 4;
      puVar7 = (uint64_t *)(lVar11 + local_var_298);
      puVar8 = &stack_special_x_20;
      do {
        puVar12 = puVar8;
        puVar10 = puVar7;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        *puVar12 = *puVar10;
        puVar12[1] = uVar3;
        uVar3 = puVar10[4];
        uVar6 = puVar10[5];
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar12[4] = uVar3;
        puVar12[5] = uVar6;
        uVar3 = puVar10[8];
        uVar6 = puVar10[9];
        puVar12[6] = uVar4;
        puVar12[7] = uVar5;
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar12[8] = uVar3;
        puVar12[9] = uVar6;
        uVar3 = puVar10[0xc];
        uVar6 = puVar10[0xd];
        puVar12[10] = uVar4;
        puVar12[0xb] = uVar5;
        uVar4 = puVar10[0xe];
        uVar5 = puVar10[0xf];
        puVar12[0xc] = uVar3;
        puVar12[0xd] = uVar6;
        puVar12[0xe] = uVar4;
        puVar12[0xf] = uVar5;
        lVar14 = lVar14 + -1;
        puVar7 = puVar10 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar14 != 0);
      uVar3 = puVar10[0x11];
      uVar4 = puVar10[0x12];
      uVar5 = puVar10[0x13];
      puVar12[0x10] = puVar10[0x10];
      puVar12[0x11] = uVar3;
      uVar3 = puVar10[0x14];
      uVar6 = puVar10[0x15];
      puVar12[0x12] = uVar4;
      puVar12[0x13] = uVar5;
      uVar4 = puVar10[0x16];
      uVar5 = puVar10[0x17];
      puVar12[0x14] = uVar3;
      puVar12[0x15] = uVar6;
      puVar12[0x16] = uVar4;
      puVar12[0x17] = uVar5;
      puVar7 = (uint64_t *)(lVar11 + in_R10);
      puVar8 = &stack_special_x_20;
      do {
        puVar12 = puVar8;
        puVar10 = puVar7;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar10 = *puVar12;
        puVar10[1] = uVar3;
        uVar3 = puVar12[4];
        uVar6 = puVar12[5];
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        puVar10[4] = uVar3;
        puVar10[5] = uVar6;
        uVar3 = puVar12[8];
        uVar6 = puVar12[9];
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        puVar10[8] = uVar3;
        puVar10[9] = uVar6;
        uVar3 = puVar12[0xc];
        uVar6 = puVar12[0xd];
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar4 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        puVar10[0xc] = uVar3;
        puVar10[0xd] = uVar6;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        lVar13 = lVar13 + -1;
        puVar7 = puVar10 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar13 != 0);
      uVar3 = puVar12[0x11];
      uVar4 = puVar12[0x12];
      uVar5 = puVar12[0x13];
      puVar10[0x10] = puVar12[0x10];
      puVar10[0x11] = uVar3;
      uVar3 = puVar12[0x14];
      uVar6 = puVar12[0x15];
      puVar10[0x12] = uVar4;
      puVar10[0x13] = uVar5;
      uVar4 = puVar12[0x16];
      uVar5 = puVar12[0x17];
      puVar10[0x14] = uVar3;
      puVar10[0x15] = uVar6;
      puVar10[0x16] = uVar4;
      puVar10[0x17] = uVar5;
    }
  }
  lVar11 = (int64_t)in_R11W * 0x200 + local_var_2a0;
  lVar13 = (int64_t)unaff_BX * 0x200 + local_var_2a0;
  if (in_R10 == 0) {
    in_R10 = local_var_298;
  }
  lVar15 = (int64_t)unaff_BX * 0x240 + in_R10;
  lVar14 = (int64_t)in_R11W * 0x240 + in_R10;
  fVar1 = *(float *)(lVar14 + 0x28);
  fVar2 = *(float *)(lVar14 + 0x2c);
  fVar18 = *(float *)(lVar15 + 0x28) - fVar1;
  fVar16 = *(float *)(lVar15 + 0x2c) - fVar2;
  fVar17 = *(float *)(lVar15 + 0x24) - *(float *)(lVar14 + 0x24);
  if ((((*(uint *)(lVar11 + 0x24) & 0x40) != 0) && ((*(byte *)(lVar13 + 0x24) & 0x80) != 0)) &&
     (*(char *)(lVar13 + 0x98) == '\0')) {
    if ((*(uint *)(lVar11 + 0x24) & 1) != 0) {
      *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) & 0xfffffeff;
    }
    if (((46.24 < fVar1 * fVar1 + *(float *)(lVar14 + 0x24) * *(float *)(lVar14 + 0x24) +
                  fVar2 * fVar2) &&
        (0.0 < *(float *)(lVar15 + 0x44) || *(float *)(lVar15 + 0x44) == 0.0)) &&
       (25.0 < fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16)) {
      if ((*(char *)(lVar11 + 0x99) != '\0') &&
         (cVar9 = SystemFunction_000180508340(local_var_2a8 + 0x87b760,lVar11,lVar13), cVar9 == '\0')) {
        return;
      }
      if (*(int *)(lVar13 + 0x194) == 1) {
        *(int32_t *)(lVar15 + 0x158) = 0xbf19999a;
      }
    }
  }
  return;
}
// 函数: void NetworkSystem_a9ff5(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void NetworkSystem_a9ff5(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
{
  uint *puVar1;
  float fVar2;
  int8_t in_AL;
  char cVar3;
  uint8_t in_register_00000001;
  int64_t unaff_RBX;
  int64_t in_R9;
  int64_t in_R11;
  float in_XMM4_Da;
  int64_t local_var_2a8;
  if (((*(byte *)(in_R9 + 0x24) & 0x80) != 0) && (*(char *)(in_R9 + 0x98) == '\0')) {
    if ((param_1 & 1) != 0) {
      puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 8);
      *puVar1 = *puVar1 & 0xfffffeff;
    }
    fVar2 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x24);
    if (((46.24 < param_3 * param_3 + fVar2 * fVar2 + param_4 * param_4) &&
        (0.0 < *(float *)(in_R11 + 0x44) || *(float *)(in_R11 + 0x44) == 0.0)) &&
       (25.0 < in_XMM4_Da)) {
      if ((*(char *)(unaff_RBX + 0x99) != '\0') &&
         (cVar3 = SystemFunction_000180508340(local_var_2a8 + 0x87b760), cVar3 == '\0')) {
        return;
      }
      if (*(int *)(in_R9 + 0x194) == 1) {
        *(int32_t *)(in_R11 + 0x158) = 0xbf19999a;
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address