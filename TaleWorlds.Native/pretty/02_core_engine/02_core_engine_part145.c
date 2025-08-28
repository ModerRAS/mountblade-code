#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part145.c - 核心引擎模块第145部分
// 本文件包含11个函数，主要处理游戏对象管理、状态更新和内存操作

/* 全局变量引用 */
extern undefined8 _DAT_180c8a9b0;  // 全局数据基地址
extern undefined8 _DAT_180c8a9a8;  // 全局配置基地址
extern undefined8 UNK_180a06578;    // 未知数据结构
extern undefined8 UNK_18098d290;    // 哈希表数据

/**
 * 处理游戏对象批量更新
 * @param context 上下文指针
 * @param data_ptr 数据指针
 * @param count 处理数量
 * @param stack_param 栈参数
 */
void process_game_object_batch(longlong context, longlong data_ptr, int count, ulonglong stack_param)

{
  byte temp_flag;                    // 临时标志位
  short coord_y;                     // Y坐标值
  undefined4 *game_obj_ptr;          // 游戏对象指针
  undefined4 *next_obj_ptr;          // 下一个对象指针
  byte *hash_data_ptr;               // 哈希数据指针
  undefined4 *link_ptr;              // 链接指针
  undefined4 *current_obj_ptr;       // 当前对象指针
  longlong context_data;             // 上下文数据
  undefined8 hash_result;            // 哈希计算结果
  byte flag_bit1;                    // 标志位1
  byte flag_bit2;                    // 标志位2
  uint hash_value;                   // 哈希值
  undefined8 saved_rbx;              // 保存的RBX寄存器值
  longlong loop_counter;             // 循环计数器
  undefined8 saved_rdi;              // 保存的RDI寄存器值
  short *data_ptr;                   // 数据指针
  longlong stack_ptr;                // 栈指针
  undefined8 saved_r14;              // 保存的R14寄存器值
  undefined8 saved_r15;              // 保存的R15寄存器值
  byte stack_byte1;                 // 栈字节1
  byte stack_bytes[7];               // 栈字节数组
  ulonglong stack_param;             // 栈参数
  
  // 保存寄存器值到栈
  *(undefined8 *)(stack_ptr + -0x18) = saved_rdi;
  *(undefined8 *)(stack_ptr + -0x20) = saved_r14;
  data_ptr = (short *)(data_ptr + 0x12);
  *(undefined8 *)(stack_ptr + -0x28) = saved_r15;
  *(undefined8 *)(stack_ptr + 0x18) = saved_rbx;
  loop_counter = (longlong)count;
  do {
    // 检查对象是否有效
    if (*(int *)(data_ptr + -9) != 0) {
      game_obj_ptr = (undefined4 *)FUN_180135960();  // 创建新游戏对象
      // 获取对象上下文数据
      if (*(int *)(data_ptr + -7) == 0) {
        context_data = 0;
      }
      else {
        context_data = FUN_180121fa0(*(undefined8 *)(context + 0x2df8));
      }
      *(longlong *)(game_obj_ptr + 2) = context_data;
      
      // 设置坐标数据
      coord_y = data_ptr[1];
      game_obj_ptr[0xe] = (float)(int)*data_ptr;      // X坐标
      game_obj_ptr[0xf] = (float)(int)coord_y;       // Y坐标
      coord_y = data_ptr[3];
      game_obj_ptr[0x10] = (float)(int)data_ptr[2];    // Z坐标
      game_obj_ptr[0x11] = (float)(int)coord_y;       // W坐标
      coord_y = data_ptr[5];
      game_obj_ptr[0x12] = (float)(int)data_ptr[4];    // U坐标
      game_obj_ptr[0x13] = (float)(int)coord_y;       // V坐标
      
      // 链接对象到上下文
      if (context_data != 0) {
        if (*(longlong *)(context_data + 0x10) == 0) {
          *(undefined4 **)(context_data + 0x10) = game_obj_ptr;
        }
        else if ((context_data != 0) && (*(longlong *)(context_data + 0x18) == 0)) {
          *(undefined4 **)(context_data + 0x18) = game_obj_ptr;
        }
      }
      
      // 设置对象属性
      game_obj_ptr[0x26] = *(undefined4 *)(data_ptr + -5);
      game_obj_ptr[0x14] = (int)(char)data_ptr[-3];
      
      // 设置对象状态标志位
      temp_flag = *(byte *)(game_obj_ptr + 0x28);
      flag_bit1 = -((char)data_ptr[-2] != '\0') & 0x10;  // 标志位1设置
      *(byte *)(game_obj_ptr + 0x28) = flag_bit1 | temp_flag & 0xef;
      
      flag_bit2 = -(*(char *)((longlong)data_ptr + -3) != '\0') & 0x20;  // 标志位2设置
      *(byte *)(game_obj_ptr + 0x28) = flag_bit2 | flag_bit1 | temp_flag & 0xcf;
      
      *(byte *)(game_obj_ptr + 0x28) =
           -((char)data_ptr[-1] != '\0') & 0x40U | flag_bit2 | flag_bit1 | temp_flag & 0x8f;
      
      // 遍历对象链表
      link_ptr = *(undefined4 **)(game_obj_ptr + 2);
      current_obj_ptr = game_obj_ptr;
      while (next_obj_ptr = link_ptr, next_obj_ptr != (undefined4 *)0x0) {
        current_obj_ptr = next_obj_ptr;
        link_ptr = *(undefined4 **)(next_obj_ptr + 2);
      }
      
      // 计算对象哈希值
      FUN_180121200(&stack_byte1,0x14,&UNK_180a06578,*current_obj_ptr);
      hash_value = 0xffffffff;
      hash_data_ptr = stack_bytes;
      temp_flag = stack_byte1;
      while (temp_flag != 0) {
        if (((temp_flag == 0x23) && (*hash_data_ptr == 0x23)) && (hash_data_ptr[1] == 0x23)) {
          hash_value = 0xffffffff;
        }
        hash_value = *(uint *)(&UNK_18098d290 + ((ulonglong)(hash_value & 0xff) ^ (ulonglong)temp_flag) * 4) ^
                 hash_value >> 8;
        temp_flag = *hash_data_ptr;
        hash_data_ptr = hash_data_ptr + 1;
      }
      
      // 设置对象哈希值
      hash_result = FUN_180121fa0(_DAT_180c8a9b0 + 0x1ae0,~hash_value);
      *(undefined8 *)(game_obj_ptr + 0x1a) = hash_result;
    }
    
    // 移动到下一个数据块
    data_ptr = data_ptr + 0x10;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_param ^ (ulonglong)&stack0x00000000);
}





