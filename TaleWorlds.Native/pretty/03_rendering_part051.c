/* 函数别名定义: DataValidator */
#define DataValidator DataValidator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part051.c - 8 个函数
// 函数: void function_294654(int64_t param_1)
void function_294654(int64_t param_1)
{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int64_t lVar4;
  uint *puVar5;
  int iVar6;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t *unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  int32_t uVar7;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  if (in_ZF) {
    if (*(int *)(param_1 + 0x60) == 0) {
      *(uint64_t *)(unaff_RBP + 7) = 0;
      *(uint64_t *)(unaff_RBP + 0xb) = 0;
      *(uint64_t *)(unaff_RBP + -5) = 0;
      *(uint64_t *)(unaff_RBP + 5) = 0;
      *(uint64_t *)(unaff_RBP + 9) = 0;
      *(uint64_t *)(unaff_RBP + 0xd) = 0;
      *(uint64_t *)(unaff_RBP + -0x10) = 0;
      unaff_RBP[-0xe] = 0;
      *(int8_t *)(unaff_RBP + -0xd) = 1;
      *(int8_t *)(unaff_RBP + -8) = 0;
      *(uint64_t *)(unaff_RBP + -7) = 0;
      *unaff_RBP = 0;
      *(int8_t *)(unaff_RBP + 2) = 0;
      unaff_RBP[3] = 0;
      *(uint64_t *)(unaff_RBP + -0xc) = 0;
      unaff_RBP[-10] = 3;
      unaff_RBP[-9] = 1;
      *(int8_t *)(unaff_RBP + -0x20) = 0;
      *(int8_t *)((int64_t)unaff_RBP + -0x7f) = 0;
      *(int8_t *)((int64_t)unaff_RBP + -0x7e) = 0x80;
      *(int8_t *)((int64_t)unaff_RBP + -0x7d) = 0x3f;
      *(char *)(unaff_RBP + -0x1f) = *(char *)(unaff_RBP + 5);
      *(int8_t *)((int64_t)unaff_RBP + -0x7b) = *(int8_t *)((int64_t)unaff_RBP + 0x15);
      *(int8_t *)((int64_t)unaff_RBP + -0x7a) = *(int8_t *)((int64_t)unaff_RBP + 0x16);
      *(int8_t *)((int64_t)unaff_RBP + -0x79) = *(int8_t *)((int64_t)unaff_RBP + 0x17);
      *(int8_t *)(unaff_RBP + -0x1e) = *(int8_t *)(unaff_RBP + 6);
      *(int8_t *)((int64_t)unaff_RBP + -0x77) = *(int8_t *)((int64_t)unaff_RBP + 0x19);
      *(int8_t *)((int64_t)unaff_RBP + -0x76) = *(int8_t *)((int64_t)unaff_RBP + 0x1a);
      *(int8_t *)((int64_t)unaff_RBP + -0x75) = *(int8_t *)((int64_t)unaff_RBP + 0x1b);
      *(int8_t *)(unaff_RBP + -0x1d) = *(int8_t *)(unaff_RBP + 7);
      *(int8_t *)((int64_t)unaff_RBP + -0x73) = *(int8_t *)((int64_t)unaff_RBP + 0x1d);
      *(int8_t *)((int64_t)unaff_RBP + -0x72) = *(int8_t *)((int64_t)unaff_RBP + 0x1e);
      *(int8_t *)((int64_t)unaff_RBP + -0x71) = *(int8_t *)((int64_t)unaff_RBP + 0x1f);
      *(uint64_t *)(unaff_RBP + -2) = 0;
      *(uint64_t *)(unaff_RBP + 0x10) = 0;
      *(uint64_t *)(unaff_RBP + -0x1c) = *(uint64_t *)(unaff_RBP + 8);
      *(uint64_t *)(unaff_RBP + -0x1a) = *(uint64_t *)(unaff_RBP + 10);
      uVar7 = (int32_t)*(uint64_t *)(unaff_RBP + 0x10);
      unaff_RBP[-0x18] = unaff_RBP[0xc];
      unaff_RBP[-0x17] = unaff_RBP[0xd];
      unaff_RBP[-0x16] = unaff_RBP[0xe];
      unaff_RBP[-0x15] = unaff_RBP[0xf];
      *(uint64_t *)(unaff_RBP + -0x14) = *(uint64_t *)(unaff_RBP + 0x10);
      if (*(char *)(unaff_RBP + 5) == '\0') {
        uVar7 = 0x676f7250;
        unaff_RBP[-0x1b] = 0x70333120;
        unaff_RBP[-0x1f] = 0x676f7250;
        unaff_RBP[-0x1e] = 0x6c437967;
        unaff_RBP[-0x1d] = 0x2e6e6165;
        unaff_RBP[-0x1c] = 0x2c667474;
        *(int16_t *)(unaff_RBP + -0x1a) = 0x78;
      }
      lVar4 = function_294c20(uVar7,&processed_var_704_ptr);
      *(int32_t *)(lVar4 + 0xc) = 0x3f800000;
    }
    function_294f50();
  }
  pbVar3 = *(byte **)(unaff_RBX + 0x18);
  if (pbVar3 != (byte *)0x0) {
    iVar6 = *(int *)(unaff_RBX + 0x28);
    iVar2 = *(int *)(unaff_RBX + 0x2c);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    puVar5 = (uint *)Function_a18dbc9a((int64_t)iVar2 * (int64_t)iVar6 * 4,SYSTEM_DATA_MANAGER_B);
    *(uint **)(unaff_RBX + 0x20) = puVar5;
    for (iVar6 = *(int *)(unaff_RBX + 0x2c) * *(int *)(unaff_RBX + 0x28); 0 < iVar6;
        iVar6 = iVar6 + -1) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *puVar5 = (uint)bVar1 << 0x18 | 0xffffff;
      puVar5 = puVar5 + 1;
    }
  }
  *unaff_R15 = *(uint64_t *)(unaff_RBX + 0x20);
  if (unaff_R14 != (int32_t *)0x0) {
    *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x14) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_294835(void)
