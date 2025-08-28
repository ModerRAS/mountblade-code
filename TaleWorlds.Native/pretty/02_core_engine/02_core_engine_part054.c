#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part054.c - 核心引擎模块第054部分
// 包含15个函数，主要涉及数据结构操作、内存管理和线程同步

// 函数：堆排序插入操作
// 用于在堆数据结构中插入元素并维护堆性质
/**
 * 堆排序插入和平衡操作
 * 在堆数据结构中插入元素并维护堆性质，确保父节点总是小于子节点
 * 
 * @param heap_base 堆的基地址
 * @param heap_size 堆的当前大小
 * @param capacity 堆的容量
 * @param index 插入位置的索引
 * @param new_element 要插入的新元素指针
 */
void heap_insert_and_balance(longlong heap_base, longlong heap_size, longlong capacity, 
                            longlong index, longlong *new_element)
{
  int left_child_key;
  byte *current_byte;
  int right_child_key;
  longlong left_child_data;
  bool should_swap;
  longlong swap_index;
  byte *string_ptr;
  uint compare_char;
  longlong child_index;
  longlong parent_index;
  longlong *parent_node;
  
  // 从当前节点开始向下调整堆
  parent_index = index * 2;
  while (child_index = parent_index + 2, child_index < capacity) {
    swap_index = child_index * 0x10;
    right_child_key = *(int *)(swap_index + 8 + heap_base);
    left_child_key = *(int *)(swap_index + -8 + heap_base);
    
    // 比较左右子节点的键值
    if (right_child_key == left_child_key) {
      left_child_data = *(longlong *)(swap_index + -0x10 + heap_base);
      if (*(int *)(left_child_data + 0x78) == 0) {
        should_swap = false;
      }
      else if (*(int *)(*(longlong *)(swap_index + heap_base) + 0x78) == 0) {
        should_swap = true;
      }
      else {
        // 比较字符串内容
        string_ptr = *(byte **)(left_child_data + 0x70);
        swap_index = *(longlong *)(*(longlong *)(swap_index + heap_base) + 0x70) - (longlong)string_ptr;
        do {
          current_byte = *string_ptr;
          compare_char = (uint)string_ptr[swap_index];
          if (current_byte != compare_char) break;
          string_ptr = string_ptr + 1;
        } while (compare_char != 0);
        should_swap = 0 < (int)(current_byte - compare_char);
      }
    }
    else {
      should_swap = right_child_key < left_child_key;
    }
    
    swap_index = parent_index + 1;
    if (!should_swap) {
      swap_index = child_index;
    }
    
    // 交换节点内容
    *(longlong *)(heap_base + index * 0x10) = *(longlong *)(heap_base + swap_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + 8 + swap_index * 0x10);
    index = swap_index;
    parent_index = swap_index * 2;
  }
  
  // 处理最后一个可能的子节点
  if (child_index == capacity) {
    *(longlong *)(heap_base + index * 0x10) = *(longlong *)(heap_base + -0x10 + child_index * 0x10);
    *(int *)(heap_base + 8 + index * 0x10) = *(int *)(heap_base + -8 + child_index * 0x10);
    index = parent_index + 1;
  }
  
  // 向上调整堆，确保父节点小于子节点
  while (heap_size < index) {
    parent_index = index + -1 >> 1;
    parent_node = (longlong *)(parent_index * 0x10 + heap_base);
    
    if ((int)parent_node[1] == (int)new_element[1]) {
      if (*(int *)(*new_element + 0x78) == 0) {
        should_swap = false;
      }
      else if (*(int *)(*parent_node + 0x78) == 0) {
        should_swap = true;
      }
      else {
        // 比较字符串内容
        string_ptr = *(byte **)(*new_element + 0x70);
        child_index = *(longlong *)(*parent_node + 0x70) - (longlong)string_ptr;
        do {
          current_byte = *string_ptr;
          compare_char = (uint)string_ptr[child_index];
          if (current_byte != compare_char) break;
          string_ptr = string_ptr + 1;
        } while (compare_char != 0);
        should_swap = 0 < (int)(current_byte - compare_char);
      }
    }
    else {
      should_swap = (int)parent_node[1] < (int)new_element[1];
    }
    
    if (!should_swap) break;
    
    // 交换父子节点
    *(longlong *)(heap_base + index * 0x10) = *parent_node;
    *(int *)(heap_base + 8 + index * 0x10) = (int)parent_node[1];
    index = parent_index;
  }
  
  // 将新元素放入最终位置
  *(longlong *)(heap_base + index * 0x10) = *new_element;
  *(int *)(heap_base + 8 + index * 0x10) = (int)new_element[1];
  return;
}



