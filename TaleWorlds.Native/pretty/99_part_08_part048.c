#include "TaleWorlds.Native.Split.h"

// 99_part_08_part048.c - 4 个函数

// 函数: void FUN_1805a97d0(uint64_t param_1,longlong param_2,int param_3,int param_4,uint *param_5,
void FUN_1805a97d0(uint64_t param_1,longlong param_2,int param_3,int param_4,uint *param_5,
                  uint64_t *param_6,int32_t param_7)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t uVar8;
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  char cStack_2ac;
  int8_t uStack_2ab;
  int8_t uStack_2aa;
  uint64_t uStack_2a8;
  int8_t uStack_2a0;
  int32_t uStack_29c;
  uint64_t uStack_298;
  uint64_t uStack_290;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  uint64_t uStack_27c;
  uint64_t uStack_274;
  uint64_t uStack_26c;
  uint64_t uStack_264;
  uint64_t uStack_25c;
  uint64_t uStack_254;
  uint64_t uStack_24c;
  uint64_t uStack_244;
  uint64_t uStack_23c;
  uint64_t uStack_234;
  uint64_t uStack_22c;
  uint64_t uStack_224;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  int32_t uStack_210;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int16_t uStack_198;
  uint8_t uStack_196;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int iStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  uint64_t uStack_118;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int iStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  lVar7 = (longlong)param_3 * 0xa60;
  if (*(int *)(lVar7 + 0x3608 + param_2) == 1) {
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = CONCAT31(uStack_1a4._1_3_,0xff);
    uStack_1a0 = 0xffffffff;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_134 = CONCAT22(uStack_134._2_2_,0xff00);
    uVar5 = (uint)uStack_12c >> 8;
    uStack_128 = 0;
    cStack_2ac = *(char *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar7 + 0x3778 + param_2) + 0x8a8) +
                              0x260) + 0x210) + 0xe1);
    uStack_134 = CONCAT31(uStack_134._1_3_,cStack_2ac);
    uVar8 = *(int8_t *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)param_4 * 0xa60 + 0x3778 + param_2) + 0x8a8)
                 + 0x260) + 0x210) + 0xde);
    uStack_130 = 2;
    uStack_180 = *param_5;
    uStack_17c = param_5[1];
    uStack_178 = param_5[2];
    uStack_174 = param_5[3];
    uVar3 = *param_6;
    uVar4 = param_6[1];
    uStack_13c = 0x10;
    uStack_140 = 3;
    uStack_12c = CONCAT31((uint3)uVar5 & 0xff0000,1);
    if (cStack_2ac == -1) {
      uStack_2ab = 0xff;
    }
    else {
      uStack_2ab = *(int8_t *)
                    ((longlong)cStack_2ac * 0x1b0 + 0x104 +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x36f8 + param_2) + 0x208) + 0x140));
    }
    uStack_190 = uVar3;
    uStack_188 = uVar4;
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    uStack_168 = uStack_178;
    uStack_164 = uStack_174;
    iStack_138 = param_4;
    func_0x0001805345e0(&uStack_2c8);
    lVar6 = _DAT_180c8ece0;
    uStack_2c8 = 0x1000000;
    uStack_2c0 = 0;
    uStack_2a8 = 0xffffffffffffffff;
    uStack_2a0 = 0;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_29c = 0xffc00000;
    uStack_298 = 0xffc00000ffc00000;
    uStack_290 = 0xffc00000ffc00000;
    uStack_288 = 0xffc00000;
    uStack_280 = 0xffc00000;
    uStack_27c = 0x7fc000007fc00000;
    uStack_274 = 0x7fc000007fc00000;
    uStack_26c = 0x7fc000007fc00000;
    uStack_264 = 0x7fc000007fc00000;
    uStack_24c = 0x7fc000007fc00000;
    uStack_244 = 0x7fc000007fc00000;
    uStack_23c = 0x7fc000007fc00000;
    uStack_234 = 0x7fc000007fc00000;
    uStack_22c = 0x7fc000007fc00000;
    uStack_224 = 0x7fc000007fc00000;
    uStack_2bc = 1;
    uStack_284 = param_7;
    uStack_2b0 = 2;
    uStack_214 = uStack_178 ^ 0x80000000;
    uStack_21c = uStack_180 ^ 0x80000000;
    uStack_218 = uStack_17c ^ 0x80000000;
    uStack_210 = 0x7f7fffff;
    iVar1 = *(int *)(lVar7 + 0x30b8 + param_2);
    uStack_2aa = uVar8;
    uStack_25c = uVar3;
    uStack_254 = uVar4;
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
    }
    iVar2 = *(int *)((longlong)param_4 * 0xa60 + 0x30b8 + param_2);
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
    }
    uStack_108 = uStack_1e8;
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
    uStack_e0 = uStack_1c0;
    uStack_d8 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_d0 = uStack_1b0;
    uStack_c8 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_c0 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_b8 = CONCAT62(uStack_196,uStack_198);
    uStack_b0 = uStack_190;
    uStack_a0 = CONCAT44(uStack_17c,uStack_180);
    uStack_a8 = uStack_188;
    uStack_98 = CONCAT44(uStack_174,uStack_178);
    uStack_90 = CONCAT44(uStack_16c,uStack_170);
    uStack_88 = CONCAT44(uStack_164,uStack_168);
    uStack_80 = uStack_160;
    uStack_78 = uStack_158;
    uStack_70 = uStack_150;
    uStack_68 = uStack_148;
    uStack_64 = uStack_144;
    uStack_60 = uStack_140;
    uStack_5c = uStack_13c;
    iStack_58 = iStack_138;
    uStack_54 = uStack_134;
    uStack_50 = uStack_130;
    uStack_4c = uStack_12c;
    uStack_48 = CONCAT44(uStack_124,uStack_128);
    (**(code **)(lVar6 + 0x1c8))
              (*(int32_t *)(param_2 + 0x98d928),&uStack_2c8,&uStack_108,iVar2,iVar1);
    if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
    }
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
    }
  }
  return;
}



