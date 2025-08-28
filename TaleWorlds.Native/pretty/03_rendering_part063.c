// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#define SystemInitializer System_Initializer2  // 系统初始化器
// 03_rendering_part063.c - 10 个函数
// 函数: void DataStructure_9fab0(int64_t param_1,int32_t param_2,int64_t param_3,uint param_4,
void DataStructure_9fab0(int64_t param_1,int32_t param_2,int64_t param_3,uint param_4,
                  uint64_t param_5,int32_t param_6)
{
  int64_t *plVar1;
  code *pcVar2;
  UltraHighFreq_DatabaseHandler1(param_1,param_3,param_5,param_6);
  if ((param_4 & 1) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x38);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 4) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x1f0);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 2) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x210);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 0x10) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x80);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 0x20) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x238);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  return;
}
// 函数: void DataStructure_9fb10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)
void DataStructure_9fb10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)
{
  uint64_t uVar1;
  uint64_t astack_special_x_18 [2];
  uVar1 = param_2 & 0xffffffff;
  astack_special_x_18[0] = param_3;
  if ((param_4 & 1) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 200))
              (*(int64_t **)(param_1 + 0x8400),param_2,1,astack_special_x_18);
  }
  if ((param_4 & 2) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1f8))
              (*(int64_t **)(param_1 + 0x8400),uVar1,1,astack_special_x_18);
  }
  if ((param_4 & 4) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1d8))
              (*(int64_t **)(param_1 + 0x8400),uVar1,1,astack_special_x_18);
  }
  if ((param_4 & 8) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xf8))
              (*(int64_t **)(param_1 + 0x8400),uVar1,1,astack_special_x_18);
  }
  if ((param_4 & 0x10) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x40))
              (*(int64_t **)(param_1 + 0x8400),uVar1,1,astack_special_x_18);
  }
  if ((param_4 & 0x20) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x218))
              (*(int64_t **)(param_1 + 0x8400),uVar1,1,astack_special_x_18);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UltraHighFreq_DatabaseHandler1(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
void UltraHighFreq_DatabaseHandler1(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
{
  int iVar1;
  uint64_t stack_array_18 [2];
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x10),0,4,0,
                     stack_array_18);
  if (iVar1 < 0) {
    SystemCore_Loader(iVar1,&ui_system_data_1768_ptr);
  }
// WARNING: Subroutine does not return
  memcpy(stack_array_18[0],param_3,param_4);
}
uint64_t * DataStructure_9fcf0(uint64_t *param_1,int64_t param_2)
{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int8_t astack_special_x_8 [8];
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_18029fd67;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18029fd67:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_18029fdb7:
      return puVar9 + 0x27;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(int64_t *)(param_2 + 8) - (int64_t)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(int64_t)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18029fdb7;
    }
  }
  plVar4 = (int64_t *)DataStructure_9fdf0(param_1,astack_special_x_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x138);
}
uint64_t *
DataStructure_9fd0c(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)
{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  int64_t lVar8;
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (int64_t)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_18029fd67;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18029fd67:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18029fdb7:
      return param_4 + 0x27;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18029fdb7;
    }
  }
  plVar4 = (int64_t *)DataStructure_9fdf0();
  return (uint64_t *)(*plVar4 + 0x138);
}
int64_t DataStructure_9fd7a(void)
{
  byte bVar1;
  byte *pbVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t in_R9;
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_18029fdb7:
      return in_R9 + 0x138;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18029fdb7;
    }
  }
  plVar3 = (int64_t *)DataStructure_9fdf0();
  return *plVar3 + 0x138;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
