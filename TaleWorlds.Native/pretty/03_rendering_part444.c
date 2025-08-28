#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part444.c - 4 个函数
// 函数: void function_50dc2f(int param_1,uint64_t param_2,int param_3,float param_4,uint64_t param_5,
void function_50dc2f(int param_1,uint64_t param_2,int param_3,float param_4,uint64_t param_5,
                  uint64_t param_6,int32_t param_7,uint64_t param_8)
{
  int8_t uVar1;
  int iVar2;
  int32_t uVar3;
  int64_t lVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t in_R10;
  int64_t in_R11;
  int32_t uVar7;
  int64_t unaff_R14;
  byte bVar8;
  float in_XMM2_Da;
  float fVar9;
  float fVar10;
  float in_XMM4_Da;
  float fVar11;
  float in_XMM5_Da;
  fVar9 = in_XMM2_Da;
  fVar11 = in_XMM4_Da;
  if (param_1 == 0) {
    fVar9 = param_4;
    param_4 = in_XMM2_Da;
    fVar11 = in_XMM5_Da;
    in_XMM5_Da = in_XMM4_Da;
  }
  fVar10 = fVar9;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x1730) != param_3) {
    fVar10 = param_4;
    param_4 = fVar9;
  }
  piVar5 = (int *)&param_6;
  lVar6 = 4;
  do {
    if (fVar11 + in_XMM5_Da + fVar10 + param_4 == 0.0) {
      iVar2 = *(int *)(in_R11 + 0x688);
      *piVar5 = iVar2;
      if (iVar2 == 0) {
LAB_18050dd0d:
        param_4 = -1e+08;
      }
      else if (iVar2 == 1) {
LAB_18050dcf6:
        fVar10 = -1e+08;
      }
      else {
        if (iVar2 == 2) goto LAB_18050dce0;
        if (iVar2 == 3) goto LAB_18050dcc9;
        *piVar5 = 1;
        fVar10 = -1e+08;
      }
    }
    else if (((fVar11 < in_XMM5_Da) || (fVar11 < fVar10)) || (fVar11 < param_4)) {
      if (((in_XMM5_Da < fVar11) || (in_XMM5_Da < fVar10)) || (in_XMM5_Da < param_4)) {
        if (((param_4 <= fVar10) && (fVar11 <= fVar10)) && (in_XMM5_Da <= fVar10)) {
          *piVar5 = 1;
          goto LAB_18050dcf6;
        }
        if (((param_4 < fVar10) || (param_4 < fVar11)) || (param_4 < in_XMM5_Da))
        goto LAB_18050dd10;
        *piVar5 = param_3;
        goto LAB_18050dd0d;
      }
      *piVar5 = 2;
LAB_18050dce0:
      in_XMM5_Da = -1e+08;
    }
    else {
      *piVar5 = 3;
LAB_18050dcc9:
      fVar11 = -1e+08;
    }
LAB_18050dd10:
    uVar3 = param_7;
    piVar5 = piVar5 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *(int *)(in_R11 + 0x688) = (int)param_6;
      if (in_R10 != 0) {
        param_3 = *(int *)((int64_t)*(int *)(in_R10 + 0xf0) * 0xa0 + 100 +
                          *(int64_t *)(in_R10 + 0xd0));
      }
      lVar6 = (int64_t)param_3 * 0x170 + render_system_memory;
      if (unaff_R14 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)
                 ((int64_t)*(int *)(unaff_R14 + 0xf0) * 0xa0 + 100 +
                 *(int64_t *)(unaff_R14 + 0xd0));
      }
      bVar8 = (byte)((uint)*(int32_t *)(in_R11 + 0x564) >> 0x1f) ^ 1;
      uVar1 = *(int8_t *)(*(int64_t *)(in_R11 + 0x590) + 0x34bc);
      lVar4 = Timer_GetElapsed(lVar6,(int)param_6,bVar8,uVar7,uVar1);
      if (((lVar4 == 0) || (*(int *)(lVar4 + 0x104) == -1)) &&
         ((lVar4 = Timer_GetElapsed(lVar6,param_6._4_4_,bVar8,uVar7,uVar1), lVar4 == 0 ||
          (*(int *)(lVar4 + 0x104) == -1)))) {
        Timer_GetElapsed(lVar6,uVar3,bVar8,uVar7,uVar1);
      }
