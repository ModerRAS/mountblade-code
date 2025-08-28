/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part021.c - 6 个函数
// 函数: void function_1e0e40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1e0e40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_1e88e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_1e0e70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1e0e70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_1e88e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
uint64_t * function_1e0ea0(uint64_t *param_1,int64_t param_2,uint64_t param_3)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *pstack_special_x_8;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t *plocal_var_50;
  uint64_t *plocal_var_48;
  uint64_t *plocal_var_40;
  int64_t lStack_38;
  uint64_t *plocal_var_30;
  puVar2 = (uint64_t *)param_1[2];
  pstack_special_x_8 = param_1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      plocal_var_30 = puVar2 + 4;
      lStack_58 = (int64_t)puVar2 + 0x3c;
      plocal_var_50 = puVar2 + 7;
      plocal_var_48 = puVar2 + 6;
      plocal_var_40 = puVar2 + 5;
      lStack_38 = (int64_t)puVar2 + 0x34;
      puVar3 = puVar2;
      lStack_88 = param_2 + 0x1c;
      lStack_80 = param_2 + 0x18;
      lStack_78 = param_2 + 0x10;
      lStack_70 = param_2 + 8;
      lStack_68 = param_2 + 0x14;
      lStack_60 = param_2;
      cVar1 = SystemFunction_0001801eb6f0(&lStack_58,&lStack_88);
      if (cVar1 == '\0') {
        param_1 = puVar2;
        puVar2 = (uint64_t *)puVar3[1];
      }
      else {
        puVar2 = (uint64_t *)*puVar3;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = pstack_special_x_8;
  if (param_1 != pstack_special_x_8) {
    plocal_var_30 = param_1 + 4;
    lStack_58 = (int64_t)param_1 + 0x3c;
    plocal_var_50 = param_1 + 7;
    plocal_var_48 = param_1 + 6;
    plocal_var_40 = param_1 + 5;
    lStack_38 = (int64_t)param_1 + 0x34;
    lStack_88 = param_2 + 0x1c;
    lStack_80 = param_2 + 0x18;
    lStack_78 = param_2 + 0x10;
    lStack_70 = param_2 + 8;
    lStack_68 = param_2 + 0x14;
    lStack_60 = param_2;
    cVar1 = SystemFunction_0001801eb6f0(&lStack_88,&lStack_58);
    if (cVar1 == '\0') goto LAB_1801e1002;
  }
  param_1 = (uint64_t *)function_1e8280(puVar2,&pstack_special_x_8,param_3,param_1,param_2);
  param_1 = (uint64_t *)*param_1;
LAB_1801e1002:
  return param_1 + 8;
}
uint64_t * function_1e0eed(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  char cVar1;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t *in_R10;
  uint64_t *in_R11;
  uint64_t *puVar2;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  do {
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_R14;
    *(uint64_t **)(unaff_RBP + 0x2f) = in_R11 + 4;
    *(int64_t *)(unaff_RBP + 7) = (int64_t)in_R11 + 0x3c;
    *(uint64_t *)(unaff_RBP + -0x21) = unaff_R15;
    *(uint64_t **)(unaff_RBP + 0xf) = in_R11 + 7;
    *(uint64_t *)(unaff_RBP + -0x19) = unaff_R12;
    *(uint64_t **)(unaff_RBP + 0x17) = in_R11 + 6;
    *(uint64_t **)(unaff_RBP + 0x1f) = in_R11 + 5;
    *(int64_t *)(unaff_RBP + 0x27) = (int64_t)in_R11 + 0x34;
    *(uint64_t *)(unaff_RBP + -0x11) = unaff_R13;
    *(int64_t *)(unaff_RBP + -9) = unaff_RDI + 0x14;
    *(int64_t *)(unaff_RBP + -1) = unaff_RDI;
    puVar2 = in_R11;
    cVar1 = SystemFunction_0001801eb6f0(unaff_RBP + 7,unaff_RBP + -0x29);
    if (cVar1 == '\0') {
      in_R10 = in_R11;
      in_R11 = (uint64_t *)puVar2[1];
    }
    else {
      in_R11 = (uint64_t *)*puVar2;
    }
  } while (in_R11 != (uint64_t *)0x0);
  puVar2 = *(uint64_t **)(unaff_RBP + 0x67);
  if (in_R10 != puVar2) {
    *(int64_t *)(unaff_RBP + -9) = unaff_RDI + 0x14;
    *(uint64_t **)(unaff_RBP + 0x2f) = in_R10 + 4;
    *(int64_t *)(unaff_RBP + 7) = (int64_t)in_R10 + 0x3c;
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_R14;
    *(uint64_t **)(unaff_RBP + 0xf) = in_R10 + 7;
    *(uint64_t **)(unaff_RBP + 0x17) = in_R10 + 6;
    *(uint64_t **)(unaff_RBP + 0x1f) = in_R10 + 5;
    *(int64_t *)(unaff_RBP + 0x27) = (int64_t)in_R10 + 0x34;
    *(uint64_t *)(unaff_RBP + -0x21) = unaff_R15;
    *(uint64_t *)(unaff_RBP + -0x19) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x11) = unaff_R13;
    *(int64_t *)(unaff_RBP + -1) = unaff_RDI;
    cVar1 = SystemFunction_0001801eb6f0(unaff_RBP + -0x29,unaff_RBP + 7);
    if (cVar1 == '\0') goto LAB_1801e1002;
  }
  in_R10 = (uint64_t *)function_1e8280(puVar2,unaff_RBP + 0x67,param_3,in_R10);
  in_R10 = (uint64_t *)*in_R10;
