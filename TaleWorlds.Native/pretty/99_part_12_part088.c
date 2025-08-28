#include "ultra_high_freq_fun_definitions.h"
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
#include "CoreSystem_StateManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part088.c - 10 个函数
// 函数: void function_8a4a05(void)
void function_8a4a05(void)
{
  return;
}
uint64_t function_8a4a20(uint64_t *param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  int32_t *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = 0;
  uVar2 = SystemCore_Manager(*param_1,astack_special_x_20);
  uVar1 = astack_special_x_20[0];
  if ((int)uVar2 == 0) {
    uVar4 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
    uVar8 = astack_special_x_20[0] & 1;
    uVar6 = astack_special_x_20[0] >> 1;
    if (((int)uVar6 <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar4) - uVar4)) ||
       (uVar2 = function_84c470(param_2,uVar6), (int)uVar2 == 0)) {
      iVar7 = (int)param_2[1];
      if (iVar7 < (int)uVar6) {
        puVar5 = (int32_t *)(*param_2 + (int64_t)iVar7 * 4);
        if (0 < (int)(uVar6 - iVar7)) {
          uVar3 = (uint64_t)(uVar6 - iVar7);
          do {
            if (puVar5 != (int32_t *)0x0) {
              *puVar5 = 0;
            }
            puVar5 = puVar5 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      *(uint *)(param_2 + 1) = uVar6;
      astack_special_x_8[0] = 0;
      iVar7 = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = UISystemEventHandler(param_1,astack_special_x_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = SystemThreadProcessor(*param_1,*param_2 + (int64_t)iVar7 * 4,4);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = SystemCore_Initializer(param_1,astack_special_x_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar7 = iVar7 + 1;
          astack_special_x_8[0] = astack_special_x_8[0] & -uVar8;
        } while (iVar7 < (int)uVar6);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}
uint64_t function_8a4a4e(void)
{
  uint in_EAX;
  uint64_t uVar1;
  int32_t *puVar2;
  uint unaff_EBX;
  uint uVar3;
  uint64_t *unaff_RSI;
  int iVar4;
  int64_t *unaff_R15;
  uint local_buffer_68;
  uVar3 = local_buffer_68 >> 1;
  if (((int)uVar3 <= (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) ||
     (uVar1 = function_84c470(), (int)uVar1 == 0)) {
    iVar4 = (int)unaff_R15[1];
    if (iVar4 < (int)uVar3) {
      puVar2 = (int32_t *)(*unaff_R15 + (int64_t)iVar4 * 4);
      if (0 < (int)(uVar3 - iVar4)) {
        uVar1 = (uint64_t)(uVar3 - iVar4);
        do {
          if (puVar2 != (int32_t *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    *(uint *)(unaff_R15 + 1) = uVar3;
    uVar1 = (uint64_t)unaff_EBX;
    if (unaff_EBX == 0) {
      iVar4 = 0;
      if (local_buffer_68 >> 1 != 0) {
        do {
          uVar1 = UISystemEventHandler();
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
            uVar1 = SystemThreadProcessor(*unaff_RSI,*unaff_R15 + (int64_t)iVar4 * 4,4);
          }
          else {
            uVar1 = 0x1c;
          }
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = SystemCore_Initializer();
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar3);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t function_8a4ac1(void)
{
  uint64_t uVar1;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  uint unaff_R14D;
  int64_t *unaff_R15;
  uint local_buffer_50;
  local_buffer_50 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar1 = UISystemEventHandler();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        uVar1 = SystemThreadProcessor(*unaff_RSI,*unaff_R15 + (int64_t)(int)unaff_EBX * 4,4);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = SystemCore_Initializer();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      local_buffer_50 = local_buffer_50 & unaff_R14D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}
// 函数: void function_8a4b34(void)
void function_8a4b34(void)
{
  return;
}
// 函数: void function_8a4b3e(void)
void function_8a4b3e(void)
{
  return;
}
uint64_t function_8a4b50(uint64_t *param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = 0;
  uVar2 = SystemCore_Manager(*param_1,astack_special_x_20);
  uVar1 = astack_special_x_20[0];
  if ((int)uVar2 == 0) {
    uVar3 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
    uVar6 = astack_special_x_20[0] & 1;
    uVar4 = astack_special_x_20[0] >> 1;
    if (((int)uVar4 <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar3) - uVar3)) ||
       (uVar2 = function_849120(param_2,uVar4), (int)uVar2 == 0)) {
      iVar5 = (int)param_2[1];
      if (iVar5 < (int)uVar4) {
        if (0 < (int)(uVar4 - iVar5)) {
// WARNING: Subroutine does not return
          memset(*param_2 + (int64_t)iVar5 * 0x14,0,(uint64_t)(uVar4 - iVar5) * 0x14);
        }
      }
      *(uint *)(param_2 + 1) = uVar4;
      astack_special_x_8[0] = 0;
      iVar5 = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = UISystemEventHandler(param_1,astack_special_x_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = function_898fc0(*param_1,*param_2 + (int64_t)iVar5 * 0x14);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = SystemCore_Initializer(param_1,astack_special_x_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar5 = iVar5 + 1;
          astack_special_x_8[0] = astack_special_x_8[0] & -uVar6;
        } while (iVar5 < (int)uVar4);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}
uint64_t function_8a4b7e(void)
{
  uint in_EAX;
  uint64_t uVar1;
  uint unaff_EBX;
  uint uVar2;
  uint64_t *unaff_RSI;
  int iVar3;
  int64_t *unaff_R15;
  uint local_buffer_68;
  uVar2 = local_buffer_68 >> 1;
  if (((int)uVar2 <= (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) ||
     (uVar1 = function_849120(), (int)uVar1 == 0)) {
    iVar3 = (int)unaff_R15[1];
    if (iVar3 < (int)uVar2) {
      if (0 < (int)(uVar2 - iVar3)) {
// WARNING: Subroutine does not return
        memset(*unaff_R15 + (int64_t)iVar3 * 0x14,0,(uint64_t)(uVar2 - iVar3) * 0x14);
      }
    }
    *(uint *)(unaff_R15 + 1) = uVar2;
    uVar1 = (uint64_t)unaff_EBX;
    if (unaff_EBX == 0) {
      iVar3 = 0;
      if (local_buffer_68 >> 1 != 0) {
        do {
          uVar1 = UISystemEventHandler();
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
            uVar1 = function_898fc0(*unaff_RSI,*unaff_R15 + (int64_t)iVar3 * 0x14);
          }
          else {
            uVar1 = 0x1c;
          }
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = SystemCore_Initializer();
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t function_8a4be8(void)
{
  uint64_t uVar1;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  uint unaff_R14D;
  int64_t *unaff_R15;
  uint local_buffer_50;
  local_buffer_50 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar1 = UISystemEventHandler();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        uVar1 = function_898fc0(*unaff_RSI,*unaff_R15 + (int64_t)(int)unaff_EBX * 0x14);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = SystemCore_Initializer();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      local_buffer_50 = local_buffer_50 & unaff_R14D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}
// 函数: void function_8a4c62(void)
void function_8a4c62(void)
{
  return;
}
// 函数: void function_8a4c6c(void)
void function_8a4c6c(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_8a4c80(uint64_t *param_1,int64_t *param_2,uint64_t param_3)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int64_t lVar9;
  int32_t *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  puVar8 = (int32_t *)0x0;
  astack_special_x_20[0] = 0;
  puVar7 = (int32_t *)SystemCore_Manager(*param_1,astack_special_x_20);
  uVar14 = astack_special_x_20[0];
  if ((int)puVar7 != 0) {
    return puVar7;
  }
  uVar11 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
  uVar13 = astack_special_x_20[0] >> 1;
  uVar12 = astack_special_x_20[0] & 1;
  if ((int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar11) - uVar11) < (int)uVar13) {
    if ((int)uVar13 < (int)param_2[1]) {
      puVar7 = (int32_t *)0x1c;
      goto LAB_1808a4de5;
    }
    puVar7 = puVar8;
    if (astack_special_x_20[0] >> 1 != 0) {
      if ((0x3ffffffe < uVar13 * 0x14 - 1) ||
         (puVar7 = (int32_t *)
                   SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar13 * 0x14,
                                 &processed_var_8432_ptr,0xf4,0,0,1), puVar7 == (int32_t *)0x0)) {
        puVar7 = (int32_t *)0x26;
        goto LAB_1808a4de5;
      }
      iVar2 = (int)param_2[1];
      lVar9 = (int64_t)iVar2;
      if ((iVar2 != 0) && (lVar3 = *param_2, 0 < iVar2)) {
        puVar10 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar10 = *puVar1;
          puVar10[1] = uVar4;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          puVar10[4] = *(int32_t *)((lVar3 - (int64_t)puVar7) + -4 + (int64_t)(puVar10 + 5));
          lVar9 = lVar9 + -1;
          puVar10 = puVar10 + 5;
        } while (lVar9 != 0);
      }
    }
    if ((0 < *(int *)((int64_t)param_2 + 0xc)) && (*param_2 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_2,&processed_var_8432_ptr,0x100,1);
    }
    *param_2 = (int64_t)puVar7;
    *(uint *)((int64_t)param_2 + 0xc) = uVar13;
  }
  iVar2 = (int)param_2[1];
  if (iVar2 < (int)uVar13) {
    if (0 < (int)(uVar13 - iVar2)) {
// WARNING: Subroutine does not return
      memset(*param_2 + (int64_t)iVar2 * 0x14,0,(uint64_t)(uVar13 - iVar2) * 0x14);
    }
  }
  *(uint *)(param_2 + 1) = uVar13;
  puVar7 = puVar8;
LAB_1808a4de5:
  if ((int)puVar7 == 0) {
    astack_special_x_8[0] = 0;
    puVar7 = puVar8;
    if (uVar14 >> 1 != 0) {
      do {
        puVar8 = (int32_t *)UISystemEventHandler(param_1,puVar8);
        if ((int)puVar8 != 0) {
          return puVar8;
        }
        puVar8 = (int32_t *)function_8a7ce0(param_1,param_2,puVar7,param_3);
        if ((int)puVar8 != 0) {
          return puVar8;
        }
        puVar8 = (int32_t *)SystemCore_Initializer(param_1,astack_special_x_8);
        if ((int)puVar8 != 0) {
          return puVar8;
        }
        uVar14 = (int)puVar7 + 1;
        puVar7 = (int32_t *)(uint64_t)uVar14;
        astack_special_x_8[0] = astack_special_x_8[0] & -uVar12;
        puVar8 = (int32_t *)(uint64_t)astack_special_x_8[0];
      } while ((int)uVar14 < (int)uVar13);
    }
    puVar7 = (int32_t *)0x0;
  }
  return puVar7;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8a4cb4(int32_t param_1)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint in_EAX;
  int32_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int32_t *unaff_RBX;
  uint uVar12;
  uint uVar13;
  int64_t *unaff_R14;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  uint local_buffer_70;
  uint local_buffer_88;
  uVar12 = local_buffer_88 >> 1;
  uVar13 = (uint)unaff_RBX;
  if ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < (int)uVar12) {
    if ((int)uVar12 < (int)unaff_R14[1]) {
      uVar9 = (uint64_t)(uVar13 + 0x1c);
      goto LAB_1808a4de5;
    }
    puVar7 = unaff_RBX;
    if (local_buffer_88 >> 1 != 0) {
      if ((0x3ffffffe < uVar12 * 0x14 - 1) ||
         (puVar7 = (int32_t *)
                   SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar12 * 0x14,
                                 &processed_var_8432_ptr,0xf4), param_1 = extraout_XMM0_Da,
         puVar7 == (int32_t *)0x0)) {
        uVar9 = 0x26;
        goto LAB_1808a4de5;
      }
      iVar2 = (int)unaff_R14[1];
      lVar10 = (int64_t)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_R14, 0 < iVar2)) {
        puVar11 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar11);
          param_1 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar11 = param_1;
          puVar11[1] = uVar4;
          puVar11[2] = uVar5;
          puVar11[3] = uVar6;
          puVar11[4] = *(int32_t *)((lVar3 - (int64_t)puVar7) + -4 + (int64_t)(puVar11 + 5));
          lVar10 = lVar10 + -1;
          puVar11 = puVar11 + 5;
        } while (lVar10 != 0);
      }
    }
    if (((int)uVar13 < *(int *)((int64_t)unaff_R14 + 0xc)) && (*unaff_R14 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_R14 = (int64_t)puVar7;
    *(uint *)((int64_t)unaff_R14 + 0xc) = uVar12;
  }
  iVar2 = (int)unaff_R14[1];
  if (iVar2 < (int)uVar12) {
    if (0 < (int)(uVar12 - iVar2)) {
// WARNING: Subroutine does not return
      memset(*unaff_R14 + (int64_t)iVar2 * 0x14,0,(uint64_t)(uVar12 - iVar2) * 0x14);
    }
  }
  *(uint *)(unaff_R14 + 1) = uVar12;
  uVar9 = (uint64_t)unaff_RBX & 0xffffffff;
LAB_1808a4de5:
  if ((int)uVar9 == 0) {
    uVar9 = (uint64_t)unaff_RBX & 0xffffffff;
    local_buffer_70 = uVar13;
    if (local_buffer_88 >> 1 != 0) {
      do {
        uVar8 = UISystemEventHandler(param_1,(uint64_t)unaff_RBX & 0xffffffff);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = function_8a7ce0();
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar8 = SystemCore_Initializer(extraout_XMM0_Da_00,&local_buffer_00000070);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        uVar13 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar13;
        local_buffer_70 = local_buffer_70 & -(local_buffer_88 & 1);
        unaff_RBX = (int32_t *)(uint64_t)local_buffer_70;
        param_1 = extraout_XMM0_Da_01;
      } while ((int)uVar13 < (int)uVar12);
    }
    uVar9 = 0;
  }
  return uVar9;
}
// 函数: void function_8a4e4d(void)
void function_8a4e4d(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001808a4de9)
// WARNING: Removing unreachable block (ram,0x0001808a4df5)
// WARNING: Removing unreachable block (ram,0x0001808a4e03)
// WARNING: Removing unreachable block (ram,0x0001808a4e18)
// WARNING: Removing unreachable block (ram,0x0001808a4e29)
// WARNING: Removing unreachable block (ram,0x0001808a4e39)
uint64_t function_8a4e59(void)
{
  return 0x26;
}
uint64_t function_8a4e60(uint64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = 0;
  uVar4 = SystemCore_Manager(*param_1,astack_special_x_20);
  uVar3 = astack_special_x_20[0];
  if ((int)uVar4 == 0) {
    uVar7 = astack_special_x_20[0] >> 1;
    uVar5 = astack_special_x_20[0] & 1;
    uVar4 = function_8af340(param_2,uVar7);
    if ((int)uVar4 == 0) {
      iVar6 = 0;
      astack_special_x_8[0] = 0;
      if (uVar3 >> 1 != 0) {
        do {
          uVar4 = UISystemEventHandler(param_1,uVar4 & 0xffffffff);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = *param_1;
            lVar1 = *param_2 + (int64_t)iVar6 * 0x18;
            uVar4 = SystemThreadProcessor(uVar2,lVar1,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemDataManager(uVar2,lVar1 + 4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemDataManager(uVar2,lVar1 + 8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar2,lVar1 + 0x14,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            Function_96046a76(lVar1);
            uVar4 = 0;
          }
          else {
            uVar4 = 0x1c;
          }
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = SystemCore_Initializer(param_1,astack_special_x_8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          iVar6 = iVar6 + 1;
          astack_special_x_8[0] = astack_special_x_8[0] & -uVar5;
          uVar4 = (uint64_t)astack_special_x_8[0];
        } while (iVar6 < (int)uVar7);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}
uint64_t function_8a4e8b(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint local_buffer_68;
  uVar2 = function_8af340();
  if ((int)uVar2 == 0) {
    iVar4 = 0;
    if (local_buffer_68 >> 1 != 0) {
      do {
        uVar2 = UISystemEventHandler();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar2 = *unaff_R14;
          lVar1 = *unaff_R12 + (int64_t)iVar4 * 0x18;
          uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemDataManager(uVar2,lVar1 + 4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemDataManager(uVar2,lVar1 + 8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar2 = SystemThreadProcessor(uVar2,lVar1 + 0x14,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          Function_96046a76(lVar1);
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemCore_Initializer();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(local_buffer_68 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_8a4eb5(void)
{
  int64_t lVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBP;
  int iVar4;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint local_buffer_50;
  iVar4 = 0;
  local_buffer_50 = in_EAX;
  if (unaff_R15D != 0) {
    do {
      uVar2 = UISystemEventHandler();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar2 = *unaff_R14;
        lVar1 = *unaff_R12 + (int64_t)iVar4 * 0x18;
        uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemDataManager(uVar2,lVar1 + 4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemDataManager(uVar2,lVar1 + 8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = SystemThreadProcessor(uVar2,lVar1 + 0x14,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        Function_96046a76(lVar1);
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_Initializer();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      local_buffer_50 = local_buffer_50 & -unaff_EBP;
    } while (iVar4 < unaff_R15D);
  }
  return 0;
}
// 函数: void function_8a4f98(void)
void function_8a4f98(void)
{
  return;
}
// 函数: void function_8a4fa2(void)
void function_8a4fa2(void)
{
  return;
}
uint64_t function_8a4fb0(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint uVar4;
  uint astack_special_x_8 [2];
  uint astack_special_x_10 [2];
  uint astack_special_x_18 [2];
  uint local_var_38;
  uint stack_array_34 [3];
  uVar4 = *(int *)(param_2 + 1) * 2 | param_3;
  if (uVar4 < 0x8000) {
    astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)uVar4);
    puVar2 = astack_special_x_18;
    uVar3 = 2;
  }
  else {
    puVar2 = astack_special_x_10;
    uVar3 = 4;
    astack_special_x_10[0] = (uVar4 & 0xffffc000 | 0x4000) * 2 | uVar4 & 0x7fff;
  }
  uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar2,uVar3);
  if ((int)uVar3 == 0) {
    astack_special_x_8[0] = 0;
    for (puVar2 = (uint *)*param_2;
        ((uint *)*param_2 <= puVar2 &&
        (puVar2 < (uint *)*param_2 + (int64_t)*(int *)(param_2 + 1) * 6)); puVar2 = puVar2 + 6) {
      uVar3 = UltraHighFreq_ResourceLoader1(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      astack_special_x_18[0] = *puVar2;
      lVar1 = *param_1;
      uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),astack_special_x_18,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      astack_special_x_10[0] = puVar2[1];
      uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),astack_special_x_10,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_var_38 = puVar2[2];
      uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),&local_var_38,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      stack_array_34[0] = puVar2[5];
      uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),stack_array_34,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = UISystem_Controller(param_1,astack_special_x_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      astack_special_x_8[0] = astack_special_x_8[0] & -param_3;
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t function_8a5024(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *unaff_RDI;
  uint64_t in_R9;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t stack_special_x_24;
  uint local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_70;
  local_buffer_60 = 0;
  puVar3 = (int32_t *)*unaff_R14;
  while( true ) {
    if ((puVar3 < (int32_t *)*unaff_R14) ||
       ((int32_t *)*unaff_R14 + (int64_t)*(int *)(unaff_R14 + 1) * 6 <= puVar3)) {
      return 0;
    }
    uVar2 = UltraHighFreq_ResourceLoader1();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
      return 0x1c;
    }
    local_buffer_70 = *puVar3;
    lVar1 = *unaff_RDI;
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&local_buffer_00000070,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_68 = puVar3[1];
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&local_buffer_00000068,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&local_buffer_00000020,4,in_R9,puVar3[2]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    stack_special_x_24 = puVar3[5];
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))(*(uint64_t **)(lVar1 + 8),&stack_special_x_24,4);
    if ((int)uVar2 != 0) break;
    uVar2 = UISystem_Controller(extraout_XMM0_Da,&local_buffer_00000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_60 = local_buffer_60 & -unaff_R15D;
    puVar3 = puVar3 + 6;
  }
  return uVar2;
}
// 函数: void function_8a5144(void)
void function_8a5144(void)
{
  return;
}
uint64_t function_8a5150(uint64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = 0;
  uVar3 = SystemCore_Manager(*param_1,astack_special_x_20);
  uVar2 = astack_special_x_20[0];
  if ((int)uVar3 == 0) {
    uVar7 = astack_special_x_20[0] >> 1;
    uVar5 = astack_special_x_20[0] & 1;
    uVar3 = function_8af3c0(param_2,uVar7);
    if ((int)uVar3 == 0) {
      iVar6 = 0;
      astack_special_x_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = UISystemEventHandler(param_1,astack_special_x_8[0]);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = *param_1;
            lVar1 = *param_2 + (int64_t)iVar6 * 0x14;
            uVar4 = SystemThreadProcessor(uVar3,lVar1,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 4,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 6,2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar4 = SystemThreadProcessor(uVar3,lVar1 + 8,8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar3 = SystemDataManager(uVar3,lVar1 + 0x10);
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemCore_Initializer(param_1,astack_special_x_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar6 = iVar6 + 1;
          astack_special_x_8[0] = astack_special_x_8[0] & -uVar5;
        } while (iVar6 < (int)uVar7);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
uint64_t function_8a517b(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint local_buffer_68;
  uVar2 = function_8af3c0();
  if ((int)uVar2 == 0) {
    if (local_buffer_68 >> 1 != 0) {
      do {
        uVar2 = UISystemEventHandler();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar2 = *unaff_R14;
          lVar1 = *unaff_R12 + (int64_t)unaff_EBX * 0x14;
          uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 4,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 6,2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemThreadProcessor(uVar2,lVar1 + 8,8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar2 = SystemDataManager(uVar2,lVar1 + 0x10);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemCore_Initializer();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < (int)(local_buffer_68 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_8a51a5(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint local_buffer_50;
  local_buffer_50 = unaff_EBX;
  if (unaff_R15D != 0) {
    do {
      uVar2 = UISystemEventHandler();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar2 = *unaff_R14;
        lVar1 = *unaff_R12 + (int64_t)(int)unaff_EBX * 0x14;
        uVar3 = SystemThreadProcessor(uVar2,lVar1,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 4,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 6,2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = SystemThreadProcessor(uVar2,lVar1 + 8,8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = SystemDataManager(uVar2,lVar1 + 0x10);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_Initializer();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      unaff_EBX = unaff_EBX + 1;
      local_buffer_50 = local_buffer_50 & -unaff_EBP;
    } while ((int)unaff_EBX < unaff_R15D);
  }
  return 0;
}
// 函数: void function_8a5288(void)
void function_8a5288(void)
{
  return;
}