void function_294835(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  uint64_t *unaff_R15;
  *unaff_R15 = *(uint64_t *)(unaff_RBX + 0x20);
  if (unaff_R14 != (int32_t *)0x0) {
    *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_294849(void)
void function_294849(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_29485c(void)
void function_29485c(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_294880(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t *puVar11;
  int8_t astack_special_x_8 [8];
  int64_t lStackX_10;
  int8_t *pstack_special_x_18;
  int64_t lStackX_20;
  if (*(char *)(param_2 + 9) == '\0') {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lStackX_10 = Function_a18dbc9a(0x70,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
    pstack_special_x_18 = astack_special_x_8;
    lStackX_20 = lStackX_10;
    if (lStackX_10 != 0) {
      lStackX_10 = function_296a70(lStackX_10);
    }
    function_13d860(param_1 + 0x40,&lStackX_10);
  }
  iVar2 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == iVar2) {
    iVar10 = *(int *)(param_1 + 0x60) + 1;
    if (iVar2 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar2 / 2 + iVar2;
    }
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    if (iVar2 < iVar10) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar8 = Function_a18dbc9a((int64_t)iVar10 * 0x88,SYSTEM_DATA_MANAGER_B);
      if (*(int64_t *)(param_1 + 0x68) != 0) {
// WARNING: Subroutine does not return
        memcpy(uVar8,*(int64_t *)(param_1 + 0x68),(int64_t)*(int *)(param_1 + 0x60) * 0x88);
      }
      *(uint64_t *)(param_1 + 0x68) = uVar8;
      *(int *)(param_1 + 100) = iVar10;
    }
  }
  lVar9 = (int64_t)*(int *)(param_1 + 0x60) * 0x88;
  lVar3 = *(int64_t *)(param_1 + 0x68);
  uVar8 = param_2[1];
  *(uint64_t *)(lVar9 + lVar3) = *param_2;
  ((uint64_t *)(lVar9 + lVar3))[1] = uVar8;
  uVar8 = param_2[3];
  puVar11 = (uint64_t *)(lVar9 + 0x10 + lVar3);
  *puVar11 = param_2[2];
  puVar11[1] = uVar8;
  uVar8 = param_2[5];
  puVar11 = (uint64_t *)(lVar9 + 0x20 + lVar3);
  *puVar11 = param_2[4];
  puVar11[1] = uVar8;
  uVar8 = param_2[7];
  puVar11 = (uint64_t *)(lVar9 + 0x30 + lVar3);
  *puVar11 = param_2[6];
  puVar11[1] = uVar8;
  uVar8 = param_2[9];
  puVar11 = (uint64_t *)(lVar9 + 0x40 + lVar3);
  *puVar11 = param_2[8];
  puVar11[1] = uVar8;
  uVar8 = param_2[0xb];
  puVar11 = (uint64_t *)(lVar9 + 0x50 + lVar3);
  *puVar11 = param_2[10];
  puVar11[1] = uVar8;
  uVar8 = param_2[0xd];
  puVar11 = (uint64_t *)(lVar9 + 0x60 + lVar3);
  *puVar11 = param_2[0xc];
  puVar11[1] = uVar8;
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x74);
  uVar5 = *(int32_t *)(param_2 + 0xf);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x7c);
  puVar1 = (int32_t *)(lVar9 + 0x70 + lVar3);
  *puVar1 = *(int32_t *)(param_2 + 0xe);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(uint64_t *)(lVar9 + 0x80 + lVar3) = param_2[0x10];
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar2 + 1;
  puVar11 = (uint64_t *)((int64_t)iVar2 * 0x88 + *(int64_t *)(param_1 + 0x68));
  if (puVar11[0x10] == 0) {
    puVar11[0x10] =
         *(uint64_t *)
          (*(int64_t *)(param_1 + 0x48) + -8 + (int64_t)*(int *)(param_1 + 0x40) * 8);
  }
  if (*(char *)((int64_t)puVar11 + 0xc) == '\0') {
    iVar2 = *(int *)(puVar11 + 1);
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar8 = Function_a18dbc9a((int64_t)iVar2,SYSTEM_DATA_MANAGER_B);
    *puVar11 = uVar8;
    *(int8_t *)((int64_t)puVar11 + 0xc) = 1;
// WARNING: Subroutine does not return
    memcpy(uVar8,*param_2,(int64_t)*(int *)(puVar11 + 1));
  }
  function_2943c0(param_1);
  return puVar11[0x10];
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_294a90(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void function_294a90(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t *param_5,int64_t param_6)
{
  int8_t stack_array_158 [32];
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int64_t lStack_100;
  uint64_t local_var_f8;
  int64_t lStack_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  uint64_t local_var_b8;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int64_t lStack_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
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
  uint64_t local_var_28;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (param_5 == (uint64_t *)0x0) {
    local_var_58 = 0x3f800000;
    local_var_a8 = 0;
    local_var_a0 = CONCAT35(local_var_a0._5_3_,0x100000000);
    local_var_98 = 0;
    local_var_90 = 0x100000003;
    local_var_88 = local_var_88 & 0xffffff00;
    local_var_84 = 0;
    local_var_80 = 0;
    local_var_7c = 0;
    local_var_78 = 0;
    lStack_70 = 0;
    local_var_68 = 0x7f7fffff00000000;
    local_var_60 = (local_var_60 >> 8 & 0xffffff) << 8;
    local_var_54 = 0;
    local_var_50 = 0;
    local_var_4c = 0;
    local_var_48 = 0;
    local_var_44 = 0;
    local_var_40 = 0;
    local_var_3c = 0;
    local_var_38 = 0;
    local_var_34 = 0;
    local_var_30 = 0;
    local_var_28 = 0;
  }
  else {
    local_var_a8 = *param_5;
    local_var_a0 = param_5[1];
    local_var_98 = param_5[2];
    local_var_90 = param_5[3];
    local_var_88 = (uint)param_5[4];
    local_var_84 = (int32_t)((uint64_t)param_5[4] >> 0x20);
    local_var_80 = (int32_t)param_5[5];
    local_var_7c = (int32_t)((uint64_t)param_5[5] >> 0x20);
    local_var_68 = param_5[8];
    local_var_60 = param_5[9];
    lStack_70 = param_5[7];
    local_var_78 = (int32_t)param_5[6];
    local_var_74 = (int32_t)((uint64_t)param_5[6] >> 0x20);
    local_var_48 = (int32_t)param_5[0xc];
    local_var_44 = (int32_t)((uint64_t)param_5[0xc] >> 0x20);
    local_var_40 = (int32_t)param_5[0xd];
    local_var_3c = (int32_t)((uint64_t)param_5[0xd] >> 0x20);
    local_var_28 = param_5[0x10];
    local_var_58 = (int32_t)param_5[10];
    local_var_54 = (int32_t)((uint64_t)param_5[10] >> 0x20);
    local_var_50 = (int32_t)param_5[0xb];
    local_var_4c = (int32_t)((uint64_t)param_5[0xb] >> 0x20);
    local_var_38 = (int32_t)param_5[0xe];
    local_var_34 = (int32_t)((uint64_t)param_5[0xe] >> 0x20);
    local_var_30 = (int32_t)param_5[0xf];
    local_var_2c = (int32_t)((uint64_t)param_5[0xf] >> 0x20);
  }
  local_var_108 = CONCAT44(local_var_74,local_var_78);
  local_var_118 = CONCAT44(local_var_84,local_var_88);
  local_var_110 = CONCAT44(local_var_7c,local_var_80);
  local_var_120 = local_var_90;
  local_var_e8 = CONCAT44(local_var_54,local_var_58);
  local_var_e0 = CONCAT44(local_var_4c,local_var_50);
  local_var_f8 = local_var_68;
  lStack_f0 = local_var_60;
  local_var_d8 = CONCAT44(local_var_44,local_var_48);
  local_var_d0 = CONCAT44(local_var_3c,local_var_40);
  lStack_100 = lStack_70;
  if (param_6 != 0) {
    lStack_100 = param_6;
  }
  _local_var_128 = CONCAT44(param_4,(int)local_var_98);
  local_var_c8 = local_var_38;
  local_var_c4 = local_var_34;
  local_var_c0 = local_var_30;
  local_var_bc = local_var_2c;
  local_var_b8 = local_var_28;
  _local_var_130 = CONCAT44((int)((uint64_t)local_var_a0 >> 0x20),param_3);
  local_var_138 = param_2;
  function_294880(param_1,&local_var_138);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_294c20(uint64_t param_1,char *param_2,int32_t param_3,uint64_t *param_4,
void function_294c20(uint64_t param_1,char *param_2,int32_t param_3,uint64_t *param_4,
                  uint64_t param_5)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  char *pcVar4;
  int8_t *puVar5;
  char cVar6;
  int8_t stack_array_1b8 [32];
  uint64_t *plocal_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  int8_t local_var_17c;
  uint32_t local_var_17b;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int64_t lStack_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  uint64_t local_var_108;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  uint64_t local_var_78;
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  lVar2 = Function_a18dbc9a((int64_t)((((int)lVar2 + 4) / 5) * 4),SYSTEM_DATA_MANAGER_B);
  cVar6 = *param_2;
  if (cVar6 != '\0') {
    pcVar4 = param_2 + 2;
    puVar5 = (int8_t *)(lVar2 + 2);
    do {
      iVar3 = (((((((((int)pcVar4[2] - (('[' < pcVar4[2]) + 0x23)) * 0x55 -
                    (('[' < pcVar4[1]) + 0x23)) + (int)pcVar4[1]) * 0x55 - (('[' < *pcVar4) + 0x23))
                 + (int)*pcVar4) * 0x55 - (('[' < pcVar4[-1]) + 0x23)) + (int)pcVar4[-1]) * 0x55 -
              (('[' < cVar6) + 0x23)) + (int)cVar6;
      puVar5[-2] = (char)iVar3;
      puVar5[-1] = (char)((uint)iVar3 >> 8);
      *puVar5 = (char)((uint)iVar3 >> 0x10);
      puVar5[1] = (char)((uint)iVar3 >> 0x18);
      cVar6 = pcVar4[3];
      pcVar4 = pcVar4 + 5;
      puVar5 = puVar5 + 4;
    } while (cVar6 != '\0');
  }
  iVar3 = (uint)*(byte *)(lVar2 + 8) * 0x1000000 + (uint)*(byte *)(lVar2 + 9) * 0x10000 +
          (uint)*(byte *)(lVar2 + 10) * 0x100 + (uint)*(byte *)(lVar2 + 0xb);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  uVar1 = Function_a18dbc9a(iVar3,SYSTEM_DATA_MANAGER_B);
  function_298ee0(uVar1,lVar2);
  if (param_4 == (uint64_t *)0x0) {
    local_var_a8 = 0x3f800000;
    local_var_f8 = 0;
    local_var_f0 = CONCAT35(local_var_f0._5_3_,0x100000000);
    local_var_e8 = 0;
    local_var_e0 = 0x100000003;
    local_var_d8 = local_var_d8 & 0xffffff00;
    local_var_d4 = 0;
    local_var_d0 = 0;
    local_var_cc = 0;
    local_var_c8 = 0;
    local_var_c0 = 0;
    local_var_b8 = 0x7f7fffff00000000;
    local_var_b0 = (local_var_b0 >> 8 & 0xffffff) << 8;
    local_var_a4 = 0;
    local_var_a0 = 0;
    local_var_9c = 0;
    local_var_98 = 0;
    local_var_94 = 0;
    local_var_90 = 0;
    local_var_8c = 0;
    local_var_88 = 0;
    local_var_84 = 0;
    local_var_80 = 0;
    local_var_78 = 0;
  }
  else {
    local_var_f8 = *param_4;
    local_var_f0 = param_4[1];
    local_var_e8 = param_4[2];
    local_var_e0 = param_4[3];
    local_var_c0 = param_4[7];
    local_var_d8 = (uint)param_4[4];
    local_var_d4 = (int32_t)((uint64_t)param_4[4] >> 0x20);
    local_var_d0 = (int32_t)param_4[5];
    local_var_cc = (int32_t)((uint64_t)param_4[5] >> 0x20);
    local_var_b8 = param_4[8];
    local_var_b0 = param_4[9];
    local_var_c8 = (int32_t)param_4[6];
    local_var_c4 = (int32_t)((uint64_t)param_4[6] >> 0x20);
    local_var_a8 = (int32_t)param_4[10];
    local_var_a4 = (int32_t)((uint64_t)param_4[10] >> 0x20);
    local_var_a0 = (int32_t)param_4[0xb];
    local_var_9c = (int32_t)((uint64_t)param_4[0xb] >> 0x20);
    local_var_98 = (int32_t)param_4[0xc];
    local_var_94 = (int32_t)((uint64_t)param_4[0xc] >> 0x20);
    local_var_90 = (int32_t)param_4[0xd];
    local_var_8c = (int32_t)((uint64_t)param_4[0xd] >> 0x20);
    local_var_78 = param_4[0x10];
    local_var_88 = (int32_t)param_4[0xe];
    local_var_84 = (int32_t)((uint64_t)param_4[0xe] >> 0x20);
    local_var_80 = (int32_t)param_4[0xf];
    local_var_7c = (int32_t)((uint64_t)param_4[0xf] >> 0x20);
  }
  local_var_190 = param_5;
  local_var_188 = local_var_f8;
  local_var_168 = CONCAT44(local_var_d4,local_var_d8);
  local_var_160 = CONCAT44(local_var_cc,local_var_d0);
  local_var_17b = (uint32_t)((uint64_t)local_var_f0 >> 0x28);
  _local_var_180 = CONCAT14(1,(int)local_var_f0);
  local_var_178 = local_var_e8;
  local_var_170 = local_var_e0;
  local_var_158 = CONCAT44(local_var_c4,local_var_c8);
  local_var_150 = local_var_c0;
  local_var_138 = CONCAT44(local_var_a4,local_var_a8);
  local_var_130 = CONCAT44(local_var_9c,local_var_a0);
  local_var_148 = local_var_b8;
  lStack_140 = local_var_b0;
  local_var_128 = CONCAT44(local_var_94,local_var_98);
  local_var_120 = CONCAT44(local_var_8c,local_var_90);
  plocal_var_198 = &local_var_188;
  local_var_118 = local_var_88;
  local_var_114 = local_var_84;
  local_var_110 = local_var_80;
  local_var_10c = local_var_7c;
  local_var_108 = local_var_78;
  function_294a90(param_1,uVar1,iVar3,param_3);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
// WARNING: Subroutine does not return
  DataValidator0(lVar2,SYSTEM_DATA_MANAGER_B);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_294f50(int64_t param_1)
void function_294f50(int64_t param_1)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  int8_t stack_array_308 [96];
  uint local_var_2a8;
  uint local_var_294;
  int64_t lStack_288;
  int64_t lStack_270;
  uint64_t local_var_268;
  int32_t local_var_260;
  int32_t local_var_25c;
  int32_t local_var_258;
  uint64_t local_var_254;
  int32_t local_var_24c;
  uint64_t local_var_248;
  int64_t lStack_238;
  uint64_t local_var_230;
  uint64_t local_var_1d8;
  uint64_t local_var_c8;
  local_var_1d8 = 0xfffffffffffffffe;
  local_var_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_308;
  lStack_288 = param_1;
  if (*(int *)(param_1 + 0x70) < 0) {
    local_var_258 = 0xffffffff;
    local_var_254 = 0;
    local_var_24c = 0;
    local_var_248 = 0;
    local_var_260 = 0x80000000;
    local_var_25c = 0x1b00d9;
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      local_var_25c = 0x20002;
    }
    function_299330(param_1 + 0x50,&local_var_260);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x50) + -1;
  }
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  function_2943c0(param_1);
  lStack_270 = 0;
  local_var_268 = 0;
  lStack_238 = 0;
  local_var_230 = 0;
  uVar1 = *(uint *)(param_1 + 0x60);
  local_var_2a8 = uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
    if ((int)uVar1 < 8) {
      uVar3 = 8;
    }
    if (0 < (int)uVar3) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      local_var_268 = Function_a18dbc9a((int64_t)(int)uVar3 * 0x110,SYSTEM_DATA_MANAGER_B);
      lStack_270 = (uint64_t)uVar3 << 0x20;
    }
  }
  uVar2 = local_var_268;
  lStack_270 = CONCAT44(lStack_270._4_4_,uVar1);
  uVar3 = *(uint *)(param_1 + 0x40);
  local_var_294 = uVar3;
  if (0 < (int)uVar3) {
    uVar4 = uVar3;
    if ((int)uVar3 < 8) {
      uVar4 = 8;
    }
    if (0 < (int)uVar4) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      local_var_230 = Function_a18dbc9a((int64_t)(int)uVar4 << 5,SYSTEM_DATA_MANAGER_B);
      lStack_238 = (uint64_t)uVar4 << 0x20;
    }
  }
  lStack_238 = CONCAT44(lStack_238._4_4_,uVar3);
