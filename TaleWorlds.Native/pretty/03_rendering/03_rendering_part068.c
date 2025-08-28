#include "TaleWorlds.Native.Split.h"

// 03_rendering_part068.c - 渲染系统高级状态管理和资源控制模块
// 包含10个核心函数，涵盖渲染系统状态初始化、资源管理、参数处理等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_MAX_PRIORITY_LEVELS 5
#define RENDERING_SYSTEM_DEFAULT_TIMEOUT 9999.0f
#define RENDERING_SYSTEM_SCALE_FACTOR 256.0f
#define RENDERING_SYSTEM_PI 3.1415927f
#define RENDERING_SYSTEM_QUALITY_THRESHOLD 0.08f
#define RENDERING_SYSTEM_FLOAT_NORMALIZATION 1.0f
#define RENDERING_SYSTEM_MATRIX_MULTIPLIER 0.25f
#define RENDERING_SYSTEM_LOCK_TIMEOUT 3
#define RENDERING_SYSTEM_FLAG_MASK 0xdfffffff
#define RENDERING_SYSTEM_PRIORITY_MASK 0xfffU
#define RENDERING_SYSTEM_INDEX_SHIFT 0x14
#define RENDERING_SYSTEM_BYTE_SHIFT 0x20

// 函数别名定义
#define rendering_system_initialize_render_context FUN_180306190
#define rendering_system_process_render_batch FUN_1803065c0
#define rendering_system_execute_render_pipeline FUN_1803065d4
#define rendering_system_empty_function_placeholder FUN_180306894
#define rendering_system_check_render_visibility FUN_1803068a0
#define rendering_system_validate_render_state FUN_1803068ec
#define rendering_system_verify_render_capability FUN_180306b2c
#define rendering_system_release_render_resources FUN_180306b40
#define rendering_system_find_render_object FUN_180306ba0
#define rendering_system_cleanup_render_queue FUN_180306c30
#define rendering_system_compare_render_priority FUN_180306d20

