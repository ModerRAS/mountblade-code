/* 函数别名定义: RenderingBufferHandler */
#define RenderingBufferHandler RenderingBufferHandler
#include "TaleWorlds.Native.Split.h"
// 99_part_08_part021.c - 7 个函数
// 函数: void UISystem_f4a40(int64_t param_1,uint64_t param_2,uint64_t param_3)
void UISystem_f4a40(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  char cVar2;
  int64_t lVar3;
  bool bVar4;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar5;
  float fVar6;
  uint stack_special_x_10;
  int32_t stack_special_x_14;
  int aiStackX_20 [2];
  int *piVar7;
  int *piVar8;
  int32_t *puVar9;
  float *pfVar10;
  int iStack_68;
  int32_t local_var_64;
  float afStack_60 [2];
  int32_t local_var_58;
  int32_t local_var_54;
  uint64_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int8_t local_var_2c;
  stack_special_x_10._0_1_ = (char)param_2;
  _stack_special_x_10 = CONCAT44((int)((uint64_t)param_2 >> 0x20),(uint)((char)stack_special_x_10 != '\0'));
  cVar2 = SystemSynchronizationProcessor(param_3,&stack_special_x_10,&system_param1_ptr);
  bVar4 = stack_special_x_10 != 0;
  _stack_special_x_10 = CONCAT71(local_buffer_00000011,bVar4);
  uVar5 = extraout_XMM0_Da;
  if (cVar2 != '\0') {
    cVar2 = SystemSynchronizationProcessor(param_3,&iStack_68,&memory_allocator_3424_ptr);
    uVar5 = extraout_XMM0_Da_00;
    if (cVar2 != '\0') {
      cVar2 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
      uVar5 = extraout_XMM0_Da_01;
      if (cVar2 != '\0') {
        cVar2 = SystemSynchronizationProcessor(param_3,&local_var_64,&system_data_bc90);
        uVar5 = extraout_XMM0_Da_02;
        if (cVar2 != '\0') {
          cVar2 = RenderingBufferHandler0(param_3,afStack_60,&memory_allocator_3232_ptr);
          uVar5 = extraout_XMM0_Da_03;
          if (cVar2 != '\0') {
            cVar2 = '\x01';
            goto LAB_1804f4aed;
          }
        }
      }
    }
  }
  cVar2 = '\0';
LAB_1804f4aed:
  pfVar10 = afStack_60;
  puVar9 = &local_var_64;
  piVar8 = aiStackX_20;
  piVar7 = &iStack_68;
  UISystem_fec00(uVar5,cVar2);
  if (cVar2 != '\0') {
    if (((-1 < iStack_68) && (iStack_68 < *(int *)(param_1 + 0x52ed94))) &&
       (-1 < *(short *)(param_1 + 0x52dda0 + (int64_t)iStack_68 * 2))) {
      lVar3 = param_1 + 0x30a0 + (int64_t)iStack_68 * 0xa60;
      if ((char)stack_special_x_10 == '\0') {
        SystemCore_Validator0(lVar3,aiStackX_20[0],1);
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x564);
        if (iVar1 != aiStackX_20[0]) {
          if (-1 < iVar1) {
            *(int32_t *)((int64_t)iVar1 * 0xa60 + 0x3568 + *(int64_t *)(lVar3 + 0x8d8)) = 0;
            *(uint64_t *)
             ((int64_t)*(int *)(lVar3 + 0x564) * 0xa60 + 0x356c + *(int64_t *)(lVar3 + 0x8d8)) = 0
            ;
          }
          if ((*(uint *)(lVar3 + 0x56c) & 0x800) != 0) {
            if (*(int *)(lVar3 + 0x570) == 2) {
              *(uint64_t *)(*(int64_t *)(lVar3 + 0x8d8) + 0x8fd220) = 0;
              *(uint64_t *)(*(int64_t *)(lVar3 + 0x8d8) + 0x98d228) = 0;
            }
            NetworkSystem_a3a20(lVar3 + 0x28);
            if (*(int *)(lVar3 + 0x568) == 1) {
              local_var_48 = 0;
              local_var_44 = 0;
              local_var_40 = 0x3f800000;
              local_var_3c = 0xbe4ccccd;
              local_var_38 = 0xbe4ccccd;
              local_var_30 = 0x1000000;
              local_var_34 = 0x3ecccccd;
              local_var_2c = 0;
              local_var_58 = 1;
              local_var_54 = 0xffffffff;
              local_var_50 = 0x21;
              CoreSystemThreadManager(lVar3,&local_var_58);
              local_var_54 = local_var_64;
              local_var_50 = 0x80000000;
              local_var_48 = 0;
              local_var_30 = 0x1000000;
              local_var_44 = 0;
              local_var_40 = 0x3f800000;
              local_var_3c = 0xbe4ccccd;
              local_var_38 = 0xbe4ccccd;
              local_var_34 = 0x3ecccccd;
              local_var_2c = 0;
              local_var_58 = 0;
              CoreSystemThreadManager(lVar3,&local_var_58);
            }
          }
          fVar6 = 0.0;
          if (0.05 <= afStack_60[0]) {
            fVar6 = afStack_60[0];
          }
          NetworkSystem_2e450(lVar3,aiStackX_20[0],1,fVar6,piVar7,piVar8,puVar9,pfVar10);
        }
      }
    }
  }
  return;
}
// 函数: void UISystem_f4b7b(void)
void UISystem_f4b7b(void)
{
  float fVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t uVar2;
  uint64_t unaff_RSI;
  int32_t unaff_EDI;
  float fVar3;
  uVar2 = (int32_t)unaff_RSI;
  if (-1 < (int)in_RAX) {
    *(int32_t *)(in_RAX * 0xa60 + 0x3568 + *(int64_t *)(unaff_RBX + 0x8d8)) = uVar2;
    *(uint64_t *)
     ((int64_t)*(int *)(unaff_RBX + 0x564) * 0xa60 + 0x356c + *(int64_t *)(unaff_RBX + 0x8d8)) = 0
    ;
  }
  if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) {
    if (*(int *)(unaff_RBX + 0x570) == 2) {
      *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x8d8) + 0x8fd220) = unaff_RSI;
      *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x8d8) + 0x98d228) = unaff_RSI;
    }
    NetworkSystem_a3a20(unaff_RBX + 0x28);
    if (*(int *)(unaff_RBX + 0x568) == 1) {
      *(int32_t *)(unaff_RBP + 0x17) = uVar2;
      *(int32_t *)(unaff_RBP + 0x1b) = 0;
      *(int32_t *)(unaff_RBP + 0x1f) = 0x3f800000;
      *(int32_t *)(unaff_RBP + 0x23) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + 0x27) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + 0x2f) = 0x1000000;
      *(int32_t *)(unaff_RBP + 0x2b) = 0x3ecccccd;
      *(char *)(unaff_RBP + 0x33) = (char)unaff_RSI;
      *(int32_t *)(unaff_RBP + 7) = 1;
      *(int32_t *)(unaff_RBP + 0xb) = 0xffffffff;
      *(uint64_t *)(unaff_RBP + 0xf) = 0x21;
      CoreSystemThreadManager(0,unaff_RBP + 7);
      *(int32_t *)(unaff_RBP + 0xb) = *(int32_t *)(unaff_RBP + -5);
      *(uint64_t *)(unaff_RBP + 0xf) = 0x80000000;
      *(int32_t *)(unaff_RBP + 0x17) = uVar2;
      *(int32_t *)(unaff_RBP + 0x2f) = 0x1000000;
      *(int32_t *)(unaff_RBP + 0x1b) = 0;
      *(int32_t *)(unaff_RBP + 0x1f) = 0x3f800000;
      *(int32_t *)(unaff_RBP + 0x23) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + 0x27) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + 0x2b) = 0x3ecccccd;
      *(char *)(unaff_RBP + 0x33) = (char)unaff_RSI;
      *(int32_t *)(unaff_RBP + 7) = uVar2;
      CoreSystemThreadManager(0,unaff_RBP + 7);
    }
  }
  fVar1 = *(float *)(unaff_RBP + -1);
  fVar3 = 0.0;
  if (0.05 <= fVar1) {
    fVar3 = fVar1;
  }
  NetworkSystem_2e450(fVar1,unaff_EDI,1,fVar3);
  return;
}
// 函数: void UISystem_f4cb9(void)
void UISystem_f4cb9(void)
{
  SystemCore_Validator0();
  return;
}
// 函数: void UISystem_f4ce0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void UISystem_f4ce0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  char cVar1;
  bool bVar2;
  uint64_t stack_special_x_10;
  int aiStackX_20 [2];
  int iStack_48;
  int iStack_44;
  uint64_t local_var_40;
  int32_t stack_array_38 [2];
  int8_t stack_array_30 [4];
  int8_t stack_array_2c [4];
  int8_t stack_array_28 [16];
  local_var_40 = 0xffffffffffffffff;
  stack_array_38[0] = 0xffffffff;
  stack_special_x_10 = param_2;
  cVar1 = SystemSynchronizationProcessor(param_3,&iStack_48,&memory_allocator_3424_ptr);
  if ((cVar1 != '\0') && (cVar1 = SystemSynchronizationProcessor(param_3,&iStack_44,&memory_allocator_3424_ptr), cVar1 != '\0'))
  {
    aiStackX_20[0] = (int)(char)stack_special_x_10;
    cVar1 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3248_ptr);
    if (((cVar1 != '\0') &&
        (((cVar1 = RenderingBufferHandler0(param_3,stack_array_30,&memory_allocator_3360_ptr), cVar1 != '\0' &&
          (cVar1 = RenderingBufferHandler0(param_3,stack_array_2c,&memory_allocator_3360_ptr), cVar1 != '\0')) &&
         (cVar1 = RenderingBufferHandler0(param_3,stack_array_28,&memory_allocator_3376_ptr), cVar1 != '\0')))) &&
       (((cVar1 = SystemSynchronizationProcessor(param_3,&local_var_40,&system_data_bca0), cVar1 != '\0' &&
         (cVar1 = SystemSynchronizationProcessor(param_3,(int64_t)&local_var_40 + 4,&system_data_bca0), cVar1 != '\0')) &&
        (cVar1 = SystemSynchronizationProcessor(param_3,stack_array_38,&system_data_bca0), cVar1 != '\0')))) {
      stack_special_x_10 = CONCAT44(stack_special_x_10._4_4_,(uint)((char)stack_special_x_10 != '\0'));
      cVar1 = SystemSynchronizationProcessor(param_3,&stack_special_x_10,&system_param1_ptr);
      bVar2 = (int)stack_special_x_10 != 0;
      if (cVar1 != '\0') {
        stack_special_x_10 = CONCAT44(stack_special_x_10._4_4_,(uint)((char)stack_special_x_10 != '\0'));
        cVar1 = SystemSynchronizationProcessor(param_3,&stack_special_x_10,&system_param1_ptr);
        if (((cVar1 != '\0') && (-1 < iStack_48)) &&
           (((iStack_48 < *(int *)(param_1 + 0x52ed94) &&
             (((-1 < *(short *)(param_1 + 0x52dda0 + (int64_t)iStack_48 * 2) && (-1 < iStack_44))
              && (iStack_44 < *(int *)(param_1 + 0x52ed94))))) &&
            (-1 < *(short *)(param_1 + 0x52dda0 + (int64_t)iStack_44 * 2))))) {
          NetworkSystem_ab940(*(uint64_t *)(param_1 + 0x98d920),
                        param_1 + 0x30a0 + (int64_t)iStack_48 * 0xa60,
                        param_1 + 0x30a0 + (int64_t)iStack_44 * 0xa60,(int8_t)aiStackX_20[0],
                        stack_array_30,&local_var_40,bVar2,(int)stack_special_x_10 != 0);
        }
      }
    }
  }
  return;
}
// 函数: void UISystem_f4dfe(void)
void UISystem_f4dfe(void)
{
  int iVar1;
  int iVar2;
  char cVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  *(uint *)(unaff_RBP + 0x28) = (uint)(*(char *)(unaff_RBP + 0x28) != '\0');
  cVar3 = SystemSynchronizationProcessor();
  if (cVar3 != '\0') {
    *(uint *)(unaff_RBP + 0x28) = (uint)(*(char *)(unaff_RBP + 0x28) != '\0');
    cVar3 = SystemSynchronizationProcessor();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(unaff_RBP + -0x30);
      if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RSI + 0x52ed94))) &&
         (-1 < *(short *)(unaff_RSI + 0x52dda0 + (int64_t)iVar1 * 2))) {
        iVar2 = *(int *)(unaff_RBP + -0x2c);
        if (((-1 < iVar2) && (iVar2 < *(int *)(unaff_RSI + 0x52ed94))) &&
           (-1 < *(short *)(unaff_RSI + 0x52dda0 + (int64_t)iVar2 * 2))) {
          NetworkSystem_ab940(*(uint64_t *)(unaff_RSI + 0x98d920),
                        unaff_RSI + 0x30a0 + (int64_t)iVar1 * 0xa60,
                        unaff_RSI + 0x30a0 + (int64_t)iVar2 * 0xa60,
                        *(int8_t *)(unaff_RBP + 0x38),unaff_RBP + -0x18);
        }
      }
    }
  }
  return;
}
// 函数: void UISystem_f4f09(void)
void UISystem_f4f09(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_f4f20(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4,
             int param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
             float param_11,float param_12,float param_13,float param_14,float param_15,
             float param_16)
{
  uint64_t uVar1;
  float fVar2;
  char cVar3;
  uint64_t *puVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStackX_20;
  float fStack_208;
  uint64_t local_var_1e8;
  int64_t lStack_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  int iStack_1a8;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint64_t local_var_188;
  int64_t lStack_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int8_t stack_array_158 [8];
  float fStack_150;
  float fStack_14c;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int8_t stack_array_f8 [8];
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  local_var_f0 = param_3[5];
  local_var_e8 = param_3[6];
  iVar7 = *(int *)(param_3 + 8);
  fVar13 = (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 3)) * param_6;
  uVar1 = param_3[7];
  param_6 = (*(float *)(param_4 + 0x1c) - *(float *)((int64_t)param_3 + 0x1c)) * param_6;
  fVar21 = *(float *)(param_3 + 3);
  stack_array_158._4_4_ = *(float *)((int64_t)param_3 + 0x1c);
  local_var_130 = param_3[3];
  local_var_128 = param_3[4];
  local_var_188 = *param_3;
  lStack_180 = param_3[1];
  fVar11 = fVar21 + fVar13;
  local_var_178 = param_3[2];
  fVar16 = (float)stack_array_158._4_4_ + param_6;
  stack_array_158._0_4_ = stack_array_158._4_4_;
  fStack_150 = (float)stack_array_158._4_4_;
  fStack_14c = (float)stack_array_158._4_4_;
  if ((fVar21 != fVar11) || (fVar20 = (float)stack_array_158._4_4_, (float)stack_array_158._4_4_ != fVar16))
  {
    local_var_130 = CONCAT44(fVar16,fVar11);
    if (iVar7 != 0) {
      iVar7 = 0;
    }
    _stack_array_158 = ZEXT416((uint)fVar16);
    fVar20 = fVar16;
    fVar21 = fVar11;
  }
  local_var_168 = param_3[4];
  param_2[7] = 0;
  *param_2 = 0;
  fVar16 = (float)param_5;
  fVar11 = 1.0 / fVar16;
  param_6 = fVar11 * param_6;
  param_2[3] = 0x7fc000007fc00000;
  param_2[4] = 0x7fc000007fc00000;
  *(int32_t *)(param_2 + 5) = 0;
  *(int32_t *)((int64_t)param_2 + 0x2c) = 0;
  *(int32_t *)(param_2 + 6) = 0;
  *(int32_t *)((int64_t)param_2 + 0x34) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_var_170 = local_var_130;
  puVar4 = (uint64_t *)RenderingSystem_975b0();
  param_2[7] = *puVar4;
  *(int32_t *)(param_2 + 8) = 0;
  fStack_208 = 1.1754944e-38;
  iStackX_20 = 0;
  if (0 < param_5) {
    uVar6 = -param_5;
    iVar9 = param_5;
    do {
      local_var_130 = local_var_170;
      local_var_128 = local_var_168;
      fStack_194 = (float)iStackX_20 * param_6 + fVar20;
      fStack_198 = (float)iStackX_20 * fVar11 * fVar13 + fVar21;
      iVar10 = iVar7;
      if (((fVar21 != fStack_198) || (fVar20 != fStack_194)) &&
         (local_var_130 = CONCAT44(fStack_194,fStack_198), iVar7 != 0)) {
        iVar10 = 0;
      }
      if ((int)uVar6 <= iVar9) {
        fVar2 = local_var_130._4_4_;
        fVar20 = (float)local_var_130;
        uVar8 = uVar6;
        do {
          local_var_1e8 = local_var_188;
          local_var_1c0 = local_var_f0;
          local_var_1b8 = local_var_e8;
          lStack_1e0 = lStack_180;
          local_var_1d8 = local_var_178;
          fStack_18c = (float)(int)uVar8 * fVar11 * -fVar13 + fVar2;
          fStack_190 = (float)(int)uVar8 * param_6 + fVar20;
          iStack_1a8 = iVar10;
          if ((fVar20 != fStack_190) || (local_var_1d0 = local_var_130, fVar2 != fStack_18c)) {
            if (iVar10 != 0) {
              iStack_1a8 = 0;
            }
            local_var_1d0 = CONCAT44(fStack_18c,fStack_190);
          }
          local_var_1c8 = local_var_128;
          local_var_1b0 = uVar1;
          cVar3 = UISystem_f6190(param_1,&local_var_1d0);
          if (cVar3 != '\0') {
            pfVar5 = (float *)UISystem_f6240(param_1,stack_array_f8,&local_var_1d0);
            if (((param_7 <=
                  ((float)local_var_1d0 - *pfVar5) * ((float)local_var_1d0 - *pfVar5) +
                  (local_var_1d0._4_4_ - pfVar5[1]) * (local_var_1d0._4_4_ - pfVar5[1])) &&
                (SystemCore_Validator(&local_var_1e8,2), 1 < iStack_1a8)) && (lStack_1e0 != 0)) {
              SystemCore_Validator(&local_var_1e8,3);
              pfVar5 = (float *)&local_var_1c0;
              fVar17 = *(float *)(param_3 + 3) - (float)local_var_1d0;
              fVar19 = *(float *)((int64_t)param_3 + 0x1c) - local_var_1d0._4_4_;
              fVar18 = -param_8;
              if (iStack_1a8 < 3) {
                pfVar5 = (float *)&system_data_ad20;
              }
              fVar14 = fVar19 * fVar19 + fVar17 * fVar17;
              auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
              fVar12 = auVar15._0_4_;
              fVar14 = fVar12 * 0.5 * ((float)system_data_01f0 - fVar14 * fVar12 * fVar12);
              fVar17 = fVar19 * fVar14 * pfVar5[1] + fVar17 * fVar14 * *pfVar5;
              if (fVar18 <= fVar17) {
                if (param_8 <= fVar17) {
                  if (param_9 <= fVar17) goto LAB_1804f553d;
                  fVar18 = ((fVar17 - param_8) / (param_9 - param_8)) * (param_12 - param_11) +
                           param_11;
                }
                else {
                  if ((fVar18 <= fVar17) && (fVar18 = fVar17, param_8 <= fVar17)) {
                    fVar18 = param_8;
                  }
                  fVar18 = (fVar18 + param_8) * (param_11 - param_10) + param_10;
                }
                fVar17 = fVar16 * param_13;
                fVar19 = (float)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
                if (fVar19 <= fVar17) {
                  fVar18 = fVar18 * param_14;
                }
                SystemCore_Validator(&local_var_1e8,2);
                if (iStack_1a8 < 2) {
                  fVar14 = -NAN;
                }
                else {
                  fVar14 = (float)local_var_1c8;
                }
                SystemCore_Validator(param_3,2);
                if (*(int *)(param_3 + 8) < 2) {
                  fVar12 = -NAN;
                }
                else {
                  fVar12 = *(float *)(param_3 + 4);
                }
                fVar14 = fVar14 - fVar12;
                fVar12 = -param_15;
                if ((-param_15 <= fVar14) && (fVar12 = fVar14, param_15 <= fVar14)) {
                  fVar12 = param_15;
                }
                fVar14 = fVar17;
                if ((fVar17 <= fVar19) && (fVar14 = fVar16, fVar19 <= fVar16)) {
                  fVar14 = fVar19;
                }
                fVar18 = fVar18 * ((fVar12 * 0.20000002 + param_15 * 0.20000002) / param_15 + 0.8) *
                         (((fVar14 - fVar17) / fVar17) * (param_16 - 1.0) + 1.0);
                if (fStack_208 < fVar18) {
                  *param_2 = local_var_1e8;
                  param_2[1] = lStack_1e0;
                  param_2[2] = local_var_1d8;
                  param_2[7] = local_var_1b0;
                  *(int *)(param_2 + 8) = iStack_1a8;
                  param_2[3] = local_var_1d0;
                  param_2[4] = local_var_1c8;
                  param_2[5] = local_var_1c0;
                  param_2[6] = local_var_1b8;
                  fStack_208 = fVar18;
                }
              }
            }
          }
LAB_1804f553d:
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 <= iVar9);
        fVar20 = (float)stack_array_158._0_4_;
      }
      uVar6 = uVar6 + 1;
      iStackX_20 = iStackX_20 + 1;
      iVar9 = iVar9 + -1;
    } while (iStackX_20 < param_5);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_f511b(uint param_1,int param_2,int param_3,float param_4,float param_5,int param_6)
void UISystem_f511b(uint param_1,int param_2,int param_3,float param_4,float param_5,int param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  float *pfVar7;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int unaff_ESI;
  uint uVar8;
  uint64_t *unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R15;
  float fVar9;
  float fVar10;
  int32_t extraout_XMM0_Da;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float fVar17;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStackX_20;
  float fStackX_24;
  uint local_buffer_2c;
  uint64_t local_buffer_40;
  int64_t lStack0000000000000048;
  uint64_t local_buffer_50;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  fVar1 = *(float *)(unaff_RBP + 0x2d);
  fVar2 = *(float *)(unaff_RBP + 0x34);
  fVar3 = *(float *)(unaff_RBP + 0x30);
  fVar4 = *(float *)(unaff_RBP + 0x2e);
  local_buffer_2c = param_1;
  do {
    _fStack0000000000000058 = unaff_RBP[-9];
    _fStack0000000000000060 = unaff_RBP[-8];
    unaff_RBP[-1] = _fStack0000000000000058;
    *unaff_RBP = _fStack0000000000000060;
    fVar13 = (float)in_EAX * param_4 + unaff_XMM13_Da;
    fVar9 = (float)in_EAX * in_XMM4_Da + unaff_XMM14_Da;
    *(float *)((int64_t)unaff_RBP + -0x6c) = fVar13;
    *(float *)(unaff_RBP + -0xe) = fVar9;
    if ((unaff_XMM14_Da != fVar9) || (unaff_XMM13_Da != fVar13)) {
      unaff_RBP[-1] = unaff_RBP[-0xe];
      _fStack0000000000000058 = unaff_RBP[-1];
      _fStack0000000000000060 = *unaff_RBP;
      in_EAX = *(int *)(unaff_RBP + 0x29);
      if (unaff_ESI != 0) {
        unaff_ESI = param_3;
      }
    }
    if ((int)local_buffer_2c <= unaff_R12D) {
      fVar9 = *(float *)((int64_t)unaff_RBP + -4);
      fVar13 = *(float *)(unaff_RBP + -1);
      uVar8 = local_buffer_2c;
      do {
        local_buffer_68 = unaff_RBP[7];
        local_buffer_70 = unaff_RBP[8];
        local_buffer_40 = unaff_RBP[-0xc];
        lStack0000000000000048 = unaff_RBP[-0xb];
        local_buffer_50 = unaff_RBP[-10];
        *(int *)(unaff_RBP + -0x10) = unaff_ESI;
        fVar14 = (float)(int)uVar8 * unaff_XMM7_Da + fVar9;
        fVar10 = (float)(int)uVar8 * param_4 + fVar13;
        *(float *)((int64_t)unaff_RBP + -100) = fVar14;
        *(float *)(unaff_RBP + -0xd) = fVar10;
        if ((fVar13 != fVar10) || (fVar9 != fVar14)) {
          iVar6 = unaff_ESI;
          if (unaff_ESI != 0) {
            iVar6 = param_3;
          }
          *(int *)(unaff_RBP + -0x10) = iVar6;
          _fStack0000000000000058 = unaff_RBP[-0xd];
        }
        cVar5 = UISystem_f6190(fVar10,&local_buffer_00000058);
        if (cVar5 != '\0') {
          pfVar7 = (float *)UISystem_f6240(extraout_XMM0_Da,unaff_RBP + 6,&local_buffer_00000058);
          if (((*(float *)(unaff_RBP + 0x2c) <=
                (fStack0000000000000058 - *pfVar7) * (fStack0000000000000058 - *pfVar7) +
                (fStack000000000000005c - pfVar7[1]) * (fStack000000000000005c - pfVar7[1])) &&
              (SystemCore_Validator(&local_buffer_00000040,2), 1 < *(int *)(unaff_RBP + -0x10))) &&
             (lStack0000000000000048 != 0)) {
            SystemCore_Validator(&local_buffer_00000040,3);
            pfVar7 = (float *)&local_buffer_00000068;
            fVar14 = *(float *)(unaff_R15 + 0x18) - fStack0000000000000058;
            fVar17 = *(float *)(unaff_R15 + 0x1c) - fStack000000000000005c;
            fVar10 = -fVar1;
            if (*(int *)(unaff_RBP + -0x10) < 3) {
              pfVar7 = (float *)&system_data_ad20;
            }
            fVar15 = fVar17 * fVar17 + fVar14 * fVar14;
            auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar12 = auVar16._0_4_;
            fVar15 = fVar12 * 0.5 * ((float)system_data_01f0 - fVar15 * fVar12 * fVar12);
            fVar14 = fVar17 * fVar15 * pfVar7[1] + fVar14 * fVar15 * *pfVar7;
            if (fVar14 < fVar10) {
LAB_1804f5535:
              unaff_XMM7_Da = *(float *)(unaff_RBP + 0x2b);
            }
            else {
              if (fVar1 <= fVar14) {
                if (fVar4 <= fVar14) goto LAB_1804f5535;
                fVar10 = ((fVar14 - fVar1) / (fVar4 - fVar1)) *
                         (*(float *)(unaff_RBP + 0x31) - fVar3) + fVar3;
              }
              else {
                if ((fVar10 <= fVar14) && (fVar10 = fVar14, fVar1 <= fVar14)) {
                  fVar10 = fVar1;
                }
                fVar10 = (fVar10 + fVar1) * (fVar3 - unaff_XMM9_Da) + unaff_XMM9_Da;
              }
              fVar14 = unaff_XMM8_Da * *(float *)(unaff_RBP + 0x32);
              fVar17 = (float)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
              if (fVar17 <= fVar14) {
                fVar10 = fVar10 * *(float *)(unaff_RBP + 0x33);
              }
              uVar11 = SystemCore_Validator(&local_buffer_00000040,2);
              if (*(int *)(unaff_RBP + -0x10) < 2) {
                fVar15 = -NAN;
              }
              else {
                fVar15 = fStack0000000000000060;
              }
              SystemCore_Validator(uVar11,2);
              if (*(int *)(unaff_R15 + 0x40) < 2) {
                fVar12 = -NAN;
              }
              else {
                fVar12 = *(float *)(unaff_R15 + 0x20);
              }
              fVar15 = fVar15 - fVar12;
              fVar12 = -fVar2;
              if ((-fVar2 <= fVar15) && (fVar12 = fVar15, fVar2 <= fVar15)) {
                fVar12 = fVar2;
              }
              fVar15 = fVar14;
              if ((fVar14 <= fVar17) &&
                 (fVar15 = *(float *)(unaff_RBP + 0x27), fVar17 <= *(float *)(unaff_RBP + 0x27))) {
                fVar15 = fVar17;
              }
              unaff_XMM9_Da = *(float *)(unaff_RBP + 0x2f);
              unaff_XMM7_Da = *(float *)(unaff_RBP + 0x2b);
              unaff_XMM8_Da = *(float *)(unaff_RBP + 0x27);
              fVar10 = fVar10 * ((fVar12 * 0.20000002 + fVar2 * 0.20000002) / fVar2 + 0.8) *
                       (((fVar15 - fVar14) / fVar14) * (*(float *)(unaff_RBP + 0x35) - 1.0) + 1.0);
              if (fStackX_20 < fVar10) {
                *unaff_RDI = local_buffer_40;
                unaff_RDI[1] = lStack0000000000000048;
                unaff_RDI[2] = local_buffer_50;
                unaff_RDI[7] = unaff_RBX;
                *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBP + -0x10);
                unaff_RDI[3] = _fStack0000000000000058;
                unaff_RDI[4] = _fStack0000000000000060;
                unaff_RDI[5] = local_buffer_68;
                unaff_RDI[6] = local_buffer_70;
                fStackX_20 = fVar10;
              }
            }
          }
        }
        _fStack0000000000000058 = unaff_RBP[-1];
        _fStack0000000000000060 = *unaff_RBP;
        uVar8 = uVar8 + 1;
        param_3 = 0;
        param_4 = *(float *)(unaff_RBP + 0x28);
      } while ((int)uVar8 <= unaff_R12D);
      unaff_XMM13_Da = *(float *)(unaff_RBP + -6);
      in_EAX = *(int *)(unaff_RBP + 0x29);
      param_2 = *(int *)(unaff_RBP + 0x2a);
      in_XMM4_Da = param_5;
      unaff_XMM14_Da = fStackX_24;
    }
    local_buffer_2c = local_buffer_2c + 1;
    in_EAX = in_EAX + 1;
    unaff_R12D = unaff_R12D + -1;
    *(int *)(unaff_RBP + 0x29) = in_EAX;
    unaff_ESI = param_6;
    if (param_2 <= in_EAX) {
      return;
    }
  } while( true );
}