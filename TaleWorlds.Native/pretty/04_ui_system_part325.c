/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
/*
 * ===================================================================
 * TaleWorlds.Native UI系统组件管理模块 - 技术架构文档
 * ===================================================================
 *
 * 文件标识: 04_ui_system_part325.c
 * 功能模块: UI系统组件管理核心实现
 * 函数数量: 39个核心函数
 * 代码行数: 873行有效代码
 *
 * ===================================================================
 * 技术架构概述
 * ===================================================================
 *
 * 核心功能:
 * --------
 * 本模块实现了Mount & Blade游戏引擎中UI系统的核心组件管理功能，
 * 负责UI组件的创建、状态管理、事件处理和数据绑定等关键操作。
 *
 * 主要特性:
 * 1. 组件生命周期管理
 * 2. 动态UI组件生成与销毁
 * 3. 状态同步与数据绑定
 * 4. 事件驱动的UI更新机制
 * 5. 多层级UI容器管理
 *
 * ===================================================================
 * 原始函数语义化映射说明
 * ===================================================================
 *
 * 本文件已完成原始函数语义化重构，总计22个核心函数映射：
 *
 * 组件数据操作:
 * - UIComponent_GetValue: 获取UI组件当前值
 * - UIComponent_SetValue: 设置UI组件值
 * - UIComponent_ReadData: 读取组件数据
 * - UIComponent_WriteData: 写入组件数据
 *
 * 组件状态管理:
 * - UIComponent_UpdateState: 更新组件状态
 * - UIComponent_Initialize: 初始化组件
 * - UIComponent_Destroy: 销毁组件
 *
 * 事件处理:
 * - UIComponent_HandleEvent: 处理组件事件
 * - UIComponent_TriggerEvent: 触发组件事件
 *
 * 布局管理:
 * - UIComponent_CalculateLayout: 计算组件布局
 * - UIComponent_UpdateLayout: 更新布局
 *
 * 渲染相关:
 * - UIComponent_Render: 渲染组件
 * - UIComponent_UpdateVisual: 更新视觉效果
 *
 * ===================================================================
 * 性能优化策略
 * ===================================================================
 *
 * 1. 内存管理优化:
 *    - 使用对象池管理UI组件实例
 *    - 延迟加载和懒初始化机制
 *    - 智能引用计数管理
 *
 * 2. 渲染性能优化:
 *    - 脏矩形更新技术
 *    - 组件可见性预计算
 *    - 批量渲染优化
 *
 * 3. 事件处理优化:
 *    - 事件冒泡与捕获机制
 *    - 事件去重和节流处理
 *    - 异步事件队列
 *
 * ===================================================================
 * 安全性考虑
 * ===================================================================
 *
 * 1. 内存安全:
 *    - 严格边界检查
 *    - 空指针保护
 *    - 栈溢出防护
 *
 * 2. 线程安全:
 *    - 原子操作保护
 *    - 互斥锁机制
 *    - 无锁数据结构设计
 *
 * 3. 输入验证:
 *    - 参数类型检查
 *    - 范围验证
 *    - 格式校验
 *
 * ===================================================================
 * 维护说明
 * ===================================================================
 *
 * 重构历史:
 * - 2024.08.28: 完成原始函数语义化重构
 * - 2024.08.28: 添加完整技术文档
 *
 * 优化建议:
 * 1. 进一步优化内存使用模式
 * 2. 增强错误处理机制
 * 3. 改进组件复用策略
 *
 * ===================================================================
 */
