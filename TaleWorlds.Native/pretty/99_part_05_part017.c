#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_05_part017.c - 2 个函数
// 函数: void function_2e1590(int64_t param_1,uint64_t param_2)
void function_2e1590(int64_t param_1,uint64_t param_2)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int32_t *puVar5;
  int64_t lVar6;
  float fVar7;
  int8_t stack_array_c8 [32];
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
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  *(uint64_t *)(param_1 + 0x28) = param_2;
  function_2e4490();
  fVar7 = *(float *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = (int)(fVar7 * *(float *)(param_1 + 0x58));
  *(int *)(param_1 + 0x20) = iVar4;
  if (iVar2 == 1) {
    fVar7 = fVar7 * *(float *)(param_1 + 0x5c);
  }
  else if (iVar2 == 2) {
    fVar7 = fVar7 * *(float *)(param_1 + 0x60);
  }
  else {
    if (iVar2 != 3) goto LAB_1802e15fc;
    fVar7 = fVar7 * *(float *)(param_1 + 100);
  }
  iVar4 = (int)fVar7;
  *(int *)(param_1 + 0x20) = iVar4;
LAB_1802e15fc:
  if (0x4000 < iVar4) {
    *(int32_t *)(param_1 + 0x20) = 0x4000;
  }
  *(int32_t *)(param_1 + 0x50) = 0x3f800000;
  function_1983b0(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0x3830);
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3860) = 0;
  *(uint64_t *)(lVar3 + 0x3868) = 0x7f7fffff00000000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3810) = 0x461c4000461c4000;
  *(uint64_t *)(lVar3 + 0x3818) = 0x7f7fffff461c4000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar3 + 0x3820) = 0xc61c4000c61c4000;
  *(uint64_t *)(lVar3 + 0x3828) = 0x7f7fffffc61c4000;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  *(int32_t *)(param_1 + 0x40) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x44) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x48) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x4c) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x30) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x38) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
  if (*(int64_t *)(lVar3 + 0x60b80) == 0) {
    puVar1 = (int32_t *)(lVar3 + 0x60b68);
    local_var_88 = *puVar1;
    puVar5 = &local_var_98;
    local_var_a4 = *(int32_t *)(lVar3 + 0x60b6c);
    local_var_58 = *puVar1;
    local_var_54 = *(int32_t *)(lVar3 + 0x60b6c);
    local_var_98 = *puVar1;
    local_var_94 = *(int32_t *)(lVar3 + 0x60b6c);
    lVar6 = 8;
    local_var_84 = *(int32_t *)(lVar3 + 0x60b74);
    puVar1 = (int32_t *)(lVar3 + 0x60b70);
    local_var_a8 = *puVar1;
    local_var_28 = *puVar1;
    local_var_24 = *(int32_t *)(lVar3 + 0x60b74);
    local_var_68 = *puVar1;
    local_var_64 = *(int32_t *)(lVar3 + 0x60b74);
    local_var_90 = 0xc1a00000;
    local_var_8c = 0x7f7fffff;
    local_var_80 = 0xc1a00000;
    local_var_7c = 0x7f7fffff;
    local_var_70 = 0xc1a00000;
    local_var_6c = 0x7f7fffff;
    local_var_60 = 0xc1a00000;
    local_var_5c = 0x7f7fffff;
    local_var_50 = 0x42200000;
    local_var_4c = 0x7f7fffff;
    local_var_40 = 0x42200000;
    local_var_3c = 0x7f7fffff;
    local_var_a0 = 0x42200000;
    local_var_30 = 0x42200000;
    local_var_2c = 0x7f7fffff;
    local_var_9c = 0x7f7fffff;
    local_var_20 = 0x42200000;
    local_var_1c = 0x7f7fffff;
    local_var_78 = local_var_a8;
    local_var_74 = local_var_a4;
    local_var_48 = local_var_88;
    local_var_44 = local_var_84;
    local_var_38 = local_var_a8;
    local_var_34 = local_var_a4;
    do {
      function_2e4210(param_1,puVar5);
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    function_3b25a0(*(int64_t *)(lVar3 + 0x60b80),param_1,lVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// 函数: void function_2e18c0(int64_t param_1)
void function_2e18c0(int64_t param_1)
{
  int64_t lVar1;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  function_1983b0(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0x3830);
  lVar1 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar1 + 0x3860) = 0;
  *(uint64_t *)(lVar1 + 0x3868) = 0x7f7fffff00000000;
  local_var_48 = *(int32_t *)(param_1 + 0x30);
  local_var_44 = *(int32_t *)(param_1 + 0x34);
  local_var_40 = *(int32_t *)(param_1 + 0x38);
  local_var_3c = *(int32_t *)(param_1 + 0x3c);
  local_var_38 = *(int32_t *)(param_1 + 0x40);
  local_var_34 = *(int32_t *)(param_1 + 0x44);
  local_var_30 = *(int32_t *)(param_1 + 0x48);
  local_var_2c = *(int32_t *)(param_1 + 0x4c);
  SystemCore_Parser(&local_var_48);
  function_287610(*(int64_t *)(param_1 + 0x28) + 0x36d0,*(int64_t *)(param_1 + 0x28) + 0x3830,
                &local_var_48);
  lVar1 = function_2e1950(param_1);
  if (lVar1 != 0) {
    *(int32_t *)(param_1 + 0xc) = 3;
  }
  *(int8_t *)(*(int64_t *)(param_1 + 0x28) + 0x2830) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_2e1950(int *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  char cVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uVar14 = 0xfffffffffffffffe;
  if (0 < *param_1) {
    cVar9 = function_2e4840();
    if ((cVar9 != '\0') && (*(int64_t *)(param_1 + 4) != 0)) {
      puVar10 = (int32_t *)function_0daa50();
      *(int8_t *)((int64_t)puVar10 + 0x23) = 1;
      SystemCore_NetworkHandler(puVar10,&processed_var_0_ptr);
      *puVar10 = 0x10;
      *(uint64_t *)(puVar10 + 0x4706) = 0;
      puVar10[0x4708] = (float)(param_1[8] << 2);
      puVar10[0x4709] = (float)(param_1[8] << 2);
      puVar10[0x470a] = 0;
      puVar10[0x470b] = 0x3f800000;
      lVar13 = 2;
      puVar7 = (uint64_t *)(*(int64_t *)(param_1 + 10) + 0x36d0);
      puVar8 = (uint64_t *)(puVar10 + 0xc);
      do {
        puVar12 = puVar8;
        puVar11 = puVar7;
        uVar6 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar6;
        uVar6 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar6;
        uVar6 = puVar11[5];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar6;
        uVar6 = puVar11[7];
        puVar12[6] = puVar11[6];
        puVar12[7] = uVar6;
        uVar6 = puVar11[9];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar6;
        uVar6 = puVar11[0xb];
        puVar12[10] = puVar11[10];
        puVar12[0xb] = uVar6;
        uVar6 = puVar11[0xd];
        puVar12[0xc] = puVar11[0xc];
        puVar12[0xd] = uVar6;
        uVar6 = puVar11[0xf];
        puVar12[0xe] = puVar11[0xe];
        puVar12[0xf] = uVar6;
        lVar13 = lVar13 + -1;
        puVar7 = puVar11 + 0x10;
        puVar8 = puVar12 + 0x10;
      } while (lVar13 != 0);
      uVar6 = puVar11[0x11];
      puVar12[0x10] = puVar11[0x10];
      puVar12[0x11] = uVar6;
      uVar6 = puVar11[0x13];
      puVar12[0x12] = puVar11[0x12];
      puVar12[0x13] = uVar6;
      uVar6 = puVar11[0x15];
      puVar12[0x14] = puVar11[0x14];
      puVar12[0x15] = uVar6;
      uVar3 = *(int32_t *)((int64_t)puVar11 + 0xb4);
      uVar4 = *(int32_t *)(puVar11 + 0x17);
      uVar5 = *(int32_t *)((int64_t)puVar11 + 0xbc);
      *(int32_t *)(puVar12 + 0x16) = *(int32_t *)(puVar11 + 0x16);
      *(int32_t *)((int64_t)puVar12 + 0xb4) = uVar3;
      *(int32_t *)(puVar12 + 0x17) = uVar4;
      *(int32_t *)((int64_t)puVar12 + 0xbc) = uVar5;
      function_24b8d0(puVar10);
      puVar10[0x473c] = 0xffffffff;
      if (*(code **)(puVar10 + 0x2588) != (code *)0x0) {
        (**(code **)(puVar10 + 0x2588))(puVar10 + 0x2584,0,0,param_4,uVar14);
      }
      *(void **)(puVar10 + 0x2588) = &processed_var_7024_ptr;
      *(void **)(puVar10 + 0x258a) = &processed_var_7008_ptr;
      *(code **)(puVar10 + 0x2584) = _guard_check_icall;
      plVar1 = *(int64_t **)(puVar10 + 0x25a4);
      *(uint64_t *)(puVar10 + 0x25a4) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar1 = *(int64_t **)(param_1 + 4);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = *(int64_t **)(puVar10 + 0x25aa);
      *(int64_t **)(puVar10 + 0x25aa) = plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      *(int8_t *)((int64_t)puVar10 + 0x124c5) = 0;
      puVar10[0x268b] = 0xfffffff6;
      puVar10[1] = puVar10[1] | 0x218003;
      puVar10[0x4938] = 0;
      *(int8_t *)(puVar10 + 0x25c4) = 0;
      puVar10[0x6e] = 0x40008182;
      function_1be080(puVar10 + 2,system_parameter_buffer + 0x13b0);
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 10) + 0x60b80);
      if (lVar13 != 0) {
        *(int8_t *)(lVar13 + 0x170) = 1;
        LOCK();
        *(int32_t *)(lVar13 + 0x10) = 0;
        UNLOCK();
      }
      return puVar10;
    }
  }
  return (int32_t *)0x0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address