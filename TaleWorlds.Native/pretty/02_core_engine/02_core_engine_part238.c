#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part238.c - 核心引擎内存管理和资源处理模块 (9个函数)

// 全局变量声明
extern undefined8 _DAT_180c86920;    // 引擎全局数据结构指针
extern undefined8 _DAT_180c8ed18;    // 内存池标识符
extern undefined8 _DAT_180c86890;    // 资源管理器数据指针
extern undefined8 _DAT_180c86870;    // 渲染配置数据指针
extern undefined1 UNK_180a0fec0;      // 格式化字符串常量

/**
 * 处理引擎资源管理器初始化和配置
 * 初始化资源管理器的各项参数，设置默认值，处理资源分配
 * 
 * @param engine_context 引擎上下文指针
 * @param resource_manager 资源管理器指针
 */
void initialize_engine_resource_manager(undefined8 engine_context, longlong *resource_manager)

{
  uint *status_flag_ptr;
  longlong resource_offset;
  longlong *resource_ptr;
  int resource_count;
  longlong temp_value;
  ulonglong loop_counter;
  ulonglong config_offset;
  uint item_count;
  ulonglong total_items;
  longlong *stack_resource_ptr;
  undefined8 stack_config_1;
  longlong *stack_resource_ptr2;
  undefined8 stack_config_2;
  undefined8 stack_config_3;
  undefined8 stack_config_4;
  undefined8 stack_config_5;
  undefined4 stack_config_6;
  undefined4 stack_config_7;
  undefined4 stack_config_8;
  undefined4 stack_config_9;
  undefined4 stack_config_10;
  undefined4 stack_config_11;
  undefined4 stack_config_12;
  undefined4 stack_config_13;
  longlong stack_config_14;
  undefined8 stack_config_15;
  undefined8 stack_config_16;
  undefined4 stack_config_17;
  undefined8 stack_config_18;
  
  loop_counter = 0;
  stack_config_18 = 0xfffffffffffffffe;
  stack_config_17 = 3;
  stack_config_16 = 0;
  stack_config_15 = 0;
  stack_config_14 = 0;
  stack_resource_ptr2 = (longlong *)0x0;
  stack_config_2 = 0;
  stack_resource_ptr = (longlong *)0x0;
  
  // 初始化资源管理器
  if (resource_manager != (longlong *)0x0) {
    (**(code **)(*resource_manager + 0x28))(resource_manager);
  }
  resource_ptr = resource_manager;
  
  // 处理栈资源管理器
  if (stack_resource_ptr != (longlong *)0x0) {
    temp_value = *stack_resource_ptr;
    stack_resource_ptr = resource_manager;
    (**(code **)(temp_value + 0x38))();
    resource_ptr = stack_resource_ptr;
  }
  stack_resource_ptr = resource_ptr;
  resource_ptr = stack_resource_ptr2;
  stack_config_2 = 0;
  stack_resource_ptr2 = (longlong *)0x0;
  
  // 清理资源管理器
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  
  // 设置默认配置参数
  stack_config_3 = 0x3f800000;    // 1.0f
  stack_config_4 = 0;
  stack_config_5 = 0x3f80000000000000;  // 1.0
  stack_config_6 = 0;
  stack_config_7 = 0;
  stack_config_8 = 0;
  stack_config_9 = 0x3f800000;    // 1.0f
  stack_config_10 = 0;
  stack_config_11 = 0;
  stack_config_12 = 0;
  stack_config_13 = 0;
  stack_config_14 = 0x3f800000;    // 1.0f
  
  // 调用资源管理配置函数
  FUN_180209470(&stack_resource_ptr);
  temp_value = _DAT_180c86920;
  config_offset = loop_counter;
  total_items = loop_counter;
  
  // 配置资源管理器状态
  if (resource_manager[8] - resource_manager[7] >> 4 != 0) {
    do {
      *(char *)(*(longlong *)(config_offset + resource_manager[7]) + 0xf5) = 
        (*(int *)(temp_value + 0xe00) != 0) + -1;
      item_count = (int)total_items + 1;
      config_offset = config_offset + 0x10;
      total_items = (ulonglong)item_count;
    } while ((ulonglong)(longlong)(int)item_count < 
             (ulonglong)(resource_manager[8] - resource_manager[7] >> 4));
  }
  
  // 执行资源管理器处理
  FUN_180209720(engine_context, &stack_resource_ptr);
  
  // 处理资源管理器数据
  if ((stack_resource_ptr != (longlong *)0x0) &&
     (resource_count = (int)(stack_resource_ptr[8] - stack_resource_ptr[7] >> 4), 
      temp_value = (longlong)resource_count, 0 < resource_count)) {
    do {
      status_flag_ptr = (uint *)(*(longlong *)(loop_counter + stack_resource_ptr[7]) + 0x100);
      *status_flag_ptr = *status_flag_ptr & 0xfffff7ff;
      resource_offset = *(longlong *)(loop_counter + stack_resource_ptr[7]);
      *(undefined8 *)(resource_offset + 0x108) = 0xffffffffffffffff;
      *(undefined4 *)(resource_offset + 0x110) = 0xffffffff;
      loop_counter = loop_counter + 0x10;
      temp_value = temp_value + -1;
    } while (temp_value != 0);
  }
  
  // 清理栈资源
  if (stack_config_14 == 0) {
    if (stack_resource_ptr2 != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr2 + 0x38))();
    }
    if (stack_resource_ptr != (longlong *)0x0) {
      (**(code **)(*stack_resource_ptr + 0x38))();
    }
    return;
  }
  
  // 错误处理
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001802081ca)
// WARNING: Removing unreachable block (ram,0x0001802081e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180208160(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
void FUN_180208160(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  uVar6 = 0;
  uStack_38 = 0xfffffffffffffffe;
  uStack_48 = 3;
  uStack_50 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  plStack_a8 = (longlong *)0x0;
  uStack_b0 = 0;
  plStack_b8 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_b8 != (longlong *)0x0) {
    lVar5 = *plStack_b8;
    plStack_b8 = param_2;
    (**(code **)(lVar5 + 0x38))();
    plVar3 = plStack_b8;
  }
  plStack_b8 = plVar3;
  uStack_b0 = param_3;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x28))(param_4);
  }
  plVar3 = param_4;
  if (plStack_a8 != (longlong *)0x0) {
    lVar5 = *plStack_a8;
    plStack_a8 = param_4;
    (**(code **)(lVar5 + 0x38))();
    plVar3 = plStack_a8;
  }
  plStack_a8 = plVar3;
  uStack_a0 = *param_5;
  uStack_98 = param_5[1];
  uStack_90 = param_5[2];
  uStack_88 = param_5[3];
  uStack_80 = *(undefined4 *)(param_5 + 4);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_78 = *(undefined4 *)(param_5 + 5);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0x2c);
  uStack_70 = *(undefined4 *)(param_5 + 6);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0x34);
  uStack_68 = *(undefined4 *)(param_5 + 7);
  uStack_64 = *(undefined4 *)((longlong)param_5 + 0x3c);
  FUN_180209470(&plStack_b8);
  lVar5 = _DAT_180c86920;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (param_2[8] - param_2[7] >> 4 != 0) {
    do {
      *(char *)(*(longlong *)(uVar7 + param_2[7]) + 0xf5) = (*(int *)(lVar5 + 0xe00) != 0) + -1;
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 0x10;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(param_2[8] - param_2[7] >> 4));
  }
  FUN_180209720(param_1,&plStack_b8);
  if ((plStack_b8 != (longlong *)0x0) &&
     (iVar4 = (int)(plStack_b8[8] - plStack_b8[7] >> 4), lVar5 = (longlong)iVar4, 0 < iVar4)) {
    do {
      puVar1 = (uint *)(*(longlong *)(uVar6 + plStack_b8[7]) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      lVar2 = *(longlong *)(uVar6 + plStack_b8[7]);
      *(undefined8 *)(lVar2 + 0x108) = 0xffffffffffffffff;
      *(undefined4 *)(lVar2 + 0x110) = 0xffffffff;
      uVar6 = uVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lStack_60 == 0) {
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_b8 != (longlong *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180208390(undefined8 param_1,undefined8 param_2,undefined1 param_3)
void FUN_180208390(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plStackX_20;
  
  puVar2 = (undefined8 *)FUN_1800b3590(param_1,&plStackX_20,param_2,0);
  uVar1 = *puVar2;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  FUN_180208400(param_1,uVar1,param_3);
  return;
}





// 函数: void FUN_180208400(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)
void FUN_180208400(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_180080810(param_1 + 0x20,param_1 + 0x38,param_3,param_4,0xfffffffffffffffe);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x848);
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x40);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}





// 函数: void FUN_1802084b0(longlong *param_1)
void FUN_1802084b0(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar7 = *param_1;
  uVar8 = 0;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar7),8) +
          (param_1[1] - lVar7);
  uVar3 = uVar8;
  uVar9 = uVar8;
  if (lVar2 >> 6 == lVar2 >> 0x3f) {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    return;
  }
  do {
    lVar7 = *(longlong *)(uVar9 + lVar7);
    lVar2 = *(longlong *)(lVar7 + 0x38);
    uVar5 = uVar8;
    uVar6 = uVar8;
    if (*(longlong *)(lVar7 + 0x40) - lVar2 >> 4 != 0) {
      do {
        puVar1 = (uint *)(*(longlong *)(uVar6 + lVar2) + 0x100);
        *puVar1 = *puVar1 & 0xfffff7ff;
        lVar2 = *(longlong *)(uVar6 + *(longlong *)(lVar7 + 0x38));
        *(undefined8 *)(lVar2 + 0x108) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0x110) = 0xffffffff;
        if (*(longlong *)(*(longlong *)(uVar6 + *(longlong *)(lVar7 + 0x38)) + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uVar4 = (int)uVar5 + 1;
        *(undefined8 *)(*(longlong *)(uVar6 + *(longlong *)(lVar7 + 0x38)) + 0x2d0) = 0;
        lVar2 = *(longlong *)(lVar7 + 0x38);
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 0x10;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(lVar7 + 0x40) - lVar2 >> 4));
    }
    lVar7 = *param_1;
    uVar4 = (int)uVar3 + 1;
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar7),8) +
            (param_1[1] - lVar7);
    uVar3 = (ulonglong)uVar4;
    uVar9 = uVar9 + 0x78;
  } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)((lVar2 >> 6) - (lVar2 >> 0x3f)));
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}