/**
 * 空函数 - 可能是占位符或调试用的空实现
 */
void empty_function_placeholder(void)

{
  return;
}





/**
 * 处理游戏对象状态更新
 * @param context 上下文指针
 */
void process_game_object_status_update(longlong context)

{
  longlong game_obj_ptr;              // 游戏对象指针
  undefined8 context_handle;          // 上下文句柄
  int obj_index;                     // 对象索引
  longlong array_offset;             // 数组偏移量
  
  obj_index = 0;
  // 检查是否有需要处理的对象
  if (0 < *(int *)(context + 0x1aa0)) {
    array_offset = 0;
    do {
      game_obj_ptr = *(longlong *)(array_offset + *(longlong *)(context + 0x1aa8));
      // 检查对象状态条件
      if (((*(int *)(game_obj_ptr + 0x418) != 0) &&
          (*(int *)(context + 0x1a90) + -1 <= *(int *)(game_obj_ptr + 0x280))) &&
         (*(longlong *)(game_obj_ptr + 0x408) == 0)) {
        // 获取上下文句柄并处理对象
        context_handle = FUN_180121fa0(*(undefined8 *)(context + 0x2df8));
        FUN_180136b10(context_handle, game_obj_ptr, 1);
      }
      obj_index = obj_index + 1;
      array_offset = array_offset + 8;
    } while (obj_index < *(int *)(context + 0x1aa0));
  }
  return;
}





/**
 * 批量处理游戏对象状态（使用寄存器变量版本）
 * 使用ESI和RDI寄存器作为参数
 */
void process_game_object_batch_register(void)

{
  longlong game_obj_ptr;              // 游戏对象指针
  undefined8 context_handle;          // 上下文句柄
  uint obj_counter;                   // 对象计数器
  longlong context_ptr;               // 上下文指针
  ulonglong array_offset;             // 数组偏移量
  
  array_offset = (ulonglong)obj_counter;
  do {
    game_obj_ptr = *(longlong *)(array_offset + *(longlong *)(context_ptr + 0x1aa8));
    // 检查对象状态条件
    if (((*(int *)(game_obj_ptr + 0x418) != 0) &&
        (*(int *)(context_ptr + 0x1a90) + -1 <= *(int *)(game_obj_ptr + 0x280))) &&
       (*(longlong *)(game_obj_ptr + 0x408) == 0)) {
      // 获取上下文句柄并处理对象
      context_handle = FUN_180121fa0(*(undefined8 *)(context_ptr + 0x2df8));
      FUN_180136b10(context_handle, game_obj_ptr, 1);
    }
    obj_counter = obj_counter + 1;
    array_offset = array_offset + 8;
  } while ((int)obj_counter < *(int *)(context_ptr + 0x1aa0));
  return;
}





