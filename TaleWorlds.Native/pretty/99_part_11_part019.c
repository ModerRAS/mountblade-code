#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part019.c - 10 个函数
// 函数: void function_6ee500(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void function_6ee500(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t param_5)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int16_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t uVar8;
  uint uVar9;
  int8_t *puVar10;
  uint64_t uVar11;
  int8_t astack_special_x_10 [8];
  uint64_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_158;
  int64_t lStack_150;
  int32_t local_var_148;
  int16_t local_var_144;
  uint64_t *plocal_var_140;
  int64_t lStack_138;
  uint64_t local_var_130;
  uint64_t **pplocal_var_128;
  int64_t *plStack_120;
  uint64_t *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [192];
  uVar8 = 0;
  local_var_158 = 0;
  local_var_148 = 0;
  lStack_150 = 0;
  local_var_168 = 0;
  local_var_160 = 1;
  local_var_144 = 0;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  local_var_168 = CONCAT44(local_var_168._4_4_,uVar2);
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  local_var_168 = CONCAT44(uVar2,(int)local_var_168);
  local_var_160 = (**(code **)(*param_2 + 0x48))(param_2);
  local_var_158 = (**(code **)(*param_2 + 0x50))(param_2);
  lStack_150 = 0;
  local_var_148 = (**(code **)(*param_2 + 0x58))(param_2);
  puVar5 = (int16_t *)(**(code **)(*param_2 + 0x60))(param_2,astack_special_x_10);
  local_var_144 = *puVar5;
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  puVar1 = (uint64_t *)
           CONCAT44(param_5._4_4_,
                    CONCAT13(param_5._3_1_,
                             CONCAT12(param_5._2_1_,CONCAT11(param_5._1_1_,(int8_t)param_5))));
  iVar3 = iVar3 * iVar4 * 4;
  lVar6 = function_6f12b0(puVar1[2] + 8,iVar3);
  (**(code **)(*param_2 + 0x28))(param_2,lVar6,iVar3);
  plocal_var_140 = (uint64_t *)puVar1[2];
  lStack_138 = 0;
  local_var_130 = 0;
  lStack_150 = lVar6;
  __0PxHeightFieldDescGeneratedInfo_physx__QEAA_XZ(stack_array_e8);
  pplocal_var_128 = &plocal_var_140;
  plocal_var_118 = &local_var_168;
  local_var_100 = 0;
  local_var_f8 = 0;
  plStack_120 = param_4;
  plocal_var_110 = puVar1;
  local_var_108 = param_3;
  function_6f08b0(stack_array_e8,&pplocal_var_128,0);
  if ((((local_var_130 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_130)) && (lStack_138 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_140 + 0x10))();
  }
  uVar9 = local_var_168._4_4_ * (int)local_var_168;
  if ((uVar9 != 0) && (lStack_150 != 0)) {
    if (uVar9 != 0) {
      puVar10 = (int8_t *)(lStack_150 + 2);
      do {
        iVar3 = (int)uVar8;
        if ((iVar3 == 0) || (iVar3 != (int)(uVar8 / 6) * 6)) {
          uVar11 = 1;
          puVar7 = &system_data_c8e4;
        }
        else {
          uVar11 = 4;
          puVar7 = &processed_var_8768_ptr;
        }
        (**(code **)*puVar1)(puVar1,puVar7,uVar11);
        param_5._0_1_ = puVar10[-2];
        param_5._1_1_ = puVar10[-1];
        param_5._2_1_ = *puVar10;
        param_5._3_1_ = puVar10[1];
        function_6c4e00(puVar1,&rendering_buffer_2208_ptr,
                      CONCAT13(param_5._3_1_,CONCAT12(param_5._2_1_,*(int16_t *)(puVar10 + -2))))
        ;
        uVar8 = (uint64_t)(iVar3 + 1U);
        puVar10 = puVar10 + 4;
      } while (iVar3 + 1U < uVar9);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8664_ptr,puVar1[4]);
    puVar1[3] = 0;
  }
  function_6f1550(puVar1[2],lVar6);
  return;
}
uint64_t *
function_6ee7a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5,uint64_t param_6)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t stack_special_x_10;
  uint64_t *plocal_var_1b8;
  int64_t lStack_1b0;
  uint64_t local_var_1a8;
  uint64_t *plocal_var_1a0;
  int64_t lStack_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  int32_t stack_array_178 [2];
  uint64_t local_var_170;
  int32_t local_var_168;
  int16_t local_var_164;
  uint64_t **pplocal_var_160;
  uint64_t **pplocal_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t *plocal_var_130;
  int64_t *plStack_128;
  uint64_t local_var_120;
  int8_t local_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [224];
  puVar4 = param_5;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar5 = param_5[2];
  local_var_168 = 0;
  stack_array_178[0] = 0;
  local_var_170 = 0;
  local_var_188 = 0;
  local_var_180 = 1;
  local_var_164 = 0;
  stack_special_x_10 = (**(code **)(*param_4 + 0x18))(param_4);
  lStack_198 = 0;
  plocal_var_1a0 = &stack_special_x_10;
  plocal_var_1b8 = &stack_special_x_10;
  local_var_190 = 0;
  lStack_1b0 = 0;
  local_var_1a8 = 0;
  __0PxHeightFieldDescGeneratedInfo_physx__QEAA_XZ(stack_array_f8);
  pplocal_var_160 = &plocal_var_1a0;
  param_5._0_1_ = 0;
  pplocal_var_158 = &plocal_var_1b8;
  plocal_var_130 = &local_var_188;
  local_var_120 = param_6;
  plocal_var_110 = &param_5;
  local_var_118 = 1;
  local_var_108 = 0;
  local_var_100 = 0;
  local_var_150 = uVar2;
  local_var_148 = uVar3;
  local_var_140 = uVar5;
  local_var_138 = param_3;
  plStack_128 = param_4;
  function_6f04f0(stack_array_f8,&pplocal_var_160,0);
  if ((((local_var_1a8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_1a8)) && (lStack_1b0 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_1b8 + 0x10))();
  }
  if ((((local_var_190 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_190)) && (lStack_198 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_1a0 + 0x10))();
  }
  param_6 = 0;
  function_6f0110(param_3,&processed_var_8664_ptr,&param_6,stack_array_178,&param_5,param_4);
  local_var_170 = param_6;
  lVar1 = *(int64_t *)puVar4[1];
  uVar5 = (**(code **)(*(int64_t *)*puVar4 + 0x120))();
  uVar5 = (**(code **)(lVar1 + 0x60))(puVar4[1],&local_var_188,uVar5);
  param_2[1] = uVar5;
  param_2[2] = uVar5;
  *param_2 = &processed_var_9192_ptr;
  return param_2;
}
// 函数: void function_6ee9b0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
void function_6ee9b0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)
{
  int32_t uVar1;
  uint64_t uVar2;
  void *plocal_var_118;
  void *plocal_var_110;
  uint64_t *plocal_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int32_t stack_array_e8 [2];
  uint64_t local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a0;
  int16_t local_var_9c;
  uint64_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t *plocal_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  int32_t local_var_30;
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  function_6f0e70(param_4,param_5,2,uVar2,uVar1,&processed_var_4336_ptr,&rendering_buffer_2208_ptr);
  if (*(int64_t *)(param_6 + 8) != 0) {
    local_var_9c = 0xff;
    stack_array_e8[0] = 0;
    local_var_e0 = 0;
    local_var_d8 = 0;
    local_var_d0 = 0;
    local_var_c8 = 0;
    local_var_c0 = 0;
    local_var_b8 = 0;
    local_var_b0 = 0;
    local_var_a8 = 0;
    local_var_a0 = 0xff0000;
    local_var_e0 = (**(code **)(*param_2 + 0x30))(param_2);
    stack_array_e8[0] = 0xc;
    local_var_d8 = (**(code **)(*param_2 + 0x28))(param_2);
    local_var_a0 = CONCAT22(local_var_a0._2_2_,2);
    local_var_98 = *(uint64_t *)(param_1 + 8);
    plocal_var_90 = &local_var_98;
    local_var_68 = 0;
    local_var_60 = 0;
    plocal_var_88 = &local_var_98;
    plocal_var_70 = &local_var_98;
    local_var_40 = 0x3f400000;
    local_var_80 = 0;
    local_var_78 = 0;
    local_var_58 = 0;
    local_var_50 = 0;
    local_var_48 = 0;
    local_var_3c = 0xffffffff;
    local_var_38 = 0;
    function_6f1810(&plocal_var_70,0x40);
    plocal_var_108 = &local_var_98;
    local_var_30 = 0x20;
    plocal_var_118 = &processed_var_8576_ptr;
    local_var_100 = 0;
    plocal_var_110 = &processed_var_8592_ptr;
    local_var_f8 = 0;
    local_var_f0 = 0;
    (**(code **)(**(int64_t **)(param_6 + 8) + 0x38))
              (*(int64_t **)(param_6 + 8),stack_array_e8,&plocal_var_118,0);
    function_6f0c90(param_4,param_5,0x10,local_var_f8,(int32_t)local_var_100,&processed_var_8648_ptr,
                  &render_data_ptr);
    plocal_var_118 = &processed_var_8576_ptr;
    plocal_var_110 = &processed_var_8592_ptr;
    function_6f1550(plocal_var_108,local_var_f8);
    plocal_var_110 = &system_handler1_ptr;
    plocal_var_118 = &ui_system_data_1760_ptr;
    function_6f1080(&plocal_var_90);
  }
  return;
}
// 函数: void function_6eea3d(void)
void function_6eea3d(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int16_t in_AX;
  int32_t uVar3;
  uint64_t *unaff_RBP;
  int64_t *unaff_RDI;
  int unaff_R13D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  void *local_var_40;
  void *local_var_48;
  uint64_t *local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_70;
  uint64_t local_buffer_78;
  *(int16_t *)((int64_t)unaff_RBP + -0x44) = in_AX;
  lVar1 = *unaff_RDI;
  local_buffer_70 = 0;
  local_buffer_78 = 0;
  *(int32_t *)(unaff_RBP + -0x10) = 0;
  *(int32_t *)(unaff_RBP + -0xf) = 0;
  unaff_RBP[-0xe] = 0;
  *(int32_t *)(unaff_RBP + -0xd) = 0;
  *(int32_t *)(unaff_RBP + -0xc) = 0;
  unaff_RBP[-0xb] = 0;
  *(int32_t *)(unaff_RBP + -10) = 0;
  *(int32_t *)(unaff_RBP + -9) = 0xff0000;
  local_buffer_78 = (**(code **)(lVar1 + 0x30))();
  local_buffer_70 = 0xc;
  uVar3 = (**(code **)(*unaff_RDI + 0x28))();
  *(short *)(unaff_RBP + -9) = (short)unaff_R13D;
  *(int32_t *)(unaff_RBP + -0x10) = uVar3;
  unaff_RBP[-8] = *(uint64_t *)(unaff_R15 + 8);
  unaff_RBP[-2] = 0;
  unaff_RBP[-1] = 0;
  unaff_RBP[-7] = unaff_RBP + -8;
  unaff_RBP[-6] = unaff_RBP + -8;
  unaff_RBP[-3] = unaff_RBP + -8;
  *(int32_t *)(unaff_RBP + 3) = 0x3f400000;
  unaff_RBP[-5] = 0;
  unaff_RBP[-4] = 0;
  *unaff_RBP = 0;
  unaff_RBP[1] = 0;
  unaff_RBP[2] = 0;
  *(int32_t *)((int64_t)unaff_RBP + 0x1c) = 0xffffffff;
  unaff_RBP[4] = 0;
  function_6f1810(unaff_RBP + -3,unaff_R13D + 0x3e);
  plVar2 = *(int64_t **)(unaff_R14 + 8);
  local_buffer_50 = unaff_RBP + -8;
  *(int32_t *)(unaff_RBP + 5) = 0x20;
  local_var_40 = &processed_var_8576_ptr;
  local_buffer_58 = 0;
  local_var_48 = &processed_var_8592_ptr;
  local_buffer_60 = 0;
  local_buffer_68 = 0;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_buffer_00000070,&local_buffer_00000040,0);
  function_6f0c90();
  local_var_40 = &processed_var_8576_ptr;
  local_var_48 = &processed_var_8592_ptr;
  function_6f1550(local_buffer_50,local_buffer_60);
  local_var_48 = &system_handler1_ptr;
  local_var_40 = &ui_system_data_1760_ptr;
  function_6f1080(unaff_RBP + -7);
  return;
}
// 函数: void function_6eebd3(void)
void function_6eebd3(void)
{
  return;
}
uint64_t *
function_6eec00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)
{
  int64_t lVar1;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_20;
  void *plocal_var_118;
  void *plocal_var_110;
  uint64_t *plocal_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int32_t stack_array_e8 [2];
  uint64_t local_var_e0;
  int32_t stack_array_d8 [2];
  int32_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a0;
  int16_t local_var_9c;
  uint64_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t *plocal_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  int32_t local_var_30;
  int8_t stack_array_28 [16];
  stack_array_e8[0] = 0;
  local_var_e0 = 0;
  local_var_9c = 0xff;
  stack_array_d8[0] = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0xff0000;
  stack_special_x_10 = 0;
  function_6f02d0(param_3,&processed_var_4336_ptr,&stack_special_x_10,stack_array_e8,stack_array_d8,param_4);
  local_var_e0 = stack_special_x_10;
  local_var_a0 = CONCAT22(local_var_a0._2_2_,2);
  stack_special_x_20 = 0;
  function_6efb40(param_3,&processed_var_8648_ptr,&stack_special_x_20,stack_array_28,&stack_special_x_10,param_4);
  local_var_98 = (**(code **)(*param_4 + 0x18))(param_4);
  local_var_80 = 0;
  plocal_var_90 = &local_var_98;
  local_var_68 = 0;
  local_var_60 = 0;
  plocal_var_88 = &local_var_98;
  local_var_40 = 0x3f400000;
  plocal_var_70 = &local_var_98;
  local_var_78 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_3c = 0xffffffff;
  local_var_38 = 0;
  function_6f1810(&plocal_var_70,0x40);
  plocal_var_108 = &local_var_98;
  plocal_var_118 = &processed_var_8576_ptr;
  plocal_var_110 = &processed_var_8592_ptr;
  local_var_30 = 0x20;
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_f0 = 0;
  if ((int)stack_special_x_10 != 0) {
    function_6f19b0(&plocal_var_118,stack_special_x_20);
    lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x58))((int64_t *)*param_5,&plocal_var_110);
    if (lVar1 != 0) goto LAB_1806eedb9;
  }
  local_var_100 = 0;
  (**(code **)(*(int64_t *)param_5[1] + 0x38))((int64_t *)param_5[1],stack_array_e8,&plocal_var_118,0);
  lVar1 = (**(code **)(*(int64_t *)*param_5 + 0x58))((int64_t *)*param_5,&plocal_var_110);