/**
 * 初始化内存块并设置虚函数表
 * 为内存块设置默认的虚函数表指针，并根据标志决定是否释放内存
 * 
 * @param memory_block 内存块指针
 * @param flags 操作标志位
 * @param param3 保留参数
 * @param param4 保留参数
 * @return 返回初始化后的内存块指针
 */
undefined8 *
initialize_memory_block_with_vtable(undefined8 *memory_block, ulonglong flags, undefined8 param3, undefined8 param4)
{
  // 设置虚函数表指针
  *memory_block = &UNK_18098bcb0;
  
  // 如果设置了释放标志，则释放内存
  if ((flags & 1) != 0) {
    free(memory_block, 0x218, param3, param4, 0xfffffffffffffffe);
  }
  
  return memory_block;
}





/**
 * 安全复制字符串到字符串缓冲区
 * 将源字符串安全地复制到目标字符串缓冲区，处理长度限制和缓冲区溢出
 * 
 * @param string_buffer 字符串缓冲区结构体指针
 * @param source_string 源字符串指针
 */
void safe_copy_string_to_buffer(longlong string_buffer, longlong source_string)
{
  longlong string_length;
  
  // 如果源字符串为空，清空缓冲区
  if (source_string == 0) {
    *(int *)(string_buffer + 0x10) = 0;  // 设置长度为0
    **(char **)(string_buffer + 8) = 0;  // 设置字符串内容为空
    return;
  }
  
  // 计算源字符串长度
  string_length = -1;
  do {
    string_length = string_length + 1;
  } while (*(char *)(source_string + string_length) != '\0');
  
  // 如果字符串长度小于512字节，直接复制
  if ((int)string_length < 0x200) {
    *(int *)(string_buffer + 0x10) = (int)string_length;  // 记录字符串长度
    // 安全复制字符串到缓冲区
    strcpy_s(*(char **)(string_buffer + 8), 0x200);
    return;
  }
  
  // 字符串过长，使用扩展处理函数
  FUN_180626f80(&UNK_18098bc48, 0x200, source_string);
  *(int *)(string_buffer + 0x10) = 0;  // 重置长度标志
  **(char **)(string_buffer + 8) = 0;  // 清空字符串内容
  return;
}





/**
 * 安全复制指定长度的字符串到缓冲区
 * 将源字符串的指定长度安全地复制到目标缓冲区，并确保字符串正确终止
 * 
 * @param string_buffer 字符串缓冲区结构体指针
 * @param source_data 源数据指针
 * @param data_length 要复制的数据长度
 */
void safe_copy_string_with_length(longlong string_buffer, undefined8 source_data, int data_length)
{
  // 检查缓冲区大小是否足够
  if (data_length + 1 < 0x200) {
    // 安全复制数据到缓冲区
    memcpy(*(char **)(string_buffer + 8), source_data, (longlong)data_length);
  }
  
  // 确保字符串正确终止
  **(char **)(string_buffer + 8) = 0;  // 添加字符串终止符
  *(int *)(string_buffer + 0x10) = 0;  // 重置长度标志
  return;
}





/**
 * 内存复制包装函数
 * 这是一个内存复制函数的包装，具体实现依赖于上下文
 * 注意：此函数可能不返回，调用时需要谨慎
 */
void memory_copy_wrapper(void)
{
  // 警告：此函数可能不返回
  memcpy();
}





/**
 * 重置字符串对象
 * 将字符串对象重置为初始状态，清空内容和长度信息
 * 
 * @param string_obj 字符串对象指针
 */