// 渲染系统初始化渲染上下文
// 参数: render_context - 渲染上下文指针
//       render_queue - 渲染队列指针  
//       render_parameters - 渲染参数指针
void rendering_system_initialize_render_context(longlong render_context, longlong render_queue, longlong render_parameters)
{
  longlong system_state;
  int lock_result;
  ulonglong security_hash;
  ulonglong temp_hash;
  longlong *resource_manager;
  float quality_factor;
  longlong queue_parameters[3];
  undefined1 security_buffer[32];
  undefined8 stack_guard;
  longlong **callback_table;
  undefined1 padding_buffer[8];
  longlong resource_handle;
  longlong queue_size;
  float priority_scale;
  float quality_scale;
  longlong *render_target;
  undefined1 *visibility_flag;
  float *quality_parameter;
  float *performance_metric;
  longlong *batch_processor;
  longlong queue_capacity;
  longlong *resource_allocator;
  longlong resource_table[2];
  code *entry_point;
  undefined *exit_handler;
  undefined8 frame_counter;
  longlong **system_manager;
  int priority_levels[6];
  ulonglong system_checksum;
  
  stack_guard = 0xfffffffffffffffe;
  system_checksum = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  LOCK();
  *(undefined4 *)(render_context + 0x78) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(render_context + 0x980) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(render_context + 0x1288) = 0;
  UNLOCK();
  queue_parameters[0] = render_queue;
  queue_size = render_parameters;
  if (((*(byte *)(render_parameters + 0x1bd8) & 0x20) != 0) && (4 < *(int *)(render_queue + 0x27c0))) {
    lock_result = _Mtx_trylock(render_context + 0x1bb0);
    if (lock_result == 0) {
      if (*(longlong *)(queue_parameters[0] + 0x60b80) != 0) {
        *(undefined8 *)(queue_size + 0x124c8) =
             *(undefined8 *)(*(longlong *)(queue_parameters[0] + 0x60b80) + 0x20);
      }
      resource_manager = *(longlong **)(render_context + 0x1b90);
      if (resource_manager != *(longlong **)(render_context + 0x1b98)) {
        do {
          system_state = *resource_manager;
          if (*(longlong *)(system_state + 0x90) - *(longlong *)(system_state + 0x88) >> 3 != 0) {
            system_state = *(longlong *)(_DAT_180c86870 + 0x3d8);
            if ((system_state == 0) ||
               ((*(int *)(system_state + 0x110) != 2 && ((system_state == 0 || (*(int *)(system_state + 0x110) != 3))))))
            {
              security_buffer[0] = 0;
            }
            else {
              security_buffer[0] = 1;
            }
            LOCK();
            *(undefined4 *)(system_state + 0xa8) = 0;
            UNLOCK();
            system_state = *(longlong *)(_DAT_180c86870 + 0x3d8);
            if ((system_state == 0) || (*(int *)(system_state + 0x110) != 1)) {
              priority_levels[0] = 1;
              priority_levels[1] = 10;
              priority_levels[2] = 0x28;
              priority_levels[3] = 0x78;
              priority_levels[4] = 0xf0;
              lock_result = *(int *)(_DAT_180c86920 + 0x2a0);
              if (lock_result < 0) {
                lock_result = 0;
              }
              else if (RENDERING_SYSTEM_MAX_PRIORITY_LEVELS < lock_result) {
                lock_result = RENDERING_SYSTEM_MAX_PRIORITY_LEVELS;
              }
              quality_scale = (float)priority_levels[lock_result] * 0.004166667;
            }
            else {
              quality_scale = RENDERING_SYSTEM_DEFAULT_TIMEOUT;
            }
            if ((*(char *)(system_state + 0x7c) != '\0') &&
               ((system_state == 0 || (*(int *)(system_state + 0x110) != 1)))) {
              temp_hash = *(longlong *)(system_state + 0x90) - *(longlong *)(system_state + 0x88) >> 3;
              security_hash = 1;
              if (1 < temp_hash) {
                security_hash = temp_hash;
              }
              quality_factor = (float)(longlong)security_hash;
              if ((longlong)security_hash < 0) {
                quality_factor = quality_factor + 1.8446744e+19;
              }
              quality_factor = RENDERING_SYSTEM_SCALE_FACTOR / quality_factor;
              if (0.0 <= quality_factor) {
                if (RENDERING_SYSTEM_FLOAT_NORMALIZATION <= quality_factor) {
                  quality_factor = RENDERING_SYSTEM_FLOAT_NORMALIZATION;
                }
              }
              else {
                quality_factor = 0.0;
              }
              quality_scale = quality_factor * quality_scale;
              if (RENDERING_SYSTEM_FLOAT_NORMALIZATION <= quality_scale) {
                quality_scale = RENDERING_SYSTEM_FLOAT_NORMALIZATION;
              }
            }
            priority_scale = quality_scale * *(float *)(system_state + 0x70);
            quality_scale = quality_scale * *(float *)(system_state + 0x74);
            system_manager = resource_table;
            render_target = &system_state;
            visibility_flag = security_buffer;
            quality_parameter = &priority_scale;
            performance_metric = &quality_scale;
            batch_processor = queue_parameters;
            resource_allocator = &queue_size;
            entry_point = FUN_1803089a0;
            exit_handler = &UNK_180308990;
            queue_capacity = render_context;
            resource_table[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, 0x38, 8, DAT_180bf65bc);
            *resource_table[0] = (longlong)render_target;
            resource_table[0][1] = (longlong)visibility_flag;
            resource_table[0][2] = (longlong)quality_parameter;
            resource_table[0][3] = (longlong)performance_metric;
            resource_table[0][4] = (longlong)batch_processor;
            resource_table[0][5] = queue_capacity;
            resource_table[0][6] = (longlong)resource_allocator;
            callback_table = resource_table;
            stack_guard = 0xfffffffffffffffe;
            FUN_18015b810();
            FUN_1803a64f0(system_state);
          }
          resource_manager = resource_manager + 1;
        } while (resource_manager != *(longlong **)(render_context + 0x1b98));
      }
      lock_result = _Mtx_unlock(render_context + 0x1bb0);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      if (*(char *)(_DAT_180c86870 + 0xf9) == '\0') {
        *(undefined4 *)(queue_size + 0x124b8) = 0;
      }
      else {
        FUN_180307ca0(render_context, queue_size);
        FUN_180080810(queue_size + 0x9740, render_context + 0x68);
        FUN_180080810(queue_size + 0x9748, render_context + 0x70);
      }
    }
    else if (lock_result != RENDERING_SYSTEM_LOCK_TIMEOUT) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(system_checksum ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统处理渲染批次
// 参数: render_batch_data - 渲染批次数据指针
//       start_index - 起始索引
//       end_index - 结束索引
void rendering_system_process_render_batch(longlong *render_batch_data, int start_index, int end_index)
{
  uint *frame_counter;
  longlong *render_buffer;
  float quality_threshold;
  float quality_factor;
  uint render_flags;
  longlong render_context;
  longlong *render_object;
  char visibility_flag;
  uint priority_bits;
  ulonglong resource_handle;
  longlong allocated_memory;
  bool allocation_success;
  int current_index;
  
  current_index = start_index;
  if (param_2 < param_3) {
    do {
      lVar6 = *(longlong *)*param_1;
      plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x88) + (longlong)iStackX_10 * 8);
      if ((((char)plVar7[7] == '\0') && (*(char *)param_1[1] == '\0')) &&
         ((*(char *)((longlong)plVar7 + 0x39) != '\0' ||
          ((*(float *)param_1[2] < *(float *)(plVar7 + 6) ||
           (*(float *)param_1[3] < *(float *)((longlong)plVar7 + 0x34))))))) {
        if (*(char *)(lVar6 + 0x7d) != '\0') {
          fVar4 = *(float *)(plVar7 + 0x52);
          fVar3 = *(float *)(&DAT_180bf3ff8 +
                            (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
          (**(code **)(*plVar7 + 0x108))(plVar7);
          if (0.08 <= fVar4 + fVar3 * -0.1) goto LAB_1803066f9;
          lVar6 = *(longlong *)*param_1;
        }
        FUN_180308500(lVar6 + 0xa8);
        *(undefined1 *)((longlong)plVar7 + 0x39) = 1;
      }
LAB_1803066f9:
      if ((*(char *)((longlong)plVar7 + 0x39) == '\0') && (cVar8 = FUN_1803068a0(), cVar8 != '\0'))
      {
        cVar8 = '\x01';
      }
      else {
        cVar8 = '\0';
      }
      *(char *)(plVar7 + 9) = cVar8;
      fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
      fVar4 = *(float *)(plVar7 + 6);
      *(float *)(plVar7 + 6) = fVar3 + fVar4;
      if (cVar8 == '\0') {
        *(float *)((longlong)plVar7 + 0x34) =
             *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4) +
             *(float *)((longlong)plVar7 + 0x34);
      }
      else {
        uVar10 = plVar7[0x2b];
        *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
        if (uVar10 != 0) {
          uVar10 = (ulonglong)(byte)(*(char *)(uVar10 + 0x2c8) + 8);
        }
        *(uint *)((longlong)plVar7 + 0x4c) =
             ((int)(fVar3 + fVar4) & 0xfff0U | ((uint)uVar10 & 0xff) << 0x14) << 8 |
             (int)plVar7 >> 4 & 0xfffU;
        lVar6 = param_1[5];
        LOCK();
        puVar1 = (uint *)(lVar6 + 0x78);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        uVar9 = uVar5 >> 0xb;
        if (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) == 0) {
          lVar11 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
          plVar2 = (longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8);
          LOCK();
          bVar12 = *plVar2 == 0;
          if (bVar12) {
            *plVar2 = lVar11;
          }
          UNLOCK();
          if ((!bVar12) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        *(longlong **)
         (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) +
         (ulonglong)(uVar5 + uVar9 * -0x800) * 8) = plVar7;
      }
      iStackX_10 = iStackX_10 + 1;
    } while (iStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803065d4(undefined8 *param_1,int param_2,int param_3)
void FUN_1803065d4(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong in_RAX;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar12;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  int in_stack_00000098;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  *(int *)(in_RAX + 0x10) = param_2;
  do {
    lVar6 = *(longlong *)*param_1;
    plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x88) + (longlong)param_2 * 8);
    if ((((char)plVar7[7] == '\0') && (*(char *)param_1[1] == '\0')) &&
       ((*(char *)((longlong)plVar7 + 0x39) != '\0' ||
        ((*(float *)param_1[2] < *(float *)(plVar7 + 6) ||
         (*(float *)param_1[3] < *(float *)((longlong)plVar7 + 0x34))))))) {
      if (*(char *)(lVar6 + 0x7d) != '\0') {
        fVar4 = *(float *)(plVar7 + 0x52);
        fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4
                          );
        (**(code **)(*plVar7 + 0x108))(plVar7);
        if (0.08 <= fVar4 + fVar3 * -0.1) goto LAB_1803066f9;
        lVar6 = *(longlong *)*param_1;
      }
      FUN_180308500(lVar6 + 0xa8);
      *(undefined1 *)((longlong)plVar7 + 0x39) = 1;
      param_2 = in_stack_00000098;
    }
LAB_1803066f9:
    if ((*(char *)((longlong)plVar7 + 0x39) == '\0') && (cVar8 = FUN_1803068a0(), cVar8 != '\0')) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    *(char *)(plVar7 + 9) = cVar8;
    fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
    fVar4 = *(float *)(plVar7 + 6);
    *(float *)(plVar7 + 6) = fVar3 + fVar4;
    if (cVar8 == '\0') {
      *(float *)((longlong)plVar7 + 0x34) =
           *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4) +
           *(float *)((longlong)plVar7 + 0x34);
    }
    else {
      uVar10 = plVar7[0x2b];
      *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
      if (uVar10 != 0) {
        uVar10 = (ulonglong)(byte)(*(char *)(uVar10 + 0x2c8) + 8);
      }
      *(uint *)((longlong)plVar7 + 0x4c) =
           ((int)(fVar3 + fVar4) & 0xfff0U | ((uint)uVar10 & 0xff) << 0x14) << 8 |
           (int)plVar7 >> 4 & 0xfffU;
      lVar6 = param_1[5];
      LOCK();
      puVar1 = (uint *)(lVar6 + 0x78);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      uVar9 = uVar5 >> 0xb;
      if (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) == 0) {
        lVar11 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
        plVar2 = (longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8);
        LOCK();
        bVar12 = *plVar2 == 0;
        if (bVar12) {
          *plVar2 = lVar11;
        }
        UNLOCK();
        if ((!bVar12) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      *(longlong **)
       (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) + (ulonglong)(uVar5 + uVar9 * -0x800) * 8
       ) = plVar7;
      param_2 = in_stack_00000098;
    }
    in_stack_00000098 = param_2 + 1;
    param_2 = in_stack_00000098;
    if (param_3 <= in_stack_00000098) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180306894(void)
void FUN_180306894(void)

{
  return;
}



bool FUN_1803068a0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,float param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  (**(code **)(*param_2 + 0x218))(param_2);
  (**(code **)(*param_2 + 0x218))(param_2);
  if ((undefined *)*param_2 == &UNK_180a19770) {
    uVar5 = *(uint *)((longlong)param_2 + 0x174);
  }
  else {
    uVar5 = (**(code **)((undefined *)*param_2 + 0x130))(param_2);
  }
  if (((uVar5 & 1) != 0) &&
     ((uVar5 = *(uint *)(param_3 + 0x60300) & 0xfffffffe,
      (uVar5 & *(uint *)(param_2 + 0x2e)) == uVar5 || ((*(uint *)(param_2 + 0x2e) & 1) != 0)))) {
    lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
    fVar6 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
    cVar3 = func_0x0001801be000(param_4 + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)param_2[0x2f] == '\0') {
        FUN_180287b30(param_4 + 0xf0,&fStack_68);
        uStack_5c = 0;
        uStack_4c = 0;
        uStack_3c = 0;
        uStack_2c = 0x3f800000;
        lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
        fVar6 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack_38 = fVar6 * fStack_58 + fStack_68 * fVar2 + fVar1 * fStack_48 + fStack_38;
        fStack_34 = fVar6 * fStack_54 + fStack_64 * fVar2 + fVar1 * fStack_44 + fStack_34;
        fStack_30 = fVar6 * fStack_50 + fStack_60 * fVar2 + fVar1 * fStack_40 + fStack_30;
        if ((0.0 < param_6) && (param_6 < -fStack_30)) {
          return false;
        }
        if ((0.0 < (float)param_5) && (0.0 < param_5._4_4_)) {
          fVar6 = 1.0 / (1.0 - fStack_30 * fStack_30);
          fVar6 = SQRT(ABS(((fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_30 * fStack_30)
                           - 1.0) * fVar6)) *
                  *(float *)(param_4 + 0x14c) * -3.1415927 * *(float *)(param_4 + 0x14c) * fVar6 *
                  *(float *)(param_4 + 0x11c20) * *(float *)(param_4 + 0x11c24) * 0.25;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(param_4 + 0x11c24) * *(float *)(param_4 + 0x11c20);
          }
          return param_5._4_4_ * (float)param_5 < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



bool FUN_1803068ec(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint uVar5;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar6;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined4 uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  if (((in_RAX & 1) != 0) &&
     ((uVar5 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar5 & *(uint *)(unaff_RBX + 0x2e)) == uVar5 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar6 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar6 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar6 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar6 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar6 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar6 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar6 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar6)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar6
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



bool FUN_180306b2c(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong in_RAX;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined4 uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  uVar5 = (**(code **)(in_RAX + 0x130))();
  if (((uVar5 & 1) != 0) &&
     ((uVar6 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar6 & *(uint *)(unaff_RBX + 0x2e)) == uVar6 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar7 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar7 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar7 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar7 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar7 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar7 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar7 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar7)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar7
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar7 < 0.0) {
            fVar7 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar7;
        }
      }
      return true;
    }
  }
  return false;
}





// 函数: void FUN_180306b40(longlong param_1)
void FUN_180306b40(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x1c48) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1c48) + 0x328);
    *puVar1 = *puVar1 & 0xdfffffff;
    plVar2 = *(longlong **)(param_1 + 0x1c48);
    *(undefined8 *)(param_1 + 0x1c48) = 0;
    if (plVar2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180306b8c. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar2 + 0x38))();
      return;
    }
  }
  return;
}