LAB_1806eedb9:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  plocal_var_118 = &processed_var_8576_ptr;
  *param_2 = &processed_var_9128_ptr;
  plocal_var_110 = &processed_var_8592_ptr;
  function_6f1550(plocal_var_108,local_var_f8);
  plocal_var_110 = &system_handler1_ptr;
  plocal_var_118 = &ui_system_data_1760_ptr;
  function_6f1080(&plocal_var_90);
  return param_2;
}
// 函数: void function_6eee40(uint64_t param_1,uint64_t *param_2)
void function_6eee40(uint64_t param_1,uint64_t *param_2)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  int32_t local_var_10;
  local_var_28 = 0;
  local_var_24 = 0;
  local_var_20 = 0;
  local_var_1c = 0x3f800000;
  local_var_18 = 0;
  local_var_10 = 0;
  (**(code **)(*(int64_t *)*param_2 + 0xa0))((int64_t *)*param_2,&local_var_28);
  return;
}
// 函数: void function_6eee80(uint64_t param_1,uint64_t *param_2)
void function_6eee80(uint64_t param_1,uint64_t *param_2)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  int32_t local_var_10;
  local_var_28 = 0;
  local_var_24 = 0;
  local_var_20 = 0;
  local_var_1c = 0x3f800000;
  local_var_18 = 0;
  local_var_10 = 0;
  (**(code **)(*(int64_t *)*param_2 + 0xa8))((int64_t *)*param_2,&local_var_28);
  return;
}
// 函数: void function_6eeec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6eeec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)
{
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  uint64_t local_var_230;
  int32_t local_var_228;
  int32_t local_var_224;
  uint64_t local_var_220;
  int8_t stack_array_218 [48];
  int8_t stack_array_1e8 [448];
  local_var_2b0 = 0;
  local_var_248 = 0;
  local_var_240 = 0;
  local_var_2b8 = *(uint64_t *)(param_5 + 0x10);
  local_var_2a8 = 0;
  local_var_250 = 0;
  local_var_238 = 0;
  local_var_230 = 0;
  local_var_220 = 0;
  local_var_228 = 0x3f400000;
  local_var_224 = 0xffffffff;
  local_var_258 = local_var_2b8;
  function_6d7a90(&local_var_258,0x40);
  function_6d2f90(stack_array_218,&local_var_2b8,param_4,param_2,param_5,param_3,&local_var_258);
// WARNING: Subroutine does not return
  memset(stack_array_1e8,0,0x1b8);
}
// 函数: void function_6ef0b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6ef0b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)
{
  uint64_t local_var_298;
  uint64_t local_var_290;
  uint64_t local_var_288;
  uint64_t local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  int32_t local_var_208;
  int32_t local_var_204;
  uint64_t local_var_200;
  int8_t stack_array_1f8 [48];
  int8_t stack_array_1c8 [416];
  local_var_290 = 0;
  local_var_228 = 0;
  local_var_220 = 0;
  local_var_298 = *(uint64_t *)(param_5 + 0x10);
  local_var_288 = 0;
  local_var_230 = 0;
  local_var_218 = 0;
  local_var_210 = 0;
  local_var_200 = 0;
  local_var_208 = 0x3f400000;
  local_var_204 = 0xffffffff;
  local_var_238 = local_var_298;
  function_6d7a90(&local_var_238,0x40);
  function_6d2f90(stack_array_1f8,&local_var_298,param_4,param_2,param_5,param_3,&local_var_238);
// WARNING: Subroutine does not return
  memset(stack_array_1c8,0,0x1a0);
}
// 函数: void function_6ef2a0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
void function_6ef2a0(uint64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                  uint64_t param_5)
{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int32_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  void *puVar9;
  char *pcVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *plStackX_10;
  int8_t stack_array_98 [112];
  plVar14 = (int64_t *)0x0;
  (**(code **)(*param_4 + 0x18))(param_4,&processed_var_8672_ptr);
  iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  puVar1 = (uint64_t *)CONCAT71(param_5._1_7_,(int8_t)param_5);
  plVar12 = plVar14;
  plVar13 = plVar14;
  if (iVar3 != 0) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x58))(param_2,&plStackX_10,1,plVar12);
      if ((iVar3 != 0) && (plVar13 = plVar14, (short)plStackX_10[1] == 0xd)) {
        plVar13 = plStackX_10;
      }
      if (plVar13 == (int64_t *)0x0) {
        plVar8 = (int64_t *)(**(code **)(*param_3 + 0x68))(param_3);
        if (plVar8 == (int64_t *)0x0) {
          plVar8 = plStackX_10;
        }
        function_6f11b0(puVar1,plVar8);
        param_5._0_1_ = 0;
        (**(code **)*puVar1)(puVar1,&param_5,1);
        puVar9 = &processed_var_8704_ptr;
LAB_1806ef3cf:
        (**(code **)(*param_4 + 0x10))(param_4,puVar9,puVar1[4]);
        puVar1[3] = 0;
      }
      else {
        lVar6 = (**(code **)(*plVar13 + 0x1f0))(plVar13);
        if (lVar6 == 0) {
          uVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13);
          function_6f11b0(puVar1,uVar7);
          param_5._0_1_ = 0;
          (**(code **)*puVar1)(puVar1,&param_5,1);
          puVar9 = &processed_var_8680_ptr;
          goto LAB_1806ef3cf;
        }
      }
      uVar11 = (int)plVar12 + 1;
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (int64_t *)(uint64_t)uVar11;
    } while (uVar11 < uVar4);
  }
  (**(code **)(*param_4 + 0x20))(param_4);
  uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  function_6c4e00(puVar1,&rendering_buffer_2208_ptr,uVar5);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8720_ptr,puVar1[4]);
  puVar1[3] = 0;
  uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  function_6c4e00(puVar1,&rendering_buffer_2208_ptr,uVar5);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8736_ptr,puVar1[4]);
  puVar1[3] = 0;
  cVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  pcVar10 = "false";
  if (cVar2 != '\0') {
    pcVar10 = "true";
  }
  if (*pcVar10 != '\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar10[lVar6] != '\0');
    (**(code **)*puVar1)(puVar1);
  }
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&processed_var_8752_ptr,puVar1[4]);
  puVar1[3] = 0;
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(stack_array_98);
  return;
}
uint64_t *
function_6ef550(uint64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             char *param_5,int64_t *param_6)
{
  char *pcVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  byte bVar12;
  uint64_t uVar13;
  int32_t stack_special_x_10;
  char *apcStackX_18 [2];
  char *apcStack_68 [2];
  void *plocal_var_58;
  uint64_t local_var_50;
  int64_t *plStack_48;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&processed_var_8720_ptr,apcStackX_18);
  if (((cVar3 != '\0') && (apcStack_68[0] = apcStackX_18[0], apcStackX_18[0] != (char *)0x0)) &&
     (*apcStackX_18[0] != '\0')) {
    strtoul(apcStackX_18[0],apcStack_68,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&processed_var_8736_ptr,apcStackX_18);
  if (((cVar3 == '\0') || (apcStack_68[0] = apcStackX_18[0], apcStackX_18[0] == (char *)0x0)) ||
     (*apcStackX_18[0] == '\0')) {
    stack_special_x_10 = SUB84(param_2,0);
  }
  else {
    stack_special_x_10 = strtoul(apcStackX_18[0],apcStack_68,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&processed_var_8752_ptr,apcStackX_18);
  if (cVar3 == '\0') {
    uVar13 = (uint64_t)param_2 & 0xff;
    bVar12 = 0;
  }
  else if ((apcStackX_18[0] == (char *)0x0) || (*apcStackX_18[0] == '\0')) {
    uVar13 = (uint64_t)param_2 & 0xff;
    bVar12 = 1;
  }
  else {
    iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(apcStackX_18[0],&rendering_buffer_2328_ptr);
    bVar12 = 1;
    uVar13 = (uint64_t)(iVar5 == 0);
  }
  pcVar1 = param_5;
  plVar6 = (int64_t *)
           (**(code **)(**(int64_t **)param_5 + 0x18))(*(int64_t **)param_5,stack_special_x_10,uVar13);
  plVar2 = param_6;
  plocal_var_58 = *(void **)pcVar1;
  local_var_50 = *(uint64_t *)(pcVar1 + 8);
  plStack_48 = *(int64_t **)(pcVar1 + 0x10);
  bVar4 = function_6ef930(&plocal_var_58,param_3,plVar6,param_4,param_6);
  bVar12 = bVar12 & bVar4;
  (**(code **)(*param_3 + 0x58))(param_3);
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  if (cVar3 != '\0') {
    (**(code **)(*param_3 + 0x58))(param_3);
    cVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    puVar11 = param_2;
    puVar8 = param_2;
    while (cVar3 != '\0') {
      uVar7 = (**(code **)(*param_3 + 0x38))(param_3);
      iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(uVar7,&processed_var_8704_ptr);
      if (iVar5 == 0) {
        param_5 = (char *)(**(code **)(*param_3 + 0x40))(param_3);
        if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
          puVar8 = (uint64_t *)_strtoui64(param_5,&param_5,10);
        }
        if (puVar8 != (uint64_t *)0x0) {
          plVar9 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,puVar8);
          if (plVar9 == (int64_t *)0x0) {
            uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar7,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr,puVar8);
          }
          bVar12 = bVar12 & plVar9 != (int64_t *)0x0;
          if (plVar9 != (int64_t *)0x0) {
            plVar10 = (int64_t *)(**(code **)(*plVar9 + 0x30))(plVar9);
            if (plVar10 != (int64_t *)0x0) {
              (**(code **)(*plVar10 + 0x68))(plVar10,plVar9,1);
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,plVar9,0);
          }
        }
      }
      else {
        iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(uVar7,&processed_var_8680_ptr);
        if (iVar5 == 0) {
          apcStackX_18[0] = (char *)(**(code **)(*param_3 + 0x40))(param_3);
          if ((apcStackX_18[0] != (char *)0x0) && (*apcStackX_18[0] != '\0')) {
            puVar11 = (uint64_t *)_strtoui64(apcStackX_18[0],apcStackX_18,10);
          }
          if (puVar11 != (uint64_t *)0x0) {
            plVar9 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,puVar11);
            if (plVar9 == (int64_t *)0x0) {
              uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                        (uVar7,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr,puVar11);
            }
            bVar12 = bVar12 & plVar9 != (int64_t *)0x0;
            if (plVar9 != (int64_t *)0x0) {
              plVar10 = (int64_t *)(**(code **)(*plVar9 + 0x28))(plVar9);
              if (plVar10 != (int64_t *)0x0) {
                (**(code **)(*plVar10 + 0x48))(plVar10,plVar9,1);
              }
              (**(code **)(*plVar6 + 0x38))(plVar6,plVar9);
            }
          }
        }
      }
      cVar3 = (**(code **)(*param_3 + 0x28))(param_3);
    }
    (**(code **)(*param_3 + 0x60))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
  }
  (**(code **)(*param_3 + 0x60))(param_3);
  if (bVar12 == 0) {
    plocal_var_58 = &system_buffer_ptr;
    plStack_48 = (int64_t *)0x0;
  }
  else {
    plocal_var_58 = &processed_var_9296_ptr;
    plStack_48 = plVar6;
  }
  *param_2 = plocal_var_58;
  param_2[1] = plStack_48;
  param_2[2] = plStack_48;
  return param_2;
}
int16_t function_6ef910(int64_t *param_1)
{
  int16_t uVar1;
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return uVar1;
}
// WARNING: Removing unreachable block (ram,0x0001806ef9ba)
// WARNING: Removing unreachable block (ram,0x0001806ef9be)
// WARNING: Removing unreachable block (ram,0x0001806ef9a1)
// WARNING: Removing unreachable block (ram,0x0001806ef993)
// WARNING: Removing unreachable block (ram,0x0001806ef997)
// WARNING: Removing unreachable block (ram,0x0001806ef9c8)
uint64_t function_6ef930(void)
{
  int64_t *in_R9;
  int8_t stack_array_78 [120];
  (**(code **)(*in_R9 + 0x18))();
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(stack_array_78);
  return 1;
}
bool function_6ef9e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t param_5)
{
  bool bVar1;
  char acStackX_8 [8];
  uint64_t stack_special_x_10;
  uint64_t *plocal_var_298;
  int64_t lStack_290;
  uint64_t local_var_288;
  uint64_t *plocal_var_280;
  int64_t lStack_278;
  uint64_t local_var_270;
  uint64_t **pplocal_var_268;
  uint64_t **pplocal_var_260;
  uint64_t local_var_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  int64_t *plStack_230;
  uint64_t local_var_228;
  int8_t local_var_220;
  char *pcStack_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  int8_t stack_array_1f8 [480];
  stack_special_x_10 = (**(code **)(*param_4 + 0x18))();
  plocal_var_280 = &stack_special_x_10;
  lStack_278 = 0;
  plocal_var_298 = &stack_special_x_10;
  local_var_270 = 0;
  lStack_290 = 0;
  local_var_288 = 0;
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(stack_array_1f8);
  local_var_258 = *param_1;
  local_var_250 = param_1[1];
  pplocal_var_268 = &plocal_var_280;
  local_var_248 = param_1[2];
  pplocal_var_260 = &plocal_var_298;
  acStackX_8[0] = '\0';
  local_var_228 = param_5;
  pcStack_218 = acStackX_8;
  local_var_220 = 1;
  local_var_210 = 0;
  local_var_208 = 0;
  local_var_240 = param_2;
  local_var_238 = param_3;
  plStack_230 = param_4;
  function_6cb3f0(stack_array_1f8,&pplocal_var_268,0);
  bVar1 = acStackX_8[0] == '\0';
  if ((((local_var_288 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_298 + 0x10))();
  }
  if ((((local_var_270 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_280 + 0x10))();
  }
  return bVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6efb40(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
void function_6efb40(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int32_t *param_4,
                  int *param_5,int64_t *param_6)
{
  uint uVar1;
  char cVar2;
  int8_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  char *pcVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  char *pcStackX_18;
  char *pcStackX_20;
  int iVar8;
  uVar11 = 0;
  *param_4 = 1;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      system_system_memory = system_system_memory + 1;
      pcVar9 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar8 = (int)uVar11;
          uVar7 = iVar8 + 1;
          uVar11 = (uint64_t)uVar7;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        uVar5 = (**(code **)(*param_6 + 8))(param_6,iVar8 + 2);
// WARNING: Subroutine does not return
        memcpy(uVar5,pcStackX_20,uVar7);
      }
      pcStackX_18 = "";
      uVar10 = uVar11;
      uVar12 = uVar11;
      uVar3 = param_5._0_1_;
      do {
        cVar2 = *pcStackX_18;
        iVar8 = (int)uVar10;
        pcVar9 = pcStackX_18;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar12;
            *param_5 = iVar8;
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto label_6efc53;
          }
          iVar4 = isspace((int)cVar2);
          if (iVar4 == 0) break;
          cVar2 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        }
        if ((pcStackX_18 != (char *)0x0) && (*pcStackX_18 != '\0')) {
          uVar3 = strtoul(pcStackX_18,&pcStackX_18,10);
        }
        uVar7 = iVar8 + 1;
        uVar6 = uVar12;
        if ((uint)uVar11 < uVar7) {
          uVar11 = 0x20;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)uVar11 * 2;
              uVar11 = (uint64_t)uVar1;
            } while (uVar1 < uVar7);
          }
          uVar6 = (**(code **)(*param_6 + 8))(param_6,uVar11);
          if (iVar8 != 0) {
// WARNING: Subroutine does not return
            memcpy(uVar6,uVar12,uVar10);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar12);
        }
        *(int8_t *)(uVar10 + uVar6) = uVar3;
        uVar10 = (uint64_t)uVar7;
        uVar12 = uVar6;
      } while( true );
    }
label_6efc53:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address