// 函数: void FUN_1802084f6(void)
void FUN_1802084f6(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_EBP;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R9;
  ulonglong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R14;
  ulonglong uVar7;
  
  uVar7 = unaff_R12 & 0xffffffff;
  do {
    lVar3 = *(longlong *)(uVar7 + in_R9);
    uVar5 = unaff_R12 & 0xffffffff;
    lVar2 = *(longlong *)(lVar3 + 0x38);
    uVar6 = unaff_R12;
    if (*(longlong *)(lVar3 + 0x40) - lVar2 >> 4 != 0) {
      do {
        puVar1 = (uint *)(*(longlong *)(uVar6 + lVar2) + 0x100);
        *puVar1 = *puVar1 & 0xfffff7ff;
        lVar2 = *(longlong *)(uVar6 + *(longlong *)(lVar3 + 0x38));
        *(undefined8 *)(lVar2 + 0x108) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0x110) = 0xffffffff;
        if (*(longlong *)(*(longlong *)(uVar6 + *(longlong *)(lVar3 + 0x38)) + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(ulonglong *)(*(longlong *)(uVar6 + *(longlong *)(lVar3 + 0x38)) + 0x2d0) = unaff_R12;
        lVar2 = *(longlong *)(lVar3 + 0x38);
        uVar6 = uVar6 + 0x10;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(lVar3 + 0x40) - lVar2 >> 4));
    }
    in_R9 = *unaff_R14;
    unaff_EBP = unaff_EBP + 1;
    uVar7 = uVar7 + 0x78;
    lVar3 = SUB168(SEXT816(unaff_R13) * SEXT816(unaff_R14[1] - in_R9),8) + (unaff_R14[1] - in_R9);
  } while ((ulonglong)(longlong)unaff_EBP < (ulonglong)((lVar3 >> 6) - (lVar3 >> 0x3f)));
  *(undefined1 *)((longlong)unaff_R14 + 0x41) = 1;
  return;
}