DataStructure_9fdf0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)
{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  byte *pbVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  plVar5 = (int64_t *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (int64_t *)(plVar5[5] - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ff14;
      }
LAB_18029fef7:
      uVar9 = (uint64_t)plVar8 & 0xffffffffffffff00;
LAB_18029fefa:
      if (plVar5 != (int64_t *)0x0) {
        DataStructure_a00a0(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ff14;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (int64_t *)(*(int64_t *)(param_5 + 8) - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_18029fef7;
          uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18029fefa;
        }
      }
    }
  }
LAB_18029ff14:
  bVar2 = true;
  plVar5 = (int64_t *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (int64_t *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18029ff32:
      plVar5 = (int64_t *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18029ff32;
      plVar5 = (int64_t *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (int64_t *)param_1[1]) {
      plVar5 = (int64_t *)SystemFunction_00018066b9a0(plVar8);
      goto LAB_18029ff52;
    }
  }
  else {
LAB_18029ff52:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1802a0071:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1802a0071;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18029ffc7:
      uVar10 = 1;
      goto LAB_1802a0010;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ffc7;
    }
  }
  uVar10 = 0;
LAB_1802a0010:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x158,(char)param_1[5]);
  GenericFunction_180068ff0(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0x138) = 0;
  *(uint64_t *)(lVar7 + 0x140) = 0;
  *(uint64_t *)(lVar7 + 0x148) = 0;
  *(uint64_t *)(lVar7 + 0x150) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar7,plVar8,param_1,uVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_001a0(int64_t param_1)
void RenderingSystem_001a0(int64_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar4;
  uint64_t uVar3;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = 0;
    uVar4 = uVar3;
    if ('\0' < *(char *)(param_1 + 0x20)) {
      do {
        lVar1 = *(int64_t *)(param_1 + 0x18) + uVar4;
        if (*(char *)(lVar1 + 0xa1) != '\0') {
          if (*(int64_t *)(lVar1 + 0xa8) != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *(uint64_t *)(lVar1 + 0xa8) = 0;
        }
        *(uint64_t *)(lVar1 + 0xf0) = 0;
        DataTransformer0();
        DataTransformer0();
        uVar2 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar2;
        uVar4 = uVar4 + 0x100;
      } while ((int)uVar2 < (int)*(char *)(param_1 + 0x20));
      lVar1 = *(int64_t *)(param_1 + 0x18);
    }
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int8_t *)(param_1 + 0x20) = 0;
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_00290(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void RenderingSystem_00290(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  uint *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t stack_array_1a8 [32];
  int iStack_188;
  uint64_t local_var_180;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int32_t local_var_138;
  int8_t local_var_134;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int8_t local_var_e4;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
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
  uint64_t local_var_70;
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  iVar11 = 0;
  local_var_128 = 0x3f800000;
  local_var_124 = 0;
  local_var_120 = 0;
  local_var_11c = 0;
  local_var_118 = 0;
  local_var_114 = 0x3f800000;
  local_var_110 = 0;
  local_var_10c = 0;
  local_var_108 = 0;
  local_var_104 = 0;
  local_var_100 = 0x3f800000;
  local_var_fc = 0;
  local_var_f8 = 0;
  local_var_f4 = 0;
  local_var_f0 = 0;
  local_var_ec = 0x3f800000;
  local_var_e4 = 0;
  local_var_180 = param_3;
  local_var_e8 = param_4;
  if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar12 = 0;
    do {
      plVar5 = *(int64_t **)(lVar12 + *(int64_t *)(param_1 + 0x1a8));
      (**(code **)(*plVar5 + 0x168))(plVar5,param_2,param_3,&local_var_128);
      lVar12 = lVar12 + 8;
      iVar11 = iVar11 + 1;
    } while ((uint64_t)(int64_t)iVar11 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3));
  }
  local_var_178 = 0x3f800000;
  local_var_174 = 0;
  local_var_170 = 0;
  local_var_16c = 0;
  local_var_168 = 0;
  local_var_164 = 0x3f800000;
  local_var_160 = 0;
  local_var_15c = 0;
  local_var_158 = 0;
  local_var_154 = 0;
  local_var_150 = 0x3f800000;
  local_var_14c = 0;
  local_var_148 = 0;
  local_var_140 = 0x3f80000000000000;
  local_var_134 = 0;
  iStack_188 = 0;
  local_var_138 = param_4;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar12 = 0;
    do {
      uVar8 = local_var_180;
      lVar9 = *(int64_t *)(param_1 + 0x18);
      iVar11 = 0;
      if (*(int64_t *)(lVar12 + 0xb8 + lVar9) - *(int64_t *)(lVar12 + 0xb0 + lVar9) >> 3 != 0) {
        lVar10 = (int64_t)iStack_188 * 0x100;
        lVar13 = 0;
        do {
          do {
            LOCK();
            puVar1 = (uint *)(lVar10 + lVar9);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 | 1;
            UNLOCK();
          } while ((uVar4 & 1) != 0);
          puVar2 = (int32_t *)(lVar10 + 4 + lVar9);
          local_var_d8 = *puVar2;
          local_var_d4 = puVar2[1];
          local_var_d0 = puVar2[2];
          local_var_cc = puVar2[3];
          puVar3 = (uint64_t *)(lVar10 + 0x14 + lVar9);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          *(int32_t *)(lVar10 + lVar9) = 0;
          local_var_c8 = uVar6;
          local_var_c0 = uVar7;
          local_var_88 = local_var_d8;
          local_var_84 = local_var_d4;
          local_var_80 = local_var_d0;
          local_var_7c = local_var_cc;
          local_var_78 = uVar6;
          local_var_70 = uVar7;
          SystemSecurityManager(&local_var_b8,&local_var_d8);
          local_var_178 = local_var_b8;
          local_var_174 = local_var_b4;
          local_var_170 = local_var_b0;
          local_var_16c = local_var_ac;
          local_var_168 = local_var_a8;
          local_var_164 = local_var_a4;
          local_var_160 = local_var_a0;
          local_var_15c = local_var_9c;
          local_var_158 = local_var_98;
          local_var_154 = local_var_94;
          local_var_150 = local_var_90;
          local_var_14c = local_var_8c;
          plVar5 = *(int64_t **)
                    (lVar13 + *(int64_t *)(lVar12 + 0xb0 + *(int64_t *)(param_1 + 0x18)));
          local_var_148 = uVar6;
          local_var_140 = uVar7;
          (**(code **)(*plVar5 + 0x168))(plVar5,param_2,uVar8,&local_var_178);
          lVar9 = *(int64_t *)(param_1 + 0x18);
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 8;
        } while ((uint64_t)(int64_t)iVar11 <
                 (uint64_t)
                 (*(int64_t *)(lVar12 + 0xb8 + lVar9) - *(int64_t *)(lVar12 + 0xb0 + lVar9) >> 3))
        ;
      }
      iStack_188 = iStack_188 + 1;
      lVar12 = lVar12 + 0x100;
    } while (iStack_188 < *(char *)(param_1 + 0x20));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_1a8);
}
// 函数: void RenderingSystem_003aa(void)
void RenderingSystem_003aa(void)
{
  uint *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t *unaff_RBP;
  int64_t lVar14;
  int64_t unaff_RDI;
  int iVar15;
  int unaff_R14D;
  int64_t lVar16;
  int iStackX_20;
  uint64_t local_var_28;
  int32_t local_var_30;
  int32_t local_buffer_34;
  int32_t local_var_38;
  int32_t local_buffer_3c;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  lVar14 = 0;
  do {
    lVar12 = *(int64_t *)(unaff_RDI + 0x18);
    iVar15 = 0;
    if (*(int64_t *)(lVar14 + 0xb8 + lVar12) - *(int64_t *)(lVar14 + 0xb0 + lVar12) >> 3 != 0) {
      lVar13 = (int64_t)unaff_R14D * 0x100;
      lVar16 = 0;
      do {
        do {
          LOCK();
          puVar1 = (uint *)(lVar13 + lVar12);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        } while ((uVar4 & 1) != 0);
        puVar2 = (int32_t *)(lVar13 + 4 + lVar12);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (uint64_t *)(lVar13 + 0x14 + lVar12);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        unaff_RBP[8] = uVar6;
        unaff_RBP[9] = uVar7;
        unaff_RBP[10] = uVar8;
        unaff_RBP[0xb] = uVar9;
        *(uint64_t *)(unaff_RBP + 0xc) = uVar10;
        *(uint64_t *)(unaff_RBP + 0xe) = uVar11;
        *(int32_t *)(lVar13 + lVar12) = 0;
        unaff_RBP[-0xc] = uVar6;
        unaff_RBP[-0xb] = uVar7;
        unaff_RBP[-10] = uVar8;
        unaff_RBP[-9] = uVar9;
        *(uint64_t *)(unaff_RBP + -8) = uVar10;
        *(uint64_t *)(unaff_RBP + -6) = uVar11;
        SystemSecurityManager(unaff_RBP + -4,unaff_RBP + -0xc);
        local_var_30 = unaff_RBP[-4];
        local_buffer_34 = unaff_RBP[-3];
        local_var_38 = unaff_RBP[-2];
        local_buffer_3c = unaff_RBP[-1];
        local_var_40 = *unaff_RBP;
        local_buffer_44 = unaff_RBP[1];
        local_var_48 = unaff_RBP[2];
        local_buffer_4c = unaff_RBP[3];
        local_buffer_50 = unaff_RBP[4];
        local_buffer_54 = unaff_RBP[5];
        local_buffer_58 = unaff_RBP[6];
        local_buffer_5c = unaff_RBP[7];
        plVar5 = *(int64_t **)
                  (lVar16 + *(int64_t *)(lVar14 + 0xb0 + *(int64_t *)(unaff_RDI + 0x18)));
        local_buffer_60 = uVar10;
        local_buffer_68 = uVar11;
        (**(code **)(*plVar5 + 0x168))
                  (plVar5,local_var_40,local_var_28,&local_buffer_00000030);
        lVar12 = *(int64_t *)(unaff_RDI + 0x18);
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + 8;
        unaff_R14D = iStackX_20;
      } while ((uint64_t)(int64_t)iVar15 <
               (uint64_t)
               (*(int64_t *)(lVar14 + 0xb8 + lVar12) - *(int64_t *)(lVar14 + 0xb0 + lVar12) >> 3))
      ;
    }
    unaff_R14D = unaff_R14D + 1;
    lVar14 = lVar14 + 0x100;
    iStackX_20 = unaff_R14D;
  } while (unaff_R14D < *(char *)(unaff_RDI + 0x20));
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void RenderingSystem_004ce(void)
void RenderingSystem_004ce(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x40) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void RenderingSystem_004f0(int64_t param_1,char param_2,int64_t *param_3)
void RenderingSystem_004f0(int64_t param_1,char param_2,int64_t *param_3)
{
  int64_t *plVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_2 * 0x100 + *(int64_t *)(param_1 + 0x18);
  plVar1 = *(int64_t **)(lVar5 + 0xb8);
  plVar4 = *(int64_t **)(lVar5 + 0xb0);
  if (plVar4 != plVar1) {
    do {
      if ((int64_t *)*plVar4 == param_3) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    if (plVar4 != plVar1) {
      (**(code **)(*param_3 + 0x1e0))(param_3,0);
      cVar2 = (**(code **)(*param_3 + 0xa0))(param_3);
      if (cVar2 != '\0') {
        for (puVar3 = *(uint64_t **)(lVar5 + 0xd0);
            (puVar3 != *(uint64_t **)(lVar5 + 0xd8) && ((int64_t *)*puVar3 != param_3));
            puVar3 = puVar3 + 1) {
        }
        GenericFunction_1800ba050();
      }
      GenericFunction_1800ba050(lVar5 + 0xb0,plVar4);
    }
  }
  return;
}
// 函数: void RenderingSystem_005b0(int64_t param_1)
void RenderingSystem_005b0(int64_t param_1)
{
  int64_t lVar1;
  if ((*(float *)(param_1 + 0x3c) < 0.0) ||
     (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c))) {
    param_1 = *(int64_t *)(param_1 + 0x28);
    if (param_1 == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      return;
    }
    if (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c)) {
      return;
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      return;
    }
    lVar1 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x28);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa8) & 1) == 0)) {
      SystemCore_FileSystem(lVar1,*(int64_t *)(lVar1 + 0x10) + 0x70,0xbf800000);
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      return;
    }
    lVar1 = *(int64_t *)(param_1 + 0x10);
  }
