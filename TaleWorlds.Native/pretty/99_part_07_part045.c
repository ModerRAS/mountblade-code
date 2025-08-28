#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_07_part045.c - 13 个函数
// 函数: void UISystem_c60b0(uint64_t param_1,uint64_t param_2)
void UISystem_c60b0(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &ui_system_data_1216_ptr;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  puVar3 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreMemoryPoolCleaner(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x74747542;
  *(int16_t *)(puVar3 + 1) = 0x6e6f;
  *(int8_t *)((int64_t)puVar3 + 6) = 0;
  local_var_30 = 6;
  SystemNetwork_Processor(puVar2,&plocal_var_40,puVar2 + 0xe,0xb);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_c61e0(int64_t param_1)
void UISystem_c61e0(int64_t param_1)
{
  char cVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int8_t astack_special_x_18 [16];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  if (0 < system_system_config) {
    UISystem_c31d0(system_system_config + 0xe10,&local_var_78,astack_special_x_18);
    lVar3 = *(int64_t *)(param_1 + 0x18);
    local_var_68 = *(int32_t *)(lVar3 + 0x60);
    local_var_64 = *(int32_t *)(lVar3 + 100);
    local_var_60 = *(int32_t *)(lVar3 + 0x68);
    local_var_5c = *(int32_t *)(lVar3 + 0x6c);
    SystemSecurityManager(&local_var_38,&local_var_78);
    puVar2 = (int32_t *)(lVar3 + 0x30);
    uVar4 = *(int32_t *)(lVar3 + 0x60);
    uVar5 = *(int32_t *)(lVar3 + 100);
    uVar6 = *(int32_t *)(lVar3 + 0x68);
    uVar7 = *(int32_t *)(lVar3 + 0x6c);
    local_var_78 = local_var_38;
    local_var_74 = local_var_34;
    local_var_70 = local_var_30;
    local_var_6c = local_var_2c;
    local_var_68 = local_var_28;
    local_var_64 = local_var_24;
    local_var_60 = local_var_20;
    local_var_5c = local_var_1c;
    local_var_58 = local_var_18;
    local_var_54 = local_var_14;
    local_var_50 = local_var_10;
    local_var_4c = local_var_c;
    local_var_48 = uVar4;
    local_var_44 = uVar5;
    local_var_40 = uVar6;
    local_var_3c = uVar7;
    cVar1 = Function_1a27cd06(puVar2,&local_var_78);
    if (cVar1 != '\0') {
      *puVar2 = local_var_38;
      puVar2[1] = local_var_34;
      puVar2[2] = local_var_30;
      puVar2[3] = local_var_2c;
      puVar2[4] = local_var_28;
      puVar2[5] = local_var_24;
      puVar2[6] = local_var_20;
      puVar2[7] = local_var_1c;
      puVar2[8] = local_var_18;
      puVar2[9] = local_var_14;
      puVar2[10] = local_var_10;
      puVar2[0xb] = local_var_c;
      puVar2[0xc] = uVar4;
      puVar2[0xd] = uVar5;
      puVar2[0xe] = uVar6;
      puVar2[0xf] = uVar7;
      RenderingSystem_CameraController(lVar3);
      UtilitiesSystem_StringProcessor();
    }
  }
  return;
}
// 函数: void UISystem_c62a0(float *param_1,float *param_2)
void UISystem_c62a0(float *param_1,float *param_2)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  if ((param_1 != param_2) && (pfVar12 = param_1 + 10, pfVar12 != param_2)) {
    pfVar13 = param_1 + 0x10;
    do {
      fVar2 = *pfVar12;
      pfVar10 = pfVar13 + -4;
      fVar3 = pfVar13[-5];
      uVar4 = *(uint64_t *)pfVar10;
      uVar5 = *(uint64_t *)(pfVar13 + -2);
      uVar6 = *(uint64_t *)pfVar13;
      uVar7 = *(uint64_t *)(pfVar13 + 2);
      pfVar9 = pfVar10;
      pfVar11 = pfVar12;
      pfVar1 = pfVar12;
      while (pfVar1 != param_1) {
        pfVar1 = pfVar9 + -0xc;
        if (fVar2 <= pfVar9[-0xc]) break;
        *pfVar11 = pfVar9[-0xc];
        pfVar11 = pfVar11 + -10;
        uVar8 = *(uint64_t *)(pfVar9 + -4);
        *(uint64_t *)(pfVar10 + 4) = *(uint64_t *)(pfVar9 + -6);
        *(uint64_t *)(pfVar10 + 6) = uVar8;
        uVar8 = *(uint64_t *)(pfVar9 + -8);
        *(uint64_t *)pfVar10 = *(uint64_t *)(pfVar9 + -10);
        *(uint64_t *)(pfVar10 + 2) = uVar8;
        pfVar10[-1] = pfVar9[-0xb];
        pfVar10 = pfVar10 + -10;
        pfVar9 = pfVar9 + -10;
      }
      *pfVar11 = fVar2;
      pfVar12 = pfVar12 + 10;
      *(uint64_t *)(pfVar11 + 6) = uVar6;
      *(uint64_t *)(pfVar11 + 8) = uVar7;
      pfVar13 = pfVar13 + 10;
      *(uint64_t *)(pfVar11 + 2) = uVar4;
      *(uint64_t *)(pfVar11 + 4) = uVar5;
      pfVar11[1] = fVar3;
    } while (pfVar12 != param_2);
  }
  return;
}
// 函数: void UISystem_c6370(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void UISystem_c6370(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  lVar15 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x487 < lVar15 && (0 < param_3))) {
    fVar18 = *param_1;
    fVar2 = param_2[-10];
    lVar15 = ((int64_t)param_2 - (int64_t)param_1) / 0x50;
    fVar3 = param_1[lVar15 * 10];
    fVar5 = fVar3;
    pfVar17 = param_1 + lVar15 * 10;
    pfVar16 = param_1;
    fVar4 = fVar18;
    if (fVar3 < fVar18) {
      fVar5 = fVar18;
      pfVar17 = param_1;
      pfVar16 = param_1 + lVar15 * 10;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar16 = pfVar17, fVar2 < fVar5)) {
      pfVar16 = param_2 + -10;
    }
    fVar2 = *pfVar16;
    fVar3 = pfVar16[2];
    pfVar17 = param_2;
    pfVar16 = param_1;
    while( true ) {
      while (fVar2 < fVar18) {
        pfVar1 = pfVar16 + 10;
        pfVar16 = pfVar16 + 10;
        fVar18 = *pfVar1;
      }
      pfVar17 = pfVar17 + -10;
      if (*pfVar17 <= fVar2 && fVar2 != *pfVar17) {
        do {
          pfVar17 = pfVar17 + -10;
        } while (*pfVar17 <= fVar2 && fVar2 != *pfVar17);
      }
      if (pfVar17 <= pfVar16) break;
      fVar18 = *pfVar16;
      fVar4 = pfVar16[1];
      uVar12 = *(uint64_t *)(pfVar16 + 2);
      uVar13 = *(uint64_t *)(pfVar16 + 4);
      fVar5 = pfVar16[6];
      fVar6 = pfVar16[7];
      fVar7 = pfVar16[8];
      fVar8 = pfVar16[9];
      *pfVar16 = *pfVar17;
      uVar14 = *(uint64_t *)(pfVar17 + 8);
      *(uint64_t *)(pfVar16 + 6) = *(uint64_t *)(pfVar17 + 6);
      *(uint64_t *)(pfVar16 + 8) = uVar14;
      fVar9 = pfVar17[3];
      fVar10 = pfVar17[4];
      fVar11 = pfVar17[5];
      pfVar16[2] = pfVar17[2];
      pfVar16[3] = fVar9;
      pfVar16[4] = fVar10;
      pfVar16[5] = fVar11;
      pfVar16[1] = pfVar17[1];
      pfVar16 = pfVar16 + 10;
      *pfVar17 = fVar18;
      pfVar17[6] = fVar5;
      pfVar17[7] = fVar6;
      pfVar17[8] = fVar7;
      pfVar17[9] = fVar8;
      *(uint64_t *)(pfVar17 + 2) = uVar12;
      *(uint64_t *)(pfVar17 + 4) = uVar13;
      pfVar17[1] = fVar4;
      fVar18 = *pfVar16;
    }
    param_3 = param_3 + -1;
    UISystem_c6370(pfVar16,param_2,param_3,param_4,fVar2,fVar3);
    lVar15 = (int64_t)pfVar16 - (int64_t)param_1;
    param_2 = pfVar16;
  }
  if (param_3 == 0) {
    UISystem_c64f0(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void UISystem_c637d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void UISystem_c637d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t in_RAX;
  int64_t lVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  lVar14 = in_RAX - (int64_t)param_1;
  while ((0x487 < lVar14 && (0 < param_3))) {
    fVar17 = *param_1;
    fVar2 = param_2[-10];
    lVar14 = ((int64_t)param_2 - (int64_t)param_1) / 0x50;
    fVar3 = param_1[lVar14 * 10];
    fVar5 = fVar3;
    pfVar16 = param_1 + lVar14 * 10;
    pfVar15 = param_1;
    fVar4 = fVar17;
    if (fVar3 < fVar17) {
      fVar5 = fVar17;
      pfVar16 = param_1;
      pfVar15 = param_1 + lVar14 * 10;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar15 = pfVar16, fVar2 < fVar5)) {
      pfVar15 = param_2 + -10;
    }
    fVar2 = *pfVar15;
    pfVar16 = param_2;
    pfVar15 = param_1;
    while( true ) {
      while (fVar2 < fVar17) {
        pfVar1 = pfVar15 + 10;
        pfVar15 = pfVar15 + 10;
        fVar17 = *pfVar1;
      }
      pfVar16 = pfVar16 + -10;
      if (*pfVar16 <= fVar2 && fVar2 != *pfVar16) {
        do {
          pfVar16 = pfVar16 + -10;
        } while (*pfVar16 <= fVar2 && fVar2 != *pfVar16);
      }
      if (pfVar16 <= pfVar15) break;
      fVar17 = *pfVar15;
      fVar3 = pfVar15[1];
      uVar11 = *(uint64_t *)(pfVar15 + 2);
      uVar12 = *(uint64_t *)(pfVar15 + 4);
      fVar4 = pfVar15[6];
      fVar5 = pfVar15[7];
      fVar6 = pfVar15[8];
      fVar7 = pfVar15[9];
      *pfVar15 = *pfVar16;
      uVar13 = *(uint64_t *)(pfVar16 + 8);
      *(uint64_t *)(pfVar15 + 6) = *(uint64_t *)(pfVar16 + 6);
      *(uint64_t *)(pfVar15 + 8) = uVar13;
      fVar8 = pfVar16[3];
      fVar9 = pfVar16[4];
      fVar10 = pfVar16[5];
      pfVar15[2] = pfVar16[2];
      pfVar15[3] = fVar8;
      pfVar15[4] = fVar9;
      pfVar15[5] = fVar10;
      pfVar15[1] = pfVar16[1];
      pfVar15 = pfVar15 + 10;
      *pfVar16 = fVar17;
      pfVar16[6] = fVar4;
      pfVar16[7] = fVar5;
      pfVar16[8] = fVar6;
      pfVar16[9] = fVar7;
      *(uint64_t *)(pfVar16 + 2) = uVar11;
      *(uint64_t *)(pfVar16 + 4) = uVar12;
      pfVar16[1] = fVar3;
      fVar17 = *pfVar15;
    }
    param_3 = param_3 + -1;
    UISystem_c6370(pfVar15,param_2,param_3,param_4);
    lVar14 = (int64_t)pfVar15 - (int64_t)param_1;
    param_2 = pfVar15;
  }
  if (param_3 == 0) {
    UISystem_c64f0(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void UISystem_c639e(int32_t param_1)
void UISystem_c639e(int32_t param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  float *pfVar15;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float *pfVar16;
  float *in_R10;
  float fVar17;
  do {
    pfVar16 = in_R10;
    if (unaff_RBP < 1) break;
    fVar17 = *unaff_RSI;
    fVar2 = in_R10[-10];
    lVar4 = ((int64_t)in_R10 - (int64_t)unaff_RSI) / 0x50;
    fVar3 = unaff_RSI[lVar4 * 10];
    fVar6 = fVar3;
    pfVar16 = unaff_RSI + lVar4 * 10;
    pfVar15 = unaff_RSI;
    fVar5 = fVar17;
    if (fVar3 < fVar17) {
      fVar6 = fVar17;
      pfVar16 = unaff_RSI;
      pfVar15 = unaff_RSI + lVar4 * 10;
      fVar5 = fVar3;
    }
    if ((fVar5 <= fVar2) && (pfVar15 = pfVar16, fVar2 < fVar6)) {
      pfVar15 = in_R10 + -10;
    }
    fVar2 = *pfVar15;
    pfVar15 = in_R10;
    pfVar16 = unaff_RSI;
    while( true ) {
      while (fVar2 < fVar17) {
        pfVar1 = pfVar16 + 10;
        pfVar16 = pfVar16 + 10;
        fVar17 = *pfVar1;
      }
      pfVar15 = pfVar15 + -10;
      if (*pfVar15 <= fVar2 && fVar2 != *pfVar15) {
        do {
          pfVar15 = pfVar15 + -10;
        } while (*pfVar15 <= fVar2 && fVar2 != *pfVar15);
      }
      if (pfVar15 <= pfVar16) break;
      fVar17 = *pfVar16;
      fVar3 = pfVar16[1];
      uVar12 = *(uint64_t *)(pfVar16 + 2);
      uVar13 = *(uint64_t *)(pfVar16 + 4);
      fVar5 = pfVar16[6];
      fVar6 = pfVar16[7];
      fVar7 = pfVar16[8];
      fVar8 = pfVar16[9];
      *pfVar16 = *pfVar15;
      uVar14 = *(uint64_t *)(pfVar15 + 8);
      *(uint64_t *)(pfVar16 + 6) = *(uint64_t *)(pfVar15 + 6);
      *(uint64_t *)(pfVar16 + 8) = uVar14;
      fVar9 = pfVar15[3];
      fVar10 = pfVar15[4];
      fVar11 = pfVar15[5];
      pfVar16[2] = pfVar15[2];
      pfVar16[3] = fVar9;
      pfVar16[4] = fVar10;
      pfVar16[5] = fVar11;
      pfVar16[1] = pfVar15[1];
      pfVar16 = pfVar16 + 10;
      *pfVar15 = fVar17;
      pfVar15[6] = fVar5;
      pfVar15[7] = fVar6;
      pfVar15[8] = fVar7;
      pfVar15[9] = fVar8;
      *(uint64_t *)(pfVar15 + 2) = uVar12;
      *(uint64_t *)(pfVar15 + 4) = uVar13;
      pfVar15[1] = fVar3;
      fVar17 = *pfVar16;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = UISystem_c6370(pfVar16,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar16;
  } while (0x487 < (int64_t)pfVar16 - (int64_t)unaff_RSI);
  if (unaff_RBP == 0) {
    UISystem_c64f0(param_1,pfVar16,pfVar16,unaff_BL);
  }
  return;
}
// 函数: void UISystem_c64c6(void)
void UISystem_c64c6(void)
{
  int64_t unaff_RBP;
  if (unaff_RBP == 0) {
    UISystem_c64f0();
  }
  return;
}
// 函数: void UISystem_c64d0(void)
void UISystem_c64d0(void)
{
  UISystem_c64f0();
  return;
}
// 函数: void UISystem_c64f0(float *param_1,float *param_2,float *param_3,int8_t param_4)
void UISystem_c64f0(float *param_1,float *param_2,float *param_3,int8_t param_4)
{
  float *pfVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  float *pfVar7;
  int64_t lVar8;
  float fStack_58;
  float fStack_54;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  lVar2 = ((int64_t)param_2 - (int64_t)param_1) / 0x28;
  if (1 < lVar2) {
    lVar8 = (lVar2 + -2 >> 1) + 1;
    pfVar7 = param_1 + (lVar8 * 5 + 3) * 2;
    do {
      fStack_58 = pfVar7[-0x10];
      fStack_54 = pfVar7[-0xf];
      lVar8 = lVar8 + -1;
      local_var_50 = *(uint64_t *)(pfVar7 + -0xe);
      local_var_48 = *(uint64_t *)(pfVar7 + -0xc);
      local_var_40 = *(uint64_t *)(pfVar7 + -10);
      local_var_38 = *(uint64_t *)(pfVar7 + -8);
      UISystem_c6710(param_1,lVar8,lVar2,lVar8,&fStack_58,param_4);
      pfVar7 = pfVar7 + -10;
    } while (lVar8 != 0);
  }
  if (param_2 < param_3) {
    pfVar7 = param_2 + 2;
    do {
      fStack_58 = pfVar7[-2];
      if (*param_1 < fStack_58) {
        local_var_50 = *(uint64_t *)pfVar7;
        local_var_48 = *(uint64_t *)(pfVar7 + 2);
        fStack_54 = pfVar7[-1];
        local_var_40 = *(uint64_t *)(pfVar7 + 4);
        local_var_38 = *(uint64_t *)(pfVar7 + 6);
        pfVar7[-2] = *param_1;
        uVar6 = *(uint64_t *)(param_1 + 8);
        *(uint64_t *)(pfVar7 + 4) = *(uint64_t *)(param_1 + 6);
        *(uint64_t *)(pfVar7 + 6) = uVar6;
        fVar3 = param_1[3];
        fVar4 = param_1[4];
        fVar5 = param_1[5];
        *pfVar7 = param_1[2];
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar4;
        pfVar7[3] = fVar5;
        pfVar7[-1] = param_1[1];
        UISystem_c6710(param_1,0,lVar2,0,&fStack_58,param_4);
      }
      pfVar1 = pfVar7 + 8;
      pfVar7 = pfVar7 + 10;
    } while (pfVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -8;
    do {
      fStack_58 = param_2[-2];
      fStack_54 = param_2[-1];
      local_var_50 = *(uint64_t *)param_2;
      local_var_48 = *(uint64_t *)(param_2 + 2);
      local_var_40 = *(uint64_t *)(param_2 + 4);
      local_var_38 = *(uint64_t *)(param_2 + 6);
      param_2[-2] = *param_1;
      uVar6 = *(uint64_t *)(param_1 + 8);
      *(uint64_t *)(param_2 + 4) = *(uint64_t *)(param_1 + 6);
      *(uint64_t *)(param_2 + 6) = uVar6;
      fVar3 = param_1[3];
      fVar4 = param_1[4];
      fVar5 = param_1[5];
      *param_2 = param_1[2];
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      param_2[3] = fVar5;
      param_2[-1] = param_1[1];
      UISystem_c6710(param_1,0,((0x20 - (int64_t)param_1) + (int64_t)param_2) / 0x28 + -1,0,
                    &fStack_58,param_4);
      param_2 = param_2 + -10;
    } while (0x4f < (0x20 - (int64_t)param_1) + (int64_t)param_2);
  }
  return;
}
// 函数: void UISystem_c6507(float *param_1,float *param_2,float *param_3)
void UISystem_c6507(float *param_1,float *param_2,float *param_3)
{
  float *pfVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t unaff_RBP;
  float *pfVar7;
  int64_t lVar8;
  int64_t in_R11;
  uint64_t unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R15;
  lVar2 = ((int64_t)param_2 - (int64_t)param_1) / 0x28;
  if (1 < lVar2) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBP;
    lVar8 = (lVar2 + -2 >> 1) + 1;
    pfVar7 = param_1 + (lVar8 * 5 + 3) * 2;
    do {
      fStack0000000000000030 = pfVar7[-0x10];
      fStack0000000000000034 = pfVar7[-0xf];
      lVar8 = lVar8 + -1;
      local_buffer_38 = *(uint64_t *)(pfVar7 + -0xe);
      local_buffer_40 = *(uint64_t *)(pfVar7 + -0xc);
      local_buffer_48 = *(uint64_t *)(pfVar7 + -10);
      local_buffer_50 = *(uint64_t *)(pfVar7 + -8);
      UISystem_c6710(param_1,lVar8,lVar2,lVar8,&local_buffer_00000030);
      pfVar7 = pfVar7 + -10;
    } while (lVar8 != 0);
  }
  if (param_2 < param_3) {
    pfVar7 = param_2 + 2;
    do {
      fStack0000000000000030 = pfVar7[-2];
      if (*param_1 < fStack0000000000000030) {
        local_buffer_38 = *(uint64_t *)pfVar7;
        local_buffer_40 = *(uint64_t *)(pfVar7 + 2);
        fStack0000000000000034 = pfVar7[-1];
        local_buffer_48 = *(uint64_t *)(pfVar7 + 4);
        local_buffer_50 = *(uint64_t *)(pfVar7 + 6);
        pfVar7[-2] = *param_1;
        uVar6 = *(uint64_t *)(param_1 + 8);
        *(uint64_t *)(pfVar7 + 4) = *(uint64_t *)(param_1 + 6);
        *(uint64_t *)(pfVar7 + 6) = uVar6;
        fVar3 = param_1[3];
        fVar4 = param_1[4];
        fVar5 = param_1[5];
        *pfVar7 = param_1[2];
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar4;
        pfVar7[3] = fVar5;
        pfVar7[-1] = param_1[1];
        UISystem_c6710(param_1,0,lVar2,0,&local_buffer_00000030);
      }
      pfVar1 = pfVar7 + 8;
      pfVar7 = pfVar7 + 10;
    } while (pfVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -8;
    do {
      fStack0000000000000030 = param_2[-2];
      fStack0000000000000034 = param_2[-1];
      local_buffer_38 = *(uint64_t *)param_2;
      local_buffer_40 = *(uint64_t *)(param_2 + 2);
      local_buffer_48 = *(uint64_t *)(param_2 + 4);
      local_buffer_50 = *(uint64_t *)(param_2 + 6);
      param_2[-2] = *param_1;
      uVar6 = *(uint64_t *)(param_1 + 8);
      *(uint64_t *)(param_2 + 4) = *(uint64_t *)(param_1 + 6);
      *(uint64_t *)(param_2 + 6) = uVar6;
      fVar3 = param_1[3];
      fVar4 = param_1[4];
      fVar5 = param_1[5];
      *param_2 = param_1[2];
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      param_2[3] = fVar5;
      param_2[-1] = param_1[1];
      UISystem_c6710(param_1,0,((0x20 - (int64_t)param_1) + (int64_t)param_2) / 0x28 + -1,0,
                    &local_buffer_00000030);
      param_2 = param_2 + -10;
    } while (0x4f < (0x20 - (int64_t)param_1) + (int64_t)param_2);
  }
  return;
}
// 函数: void UISystem_c6541(int64_t param_1)
void UISystem_c6541(int64_t param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t unaff_RBP;
  uint64_t *puVar8;
  float *unaff_RSI;
  int64_t lVar9;
  float *pfVar10;
  int64_t in_R11;
  int64_t unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  float *unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  lVar9 = (unaff_R14 + -2 >> 1) + 1;
  puVar8 = (uint64_t *)(param_1 + (lVar9 * 5 + 3) * 8);
  do {
    fStack0000000000000030 = *(float *)(puVar8 + -8);
    fStack0000000000000034 = *(float *)((int64_t)puVar8 + -0x3c);
    lVar9 = lVar9 + -1;
    local_buffer_38 = puVar8[-7];
    local_buffer_40 = puVar8[-6];
    local_buffer_48 = puVar8[-5];
    local_buffer_50 = puVar8[-4];
    UISystem_c6710(*(int32_t *)(puVar8 + -7),lVar9);
    puVar8 = puVar8 + -5;
  } while (lVar9 != 0);
  if (unaff_R13 < unaff_R15) {
    pfVar10 = unaff_R13 + 2;
    do {
      fStack0000000000000030 = pfVar10[-2];
      fVar2 = *unaff_RSI;
      if (fVar2 < fStack0000000000000030) {
        local_buffer_38 = *(uint64_t *)pfVar10;
        local_buffer_40 = *(uint64_t *)(pfVar10 + 2);
        fStack0000000000000034 = pfVar10[-1];
        local_buffer_48 = *(uint64_t *)(pfVar10 + 4);
        local_buffer_50 = *(uint64_t *)(pfVar10 + 6);
        pfVar10[-2] = fVar2;
        uVar7 = *(uint64_t *)(unaff_RSI + 8);
        *(uint64_t *)(pfVar10 + 4) = *(uint64_t *)(unaff_RSI + 6);
        *(uint64_t *)(pfVar10 + 6) = uVar7;
        fVar3 = unaff_RSI[2];
        fVar4 = unaff_RSI[3];
        fVar5 = unaff_RSI[4];
        fVar6 = unaff_RSI[5];
        *pfVar10 = fVar3;
        pfVar10[1] = fVar4;
        pfVar10[2] = fVar5;
        pfVar10[3] = fVar6;
        pfVar10[-1] = unaff_RSI[1];
        UISystem_c6710(fVar3,0,fVar2,0,&local_buffer_00000030);
      }
      pfVar1 = pfVar10 + 8;
      pfVar10 = pfVar10 + 10;
    } while (pfVar1 < unaff_R15);
  }
  if (1 < unaff_R14) {
    pfVar10 = unaff_R13 + -8;
    do {
      fStack0000000000000030 = pfVar10[-2];
      fStack0000000000000034 = pfVar10[-1];
      local_buffer_38 = *(uint64_t *)pfVar10;
      local_buffer_40 = *(uint64_t *)(pfVar10 + 2);
      local_buffer_48 = *(uint64_t *)(pfVar10 + 4);
      local_buffer_50 = *(uint64_t *)(pfVar10 + 6);
      pfVar10[-2] = *unaff_RSI;
      uVar7 = *(uint64_t *)(unaff_RSI + 8);
      *(uint64_t *)(pfVar10 + 4) = *(uint64_t *)(unaff_RSI + 6);
      *(uint64_t *)(pfVar10 + 6) = uVar7;
      fVar2 = unaff_RSI[2];
      fVar3 = unaff_RSI[3];
      fVar4 = unaff_RSI[4];
      fVar5 = unaff_RSI[5];
      *pfVar10 = fVar2;
      pfVar10[1] = fVar3;
      pfVar10[2] = fVar4;
      pfVar10[3] = fVar5;
      pfVar10[-1] = unaff_RSI[1];
      lVar9 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (int64_t)unaff_RSI) + (int64_t)pfVar10),
                     8);
      UISystem_c6710(fVar2,0,(-1 - (lVar9 >> 0x3f)) + (lVar9 >> 4),0,&local_buffer_00000030);
      pfVar10 = pfVar10 + -10;
    } while (0x4f < (0x20 - (int64_t)unaff_RSI) + (int64_t)pfVar10);
  }
  return;
}
// 函数: void UISystem_c65bb(void)
void UISystem_c65bb(void)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float *unaff_RSI;
  float *pfVar9;
  int64_t unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  float *unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  if (unaff_R13 < unaff_R15) {
    pfVar9 = unaff_R13 + 2;
    do {
      fStack0000000000000030 = pfVar9[-2];
      fVar2 = *unaff_RSI;
      if (fVar2 < fStack0000000000000030) {
        local_buffer_38 = *(uint64_t *)pfVar9;
        local_buffer_40 = *(uint64_t *)(pfVar9 + 2);
        fStack0000000000000034 = pfVar9[-1];
        local_buffer_48 = *(uint64_t *)(pfVar9 + 4);
        local_buffer_50 = *(uint64_t *)(pfVar9 + 6);
        pfVar9[-2] = fVar2;
        uVar7 = *(uint64_t *)(unaff_RSI + 8);
        *(uint64_t *)(pfVar9 + 4) = *(uint64_t *)(unaff_RSI + 6);
        *(uint64_t *)(pfVar9 + 6) = uVar7;
        fVar3 = unaff_RSI[2];
        fVar4 = unaff_RSI[3];
        fVar5 = unaff_RSI[4];
        fVar6 = unaff_RSI[5];
        *pfVar9 = fVar3;
        pfVar9[1] = fVar4;
        pfVar9[2] = fVar5;
        pfVar9[3] = fVar6;
        pfVar9[-1] = unaff_RSI[1];
        UISystem_c6710(fVar3,0,fVar2,0,&local_buffer_00000030);
      }
      pfVar1 = pfVar9 + 8;
      pfVar9 = pfVar9 + 10;
    } while (pfVar1 < unaff_R15);
  }
  if (1 < unaff_R14) {
    pfVar9 = unaff_R13 + -8;
    do {
      fStack0000000000000030 = pfVar9[-2];
      fStack0000000000000034 = pfVar9[-1];
      local_buffer_38 = *(uint64_t *)pfVar9;
      local_buffer_40 = *(uint64_t *)(pfVar9 + 2);
      local_buffer_48 = *(uint64_t *)(pfVar9 + 4);
      local_buffer_50 = *(uint64_t *)(pfVar9 + 6);
      pfVar9[-2] = *unaff_RSI;
      uVar7 = *(uint64_t *)(unaff_RSI + 8);
      *(uint64_t *)(pfVar9 + 4) = *(uint64_t *)(unaff_RSI + 6);
      *(uint64_t *)(pfVar9 + 6) = uVar7;
      fVar2 = unaff_RSI[2];
      fVar3 = unaff_RSI[3];
      fVar4 = unaff_RSI[4];
      fVar5 = unaff_RSI[5];
      *pfVar9 = fVar2;
      pfVar9[1] = fVar3;
      pfVar9[2] = fVar4;
      pfVar9[3] = fVar5;
      pfVar9[-1] = unaff_RSI[1];
      lVar8 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (int64_t)unaff_RSI) + (int64_t)pfVar9),8
                    );
      UISystem_c6710(fVar2,0,(-1 - (lVar8 >> 0x3f)) + (lVar8 >> 4),0,&local_buffer_00000030);
      pfVar9 = pfVar9 + -10;
    } while (0x4f < (0x20 - (int64_t)unaff_RSI) + (int64_t)pfVar9);
  }
  return;
}
// 函数: void UISystem_c6657(void)
void UISystem_c6657(void)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int32_t *unaff_RSI;
  uint64_t *puVar7;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int32_t local_buffer_30;
  int32_t local_buffer_34;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  puVar7 = (uint64_t *)(unaff_R13 + -0x20);
  do {
    local_buffer_30 = *(int32_t *)(puVar7 + -1);
    local_buffer_34 = *(int32_t *)((int64_t)puVar7 + -4);
    local_buffer_38 = *puVar7;
    local_buffer_40 = puVar7[1];
    local_buffer_48 = puVar7[2];
    local_buffer_50 = puVar7[3];
    *(int32_t *)(puVar7 + -1) = *unaff_RSI;
    uVar5 = *(uint64_t *)(unaff_RSI + 8);
    puVar7[2] = *(uint64_t *)(unaff_RSI + 6);
    puVar7[3] = uVar5;
    uVar1 = unaff_RSI[2];
    uVar2 = unaff_RSI[3];
    uVar3 = unaff_RSI[4];
    uVar4 = unaff_RSI[5];
    *(int32_t *)puVar7 = uVar1;
    *(int32_t *)((int64_t)puVar7 + 4) = uVar2;
    *(int32_t *)(puVar7 + 1) = uVar3;
    *(int32_t *)((int64_t)puVar7 + 0xc) = uVar4;
    *(int32_t *)((int64_t)puVar7 + -4) = unaff_RSI[1];
    lVar6 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (int64_t)unaff_RSI) + (int64_t)puVar7),8);
    UISystem_c6710(uVar1,0,(-1 - (lVar6 >> 0x3f)) + (lVar6 >> 4),0,&local_buffer_00000030);
    puVar7 = puVar7 + -5;
  } while (0x4f < (0x20 - (int64_t)unaff_RSI) + (int64_t)puVar7);
  return;
}