// WARNING: Subroutine does not return
  memset(uVar2,0,(int64_t)(int)(uVar1 * 0x110));
}
// 函数: void function_296680(int64_t param_1)
void function_296680(int64_t param_1)
{
  ushort uVar1;
  int iVar2;
  int8_t uVar3;
  int64_t lVar4;
  int iVar5;
  int8_t uVar6;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  int8_t uVar7;
  iVar2 = *(int *)(param_1 + 0x28);
  lVar10 = (int64_t)*(int *)(param_1 + 0x70) * 0x20 + *(int64_t *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      iVar8 = 0;
      do {
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2688_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(lVar4 + *(int64_t *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2688_ptr)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(lVar4 + 0x6d + *(int64_t *)(param_1 + 0x18)) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2689_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 1 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2689_ptr)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x6e + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2690_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 2 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2690_ptr)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x6f + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        uVar6 = 0xff;
        if ((&rendering_buffer_2691_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 3 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2691_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x70 + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2692_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 4 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2692_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x71 + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2693_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 5 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2693_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x72 + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2694_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 6 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2694_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x73 + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        uVar7 = 0xff;
        uVar6 = 0xff;
        if ((&rendering_buffer_2695_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 7 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2695_ptr)[lVar11] == 'X') {
          uVar3 = uVar7;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x74 + lVar4) = uVar3;
        lVar4 = (int64_t)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&rendering_buffer_2696_ptr)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2696_ptr)[lVar11] == 'X') {
          uVar3 = uVar7;
        }
        *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 0x75 + lVar4) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&rendering_buffer_2697_ptr)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((int64_t)iVar9 + 9 + *(int64_t *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2697_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)((int64_t)iVar9 + 0x76 + *(int64_t *)(param_1 + 0x18)) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&rendering_buffer_2698_ptr)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((int64_t)iVar9 + 10 + *(int64_t *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2698_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)((int64_t)iVar9 + 0x77 + *(int64_t *)(param_1 + 0x18)) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&rendering_buffer_2699_ptr)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((int64_t)iVar9 + 0xb + *(int64_t *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&rendering_buffer_2699_ptr)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        lVar11 = lVar11 + 0xc;
        iVar8 = iVar8 + 0xc;
        *(int8_t *)((int64_t)iVar9 + 0x78 + *(int64_t *)(param_1 + 0x18)) = uVar3;
      } while (iVar8 < 0x6c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1b);
  }
  else {
    iVar5 = (uint)*(ushort *)(lVar10 + 10) * iVar2 + (uint)*(ushort *)(lVar10 + 8);
    *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 1 + (int64_t)(iVar5 + iVar2)) = 0xff;
    *(int8_t *)((int64_t)(iVar5 + iVar2) + *(int64_t *)(param_1 + 0x18)) = 0xff;
    *(int8_t *)(*(int64_t *)(param_1 + 0x18) + 1 + (int64_t)iVar5) = 0xff;
    *(int8_t *)((int64_t)iVar5 + *(int64_t *)(param_1 + 0x18)) = 0xff;
  }
  uVar1 = *(ushort *)(lVar10 + 10);
  *(float *)(param_1 + 0x38) = ((float)*(ushort *)(lVar10 + 8) + 0.5) * *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x3c) = ((float)uVar1 + 0.5) * *(float *)(param_1 + 0x34);
  return;
}