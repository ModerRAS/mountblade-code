#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part333.c - 17 个函数
// 函数: void UISystem_429f0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_429f0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lStack_40;
  int64_t lStack_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  uVar6 = 0xfffffffffffffffe;
  lStack_40 = 0;
  lStack_38 = 0;
  uVar2 = 0;
  local_var_30 = 0;
  local_var_28 = 3;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar5 + *(int64_t *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x170))(plVar1,&lStack_40,0xffffffff,param_4,uVar6);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
  }
  if (*(int64_t *)(param_1 + 0x260) != 0) {
    DataStructure_fdc90(*(int64_t *)(param_1 + 0x260),&lStack_40,0xffffffff);
  }
  uVar4 = uVar2;
  if (lStack_38 - lStack_40 >> 3 != 0) {
    do {
      *(int32_t *)(*(int64_t *)(uVar4 + lStack_40) + 0x2dc) = param_2;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar3;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(lStack_38 - lStack_40 >> 3));
  }
  if (lStack_40 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_42b30(int64_t param_1,int64_t param_2,float *param_3)
void UISystem_42b30(int64_t param_1,int64_t param_2,float *param_3)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  bool bVar12;
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  void *aplocal_var_d8 [20];
  uint64_t local_var_38;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  puVar11 = *(uint64_t **)(param_1 + 0x200);
  puVar1 = *(uint64_t **)(param_1 + 0x208);
  while( true ) {
    if (puVar11 == puVar1) goto LAB_180442cde;
    lVar7 = (**(code **)(*(int64_t *)*puVar11 + 0x10))((int64_t *)*puVar11,aplocal_var_d8);
    if (*(int *)(lVar7 + 0x10) == 0xf) {
      iVar6 = strcmp(*(uint64_t *)(lVar7 + 8),&processed_var_5704_ptr);
      bVar12 = iVar6 == 0;
    }
    else {
      bVar12 = false;
    }
    aplocal_var_d8[0] = &system_state_ptr;
    if (bVar12) break;
    puVar11 = puVar11 + 1;
  }
  lVar7 = **(int64_t **)(param_1 + 0x200);
  lVar9 = 2;
  puVar11 = (uint64_t *)(param_2 + 0x10);
  puVar1 = (uint64_t *)(lVar7 + 0x70);
  do {
    puVar10 = puVar1;
    puVar8 = puVar11;
    uVar5 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar5;
    uVar5 = puVar10[3];
    puVar8[2] = puVar10[2];
    puVar8[3] = uVar5;
    uVar5 = puVar10[5];
    puVar8[4] = puVar10[4];
    puVar8[5] = uVar5;
    uVar5 = puVar10[7];
    puVar8[6] = puVar10[6];
    puVar8[7] = uVar5;
    uVar5 = puVar10[9];
    puVar8[8] = puVar10[8];
    puVar8[9] = uVar5;
    uVar5 = puVar10[0xb];
    puVar8[10] = puVar10[10];
    puVar8[0xb] = uVar5;
    uVar5 = puVar10[0xd];
    puVar8[0xc] = puVar10[0xc];
    puVar8[0xd] = uVar5;
    uVar5 = puVar10[0xf];
    puVar8[0xe] = puVar10[0xe];
    puVar8[0xf] = uVar5;
    lVar9 = lVar9 + -1;
    puVar11 = puVar8 + 0x10;
    puVar1 = puVar10 + 0x10;
  } while (lVar9 != 0);
  uVar5 = puVar10[0x11];
  puVar8[0x10] = puVar10[0x10];
  puVar8[0x11] = uVar5;
  uVar5 = puVar10[0x13];
  puVar8[0x12] = puVar10[0x12];
  puVar8[0x13] = uVar5;
  uVar5 = puVar10[0x15];
  puVar8[0x14] = puVar10[0x14];
  puVar8[0x15] = uVar5;
  uVar5 = puVar10[0x17];
  puVar8[0x16] = puVar10[0x16];
  puVar8[0x17] = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_2 + 0xd0) = *(uint64_t *)(param_1 + 0x70);
  *(uint64_t *)(param_2 + 0xd8) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x88);
  *(uint64_t *)(param_2 + 0xe0) = *(uint64_t *)(param_1 + 0x80);
  *(uint64_t *)(param_2 + 0xe8) = uVar5;
  uVar2 = *(int32_t *)(param_1 + 0x94);
  uVar3 = *(int32_t *)(param_1 + 0x98);
  uVar4 = *(int32_t *)(param_1 + 0x9c);
  *(int32_t *)(param_2 + 0xf0) = *(int32_t *)(param_1 + 0x90);
  *(int32_t *)(param_2 + 0xf4) = uVar2;
  *(int32_t *)(param_2 + 0xf8) = uVar3;
  *(int32_t *)(param_2 + 0xfc) = uVar4;
  uVar2 = *(int32_t *)(param_1 + 0xa4);
  uVar3 = *(int32_t *)(param_1 + 0xa8);
  uVar4 = *(int32_t *)(param_1 + 0xac);
  *(int32_t *)(param_2 + 0x100) = *(int32_t *)(param_1 + 0xa0);
  *(int32_t *)(param_2 + 0x104) = uVar2;
  *(int32_t *)(param_2 + 0x108) = uVar3;
  *(int32_t *)(param_2 + 0x10c) = uVar4;
  DataStructure_864f0(param_2 + 0x10);
  *param_3 = (float)*(double *)(lVar7 + 0x1f8);
  param_3[1] = (float)*(double *)(lVar7 + 0x200);
  param_3[2] = (float)*(double *)(lVar7 + 0x208);
  param_3[3] = 1.0;