// WARNING: Subroutine does not return
  SystemEventProcessor(param_1,lVar1 + 0x70,0xbf800000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_00650(int64_t param_1,int64_t param_2)
void RenderingSystem_00650(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  if (*(int64_t *)(param_1 + 0x28) == param_2) {
    return;
  }
  lVar1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  if ((*(int *)(lVar1 + 0x48) < render_system_config_config) &&
     (SystemInitializer(&system_ptr_9678,param_2,(uint64_t)__tls_index,lVar1,0xfffffffffffffffe),
     render_system_config_config == -1)) {
    _Mtx_init_in_situ(0x180d49680,2);
    NetworkProtocol_fc820(GenericFunction_180941da0);
    SystemCore_StateController(&system_ptr_9678);
  }
  if (*(int64_t *)(param_1 + 0x28) == 0) {
    if (param_2 == 0) goto LAB_18030083c;
    lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x10) + 0x20);
    iVar2 = _Mtx_lock(0x180d49680);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    plVar8 = *(int64_t **)(lVar1 + 0x29f8);
    if (plVar8 < *(int64_t **)(lVar1 + 0x2a00)) {
      *(int64_t **)(lVar1 + 0x29f8) = plVar8 + 1;
      *plVar8 = param_1;
      goto LAB_180300827;
    }
    plVar6 = *(int64_t **)(lVar1 + 0x29f0);
    lVar4 = (int64_t)plVar8 - (int64_t)plVar6 >> 3;
    if (lVar4 == 0) {
      lVar4 = 1;
LAB_1803007a9:
      plVar5 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(lVar1 + 0x2a08));
      plVar8 = *(int64_t **)(lVar1 + 0x29f8);
      plVar6 = *(int64_t **)(lVar1 + 0x29f0);
    }
    else {
      lVar4 = lVar4 * 2;
      if (lVar4 != 0) goto LAB_1803007a9;
      plVar5 = (int64_t *)0x0;
    }
    if (plVar6 != plVar8) {
// WARNING: Subroutine does not return
      memmove(plVar5,plVar6,(int64_t)plVar8 - (int64_t)plVar6);
    }
    *plVar5 = param_1;
    if (*(int64_t *)(lVar1 + 0x29f0) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t **)(lVar1 + 0x29f0) = plVar5;
    *(int64_t **)(lVar1 + 0x29f8) = plVar5 + 1;
    *(int64_t **)(lVar1 + 0x2a00) = plVar5 + lVar4;
  }
  else {
    if (param_2 != 0) goto LAB_18030083c;
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20);
    iVar2 = _Mtx_lock(0x180d49680);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    lVar4 = *(int64_t *)(lVar1 + 0x29f0);
    uVar3 = 0;
    iVar2 = (int)(*(int64_t *)(lVar1 + 0x29f8) - lVar4 >> 3);
    if (0 < iVar2) {
      uVar7 = uVar3;
      do {
        if (*(int64_t *)(lVar4 + uVar3 * 8) == param_1) {
          *(uint64_t *)(lVar4 + (int64_t)(int)uVar7 * 8) =
               *(uint64_t *)(lVar4 + -8 + (int64_t)iVar2 * 8);
          *(int64_t *)(lVar1 + 0x29f8) = *(int64_t *)(lVar1 + 0x29f8) + -8;
          break;
        }
        uVar7 = (uint64_t)((int)uVar7 + 1);
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)iVar2);
    }
  }