// 函数: void FUN_1802085f8(longlong param_1)
void FUN_1802085f8(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}





// 函数: void FUN_180208610(longlong param_1,float param_2)
void FUN_180208610(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar2 = param_2 + *(float *)(param_1 + 0x848);
    *(float *)(param_1 + 0x848) = fVar2;
    fVar3 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0xc0) + -0x28) *
            0.033333335;
    if (fVar3 < fVar2) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        *(float *)(param_1 + 0x848) = fVar3;
      }
      else {
        fVar2 = fVar2 - fVar3;
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        *(float *)(param_1 + 0x848) = fVar2;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    fVar2 = param_2 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x28) = fVar2;
    fVar3 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xc0) + -0x28) *
            0.033333335;
    if (fVar3 < fVar2) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        *(float *)(param_1 + 0x28) = fVar3;
      }
      else {
        fVar2 = fVar2 - fVar3;
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        *(float *)(param_1 + 0x28) = fVar2;
      }
    }
    fVar2 = *(float *)(param_1 + 0x2c) - param_2 * 5.0;
    *(float *)(param_1 + 0x2c) = fVar2;
    if (fVar2 <= 0.0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180208720(longlong *param_1,ulonglong param_2,float *param_3,int param_4)
void FUN_180208720(longlong *param_1,ulonglong param_2,float *param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  float fVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar30;
  ulonglong uStackX_10;
  uint uStack_68;
  uint uStack_64;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_48;
  
  if (((*(char *)((longlong)param_1 + 0x41) != '\0') ||
      (lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - *param_1),8) +
                (param_1[1] - *param_1), lVar11 >> 6 == lVar11 >> 0x3f)) ||
     ((lVar11 = param_1[7], lVar11 == 0 &&
      ((param_4 < 1 && (*(float *)((longlong)param_1 + 0x2c) <= 0.0)))))) {
    lVar11 = *param_1;
    uVar22 = 0;
    lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
             (param_1[1] - lVar11);
    uVar24 = uVar22;
    uVar25 = uVar22;
    if (lVar20 >> 6 != lVar20 >> 0x3f) {
      do {
        lVar20 = *(longlong *)(lVar11 + uVar25);
        uVar12 = uVar22;
        uVar23 = uVar22;
        if (*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4 != 0) {
          do {
            if (((*(byte *)(*(longlong *)(lVar20 + 0x38) + 8 + uVar12) & 1) != 0) &&
               (lVar16 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + uVar12),
               (*(uint *)(lVar16 + 0x100) & 0x800) != 0)) {
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x10) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0xc) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x14) = 0;
              *(undefined4 *)(*(longlong *)(lVar16 + 0x2d0) + 0x18) = 0;
              lVar20 = *(longlong *)(lVar11 + uVar25);
            }
            uVar19 = (int)uVar23 + 1;
            uVar12 = uVar12 + 0x10;
            uVar23 = (ulonglong)uVar19;
          } while ((ulonglong)(longlong)(int)uVar19 <
                   (ulonglong)(*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4));
        }
        lVar11 = *param_1;
        uVar19 = (int)uVar24 + 1;
        lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                 (param_1[1] - lVar11);
        uVar24 = (ulonglong)uVar19;
        uVar25 = uVar25 + 0x78;
      } while ((ulonglong)(longlong)(int)uVar19 < (ulonglong)((lVar20 >> 6) - (lVar20 >> 0x3f)));
    }
  }
  else {
    fVar30 = 1.0;
    uVar25 = 0;
    uStackX_10 = param_2 & 0xffffffff00000000;
    uVar24 = uVar25;
    if (lVar11 != 0) {
      fVar29 = 1.0 - *(float *)((longlong)param_1 + 0x2c);
      FUN_180208f20(fVar29,lVar11,&uStackX_10,(longlong)param_1 + 0x44,fVar29);
      uVar24 = uStackX_10 & 0xffffffff;
    }
    if (param_1[4] != 0) {
      FUN_180208f20(param_1,param_1[4],&uStackX_10,(longlong)param_1 + 0x44,
                    *(undefined4 *)((longlong)param_1 + 0x2c));
      uVar24 = uStackX_10 & 0xffffffff;
    }
    uVar22 = uVar25;
    if (0 < (longlong)param_4) {
      do {
        iVar14 = (int)uVar24;
        if (0xff < iVar14) break;
        bVar28 = false;
        pfVar9 = (float *)(param_1 + 9);
        uVar12 = uVar25;
        do {
          if (iVar14 <= (int)uVar12) {
            if (!bVar28) {
              uVar24 = (ulonglong)(iVar14 + 1);
              *(float *)((longlong)param_1 + (longlong)iVar14 * 8 + 0x44) = *param_3;
              *(float *)(param_1 + (longlong)iVar14 + 9) = param_3[1];
            }
            break;
          }
          if (pfVar9[-1] == *param_3) {
            fVar29 = param_3[1];
            fVar1 = *pfVar9;
            *pfVar9 = fVar29 + fVar1;
            if (fVar30 < fVar29 + fVar1) {
              *pfVar9 = 1.0;
            }
            bVar28 = true;
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
          pfVar9 = pfVar9 + 2;
        } while (!bVar28);
        uVar22 = uVar22 + 1;
        param_3 = param_3 + 2;
      } while ((longlong)uVar22 < (longlong)param_4);
      uStackX_10 = CONCAT44(uStackX_10._4_4_,(int)uVar24);
    }
    iVar14 = (int)uVar24;
    if (0 < iVar14) {
      if (0x80 < iVar14) {
        if (1 < iVar14) {
          lVar11 = (longlong)(iVar14 + -1);
          uVar24 = (ulonglong)(iVar14 - 1);
          do {
            uVar22 = uVar25;
            if (3 < lVar11) {
              puVar7 = (undefined8 *)((longlong)param_1 + 0x44);
              lVar20 = (lVar11 - 4U >> 2) + 1;
              uVar22 = lVar20 * 4;
              do {
                fVar30 = *(float *)((longlong)puVar7 + 0xc);
                if (*(float *)((longlong)puVar7 + 4) <= fVar30 &&
                    fVar30 != *(float *)((longlong)puVar7 + 4)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = *puVar7;
                  fVar30 = *(float *)((longlong)puVar7 + 0xc);
                  *puVar7 = uVar4;
                }
                if (fVar30 < *(float *)((longlong)puVar7 + 0x14)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = puVar7[2];
                  puVar7[2] = uVar4;
                }
                if (*(float *)((longlong)puVar7 + 0x14) <= *(float *)((longlong)puVar7 + 0x1c) &&
                    *(float *)((longlong)puVar7 + 0x1c) != *(float *)((longlong)puVar7 + 0x14)) {
                  uVar4 = puVar7[2];
                  puVar7[2] = puVar7[3];
                  puVar7[3] = uVar4;
                }
                if (*(float *)((longlong)puVar7 + 0x1c) <= *(float *)((longlong)puVar7 + 0x24) &&
                    *(float *)((longlong)puVar7 + 0x24) != *(float *)((longlong)puVar7 + 0x1c)) {
                  uVar4 = puVar7[3];
                  puVar7[3] = puVar7[4];
                  puVar7[4] = uVar4;
                }
                puVar7 = puVar7 + 4;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            if ((longlong)uVar22 < lVar11) {
              puVar7 = (undefined8 *)((longlong)param_1 + uVar22 * 8 + 0x44);
              lVar20 = lVar11 - uVar22;
              do {
                if (*(float *)((longlong)puVar7 + 4) <= *(float *)((longlong)puVar7 + 0xc) &&
                    *(float *)((longlong)puVar7 + 0xc) != *(float *)((longlong)puVar7 + 4)) {
                  uVar4 = *puVar7;
                  *puVar7 = puVar7[1];
                  puVar7[1] = uVar4;
                }
                puVar7 = puVar7 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            lVar11 = lVar11 + -1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        uVar24 = 0x80;
        uStackX_10 = CONCAT44(uStackX_10._4_4_,0x80);
      }
      *(int *)((longlong)param_1 + 0x844) = (int)uVar24;
      lVar11 = *param_1;
      uStack_64 = 0;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
               (param_1[1] - lVar11);
      if (lVar20 >> 6 != lVar20 >> 0x3f) {
        lStack_58 = 0;
        uVar22 = uVar25;
        do {
          lVar20 = *(longlong *)(lVar11 + 0x58 + lStack_58);
          lVar10 = *(longlong *)(lVar11 + 0x60 + lStack_58) - lVar20;
          uStack_68 = 0;
          lVar16 = lVar10 >> 0x3f;
          uVar19 = (uint)uVar22;
          if (lVar10 / 0xc + lVar16 != lVar16) {
            lStack_48 = 0;
            lStack_60 = 0;
            uVar22 = uVar25;
            do {
              lVar16 = *(longlong *)(*(longlong *)(lVar11 + lStack_58) + 0x38);
              uVar19 = (uint)uVar22;
              if ((*(byte *)(lStack_60 + 8 + lVar16) & 1) != 0) {
                iVar14 = *(int *)(lVar20 + lStack_48);
                lVar10 = *(longlong *)(lStack_60 + lVar16);
                bVar6 = 0;
                if (iVar14 == -1) {
                  lVar8 = *(longlong *)(lVar11 + 0x10 + lStack_58);
                  if (lVar8 == 0) {
                    lVar16 = FUN_1801efdb0(lVar16,lVar10);
                    uVar19 = uStack_68;
                    if ((lVar16 == 0) || (iVar21 = *(int *)(lVar16 + 0x18), iVar21 == 0))
                    goto LAB_180208aa2;
                    uVar17 = *(undefined4 *)(lVar16 + 0x2c);
                  }
                  else {
                    cVar5 = FUN_1801ef300(lVar16,lVar10,lVar8);
                    if (cVar5 == '\0') {
                      FUN_180626f80(&UNK_180a0fec0);
                      iVar14 = *(int *)(lVar20 + lStack_48);
                      uVar19 = uStack_68;
                      goto LAB_180208aa2;
                    }
                    lVar16 = FUN_1801ef620(extraout_XMM0_Qa,lVar10,lVar8);
                    uVar17 = *(undefined4 *)(lVar16 + 0x2c);
                    lVar16 = FUN_1801efdb0(extraout_XMM0_Qa_00,lVar8);
                    iVar21 = *(int *)(lVar16 + 0x18);
                  }
                  uVar2 = *(undefined4 *)(lVar16 + 0x24);
                  uVar3 = *(undefined4 *)(lVar16 + 0x28);
                  *(int *)(lVar20 + 4 + lStack_48) = iVar21;
                  *(undefined4 *)(lVar20 + 8 + lStack_48) = *(undefined4 *)(lVar16 + 0x1c);
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) & 0xf7;
                  *(uint *)(lVar10 + 0x100) = *(uint *)(lVar10 + 0x100) | 0x800;
                  uVar4 = _DAT_180c8ed18;
                  *(undefined4 *)(lVar10 + 0x10c) = uVar2;
                  if (lVar8 == 0) {
                    bVar6 = 8;
                  }
                  *(undefined4 *)(lVar10 + 0x110) = uVar3;
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) | bVar6;
                  *(undefined4 *)(lVar10 + 0x108) = uVar17;
                  puVar7 = (undefined8 *)FUN_18062b1e0(uVar4,0x20,8,3);
                  *puVar7 = 0;
                  *(undefined4 *)(puVar7 + 1) = 0;
                  *(undefined4 *)((longlong)puVar7 + 0xc) = 0xffffffff;
                  puVar7[2] = 0;
                  *(undefined4 *)(puVar7 + 3) = 0;
                  *(undefined8 **)(lVar10 + 0x2d0) = puVar7;
                  *(undefined4 *)(lVar20 + lStack_48) = 0;
                }
                else {
LAB_180208aa2:
                  if (iVar14 < 0) goto LAB_180208d4a;
                }
                puVar18 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 +
                                  _DAT_180c86890 + 0xb8);
                if ((int)uVar24 == 0) {
                  uVar26 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar26 = *puVar18;
                  *puVar18 = *puVar18 + (int)uVar24;
                  UNLOCK();
                  uVar22 = (ulonglong)(uVar26 >> 0xb);
                  uVar24 = (ulonglong)(((uint)uStackX_10 - 1) + uVar26 >> 0xb);
                  if (uVar22 <= uVar24) {
                    pcVar15 = (char *)((longlong)puVar18 + uVar22 + 0x408);
                    lVar16 = (uVar24 - uVar22) + 1;
                    puVar27 = puVar18 + (ulonglong)(uVar26 >> 0xb) * 2 + 2;
                    do {
                      iVar14 = (int)uVar22;
                      if (*(longlong *)puVar27 == 0) {
                        lVar8 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
                        LOCK();
                        bVar28 = *(longlong *)(puVar18 + (longlong)iVar14 * 2 + 2) == 0;
                        if (bVar28) {
                          *(longlong *)(puVar18 + (longlong)iVar14 * 2 + 2) = lVar8;
                        }
                        UNLOCK();
                        if (bVar28) {
                          uVar19 = iVar14 * 0x800;
                          iVar21 = uVar19 + 0x800;
                          for (; (int)uVar19 < iVar21; uVar19 = uVar19 + 1) {
                            *(undefined8 *)
                             (*(longlong *)(puVar18 + (ulonglong)(uVar19 >> 0xb) * 2 + 2) +
                             (longlong)(int)(uVar19 + (uVar19 >> 0xb) * -0x800) * 8) = 0;
                          }
                          LOCK();
                          *(undefined1 *)((longlong)iVar14 + 0x408 + (longlong)puVar18) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          do {
                          } while (*pcVar15 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar15 != '\0');
                      }
                      uVar22 = (ulonglong)(iVar14 + 1);
                      puVar27 = puVar27 + 2;
                      pcVar15 = pcVar15 + 1;
                      lVar16 = lVar16 + -1;
                    } while (lVar16 != 0);
                  }
                  uVar24 = (ulonglong)(uint)uStackX_10;
                }
                *(undefined4 *)(*(longlong *)(lVar10 + 0x2d0) + 0x10) =
                     *(undefined4 *)(lVar20 + 8 + lStack_48);
                *(int *)(*(longlong *)(lVar10 + 0x2d0) + 0x14) = (int)uVar24;
                *(uint *)(*(longlong *)(lVar10 + 0x2d0) + 0x18) = uVar26;
                *(undefined4 *)(*(longlong *)(lVar10 + 0x2d0) + 0xc) =
                     *(undefined4 *)(_DAT_180c86870 + 0x224);
                uVar19 = uStack_68;
                if (0 < (int)uVar24) {
                  pfVar9 = (float *)(param_1 + 9);
                  do {
                    pfVar13 = (float *)(*(longlong *)(puVar18 + (ulonglong)(uVar26 >> 0xb) * 2 + 2)
                                       + (ulonglong)(uVar26 + (uVar26 >> 0xb) * -0x800) * 8);
                    *pfVar13 = (float)(int)pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    uVar24 = uVar24 - 1;
                    pfVar9 = pfVar9 + 2;
                    uVar26 = uVar26 + 1;
                  } while (uVar24 != 0);
                  uVar24 = uStackX_10 & 0xffffffff;
                }
              }
LAB_180208d4a:
              lVar20 = *(longlong *)(lVar11 + 0x58 + lStack_58);
              uStack_68 = uVar19 + 1;
              uVar22 = (ulonglong)uStack_68;
              lStack_60 = lStack_60 + 0x10;
              lStack_48 = lStack_48 + 0xc;
              uVar19 = uStack_64;
            } while ((ulonglong)(longlong)(int)uStack_68 <
                     (ulonglong)((*(longlong *)(lVar11 + 0x60 + lStack_58) - lVar20) / 0xc));
          }
          lVar11 = *param_1;
          uStack_64 = uVar19 + 1;
          uVar22 = (ulonglong)uStack_64;
          lStack_58 = lStack_58 + 0x78;
          lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                   (param_1[1] - lVar11);
          if ((ulonglong)((lVar20 >> 6) - (lVar20 >> 0x3f)) <= (ulonglong)(longlong)(int)uStack_64)
          {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