/**
 * 空函数2 - 另一个占位符函数
 */
void empty_function_placeholder2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理游戏对象链接和状态管理
 * @param context 上下文指针
 * @param obj_data 对象数据指针
 */
void manage_game_object_links(longlong context, longlong obj_data)

{
  uint *flag_ptr;                   // 标志指针
  undefined4 obj_id;                 // 对象ID
  undefined4 *temp_obj_ptr;         // 临时对象指针
  int count;                        // 计数器
  undefined8 *main_obj_ptr;         // 主对象指针
  longlong link_target;             // 链接目标
  longlong source_obj;               // 源对象
  ulonglong flag_value;             // 标志值
  undefined8 *null_ptr;             // 空指针
  uint obj_flags;                   // 对象标志
  undefined8 *target_obj;            // 目标对象
  undefined8 *result_obj;            // 结果对象
  int link_index;                   // 链接索引
  undefined1 stack_buffer[8];       // 栈缓冲区
  undefined8 *stack_obj_ptr;         // 栈对象指针
  undefined1 *stack_data_ptr;        // 栈数据指针
  undefined8 *stack_temp_ptr;        // 栈临时指针
  undefined8 special_flag;          // 特殊标志
  
  special_flag = 0xfffffffffffffffe;
  link_target = *(longlong *)(obj_data + 0x18);
  source_obj = *(longlong *)(obj_data + 8);
  main_obj_ptr = *(undefined8 **)(obj_data + 0x10);
  null_ptr = (undefined8 *)0x0;
  link_index = 0;
  target_obj = null_ptr;
  
  // 获取目标对象信息
  if (link_target != 0) {
    target_obj = *(undefined8 **)(link_target + 0x410);
    *(undefined8 *)(link_target + 0x410) = 0;
    if (target_obj == (undefined8 *)0x0) {
      link_index = *(int *)(link_target + 8);
    }
    else if (target_obj[2] == 0) {
      link_index = *(int *)(target_obj[6] + 0x18);
      if (link_index == 0) {
        link_index = *(int *)(target_obj[6] + 0x14);
      }
    }
  }
  
  // 创建或使用现有主对象
  if (main_obj_ptr == (undefined8 *)0x0) {
    main_obj_ptr = (undefined8 *)FUN_180135960(context, 0);
    main_obj_ptr[7] = *(undefined8 *)(source_obj + 0x40);
    main_obj_ptr[8] = *(undefined8 *)(source_obj + 0x48);
    if (*(longlong *)(source_obj + 0x410) == 0) {
      FUN_180136b10(main_obj_ptr, source_obj, 1);
      flag_ptr = (uint *)(*(longlong *)(main_obj_ptr[6] + 8) + 4);
      *flag_ptr = *flag_ptr & 0xffbfffff;
      *(byte *)(source_obj + 0x432) = *(byte *)(source_obj + 0x432) | 1;
    }
  }
  
  // 处理对象标志
  obj_flags = *(uint *)(obj_data + 0x20);
  result_obj = main_obj_ptr;
  if (obj_flags != 0xffffffff) {
    flag_value = (ulonglong)((obj_flags & 0xfffffffd) == 0);
    FUN_18013a1b0(context, main_obj_ptr, 1 < obj_flags, flag_value, *(undefined4 *)(obj_data + 0x24), target_obj, special_flag);
    source_obj = main_obj_ptr[flag_value + 2];
    result_obj = (undefined8 *)main_obj_ptr[(flag_value ^ 1) + 2];
    result_obj[0xd] = main_obj_ptr[0xd];
    *(byte *)(source_obj + 0xa0) =
         *(byte *)(source_obj + 0xa0) ^ (*(byte *)(source_obj + 0xa0) ^ *(byte *)(main_obj_ptr + 0x14)) & 0x20;
    *(byte *)(source_obj + 0xa0) =
         (*(byte *)(source_obj + 0xa0) ^ *(byte *)(main_obj_ptr + 0x14)) & 0x40 ^ *(byte *)(source_obj + 0xa0);
    *(byte *)(main_obj_ptr + 0x14) = *(byte *)(main_obj_ptr + 0x14) & 0xdf;
  }
  
  *(byte *)(result_obj + 0x14) = *(byte *)(result_obj + 0x14) & 0xbf;
  
  // 处理对象链接关系
  if (result_obj != target_obj) {
    count = *(int *)(result_obj + 4);
    if ((0 < count) && (result_obj[6] == 0)) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      stack_obj_ptr = (undefined8 *)func_0x000180120ce0(0x60, _DAT_180c8a9a8);
      stack_data_ptr = stack_buffer;
      main_obj_ptr = null_ptr;
      if (stack_obj_ptr != (undefined8 *)0x0) {
        // 初始化栈对象
        *stack_obj_ptr = 0;
        stack_obj_ptr[1] = 0;
        *(undefined4 *)(stack_obj_ptr + 5) = 0x7f7fffff;
        *(undefined4 *)((longlong)stack_obj_ptr + 0x2c) = 0x7f7fffff;
        *(undefined4 *)(stack_obj_ptr + 6) = 0xff7fffff;
        *(undefined4 *)((longlong)stack_obj_ptr + 0x34) = 0xff7fffff;
        stack_obj_ptr[2] = 0;
        stack_obj_ptr[3] = 0;
        stack_obj_ptr[4] = 0xffffffffffffffff;
        stack_obj_ptr[7] = 0;
        stack_obj_ptr[8] = 0;
        stack_obj_ptr[9] = 0;
        stack_obj_ptr[10] = 0;
        *(undefined4 *)(stack_obj_ptr + 0xb) = 0xffff0000;
        main_obj_ptr = stack_obj_ptr;
      }
      result_obj[6] = main_obj_ptr;
      count = *(int *)(result_obj + 4);
      main_obj_ptr = null_ptr;
      stack_temp_ptr = stack_obj_ptr;
      if (0 < count) {
        do {
          FUN_18011bbb0(result_obj[6], 0, *(undefined8 *)(result_obj[5] + (longlong)null_ptr));
          obj_flags = (int)main_obj_ptr + 1;
          null_ptr = null_ptr + 1;
          count = *(int *)(result_obj + 4);
          main_obj_ptr = (undefined8 *)(ulonglong)obj_flags;
        } while ((int)obj_flags < count);
      }
    }
    
    // 处理不同的链接情况
    if (target_obj == (undefined8 *)0x0) {
      if (link_target != 0) {
        count = *(int *)(link_target + 0x418);
        result_obj[0xe] = link_target;
        FUN_180136b10(result_obj, link_target, 1);
        if (count != 0) {
          FUN_18013bf60(count, *(undefined4 *)result_obj);
        }
      }
    }
    else if (target_obj[2] == 0) {
      obj_id = *(undefined4 *)target_obj;
      FUN_180136f60(result_obj, target_obj);
      FUN_18013bf60(obj_id, *(undefined4 *)result_obj);
      FUN_1801359f0(context, target_obj, 1);
    }
    else {
      if (0 < count) {
        temp_obj_ptr = (undefined4 *)target_obj[0x10];
        FUN_180136f60(result_obj, temp_obj_ptr);
        FUN_180136f60(temp_obj_ptr, result_obj);
        FUN_18013bf60(*(undefined4 *)result_obj, *temp_obj_ptr);
      }
      if ((*(byte *)(result_obj + 0x14) & 0x20) != 0) {
        link_target = FUN_180121fa0(*(undefined8 *)(context + 0x2df8),
                              *(undefined4 *)((longlong)target_obj + 0x94));
        *(byte *)(link_target + 0xa0) = *(byte *)(link_target + 0xa0) | 0x20;
        *(byte *)(result_obj + 0x14) = *(byte *)(result_obj + 0x14) & 0xdf;
      }
      link_target = target_obj[2];
      result_obj[2] = link_target;
      source_obj = target_obj[3];
      result_obj[3] = source_obj;
      if (link_target != 0) {
        *(undefined8 **)(link_target + 8) = result_obj;
        source_obj = result_obj[3];
      }
      if (source_obj != 0) {
        *(undefined8 **)(source_obj + 8) = result_obj;
      }
      *(undefined4 *)(result_obj + 10) = *(undefined4 *)(target_obj + 10);
      result_obj[9] = target_obj[9];
      target_obj[3] = 0;
      target_obj[2] = 0;
      FUN_1801359f0(context, target_obj, 1);
    }
  }
  
  // 更新链接索引
  if (result_obj[6] != 0) {
    *(int *)(result_obj[6] + 0x18) = link_index;
  }
  
  // 更新全局时间值
  if (*(float *)(_DAT_180c8a9b0 + 0x2e04) <= 0.0) {
    *(undefined4 *)(_DAT_180c8a9b0 + 0x2e04) = *(undefined4 *)(_DAT_180c8a9b0 + 0x1c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136850(longlong param_1,undefined4 *param_2)
void FUN_180136850(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 auStackX_10 [8];
  longlong lStackX_18;
  undefined1 *puStackX_20;
  
  lVar2 = *(longlong *)(param_2 + 2);
  if ((lVar2 == 0) || ((*(byte *)(param_2 + 0x28) & 0x20) != 0)) {
    uVar3 = FUN_1801358c0(param_1);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    lStackX_18 = func_0x000180120ce0(0xa8,_DAT_180c8a9a8);
    puStackX_20 = auStackX_10;
    puVar6 = (undefined4 *)0x0;
    puVar5 = puVar6;
    if (lStackX_18 != 0) {
      puVar5 = (undefined4 *)FUN_180136a10(lStackX_18,uVar3);
    }
    *(byte *)(puVar5 + 0x28) = *(byte *)(puVar5 + 0x28) | 3;
    FUN_180122160(*(undefined8 *)(param_1 + 0x2df8),*puVar5,puVar5);
    FUN_180136f60(puVar5,param_2);
    FUN_18013bf60(*param_2,*puVar5);
    puVar8 = puVar6;
    if (0 < (int)puVar5[8]) {
      do {
        lVar2 = *(longlong *)((longlong)puVar8 + *(longlong *)(puVar5 + 10));
        *(undefined8 *)(lVar2 + 0x398) = 0;
        plVar1 = (longlong *)(lVar2 + 0x3b8);
        *plVar1 = lVar2;
        *(longlong *)(lVar2 + 0x3b0) = lVar2;
        *(longlong *)(lVar2 + 0x3a8) = lVar2;
        *(longlong *)(lVar2 + 0x3a0) = lVar2;
        uVar7 = *(uint *)(lVar2 + 0xc);
        while ((uVar7 & 0x800000) != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x398);
          *plVar1 = lVar2;
          uVar7 = *(uint *)(lVar2 + 0xc);
        }
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
        puVar8 = puVar8 + 2;
      } while ((int)uVar7 < (int)puVar5[8]);
    }
    *(byte *)((longlong)puVar5 + 0xa1) = *(byte *)((longlong)puVar5 + 0xa1) | 8;
  }
  else {
    puVar5 = *(undefined4 **)(lVar2 + 0x10);
    lVar4 = 0x10;
    if (puVar5 != param_2) {
      lVar4 = 0x18;
    }
    *(undefined8 *)(lVar4 + lVar2) = 0;
    uVar7 = 0x18;
    if (puVar5 != param_2) {
      uVar7 = 0x10;
    }
    FUN_18013a3d0(param_1,*(longlong *)(param_2 + 2),
                  *(undefined8 *)((ulonglong)uVar7 + *(longlong *)(param_2 + 2)),puVar5,
                  0xfffffffffffffffe);
    *(byte *)(*(longlong *)(param_2 + 2) + 0xa0) = *(byte *)(*(longlong *)(param_2 + 2) + 0xa0) | 2;
    *(undefined8 *)(param_2 + 2) = 0;
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
    *(byte *)((longlong)param_2 + 0xa1) = *(byte *)((longlong)param_2 + 0xa1) | 8;
  }
  if (*(float *)(_DAT_180c8a9b0 + 0x2e04) <= 0.0) {
    *(undefined4 *)(_DAT_180c8a9b0 + 0x2e04) = *(undefined4 *)(_DAT_180c8a9b0 + 0x1c);
  }
  return;
}



undefined4 * FUN_180136a10(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 4;
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) & 0xe0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180136ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_18013ea00(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136b10(undefined4 *param_1,longlong param_2,char param_3,undefined8 param_4)
void FUN_180136b10(undefined4 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  if (*(longlong *)(param_2 + 0x408) != 0) {
    FUN_180136d40(*(longlong *)(param_2 + 0x408),param_2,0,param_4,0xfffffffffffffffe);
  }
  iVar3 = param_1[8];
  iVar2 = param_1[9];
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dc70(param_1 + 8,iVar1);
    iVar3 = param_1[8];
  }
  *(longlong *)(*(longlong *)(param_1 + 10) + (longlong)iVar3 * 8) = param_2;
  param_1[8] = param_1[8] + 1;
  *(undefined4 **)(param_2 + 0x408) = param_1;
  *(undefined4 *)(param_2 + 0x418) = *param_1;
  *(byte *)(param_2 + 0x432) = 1 < (int)param_1[8] | *(byte *)(param_2 + 0x432) & 0xfa;
  if (*(longlong *)(param_1 + 0x1a) == 0) {
    if ((param_1[8] == 2) && (*(char *)(**(longlong **)(param_1 + 10) + 0xb0) == '\0')) {
      *(undefined1 *)(**(longlong **)(param_1 + 10) + 0xb6) = 1;
      *(undefined4 *)(**(longlong **)(param_1 + 10) + 0xd8) = 1;
      if (*(longlong *)(param_1 + 0x1a) != 0) goto LAB_180136c0c;
    }
    if (((*(byte *)(param_1 + 0x28) & 0x10) == 0) && (*(longlong *)(param_1 + 2) == 0)) {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 3;
    }
  }
LAB_180136c0c:
  if (param_3 != '\0') {
    if (*(longlong *)(param_1 + 0xc) == 0) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      puVar4 = (undefined8 *)func_0x000180120ce0(0x60,_DAT_180c8a9a8);
      puVar7 = (undefined8 *)0x0;
      puVar5 = puVar7;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 5) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x7f7fffff;
        *(undefined4 *)(puVar4 + 6) = 0xff7fffff;
        *(undefined4 *)((longlong)puVar4 + 0x34) = 0xff7fffff;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0xffffffffffffffff;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0xffff0000;
        puVar5 = puVar4;
      }
      *(undefined8 **)(param_1 + 0xc) = puVar5;
      *(undefined4 *)(puVar5 + 3) = param_1[0x26];
      *(undefined4 *)(*(longlong *)(param_1 + 0xc) + 0x14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xc) + 0x18);
      puVar5 = puVar7;
      if (0 < param_1[8] + -1) {
        do {
          FUN_18011bbb0(*(undefined8 *)(param_1 + 0xc),0,
                        *(undefined8 *)((longlong)puVar5 + *(longlong *)(param_1 + 10)));
          uVar6 = (int)puVar7 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar6;
          puVar5 = puVar5 + 1;
        } while ((int)uVar6 < param_1[8] + -1);
      }
    }
    FUN_18011bbb0(*(undefined8 *)(param_1 + 0xc),0x400000,param_2);
  }
  func_0x0001801372f0(param_1);
  if (*(longlong *)(param_1 + 0x1a) != 0) {
    func_0x000180129900(param_2,*(uint *)(param_2 + 0xc) | 0x1000000);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180135a4e)
