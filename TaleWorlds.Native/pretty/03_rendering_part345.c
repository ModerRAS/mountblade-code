/* RenderingProcessor - function_391980 的语义化别名 */
#define RenderingProcessor function_391980
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part345.c - 5 个函数
// 函数: void function_451e30(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint *param_4,
void function_451e30(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint *param_4,
                  int32_t param_5,float *param_6,uint64_t *param_7,int64_t *param_8,
                  int32_t param_9,int8_t param_10,int8_t param_11)
{
  int64_t *plVar1;
  int8_t stack_array_1a8 [32];
  int8_t local_var_188;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t *plocal_var_150;
  uint local_var_148;
  uint local_var_144;
  uint local_var_140;
  uint local_var_13c;
  int32_t local_var_138;
  void **pplocal_var_130;
  void *plocal_var_128;
  int32_t local_var_120;
  int32_t local_var_11c;
  int8_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint local_var_100;
  uint local_var_fc;
  uint local_var_f8;
  int32_t local_var_f4;
  int64_t alStack_e8 [3];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  int32_t local_var_c0;
  int iStack_a8;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_158 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  if (param_1 != 0) {
    local_var_168 = *param_3;
    local_var_160 = param_3[1];
    local_var_148 = *param_4;
    local_var_144 = param_4[1];
    local_var_140 = param_4[2];
    local_var_13c = param_4[3];
    *param_8 = 0;
    local_var_98 = *param_2;
    local_var_90 = param_2[1];
    local_var_88 = param_2[2];
    local_var_80 = param_2[3];
    local_var_78 = param_2[4];
    local_var_70 = param_2[5];
    local_var_68 = param_2[6];
    local_var_60 = param_2[7];
    local_var_58 = param_2[8];
    local_var_50 = param_2[9];
    local_var_48 = param_2[10];
    local_var_40 = param_2[0xb];
    local_var_38 = param_2[0xc];
    local_var_30 = param_2[0xd];
    local_var_28 = param_2[0xe];
    local_var_20 = param_2[0xf];
    iStack_a8 = 0;
    local_var_118 = 0;
    plocal_var_128 = &processed_var_584_ptr;
    local_var_f8 = local_var_140 ^ 0x80000000;
    local_var_100 = local_var_148 ^ 0x80000000;
    local_var_fc = local_var_144 ^ 0x80000000;
    local_var_f4 = 0x7f7fffff;
    local_var_11c = param_9;
    local_var_120 = 2;
    plocal_var_150 = &local_var_98;
    local_var_138 = param_5;
    pplocal_var_130 = &plocal_var_128;
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
    local_var_188 = param_11;
    local_var_110 = local_var_168;
    local_var_108 = local_var_160;
    (**(code **)(*plVar1 + 0x158))(plVar1,&plocal_var_150,alStack_e8,param_10);
    param_2 = (uint64_t *)(uint64_t)(0 < iStack_a8);
    if (0 < iStack_a8) {
      *param_6 = SQRT((fStack_cc - (float)local_var_168) * (fStack_cc - (float)local_var_168) +
                      (fStack_c8 - local_var_168._4_4_) * (fStack_c8 - local_var_168._4_4_) +
                      (fStack_c4 - (float)local_var_160) * (fStack_c4 - (float)local_var_160));
      *param_7 = CONCAT44(fStack_c8,fStack_cc);
      param_7[1] = CONCAT44(local_var_c0,fStack_c4);
      if ((alStack_e8[0] != 0) && (*(int64_t *)(alStack_e8[0] + 0x10) != 0)) {
        *param_8 = *(int64_t *)(alStack_e8[0] + 0x10);
      }
    }
    iStack_a8 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_1a8,param_2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4520a0(int64_t param_1,float *param_2,float *param_3,uint *param_4,int32_t param_5,
void function_4520a0(int64_t param_1,float *param_2,float *param_3,uint *param_4,int32_t param_5,
                  float *param_6,uint64_t *param_7,int64_t *param_8,int32_t param_9)
{
  int64_t *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t stack_array_148 [32];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  uint64_t local_var_118;
  void *plocal_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int8_t local_var_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t local_var_ec;
  uint local_var_e8;
  uint local_var_e4;
  uint local_var_e0;
  int32_t local_var_dc;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint local_var_b8;
  uint local_var_b4;
  uint local_var_b0;
  uint local_var_ac;
  int32_t local_var_a8;
  void **pplocal_var_a0;
  int64_t alStack_98 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int32_t local_var_70;
  int iStack_58;
  uint64_t local_var_48;
  local_var_118 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  if (param_1 != 0) {
    fVar2 = (param_2[2] + param_3[2]) * 0.5;
    fVar3 = (param_2[1] + param_3[1]) * 0.5;
    fVar4 = (*param_2 + *param_3) * 0.5;
    local_var_b8 = *param_4;
    local_var_b4 = param_4[1];
    local_var_b0 = param_4[2];
    local_var_ac = param_4[3];
    *param_8 = 0;
    iStack_58 = 0;
    local_var_100 = 0;
    plocal_var_110 = &processed_var_560_ptr;
    local_var_ec = 0x7f7fffff;
    local_var_e0 = local_var_b0 ^ 0x80000000;
    local_var_11c = 0x7f7fffff;
    local_var_e8 = local_var_b8 ^ 0x80000000;
    local_var_e4 = local_var_b4 ^ 0x80000000;
    local_var_dc = 0x7f7fffff;
    local_var_104 = param_9;
    local_var_108 = 2;
    local_var_d8 = *(uint64_t *)param_2;
    local_var_d0 = *(uint64_t *)(param_2 + 2);
    fStack_c8 = *param_3;
    fStack_c4 = param_3[1];
    fStack_c0 = param_3[2];
    fStack_bc = param_3[3];
    local_var_a8 = param_5;
    pplocal_var_a0 = &plocal_var_110;
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
    fStack_128 = fVar4;
    fStack_124 = fVar3;
    fStack_120 = fVar2;
    fStack_f8 = fVar4;
    fStack_f4 = fVar3;
    fStack_f0 = fVar2;
    (**(code **)(*plVar1 + 0x150))(plVar1,&local_var_d8,alStack_98);
    if (0 < iStack_58) {
      *param_6 = SQRT((fStack_7c - fVar4) * (fStack_7c - fVar4) +
                      (fStack_78 - fVar3) * (fStack_78 - fVar3) +
                      (fStack_74 - fVar2) * (fStack_74 - fVar2));
      *param_7 = CONCAT44(fStack_78,fStack_7c);
      param_7[1] = CONCAT44(local_var_70,fStack_74);
      if ((alStack_98[0] != 0) && (*(int64_t *)(alStack_98[0] + 0x10) != 0)) {
        *param_8 = *(int64_t *)(alStack_98[0] + 0x10);
      }
    }
    iStack_58 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4522d0(int64_t param_1,float *param_2,float *param_3,float param_4,float *param_5,
void function_4522d0(int64_t param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  uint64_t *param_6,int64_t *param_7,int32_t param_8)
{
  int64_t *plVar1;
  bool bVar2;
  int8_t stack_array_168 [32];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  void *plocal_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int8_t local_var_100;
  uint64_t local_var_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int8_t local_var_cc;
  void **pplocal_var_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  float fStack_9c;
  void **pplocal_var_98;
  int64_t alStack_88 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int32_t local_var_60;
  int iStack_48;
  uint64_t local_var_38;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_1 != 0) {
    *param_7 = 0;
    fStack_130 = param_3[2] - param_2[2];
    fStack_134 = param_3[1] - param_2[1];
    fStack_138 = *param_3 - *param_2;
    iStack_48 = 0;
    plocal_var_110 = &processed_var_6432_ptr;
    local_var_104 = param_8;
    local_var_108 = 2;
    local_var_100 = 0;
    fStack_148 = *param_2;
    fStack_144 = param_2[1];
    fStack_140 = param_2[2];
    fStack_13c = param_2[3];
    local_var_12c = 0x7f7fffff;
    local_var_128 = Function_671d3b4d(&fStack_138);
    if (0.011 < param_4) {
      fStack_c0 = fStack_148;
      fStack_bc = fStack_144;
      fStack_b8 = fStack_140;
      fStack_b4 = fStack_13c;
      fStack_b0 = fStack_138;
      fStack_ac = fStack_134;
      fStack_a8 = fStack_130;
      local_var_a4 = local_var_12c;
      pplocal_var_98 = &plocal_var_110;
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
      local_var_a0 = local_var_128;
      fStack_9c = param_4;
      (**(code **)(*plVar1 + 0x148))(plVar1,&fStack_c0,alStack_88);
    }
    else {
      fStack_f0 = fStack_148;
      fStack_ec = fStack_144;
      fStack_e8 = fStack_140;
      fStack_e4 = fStack_13c;
      fStack_e0 = fStack_138;
      fStack_dc = fStack_134;
      fStack_d8 = fStack_130;
      local_var_d4 = local_var_12c;
      local_var_cc = 0;
      pplocal_var_c8 = &plocal_var_110;
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
      local_var_d0 = local_var_128;
      (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_f0);
    }
    bVar2 = 0 < iStack_48;
    if (0 < iStack_48) {
      *param_5 = SQRT((*param_2 - fStack_6c) * (*param_2 - fStack_6c) +
                      (param_2[1] - fStack_68) * (param_2[1] - fStack_68) +
                      (param_2[2] - fStack_64) * (param_2[2] - fStack_64));
      *param_6 = CONCAT44(fStack_68,fStack_6c);
      param_6[1] = CONCAT44(local_var_60,fStack_64);
      if ((alStack_88[0] != 0) && (*(int64_t *)(alStack_88[0] + 0x10) != 0)) {
        *param_7 = *(int64_t *)(alStack_88[0] + 0x10);
      }
    }
    iStack_48 = 0;
    param_2 = (float *)(uint64_t)bVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168,param_2);
}
// 函数: void function_4524e0(int64_t param_1)
void function_4524e0(int64_t param_1)
{
  if (param_1 != 0) {
    RenderingProcessor(param_1 + 0x2a68);
  }
  return;
}
// 函数: void function_452500(int64_t param_1)
void function_452500(int64_t param_1)
{
  if (param_1 != 0) {
    function_390f40(param_1 + 0x2a68);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180452db5)
// WARNING: Removing unreachable block (ram,0x000180452dbd)
// WARNING: Removing unreachable block (ram,0x000180452dc3)
// WARNING: Removing unreachable block (ram,0x000180452dd1)
// WARNING: Removing unreachable block (ram,0x000180452e02)
// WARNING: Removing unreachable block (ram,0x000180452dd9)
// WARNING: Removing unreachable block (ram,0x000180452ddf)
// WARNING: Removing unreachable block (ram,0x000180452d74)
// WARNING: Removing unreachable block (ram,0x000180452e0a)
// WARNING: Removing unreachable block (ram,0x000180452e0d)
// WARNING: Removing unreachable block (ram,0x000180452e26)
// WARNING: Removing unreachable block (ram,0x000180452e34)
// WARNING: Removing unreachable block (ram,0x000180452e59)
// WARNING: Removing unreachable block (ram,0x000180452e54)
// WARNING: Removing unreachable block (ram,0x000180452e62)
// WARNING: Removing unreachable block (ram,0x000180452e7d)
// WARNING: Removing unreachable block (ram,0x000180452e85)
// WARNING: Removing unreachable block (ram,0x000180452ea5)
// WARNING: Removing unreachable block (ram,0x000180452ead)
// WARNING: Removing unreachable block (ram,0x00018045298c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address