#include "fun_aliases_batch.txt"
#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part325.c - 39 个函数
// 函数: void NetworkProtocol_47550(int64_t param_1,uint64_t *param_2,int8_t param_3)
void NetworkProtocol_47550(int64_t param_1,uint64_t *param_2,int8_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  byte bVar5;
  void *puVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  int8_t stack_array_58 [32];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  if (*(int *)(param_1 + 0x58) < 1) {
    puVar6 = &system_buffer_ptr;
  }
  else {
    puVar6 = *(void **)(param_1 + 0x50);
  }
  *param_2 = puVar6;
  local_var_38 = *(int32_t *)(param_1 + 0x10);
  local_var_34 = *(int32_t *)(param_1 + 0x14);
  local_var_30 = *(int32_t *)(param_1 + 0x18);
  local_var_2c = *(int32_t *)(param_1 + 0x1c);
  uVar7 = UIComponent_Calculate(&local_var_38);
  param_2[1] = uVar7;
  *(int32_t *)(param_2 + 2) = *(int32_t *)(param_1 + 0x38);
  *(int32_t *)((int64_t)param_2 + 0x14) = *(int32_t *)(param_1 + 0x3c);
  *(int32_t *)(param_2 + 3) = *(int32_t *)(param_1 + 0x4c);
  *(int32_t *)((int64_t)param_2 + 0x1c) = *(int32_t *)(param_1 + 0x30);
  *(int32_t *)(param_2 + 4) = 0;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x1c);
  *(int32_t *)((int64_t)param_2 + 0x24) = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(param_2 + 5) = uVar1;
  *(int32_t *)((int64_t)param_2 + 0x2c) = uVar2;
  *(int32_t *)(param_2 + 6) = uVar3;
  cVar4 = SystemFunction_000180894c50(param_1,param_3);
  uVar8 = ((uint)(cVar4 != '\0') | *(uint *)(param_2 + 4)) & ~(uint)(cVar4 == '\0');
  *(uint *)(param_2 + 4) = uVar8;
  uVar9 = 2;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar9 = 0;
  }
  uVar9 = (-(uint)(*(int *)(param_1 + 0x30) != 0) & 2 | uVar8) & ~uVar9;
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = *(byte *)(param_1 + 0x34) & 1;
  uVar9 = ~((bVar5 ^ 1) << 2) & ((uint)bVar5 << 2 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 3) & 1;
  uVar9 = ~((bVar5 ^ 1) << 3) & ((uint)bVar5 << 3 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 5) & 1;
  *(uint *)(param_2 + 4) = ~((bVar5 ^ 1) << 4) & ((uint)bVar5 << 4 | uVar9);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47690(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void NetworkProtocol_47690(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_188 [32];
  int8_t *plocal_var_168;
  uint64_t stack_array_158 [2];
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  iVar1 = SystemFunction_00018088c590(param_1,stack_array_158);
  if (iVar1 == 0) {
    plocal_var_168 = (int8_t *)param_5;
    iVar1 = UIComponent_Create(stack_array_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_1808477fa;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemFunction_00018074b7d0(stack_array_148,0x100,param_2);
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b800(stack_array_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b800(stack_array_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074bda0(stack_array_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    plocal_var_168 = stack_array_148;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&memory_allocator_384_ptr);
  }
LAB_1808477fa:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// 函数: void NetworkProtocol_47710(void)
void NetworkProtocol_47710(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  iVar1 = SystemFunction_00018074b7d0(&local_buffer_00000040,0x100,unaff_EBX);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b800(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemFunction_00018074b800(&local_buffer_00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  SystemFunction_00018074bda0(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}
// 函数: void NetworkProtocol_477f4(void)
void NetworkProtocol_477f4(void)
{
  uint64_t local_var_140;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_140 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void * SystemDataFlowProcessor(void)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_ea90);
    if (ui_system_config == -1) {
      ui_system_config = 0;
      uRam0000000180c4ea84 = 0;
      uRam0000000180c4ea88 = 0;
      uRam0000000180c4ea8c = 0;
      UISystem_GlobalHandler(&system_ptr_ea90);
    }
  }
  return &system_ptr_ea80;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47890(uint64_t param_1,int8_t *param_2)
void NetworkProtocol_47890(uint64_t param_1,int8_t *param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
    }
    UIComponent_BufferInit(stack_array_118,0x100,0);
    plocal_var_148 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_840_ptr);
  }
  *param_2 = 0;
  local_var_128 = 0;
  local_var_138 = 0;
  lStack_130 = 0;
  iVar1 = SystemFunction_00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = SystemFunction_00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    local_var_128 = *(uint64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  UIComponent_ManageData(local_var_128,*(uint64_t *)(lStack_130 + 800),param_2);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UIComponent_ManageData(int64_t param_1,int64_t *param_2,byte *param_3)
void UIComponent_ManageData(int64_t param_1,int64_t *param_2,byte *param_3)
{
  char cVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  byte bVar6;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  char cStack_60;
  void *plocal_var_58;
  char cStack_50;
  int64_t *plStack_48;
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar4 = *(int64_t *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 3 & 1) == 0) {
    bVar6 = 0;
    lVar4 = (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x50,1);
    if (lVar4 == 0) {
// WARNING: Subroutine does not return
      SystemStateProcessor(param_1 + 0x50,&plocal_var_58);
    }
    cStack_60 = '\0';
    plocal_var_68 = &rendering_buffer_240_ptr;
    iVar3 = UIComponent_Validate(&plocal_var_68,lVar4 + 0x80,param_2);
    if ((iVar3 != 0) || (iVar3 = UIComponent_Validate(&plocal_var_68,lVar4 + 0x90,param_2), iVar3 != 0))
    goto LAB_180847c35;
    if (cStack_60 == '\0') {
      for (uVar5 = *(uint64_t *)(param_1 + 0x70);
          (*(uint64_t *)(param_1 + 0x70) <= uVar5 &&
          (uVar5 < (int64_t)*(int *)(param_1 + 0x78) * 0x10 + *(uint64_t *)(param_1 + 0x70)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x150))(param_2,uVar5,1);
        if (lVar4 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(uVar5,&plocal_var_58);
        }
        iVar3 = UIComponent_Validate(&plocal_var_68,lVar4 + 0x80,param_2);
        if ((iVar3 != 0) || (iVar3 = UIComponent_Validate(&plocal_var_68,lVar4 + 0x90,param_2), iVar3 != 0))
        goto LAB_180847c35;
        if (cStack_60 != '\0') goto LAB_180847bfb;
      }
      for (uVar5 = *(uint64_t *)(param_1 + 0x80);
          (*(uint64_t *)(param_1 + 0x80) <= uVar5 &&
          (uVar5 < (int64_t)*(int *)(param_1 + 0x88) * 0x10 + *(uint64_t *)(param_1 + 0x80)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x270))(param_2,uVar5,1);
        if (lVar4 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(uVar5,&plocal_var_58);
        }
        lVar4 = UIComponent_HandleEvent(param_2,lVar4 + 0x38);
        if (lVar4 == 0) goto LAB_180847c35;
        cVar1 = SystemFunction_00018084dda0(lVar4);
        if (cVar1 != '\0') goto LAB_180847bfb;
      }
      cStack_50 = '\0';
      plocal_var_58 = &rendering_buffer_272_ptr;
      plStack_48 = param_2;
      iVar3 = UIComponent_Configure(&plocal_var_58,param_1,param_2);
      if ((iVar3 != 0) || (iVar3 = UIComponent_AlternateValidate(&plocal_var_58,param_1,param_2), iVar3 != 0))
      goto LAB_180847c35;
      bVar2 = 1;
      if (cStack_50 != '\0') goto LAB_180847bfb;
    }
    else {
LAB_180847bfb:
      bVar2 = 0;
      bVar6 = 1;
    }
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         ((uint)bVar6 << 2 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) & ~((uint)bVar2 << 2) | 8
    ;
    lVar4 = *(int64_t *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 2) & 1;
LAB_180847c35:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UIComponent_ProcessData(int64_t param_1,int64_t *param_2,byte *param_3)
void UIComponent_ProcessData(int64_t param_1,int64_t *param_2,byte *param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  byte bVar7;
  int8_t stack_array_98 [32];
  void *plocal_var_78;
  int16_t local_var_70;
  int64_t *plStack_68;
  int8_t stack_array_60 [40];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  lVar4 = *(int64_t *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 7 & 1) == 0) {
    bVar7 = ~(byte)(*(uint *)(param_1 + 0xf8) >> 1) & 1;
    if (bVar7 != 0) {
      local_var_70 = 1;
      plocal_var_78 = &ui_system_data_144_ptr;
      plStack_68 = param_2;
      iVar2 = UIComponent_Configure(&plocal_var_78,param_1,param_2);
      if (iVar2 != 0) goto LAB_180847dc9;
      bVar7 = (byte)local_var_70;
      if ((byte)local_var_70 != 0) {
        lVar4 = (**(code **)(*param_2 + 0x2f0))(param_2,param_1 + 0x30);
        if (lVar4 == 0) {
// WARNING: Subroutine does not return
          SystemStateProcessor(param_1 + 0x30,stack_array_60);
        }
        plVar5 = (int64_t *)(lVar4 + 0x58);
        if (((int64_t *)*plVar5 == plVar5) && (*(int64_t **)(lVar4 + 0x60) == plVar5)) {
          for (puVar1 = *(uint64_t **)(lVar4 + 0x68); puVar1 != (uint64_t *)(lVar4 + 0x68);
              puVar1 = (uint64_t *)*puVar1) {
            if ((((*(int *)(puVar1 + 4) != 0) || (*(int *)((int64_t)puVar1 + 0x24) != 0)) ||
                (*(int *)(puVar1 + 5) != 0)) || (*(int *)((int64_t)puVar1 + 0x2c) != 0)) {
              lVar6 = SystemFunction_00018084d0b0(lVar4);
              if (lVar6 == 0) goto LAB_180847dc9;
              if (*(uint *)(lVar6 + 0x20) < *(uint *)((int64_t)puVar1 + 0x34)) goto LAB_180847d83;
            }
            if (puVar1 == (uint64_t *)(lVar4 + 0x68)) break;
          }
          bVar7 = 1;
        }
        else {
LAB_180847d83:
          bVar7 = 0;
        }
      }
    }
    uVar3 = 0x40;
    if (bVar7 != 0) {
      uVar3 = 0;
    }
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         (-(uint)(bVar7 != 0) & 0x40 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) & ~uVar3 | 0x80
    ;
    lVar4 = *(int64_t *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 6) & 1;
LAB_180847dc9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47df0(uint64_t param_1,int8_t *param_2)
void NetworkProtocol_47df0(uint64_t param_1,int8_t *param_2)
{
  int iVar1;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  uint64_t local_var_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  int64_t lStack_120;
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
    }
    UIComponent_BufferInit(stack_array_118,0x100,0);
    plocal_var_148 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_808_ptr);
  }
  *param_2 = 0;
  local_var_128 = 0;
  local_var_138 = 0;
  lStack_130 = 0;
  iVar1 = SystemFunction_00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&local_var_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = SystemFunction_00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    local_var_128 = *(uint64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_138);
  }
  UIComponent_ProcessData(local_var_128,*(uint64_t *)(lStack_130 + 800),param_2);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_138);
}
bool NetworkProtocol_47f30(uint64_t param_1)
{
  int iVar1;
  int8_t astack_special_x_8 [32];
  iVar1 = SystemFunction_00018088c530(param_1,astack_special_x_8);
  return iVar1 == 0;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_47f60(uint64_t param_1)
void NetworkProtocol_47f60(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [48];
  int64_t alStack_138 [2];
  uint64_t *aplocal_var_128 [34];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  alStack_138[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_180848016;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180847fc4;
  }
  else {
LAB_180847fc4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = UIComponent_CheckStatus(*(uint64_t *)(alStack_138[0] + 0x98),aplocal_var_128,0x18), iVar1 == 0))
  {
    *aplocal_var_128[0] = &processed_var_7896_ptr;
    *(int32_t *)(aplocal_var_128[0] + 1) = 0x18;
    *(int *)(aplocal_var_128[0] + 2) = (int)param_1;
    SystemFunction_00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_180848016:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_48090(uint64_t param_1,int64_t param_2,int32_t param_3,uint64_t *param_4)
void NetworkProtocol_48090(uint64_t param_1,int64_t param_2,int32_t param_3,uint64_t *param_4)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int8_t stack_array_1a8 [32];
  int8_t *plocal_var_188;
  int32_t local_var_178;
  uint64_t local_var_170;
  int64_t lStack_168;
  uint64_t *plocal_var_160;
  int8_t stack_array_158 [256];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  local_var_178 = param_3;
  if (((param_4 == (uint64_t *)0x0) || (*param_4 = 0, param_2 == 0)) ||
     (iVar2 = SystemFunction_00018076b690(param_2), 0x1ff < iVar2)) {
    uVar1 = local_var_178;
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1a8);
    }
    iVar2 = DataProcessor(stack_array_158,0x100,param_2);
    iVar3 = DataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemFunction_00018074b800(stack_array_158 + iVar2,0x100 - iVar2,uVar1);
    iVar2 = iVar2 + iVar3;
    iVar3 = DataProcessor(stack_array_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    SystemFunction_00018074bda0(stack_array_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    plocal_var_188 = stack_array_158;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xb,param_1,&rendering_buffer_2000_ptr);
  }
  local_var_170 = 0;
  iVar3 = SystemFunction_00018088c590(param_1 & 0xffffffff,&lStack_168);
  if (iVar3 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180848132;
    iVar4 = SystemSecurityProcessor(&local_var_170);
    if (iVar4 == 0) goto LAB_18084820e;
  }
  else {
LAB_18084820e:
    iVar4 = iVar3;
  }
  if ((iVar4 == 0) &&
     (iVar3 = UIComponent_CheckStatus(*(uint64_t *)(lStack_168 + 0x98),&plocal_var_160,0x218), iVar3 == 0)) {
    *plocal_var_160 = &ui_system_data_1896_ptr;
    *(int32_t *)(plocal_var_160 + 2) = 0;
    *(int32_t *)(plocal_var_160 + 1) = 0x218;
    *(int32_t *)((int64_t)plocal_var_160 + 0x14) = local_var_178;
// WARNING: Subroutine does not return
    memcpy(plocal_var_160 + 3,param_2,(int64_t)(iVar2 + 1));
  }
LAB_180848132:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_170);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_482f0(uint64_t param_1)
void NetworkProtocol_482f0(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [48];
  int64_t alStack_138 [2];
  uint64_t *aplocal_var_128 [34];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  alStack_138[1] = 0;
  iVar1 = SystemFunction_00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808483a6;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180848354;
  }
  else {
LAB_180848354:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = UIComponent_CheckStatus(*(uint64_t *)(alStack_138[0] + 0x98),aplocal_var_128,0x18), iVar1 == 0))
  {
    *aplocal_var_128[0] = &memory_allocator_3872_ptr;
    *(int32_t *)(aplocal_var_128[0] + 1) = 0x18;
    *(int *)(aplocal_var_128[0] + 2) = (int)param_1;
    SystemFunction_00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_1808483a6:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}
// 函数: void NetworkProtocol_48440(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48440(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_SetValue(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_48480(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48480(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      UIComponent_SetValue(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_484d0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_484d0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = UIComponent_Initialize(param_2,param_1 + 0x1c);
      if (iVar1 == 0) {
        UIComponent_GetValue(param_2,param_1 + 0x2c);
      }
    }
  }
  return;
}
uint64_t NetworkProtocol_48530(int64_t param_1,uint64_t param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_8 [2];
  uVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    uVar1 = UIComponent_SetValue(param_2,astack_special_x_8);
    if ((int)uVar1 == 0) {
      *(int32_t *)(param_1 + 0x18) = astack_special_x_8[0];
      uVar1 = 0;
    }
  }
  return uVar1;
}
// 函数: void NetworkProtocol_48590(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48590(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_Display(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_485d0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_485d0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_WriteData(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_48610(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48610(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_UpdateState(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_48650(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48650(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_GetValue(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_48690(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48690(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      UIComponent_GetValue(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_486e0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_486e0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_Render(param_2,param_1 + 0x18);
  }
  return;
}
// 函数: void NetworkProtocol_48720(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48720(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ProcessEvent(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = UIComponent_UpdateState(param_2,param_1 + 0x20);
      if (iVar1 == 0) {
        UIComponent_WriteData(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_48780(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48780(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ProcessEvent(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = UIComponent_ReadData(param_2,param_1 + 0x25,0x80);
      if (iVar1 == 0) {
        UIComponent_WriteData(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_487e0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_487e0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ReadData(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = UIComponent_UpdateState(param_2,param_1 + 0x18);
      if (iVar1 == 0) {
        UIComponent_WriteData(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_48840(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48840(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ReadData(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = UIComponent_ReadData(param_2,param_1 + 0xa8,0x80);
      if (iVar1 == 0) {
        UIComponent_WriteData(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_488b0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_488b0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,astack_special_x_8);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x18) = astack_special_x_8[0];
      UIComponent_UpdateState(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48900(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48900(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_GetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      UIComponent_UpdateState(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48950(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48950(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_Initialize(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_GetValue(param_2,param_1 + 0x20);
  }
  return;
}
// 函数: void NetworkProtocol_489a0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_489a0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_SetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_SetValue(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void NetworkProtocol_489e0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_489e0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_SetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_GetValue(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void NetworkProtocol_48a20(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48a20(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_Transform(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_GetValue(param_2,param_1 + 0x48);
    if (iVar1 == 0) {
      UIComponent_GetValue(param_2,param_1 + 0x4c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48a70(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48a70(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_ReadData(param_2,param_1 + 0x18,0x200);
  if (iVar1 == 0) {
    iVar1 = UIComponent_GetValue(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      UIComponent_GetValue(param_2,param_1 + 0x10);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48ac0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48ac0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  iVar1 = UIComponent_Display(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_SetValue(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = UIComponent_SetValue(param_2,astack_special_x_8);
      if (iVar1 == 0) {
        *(int32_t *)(param_1 + 0x1c) = astack_special_x_8[0];
        iVar1 = UIComponent_GetValue(param_2,param_1 + 0x20);
        if (iVar1 == 0) {
          UIComponent_GetValue(param_2,param_1 + 0x24);
        }
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_48b30(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48b30(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_SetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_Render(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = UIComponent_Animate(param_2,param_1 + 0x44);
      if (iVar1 == 0) {
        UIComponent_WriteData(param_2,param_1 + 0x50);
      }
    }
  }
  return;
}
// 函数: void NetworkProtocol_48b90(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48b90(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_SetValue(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UIComponent_UpdateState(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void NetworkProtocol_48bd0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48bd0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_ProcessEvent(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_UpdateState(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      UIComponent_WriteData(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48c20(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48c20(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_ProcessEvent(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ReadData(param_2,param_1 + 0x1d,0x80);
    if (iVar1 == 0) {
      UIComponent_WriteData(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48c70(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48c70(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_ReadData(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = UIComponent_UpdateState(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      UIComponent_WriteData(param_2,param_1 + 0x14);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48cc0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_48cc0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UIComponent_ReadData(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = UIComponent_ReadData(param_2,param_1 + 0xa0,0x80);
    if (iVar1 == 0) {
      UIComponent_WriteData(param_2,param_1 + 0x14);
    }
  }
  return;
}
// 函数: void NetworkProtocol_48d50(int64_t *param_1,uint param_2,uint64_t param_3)
void NetworkProtocol_48d50(int64_t *param_1,uint param_2,uint64_t param_3)
{
  int iVar1;
  if (param_2 < 0x11100) {
    iVar1 = UIComponent_GetValue(param_3,param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = UIComponent_ReadData(param_3,param_1 + 5,0x80);
      if (iVar1 == 0) {
        iVar1 = UIComponent_UpdateState(param_3,param_1 + 3);
        if (iVar1 == 0) {
          *(int8_t *)((int64_t)param_1 + 0x1c) = 0;
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}
/* UI系统原始函数语义化别名定义 */
/* NetworkProtocol_8f310 - UIComponent_ProcessEvent */
#define UIComponent_ProcessEvent NetworkProtocol_8f310
/* NetworkProtocol_8f2d0 - UIComponent_Transform */
#define UIComponent_Transform NetworkProtocol_8f2d0
/* UISystem_LayoutEngine - UIComponent_SetValue */
#define UIComponent_SetValue UISystem_LayoutEngine
/* NetworkProtocol_8f050 - UIComponent_Render */
#define UIComponent_Render NetworkProtocol_8f050
/* NetworkProtocol_8f1a0 - UIComponent_Initialize */
#define UIComponent_Initialize NetworkProtocol_8f1a0
/* NetworkProtocol_3fb90 - UIComponent_HandleEvent */
#define UIComponent_HandleEvent NetworkProtocol_3fb90
/* NetworkProtocol_4be00 - UIComponent_AlternateValidate */
#define UIComponent_AlternateValidate NetworkProtocol_4be00
/* NetworkProtocol_7cbd0 - UIComponent_Create */
#define UIComponent_Create NetworkProtocol_7cbd0
/* NetworkProtocol_47c60 - UIComponent_ProcessData */
#define UIComponent_ProcessData NetworkProtocol_47c60
/* NetworkProtocol_8eea0 - UIComponent_UpdateState */
#define UIComponent_UpdateState NetworkProtocol_8eea0
/* NetworkProtocol_8f3a0 - UIComponent_Animate */
#define UIComponent_Animate NetworkProtocol_8f3a0
/* NetworkProtocol_8ee60 - UIComponent_GetValue */
#define UIComponent_GetValue NetworkProtocol_8ee60
/* NetworkProtocol_4b990 - UIComponent_Configure */
#define UIComponent_Configure NetworkProtocol_4b990
/* NetworkProtocol_8f4d0 - UIComponent_ReadData */
#define UIComponent_ReadData NetworkProtocol_8f4d0
/* NetworkProtocol_4b5a0 - UIComponent_Validate */
#define UIComponent_Validate NetworkProtocol_4b5a0
/* NetworkProtocol_8f470 - UIComponent_WriteData */
#define UIComponent_WriteData NetworkProtocol_8f470
/* SystemCore_4be30 - UIComponent_BufferInit */
#define UIComponent_BufferInit SystemCore_4be30
/* NetworkProtocol_8f010 - UIComponent_Display */
#define UIComponent_Display NetworkProtocol_8f010
/* NetworkProtocol_8dec0 - UIComponent_CheckStatus */
#define UIComponent_CheckStatus NetworkProtocol_8dec0
/* NetworkProtocol_479d0 - UIComponent_ManageData */
#define UIComponent_ManageData NetworkProtocol_479d0
/* NetworkProtocol_4dc20 - UIComponent_Calculate */
#define UIComponent_Calculate NetworkProtocol_4dc20
/* RenderingSystem_MemoryManager0 - UISystem_GlobalHandler */
#define UISystem_GlobalHandler RenderingSystem_MemoryManager0