// WARNING: Subroutine does not return
      SystemSecurityChecker(param_8 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50dd35(uint64_t param_1,uint64_t param_2,int param_3)
void function_50dd35(uint64_t param_1,uint64_t param_2,int param_3)
{
  int8_t uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t in_R11;
  int32_t uVar4;
  int64_t unaff_R14;
  byte bVar5;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  uint64_t local_var_40;
  iStack0000000000000030 = *(int *)(in_RAX + 0x98d948);
  if (iStack0000000000000030 == 0) {
    iStack0000000000000038 = 2;
  }
  else {
    if (iStack0000000000000030 == 1) {
      iStack0000000000000038 = 2;
      iStack0000000000000034 = param_3;
      goto LAB_18050dd9f;
    }
    iStack0000000000000038 = param_3;
    if ((iStack0000000000000030 != 2) && (iStack0000000000000030 != 3)) {
      iStack0000000000000038 = 2;
      iStack0000000000000034 = 0;
      iStack0000000000000030 = 1;
      goto LAB_18050dd9f;
    }
  }
  iStack0000000000000034 = 1;
LAB_18050dd9f:
  *(int *)(in_R11 + 0x688) = iStack0000000000000030;
  if (in_R10 != 0) {
    param_3 = *(int *)((int64_t)*(int *)(in_R10 + 0xf0) * 0xa0 + 100 + *(int64_t *)(in_R10 + 0xd0)
                      );
  }
  lVar3 = (int64_t)param_3 * 0x170 + render_system_memory;
  if (unaff_R14 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(int32_t *)
             ((int64_t)*(int *)(unaff_R14 + 0xf0) * 0xa0 + 100 + *(int64_t *)(unaff_R14 + 0xd0));
  }
  bVar5 = (byte)((uint)*(int32_t *)(in_R11 + 0x564) >> 0x1f) ^ 1;
  uVar1 = *(int8_t *)(*(int64_t *)(in_R11 + 0x590) + 0x34bc);
  lVar2 = Timer_GetElapsed(lVar3,iStack0000000000000030,bVar5,uVar4,uVar1);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x104) == -1)) &&
     ((lVar2 = Timer_GetElapsed(lVar3,iStack0000000000000034,bVar5,uVar4,uVar1), lVar2 == 0 ||
      (*(int *)(lVar2 + 0x104) == -1)))) {
    Timer_GetElapsed(lVar3,iStack0000000000000038,bVar5,uVar4,uVar1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_50dec2(void)
void function_50dec2(void)
{
  uint64_t local_var_40;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50df10(int64_t param_1,char param_2,int32_t param_3,char param_4)
void function_50df10(int64_t param_1,char param_2,int32_t param_3,char param_4)
{
  float fVar1;
  float fVar2;
  uint uVar3;
  void *puVar4;
  int64_t lVar5;
  void *puVar6;
  int32_t *puVar7;
  uint *puVar8;
  int32_t uVar9;
  int8_t stack_array_1c8 [32];
  int8_t local_var_1a8;
  uint local_var_1a0;
  int32_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  uint64_t local_var_160;
  int32_t local_var_158;
  uint64_t local_var_154;
  uint64_t local_var_14c;
  int32_t local_var_144;
  int32_t local_var_140;
  int8_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  uint64_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_124;
  uint64_t local_var_11c;
  int32_t local_var_114;
  int32_t local_var_110;
  int8_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t local_var_bc;
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  int8_t stack_array_a0 [72];
  uint64_t local_var_58;
  uint64_t local_var_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint local_var_3c;
  uint64_t local_var_38;
  local_var_108 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  if (param_2 < '\0') {
    local_var_160 = 0;
    local_var_158 = 0;
    local_var_140 = 0x1000000;
    local_var_154 = 0x3f80000000000000;
    local_var_14c = 0xbe4ccccdbe4ccccd;
    local_var_144 = 0x3ecccccd;
    local_var_13c = 0;
    local_var_168 = 1;
    fVar1 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x20);
    fVar2 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x1c);
    if ((((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (*(int64_t *)(param_1 + 0x590) == 0)) ||
       (*(char *)(*(int64_t *)(param_1 + 0x590) + 0x34bc) == '\0')) {
      local_var_1a8 = 0;
    }
    else {
      local_var_1a8 = 1;
    }
    local_var_190 = CONCAT71(local_var_190._1_7_,1.0 < fVar2 * fVar2 + fVar1 * fVar1);
    local_var_198 = 0;
    local_var_1a0 = (uint)local_var_1a0._1_3_ << 8;
    local_var_164 = function_557850(*(uint64_t *)(param_1 + 0x598),0xffffffff,2,2);
    puVar7 = &local_var_168;
  }
  else {
    if (param_4 == '\0') goto LAB_18050e0d9;
    local_var_130 = 0;
    local_var_128 = 0;
    local_var_110 = 0x1000000;
    local_var_124 = 0x3f80000000000000;
    local_var_11c = 0xbe4ccccdbe4ccccd;
    local_var_114 = 0x3ecccccd;
    local_var_10c = 0;
    local_var_138 = 1;
    fVar1 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x20);
    fVar2 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x1c);
    if ((((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (*(int64_t *)(param_1 + 0x590) == 0)) ||
       (*(char *)(*(int64_t *)(param_1 + 0x590) + 0x34bc) == '\0')) {
      local_var_1a8 = 0;
    }
    else {
      local_var_1a8 = 1;
    }
    local_var_190 = CONCAT71(local_var_190._1_7_,1.0 < fVar2 * fVar2 + fVar1 * fVar1);
    local_var_198 = 0;
    local_var_1a0 = (uint)local_var_1a0._1_3_ << 8;
    local_var_134 = function_557850(*(uint64_t *)(param_1 + 0x598),0xffffffff,5,2);
    puVar7 = &local_var_138;
  }
  CoreSystemThreadManager(param_1,puVar7);
LAB_18050e0d9:
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  puVar8 = (uint *)((int64_t)*(char *)(*(int64_t *)(param_1 + 0x590) + 0x25fc) * 0x100 +
                   *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar3 = *puVar8;
    *puVar8 = *puVar8 | 1;
    UNLOCK();
  } while ((uVar3 & 1) != 0);
  local_var_58 = *(uint64_t *)(puVar8 + 1);
  local_var_50 = *(uint64_t *)(puVar8 + 3);
  fStack_48 = (float)puVar8[5];
  fStack_44 = (float)puVar8[6];
  fStack_40 = (float)puVar8[7];
  local_var_3c = puVar8[8];
  *puVar8 = 0;
  fStack_170 = fStack_40 * *(float *)(lVar5 + 0x98) + *(float *)(lVar5 + 0xa8);
  fStack_174 = fStack_48 * *(float *)(lVar5 + 0x74) + fStack_44 * *(float *)(lVar5 + 0x84) +
               *(float *)(lVar5 + 0xa4);
  fStack_178 = fStack_44 * *(float *)(lVar5 + 0x80) + fStack_48 * *(float *)(lVar5 + 0x70) +
               *(float *)(lVar5 + 0xa0);
  local_var_16c = 0x7f7fffff;
  if (param_2 < '\0') {
    lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0);
  }
  else {
    lVar5 = *(int64_t *)(param_1 + 0x8f8) + 8 + (int64_t)param_2 * 0x1f8;
  }
  puVar4 = *(void **)
            ((int64_t)*(int *)(lVar5 + 0x34) * 0x68 + *(int64_t *)(render_system_data_memory + 0x38) + 0x10);
  puVar6 = &system_buffer_ptr;
  if (puVar4 != (void *)0x0) {
    puVar6 = puVar4;
  }
  lVar5 = strstr(puVar6,&processed_var_6704_ptr);
  uVar9 = render_system_memory;
  if (lVar5 != 0) {
    uVar9 = render_system_memory;
  }
  local_var_180 = 0;
  local_var_188 = 0;
  local_var_190 = 0;
  local_var_198 = 0xffffffff;
  local_var_1a0 = *(uint *)(param_1 + 0x10);
  local_var_1a8 = 1;
  function_4f83f0(*(uint64_t *)(param_1 + 0x8d8),uVar9,&fStack_178,0);
  local_var_1a0 = local_var_1a0 & 0xffffff00;
  function_4f5d10(*(uint64_t *)(param_1 + 0x8d8),param_3,&fStack_178,0x41200000);
  local_var_f8 = 0x3f800000;
  local_var_f0 = 0;
  local_var_e8 = 0x3f80000000000000;
  local_var_e0 = 0;
  local_var_d8 = 0;
  local_var_d4 = 0;
  local_var_d0 = 0x3f800000;
  local_var_cc = 0;
  fStack_c8 = fStack_178;
  fStack_c4 = fStack_174;
  fStack_c0 = fStack_170;
  local_var_bc = local_var_16c;
  plocal_var_b8 = &memory_allocator_3480_ptr;
  plocal_var_b0 = stack_array_a0;
  stack_array_a0[0] = 0;
  local_var_a8 = 0x16;
  uVar9 = strcpy_s(stack_array_a0,0x40,&processed_var_6680_ptr);
  uVar9 = function_0c17c0(uVar9,&plocal_var_b8);
  plocal_var_b8 = &system_state_ptr;
  function_4ebb80(*(uint64_t *)(param_1 + 0x8d8),uVar9,&local_var_f8,1);
  function_5a3a20(param_1 + 0x28);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1c8);
}