LAB_1801e1002:
  return in_R10 + 8;
}
int64_t function_1e0f83(uint64_t param_1,uint64_t param_2)
{
  char cVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R10;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  if (in_R10 != unaff_RSI) {
    *(uint64_t *)(unaff_RBP + -9) = param_2;
    *(int64_t *)(unaff_RBP + 0x2f) = in_R10 + 0x20;
    *(int64_t *)(unaff_RBP + 7) = in_R10 + 0x3c;
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_R14;
    *(int64_t *)(unaff_RBP + 0xf) = in_R10 + 0x38;
    *(int64_t *)(unaff_RBP + 0x17) = in_R10 + 0x30;
    *(int64_t *)(unaff_RBP + 0x1f) = in_R10 + 0x28;
    *(int64_t *)(unaff_RBP + 0x27) = in_R10 + 0x34;
    *(uint64_t *)(unaff_RBP + -0x21) = unaff_R15;
    *(uint64_t *)(unaff_RBP + -0x19) = unaff_R12;
    *(uint64_t *)(unaff_RBP + -0x11) = unaff_R13;
    *(uint64_t *)(unaff_RBP + -1) = unaff_RDI;
    cVar1 = SystemFunction_0001801eb6f0(unaff_RBP + -0x29,unaff_RBP + 7);
    if (cVar1 == '\0') goto LAB_1801e1002;
  }
  plVar2 = (int64_t *)function_1e8280();
  in_R10 = *plVar2;
LAB_1801e1002:
  return in_R10 + 0x40;
}
uint64_t * function_1e1020(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t *plocal_var_60;
  uint64_t *plocal_var_58;
  uint64_t *plocal_var_50;
  int64_t lStack_48;
  uint64_t *plocal_var_40;
  puVar3 = (uint64_t *)param_1[2];
  if (puVar3 != (uint64_t *)0x0) {
    puVar2 = param_1;
    do {
      plocal_var_40 = puVar3 + 4;
      lStack_68 = (int64_t)puVar3 + 0x3c;
      plocal_var_60 = puVar3 + 7;
      plocal_var_58 = puVar3 + 6;
      plocal_var_50 = puVar3 + 5;
      lStack_48 = (int64_t)puVar3 + 0x34;
      puVar4 = puVar3;
      lStack_98 = param_3 + 0x1c;
      lStack_90 = param_3 + 0x18;
      lStack_88 = param_3 + 0x10;
      lStack_80 = param_3 + 8;
      lStack_78 = param_3 + 0x14;
      lStack_70 = param_3;
      cVar1 = SystemFunction_0001801eb6f0(&lStack_68,&lStack_98);
      if (cVar1 == '\0') {
        puVar3 = (uint64_t *)puVar3[1];
        puVar2 = puVar4;
      }
      else {
        puVar3 = (uint64_t *)*puVar3;
      }
    } while (puVar3 != (uint64_t *)0x0);
    if (puVar2 != param_1) {
      plocal_var_40 = puVar2 + 4;
      lStack_68 = (int64_t)puVar2 + 0x3c;
      plocal_var_60 = puVar2 + 7;
      plocal_var_58 = puVar2 + 6;
      plocal_var_50 = puVar2 + 5;
      lStack_48 = (int64_t)puVar2 + 0x34;
      lStack_80 = param_3 + 8;
      lStack_78 = param_3 + 0x14;
      lStack_98 = param_3 + 0x1c;
      lStack_90 = param_3 + 0x18;
      lStack_88 = param_3 + 0x10;
      lStack_70 = param_3;
      cVar1 = SystemFunction_0001801eb6f0(&lStack_98,&lStack_68);
      if (cVar1 == '\0') {
        *param_2 = puVar2;
        return param_2;
      }
    }
  }
  *param_2 = param_1;
  return param_2;
}
// 函数: void function_1e1190(int64_t *param_1)
void function_1e1190(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    function_1c5b20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_1e11f0(int64_t *param_1)
void function_1e11f0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      function_1c5b20(lVar2);
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = lVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1e1250(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uVar3 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
  plVar8 = (int64_t *)*puVar1;
  do {
    if (plVar8 == (int64_t *)0x0) {
LAB_1801e12d2:
      RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x2c));
      uVar4 = *(int32_t *)((int64_t)param_4 + 4);
      lVar2 = param_4[1];
      uVar5 = *(int32_t *)((int64_t)param_4 + 0xc);
      *puVar6 = (int)*param_4;
      puVar6[1] = uVar4;
      puVar6[2] = (int)lVar2;
      puVar6[3] = uVar5;
      *(uint64_t *)(puVar6 + 8) = 0;
      *(uint64_t *)(puVar6 + 10) = 0;
      *(void **)(puVar6 + 4) = &system_state_ptr;
      *(uint64_t *)(puVar6 + 6) = 0;
      puVar6[8] = 0;
      *(void **)(puVar6 + 4) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar6 + 10) = 0;
      *(uint64_t *)(puVar6 + 6) = 0;
      puVar6[8] = 0;
      *(uint64_t *)(puVar6 + 0xc) = 0;
      if ((char)param_5 == '\0') {
        *(uint64_t *)(puVar6 + 0xc) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
        *(int32_t **)(*(int64_t *)(param_1 + 8) + uVar3 * 8) = puVar6;
        *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
        lVar2 = *(int64_t *)(param_1 + 8);
        *param_2 = puVar6;
        param_2[1] = lVar2 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 1;
        return param_2;
      }
      uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
      memset(uVar7,0,(uint64_t)param_5._4_4_ * 8);
    }
    if ((*param_4 == *plVar8) && (param_4[1] == plVar8[1])) {
      if (plVar8 != (int64_t *)0x0) {
        *param_2 = plVar8;
        param_2[1] = puVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_1801e12d2;
    }
    plVar8 = (int64_t *)plVar8[6];
  } while( true );
}
// 函数: void function_1e1480(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1e1480(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1e14f0(uint64_t *param_1,int64_t *param_2)
void function_1e14f0(uint64_t *param_1,int64_t *param_2)
{
  char cVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int8_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int8_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint *puVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  int64_t *plVar21;
  uint *puVar22;
  void *puVar23;
  int iVar24;
  int32_t extraout_XMM0_Da;
  int8_t stack_array_1c8 [32];
  uint *plocal_var_1a8;
  uint *plocal_var_1a0;
  uint *plocal_var_198;
  int32_t local_var_190;
  int iStack_188;
  int64_t lStack_180;
  int64_t *plStack_178;
  char cStack_168;
  byte bStack_167;
  uint local_var_164;
  uint *plocal_var_160;
  uint *plocal_var_158;
  int64_t *plStack_150;
  int8_t local_var_148;
  void *plocal_var_140;
  int8_t *plocal_var_138;
  int iStack_130;
  uint64_t local_var_128;
  void *plocal_var_120;
  int8_t *plocal_var_118;
  int iStack_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  int iStack_fc;
  uint stack_array_f8 [2];
  int64_t *plStack_f0;
  void *plocal_var_e8;
  int64_t *plStack_e0;
  uint local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t *plocal_var_c0;
  uint *plocal_var_b8;
  int8_t local_var_b0;
  uint local_var_a8;
  int64_t *plStack_a0;
  uint *plocal_var_98;
  int8_t local_var_90;
  uint8_t local_var_8f;
  uint stack_array_88 [2];
  int64_t lStack_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int8_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int16_t local_var_50;
  int8_t local_var_4e;
  uint64_t local_var_48;
  local_var_68 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  plVar21 = (int64_t *)0x0;
  local_var_100 = 0;
  bStack_167 = *(byte *)((int64_t)param_2 + 0x14);
  local_var_c8 = (int32_t)param_2[2];
  plocal_var_b8 = (uint *)param_2[1];
  iVar24 = *(int *)((int64_t)param_2 + 0xa4);
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  plStack_e0 = (int64_t *)0x0;
  local_var_d8 = 0;
  lVar12 = param_2[4];
  plVar15 = plVar21;
  iStack_fc = iVar24;
  plocal_var_c0 = param_1;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x2c0);
    plVar15 = (int64_t *)(uint64_t)uVar7;
    plVar8 = plVar21;
    if (*(int64_t *)(lVar12 + 0x2b8) == 0) {
LAB_1801e15e0:
      if (uVar7 != 0) {
// WARNING: Subroutine does not return
        memcpy(plVar8,*(uint64_t *)(lVar12 + 0x2b8),plVar15);
      }
    }
    else if (uVar7 != 0) {
      iVar18 = uVar7 + 1;
      if ((int)(uVar7 + 1) < 0x10) {
        iVar18 = 0x10;
      }
      plVar8 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar18,0x13);
      *(int8_t *)plVar8 = 0;
      plStack_e0 = plVar8;
      uVar5 = CoreEngineSystemCleanup(plVar8);
      local_var_d0 = CONCAT44(local_var_d0._4_4_,uVar5);
      goto LAB_1801e15e0;
    }
    if (plVar8 != (int64_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)plVar8) = 0;
    }
    local_var_d0 = CONCAT44(*(int32_t *)(lVar12 + 0x2cc),(int32_t)local_var_d0);
    local_var_d8 = uVar7;
  }
  lStack_80 = -1;
  local_var_78 = 0xffffffff;
  local_var_74 = CONCAT22(local_var_74._2_2_,0xffff);
  uVar7 = 0xffffffff;
  local_var_a8 = 0xffffffff;
  plStack_f0 = (int64_t *)0x0;
  plStack_a0 = (int64_t *)0x0;
  iVar18 = (int)plVar15;
  cVar19 = 0 < iVar18;
  pcVar2 = *(char **)(*param_2 + 0x18);
  cStack_168 = cVar19;
  if (iVar18 < 1) {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar1 = *pcVar17;
    local_var_60 = 0x1505;
    while (cVar1 != '\0') {
      pcVar17 = pcVar17 + 1;
      local_var_60 = local_var_60 * 0x21 + (int)cVar1;
      cVar1 = *pcVar17;
    }
    lVar12 = param_2[1];
    local_var_5c = (int32_t)((uint64_t)lVar12 >> 0x20);
    local_var_58 = (int32_t)lVar12;
    local_var_54 = (int32_t)param_2[2];
    local_var_50 = *(int16_t *)((int64_t)param_2 + 0x14);
    local_var_4e = *(int8_t *)((int64_t)param_2 + 0xa4);
    puVar20 = (uint *)function_1c7390(lVar12,&plocal_var_98,&local_var_60);
    uVar7 = *puVar20;
    plVar21 = *(int64_t **)(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0;
    plStack_150 = (int64_t *)0x0;
    uVar5 = extraout_XMM0_Da;
    plStack_f0 = plVar21;
    local_var_a8 = uVar7;
    plStack_a0 = plVar21;
    if ((int64_t *)CONCAT71(local_var_8f,local_var_90) != (int64_t *)0x0) {
      uVar5 = (**(code **)(*(int64_t *)CONCAT71(local_var_8f,local_var_90) + 0x38))();
    }
  }
  else {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar19 = *pcVar17;
    stack_array_88[0] = 0x1505;
    while (cVar19 != '\0') {
      pcVar17 = pcVar17 + 1;
      stack_array_88[0] = stack_array_88[0] * 0x21 + (int)cVar19;
      cVar19 = *pcVar17;
    }
    lStack_80 = param_2[1];
    local_var_78 = (int32_t)param_2[2];
    local_var_74 = *(int32_t *)((int64_t)param_2 + 0x14);
    local_var_70 = *(int8_t *)((int64_t)param_2 + 0xa4);
    local_var_6c = (int32_t)param_2[0x14];
    puVar20 = (uint *)(param_2[4] + 0x360);
    plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
    plocal_var_160 = puVar20;
    AcquireSRWLockShared(puVar20);
    function_1e1020(param_2[4] + 0x328,&plStack_150,stack_array_88);
    if (plStack_150 != (int64_t *)(param_2[4] + 0x328)) {
      uVar7 = *(uint *)(plStack_150 + 8);
      local_var_a8 = uVar7;
    }
    uVar5 = ReleaseSRWLockShared(puVar20);
    cVar19 = cStack_168;
  }
  stack_array_f8[0] = uVar7;
  if (uVar7 == 0xffffffff) {
LAB_1801e1cb5:
    if ((*(int *)(system_module_state + 0x620) == 0) && (*(int *)(system_module_state + 0x690) != 0)) {
      function_1c7500(uVar5,param_2);
    }
    if (*(char *)(system_main_module_state + 0x60) == '\0') {
      lStack_180 = *param_2;
      puVar23 = &system_buffer_ptr;
      if ((void *)param_2[0x11] != (void *)0x0) {
        puVar23 = (void *)param_2[0x11];
      }
      plStack_178 = param_2 + 5;
      local_var_190 = 0xffffffff;
      plocal_var_198 = &local_var_164;
      plocal_var_1a0 = plocal_var_b8;
      plocal_var_1a8 = (uint *)CONCAT44(plocal_var_1a8._4_4_,local_var_c8);
      iStack_188 = iVar24;
      lVar12 = function_0a6420(system_message_buffer,param_2 + 0xc,puVar23,bStack_167);
      if (lVar12 != 0) {
        plocal_var_1a0 = stack_array_88;
        plocal_var_1a8 = &local_var_60;
        function_1e4b90(param_1,param_2,lVar12,local_var_164);
      }
    }
    else {
      (**(code **)(*(int64_t *)*system_global_data_ptr + 0x40))((int64_t *)*system_global_data_ptr,param_2);
    }
    goto LAB_1801e1f62;
  }
  puVar20 = (uint *)*param_1;
  if (cVar19 != '\0') {
    plVar21 = (int64_t *)param_2[4];
  }
  plVar8 = plVar21 + (int64_t)iVar24 * 0xe + 2;
  puVar22 = (uint *)(plVar21 + (int64_t)iVar24 * 0xe + 0xe);
  plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
  plocal_var_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar11 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
  plVar16 = plVar8;
  if (plVar11 != (int64_t *)0x0) {
    do {
      if ((int)plVar11[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar11;
      }
      else {
        plVar9 = (int64_t *)plVar11[1];
        plVar16 = plVar11;
      }
      plVar11 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((((plVar16 != plVar8) && ((int)plVar16[4] <= (int)uVar7)) &&
        (puVar3 = (uint64_t *)plVar16[5], puVar3 != (uint64_t *)0x0)) &&
       (*(char *)((int64_t)puVar3 + 0x81) != '\0')) {
      puVar13 = (uint *)*puVar3;
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      ReleaseSRWLockShared(puVar22);
      goto LAB_1801e1f62;
    }
  }
  uVar5 = ReleaseSRWLockShared();
  plocal_var_160 = (uint *)0x0;
  if ((cStack_168 == '\0') && (plStack_f0 == (int64_t *)system_global_data_ptr[10])) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  plocal_var_1a8 = (uint *)CONCAT71(plocal_var_1a8._1_7_,uVar4);
  function_1c6b50(uVar5,&plocal_var_140,iStack_fc,uVar7);
  puVar13 = (uint *)0x0;
  if (cStack_168 != '\0') {
    puVar10 = (int8_t *)0x0;
    plocal_var_120 = &system_data_buffer_ptr;
    plStack_150 = (int64_t *)0x0;
    plocal_var_118 = (int8_t *)0x0;
    iStack_110 = 0;
    local_var_108 = 0;
    local_var_100 = 1;
    if (plStack_e0 == (int64_t *)0x0) {
LAB_1801e1937:
      if (iVar18 != 0) {
// WARNING: Subroutine does not return
        memcpy(puVar10,plStack_e0,plVar15);
      }
    }
    else if (iVar18 != 0) {
      iVar6 = iVar18 + 1;
      if (iVar6 < 0x10) {
        iVar6 = 0x10;
      }
      puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,0x13);
      *puVar10 = 0;
      plocal_var_118 = puVar10;
      plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
      local_var_108 = CONCAT44(local_var_108._4_4_,(int)plStack_150);
      goto LAB_1801e1937;
    }
    if (puVar10 != (int8_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)puVar10) = 0;
    }
    local_var_108 = CONCAT44(local_var_d0._4_4_,(int32_t)local_var_108);
    iStack_110 = iVar18;
    if (0 < iStack_130) {
      local_var_164 = iVar18 + iStack_130;
      if (local_var_164 != 0) {
        uVar7 = local_var_164 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar7 < 0x10) {
            uVar7 = 0x10;
          }
          puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar7 <= (uint)plStack_150) goto LAB_1801e19dd;
          plocal_var_1a8 = (uint *)CONCAT71(plocal_var_1a8._1_7_,0x13);
          puVar10 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar10,uVar7,0x10);
        }
        plocal_var_118 = puVar10;
        plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
        local_var_108 = CONCAT44(local_var_108._4_4_,(int)plStack_150);
      }