void reset_string_object(undefined1 *string_obj)
{
  longlong object_base;
  
  // 清空字符串内容
  *string_obj = 0;
  
  // 重置长度信息
  *(int *)(object_base + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008fe90(longlong param_1,longlong param_2,longlong param_3)
void FUN_18008fe90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_298 [32];
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [520];
  ulonglong uStack_48;
  
  uStack_278 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  puStack_268 = &UNK_180a009c8;
  puStack_260 = auStack_250;
  uStack_258 = 0;
  auStack_250[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_260,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_268 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180090020(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00a18;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800900c0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00ae8;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180090130(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = 0x20;
  FUN_1808fc838(param_1 + 1,8,0x20,&SUB_18005d5f0,FUN_180045af0);
  plVar7 = param_1 + 0x21;
  FUN_1808fc838(plVar7,8,0x20,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 3;
  FUN_1808fc838(param_1 + 0x76,0x20,0x20,FUN_180627850,FUN_180627b90);
  param_1[0x75] = 0;
  _Mtx_init_in_situ(param_1 + 0x106,0x102);
  do {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = (longlong *)plVar7[-0x20];
    plVar7[-0x20] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar4 = (longlong *)FUN_180075030(uVar3,1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = (longlong *)*plVar7;
    *plVar7 = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(longlong *)(*plVar7 + 0x10) + 0x10))((longlong *)(*plVar7 + 0x10),&UNK_180a01310)
    ;
    lVar5 = *plVar7;
    if (*(char *)(lVar5 + 0xfa) != '\x01') {
      *(undefined1 *)(lVar5 + 0xfa) = 1;
      FUN_180079520(lVar5);
      lVar5 = *plVar7;
    }
    if (*(char *)(lVar5 + 0xfb) != '\x01') {
      *(undefined1 *)(lVar5 + 0xfb) = 1;
      FUN_180079520(lVar5);
      lVar5 = *plVar7;
    }
    iVar2 = _Mtx_lock(0x180c91910);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    *(char *)(lVar5 + 0xfc) = *(char *)(lVar5 + 0xfc) + '\x01';
    iVar2 = _Mtx_unlock(0x180c91910);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *param_1 = 0;
  return param_1;
}





// 函数: void FUN_180090380(longlong param_1)
void FUN_180090380(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _Mtx_destroy_in_situ();
  FUN_1808fc8a8(param_1 + 0x3b0,0x20,0x20,FUN_180627b90,uVar1);
  FUN_18005d580();
  FUN_1808fc8a8(param_1 + 0x108,8,0x20,FUN_180045af0);
  FUN_1808fc8a8(param_1 + 8,8,0x20,FUN_180045af0);
  return;
}





// 函数: void FUN_180090420(longlong *param_1)
void FUN_180090420(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[0x1a5] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x1a6] * 8) + -100000;
  FUN_180090b80(param_1);
  *(undefined4 *)(param_1 + 0x1a7) = 0;
  plVar1 = (longlong *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x1a4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a4] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 6,0x20,0x50,FUN_180627b90,uVar2);
  FUN_1808fc8a8(param_1 + 1,8,4,FUN_180045af0);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}





// 函数: void FUN_1800904f0(longlong param_1)
void FUN_1800904f0(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 8,0x20,0x20,FUN_180627b90,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180090520(undefined8 *param_1)
void FUN_180090520(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar1 = _Mtx_lock(param_1 + 0x106);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *param_1 = 0;
  puVar4 = param_1 + 0x21;
  puVar3 = param_1 + 0x51;
  lVar2 = 0x20;
  do {
    *(undefined4 *)(puVar3 + -0x10) = 0x49742400;
    *(undefined4 *)puVar3 = 0x3dcccccd;
    (**(code **)(*(longlong *)puVar4[-0x20] + 0xd8))();
    FUN_180076760(*puVar4);
    puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180057110(param_1 + 0x71);
  iVar1 = _Mtx_unlock(param_1 + 0x106);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800905f0(float *param_1,float param_2)
void FUN_1800905f0(float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = _Mtx_lock(param_1 + 0x20c);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  param_1[0x82] = param_1[0x82] + param_2;
  param_1[0x83] = param_1[0x83] + param_2;
  param_1[0x84] = param_1[0x84] + param_2;
  param_1[0x85] = param_1[0x85] + param_2;
  param_1[0x86] = param_1[0x86] + param_2;
  param_1[0x87] = param_1[0x87] + param_2;
  param_1[0x88] = param_1[0x88] + param_2;
  param_1[0x89] = param_1[0x89] + param_2;
  param_1[0x8a] = param_1[0x8a] + param_2;
  param_1[0x8b] = param_1[0x8b] + param_2;
  param_1[0x8c] = param_1[0x8c] + param_2;
  param_1[0x8d] = param_1[0x8d] + param_2;
  param_1[0x8e] = param_1[0x8e] + param_2;
  param_1[0x8f] = param_1[0x8f] + param_2;
  param_1[0x90] = param_1[0x90] + param_2;
  param_1[0x91] = param_1[0x91] + param_2;
  param_1[0x92] = param_1[0x92] + param_2;
  param_1[0x93] = param_1[0x93] + param_2;
  param_1[0x94] = param_1[0x94] + param_2;
  param_1[0x95] = param_1[0x95] + param_2;
  param_1[0x96] = param_1[0x96] + param_2;
  param_1[0x97] = param_1[0x97] + param_2;
  param_1[0x98] = param_1[0x98] + param_2;
  param_1[0x99] = param_1[0x99] + param_2;
  param_1[0x9a] = param_1[0x9a] + param_2;
  param_1[0x9b] = param_1[0x9b] + param_2;
  param_1[0x9c] = param_1[0x9c] + param_2;
  param_1[0x9d] = param_1[0x9d] + param_2;
  param_1[0x9e] = param_1[0x9e] + param_2;
  param_1[0x9f] = param_1[0x9f] + param_2;
  param_1[0xa0] = param_1[0xa0] + param_2;
  param_1[0xa1] = param_1[0xa1] + param_2;
  fVar2 = *param_1 - param_2 * 0.1;
  *param_1 = fVar2;
  if (fVar2 < 0.0) {
    *param_1 = 0.0;
  }
  iVar1 = _Mtx_unlock(param_1 + 0x20c);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800909ad)



// 函数: void FUN_180090710(float *param_1,undefined8 param_2,undefined4 *param_3)
void FUN_180090710(float *param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined2 uStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  
  uStack_c8 = 0xfffffffffffffffe;
  iVar3 = _Mtx_lock(param_1 + 0x20c);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_108 = 0x3f800000;
  uStack_100 = 0;
  uStack_f8 = 0x3f80000000000000;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_d8 = 0x3a03126f;
  _uStack_d0 = CONCAT44(0x3f800000,*param_3);
  fVar10 = 0.1 - *param_1;
  iVar3 = 0;
  do {
    uVar4 = (int)param_1[1] + 0x20 + iVar3 & 0x8000001f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
    }
    lVar6 = (longlong)(int)uVar4;
    if (param_1[lVar6 + 0x82] < 10.0) {
      fVar10 = fVar10 + param_1[lVar6 + 0xa2];
      uStack_d8 = CONCAT44(fVar10,(undefined4)uStack_d8);
      fVar1 = param_1[lVar6 + 0xc2];
      fVar9 = param_1[lVar6 + 0x82] - 6.0;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fStack_17c = 1.0 - fVar9 * 0.16666666;
      uVar4 = (uint)(fStack_17c * 256.0);
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xfe < (int)uVar4) {
        uVar4 = 0xfe;
      }
      uVar7 = (uint)fVar1 & 0xffffff;
      uStack_188 = 0x3f800000;
      uStack_184 = 0x3f800000;
      uStack_180 = 0x3f800000;
      (**(code **)(**(longlong **)(param_1 + lVar6 * 2 + 2) + 0x108))
                (*(longlong **)(param_1 + lVar6 * 2 + 2),&uStack_188);
      plVar2 = *(longlong **)(param_1 + lVar6 * 2 + 2);
      if (*(code **)(*plVar2 + 0xc0) == (code *)&UNK_180277e10) {
        cVar8 = (plVar2[8] - plVar2[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        cVar8 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      }
      lVar5 = 0;
      if (cVar8 == '\0') {
        lVar5 = *(longlong *)plVar2[7];
      }
      *(float *)(lVar5 + 0x238) = (float)(uVar7 >> 0x10) * 0.003921569;
      *(float *)(lVar5 + 0x23c) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x240) = (float)((uint)fVar1 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x244) = (float)(uVar4 & 0xff) * 0.003921569;
      uVar4 = ((0xff - uVar4) * 2) / 3;
      if (0xfe < uVar4) {
        uVar4 = 0xfe;
      }
      lVar5 = *(longlong *)(param_1 + lVar6 * 2 + 0x42);
      uVar7 = ((uVar4 | 0xffffff00) << 8 | uVar4) << 8 | uVar4;
      *(float *)(lVar5 + 0x238) = (float)(uVar7 >> 0x10 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x23c) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x240) = (float)(uVar4 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x244) = (float)(uVar7 >> 0x18) * 0.003921569;
      uStack_178 = 0;
      uStack_170 = 0xffffffff;
      uStack_16c = 0xff00;
      uStack_168 = 0;
      uStack_160 = 0xffffffffffffffff;
      uStack_158 = 0xffffffff;
      uStack_154 = 0xff;
      uStack_150 = 0xffffffff;
      uStack_14c = 0;
      uStack_144 = 0x400;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_110 = 0;
      FUN_180077750(*(undefined8 *)(param_1 + lVar6 * 2 + 0x42),param_2,&uStack_108,0,&uStack_178);
      (**(code **)(**(longlong **)(param_1 + lVar6 * 2 + 2) + 0x1c8))
                (*(longlong **)(param_1 + lVar6 * 2 + 2),param_2,0,&uStack_108,&uStack_178);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar3 = _Mtx_unlock(param_1 + 0x20c);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}





// 函数: void FUN_180090b80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180090b80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0xd28) =
       *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0xd30) * 8);
  plVar2 = *(longlong **)(param_1 + 0xd20);
  *(undefined8 *)(param_1 + 0xd20) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0xd3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xff101010;
  plVar2 = (longlong *)(param_1 + 0x30);
  lVar1 = 0x50;
  plVar3 = plVar2;
  do {
    (**(code **)(*plVar3 + 0x10))(plVar2,&DAT_18098bc73,param_3,param_4,uVar4);
    plVar2 = plVar2 + 4;
    plVar3 = plVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0xd04) = 0;
  *(undefined4 *)(param_1 + 0xd08) = 0xbcf5c28f;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  plVar2 = *(longlong **)(param_1 + 0xd20);
  *(undefined8 *)(param_1 + 0xd20) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0xd40) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180090c80(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  FUN_1808fc838(param_1 + 1,8,4,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 6,0x20,0x50,FUN_180627850,FUN_180627b90);
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  param_1[0x1a5] = _DAT_180c8ed30;
  plVar3 = (longlong *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0xbcf5c28f;
  plVar3 = (longlong *)param_1[1];
  param_1[1] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[2];
  param_1[2] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[3];
  param_1[3] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[4];
  param_1[4] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x1a7) = 0;
  *(undefined4 *)(param_1 + 5) = 0xff101010;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar3 = (longlong *)FUN_180075030(uVar2,1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x10))((longlong *)(*param_1 + 0x10),&UNK_180a01378)
  ;
  return param_1;
}



undefined8 *
FUN_180090e40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  FUN_180090130(param_1 + 6);
  FUN_180090c80(param_1 + 0x116);
  param_1[0x2c0] = 0;
  func_0x0001800e7950((longlong)param_1 + 0x1614);
  param_1[0x2d3] = 0;
  FUN_180094c20(param_1 + 0x2d4);
  param_1[0x2fc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17ec) = 0;
  param_1[0x300] = 0;
  _Mtx_init_in_situ(param_1 + 0x301,2,param_3,param_4,uVar2);
  param_1[0x30b] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 3;
  *(undefined2 *)((longlong)param_1 + 0x1609) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x160c) = 1;
  plVar1 = (longlong *)param_1[0x2c0];
  param_1[0x2c0] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x2fd) = 1;
  FUN_180090520(param_1 + 6);
  *param_1 = 0;
  plVar1 = (longlong *)param_1[0x300];
  param_1[0x300] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x30b];
  param_1[0x30b] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined2 *)(param_1 + 0x311) = 0x101;
  param_1[0x2fc] = 0x3f0000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x17ec) = 0x4434000044a00000;
  *(undefined1 *)(param_1 + 0x2bf) = 0;
  param_1[0x2c4] = 0;
  *(undefined2 *)(param_1 + 0x2c5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162a) = 0;
  *(undefined1 *)(param_1 + 0x2c2) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x30c] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180091020(void)