int32_t
FUN_1805a9bc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,int16_t param_6)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x288);
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (ulonglong)(uVar5 + (uVar5 >> 6) * -0x40) * 0x24;
      lVar4 = *(longlong *)(param_1 + 0x290 + (ulonglong)(uVar5 >> 6) * 8) + lVar3;
      FUN_1805a9ce0(lVar3,*(int16_t *)(lVar4 + 0x20),*(int16_t *)(lVar4 + 0x22),param_6,
                    param_5,param_4,param_3,param_2);
      FUN_1805a9ce0();
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  uVar2 = *(int32_t *)(param_1 + 0x288);
  LOCK();
  *(int32_t *)(param_1 + 0x288) = 0;
  UNLOCK();
  return uVar2;
}



int32_t FUN_1805a9bff(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t uVar1;
  longlong in_RAX;
  longlong lVar2;
  uint64_t unaff_RBX;
  longlong lVar3;
  uint unaff_ESI;
  int unaff_R12D;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uStack0000000000000038;
  longlong lStack0000000000000040;
  longlong in_stack_00000090;
  uint64_t in_stack_000000b0;
  int16_t in_stack_000000b8;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lStack0000000000000040 = param_3;
  do {
    lVar2 = (ulonglong)(unaff_ESI + (unaff_ESI >> 6) * -0x40) * 0x24;
    lVar3 = *(longlong *)(lStack0000000000000040 + (ulonglong)(unaff_ESI >> 6) * 8) + lVar2;
    uStack0000000000000038 = param_2;
    FUN_1805a9ce0(lVar2,*(int16_t *)(lVar3 + 0x20),*(int16_t *)(lVar3 + 0x22),
                  in_stack_000000b8,in_stack_000000b0);
    uStack0000000000000038 = param_2;
    FUN_1805a9ce0();
    unaff_ESI = unaff_ESI + 1;
  } while ((int)unaff_ESI < unaff_R12D);
  uVar1 = *(int32_t *)(in_stack_00000090 + 0x288);
  LOCK();
  *(int32_t *)(in_stack_00000090 + 0x288) = 0;
  UNLOCK();
  return uVar1;
}



int32_t FUN_1805a9cc1(void)

{
  int32_t uVar1;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  
  uVar1 = *(int32_t *)(unaff_RDI + 0x288);
  LOCK();
  *(int32_t *)(unaff_RDI + 0x288) = unaff_EBP;
  UNLOCK();
  return uVar1;
}