// WARNING: Removing unreachable block (ram,0x000180135a53)
// WARNING: Removing unreachable block (ram,0x000180135a58)
// WARNING: Removing unreachable block (ram,0x000180135a5e)
// WARNING: Removing unreachable block (ram,0x000180135a64)
// WARNING: Removing unreachable block (ram,0x000180135a6c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136d40(int *param_1,longlong param_2,undefined4 param_3)
void FUN_180136d40(int *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  
  *(byte *)(param_2 + 0x432) = *(byte *)(param_2 + 0x432) & 0xfa;
  lVar7 = _DAT_180c8a9b0;
  *(undefined8 *)(param_2 + 0x408) = 0;
  *(undefined4 *)(param_2 + 0x418) = param_3;
  *(undefined8 *)(param_2 + 0x398) = 0;
  *(longlong *)(param_2 + 0x3b8) = param_2;
  *(longlong *)(param_2 + 0x3b0) = param_2;
  *(longlong *)(param_2 + 0x3a8) = param_2;
  *(longlong *)(param_2 + 0x3a0) = param_2;
  uVar17 = *(uint *)(param_2 + 0xc);
  lVar15 = param_2;
  while ((uVar17 & 0x800000) != 0) {
    lVar15 = *(longlong *)(lVar15 + 0x398);
    *(longlong *)(param_2 + 0x3b8) = lVar15;
    uVar17 = *(uint *)(lVar15 + 0xc);
  }
  iVar16 = param_1[8];
  iVar14 = 0;
  if (0 < iVar16) {
    plVar11 = *(longlong **)(param_1 + 10);
    do {
      if (*plVar11 == param_2) {
        plVar11 = *(longlong **)(param_1 + 10) + iVar14;
                    // WARNING: Subroutine does not return
        memmove(plVar11,plVar11 + 1,((longlong)iVar16 - (longlong)iVar14) * 8 + -8);
      }
      iVar14 = iVar14 + 1;
      plVar11 = plVar11 + 1;
    } while (iVar14 < iVar16);
  }
  if (*(longlong *)(param_1 + 0xc) != 0) {
    FUN_18011bc70(*(longlong *)(param_1 + 0xc),*(undefined4 *)(param_2 + 8));
    iVar16 = param_1[8];
    if (iVar16 < (int)(2 - (uint)((*(byte *)(param_1 + 0x28) & 0x20) != 0))) {
      FUN_18013ea00(*(undefined8 *)(param_1 + 0xc));
      iVar16 = param_1[8];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
  }
  if (iVar16 == 0) {
    if (((*(byte *)(param_1 + 0x28) & 0x20) == 0) && (*(int *)(param_2 + 0x418) != *param_1)) {
      uVar5 = *(undefined8 *)(lVar7 + 0x2df8);
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x1a) + 0x410) = 0;
      }
      puVar6 = *(undefined4 **)(param_1 + 2);
      if (puVar6 != (undefined4 *)0x0) {
        piVar19 = *(int **)(puVar6 + 4);
        if (piVar19 == param_1) {
          piVar19 = *(int **)(puVar6 + 6);
        }
        puVar8 = *(undefined4 **)(puVar6 + 4);
        puVar9 = *(undefined4 **)(puVar6 + 6);
        uVar1 = puVar6[0x12];
        uVar2 = puVar6[0x13];
        lVar15 = *(longlong *)(piVar19 + 4);
        *(longlong *)(puVar6 + 4) = lVar15;
        lVar12 = *(longlong *)(piVar19 + 6);
        *(longlong *)(puVar6 + 6) = lVar12;
        if (lVar15 != 0) {
          *(undefined4 **)(lVar15 + 8) = puVar6;
          lVar12 = *(longlong *)(puVar6 + 6);
        }
        if (lVar12 != 0) {
          *(undefined4 **)(lVar12 + 8) = puVar6;
        }
        uVar20 = 0;
        puVar6[0x14] = piVar19[0x14];
        *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(piVar19 + 0x12);
        piVar19[6] = 0;
        piVar19[7] = 0;
        piVar19[4] = 0;
        piVar19[5] = 0;
        if (puVar8 != (undefined4 *)0x0) {
          FUN_180136f60(puVar6,puVar8);
          FUN_18013bf60(*puVar8,*puVar6);
        }
        if (puVar9 != (undefined4 *)0x0) {
          FUN_180136f60(puVar6,puVar9);
          FUN_18013bf60(*puVar9,*puVar6);
        }
        uVar18 = uVar20;
        if (0 < (int)puVar6[8]) {
          do {
            uVar17 = (int)uVar18 + 1;
            uVar3 = puVar6[0xf];
            lVar15 = *(longlong *)(uVar20 + *(longlong *)(puVar6 + 10));
            *(undefined4 *)(lVar15 + 0x40) = puVar6[0xe];
            *(undefined4 *)(lVar15 + 0x44) = uVar3;
            uVar3 = puVar6[0x11];
            lVar15 = *(longlong *)(uVar20 + *(longlong *)(puVar6 + 10));
            *(undefined4 *)(lVar15 + 0x50) = puVar6[0x10];
            *(undefined4 *)(lVar15 + 0x54) = uVar3;
            uVar20 = uVar20 + 8;
            uVar18 = (ulonglong)uVar17;
          } while ((int)uVar17 < (int)puVar6[8]);
        }
        bVar4 = *(byte *)(puVar6 + 0x28);
        *(byte *)(puVar6 + 0x28) = bVar4 & 0xfc;
        *(undefined8 *)(puVar6 + 0x1c) = *(undefined8 *)(piVar19 + 0x1c);
        if (((puVar8 == (undefined4 *)0x0) || ((*(byte *)(puVar8 + 0x28) & 0x20) == 0)) &&
           ((puVar9 == (undefined4 *)0x0 || ((*(byte *)(puVar9 + 0x28) & 0x20) == 0)))) {
          bVar13 = 0;
        }
        else {
          bVar13 = 0x20;
        }
        bVar13 = bVar4 & 0xdc | bVar13;
        *(byte *)(puVar6 + 0x28) = bVar13;
        bVar4 = *(byte *)(piVar19 + 0x28);
        puVar6[0x12] = uVar1;
        puVar6[0x13] = uVar2;
        *(byte *)(puVar6 + 0x28) = (bVar4 ^ bVar13) & 0x40 ^ bVar13;
        if (puVar8 == (undefined4 *)0x0) {
          if (puVar9 == (undefined4 *)0x0) {
            return;
          }
          FUN_180122160(*(undefined8 *)(lVar7 + 0x2df8),*puVar9,0);
          FUN_180136ab0(puVar9);
          if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(puVar9,_DAT_180c8a9a8);
        }
        FUN_180122160(*(undefined8 *)(lVar7 + 0x2df8),*puVar8,0);
        FUN_180136ab0(puVar8);
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(puVar8,_DAT_180c8a9a8);
      }
      FUN_180122160(uVar5,*param_1,0,uVar5,0xfffffffffffffffe);
      FUN_18013ea00(*(undefined8 *)(param_1 + 0xc));
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      lVar15 = *(longlong *)(param_1 + 10);
      if (lVar15 != 0) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar15,_DAT_180c8a9a8);
      }
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
      if (param_1 != (int *)0x0) {
        uVar20 = (ulonglong)param_1 & 0xffffffffffc00000;
        if (uVar20 != 0) {
          lVar15 = uVar20 + 0x80 + ((longlong)param_1 - uVar20 >> 0x10) * 0x50;
          lVar15 = lVar15 - (ulonglong)*(uint *)(lVar15 + 4);
          if ((*(void ***)(uVar20 + 0x70) == &ExceptionList) && (*(char *)(lVar15 + 0xe) == '\0')) {
            *(undefined8 *)param_1 = *(undefined8 *)(lVar15 + 0x20);
            *(int **)(lVar15 + 0x20) = param_1;
            piVar19 = (int *)(lVar15 + 0x18);
            *piVar19 = *piVar19 + -1;
            if (*piVar19 == 0) {
              FUN_18064d630();
              return;
            }
          }
          else {
            func_0x00018064e870(uVar20,CONCAT71(0xff000000,
                                                *(void ***)(uVar20 + 0x70) == &ExceptionList),
                                param_1,uVar20,0xfffffffffffffffe);
          }
        }
        return;
      }
      return;
    }
  }
  else if (((iVar16 == 1) && ((*(byte *)(param_1 + 0x28) & 0x20) == 0)) &&
          (lVar15 = *(longlong *)(param_1 + 0x1a), lVar15 != 0)) {
    lVar7 = **(longlong **)(param_1 + 10);
    if ((*(char *)(lVar15 + 0xae) != '\0') && (*(longlong *)(param_1 + 2) == 0)) {
      *(longlong *)(*(longlong *)(lVar15 + 0x28) + 0x78) = lVar7;
      **(undefined4 **)(*(longlong *)(param_1 + 0x1a) + 0x28) = *(undefined4 *)(lVar7 + 8);
      lVar15 = *(longlong *)(param_1 + 0x1a);
    }
    *(undefined1 *)(lVar7 + 0xb2) = *(undefined1 *)(lVar15 + 0xb2);
  }
  bVar4 = *(byte *)(param_1 + 0x28);
  bVar13 = bVar4 >> 4;
  if (*(longlong *)(param_1 + 2) != 0) {
    bVar13 = bVar4 >> 5;
  }
  bVar13 = bVar13 | 0 < param_1[8];
  if ((*(longlong *)(param_1 + 4) != 0) && ((*(byte *)(*(longlong *)(param_1 + 4) + 0xa0) & 4) != 0)
     ) {
    bVar13 = 1;
  }
  if ((*(longlong *)(param_1 + 6) == 0) || ((*(byte *)(*(longlong *)(param_1 + 6) + 0xa0) & 4) == 0)
     ) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  *(byte *)(param_1 + 0x28) = ((bVar10 | bVar13) << 2 ^ bVar4) & 4 ^ bVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136f60(longlong param_1,longlong param_2)
void FUN_180136f60(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x30) != 0)) {
    bVar6 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x30) = lVar2;
    bVar6 = 1;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar5 = uVar4;
    uVar8 = uVar4;
    do {
      if (lVar2 == 0) {
        lVar3 = *(longlong *)(uVar5 + *(longlong *)(param_2 + 0x28));
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8 + uVar4);
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfe;
      *(undefined8 *)(lVar3 + 0x408) = 0;
      FUN_180136b10(param_1,lVar3,bVar6 ^ 1);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar4 = uVar4 + 0x28;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *(int *)(param_2 + 0x20));
  }
  lVar3 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (lVar2 == 0) {
    if ((bVar6 == 0) && (lVar2 = *(longlong *)(param_2 + 0x30), lVar2 != 0)) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14) = *(undefined4 *)(lVar2 + 0x14);
        lVar2 = *(longlong *)(param_2 + 0x30);
      }
      FUN_18013ea00(lVar2);
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
    return;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x3a8);
    *piVar1 = *piVar1 + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar2,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