void FUN_180091020(void)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  lVar6 = _DAT_180c86950;
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(_DAT_180c86950 + 0x1889) = *(undefined1 *)(_DAT_180c86950 + 0x1888);
  cVar1 = *(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                   (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48);
  *(char *)(lVar6 + 0x1888) = cVar1;
  cVar2 = *(char *)(lVar6 + 0x1889);
  if (*(int *)(_DAT_180c86920 + 0x2370) == 0) {
    if (cVar1 == cVar2) goto LAB_1800911c4;
    if (cVar1 != '\0') goto LAB_180091164;
    puStack_88 = &UNK_1809fcc58;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = 0x17;
    uVar11 = strcpy_s(auStack_70,0x40,&UNK_180a01360);
    uStack_b8 = 1;
    uVar11 = FUN_180157390(uVar11,&plStack_98,&puStack_88,0);
    FUN_180060b80(lVar6 + 0x1698,uVar11);
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    puStack_88 = &UNK_18098bcb0;
    (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x60))();
LAB_180091192:
    (**(code **)(*_DAT_180c86878 + 0x10))();
  }
  else {
LAB_180091164:
    if (*(longlong **)(lVar6 + 0x1698) != (longlong *)0x0) {
      cVar7 = (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0xd8))();
      if (cVar7 != '\0') {
        (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x68))();
        goto LAB_180091192;
      }
    }
  }
  if (((cVar1 != cVar2) && (_DAT_180c8a9c0 != 0)) && (*(longlong *)(_DAT_180c8a9c0 + 0x10) != 0)) {
    (**(code **)(_DAT_180c8a9c0 + 0x80))(*(undefined1 *)(lVar6 + 0x1888));
  }
