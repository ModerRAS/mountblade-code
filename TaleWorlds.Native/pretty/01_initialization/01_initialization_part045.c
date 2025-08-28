#include "TaleWorlds.Native.Split.h"

// 01_initialization_part045.c - 8 个函数

/**
 * 从数据流中反序列化对象数组
 * 该函数从二进制数据流中读取并反序列化一个对象数组，
 * 包含字符串数据、数组数据和嵌套对象的处理
 * 
 * @param object_manager 对象管理器指针
 * @param data_stream 数据流指针
 */
void DeserializeObjectArray(longlong *object_manager, longlong *data_stream)

{
  longlong *object_array;
  int *data_ptr;
  uint string_length;
  int array_size;
  longlong current_pos;
  ulonglong alloc_size;
  longlong zero_value;
  longlong object_count;
  uint *string_data;
  longlong base_address;
  longlong offset;
  longlong *current_object;
  
  string_length = **(uint **)(data_stream + 8);
  string_data = *(uint **)(data_stream + 8) + 1;
  *(uint **)(data_stream + 8) = string_data;
  if (string_length != 0) {
    (**(code **)(*object_manager + 0x18))(object_manager,string_data,string_length);
    *(longlong *)(data_stream + 8) = *(longlong *)(data_stream + 8) + (ulonglong)string_length;
    string_data = *(uint **)(data_stream + 8);
  }
  object_count = (longlong)(int)*string_data;
  *(uint **)(data_stream + 8) = string_data + 1;
  object_array = object_manager + 4;
  ResizeObjectArray(object_array, object_count);
  current_pos = *(longlong *)(data_stream + 8);
  zero_value = 0;
  offset = zero_value;
  if (0 < object_count) {
    do {
      base_address = *object_array;
      *(int **)(data_stream + 8) = (int *)(current_pos + 8);
      array_size = *(int *)(current_pos + 8);
      current_object = (longlong *)(base_address + offset);
      *(longlong *)(data_stream + 8) = current_pos + 0xc;
      if (0 < array_size) {
        *(short *)(current_object + 2) = (short)array_size;
        if (current_object[1] != 0) {
                    // WARNING: Subroutine does not return
          HandleMemoryAllocationError();
        }
        current_object[1] = 0;
        if (*current_object == 0) {
          *current_object = 0;
          if ((ulonglong)*(ushort *)(current_object + 2) == 0) {
            alloc_size = 0;
            current_pos = zero_value;
          }
          else {
            lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(current_object + 2) * 4,4);
            alloc_size = (ulonglong)*(ushort *)(current_object + 2);
          }
          current_object[1] = current_pos;
          if (alloc_size != 0) {
            zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
          }
          *current_object = zero_value;
                    // WARNING: Subroutine does not return
          memcpy(current_object[1],*(undefined8 *)(data_stream + 8),(longlong)(array_size * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      base_address = *object_array;
      data_ptr = (int *)(current_pos + 0x14);
      *(int **)(data_stream + 8) = data_ptr;
      current_pos = current_pos + 0x18;
      array_size = *data_ptr;
      base_address = base_address + offset;
      *(longlong *)(data_stream + 8) = current_pos;
      if (0 < array_size) {
        *(short *)(base_address + 0x22) = (short)array_size;
        if (*(longlong *)(base_address + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          HandleMemoryAllocationError();
        }
        *(undefined8 *)(base_address + 0x1a) = 0;
        if (*(longlong *)(base_address + 0x12) == 0) {
          *(undefined8 *)(base_address + 0x12) = 0;
          if ((ulonglong)*(ushort *)(base_address + 0x22) == 0) {
            alloc_size = 0;
            current_pos = zero_value;
          }
          else {
            lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(base_address + 0x22) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(lVar10 + 0x22);
          }
          *(longlong *)(base_address + 0x1a) = current_pos;
          if (alloc_size != 0) {
            zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
          }
          *(longlong *)(base_address + 0x12) = zero_value;
                    // WARNING: Subroutine does not return
          memcpy(*(undefined8 *)(base_address + 0x1a),*(undefined8 *)(data_stream + 8),(longlong)(array_size * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + 0x24;
    } while (lVar8 != 0);
  }
  *(int **)(param_2 + 8) = (int *)(lVar5 + 8);
  iVar4 = *(int *)(lVar5 + 8);
  *(longlong *)(param_2 + 8) = lVar5 + 0xc;
  if (iVar4 < 1) {
    *(int **)(param_2 + 8) = (int *)(lVar5 + 0x14);
    iVar4 = *(int *)(lVar5 + 0x14);
    *(longlong *)(param_2 + 8) = lVar5 + 0x18;
    if (iVar4 < 1) {
      return;
    }
    *(short *)((longlong)param_1 + 0x62) = (short)iVar4;
    if (*(longlong *)((longlong)param_1 + 0x5a) == 0) {
      *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
      if (*(longlong *)((longlong)param_1 + 0x52) == 0) {
        *(undefined8 *)((longlong)param_1 + 0x52) = 0;
        if ((ulonglong)*(ushort *)((longlong)param_1 + 0x62) == 0) {
          uVar6 = 0;
          lVar5 = lVar7;
        }
        else {
          lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)((longlong)object_manager + 0x62) * 4,
                                4);
          uVar6 = (ulonglong)*(ushort *)((longlong)param_1 + 0x62);
        }
        *(longlong *)((longlong)param_1 + 0x5a) = lVar5;
        if (uVar6 != 0) {
          lVar7 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 4,4);
        }
        *(longlong *)((longlong)param_1 + 0x52) = lVar7;
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)((longlong)param_1 + 0x5a),*(undefined8 *)(param_2 + 8),
               (longlong)(iVar4 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(param_1 + 10) = (short)iVar4;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  if (param_1[8] == 0) {
    param_1[8] = 0;
    if ((ulonglong)*(ushort *)(param_1 + 10) == 0) {
      uVar6 = 0;
      lVar5 = lVar7;
    }
    else {
      lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(object_manager + 10) * 4,4);
      uVar6 = (ulonglong)*(ushort *)(param_1 + 10);
    }
    param_1[9] = lVar5;
    if (uVar6 != 0) {
      lVar7 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 4,4);
    }
    param_1[8] = lVar7;
                    // WARNING: Subroutine does not return
    memcpy(param_1[9],*(undefined8 *)(param_2 + 8),(longlong)(iVar4 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 从数据流中反序列化对象数组（变体版本）
 * 功能与DeserializeObjectArray相同，但使用不同的寄存器传递参数
 * 
 * @param object_manager 对象管理器指针
 */
void DeserializeObjectArrayVariant(longlong *object_manager)

{
  longlong *object_array;
  int *data_ptr;
  uint string_length;
  int array_size;
  uint *input_data;
  longlong current_pos;
  ulonglong alloc_size;
  longlong zero_value;
  longlong object_count;
  uint *string_data;
  longlong base_address;
  longlong data_stream;
  longlong offset;
  longlong *current_object;
  
  uVar3 = *in_RAX;
  puVar9 = in_RAX + 1;
  *(uint **)(unaff_RDI + 8) = puVar9;
  if (string_length != 0) {
    (**(code **)(*object_manager + 0x18))(object_manager,string_data,string_length);
    *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + (ulonglong)uVar3;
    puVar9 = *(uint **)(unaff_RDI + 8);
  }
  object_count = (longlong)(int)*string_data;
  *(uint **)(unaff_RDI + 8) = puVar9 + 1;
  object_array = object_manager + 4;
  ResizeObjectArray(object_array, object_count);
  lVar5 = *(longlong *)(unaff_RDI + 8);
  zero_value = 0;
  offset = zero_value;
  if (0 < object_count) {
    do {
      base_address = *object_array;
      *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 8);
      array_size = *(int *)(current_pos + 8);
      current_object = (longlong *)(base_address + offset);
      *(longlong *)(unaff_RDI + 8) = lVar5 + 0xc;
      if (0 < array_size) {
        *(short *)(current_object + 2) = (short)array_size;
        if (current_object[1] != 0) {
                    // WARNING: Subroutine does not return
          HandleMemoryAllocationError();
        }
        current_object[1] = 0;
        if (*current_object == 0) {
          *current_object = 0;
          if ((ulonglong)*(ushort *)(current_object + 2) == 0) {
            alloc_size = 0;
            current_pos = zero_value;
          }
          else {
            lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(current_object + 2) * 4,4);
            alloc_size = (ulonglong)*(ushort *)(current_object + 2);
          }
          current_object[1] = current_pos;
          if (alloc_size != 0) {
            zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
          }
          *current_object = zero_value;
                    // WARNING: Subroutine does not return
          memcpy(plVar12[1],*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar4 * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      base_address = *object_array;
      data_ptr = (int *)(current_pos + 0x14);
      *(int **)(unaff_RDI + 8) = piVar2;
      current_pos = current_pos + 0x18;
      array_size = *data_ptr;
      base_address = base_address + offset;
      *(longlong *)(unaff_RDI + 8) = lVar5;
      if (0 < array_size) {
        *(short *)(base_address + 0x22) = (short)array_size;
        if (*(longlong *)(base_address + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          HandleMemoryAllocationError();
        }
        *(undefined8 *)(base_address + 0x1a) = 0;
        if (*(longlong *)(base_address + 0x12) == 0) {
          *(undefined8 *)(base_address + 0x12) = 0;
          if ((ulonglong)*(ushort *)(base_address + 0x22) == 0) {
            alloc_size = 0;
            current_pos = zero_value;
          }
          else {
            lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(base_address + 0x22) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(lVar10 + 0x22);
          }
          *(longlong *)(base_address + 0x1a) = current_pos;
          if (alloc_size != 0) {
            zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
          }
          *(longlong *)(base_address + 0x12) = zero_value;
                    // WARNING: Subroutine does not return
          memcpy(*(undefined8 *)(lVar10 + 0x1a),*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar4 * 4)
                );
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + 0x24;
    } while (lVar8 != 0);
  }
  *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 8);
  iVar4 = *(int *)(lVar5 + 8);
  *(longlong *)(unaff_RDI + 8) = lVar5 + 0xc;
  if (iVar4 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 0x14);
    iVar4 = *(int *)(lVar5 + 0x14);
    *(longlong *)(unaff_RDI + 8) = lVar5 + 0x18;
    if (iVar4 < 1) {
      return;
    }
    *(short *)((longlong)param_1 + 0x62) = (short)iVar4;
    if (*(longlong *)((longlong)param_1 + 0x5a) == 0) {
      *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
      if (*(longlong *)((longlong)param_1 + 0x52) == 0) {
        *(undefined8 *)((longlong)param_1 + 0x52) = 0;
        if ((ulonglong)*(ushort *)((longlong)param_1 + 0x62) == 0) {
          uVar6 = 0;
          lVar5 = lVar7;
        }
        else {
          lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)((longlong)object_manager + 0x62) * 4,
                                4);
          uVar6 = (ulonglong)*(ushort *)((longlong)param_1 + 0x62);
        }
        *(longlong *)((longlong)param_1 + 0x5a) = lVar5;
        if (uVar6 != 0) {
          lVar7 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 4,4);
        }
        *(longlong *)((longlong)param_1 + 0x52) = lVar7;
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)((longlong)param_1 + 0x5a),*(undefined8 *)(unaff_RDI + 8),
               (longlong)(iVar4 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(param_1 + 10) = (short)iVar4;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  if (param_1[8] == 0) {
    param_1[8] = 0;
    if ((ulonglong)*(ushort *)(param_1 + 10) == 0) {
      uVar6 = 0;
      lVar5 = lVar7;
    }
    else {
      lVar5 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(object_manager + 10) * 4,4);
      uVar6 = (ulonglong)*(ushort *)(param_1 + 10);
    }
    param_1[9] = lVar5;
    if (uVar6 != 0) {
      lVar7 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 4,4);
    }
    param_1[8] = lVar7;
                    // WARNING: Subroutine does not return
    memcpy(param_1[9],*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar4 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 批量处理对象数组的反序列化
 * 该函数处理多个对象的反序列化，使用循环遍历对象数组
 * 
 * @param data_start 数据起始位置
 */
void BatchDeserializeObjects(longlong data_start)

{
  int data_size;
  ulonglong alloc_size;
  longlong current_pos;
  longlong *object_base;
  longlong object_offset;
  ulonglong zero_value;
  longlong data_stream;
  longlong iteration_count;
  ulonglong *current_object;
  longlong target_object;
  
  uVar5 = unaff_RSI & 0xffffffff;
  do {
    lVar3 = param_1;
    lVar4 = *unaff_RBX;
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 8);
    iVar1 = *(int *)(lVar3 + 8);
    puVar6 = (ulonglong *)(lVar4 + uVar5);
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0xc;
    if (0 < iVar1) {
      *(short *)(puVar6 + 2) = (short)iVar1;
      if (puVar6[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar6[1] = unaff_RSI;
      if (*puVar6 == 0) {
        *puVar6 = unaff_RSI;
        if ((ulonglong)(ushort)puVar6[2] == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)(ushort)current_object[2] * 4,4);
          uVar5 = (ulonglong)(ushort)puVar6[2];
        }
        puVar6[1] = uVar2;
        if (uVar5 != 0) {
          zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
        }
        *puVar6 = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(puVar6[1],*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar4 = *unaff_RBX;
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x14);
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar4 = lVar4 + uVar5;
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0x18;
    if (0 < iVar1) {
      *(short *)(lVar4 + 0x22) = (short)iVar1;
      if (*(longlong *)(lVar4 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(lVar4 + 0x1a) = unaff_RSI;
      if (*(longlong *)(lVar4 + 0x12) == 0) {
        *(ulonglong *)(lVar4 + 0x12) = unaff_RSI;
        if ((ulonglong)*(ushort *)(lVar4 + 0x22) == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(object_offset + 0x22) * 4,4);
          uVar5 = (ulonglong)*(ushort *)(lVar4 + 0x22);
        }
        *(ulonglong *)(lVar4 + 0x1a) = uVar2;
        if (uVar5 != 0) {
          zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
        }
        *(ulonglong *)(lVar4 + 0x12) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(lVar4 + 0x1a),*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar5 = uVar5 + 0x24;
    unaff_R13 = unaff_R13 + -1;
    param_1 = lVar3 + 0x18;
  } while (unaff_R13 != 0);
  *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x20);
  iVar1 = *(int *)(lVar3 + 0x20);
  *(longlong *)(unaff_RDI + 8) = lVar3 + 0x24;
  if (iVar1 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x2c);
    iVar1 = *(int *)(lVar3 + 0x2c);
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0x30;
    if (iVar1 < 1) {
      return;
    }
    *(short *)(unaff_R15 + 0x62) = (short)iVar1;
    if (*(longlong *)(unaff_R15 + 0x5a) == 0) {
      *(ulonglong *)(unaff_R15 + 0x5a) = unaff_RSI;
      if (*(longlong *)(unaff_R15 + 0x52) == 0) {
        *(ulonglong *)(unaff_R15 + 0x52) = unaff_RSI;
        if ((ulonglong)*(ushort *)(unaff_R15 + 0x62) == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(target_object + 0x62) * 4,4);
          uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x62);
        }
        *(ulonglong *)(unaff_R15 + 0x5a) = uVar2;
        if (uVar5 != 0) {
          zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
        }
        *(ulonglong *)(unaff_R15 + 0x52) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(unaff_R15 + 0x5a),*(undefined8 *)(unaff_RDI + 8),
               (longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(unaff_R15 + 0x50) = (short)iVar1;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(ulonglong *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(ulonglong *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar5 = 0;
      uVar2 = unaff_RSI;
    }
    else {
      uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(target_object + 0x50) * 4,4);
      uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(ulonglong *)(unaff_R15 + 0x48) = uVar2;
    if (uVar5 != 0) {
      unaff_RSI = FUN_18062b420(_DAT_180c8ed18,uVar5 << 4,4);
    }
    *(ulonglong *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(unaff_R15 + 0x48),*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 反序列化单个对象的简化版本
 * 处理单个对象的反序列化，不包含循环处理
 * 
 * @param data_start 数据起始位置
 */
void DeserializeSingleObject(longlong data_start)

{
  int data_size;
  undefined8 zero_value;
  ulonglong alloc_size;
  undefined8 null_pointer;
  longlong data_stream;
  longlong target_object;
  
  *(int **)(unaff_RDI + 8) = (int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 8);
  *(longlong *)(unaff_RDI + 8) = param_1 + 0xc;
  if (iVar1 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x14);
    *(longlong *)(unaff_RDI + 8) = param_1 + 0x18;
    if (iVar1 < 1) {
      return;
    }
    *(short *)(unaff_R15 + 0x62) = (short)iVar1;
    if (*(longlong *)(unaff_R15 + 0x5a) == 0) {
      *(undefined8 *)(unaff_R15 + 0x5a) = unaff_RSI;
      if (*(longlong *)(unaff_R15 + 0x52) == 0) {
        *(undefined8 *)(unaff_R15 + 0x52) = unaff_RSI;
        if ((ulonglong)*(ushort *)(unaff_R15 + 0x62) == 0) {
          uVar3 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(target_object + 0x62) * 4,4);
          uVar3 = (ulonglong)*(ushort *)(unaff_R15 + 0x62);
        }
        *(undefined8 *)(unaff_R15 + 0x5a) = uVar2;
        if (string_length != 0) {
          zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
        }
        *(undefined8 *)(unaff_R15 + 0x52) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(unaff_R15 + 0x5a),*(undefined8 *)(unaff_RDI + 8),
               (longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(unaff_R15 + 0x50) = (short)iVar1;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(undefined8 *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar3 = 0;
      uVar2 = unaff_RSI;
    }
    else {
      uVar2 = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(target_object + 0x50) * 4,4);
      uVar3 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(undefined8 *)(unaff_R15 + 0x48) = uVar2;
    if (string_length != 0) {
      unaff_RSI = FUN_18062b420(_DAT_180c8ed18,uVar3 << 4,4);
    }
    *(undefined8 *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(unaff_R15 + 0x48),*(undefined8 *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理对象数组的最终化操作
 * 完成对象数组的反序列化并进行必要的清理操作
 * 
 */
void FinalizeObjectArrayProcessing(void)

{
  undefined8 alloc_result;
  ulonglong alloc_size;
  undefined2 array_size;
  undefined6 padding;
  undefined8 zero_value;
  longlong data_stream;
  longlong target_object;
  
  *(undefined2 *)(unaff_R15 + 0x50) = unaff_BP;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(undefined8 *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar2 = 0;
      uVar1 = unaff_RSI;
    }
    else {
      alloc_result = AllocateMemory(GLOBAL_MEMORY_POOL,(ulonglong)*(ushort *)(target_object + 0x50) * 4,4);
      uVar2 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(undefined8 *)(unaff_R15 + 0x48) = uVar1;
    if (uVar2 != 0) {
      zero_value = AllocateMemory(GLOBAL_MEMORY_POOL,alloc_size << 4,4);
    }
    *(undefined8 *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(unaff_R15 + 0x48),*(undefined8 *)(unaff_RDI + 8),
           (longlong)((int)CONCAT62(unaff_0000002a,unaff_BP) * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 从数据流中读取并初始化对象属性
 * 该函数从二进制数据流中读取对象的各个属性并进行初始化
 * 
 * @param object_target 目标对象指针
 * @param data_source 数据源指针
 */
void InitializeObjectFromStream(longlong object_target, longlong data_source)

{
  uint *string_data;
  int has_initial_data;
  uint string_length;
  int *data_header;
  longlong data_position;
  int field_1;
  int field_2;
  int field_3;
  undefined4 data_field_1;
  undefined4 data_field_2;
  undefined4 data_field_3;
  undefined1 *byte_data;
  undefined4 *uint_data;
  undefined1 stack_buffer_1 [32];
  undefined8 stack_guard;
  undefined *stack_ptr_1;
  undefined1 *stack_ptr_2;
  undefined4 stack_flag;
  undefined1 stack_buffer_2 [136];
  ulonglong stack_cookie;
  
  uStack_d8 = 0xfffffffffffffffe;
  stack_cookie = STACK_COOKIE ^ (ulonglong)stack_buffer_1;
  piVar4 = *(int **)(param_2 + 8);
  iVar2 = *piVar4;
  *(int **)(param_2 + 8) = piVar4 + 1;
  iVar6 = piVar4[2];
  iVar7 = piVar4[3];
  iVar8 = piVar4[4];
  *(int *)(param_1 + 0x18) = piVar4[1];
  *(int *)(param_1 + 0x1c) = iVar6;
  *(int *)(param_1 + 0x20) = iVar7;
  *(int *)(param_1 + 0x24) = iVar8;
  puVar12 = (undefined1 *)(*(longlong *)(param_2 + 8) + 0x10);
  *(undefined1 **)(param_2 + 8) = puVar12;
  *(undefined1 *)(param_1 + 0x28) = *puVar12;
  current_pos = *(longlong *)(data_stream + 8);
  *(undefined4 **)(param_2 + 8) = (undefined4 *)(lVar5 + 1);
  if (iVar2 == 0) {
    stack_ptr_1 = &GLOBAL_STRING_POOL;
    puStack_c0 = auStack_b0;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    string_length = **(uint **)(data_stream + 8);
    puVar1 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar1;
    if (string_length != 0) {
      ProcessStringData(&stack_ptr_1,string_data,string_length);
      *(longlong *)(data_stream + 8) = *(longlong *)(data_stream + 8) + (ulonglong)string_length;
    }
    stack_ptr_1 = &GLOBAL_DATA_BUFFER;
    puVar13 = *(undefined4 **)(param_2 + 8);
  }
  else {
    uVar9 = *(undefined4 *)(lVar5 + 5);
    uVar10 = *(undefined4 *)(lVar5 + 9);
    uVar11 = *(undefined4 *)(lVar5 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar5 + 1);
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    *(undefined4 *)(param_1 + 0x10) = uVar10;
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
    puVar13 = *(undefined4 **)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x2c) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x30) = *puVar13;
  puVar13 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar13;
  *(undefined4 *)(param_1 + 0x34) = *puVar13;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
                    // WARNING: Subroutine does not return
  ValidateStackCookie(stack_cookie ^ (ulonglong)stack_buffer_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建并初始化对象实例
 * 分配内存并创建新的对象实例，可选择性地从模板复制数据
 * 
 * @param vtable_ptr 虚函数表指针
 * @param template_data 模板数据指针（可为空）
 * @return 新创建的对象指针
 */
undefined8 * CreateObjectInstance(undefined8 vtable_ptr, longlong template_data)

{
  undefined8 template_field;
  undefined8 *new_object;
  
  new_object = (undefined8 *)AllocateObjectMemory(GLOBAL_MEMORY_POOL,0x38,8,3,0xfffffffffffffffe);
  *new_object = &OBJECT_VTABLE_1;
  *new_object = &OBJECT_VTABLE_2;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    puVar2[3] = *(undefined8 *)(param_2 + 0x18);
    puVar2[4] = uVar1;
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化对象的内部管理器
 * 为对象创建内部管理器结构，包括事件处理、数据存储等
 * 
 * @param object_ptr 目标对象指针
 */
void InitializeObjectManager(longlong object_ptr)

{
  longlong table_address;
  int manager_id;
  longlong *new_manager;
  longlong *old_manager;
  undefined *default_handler;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x28) == '\0') {
    new_manager = (longlong *)AllocateObjectMemory(GLOBAL_MEMORY_POOL,0xc0,0x10,4,0xfffffffffffffffe);
    *new_manager = (longlong)&MANAGER_VTABLE_1;
    *new_manager = (longlong)&MANAGER_VTABLE_2;
    *(undefined4 *)(plVar3 + 1) = 0;
    *new_manager = (longlong)&MANAGER_VTABLE_3;
    new_manager[2] = (longlong)&GLOBAL_DATA_BUFFER;
    plVar3[3] = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    new_manager[2] = (longlong)&GLOBAL_STRING_POOL;
    plVar3[3] = (longlong)(plVar3 + 5);
    *(undefined4 *)(plVar3 + 4) = 0;
    *(undefined1 *)(plVar3 + 5) = 0;
    *(undefined1 *)((longlong)plVar3 + 0xb2) = 0;
    *(undefined4 *)(plVar3 + 1) = 0;
    *(undefined2 *)(plVar3 + 0x16) = 0;
    plVar3[0x15] = 0;
    *new_manager = (longlong)&MANAGER_VTABLE_4;
    plVar3[0x15] = 0;
    *(undefined1 *)(plVar3 + 0x17) = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar3;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_1;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    default_handler = &DEFAULT_EVENT_HANDLER;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar5 = *(undefined **)(param_1 + 0x70);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar5);
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    table_address = GLOBAL_OBJECT_TABLE;
    plVar4 = *(longlong **)(param_1 + 0xb0);
    iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    *(undefined1 *)((longlong)plVar4 + 0xb2) = 1;
    RegisterObjectManager((longlong)manager_id * 0x98 + table_address + 8,new_manager);
  }
  return;
}





/**
 * 清理对象的内部管理器
 * 释放对象内部管理器占用的资源，进行清理操作
 * 
 * @param object_ptr 目标对象指针
 */
void CleanupObjectManager(longlong object_ptr)

{
  longlong *manager_ptr;
  longlong **manager_ptr_ptr;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = 0;
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    CleanupMemoryManager();
    pplStackX_10 = *(longlong ***)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (pplStackX_10 != (longlong **)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800748c2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)((longlong)*pplStackX_10 + 0x38))();
      return;
    }
  }
  return;
}