LAB_180442cde:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_108);
}
// 函数: void UISystem_42d10(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
void UISystem_42d10(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int8_t stack_array_58 [64];
  lVar1 = *(int64_t *)(param_1 + 0x200);
  iVar7 = 0;
  uVar8 = *(int64_t *)(param_1 + 0x208) - lVar1 >> 3;
  if (uVar8 != 0) {
    lVar9 = 0;
    do {
      lVar2 = *(int64_t *)(lVar9 + lVar1);
      lVar3 = *(int64_t *)(lVar2 + 0x10);
      if (*(int *)(lVar3 + 0x18) == 0xb) {
        iVar5 = strcmp(*(uint64_t *)(lVar3 + 0x10),&processed_var_6192_ptr);
        if (iVar5 == 0) {
          puVar6 = (uint64_t *)RenderingSystem_47100(lVar2,stack_array_58,param_2);
          uVar4 = puVar6[1];
          *param_3 = *puVar6;
          param_3[1] = uVar4;
          uVar4 = puVar6[3];
          param_3[2] = puVar6[2];
          param_3[3] = uVar4;
          uVar4 = puVar6[5];
          param_3[4] = puVar6[4];
          param_3[5] = uVar4;
          uVar10 = *(int32_t *)(puVar6 + 6);
          uVar11 = *(int32_t *)((int64_t)puVar6 + 0x34);
          uVar12 = *(int32_t *)(puVar6 + 7);
          uVar13 = *(int32_t *)((int64_t)puVar6 + 0x3c);
          goto LAB_180442da7;
        }
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((uint64_t)(int64_t)iVar7 < uVar8);
  }
  uVar4 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = uVar4;
  uVar4 = param_2[3];
  param_3[2] = param_2[2];
  param_3[3] = uVar4;
  uVar4 = param_2[5];
  param_3[4] = param_2[4];
  param_3[5] = uVar4;
  uVar10 = *(int32_t *)(param_2 + 6);
  uVar11 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar12 = *(int32_t *)(param_2 + 7);
  uVar13 = *(int32_t *)((int64_t)param_2 + 0x3c);
LAB_180442da7:
  *(int32_t *)(param_3 + 6) = uVar10;
  *(int32_t *)((int64_t)param_3 + 0x34) = uVar11;
  *(int32_t *)(param_3 + 7) = uVar12;
  *(int32_t *)((int64_t)param_3 + 0x3c) = uVar13;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_42e00(uint64_t param_1)
void UISystem_42e00(uint64_t param_1)
{
  int32_t uVar1;
  int32_t *puVar2;
  int8_t stack_array_168 [48];
  void *plocal_var_138;
  int32_t *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_68;
  local_var_118 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  plocal_var_138 = &system_data_buffer_ptr;
  local_var_120 = 0;
  plocal_var_130 = (int32_t *)0x0;
  local_var_128 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_130 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  local_var_120 = CONCAT44(local_var_120._4_4_,uVar1);
  *puVar2 = 0x6a617274;
  puVar2[1] = 0x6f746365;
  puVar2[2] = 0x765f7972;
  puVar2[3] = 0x61757369;
  puVar2[4] = 0x657a696c;
  *(int16_t *)(puVar2 + 5) = 0x72;
  local_var_128 = 0x15;
  DataStructure_f17b0(param_1,&plocal_var_138);
  plocal_var_138 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar2);
}
// 函数: void UISystem_43000(int64_t param_1,int32_t param_2,int32_t param_3)
void UISystem_43000(int64_t param_1,int32_t param_2,int32_t param_3)
{
  int64_t lVar1;
  int64_t *plVar2;
  float fVar3;
  lVar1 = *(int64_t *)(param_1 + 0x260);
  if ((lVar1 != 0) && (plVar2 = *(int64_t **)(lVar1 + 0x210), plVar2 != (int64_t *)0x0)) {
    (**(code **)(*plVar2 + 0x98))(plVar2,param_3,param_2);
    if (*(float *)(lVar1 + 0x3c) < 0.0) {
      fVar3 = 0.1;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
    }
    *(float *)(lVar1 + 0x34) = fVar3;
    SystemCore_FileSystem(lVar1,param_1 + 0x70,0xbf800000);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_43080(int64_t param_1,int64_t *param_2,int8_t param_3)
void UISystem_43080(int64_t param_1,int64_t *param_2,int8_t param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  if (param_2 != (int64_t *)0x0) {
    uVar1 = *(uint64_t *)(param_1 + 0x260);
    uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
    plVar3 = (int64_t *)RenderingSystem_ShaderManager(uVar2);
    plStackX_10 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    DataStructure_75cf0(plVar3,0,&plStackX_8,1);
    DataStructure_fbf30(uVar1,param_3,plVar3,&system_data_0300);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_431c0(int64_t param_1,char param_2,uint64_t *param_3)
void UISystem_431c0(int64_t param_1,char param_2,uint64_t *param_3)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint *puVar5;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((int64_t)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    lVar2 = *(int64_t *)(param_1 + 0x260);
    if (lVar2 == 0) {
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((int64_t)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
      *(int32_t *)(param_3 + 6) = 0;
      *(int32_t *)((int64_t)param_3 + 0x34) = 0;
      *(int32_t *)(param_3 + 7) = 0;
      *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
    }
    else {
      if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
        SystemCore_FileSystem(lVar2,*(int64_t *)(lVar2 + 0x10) + 0x70,0xbf800000);
      }
      puVar5 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(lVar2 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar5;
        *puVar5 = *puVar5 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_a8 = puVar5[1];
      local_var_a4 = puVar5[2];
      local_var_a0 = puVar5[3];
      local_var_9c = puVar5[4];
      uVar3 = *(uint64_t *)(puVar5 + 5);
      uVar4 = *(uint64_t *)(puVar5 + 7);
      *puVar5 = 0;
      local_var_98 = uVar3;
      local_var_90 = uVar4;
      local_var_58 = local_var_a8;
      local_var_54 = local_var_a4;
      local_var_50 = local_var_a0;
      local_var_4c = local_var_9c;
      local_var_48 = uVar3;
      local_var_40 = uVar4;
      SystemSecurityManager(&local_var_88,&local_var_a8);
      *(int32_t *)param_3 = local_var_88;
      *(int32_t *)((int64_t)param_3 + 4) = local_var_84;
      *(int32_t *)(param_3 + 1) = local_var_80;
      *(int32_t *)((int64_t)param_3 + 0xc) = local_var_7c;
      *(int32_t *)(param_3 + 2) = local_var_78;
      *(int32_t *)((int64_t)param_3 + 0x14) = local_var_74;
      *(int32_t *)(param_3 + 3) = local_var_70;
      *(int32_t *)((int64_t)param_3 + 0x1c) = local_var_6c;
      *(int32_t *)(param_3 + 4) = local_var_68;
      *(int32_t *)((int64_t)param_3 + 0x24) = local_var_64;
      *(int32_t *)(param_3 + 5) = local_var_60;
      *(int32_t *)((int64_t)param_3 + 0x2c) = local_var_5c;
      param_3[6] = uVar3;
      param_3[7] = uVar4;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_c8);
}
// 函数: void UISystem_431ed(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_431ed(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint uVar1;
  byte bVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint *puVar6;
  int32_t *unaff_RBX;
  char unaff_SIL;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint stack_special_x_20;
  uint stack_special_x_24;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  uint local_buffer_70;
  uint local_buffer_74;
  uint local_buffer_78;
  uint local_buffer_7c;
  uint64_t local_var_80;
  uint64_t local_var_88;
  uint64_t local_var_90;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  lVar3 = *(int64_t *)(param_1 + 0x260);
  if (lVar3 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((int64_t)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    bVar2 = *(byte *)(lVar3 + 0xa8);
    *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
    if ((bVar2 & 1) == 0) {
      SystemCore_FileSystem(lVar3,*(int64_t *)(lVar3 + 0x10) + 0x70,0xbf800000);
    }
    puVar6 = (uint *)((int64_t)unaff_SIL * 0x100 + *(int64_t *)(lVar3 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar6;
      *puVar6 = *puVar6 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    stack_special_x_20 = puVar6[1];
    stack_special_x_24 = puVar6[2];
    local_buffer_78 = puVar6[3];
    local_buffer_7c = puVar6[4];
    uVar4 = *(uint64_t *)(puVar6 + 5);
    uVar5 = *(uint64_t *)(puVar6 + 7);
    *puVar6 = 0;
    local_buffer_70 = stack_special_x_20;
    local_buffer_74 = stack_special_x_24;
    local_var_80 = uVar4;
    local_var_88 = uVar5;
    SystemSecurityManager(&local_buffer_00000040,&stack_special_x_20);
    *unaff_RBX = local_buffer_40;
    unaff_RBX[1] = local_buffer_44;
    unaff_RBX[2] = local_buffer_48;
    unaff_RBX[3] = local_buffer_4c;
    unaff_RBX[4] = local_buffer_50;
    unaff_RBX[5] = local_buffer_54;
    unaff_RBX[6] = local_buffer_58;
    unaff_RBX[7] = local_buffer_5c;
    unaff_RBX[8] = local_buffer_60;
    unaff_RBX[9] = local_buffer_64;
    unaff_RBX[10] = local_buffer_68;
    unaff_RBX[0xb] = local_buffer_6c;
    *(uint64_t *)(unaff_RBX + 0xc) = uVar4;
    *(uint64_t *)(unaff_RBX + 0xe) = uVar5;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_43208(int32_t param_1)
void UISystem_43208(int32_t param_1)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int32_t *unaff_RBX;
  char unaff_SIL;
  int64_t unaff_RDI;
  int64_t in_R11;
  bool in_ZF;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint stack_special_x_20;
  uint stack_special_x_24;
  uint local_buffer_2c;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  uint local_var_70;
  uint local_buffer_74;
  uint local_var_78;
  uint local_buffer_7c;
  uint64_t local_var_80;
  uint64_t local_var_88;
  uint64_t local_var_90;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  if (in_ZF) {
    SystemCore_FileSystem(param_1,*(int64_t *)(unaff_RDI + 0x10) + 0x70,0xbf800000);
  }
  puVar4 = (uint *)((int64_t)unaff_SIL * 0x100 + *(int64_t *)(unaff_RDI + 0x18));
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  stack_special_x_20 = puVar4[1];
  stack_special_x_24 = puVar4[2];
  local_var_78 = puVar4[3];
  local_buffer_2c = puVar4[4];
  uVar2 = *(uint64_t *)(puVar4 + 5);
  uVar3 = *(uint64_t *)(puVar4 + 7);
  *puVar4 = 0;
  local_var_70 = stack_special_x_20;
  local_buffer_74 = stack_special_x_24;
  local_buffer_7c = local_buffer_2c;
  local_var_80 = uVar2;
  local_var_88 = uVar3;
  SystemSecurityManager(&local_buffer_00000040,&stack_special_x_20);
  *unaff_RBX = local_buffer_40;
  unaff_RBX[1] = local_buffer_44;
  unaff_RBX[2] = local_buffer_48;
  unaff_RBX[3] = local_buffer_4c;
  unaff_RBX[4] = local_buffer_50;
  unaff_RBX[5] = local_buffer_54;
  unaff_RBX[6] = local_buffer_58;
  unaff_RBX[7] = local_buffer_5c;
  unaff_RBX[8] = local_buffer_60;
  unaff_RBX[9] = local_buffer_64;
  unaff_RBX[10] = local_buffer_68;
  unaff_RBX[0xb] = local_buffer_6c;
  *(uint64_t *)(unaff_RBX + 0xc) = uVar2;
  *(uint64_t *)(unaff_RBX + 0xe) = uVar3;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_43294(void)
void UISystem_43294(void)
{
  uint64_t local_var_90;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_4329c(void)
void UISystem_4329c(void)
{
  uint64_t local_var_90;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_432b6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_432b6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t local_var_90;
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((int64_t)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((int64_t)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_432e7(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_432e7(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t local_var_90;
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((int64_t)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((int64_t)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_43320(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void UISystem_43320(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint uVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  void *puVar7;
  uint *puVar8;
  void *puVar9;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  void *plocal_var_d0;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint local_var_58;
  uint local_var_54;
  uint local_var_50;
  uint local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  CoreMemoryPoolValidator(&plocal_var_d8);
  if ((param_1 == 0) || (lVar2 = *(int64_t *)(param_1 + 0x260), lVar2 == 0)) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((int64_t)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((int64_t)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    cVar6 = UISystem_0b330(*(uint64_t *)(lVar2 + 0x208),&plocal_var_d8,1);
    if (cVar6 == -1) {
      puVar9 = &system_buffer_ptr;
      if (plocal_var_d0 != (void *)0x0) {
        puVar9 = plocal_var_d0;
      }
      puVar3 = *(void **)(*(int64_t *)(lVar2 + 0x10) + 0x290);
      puVar7 = &system_buffer_ptr;
      if (puVar3 != (void *)0x0) {
        puVar7 = puVar3;
      }
      SystemCore_ResourceManager0(&processed_var_9728_ptr,puVar7,puVar9);
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((int64_t)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((int64_t)param_3 + 0x2c) = 0;
      param_3[6] = 0;
      param_3[7] = 0x3f80000000000000;
    }
    if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
      SystemCore_FileSystem(lVar2,*(int64_t *)(lVar2 + 0x10) + 0x70,0xbf800000);
    }
    puVar8 = (uint *)((int64_t)cVar6 * 0x100 + *(int64_t *)(lVar2 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar8;
      *puVar8 = *puVar8 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_a8 = puVar8[1];
    local_var_a4 = puVar8[2];
    local_var_a0 = puVar8[3];
    local_var_9c = puVar8[4];
    uVar4 = *(uint64_t *)(puVar8 + 5);
    uVar5 = *(uint64_t *)(puVar8 + 7);
    *puVar8 = 0;
    local_var_98 = uVar4;
    local_var_90 = uVar5;
    local_var_58 = local_var_a8;
    local_var_54 = local_var_a4;
    local_var_50 = local_var_a0;
    local_var_4c = local_var_9c;
    local_var_48 = uVar4;
    local_var_40 = uVar5;
    SystemSecurityManager(&local_var_88,&local_var_a8);
    *(int32_t *)param_3 = local_var_88;
    *(int32_t *)((int64_t)param_3 + 4) = local_var_84;
    *(int32_t *)(param_3 + 1) = local_var_80;
    *(int32_t *)((int64_t)param_3 + 0xc) = local_var_7c;
    *(int32_t *)(param_3 + 2) = local_var_78;
    *(int32_t *)((int64_t)param_3 + 0x14) = local_var_74;
    *(int32_t *)(param_3 + 3) = local_var_70;
    *(int32_t *)((int64_t)param_3 + 0x1c) = local_var_6c;
    param_3[4] = local_var_68;
    param_3[5] = local_var_60;
    param_3[6] = uVar4;
    param_3[7] = uVar5;
  }
  plocal_var_d8 = &system_data_buffer_ptr;
  if (plocal_var_d0 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_d0 = (void *)0x0;
  local_var_c0 = 0;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
uint64_t UISystem_43510(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  uint64_t in_RAX;
  byte *pbVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  if (param_1 != 0) {
    iVar7 = 0;
    uVar5 = *(int64_t *)(param_1 + 0x208) - *(int64_t *)(param_1 + 0x200) >> 3;
    if (uVar5 != 0) {
      lVar8 = 0;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar8 + *(int64_t *)(param_1 + 0x200)) + 0x10);
        pbVar3 = (byte *)0xffffffffffffffff;
        do {
          pbVar3 = pbVar3 + 1;
        } while (pbVar3[param_2] != 0);
        iVar2 = *(int *)(lVar6 + 0x18);
        iVar4 = (int)pbVar3;
        if (iVar2 == iVar4) {
          if (iVar2 != 0) {
            pbVar3 = *(byte **)(lVar6 + 0x10);
            lVar6 = param_2 - (int64_t)pbVar3;
            do {
              pbVar1 = pbVar3 + lVar6;
              iVar4 = (uint)*pbVar3 - (uint)*pbVar1;
              if (iVar4 != 0) break;
              pbVar3 = pbVar3 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18044359d:
          if (iVar4 == 0) {
            return CONCAT71((int7)((uint64_t)pbVar3 >> 8),1);
          }
        }
        else if (iVar2 == 0) goto LAB_18044359d;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 8;
        in_RAX = (uint64_t)iVar7;
      } while (in_RAX < uVar5);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}
// 函数: void UISystem_43630(int64_t param_1)
void UISystem_43630(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t stack_array_30 [40];
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = CoreMemoryPoolValidator(stack_array_30);
    RenderingSystem_543b0(param_1,uVar1,1,0,uVar2);
  }
  return;
}
// 函数: void UISystem_43680(int64_t param_1,int64_t *param_2,int32_t param_3,uint64_t param_4)
void UISystem_43680(int64_t param_1,int64_t *param_2,int32_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar1;
  if ((param_1 != 0) && (uVar1 = 0xfffffffffffffffe, param_2 != (int64_t *)0x0)) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    DataStructure_f0080(param_1,&plStackX_8,param_3,param_4,uVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool UISystem_43700(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = DataStructure_0bef0(render_system_data_config,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return lVar2 != 0;
}
// 函数: void UISystem_43770(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_43770(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plStackX_8;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plStackX_8 = param_1;
    (**(code **)(*param_1 + 0x28))();
    GenericFunction_1800b87c0(lVar2 + 0x60d10,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(uint *)((int64_t)param_1 + 0x2ac) = *(uint *)((int64_t)param_1 + 0x2ac) | 0x10000000;
    iVar1 = (int)param_1[0x57];
    if (((iVar1 != -1) && ((uint64_t)(int64_t)iVar1 < *(uint64_t *)(lVar2 + 0x60838))) &&
       ((*(uint64_t *)(*(int64_t *)(lVar2 + 0x60830) + (int64_t)iVar1 * 0x10) &
        0xffffffff00000000) != 0)) {
      RenderingSystem_98450(lVar2 + 0x607e0,param_1,0xffffffff00000000,param_4,uVar3);
    }
  }
  return;
}