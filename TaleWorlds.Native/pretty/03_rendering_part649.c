#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part649.c - 4 个函数

// 函数: void FUN_180635760(int64_t param_1,uint64_t *param_2,int32_t *param_3)
void FUN_180635760(int64_t param_1,uint64_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  uint64_t uStack_198;
  int64_t lStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
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
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_198 = 0xfffffffffffffffe;
  lStack_190 = param_1;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uStack_188 = *param_2;
  uStack_180 = param_2[1];
  uStack_178 = param_2[2];
  uStack_170 = param_2[3];
  uStack_168 = param_2[4];
  uStack_160 = param_2[5];
  uStack_158 = param_2[6];
  uStack_150 = param_2[7];
  uStack_148 = param_2[2];
  uStack_140 = param_2[3];
  uStack_138 = param_2[4];
  uStack_130 = param_2[5];
  uStack_128 = param_2[0xc];
  uStack_120 = param_2[0xd];
  uStack_118 = param_2[0xe];
  uStack_110 = param_2[0xf];
  uStack_108 = param_2[8];
  uStack_100 = param_2[9];
  uStack_f8 = param_2[10];
  uStack_f0 = param_2[0xb];
  uStack_e8 = param_2[0xc];
  uStack_e0 = param_2[0xd];
  uStack_d8 = param_2[0xe];
  uStack_d0 = param_2[0xf];
  uStack_c8 = *param_2;
  uStack_c0 = param_2[1];
  uStack_b8 = param_2[6];
  uStack_b0 = param_2[7];
  uStack_a8 = param_2[10];
  uStack_a0 = param_2[0xb];
  uStack_98 = param_2[8];
  uStack_90 = param_2[9];
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  uStack_78 = param_2[2];
  uStack_70 = param_2[3];
  uStack_68 = param_2[8];
  uStack_60 = param_2[9];
  uStack_58 = param_2[0xe];
  uStack_50 = param_2[0xf];
  uStack_48 = param_2[4];
  uStack_40 = param_2[5];
  uStack_38 = param_2[6];
  uStack_30 = param_2[7];
  uStack_28 = param_2[10];
  uStack_20 = param_2[0xb];
  uStack_18 = *(int32_t *)(param_2 + 0xc);
  uStack_14 = *(int32_t *)((int64_t)param_2 + 100);
  uStack_10 = *(int32_t *)(param_2 + 0xd);
  uStack_c = *(int32_t *)((int64_t)param_2 + 0x6c);
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_188;
    uStack_1e0 = uStack_180;
    uStack_1d8 = uStack_178;
    uStack_1d0 = uStack_170;
    uStack_1c8 = (int32_t)uStack_168;
    uStack_1c4 = uStack_168._4_4_;
    uStack_1c0 = (int32_t)uStack_160;
    uStack_1bc = uStack_160._4_4_;
    uStack_1b8 = (int32_t)uStack_158;
    uStack_1b4 = uStack_158._4_4_;
    uStack_1b0 = (int32_t)uStack_150;
    uStack_1ac = uStack_150._4_4_;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_148;
    uStack_1e0 = uStack_140;
    uStack_1d8 = uStack_138;
    uStack_1d0 = uStack_130;
    uStack_1c8 = (int32_t)uStack_128;
    uStack_1c4 = uStack_128._4_4_;
    uStack_1c0 = (int32_t)uStack_120;
    uStack_1bc = uStack_120._4_4_;
    uStack_1b8 = (int32_t)uStack_118;
    uStack_1b4 = uStack_118._4_4_;
    uStack_1b0 = (int32_t)uStack_110;
    uStack_1ac = uStack_110._4_4_;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_108;
    uStack_1e0 = uStack_100;
    uStack_1d8 = uStack_f8;
    uStack_1d0 = uStack_f0;
    uStack_1c8 = (int32_t)uStack_e8;
    uStack_1c4 = uStack_e8._4_4_;
    uStack_1c0 = (int32_t)uStack_e0;
    uStack_1bc = uStack_e0._4_4_;
    uStack_1b8 = (int32_t)uStack_d8;
    uStack_1b4 = uStack_d8._4_4_;
    uStack_1b0 = (int32_t)uStack_d0;
    uStack_1ac = uStack_d0._4_4_;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_c8;
    uStack_1e0 = uStack_c0;
    uStack_1d8 = uStack_b8;
    uStack_1d0 = uStack_b0;
    uStack_1c8 = (int32_t)uStack_a8;
    uStack_1c4 = uStack_a8._4_4_;
    uStack_1c0 = (int32_t)uStack_a0;
    uStack_1bc = uStack_a0._4_4_;
    uStack_1b8 = (int32_t)uStack_98;
    uStack_1b4 = uStack_98._4_4_;
    uStack_1b0 = (int32_t)uStack_90;
    uStack_1ac = uStack_90._4_4_;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_88;
    uStack_1e0 = uStack_80;
    uStack_1d8 = uStack_78;
    uStack_1d0 = uStack_70;
    uStack_1c8 = (int32_t)uStack_68;
    uStack_1c4 = uStack_68._4_4_;
    uStack_1c0 = (int32_t)uStack_60;
    uStack_1bc = uStack_60._4_4_;
    uStack_1b8 = (int32_t)uStack_58;
    uStack_1b4 = uStack_58._4_4_;
    uStack_1b0 = (int32_t)uStack_50;
    uStack_1ac = uStack_50._4_4_;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x50) != '\0') {
    iVar2 = _Mtx_lock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_1e8 = uStack_48;
    uStack_1e0 = uStack_40;
    uStack_1d8 = uStack_38;
    uStack_1d0 = uStack_30;
    uStack_1c8 = (int32_t)uStack_28;
    uStack_1c4 = uStack_28._4_4_;
    uStack_1c0 = (int32_t)uStack_20;
    uStack_1bc = uStack_20._4_4_;
    uStack_1b8 = uStack_18;
    uStack_1b4 = uStack_14;
    uStack_1b0 = uStack_10;
    uStack_1ac = uStack_c;
    uStack_1a8 = uVar1;
    FUN_1806370a0(param_1 + 0xf8,&uStack_1e8);
    iVar2 = _Mtx_unlock(param_1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



int8_t FUN_180635b80(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int8_t uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)fmod(param_1,0x54442d18);
  dVar3 = (double)fmod(param_2,0x54442d18);
  dVar4 = (double)fmod(param_3);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + 6.283185307179586;
  }
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + 6.283185307179586;
  }
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + 6.283185307179586;
  }
  if (dVar4 <= dVar3) {
    if (dVar2 < dVar3) goto joined_r0x000180635c33;
LAB_180635c0a:
    uVar1 = 1;
  }
  else {
    if (dVar3 <= dVar2) {
joined_r0x000180635c33:
      if (dVar2 <= dVar4) goto LAB_180635c0a;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180635c40(int64_t param_1,float *param_2,float param_3)
void FUN_180635c40(int64_t param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_218 [32];
  uint64_t *puStack_1f8;
  int32_t uStack_1f0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  uint64_t uStack_1c8;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint64_t uStack_128;
  int64_t lStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_218;
  lStack_120 = param_1;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  pfVar1 = param_2 + 0xc;
  uStack_118 = *(uint64_t *)param_2;
  uStack_110 = *(uint64_t *)(param_2 + 2);
  uStack_108 = *(uint64_t *)(param_2 + 4);
  uStack_100 = *(uint64_t *)(param_2 + 6);
  fStack_f8 = param_2[8];
  fStack_f4 = param_2[9];
  fStack_f0 = param_2[10];
  fStack_ec = param_2[0xb];
  fStack_1a8 = 0.0;
  fStack_1a0 = 0.0;
  uStack_19c = 0x7f7fffff;
  fStack_1d8 = 0.0;
  fStack_1d0 = 0.0;
  uStack_1cc = 0x7f7fffff;
  uStack_e8 = CONCAT44(param_3 * param_2[5] + param_2[0xd],param_3 * param_2[4] + *pfVar1);
  uStack_e0 = CONCAT44(0x7f7fffff,param_3 * param_2[6] + param_2[0xe]);
  uStack_1f0 = 0xff80ff00;
  puStack_1f8 = &uStack_118;
  fStack_1d4 = param_3 * -0.05;
  fStack_1a4 = param_3 * 0.2;
  FUN_1806341f0(param_1,&fStack_1a8,&fStack_1d8);
  uStack_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  uStack_118 = *(uint64_t *)param_2;
  uStack_110 = *(uint64_t *)(param_2 + 2);
  uStack_108 = *(uint64_t *)(param_2 + 4);
  uStack_100 = *(uint64_t *)(param_2 + 6);
  fStack_f8 = param_2[8];
  fStack_f4 = param_2[9];
  fStack_f0 = param_2[10];
  fStack_ec = param_2[0xb];
  FUN_180085c10(&uStack_118,0xbfc90fdb);
  fStack_1d0 = param_3 * param_2[2] + param_2[0xe];
  fStack_1d4 = param_3 * param_2[1] + param_2[0xd];
  fStack_1d8 = param_3 * *param_2 + *pfVar1;
  uStack_1cc = 0x7f7fffff;
  fStack_1b8 = 0.0;
  fStack_1b0 = 0.0;
  uStack_1ac = 0x7f7fffff;
  uStack_1c8 = (uint64_t)(uint)(param_3 * -0.05) << 0x20;
  fStack_1c0 = 0.0;
  uStack_1bc = 0x7f7fffff;
  uStack_188 = uStack_118;
  uStack_180 = uStack_110;
  uStack_178 = uStack_108;
  uStack_170 = uStack_100;
  fStack_168 = fStack_f8;
  fStack_164 = fStack_f4;
  fStack_160 = fStack_f0;
  fStack_15c = fStack_ec;
  uStack_14c = 0x7f7fffff;
  uStack_1f0 = 0xffff4000;
  puStack_1f8 = &uStack_188;
  fStack_1b4 = param_3 * 0.2;
  fStack_158 = fStack_1d8;
  fStack_154 = fStack_1d4;
  fStack_150 = fStack_1d0;
  FUN_1806341f0(param_1,&fStack_1b8,&uStack_1c8);
  uStack_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  uStack_118 = *(uint64_t *)param_2;
  uStack_110 = *(uint64_t *)(param_2 + 2);
  uStack_108 = *(uint64_t *)(param_2 + 4);
  uStack_100 = *(uint64_t *)(param_2 + 6);
  fStack_f8 = param_2[8];
  fStack_f4 = param_2[9];
  fStack_f0 = param_2[10];
  fStack_ec = param_2[0xb];
  FUN_180085970(&uStack_118,0x3fc90fdb);
  fStack_1d0 = param_3 * param_2[10] + param_2[0xe];
  fStack_1d4 = param_3 * param_2[9] + param_2[0xd];
  fStack_1d8 = param_3 * param_2[8] + *pfVar1;
  uStack_1cc = 0x7f7fffff;
  uStack_188 = uStack_118;
  uStack_180 = uStack_110;
  uStack_178 = uStack_108;
  uStack_170 = uStack_100;
  fStack_168 = fStack_f8;
  fStack_164 = fStack_f4;
  fStack_160 = fStack_f0;
  fStack_15c = fStack_ec;
  uStack_14c = 0x7f7fffff;
  uStack_1f0 = 0xff0080ff;
  puStack_1f8 = &uStack_188;
  fStack_158 = fStack_1d8;
  fStack_154 = fStack_1d4;
  fStack_150 = fStack_1d0;
  FUN_1806341f0(param_1,&fStack_1b8,&uStack_1c8);
  fStack_1d0 = param_3 * param_2[2];
  fStack_1d4 = param_3 * param_2[1];
  fStack_1d8 = param_3 * *param_2;
  uStack_1cc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,pfVar1,&fStack_1d8,0xffff4000);
  fStack_1d0 = param_3 * param_2[6];
  fStack_1d4 = param_3 * param_2[5];
  fStack_1d8 = param_3 * param_2[4];
  uStack_1cc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,pfVar1,&fStack_1d8,0xff80ff00);
  fStack_1d0 = param_3 * param_2[10];
  fStack_1d4 = param_3 * param_2[9];
  fStack_1d8 = param_3 * param_2[8];
  uStack_1cc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,pfVar1,&fStack_1d8,0xff0080ff);
  param_3 = param_3 * 0.475;
  fVar12 = param_3 * param_2[2];
  fStack_1b4 = param_3 * param_2[1];
  fVar11 = param_3 * *param_2;
  uStack_1ac = 0x7f7fffff;
  fVar7 = param_3 * param_2[6];
  fVar8 = param_3 * param_2[5];
  fVar6 = param_3 * param_2[4];
  uStack_1cc = 0x7f7fffff;
  fVar9 = param_3 * param_2[10];
  fVar10 = param_3 * param_2[9];
  param_3 = param_3 * param_2[8];
  uStack_19c = 0x7f7fffff;
  fStack_138 = *pfVar1;
  fStack_134 = param_2[0xd];
  fStack_130 = param_2[0xe];
  fStack_12c = param_2[0xf];
  uStack_108 = CONCAT44(fStack_134 + fStack_1b4,fStack_138 + fVar11);
  uStack_100 = CONCAT44(0x7f7fffff,fStack_130 + fVar12);
  fStack_f0 = param_2[0xe] + fVar12 + fVar9;
  fStack_f4 = param_2[0xd] + fStack_1b4 + fVar10;
  fStack_f8 = *pfVar1 + fVar11 + param_3;
  fStack_ec = 3.4028235e+38;
  uStack_e8 = CONCAT44(param_2[0xd] + fVar10,*pfVar1 + param_3);
  uStack_e0 = CONCAT44(0x7f7fffff,param_2[0xe] + fVar9);
  fStack_1d8 = fVar6;
  fStack_1d4 = fVar8;
  fStack_1d0 = fVar7;
  fStack_1b8 = fVar11;
  fStack_1b0 = fVar12;
  fStack_1a8 = param_3;
  fStack_1a4 = fVar10;
  fStack_1a0 = fVar9;
  fStack_198 = fStack_1b4;
  if (*(char *)(param_1 + 0x50) != '\0') {
    uStack_1c8 = param_1;
    iVar5 = _Mtx_lock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uStack_188 = CONCAT44(fStack_134,fStack_138);
    uStack_180 = CONCAT44(fStack_12c,fStack_130);
    uStack_178 = uStack_108;
    uStack_170 = uStack_100;
    fStack_168 = fStack_f8;
    fStack_164 = fStack_f4;
    fStack_160 = fStack_f0;
    fStack_15c = fStack_ec;
    fStack_158 = (float)uStack_e8;
    fStack_154 = uStack_e8._4_4_;
    fStack_150 = (float)uStack_e0;
    uStack_14c = uStack_e0._4_4_;
    uStack_148 = 0x4080ff00;
    FUN_1806370a0(param_1 + 0xf8,&uStack_188);
    iVar5 = _Mtx_unlock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  fStack_1c0 = fVar12 + param_2[0xe];
  uStack_1c8 = CONCAT44(fStack_198 + param_2[0xd],fVar11 + *pfVar1);
  uStack_1bc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&uStack_1c8,&fStack_1a8,0xff80ff00);
  fStack_1c0 = fVar9 + param_2[0xe];
  uStack_1c8 = CONCAT44(fVar10 + param_2[0xd],param_3 + *pfVar1);
  uStack_1bc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&uStack_1c8,&fStack_1b8,0xff80ff00);
  fVar2 = fStack_198;
  fStack_138 = *pfVar1;
  fStack_134 = param_2[0xd];
  fStack_130 = param_2[0xe];
  fStack_12c = param_2[0xf];
  uStack_108 = CONCAT44(fStack_134 + fStack_198,fStack_138 + fVar11);
  uStack_100 = CONCAT44(0x7f7fffff,fStack_130 + fVar12);
  fStack_f0 = param_2[0xe] + fVar12 + fVar7;
  fStack_f4 = param_2[0xd] + fStack_198 + fVar8;
  fStack_f8 = *pfVar1 + fVar11 + fVar6;
  fStack_ec = 3.4028235e+38;
  uStack_e8 = CONCAT44(param_2[0xd] + fVar8,*pfVar1 + fVar6);
  uStack_e0 = CONCAT44(0x7f7fffff,param_2[0xe] + fVar7);
  if (*(char *)(param_1 + 0x50) != '\0') {
    uStack_1c8 = param_1;
    iVar5 = _Mtx_lock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uStack_188 = CONCAT44(fStack_134,fStack_138);
    uStack_180 = CONCAT44(fStack_12c,fStack_130);
    uStack_178 = uStack_108;
    uStack_170 = uStack_100;
    fStack_168 = fStack_f8;
    fStack_164 = fStack_f4;
    fStack_160 = fStack_f0;
    fStack_15c = fStack_ec;
    fStack_158 = (float)uStack_e8;
    fStack_154 = uStack_e8._4_4_;
    fStack_150 = (float)uStack_e0;
    uStack_14c = uStack_e0._4_4_;
    uStack_148 = 0x400080ff;
    FUN_1806370a0(param_1 + 0xf8,&uStack_188);
    iVar5 = _Mtx_unlock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  fStack_1c0 = fVar7 + param_2[0xe];
  uStack_1c8 = CONCAT44(fVar8 + param_2[0xd],fVar6 + *pfVar1);
  uStack_1bc = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&uStack_1c8,&fStack_1b8,0xff0080ff);
  fStack_1b0 = fVar12 + param_2[0xe];
  fStack_1b4 = fVar2 + param_2[0xd];
  fStack_1b8 = fVar11 + *pfVar1;
  uStack_1ac = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&fStack_1b8,&fStack_1d8,0xff0080ff);
  fVar11 = *pfVar1;
  fVar12 = param_2[0xd];
  uVar3 = *(uint64_t *)pfVar1;
  fVar2 = param_2[0xe];
  uVar4 = *(uint64_t *)(param_2 + 0xe);
  uStack_108 = CONCAT44(fVar12 + fVar10,fVar11 + param_3);
  uStack_100 = CONCAT44(0x7f7fffff,fVar2 + fVar9);
  fStack_f0 = fVar2 + fVar9 + fVar7;
  fStack_f4 = fVar12 + fVar10 + fVar8;
  fStack_f8 = fVar11 + param_3 + fVar6;
  fStack_ec = 3.4028235e+38;
  uStack_e8 = CONCAT44(fVar12 + fVar8,fVar11 + fVar6);
  uStack_e0 = CONCAT44(0x7f7fffff,fVar2 + fVar7);
  if (*(char *)(param_1 + 0x50) != '\0') {
    uStack_1c8 = param_1;
    iVar5 = _Mtx_lock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uStack_178 = uStack_108;
    uStack_170 = uStack_100;
    fStack_168 = fStack_f8;
    fStack_164 = fStack_f4;
    fStack_160 = fStack_f0;
    fStack_15c = fStack_ec;
    fStack_158 = (float)uStack_e8;
    fStack_154 = uStack_e8._4_4_;
    fStack_150 = (float)uStack_e0;
    uStack_14c = uStack_e0._4_4_;
    uStack_148 = 0x40ff4000;
    uStack_188 = uVar3;
    uStack_180 = uVar4;
    FUN_1806370a0(param_1 + 0xf8,&uStack_188);
    iVar5 = _Mtx_unlock(param_1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  fStack_1b0 = fVar7 + param_2[0xe];
  fStack_1b4 = fVar8 + param_2[0xd];
  fStack_1b8 = fVar6 + *pfVar1;
  uStack_1ac = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&fStack_1b8,&fStack_1a8,0xffff4000);
  fStack_1a0 = fVar9 + param_2[0xe];
  fStack_1a4 = fVar10 + param_2[0xd];
  fStack_1a8 = param_3 + *pfVar1;
  uStack_19c = 0x7f7fffff;
  uStack_1f0 = 0;
  puStack_1f8 = (uint64_t *)((uint64_t)puStack_1f8 & 0xffffffffffffff00);
  RenderingSystem_VertexBuffer(param_1,&fStack_1a8,&fStack_1d8,0xffff4000);
  iVar5 = _Mtx_unlock(param_1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_218);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180636790(int64_t param_1,uint64_t *param_2,float *param_3,int32_t *param_4,
void FUN_180636790(int64_t param_1,uint64_t *param_2,float *param_3,int32_t *param_4,
                  int8_t param_5)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_1d8 [32];
  int8_t uStack_1b8;
  int32_t uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  int32_t auStack_198 [2];
  uint64_t uStack_190;
  int64_t lStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint64_t uStack_158;
  uint64_t uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  uint64_t uStack_d8;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  lStack_188 = param_1;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uStack_158 = 0x3f800000;
  uStack_150 = 0;
  uStack_128 = *param_2;
  uStack_120 = param_2[1];
  fStack_148 = *param_3;
  fStack_144 = param_3[1];
  fStack_140 = param_3[2];
  fStack_13c = param_3[3];
  fVar3 = fStack_148 * fStack_148 + fStack_144 * fStack_144 + fStack_140 * fStack_140;
  if (fVar3 <= 1e-09) {
    fStack_148 = 0.0;
    fStack_144 = 1.0;
    fStack_140 = 0.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    fStack_148 = fStack_148 * fVar3;
    fStack_144 = fStack_144 * fVar3;
    fStack_140 = fStack_140 * fVar3;
  }
  pfVar2 = (float *)&system_data_7230;
  if (ABS(fStack_140) <= 0.99) {
    pfVar2 = (float *)&system_data_01d0;
  }
  fStack_138 = *pfVar2;
  fStack_134 = pfVar2[1];
  fStack_130 = pfVar2[2];
  fStack_12c = pfVar2[3];
  Utilities_DataValidator(&uStack_158);
  fVar8 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  fVar3 = fVar8 * 0.2;
  fVar9 = (float)uStack_158 * 0.0 + fVar3 * fStack_148 + fStack_138 * 0.0 + (float)uStack_128;
  fVar10 = uStack_158._4_4_ * 0.0 + fVar3 * fStack_144 + fStack_134 * 0.0 + uStack_128._4_4_;
  fVar11 = (float)uStack_150 * 0.0 + fVar3 * fStack_140 + fStack_130 * 0.0 + (float)uStack_120;
  fVar4 = fVar8 * 0.05;
  fVar12 = fVar8 * -0.05;
  fVar5 = fVar4 * (float)uStack_158 + fVar12 * fStack_148 + fVar4 * fStack_138 + (float)uStack_128;
  fVar6 = fVar4 * uStack_158._4_4_ + fVar12 * fStack_144 + fVar4 * fStack_134 + uStack_128._4_4_;
  fVar7 = fVar4 * (float)uStack_150 + fVar12 * fStack_140 + fVar4 * fStack_130 + (float)uStack_120;
  fStack_180 = fVar12 * (float)uStack_158 + fVar12 * fStack_148 + fVar4 * fStack_138 +
               (float)uStack_128;
  fStack_17c = fVar12 * uStack_158._4_4_ + fVar12 * fStack_144 + fVar4 * fStack_134 +
               uStack_128._4_4_;
  fStack_178 = fVar12 * (float)uStack_150 + fVar12 * fStack_140 + fVar4 * fStack_130 +
               (float)uStack_120;
  fStack_174 = fVar12 * uStack_150._4_4_ + fVar12 * fStack_13c + fVar4 * fStack_12c +
               uStack_120._4_4_;
  auStack_198[0] = 0;
  fStack_170 = (float)uStack_158 * 0.0 + fVar3 * fStack_148 + fStack_138 * 0.0 + (float)uStack_128;
  fStack_16c = uStack_158._4_4_ * 0.0 + fVar3 * fStack_144 + fStack_134 * 0.0 + uStack_128._4_4_;
  fStack_168 = (float)uStack_150 * 0.0 + fVar3 * fStack_140 + fStack_130 * 0.0 + (float)uStack_120;
  fStack_164 = uStack_150._4_4_ * 0.0 + fVar3 * fStack_13c + fStack_12c * 0.0 + uStack_120._4_4_;
  fVar18 = (float)uStack_158 * 0.0 + fVar3 * fStack_148 + fStack_138 * 0.0 + (float)uStack_128;
  fVar19 = uStack_158._4_4_ * 0.0 + fVar3 * fStack_144 + fStack_134 * 0.0 + uStack_128._4_4_;
  fVar20 = (float)uStack_150 * 0.0 + fVar3 * fStack_140 + fStack_130 * 0.0 + (float)uStack_120;
  fVar4 = fVar8 * -0.05;
  fVar3 = fVar8 * -0.05;
  fVar12 = fVar8 * -0.05;
  fVar15 = fVar12 * (float)uStack_158 + fVar4 * fStack_148 + fVar3 * fStack_138 + (float)uStack_128;
  fVar16 = fVar12 * uStack_158._4_4_ + fVar4 * fStack_144 + fVar3 * fStack_134 + uStack_128._4_4_;
  fVar17 = fVar12 * (float)uStack_150 + fVar4 * fStack_140 + fVar3 * fStack_130 + (float)uStack_120;
  fVar12 = fVar8 * 0.05;
  fVar4 = fVar8 * -0.05;
  fVar3 = fVar8 * -0.05;
  fVar13 = fVar12 * (float)uStack_158 + fVar4 * fStack_148 + fVar3 * fStack_138 + (float)uStack_128;
  fVar14 = fVar12 * uStack_158._4_4_ + fVar4 * fStack_144 + fVar3 * fStack_134 + uStack_128._4_4_;
  fVar12 = fVar12 * (float)uStack_150 + fVar4 * fStack_140 + fVar3 * fStack_130 + (float)uStack_120;
  fVar4 = fVar8 * fStack_140;
  fVar3 = fStack_144 * fVar8;
  fVar8 = fStack_148 * fVar8;
  uStack_19c = 0x7f7fffff;
  uStack_1b0 = 0;
  uStack_1b8 = param_5;
  fStack_1a8 = fVar8;
  fStack_1a4 = fVar3;
  fStack_1a0 = fVar4;
  RenderingSystem_VertexBuffer(param_1,&uStack_128,&fStack_1a8,*param_4);
  uStack_19c = 0x7f7fffff;
  uStack_158 = CONCAT44(fVar3 + fVar10,fVar8 + fVar9);
  uStack_150 = CONCAT44(0x7f7fffff,fVar4 + fVar11);
  fStack_148 = fVar8 + fVar5;
  fStack_144 = fVar3 + fVar6;
  fStack_140 = fVar4 + fVar7;
  fStack_13c = 3.4028235e+38;
  _fStack_138 = CONCAT44(fVar3 + fStack_17c,fVar8 + fStack_180);
  _fStack_130 = CONCAT44(0x7f7fffff,fVar4 + fStack_178);
  uStack_128 = CONCAT44(fVar3 + fStack_16c,fVar8 + fStack_170);
  uStack_120 = CONCAT44(0x7f7fffff,fVar4 + fStack_168);
  fStack_118 = fVar8 + fStack_170;
  fStack_114 = fVar3 + fStack_16c;
  fStack_110 = fVar4 + fStack_168;
  uStack_10c = 0x7f7fffff;
  fStack_108 = fVar8 + fVar18;
  fStack_104 = fVar3 + fVar19;
  fStack_100 = fVar4 + fVar20;
  uStack_fc = 0x7f7fffff;
  fStack_f8 = fVar8 + fVar15;
  fStack_f4 = fVar3 + fVar16;
  fStack_f0 = fVar4 + fVar17;
  uStack_ec = 0x7f7fffff;
  fStack_e0 = fVar4 + fVar12;
  fStack_e4 = fVar3 + fVar14;
  fStack_e8 = fVar8 + fVar13;
  uStack_dc = 0x7f7fffff;
  auStack_198[0] = *param_4;
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_180635760(param_1,&uStack_158,auStack_198);
  }
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180636dc0(uint64_t param_1,float *param_2,float param_3,int32_t param_4)
void FUN_180636dc0(uint64_t param_1,float *param_2,float param_3,int32_t param_4)

{
  uint64_t uVar1;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  uVar1 = render_system_data_memory;
  fStack_38 = param_3 * *param_2;
  fStack_34 = param_3 * param_2[1];
  uStack_2c = 0x7f7fffff;
  fStack_30 = param_3 * param_2[2];
  RenderingSystem_VertexBuffer(render_system_data_memory,param_2 + 0xc,&fStack_38,0xffff4000,0,param_4);
  fStack_38 = param_3 * param_2[4];
  uStack_2c = 0x7f7fffff;
  fStack_34 = param_3 * param_2[5];
  fStack_30 = param_3 * param_2[6];
  RenderingSystem_VertexBuffer(uVar1,param_2 + 0xc,&fStack_38,0xff80ff00,0,param_4);
  fStack_38 = param_3 * param_2[8];
  uStack_2c = 0x7f7fffff;
  fStack_34 = param_3 * param_2[9];
  fStack_30 = param_3 * param_2[10];
  RenderingSystem_VertexBuffer(uVar1,param_2 + 0xc,&fStack_38,0xff0080ff,0,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