LAB_1800911c4:
  FUN_180093af0(lVar6);
  FUN_1800905f0(lVar6 + 0x30);
  if ((DAT_180c82860 == '\0') && (*(int *)(_DAT_180c86908 + 0x7e0) == 0)) {
    if ((**(char **)(_DAT_180c868d0 + 0x2010) == '\0') ||
       (*(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                 (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48) ==
        '\0')) {
      FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),0);
    }
    else {
      lVar3 = *(longlong *)(_DAT_180c86870 + 8);
      uVar8 = (ulonglong)(*(uint *)(lVar3 + 0x13c) & 1);
      lVar4 = *(longlong *)(_DAT_180c86870 + 8);
      uVar9 = (ulonglong)(*(uint *)(lVar4 + 0x13c) & 1);
      lVar5 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar5 + 0x13c) & 1);
      iStack_a4 = *(int *)(lVar4 + 0xf0 + uVar9 * 0x48) + *(int *)(lVar3 + 0xb0 + uVar8 * 0x48);
      iStack_a8 = *(int *)(lVar4 + 0xec + uVar9 * 0x48) + *(int *)(lVar3 + 0xac + uVar8 * 0x48);
      iStack_9c = *(int *)(lVar5 + 0xf0 + uVar10 * 0x48) + *(int *)(lVar3 + 0xb8 + uVar8 * 0x48);
      iStack_a0 = *(int *)(lVar5 + 0xec + uVar10 * 0x48) + *(int *)(lVar3 + 0xb4 + uVar8 * 0x48);
      FUN_180171fb0(*(undefined8 *)(_DAT_180c86870 + 8),&iStack_a8);
      lVar3 = *(longlong *)(_DAT_180c868d0 + 0x2010);
      FUN_180093780(lVar3,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8));
      lVar3 = _DAT_180c868d0;
      *(float *)(lVar6 + 0x17e0) =
           (float)*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2010) + 4) / *(float *)(lVar6 + 0x17ec);
      *(float *)(lVar6 + 0x17e4) =
           (float)*(int *)(*(longlong *)(lVar3 + 0x2010) + 8) / *(float *)(lVar6 + 0x17f0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800913a0(void)
void FUN_1800913a0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(char **)(_DAT_180c868d0 + 0x2010);
  iVar2 = (int)(*(float *)(_DAT_180c86950 + 0x17f0) * *(float *)(_DAT_180c86950 + 0x17e4));
  iVar3 = (int)(*(float *)(_DAT_180c86950 + 0x17ec) * *(float *)(_DAT_180c86950 + 0x17e0));
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 4) = iVar3;
    *(int *)(pcVar1 + 8) = iVar2;
    *pcVar1 = '\x01';
    return;
  }
  if ((*(int *)(pcVar1 + 4) == iVar3) && (*(int *)(pcVar1 + 8) == iVar2)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a16bd0,*(int *)(pcVar1 + 4),*(undefined4 *)(pcVar1 + 8),iVar3
                ,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



