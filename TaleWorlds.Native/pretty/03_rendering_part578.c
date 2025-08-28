#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part578.c - 4 个函数

// 函数: void FUN_180584d80(int64_t param_1,float *param_2,int32_t param_3,int32_t param_4,
void FUN_180584d80(int64_t param_1,float *param_2,int32_t param_3,int32_t param_4,
                  uint64_t *param_5,int *param_6,int64_t param_7,int32_t *param_8,
                  int8_t *param_9)

{
  uint64_t uVar1;
  int8_t uVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int8_t uVar10;
  uint64_t *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t uVar22;
  float fVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  float fVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  int32_t uVar33;
  int32_t uVar34;
  int32_t uVar35;
  int32_t uVar36;
  int32_t uVar37;
  int32_t uVar38;
  int32_t uVar39;
  int32_t uVar40;
  uint64_t in_stack_fffffffffffffdb0;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  int32_t uStack_1f0;
  uint64_t uStack_1e8;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  float fStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int8_t auStack_108 [16];
  int8_t auStack_f8 [184];
  
  uStack_158 = 0xfffffffffffffffe;
  iVar9 = 0;
  if (((-1 < *(int *)(param_1 + 0x2a0)) &&
      (iVar9 = *(int *)((int64_t)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30b8 +
                       *(int64_t *)(param_1 + 0x10)), iVar9 != 0)) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar9);
  }
  iVar8 = 0;
  if (((param_2[10] != -NAN) && (-1 < (int)param_2[0xd])) &&
     ((iVar8 = *(int *)((int64_t)(int)param_2[0xd] * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x10)
                       ), iVar8 != 0 && (system_cache_buffer != 0)))) {
    (**(code **)(system_cache_buffer + 0x30))(iVar8);
  }
  uVar2 = 0xff;
  if ((-1 < (int)param_2[0xd]) && (*(char *)(param_2 + 0xf) != -1)) {
    uVar2 = *(int8_t *)
             ((int64_t)*(char *)(param_2 + 0xf) * 0x1b0 + 0x104 +
             *(int64_t *)
              (*(int64_t *)
                (*(int64_t *)
                  ((int64_t)(int)param_2[0xd] * 0xa60 + 0x36f8 + *(int64_t *)(param_1 + 0x10)) +
                0x208) + 0x140));
  }
  fVar28 = param_2[10];
  if ((((int)fVar28 - 3U & 0xfffffffc) == 0) && (fVar28 != 7.00649e-45)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if (((int)fVar28 - 4U & 0xfffffffd) == 0) {
    *param_6 = 1;
  }
  else {
    *param_6 = 3 - (uint)(((int)fVar28 - 3U & 0xfffffffd) != 0);
  }
  *(int16_t *)(param_7 + 1) = 0;
  *(int8_t *)(param_7 + 5) = 1;
  *(int8_t *)(param_7 + 9) = 0;
  *(int32_t *)(param_7 + 0x20) = 0xffffffff;
  *(int8_t *)(param_7 + 0x28) = 0;
  *(int32_t *)(param_7 + 0x2c) = 0xffc00000;
  *(int32_t *)(param_7 + 0x30) = 0xffc00000;
  *(int32_t *)(param_7 + 0x34) = 0xffc00000;
  *(int32_t *)(param_7 + 0x38) = 0xffc00000;
  *(int32_t *)(param_7 + 0x44) = 0xffc00000;
  *(int32_t *)(param_7 + 0x48) = 0xffc00000;
  *(uint64_t *)(param_7 + 0x4c) = 0x7fc000007fc00000;
  *(uint64_t *)(param_7 + 0x54) = 0x7fc000007fc00000;
  *(uint64_t *)(param_7 + 0x9c) = 0x7fc000007fc00000;
  *(uint64_t *)(param_7 + 0xa4) = 0x7fc000007fc00000;
  *(bool *)param_7 = fVar28 == 4.2039e-45;
  *(int8_t *)(param_7 + 3) = uVar10;
  *(bool *)(param_7 + 4) = fVar28 == 5.60519e-45;
  *(bool *)(param_7 + 6) = fVar28 == 7.00649e-45;
  *(int8_t *)(param_7 + 7) = *(int8_t *)(param_1 + 0x3d1);
  *(bool *)(param_7 + 8) = *(int64_t *)(param_2 + 8) != 0;
  *(bool *)(param_7 + 10) = fVar28 == 2.8026e-45;
  *(bool *)(param_7 + 0xb) = param_2[10] == 9.80909e-45;
  *(int *)(param_7 + 0xc) = *param_6;
  *(int32_t *)(param_7 + 0x10) = *(int32_t *)(param_1 + 0xc);
  *(int32_t *)(param_7 + 0x14) = param_3;
  *(int32_t *)(param_7 + 0x18) = param_4;
  *(int8_t *)(param_7 + 0x1c) = *(int8_t *)(param_2 + 0xf);
  *(int8_t *)(param_7 + 0x1e) = *(int8_t *)(param_1 + 0x380);
  *(int8_t *)(param_7 + 0x1d) = uVar2;
  *(float *)(param_7 + 0x24) = param_2[0xc];
  *(int32_t *)(param_7 + 0x3c) = *(int32_t *)(param_1 + 0x288);
  *(int32_t *)(param_7 + 0x40) = *(int32_t *)(param_1 + 0xc4);
  uVar1 = param_5[1];
  *(uint64_t *)(param_7 + 0x5c) = *param_5;
  *(uint64_t *)(param_7 + 100) = uVar1;
  fVar28 = param_2[1];
  fVar19 = param_2[2];
  fVar20 = param_2[3];
  *(float *)(param_7 + 0x6c) = *param_2;
  *(float *)(param_7 + 0x70) = fVar28;
  *(float *)(param_7 + 0x74) = fVar19;
  *(float *)(param_7 + 0x78) = fVar20;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    uStack_1d8 = *(int32_t *)(param_1 + 0x8c);
    uStack_1d4 = *(int32_t *)(param_1 + 0x90);
    uStack_1d0 = *(int32_t *)(param_1 + 0x94);
    uStack_1cc = *(int32_t *)(param_1 + 0x98);
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
              (*(int64_t **)(param_1 + 0xe8),&uStack_1d8);
  }
  *(int32_t *)(param_7 + 0x7c) = uStack_1d8;
  *(int32_t *)(param_7 + 0x80) = uStack_1d4;
  *(int32_t *)(param_7 + 0x84) = uStack_1d0;
  *(int32_t *)(param_7 + 0x88) = uStack_1cc;
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  *(uint64_t *)(param_7 + 0x8c) = *(uint64_t *)(param_1 + 0x18);
  *(uint64_t *)(param_7 + 0x94) = uVar1;
  fVar28 = param_2[5];
  fVar19 = param_2[6];
  fVar20 = param_2[7];
  *(float *)(param_7 + 0xac) = param_2[4];
  *(float *)(param_7 + 0xb0) = fVar28;
  *(float *)(param_7 + 0xb4) = fVar19;
  *(float *)(param_7 + 0xb8) = fVar20;
  if ((int)param_2[0xd] < 0) {
    plVar6 = (int64_t *)0x8f8;
    puVar11 = (uint64_t *)0x658;
  }
  else {
    lVar5 = (int64_t)(int)param_2[0xd] * 0xa60;
    puVar11 = (uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x36f8 + lVar5);
    plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x3998 + lVar5);
  }
  if (((int)param_2[0xe] < 0) ||
     (lVar5 = (int64_t)(int)param_2[0xe] * 0x1f8 + 8 + *plVar6, lVar5 == 0)) {
    uVar29 = 0x3f800000;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0x3f800000;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0x3f800000;
    uVar40 = 0;
    uStack_168._0_4_ = 0;
    uStack_168._4_4_ = 0;
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0x3f800000;
  }
  else {
    plVar6 = *(int64_t **)(lVar5 + 0xf8);
    uVar1 = *puVar11;
    lVar5 = *plVar6;
    if (((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x260), lVar5 != 0)) &&
       ((*(byte *)(lVar5 + 0xa8) & 1) == 0)) {
      SystemCore_FileSystem(lVar5,*(int64_t *)(lVar5 + 0x10) + 0x70,0xbf800000);
    }
    FUN_1805ec350(plVar6,&uStack_198,0,uVar1,uVar1,in_stack_fffffffffffffdb0 & 0xffffffffffffff00,1)
    ;
    uVar29 = uStack_198;
    uVar30 = uStack_194;
    uVar31 = uStack_190;
    uVar32 = uStack_18c;
    uVar33 = uStack_188;
    uVar34 = uStack_184;
    uVar35 = uStack_180;
    uVar36 = uStack_17c;
    uVar37 = uStack_178;
    uVar38 = uStack_174;
    uVar39 = uStack_170;
    uVar40 = uStack_16c;
  }
  uStack_1c8 = CONCAT44(uStack_168._4_4_,(int32_t)uStack_168);
  uStack_1c0 = CONCAT44(uStack_160._4_4_,(int32_t)uStack_160);
  *param_8 = 0xffffffff;
  plVar6 = *(int64_t **)(param_1 + 0x100);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  uVar15 = (int32_t)plVar6[0xe];
  uVar16 = *(int32_t *)((int64_t)plVar6 + 0x74);
  uVar17 = (int32_t)plVar6[0xf];
  uVar18 = *(int32_t *)((int64_t)plVar6 + 0x7c);
  fVar19 = *(float *)(plVar6 + 0x10);
  fVar20 = *(float *)((int64_t)plVar6 + 0x84);
  fVar21 = (float)plVar6[0x11];
  uVar22 = *(int32_t *)((int64_t)plVar6 + 0x8c);
  uVar24 = (int32_t)plVar6[0x12];
  uVar25 = *(int32_t *)((int64_t)plVar6 + 0x94);
  uVar26 = (int32_t)plVar6[0x13];
  uVar27 = *(int32_t *)((int64_t)plVar6 + 0x9c);
  fVar14 = *param_2;
  fVar13 = param_2[1];
  fVar23 = param_2[2];
  fVar28 = param_2[3];
  uStack_1e0 = uVar17;
  uStack_1dc = uVar18;
  fStack_1b8 = fVar19;
  fStack_1b4 = fVar20;
  fStack_1b0 = fVar21;
  uStack_1ac = uVar22;
  uStack_1e8._0_4_ = uVar15;
  uStack_1e8._4_4_ = uVar16;
  uStack_1a8._0_4_ = uVar24;
  uStack_1a8._4_4_ = uVar25;
  uStack_1a0._0_4_ = uVar26;
  uStack_1a0._4_4_ = uVar27;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (*(char *)(param_1 + 0x3d1) != '\0') {
    fVar28 = param_2[2];
    fVar19 = *(float *)(param_1 + 0x70);
    fVar20 = param_2[1];
    fVar21 = *(float *)(param_1 + 0x6c);
    fVar14 = *param_2;
    fVar13 = *(float *)(param_1 + 0x68);
    lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0x38) + 0xb8);
    fVar23 = *(float *)(lVar5 + 0x10c) - *(float *)(lVar5 + 0xfc);
    fVar12 = *(float *)(lVar5 + 0x108) - *(float *)(lVar5 + 0xf8);
    if (fVar23 <= fVar12) {
      fVar23 = fVar12;
    }
    pfVar3 = (float *)FUN_180588680(param_1,auStack_108);
    pfVar4 = (float *)FUN_180588680(param_1,auStack_f8);
    fVar28 = ((fVar20 - fVar21) * pfVar4[1] + (fVar14 - fVar13) * *pfVar4 +
             (fVar28 - fVar19) * pfVar4[2]) - fVar23 * 0.5;
    fVar23 = fVar28 * pfVar3[2] + *(float *)(param_1 + 0x70);
    fVar13 = fVar28 * pfVar3[1] + *(float *)(param_1 + 0x6c);
    fVar14 = fVar28 * *pfVar3 + *(float *)(param_1 + 0x68);
    fVar28 = 3.4028235e+38;
    uStack_1f0 = 0x7f7fffff;
    uVar15 = (int32_t)uStack_1e8;
    uVar16 = uStack_1e8._4_4_;
    uVar17 = uStack_1e0;
    uVar18 = uStack_1dc;
    fVar19 = fStack_1b8;
    fVar20 = fStack_1b4;
    fVar21 = fStack_1b0;
    uVar22 = uStack_1ac;
    uVar24 = (int32_t)uStack_1a8;
    uVar25 = uStack_1a8._4_4_;
    uVar26 = (int32_t)uStack_1a0;
    uVar27 = uStack_1a0._4_4_;
    fStack_1fc = fVar14;
    fStack_1f8 = fVar13;
    fStack_1f4 = fVar23;
  }
  plVar6 = *(int64_t **)(param_2 + 8);
  if (plVar6 == (int64_t *)0x0) {
    uStack_1e0 = 0xffffffff;
  }
  else {
    uStack_1e0 = (**(code **)(*plVar6 + 8))(plVar6);
  }
  lVar5 = render_system_data_memory;
  uVar2 = *(int8_t *)(param_1 + 0x2e8);
  uStack_1e8 = plVar6;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    fStack_1fc = *(float *)(param_1 + 0x8c);
    fStack_1f8 = *(float *)(param_1 + 0x90);
    fStack_1f4 = *(float *)(param_1 + 0x94);
    uStack_1f0 = *(int32_t *)(param_1 + 0x98);
  }
  else {
    (**(code **)(**(int64_t **)(param_1 + 0xe8) + 0xa0))
              (*(int64_t **)(param_1 + 0xe8),&fStack_1fc);
  }
  lVar7 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0xf0) + 0xf0) * 0xa0 +
          *(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0xd0);
  uStack_1a0 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_1a8 = uStack_1e8;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_1c8 = *(uint64_t *)(lVar7 + 0x40);
  uStack_1c0 = *(uint64_t *)(lVar7 + 0x48);
  uStack_1e8 = *(int64_t **)(param_1 + 0x58);
  uStack_1e0 = *(int32_t *)(param_1 + 0x60);
  uStack_1dc = *(int32_t *)(param_1 + 100);
  uStack_1d8 = *(int32_t *)(param_1 + 0x18);
  uStack_1d4 = *(int32_t *)(param_1 + 0x1c);
  uStack_1d0 = *(int32_t *)(param_1 + 0x20);
  uStack_1cc = *(int32_t *)(param_1 + 0x24);
  fStack_1b8 = fStack_1fc;
  fStack_1b4 = fStack_1f8;
  fStack_1b0 = fStack_1f4;
  uStack_1ac = uStack_1f0;
  uStack_198 = uVar29;
  uStack_194 = uVar30;
  uStack_190 = uVar31;
  uStack_18c = uVar32;
  uStack_188 = uVar33;
  uStack_184 = uVar34;
  uStack_180 = uVar35;
  uStack_17c = uVar36;
  uStack_178 = uVar37;
  uStack_174 = uVar38;
  uStack_170 = uVar39;
  uStack_16c = uVar40;
  uStack_148 = uVar15;
  uStack_144 = uVar16;
  uStack_140 = uVar17;
  uStack_13c = uVar18;
  fStack_138 = fVar19;
  uStack_134 = fVar20;
  uStack_130 = fVar21;
  uStack_12c = uVar22;
  uStack_128 = uVar24;
  uStack_124 = uVar25;
  uStack_120 = uVar26;
  uStack_11c = uVar27;
  fStack_118 = fVar14;
  fStack_114 = fVar13;
  fStack_110 = fVar23;
  fStack_10c = fVar28;
  uVar2 = (**(code **)(lVar5 + 0x218))
                    (*(int32_t *)(*(int64_t *)(param_1 + 0x10) + 0x98d928),param_8,param_7,
                     &uStack_1d8,&uStack_1e8,&uStack_1c8,&fStack_1b8,&uStack_148,&uStack_198,uVar2,
                     iVar9,iVar8,&uStack_1a8);
  *param_9 = uVar2;
  if ((iVar8 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar8);
  }
  if ((iVar9 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar9);
  }
  return;
}