// 函数: void FUN_1805a9ce0(uint64_t param_1,short param_2,short param_3,short param_4,longlong param_5,
void FUN_1805a9ce0(uint64_t param_1,short param_2,short param_3,short param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8)

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
  longlong lVar11;
  uint64_t *puVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t auStack_248 [72];
  
  if ((param_2 == param_4) || (param_3 == param_4)) {
    if (param_5 != 0) {
      lVar13 = 4;
      lVar11 = (longlong)param_2 * 0x240;
      if ((*(byte *)(lVar11 + 8 + param_5) & 1) == 0) {
        lVar14 = 4;
        puVar7 = (uint64_t *)(lVar11 + param_6);
        puVar8 = auStack_248;
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
        puVar8 = auStack_248;
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
      lVar11 = (longlong)param_3 * 0x240;
      if ((*(byte *)(lVar11 + 8 + param_5) & 1) == 0) {
        lVar14 = 4;
        puVar7 = (uint64_t *)(lVar11 + param_6);
        puVar8 = auStack_248;
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
        puVar8 = auStack_248;
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
    lVar11 = (longlong)param_3 * 0x200 + param_7;
    param_7 = (longlong)param_2 * 0x200 + param_7;
    if (param_5 == 0) {
      param_5 = param_6;
    }
    lVar13 = (longlong)param_2 * 0x240 + param_5;
    param_5 = (longlong)param_3 * 0x240 + param_5;
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
           (cVar9 = func_0x000180508340(param_8 + 0x87b760,lVar11,param_7), cVar9 == '\0')) {
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






// 函数: void FUN_1805a9d08(void)
void FUN_1805a9d08(void)

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
  longlong lVar11;
  uint64_t *puVar12;
  short unaff_BX;
  longlong lVar13;
  longlong lVar14;
  longlong in_R10;
  short in_R11W;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uStackX_20;
  longlong in_stack_00000298;
  longlong in_stack_000002a0;
  longlong in_stack_000002a8;
  
  if (in_R10 != 0) {
    lVar13 = 4;
    lVar11 = (longlong)unaff_BX * 0x240;
    if ((*(byte *)(lVar11 + 8 + in_R10) & 1) == 0) {
      lVar14 = 4;
      puVar7 = (uint64_t *)(lVar11 + in_stack_00000298);
      puVar8 = &uStackX_20;
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
      puVar8 = &uStackX_20;
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
    lVar11 = (longlong)in_R11W * 0x240;
    if ((*(byte *)(lVar11 + 8 + in_R10) & 1) == 0) {
      lVar14 = 4;
      puVar7 = (uint64_t *)(lVar11 + in_stack_00000298);
      puVar8 = &uStackX_20;
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
      puVar8 = &uStackX_20;
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
  lVar11 = (longlong)in_R11W * 0x200 + in_stack_000002a0;
  lVar13 = (longlong)unaff_BX * 0x200 + in_stack_000002a0;
  if (in_R10 == 0) {
    in_R10 = in_stack_00000298;
  }
  lVar15 = (longlong)unaff_BX * 0x240 + in_R10;
  lVar14 = (longlong)in_R11W * 0x240 + in_R10;
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
         (cVar9 = func_0x000180508340(in_stack_000002a8 + 0x87b760,lVar11,lVar13), cVar9 == '\0')) {
        return;
      }
      if (*(int *)(lVar13 + 0x194) == 1) {
        *(int32_t *)(lVar15 + 0x158) = 0xbf19999a;
      }
    }
  }
  return;
}






// 函数: void FUN_1805a9ff5(ulonglong param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1805a9ff5(ulonglong param_1,uint64_t param_2,float param_3,float param_4)

{
  uint *puVar1;
  float fVar2;
  int8_t in_AL;
  char cVar3;
  uint8_t in_register_00000001;
  longlong unaff_RBX;
  longlong in_R9;
  longlong in_R11;
  float in_XMM4_Da;
  longlong in_stack_000002a8;
  
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
         (cVar3 = func_0x000180508340(in_stack_000002a8 + 0x87b760), cVar3 == '\0')) {
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