LAB_1801e19dd:
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)plVar15 + (int64_t)puVar10),plocal_var_138,
             (int64_t)(iStack_130 + 1));
    }
    if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    local_var_128 = CONCAT44(local_var_d0._4_4_,(uint)plStack_150);
    iStack_110 = 0;
    local_var_100 = 0;
    plocal_var_118 = (int8_t *)0x0;
    local_var_108 = 0;
    plocal_var_120 = &system_state_ptr;
    puVar13 = plocal_var_160;
    plocal_var_138 = puVar10;
    iStack_130 = iVar18;
  }
  plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
  plocal_var_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar15 = plVar21 + (int64_t)iVar24 * 0xe + 8;
  plVar11 = plVar15;
  plVar16 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10];
  if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10] == (int64_t *)0x0) {
LAB_1801e1aa7:
    plVar11 = plVar15;
  }
  else {
    do {
      if ((int)plVar16[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar16;
      }
      else {
        plVar9 = (int64_t *)plVar16[1];
        plVar11 = plVar16;
      }
      plVar16 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((plVar11 == plVar15) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e1aa7;
  }
  if (plVar11 != plVar15) {
    puVar13 = (uint *)plVar11[5];
  }
  uVar5 = ReleaseSRWLockShared(puVar22);
  if (puVar13 == (uint *)0x0) {
    lVar12 = function_1c6d60(uVar5,&plocal_var_140,&local_var_164);
    plVar15 = plStack_f0;
    if (lVar12 == 0) {
      local_var_148 = 0;
      if (cStack_168 == '\0') {
        plVar21 = plStack_f0 + 0x6c;
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        local_var_148 = 1;
        puVar20 = (uint *)plVar15[99];
        function_1e6940(puVar20,&plocal_var_160,&local_var_60);
        puVar22 = plocal_var_160;
        if (plocal_var_160 != puVar20) {
          *(int64_t *)(puVar20 + 8) = *(int64_t *)(puVar20 + 8) + -1;
          SystemFunction_00018066bd70(plocal_var_160);
          RenderingSystem_BufferHandler(puVar22,puVar20);
        }
      }
      else {
        plVar21 = (int64_t *)(param_2[4] + 0x360);
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        local_var_148 = 1;
        lVar12 = param_2[4];
        puVar22 = (uint *)(lVar12 + 0x328);
        function_1e1020(puVar22,&plocal_var_160,stack_array_88);
        puVar20 = plocal_var_160;
        if (plocal_var_160 != puVar22) {
          plVar15 = (int64_t *)(lVar12 + 0x348);
          *plVar15 = *plVar15 + -1;
          SystemFunction_00018066bd70(plocal_var_160);
          RenderingSystem_BufferHandler(puVar20,puVar22);
          if (puVar20 != (uint *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar20);
          }
        }
      }
      uVar5 = ReleaseSRWLockExclusive(plVar21);
      plocal_var_140 = &system_data_buffer_ptr;
      if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_138 = (int8_t *)0x0;
      local_var_128 = local_var_128 & 0xffffffff00000000;
      plocal_var_140 = &system_state_ptr;
      param_1 = plocal_var_c0;
      iVar24 = iStack_fc;
      goto LAB_1801e1cb5;
    }
    *puVar20 = uVar7;
    puVar13 = (uint *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
    puVar13[5] = (uint)bStack_167;
    *(int64_t *)puVar13 = lVar12;
    puVar13[4] = local_var_164;
    puVar13[6] = uVar7;
    local_var_b0 = 0;
    plocal_var_b8 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    local_var_b0 = 1;
    plocal_var_160 = (uint *)CONCAT44(plocal_var_160._4_4_,uVar7);
    plocal_var_158 = puVar13;
    function_1e8ce0(plVar21 + (int64_t)iVar24 * 0xe + 8,&plocal_var_98,&plocal_var_160);
    uVar5 = ReleaseSRWLockExclusive(puVar22);
  }
  puVar3 = plocal_var_c0;
  puVar20[4] = puVar13[4];
  lVar12 = *(int64_t *)puVar13;
  *(int64_t *)(puVar20 + 2) = lVar12;
  *puVar20 = uVar7;
  if (lVar12 == 0) {
    lVar12 = function_1c70b0(uVar5,puVar13,param_2[4],plStack_f0);
    local_var_90 = 1;
    plocal_var_98 = puVar22;
    AcquireSRWLockShared(puVar22);
    plVar15 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    plVar11 = plVar8;
    if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4] == (int64_t *)0x0) {
LAB_1801e1d15:
      plVar11 = plVar8;
    }
    else {
      do {
        if ((int)plVar15[4] < (int)uVar7) {
          plVar16 = (int64_t *)*plVar15;
        }
        else {
          plVar16 = (int64_t *)plVar15[1];
          plVar11 = plVar15;
        }
        plVar15 = plVar16;
      } while (plVar16 != (int64_t *)0x0);
      if ((plVar11 == plVar8) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e1d15;
    }
    if (plVar11 != plVar8) {
      puVar13 = *(uint **)plVar11[5];
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
    }
    ReleaseSRWLockShared(puVar22);
    puVar3 = plocal_var_c0;
    if (plVar11 == plVar8) {
      function_1de690(system_global_data_ptr,plocal_var_c0,*(int32_t *)((int64_t)param_2 + 0xa4),lVar12);
      plocal_var_158 = (uint *)((uint64_t)plocal_var_158 & 0xffffffffffffff00);
      plocal_var_160 = puVar22;
      AcquireSRWLockExclusive(puVar22);
      plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
      plVar15 = plVar8;
      plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
      while (plVar21 != (int64_t *)0x0) {
        if ((int)plVar21[4] < (int)uVar7) {
          plVar21 = (int64_t *)*plVar21;
        }
        else {
          plVar15 = plVar21;
          plVar21 = (int64_t *)plVar21[1];
        }
      }
      if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
        plocal_var_1a8 = stack_array_f8;
        puVar14 = (uint64_t *)function_179aa0(plVar8,&plocal_var_b8);
        plVar15 = (int64_t *)*puVar14;
      }
      plVar15[5] = (int64_t)puVar3;
      ReleaseSRWLockExclusive(puVar22);
    }
    if (lVar12 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar12);
    }
  }
  else {
    function_1de690(system_global_data_ptr,plocal_var_c0,*(int32_t *)((int64_t)param_2 + 0xa4));
    plocal_var_158 = (uint *)((uint64_t)plocal_var_158 & 0xffffffffffffff00);
    plocal_var_160 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
    plVar15 = plVar8;
    plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    while (plVar21 != (int64_t *)0x0) {
      if ((int)plVar21[4] < (int)uVar7) {
        plVar21 = (int64_t *)*plVar21;
      }
      else {
        plVar15 = plVar21;
        plVar21 = (int64_t *)plVar21[1];
      }
    }
    if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
      plocal_var_1a8 = stack_array_f8;
      puVar14 = (uint64_t *)function_179aa0(plVar8,&plocal_var_b8);
      plVar15 = (int64_t *)*puVar14;
    }
    plVar15[5] = (int64_t)puVar3;
    ReleaseSRWLockExclusive(puVar22);
  }
  plocal_var_140 = &system_data_buffer_ptr;
  if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_138 = (int8_t *)0x0;
  local_var_128 = local_var_128 & 0xffffffff00000000;
  plocal_var_140 = &system_state_ptr;
LAB_1801e1f62:
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  plocal_var_e8 = &system_data_buffer_ptr;
  if (plStack_e0 == (int64_t *)0x0) {
    plStack_e0 = (int64_t *)0x0;
    local_var_d0 = local_var_d0 & 0xffffffff00000000;
    plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1c8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plStack_e0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address