longlong FUN_180306ba0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x1b90);
  if (plVar8 != *(longlong **)(param_1 + 0x1b98)) {
    iVar2 = *(int *)(param_2 + 0x10);
    do {
      lVar4 = *plVar8;
      iVar3 = *(int *)(lVar4 + 0x60);
      iVar6 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(lVar4 + 0x58);
          lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar7;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180306bfe:
        if (iVar6 == 0) {
          return lVar4;
        }
      }
      else if (iVar3 == 0) goto LAB_180306bfe;
      plVar8 = plVar8 + 1;
    } while (plVar8 != *(longlong **)(param_1 + 0x1b98));
  }
  return 0;
}





// 函数: void FUN_180306c30(longlong param_1)
void FUN_180306c30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  iVar3 = _Mtx_lock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar5 = *(longlong **)(param_1 + 0x1b90);
  if (plVar5 != *(longlong **)(param_1 + 0x1b98)) {
    do {
      lVar1 = *plVar5;
      iVar3 = _Mtx_lock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar2 = *(longlong **)(lVar1 + 0x90);
      plVar4 = *(longlong **)(lVar1 + 0x88);
      if (plVar4 != plVar2) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = *(longlong **)(lVar1 + 0x88);
      }
      *(longlong **)(lVar1 + 0x90) = plVar4;
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != *(longlong **)(param_1 + 0x1b98));
  }
  iVar3 = _Mtx_unlock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



bool FUN_180306d20(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*param_2 + 0x4c);
  uVar2 = *(uint *)(*param_1 + 0x4c);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return uVar1 < uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