LAB_180300827:
  iVar2 = _Mtx_unlock(0x180d49680);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
LAB_18030083c:
  *(int64_t *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    if (*(float *)(param_2 + 0x3c) < 0.0) {
      *(int32_t *)(param_2 + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x3c) + 1.1920929e-07;
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0x28) + 0xaa) = 1;
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
  }
  else {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  }
  return;
}
uint64_t RenderingSystem_008f0(int64_t param_1,int param_2)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = 0;
  iVar1 = (int)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3);
  uVar4 = uVar3;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1a8) + uVar3 * 8) + 0x98))();
      if (iVar2 == param_2) {
        uVar4 = (uint64_t)((int)uVar4 + 1);
      }
      uVar3 = uVar3 + 1;
    } while ((int64_t)uVar3 < (int64_t)iVar1);
  }
  return uVar4;
}
uint RenderingSystem_00926(void)
{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint unaff_EDI;
  int unaff_R14D;
  uVar2 = (uint64_t)unaff_EDI;
  do {
    iVar1 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RBP + 0x1a8) + uVar2 * 8) + 0x98))();
    if (iVar1 == unaff_R14D) {
      unaff_EDI = unaff_EDI + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int64_t)uVar2 < unaff_RSI);
  return unaff_EDI;
}
int32_t RenderingSystem_00958(void)
{
  int32_t unaff_EDI;
  return unaff_EDI;
}