// 函数: void FUN_180585590(int64_t param_1)
void FUN_180585590(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t uVar22;
  uint64_t uStack_198;
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
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
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint64_t uStack_d8;
  
  uStack_d8 = 0xfffffffffffffffe;
  plVar1 = *(int64_t **)(param_1 + 0x100);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uVar22 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  uStack_198 = plVar1[6];
  uStack_190 = plVar1[7];
  uStack_178 = plVar1[10];
  uStack_170 = plVar1[0xb];
  fStack_168 = (float)plVar1[0xc];
  fStack_164 = *(float *)((int64_t)plVar1 + 100);
  fStack_160 = (float)plVar1[0xd];
  uStack_15c = *(int32_t *)((int64_t)plVar1 + 0x6c);
  fStack_188 = *(float *)(param_1 + 0xb0);
  fStack_184 = *(float *)(param_1 + 0xb4);
  fStack_180 = *(float *)(param_1 + 0xb8);
  uStack_17c = *(int32_t *)(param_1 + 0xbc);
  Utilities_DataValidator(&uStack_198);
  fVar16 = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x80);
  fStack_164 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x7c);
  fVar11 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78);
  uStack_15c = 0x7f7fffff;
  fVar17 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x298) * 8) -
                  *(int64_t *)(param_1 + 0x290)) * 1e-05;
  lVar2 = *(int64_t *)(param_1 + 0xf0);
  lVar9 = (int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + *(int64_t *)(lVar2 + 0xd0);
  fVar12 = 0.0;
  fVar5 = (float)uStack_198;
  fVar6 = uStack_198._4_4_;
  fVar7 = (float)uStack_190;
  uVar8 = uStack_190._4_4_;
  fStack_168 = fVar11;
  fStack_160 = fVar16;
  if (((*(float *)(lVar9 + 0x40) == 0.0) && (*(float *)(lVar9 + 0x44) == 0.0)) &&
     (*(float *)(lVar9 + 0x48) == 0.0)) {
    fVar17 = fStack_164;
    fVar15 = fVar16;
  }
  else {
    fVar12 = *(float *)(lVar2 + 0x54);
    fVar15 = *(float *)(lVar2 + 0x58);
    fVar4 = *(float *)(lVar2 + 0x5c);
    fStack_158 = 1.0;
    fStack_154 = 0.0;
    fStack_150 = 0.0;
    fStack_14c = 0.0;
    fStack_148 = 0.0;
    fStack_144 = 1.0;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    fStack_138 = 0.0;
    fStack_134 = 0.0;
    fStack_130 = 1.0;
    fStack_12c = 0.0;
    fStack_11c = 1.0;
    fVar21 = 0.0 - fVar12;
    fVar19 = 0.0 - fVar15;
    fVar20 = 0.0 - fVar4;
    fVar18 = fVar17;
    fStack_128 = fVar21;
    fStack_124 = fVar19;
    fStack_120 = fVar20;
    func_0x00018058fa90(lVar2,&fStack_118,fVar16,fVar11,uVar22,*(float *)(lVar9 + 0x44),
                        *(int32_t *)(lVar9 + 0x4c));
    fVar13 = fVar12 * fStack_118 + fVar15 * fStack_108 + fVar4 * fStack_f8 + fStack_e8;
    fVar14 = fVar12 * fStack_114 + fVar15 * fStack_104 + fVar4 * fStack_f4 + fStack_e4;
    fVar15 = fVar12 * fStack_110 + fVar15 * fStack_100 + fVar4 * fStack_f0 + fStack_e0;
    lVar10 = (int64_t)*(int *)(lVar2 + 0xf0) * 0xa0;
    lVar9 = *(int64_t *)(lVar2 + 0xd0);
    FUN_180085970(&fStack_118,-(*(float *)(lVar10 + 0x40 + lVar9) * fVar18));
    FUN_180085ac0(&fStack_118,-(*(float *)(lVar10 + lVar9 + 0x44) * fVar17));
    FUN_180085c10(&fStack_118,-(*(float *)(lVar10 + lVar9 + 0x48) * fVar17));
    fStack_158 = fStack_118 * 1.0 + fStack_108 * 0.0 + fStack_f8 * 0.0;
    fStack_154 = fStack_114 * 1.0 + fStack_104 * 0.0 + fStack_f4 * 0.0;
    fStack_150 = fStack_110 * 1.0 + fStack_100 * 0.0 + fStack_f0 * 0.0;
    fStack_14c = fStack_10c * 1.0 + fStack_fc * 0.0 + fStack_ec * 0.0;
    fStack_148 = fStack_118 * 0.0 + fStack_108 * 1.0 + fStack_f8 * 0.0;
    fStack_144 = fStack_114 * 0.0 + fStack_104 * 1.0 + fStack_f4 * 0.0;
    fStack_140 = fStack_110 * 0.0 + fStack_100 * 1.0 + fStack_f0 * 0.0;
    fStack_13c = fStack_10c * 0.0 + fStack_fc * 1.0 + fStack_ec * 0.0;
    fStack_138 = fStack_118 * 0.0 + fStack_108 * 0.0 + fStack_f8 * 1.0;
    fStack_134 = fStack_114 * 0.0 + fStack_104 * 0.0 + fStack_f4 * 1.0;
    fStack_130 = fStack_110 * 0.0 + fStack_100 * 0.0 + fStack_f0 * 1.0;
    fStack_12c = fStack_10c * 0.0 + fStack_fc * 0.0 + fStack_ec * 1.0;
    fStack_128 = fVar21 * fStack_118 + fVar19 * fStack_108 + fVar20 * fStack_f8 + fStack_e8;
    fStack_124 = fVar21 * fStack_114 + fVar19 * fStack_104 + fVar20 * fStack_f4 + fStack_e4;
    fStack_120 = fVar21 * fStack_110 + fVar19 * fStack_100 + fVar20 * fStack_f0 + fStack_e0;
    fStack_11c = fVar21 * fStack_10c + fVar19 * fStack_fc + fVar20 * fStack_ec + fStack_dc;
    plVar3 = *(int64_t **)(*(int64_t *)(lVar2 + 0xf8) + 0x80);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
      (**(code **)(*plVar3 + 0x38))(plVar3);
      plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0xf8) + 0x80);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      (**(code **)(*plVar3 + 0x148))(plVar3,&fStack_158);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
    }
    plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0xf0) + 0xf8) + 0x58);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    (**(code **)(*plVar3 + 0x148))(plVar3,&fStack_158);
    uVar22 = 0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    fVar16 = fStack_188 * fVar14 + fVar5 * fVar13 + (float)uStack_178 * fVar15 + fVar11;
    fVar12 = fStack_164 + fStack_184 * fVar14 + fVar6 * fVar13 + uStack_178._4_4_ * fVar15;
    fVar15 = fStack_160 + fStack_180 * fVar14 + fVar7 * fVar13 + (float)uStack_170 * fVar15;
    fVar11 = fVar16;
    fVar17 = fVar12;
  }
  if ((((fVar11 != *(float *)(plVar1 + 0xc)) || (fVar17 != *(float *)((int64_t)plVar1 + 100))) ||
      ((fVar15 != *(float *)(plVar1 + 0xd) ||
       ((fVar5 != *(float *)(plVar1 + 6) || (fVar6 != *(float *)((int64_t)plVar1 + 0x34))))))) ||
     ((fVar7 != *(float *)(plVar1 + 7) ||
      (((((fStack_188 != *(float *)(plVar1 + 8) ||
          (fStack_184 != *(float *)((int64_t)plVar1 + 0x44))) ||
         (fStack_180 != *(float *)(plVar1 + 9))) ||
        (((float)uStack_178 != *(float *)(plVar1 + 10) ||
         (uStack_178._4_4_ != *(float *)((int64_t)plVar1 + 0x54))))) ||
       ((float)uStack_170 != *(float *)(plVar1 + 0xb))))))) {
    *(float *)(plVar1 + 6) = fVar5;
    *(float *)((int64_t)plVar1 + 0x34) = fVar6;
    *(float *)(plVar1 + 7) = fVar7;
    *(int32_t *)((int64_t)plVar1 + 0x3c) = uVar8;
    *(float *)(plVar1 + 8) = fStack_188;
    *(float *)((int64_t)plVar1 + 0x44) = fStack_184;
    *(float *)(plVar1 + 9) = fStack_180;
    *(int32_t *)((int64_t)plVar1 + 0x4c) = uStack_17c;
    *(float *)(plVar1 + 10) = (float)uStack_178;
    *(float *)((int64_t)plVar1 + 0x54) = uStack_178._4_4_;
    *(float *)(plVar1 + 0xb) = (float)uStack_170;
    *(int32_t *)((int64_t)plVar1 + 0x5c) = uStack_170._4_4_;
    *(float *)(plVar1 + 0xc) = fVar11;
    *(float *)((int64_t)plVar1 + 100) = fVar17;
    *(float *)(plVar1 + 0xd) = fVar15;
    *(int32_t *)((int64_t)plVar1 + 0x6c) = uStack_15c;
    RenderingSystem_CameraController(plVar1,fVar12,fVar16,fVar11,uVar22);
    UtilitiesSystem_StringProcessor();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180585c10(uint64_t *param_1)

{
  *param_1 = &processed_var_5552_ptr;
  *param_1 = &processed_var_5584_ptr;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_180544dc0(param_1 + 0x20);
  *(int32_t *)(param_1 + 0x53) = 1;
  param_1[0x52] = render_system_data_memory;
  *(int32_t *)(param_1 + 0x5e) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x2fc) = 0xffff;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x2f4) = 0xffffffffbf800000;
  *(int8_t *)(param_1 + 0x5d) = 0;
  *(int32_t *)(param_1 + 0x66) = 0xf149f2ca;
  *(int32_t *)(param_1 + 0x6e) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0x70) = 0xff;
  *(int8_t *)((int64_t)param_1 + 0x3c4) = 0;
  *(int32_t *)((int64_t)param_1 + 0xbd4) = 0;
  FUN_180585d80(param_1);
  return param_1;
}





// 函数: void FUN_180585cf0(uint64_t *param_1)
void FUN_180585cf0(uint64_t *param_1)

{
  *param_1 = &processed_var_5584_ptr;
  *(int32_t *)((int64_t)param_1 + 0xbd4) = 0;
  FUN_180506660(param_1 + 0x20);
  if ((int64_t *)param_1[0x1c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1c] + 0x38))();
  }
  if ((int64_t *)param_1[0x1b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1b] + 0x38))();
  }
  if ((int64_t *)param_1[0x1a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1a] + 0x38))();
  }
  *param_1 = &processed_var_5552_ptr;
  return;
}





// 函数: void FUN_180585d80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180585d80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  FUN_1805e7fe0(param_1 + 0x100,0,param_3,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(int16_t *)(param_1 + 0x3d1) = 0;
  plVar1 = *(int64_t **)(param_1 + 0xd0);
  *(uint64_t *)(param_1 + 0xd0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xd8);
  *(uint64_t *)(param_1 + 0xd8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x3c8) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0x3f800000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



