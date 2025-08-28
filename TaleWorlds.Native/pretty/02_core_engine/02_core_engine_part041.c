#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part041.c - 24个函数

/**
 * h@8ϚI
 */
#define ENGINE_RESOURCE_TABLE_SIZE 0x100
#define ENGINE_PAGE_SIZE_8K 0x2000
#define ENGINE_PAGE_SIZE_32K 0x8000
#define ENGINE_PAGE_SIZE_16K 0x4000
#define ENGINE_PAGE_SIZE_2K 0x800
#define ENGINE_ALIGNMENT_MASK 0x1fff
#define ENGINE_CACHE_LINE_SIZE 0x40

/**
 * �D��>�p
 * ���>�D��X�(�p�
 * �presource_ptr - D��p�
 */
void release_engine_resources(longlong *resource_ptr)

{
  longlong ref_count;
  undefined8 resource_handle;
  undefined **resource_interface;
  longlong *resource_manager;
  undefined1 stack_buffer [32];
  undefined ***interface_ptr;
  undefined **resource_list;
  longlong *resource_data;
  undefined8 cleanup_flag;
  undefined **temp_interface;
  longlong *temp_resource;
  undefined *resource_type;
  undefined1 *resource_info;
  undefined4 buffer_size;
  undefined1 resource_cache [128];
  undefined4 operation_type;
  longlong resource_id;
  undefined *resource_properties;
  undefined1 *resource_metadata;
  undefined4 metadata_size;
  undefined1 metadata_buffer [128];
  undefined4 alloc_size;
  longlong heap_buffer;
  ulonglong security_cookie;
  
  cleanup_flag = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  LOCK();
  resource_manager = resource_ptr + 2;
  ref_count = *resource_manager;
  *(int *)resource_manager = (int)*resource_manager - 1;
  UNLOCK();
  if ((int)ref_count == 1) {
    while ((*(char *)((longlong)resource_ptr + 0x15) == '\x01' ||
           (*(char *)((longlong)resource_ptr + 0x15) == '\x02'))) {
      Sleep(0);
    }
    ref_count = *resource_ptr;
    if (ref_count != 0) {
      if ((*(uint *)(*(longlong *)(ref_count + 0x20) + 0x100) >> 6 & 1) != 0) goto LAB_1800802aa;
      LOCK();
      *(int *)(ref_count + 0x14) = *(int *)(ref_count + 0x14) + 1;
      UNLOCK();
      resource_list = &resource_type;
      resource_type = &UNK_1809fcc28;
      resource_info = resource_cache;
      buffer_size = 0;
      resource_cache[0] = 0;
      operation_type = 0x24;
      resource_id = ref_count;
      resource_handle = FUN_18062b1e0(_DAT_180c8ed18, ENGINE_RESOURCE_TABLE_SIZE, 8, 3);
      resource_interface = (undefined **)FUN_18005ce30(resource_handle, &resource_type);
      temp_interface = resource_interface;
      if (resource_interface != (undefined **)0x0) {
        (**(code **)(*resource_interface + 0x28))(resource_interface);
      }
      resource_handle = _DAT_180c82868;
      interface_ptr = &resource_list;
      resource_list = resource_interface;
      if (resource_interface != (undefined **)0x0) {
        (**(code **)(*resource_interface + 0x28))(resource_interface);
      }
      FUN_18005e370(resource_handle, &resource_list);
      if (resource_interface != (undefined **)0x0) {
        (**(code **)(*resource_interface + 0x38))(resource_interface);
      }
      resource_type = &UNK_18098bcb0;
      heap_buffer = resource_ptr[1];
      LOCK();
      *(int *)(heap_buffer + 0x10) = *(int *)(heap_buffer + 0x10) + 1;
      UNLOCK();
      interface_ptr = (undefined ***)&resource_properties;
      resource_properties = &UNK_1809fcc28;
      resource_metadata = metadata_buffer;
      metadata_size = 0;
      metadata_buffer[0] = 0;
      alloc_size = 0x26;
      resource_handle = FUN_18062b1e0(_DAT_180c8ed18, ENGINE_RESOURCE_TABLE_SIZE, 8, 3);
      resource_data = (longlong *)FUN_18005ce30(resource_handle, &resource_properties);
      temp_resource = resource_data;
      if (resource_data != (longlong *)0x0) {
        (**(code **)(*resource_data + 0x28))(resource_data);
      }
      resource_handle = _DAT_180c82868;
      interface_ptr = (undefined ***)&resource_manager;
      resource_manager = resource_data;
      if (resource_data != (longlong *)0x0) {
        (**(code **)(*resource_data + 0x28))(resource_data);
      }
      FUN_18005e370(resource_handle, &resource_manager);
      if (resource_data != (longlong *)0x0) {
        (**(code **)(*resource_data + 0x38))(resource_data);
      }
      interface_ptr = (undefined ***)&resource_properties;
      resource_properties = &UNK_18098bcb0;
    }
    LOCK();
    *(undefined1 *)((longlong)resource_ptr + 0x15) = 0;
    UNLOCK();
  }
LAB_1800802aa:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
}


/**
 * �XW6�p
 * ���H6�XW/�u6
 * �pdest_base - ��0@src_offset - �O��src_data - �pn�size - 6'
 */
void copy_memory_blocks(longlong dest_base, uint src_offset, undefined8 *src_data, uint size)

{
  undefined8 *data_ptr;
  longlong page_table;
  ulonglong page_index;
  undefined8 data_words [8];
  undefined8 data_words_ext [8];
  longlong dest_page;
  longlong block_offset;
  
  page_index = (ulonglong)src_offset;
  block_index = src_offset >> 0xd;
  if (block_index == src_offset + size >> 0xd) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(longlong *)(dest_base + 8 + (ulonglong)block_index * 8) +
           (ulonglong)(src_offset + block_index * -ENGINE_PAGE_SIZE_8K) * ENGINE_CACHE_LINE_SIZE,
           src_data, (ulonglong)size << 6);
    return;
  }
  if (size != 0) {
    remaining_bytes = (ulonglong)size;
    do {
      data_words[0] = *src_data;
      data_words[1] = src_data[1];
      current_index = (int)page_index;
      data_words[2] = src_data[2];
      data_words[3] = src_data[3];
      page_index = page_index >> 0xd;
      page_index = (ulonglong)(current_index + 1);
      data_words[4] = src_data[4];
      data_words[5] = src_data[5];
      data_words[6] = src_data[6];
      data_words[7] = src_data[7];
      page_table = *(longlong *)(dest_base + 8 + page_index * 8);
      src_data = src_data + 8;
      block_offset = (ulonglong)(current_index + (int)page_index * -ENGINE_PAGE_SIZE_8K) * ENGINE_CACHE_LINE_SIZE;
      *(undefined8 *)(page_table + block_offset) = data_words[0];
      ((undefined8 *)(page_table + block_offset))[1] = data_words[1];
      data_ptr = (undefined8 *)(page_table + 0x10 + block_offset);
      *data_ptr = data_words[2];
      data_ptr[1] = data_words[3];
      data_ptr = (undefined8 *)(page_table + 0x20 + block_offset);
      *data_ptr = data_words[4];
      data_ptr[1] = data_words[5];
      data_ptr = (undefined8 *)(page_table + 0x30 + block_offset);
      *data_ptr = data_words[6];
      data_ptr[1] = data_words[7];
      remaining_bytes = remaining_bytes - 1;
    } while (remaining_bytes != 0);
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * �XMh�p - 8Kub
 * ��M8K'��Xub/�iU
 * �pallocator_ptr - Mh�request_size - �B'
 */
uint allocate_memory_page_8k(uint *allocator_ptr, int request_size)

{
  uint current_offset;
  longlong new_page;
  char *page_flag;
  int page_index;
  ulonglong start_page;
  ulonglong end_page;
  longlong page_table;
  ulonglong uVar6;
  uint *page_entry;
  bool page_allocated;
  
  if (request_size == 0) {
    return 0xffffffff;
  }
  LOCK();
  current_offset = *allocator_ptr;
  *allocator_ptr = *allocator_ptr + request_size;
  UNLOCK();
  start_page = (ulonglong)(current_offset >> 0xd);
  end_page = (ulonglong)(request_size + -1 + current_offset >> 0xd);
  if (start_page <= end_page) {
    page_flag = (char *)((longlong)allocator_ptr + start_page + 0x108);
    page_table = (end_page - start_page) + 1;
    page_entry = allocator_ptr + (ulonglong)(current_offset >> 0xd) * 2 + 2;
    do {
      page_index = (int)start_page;
      if (*(longlong *)page_entry == 0) {
        new_page = FUN_18062b420(_DAT_180c8ed18, ENGINE_PAGE_SIZE_32K, 0x25);
        LOCK();
        page_allocated = *(longlong *)(allocator_ptr + (longlong)page_index * 2 + 2) == 0;
        if (page_allocated) {
          *(longlong *)(allocator_ptr + (longlong)page_index * 2 + 2) = new_page;
        }
        UNLOCK();
        if (page_allocated) {
          LOCK();
          *(undefined1 *)((longlong)page_index + 0x108 + (longlong)allocator_ptr) = 0;
          UNLOCK();
        }
        else {
          if (new_page != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*page_flag != '\0');
        }
      }
      else {
        do {
        } while (*page_flag != '\0');
      }
      start_page = (ulonglong)(page_index + 1);
      page_entry = page_entry + 2;
      page_flag = page_flag + 1;
      page_table = page_table - 1;
    } while (page_table != 0);
  }
  return current_offset;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * �Xub��p - 8Kub
 * ���8K�Xub�nub�
 * �pallocator_base - Mh�0@
 */
undefined4 initialize_memory_pages_8k(longlong allocator_base)

{
  longlong *page_entry;
  longlong table_index;
  longlong new_page;
  char *page_flag;
  longlong allocator_ptr;
  int page_idx;
  ulonglong page_counter;
  longlong page_range;
  longlong *current_entry;
  undefined4 return_value;
  bool page_ready;
  
  page_flag = (char *)(allocator_base + 0x108 + page_counter);
  page_range = (allocator_ptr - page_counter) + 1;
  current_entry = (longlong *)(allocator_base + 8 + table_index * 8);
  do {
    page_idx = (int)page_counter;
    if (*current_entry == 0) {
      new_page = FUN_18062b420(_DAT_180c8ed18, ENGINE_PAGE_SIZE_32K, 0x25);
      page_entry = (longlong *)(allocator_ptr + 8 + (longlong)page_idx * 8);
      LOCK();
      page_ready = *page_entry == 0;
      if (page_ready) {
        *page_entry = new_page;
      }
      UNLOCK();
      if (page_ready) {
        LOCK();
        *(undefined1 *)((longlong)page_idx + 0x108 + allocator_ptr) = 0;
        UNLOCK();
      }
      else {
        if (new_page != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*page_flag != '\0');
      }
    }
    else {
      do {
      } while (*page_flag != '\0');
    }
    page_counter = (ulonglong)(page_idx + 1);
    current_entry = current_entry + 1;
    page_flag = page_flag + 1;
    page_range = page_range - 1;
  } while (page_range != 0);
  return return_value;
}


/**
 * z�p`M&
 */
undefined4 empty_function_placeholder_1(void)

{
  undefined4 return_value;
  
  return return_value;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * �XMh�p - 2Kub
 * ��M2K'��Xub/�iU
 * �pallocator_ptr - Mh�request_size - �B'
 */
uint allocate_memory_page_2k(uint *allocator_ptr, int request_size)

{
  uint current_offset;
  longlong new_page;
  char *page_flag;
  ulonglong start_page;
  longlong page_table;
  int page_index;
  ulonglong end_page;
  uint block_offset;
  uint *page_entry;
  bool page_allocated;
  
  if (request_size == 0) {
    return 0xffffffff;
  }
  LOCK();
  current_offset = *allocator_ptr;
  *allocator_ptr = *allocator_ptr + request_size;
  UNLOCK();
  end_page = (ulonglong)(current_offset >> 0xb);
  start_page = (ulonglong)(request_size + -1 + current_offset >> 0xb);
  if (end_page <= start_page) {
    page_flag = (char *)((longlong)allocator_ptr + end_page + 0x408);
    page_table = (start_page - end_page) + 1;
    page_entry = allocator_ptr + (ulonglong)(current_offset >> 0xb) * 2 + 2;
    do {
      page_index = (int)end_page;
      if (*(longlong *)page_entry == 0) {
        new_page = FUN_18062b420(_DAT_180c8ed18, ENGINE_PAGE_SIZE_16K, 0x25);
        LOCK();
        page_allocated = *(longlong *)(allocator_ptr + (longlong)page_index * 2 + 2) == 0;
        if (page_allocated) {
          *(longlong *)(allocator_ptr + (longlong)page_index * 2 + 2) = new_page;
        }
        UNLOCK();
        if (page_allocated) {
          block_offset = page_index * ENGINE_PAGE_SIZE_2K;
          page_index = block_offset + ENGINE_PAGE_SIZE_2K;
          for (; (int)block_offset < page_index; block_offset = block_offset + 1) {
            *(undefined8 *)
             (*(longlong *)(allocator_ptr + (ulonglong)(block_offset >> 0xb) * 2 + 2) +
             (longlong)(int)(block_offset + (block_offset >> 0xb) * -ENGINE_PAGE_SIZE_2K) * 8) = 0;
          }
          LOCK();
          *(undefined1 *)((longlong)page_index + 0x408 + (longlong)allocator_ptr) = 0;
          UNLOCK();
        }
        else {
          if (new_page != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*page_flag != '\0');
        }
      }
      else {
        do {
        } while (*page_flag != '\0');
      }
      end_page = (ulonglong)(page_index + 1);
      page_entry = page_entry + 2;
      page_flag = page_flag + 1;
      page_table = page_table - 1;
    } while (page_table != 0);
  }
  return current_offset;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * �Xub��p - 2Kub
 * ���2K�Xub�nub�
 * �pallocator_base - Mh�0@
 */
undefined4 initialize_memory_pages_2k(longlong allocator_base)

{
  longlong *page_entry;
  longlong table_index;
  longlong new_page;
  char *page_flag;
  longlong allocator_ptr;
  longlong page_range;
  int page_index;
  ulonglong page_counter;
  uint block_offset;
  int last_block;
  longlong *current_entry;
  undefined4 return_value;
  bool page_ready;
  
  page_flag = (char *)(allocator_base + 0x408 + page_counter);
  page_range = (allocator_ptr - page_counter) + 1;
  current_entry = (longlong *)(allocator_base + 8 + table_index * 8);
  do {
    page_index = (int)page_counter;
    if (*current_entry == 0) {
      new_page = FUN_18062b420(_DAT_180c8ed18, ENGINE_PAGE_SIZE_16K, 0x25);
      page_entry = (longlong *)(allocator_ptr + 8 + (longlong)page_index * 8);
      LOCK();
      page_ready = *page_entry == 0;
      if (page_ready) {
        *page_entry = new_page;
      }
      UNLOCK();
      if (page_ready) {
        block_offset = page_index * ENGINE_PAGE_SIZE_2K;
        last_block = block_offset + ENGINE_PAGE_SIZE_2K;
        for (; (int)block_offset < last_block; block_offset = block_offset + 1) {
          *(undefined8 *)
           (*(longlong *)(allocator_ptr + 8 + (ulonglong)(block_offset >> 0xb) * 8) +
           (longlong)(int)(block_offset + (block_offset >> 0xb) * -ENGINE_PAGE_SIZE_2K) * 8) = 0;
        }
        LOCK();
        *(undefined1 *)((longlong)page_index + 0x408 + allocator_ptr) = 0;
        UNLOCK();
      }
      else {
        if (new_page != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*page_flag != '\0');
      }
    }
    else {
      do {
      } while (*page_flag != '\0');
    }
    page_counter = (ulonglong)(page_index + 1);
    current_entry = current_entry + 1;
    page_flag = page_flag + 1;
    page_range = page_range - 1;
  } while (page_range != 0);
  return return_value;
}


/**
 * z�p`M&
 */
undefined4 empty_function_placeholder_2(void)

{
  undefined4 return_value;
  
  return return_value;
}



/**
 * ��pA
 * ��(��p�A
 */
void initialize_system_a(void)

{
  FUN_180080870();
  return;
}



/**
 * ��pB
 * ��(��p�B
 */
void initialize_system_b(void)

{
  FUN_1800809a0();
  return;
}



/**
 * D��p
 * ����D���
 * �presource_handle - D����
 */
void cleanup_resource_handle(undefined8 *resource_handle)

{
  FUN_180085530(*resource_handle);
  *resource_handle = 0;
  if (resource_handle[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  resource_handle[1] = 0;
  return;
}



/**
 * pnA���p
 * ���pnA-��pn0�:
 * �pbuffer_info - �:�ostream_ptr - A�
 */
void read_from_stream(int *buffer_info, longlong stream_ptr)

{
  int data_count;
  int buffer_capacity;
  
  *(undefined1 *)(buffer_info + 8) = *(undefined1 *)(stream_ptr + 0x1a);
  *buffer_info = **(int **)(stream_ptr + 8);
  *(longlong *)(stream_ptr + 8) = *(longlong *)(stream_ptr + 8) + 4;
  data_count = *buffer_info;
  buffer_capacity = buffer_info[1];
  if (buffer_capacity < data_count) {
    if (data_count == 0) {
      if (buffer_capacity < 2) {
        buffer_info[1] = 8;
      }
      else {
        buffer_info[1] = (buffer_capacity >> 1) + buffer_capacity;
      }
    }
    else {
      buffer_info[1] = data_count;
    }
    FUN_1800846d0(buffer_info);
  }
  *buffer_info = data_count;
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(buffer_info + 2), *(undefined8 *)(stream_ptr + 8), (longlong)(data_count << 4));
}



/**
 * pnA�e�p
 * ��pn�e0pnA-
 * �pdata_count - pnp�stream_info - A�o
 */
void write_to_stream(int *data_count, longlong *stream_info)

{
  longlong stream_pos;
  longlong stream_end;
  undefined4 *write_ptr;
  int *stream_base;
  int item_count;
  longlong available_space;
  ulonglong required_space;
  
  item_count = *data_count;
  available_space = stream_info[2];
  stream_base = (int *)stream_info[1];
  stream_end = *stream_info;
  required_space = (longlong)item_count * 0x10 + 4;
  if ((ulonglong)((stream_end - (longlong)stream_base) + available_space) <= required_space) {
    FUN_180639bf0(stream_info, (longlong)stream_base + (required_space - stream_end));
    available_space = stream_info[2];
    stream_base = (int *)stream_info[1];
    stream_end = *stream_info;
    item_count = *data_count;
  }
  if ((ulonglong)((stream_end - (longlong)stream_base) + available_space) < 5) {
    FUN_180639bf0(stream_info, (longlong)stream_base + (4 - stream_end));
    stream_base = (int *)stream_info[1];
  }
  *stream_base = item_count;
  item_count = 0;
  write_ptr = (undefined4 *)(stream_info[1] + 4);
  stream_info[1] = (longlong)write_ptr;
  if (0 < *data_count) {
    available_space = 0;
    do {
      stream_end = *(longlong *)(data_count + 2);
      if ((ulonglong)((stream_info[2] - (longlong)write_ptr) + *stream_info) < 0x11) {
        FUN_180639bf0(stream_info, (longlong)write_ptr + (0x10 - *stream_info));
        write_ptr = (undefined4 *)stream_info[1];
      }
      item_count = item_count + 1;
      *write_ptr = *(undefined4 *)(available_space + stream_end);
      stream_info[1] = stream_info[1] + 4;
      *(undefined4 *)stream_info[1] = *(undefined4 *)(available_space + 4 + stream_end);
      stream_info[1] = stream_info[1] + 4;
      stream_pos = available_space + 8;
      available_space = available_space + 0x10;
      *(undefined4 *)stream_info[1] = *(undefined4 *)(stream_pos + stream_end);
      stream_info[1] = stream_info[1] + 4;
      *(undefined4 *)stream_info[1] = 0x3f800000;
      stream_info[1] = stream_info[1] + 4;
      write_ptr = (undefined4 *)stream_info[1];
    } while (item_count < *data_count);
  }
  return;
}



/**
 * y�pn�p
 * ��y�pny
 * �poutput_ptr - ���
 */
void process_data_batch(undefined4 *output_ptr)

{
  longlong data_offset;
  longlong stream_end;
  longlong *data_info;
  uint item_count;
  ulonglong current_item;
  int *item_counter;
  
  current_item = (ulonglong)item_count;
  do {
    stream_end = *(longlong *)(item_counter + 2);
    if ((ulonglong)((data_info[2] - (longlong)output_ptr) + *data_info) < 0x11) {
      FUN_180639bf0();
      output_ptr = (undefined4 *)data_info[1];
    }
    item_count = item_count + 1;
    *output_ptr = *(undefined4 *)(current_item + stream_end);
    data_info[1] = data_info[1] + 4;
    *(undefined4 *)data_info[1] = *(undefined4 *)(current_item + 4 + stream_end);
    data_info[1] = data_info[1] + 4;
    data_offset = current_item + 8;
    current_item = current_item + 0x10;
    *(undefined4 *)data_info[1] = *(undefined4 *)(data_offset + stream_end);
    data_info[1] = data_info[1] + 4;
    *(undefined4 *)data_info[1] = 0x3f800000;
    data_info[1] = data_info[1] + 4;
    output_ptr = (undefined4 *)data_info[1];
  } while ((int)item_count < *item_counter);
  return;
}



/**
 * z�\�p
 */
void no_operation(void)

{
  return;
}


/**
 * �h�\�p
 * ��(�h-�b��Mn
 * �plist_ptr - �h�node_ptr - ���
 */
longlong * swap_list_nodes(longlong *list_ptr, longlong *node_ptr)

{
  longlong *temp_node;
  
  node_ptr = (longlong *)*node_ptr;
  if (node_ptr != (longlong *)0x0) {
    (**(code **)(*node_ptr + 0x28))(node_ptr);
  }
  temp_node = (longlong *)*list_ptr;
  *list_ptr = (longlong)node_ptr;
  if (temp_node != (longlong *)0x0) {
    (**(code **)(*temp_node + 0x38))();
  }
  return list_ptr;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * ���pA
 * ����D�A�>�s�X
 * �psystem_ptr - ���
 */
void cleanup_system_a(longlong *system_ptr)

{
  longlong resource_count;
  longlong *resource_ptr;
  longlong system_id;
  longlong resource_handle;
  longlong *temp_ptr_8;
  longlong *temp_ptr_10;
  longlong *temp_ptr_18;
  
  *(undefined2 *)(system_ptr + 1) = 0;
  resource_ptr = (longlong *)*system_ptr;
  if (resource_ptr != (longlong *)0x0) {
    temp_ptr_8 = resource_ptr;
    if ((longlong *)resource_ptr[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)resource_ptr[1] + 0x38))();
    }
    if ((longlong *)*resource_ptr != (longlong *)0x0) {
      (**(code **)(*(longlong *)*resource_ptr + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(resource_ptr);
  }
  *system_ptr = 0;
  system_id = _DAT_180c8a980;
  if (*(int *)((longlong)system_ptr + 0xc) != -1) {
    resource_handle = (longlong)(int)*(uint *)((longlong)system_ptr + 0xc);
    temp_ptr_8 = (longlong *)(ulonglong)*(uint *)((longlong)system_ptr + 0xc);
    resource_count = _DAT_180c8a980 + 0x2b8;
    AcquireSRWLockExclusive(resource_count);
    *(undefined1 *)(system_id + 2) = 1;
    **(undefined1 **)(*(longlong *)(system_id + 0x160) + resource_handle * 8) = 0;
    *(undefined8 *)(*(longlong *)(*(longlong *)(system_id + 0x160) + resource_handle * 8) + 0x20) = 0;
    resource_handle = *(longlong *)(*(longlong *)(system_id + 0x160) + resource_handle * 8);
    temp_ptr_10 = *(longlong **)(resource_handle + 0x10);
    *(undefined8 *)(resource_handle + 0x10) = 0;
    if (temp_ptr_10 != (longlong *)0x0) {
      (**(code **)(*temp_ptr_10 + 0x38))();
    }
    temp_ptr_18 = *(longlong **)(resource_handle + 8);
    *(undefined8 *)(resource_handle + 8) = 0;
    if (temp_ptr_18 != (longlong *)0x0) {
      (**(code **)(*temp_ptr_18 + 0x38))();
    }
    FUN_1800571e0(system_id + 0x100, &temp_ptr_8);
    *(undefined4 *)((longlong)system_ptr + 0xc) = 0xffffffff;
    ReleaseSRWLockExclusive(resource_count);
    *(undefined4 *)((longlong)system_ptr + 0xc) = 0xffffffff;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * ���pB
 * ����D�B�>�s�X
 * �psystem_ptr - ���
 */
void cleanup_system_b(longlong *system_ptr)

{
  undefined1 *system_flag;
  undefined1 *resource_flag;
  longlong resource_id;
  int system_index [2];
  
  *(undefined2 *)(system_ptr + 1) = 0;
  resource_id = *system_ptr;
  if (resource_id != 0) {
    FUN_180083f10(resource_id);
                    // WARNING: Subroutine does not return
    FUN_18064e900(resource_id);
  }
  *system_ptr = 0;
  resource_flag = _DAT_180c8a980;
  if (*(int *)((longlong)system_ptr + 0xc) != -1) {
    system_index[0] = *(int *)((longlong)system_ptr + 0xc);
    resource_id = (longlong)system_index[0];
    system_flag = _DAT_180c8a980 + 0x2b8;
    AcquireSRWLockExclusive(system_flag);
    *resource_flag = 1;
    **(undefined1 **)(*(longlong *)(resource_flag + 0x140) + resource_id * 8) = 0;
    *(undefined8 *)(*(longlong *)(*(longlong *)(resource_flag + 0x140) + resource_id * 8) + 0x1a8) = 0;
    FUN_1800f8a50(*(longlong *)(*(longlong *)(resource_flag + 0x140) + resource_id * 8) + 8);
    FUN_1800571e0(resource_flag + 0xc0, system_index);
    *(undefined4 *)((longlong)system_ptr + 0xc) = 0xffffffff;
    ReleaseSRWLockExclusive(system_flag);
    *(undefined4 *)((longlong)system_ptr + 0xc) = 0xffffffff;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * �p�iU�p
 * ��iU�pĹ�
 * �parray_info - p��orequired_size -  ��'
 */
void expand_dynamic_array(longlong *array_info, ulonglong required_size)

{
  longlong current_end;
  ulonglong available_size;
  longlong array_start;
  longlong new_capacity;
  ulonglong growth_factor;
  
  current_end = array_info[1];
  array_start = *array_info;
  available_size = current_end - array_start >> 4;
  if (available_size < required_size) {
    required_size = required_size - available_size;
    if ((ulonglong)(array_info[2] - current_end >> 4) < required_size) {
      growth_factor = available_size * 2;
      if (available_size == 0) {
        growth_factor = 1;
      }
      if (growth_factor < available_size + required_size) {
        growth_factor = available_size + required_size;
      }
      if (growth_factor == 0) {
        new_capacity = current_end;
        current_end = 0;
      }
      else {
        current_end = FUN_18062b420(_DAT_180c8ed18, growth_factor << 4, (char)array_info[3]);
        array_start = *array_info;
        new_capacity = array_info[1];
      }
      if (array_start != new_capacity) {
                    // WARNING: Subroutine does not return
        memmove(current_end, array_start, new_capacity - array_start);
      }
      if (required_size != 0) {
                    // WARNING: Subroutine does not return
        memset(current_end, 0, required_size * 0x10);
      }
      if (*array_info != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *array_info = current_end;
      array_info[2] = growth_factor * 0x10 + current_end;
    }
    else if (required_size != 0) {
                    // WARNING: Subroutine does not return
      memset(current_end, 0, required_size * 0x10);
    }
  }
  else {
    current_end = required_size * 0x10 + array_start;
  }
  array_info[1] = current_end;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * �p�ͰM�p
 * ��ͰM�pąX
 * �pelement_count - C p�array_info - p��o
 */
void reallocate_dynamic_array(longlong element_count, longlong array_info)

{
  longlong new_buffer;
  longlong current_end;
  longlong array_start;
  ulonglong new_capacity;
  ulonglong required_size;
  
  new_capacity = element_count * 2;
  if (element_count == 0) {
    new_capacity = 1;
  }
  if (new_capacity < (ulonglong)(element_count + current_end)) {
    new_capacity = element_count + current_end;
  }
  if (new_capacity == 0) {
    new_buffer = 0;
  }
  else {
    new_buffer = FUN_18062b420(_DAT_180c8ed18, new_capacity << 4, (char)array_info[3]);
    array_start = *array_info;
    current_end = array_info[1];
  }
  if (array_start != current_end) {
                    // WARNING: Subroutine does not return
    memmove(new_buffer, array_start, current_end - array_start);
  }
  if (current_end != 0) {
                    // WARNING: Subroutine does not return
    memset(new_buffer, 0, current_end << 4);
  }
  if (*array_info != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *array_info = new_buffer;
  array_info[2] = new_capacity * 0x10 + new_buffer;
  array_info[1] = new_buffer;
  return;
}



/**
 * p���p
 * ��pą��
 */
void clear_array_content(void)

{
  longlong array_size;
  undefined8 array_info;
  longlong array_ptr;
  
  if (array_size != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(undefined8 *)(array_ptr + 8) = array_info;
  return;
}



/**
 * �X���p
 * �����XW�
 * �pmemory_block - �XW�
 */
void verify_memory_block(longlong memory_block)

{
  if (*(longlong *)(memory_block + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



/**
 * pn�e�p
 * ��pn�-�epn
 * �pcollection_ptr - ��data_item - pny
 */
void insert_data_item(int *collection_ptr, undefined8 *data_item)

{
  undefined8 data_field_1;
  int item_count;
  int capacity;
  undefined8 *insert_ptr;
  
  capacity = *collection_ptr;
  item_count = collection_ptr[1];
  if (item_count <= capacity) {
    if (item_count < 2) {
      item_count = 8;
    }
    else {
      item_count = (item_count >> 1) + item_count;
    }
    collection_ptr[1] = item_count;
    FUN_180086010(collection_ptr);
    capacity = *collection_ptr;
  }
  data_field_1 = data_item[1];
  insert_ptr = (undefined8 *)((longlong)capacity * 0x5c + *(longlong *)(collection_ptr + 2));
  *insert_ptr = *data_item;
  insert_ptr[1] = data_field_1;
  data_field_1 = data_item[3];
  insert_ptr[2] = data_item[2];
  insert_ptr[3] = data_field_1;
  data_field_1 = data_item[5];
  insert_ptr[4] = data_item[4];
  insert_ptr[5] = data_field_1;
  data_field_1 = data_item[7];
  insert_ptr[6] = data_item[6];
  insert_ptr[7] = data_field_1;
  data_field_1 = data_item[9];
  insert_ptr[8] = data_item[8];
  insert_ptr[9] = data_field_1;
  insert_ptr[10] = data_item[10];
  *(undefined4 *)(insert_ptr + 0xb) = *(undefined4 *)(data_item + 0xb);
  *collection_ptr = *collection_ptr + 1;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * �:iU�p
 * ��iU�:��
 * �pbuffer_info - �:�orequired_size -  ��'
 */
void expand_buffer_capacity(longlong *buffer_info, ulonglong required_size)

{
  longlong current_end;
  ulonglong available_size;
  ulonglong additional_size;
  ulonglong new_capacity;
  longlong new_buffer;
  longlong buffer_start;
  
  current_end = buffer_info[1];
  buffer_start = *buffer_info;
  available_size = current_end - buffer_start >> 2;
  if (required_size <= available_size) {
    buffer_info[1] = buffer_start + required_size * 4;
    return;
  }
  additional_size = required_size - available_size;
  if (additional_size <= (ulonglong)(buffer_info[2] - current_end >> 2)) {
    if (additional_size != 0) {
                    // WARNING: Subroutine does not return
      memset(current_end, 0, additional_size * 4);
    }
    buffer_info[1] = current_end;
    return;
  }
  new_capacity = available_size * 2;
  if (available_size == 0) {
    new_capacity = 1;
  }
  if (new_capacity < required_size) {
    new_capacity = required_size;
  }
  if (new_capacity == 0) {
    new_buffer = 0;
  }
  else {
    new_buffer = FUN_18062b420(_DAT_180c8ed18, new_capacity * 4, (char)buffer_info[3]);
    buffer_start = *buffer_info;
    current_end = buffer_info[1];
  }
  if (buffer_start != current_end) {
                    // WARNING: Subroutine does not return
    memmove(new_buffer, buffer_start, current_end - buffer_start);
  }
  if (additional_size != 0) {
                    // WARNING: Subroutine does not return
    memset(new_buffer, 0, additional_size * 4);
  }
  if (*buffer_info != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *buffer_info = new_buffer;
  buffer_info[2] = new_buffer + new_capacity * 4;
  buffer_info[1] = new_buffer;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * �:ͰM�p
 * ��ͰM�:�X
 * �pold_size - �'new_size - �'alignment - �P�pbuffer_info - �:�o
 */
void reallocate_buffer(longlong old_size, ulonglong new_size, undefined8 alignment, longlong buffer_info)

{
  longlong capacity;
  longlong new_buffer;
  longlong *buffer_ptr;
  ulonglong size_difference;
  ulonglong calculated_capacity;
  longlong buffer_start;
  
  calculated_capacity = new_size - old_size;
  if (calculated_capacity <= (ulonglong)(capacity - buffer_start >> 2)) {
    if (calculated_capacity != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    buffer_ptr[1] = buffer_start;
    return;
  }
  size_difference = old_size * 2;
  if (old_size == 0) {
    size_difference = 1;
  }
  if (size_difference < new_size) {
    size_difference = new_size;
  }
  if (size_difference == 0) {
    new_buffer = 0;
  }
  else {
    new_buffer = FUN_18062b420(_DAT_180c8ed18, size_difference * 4, (char)buffer_ptr[3]);
    buffer_start = *buffer_ptr;
    buffer_info = buffer_ptr[1];
  }
  if (buffer_start != buffer_info) {
                    // WARNING: Subroutine does not return
    memmove(new_buffer, buffer_start, buffer_info - buffer_start);
  }
  if (calculated_capacity != 0) {
                    // WARNING: Subroutine does not return
    memset(new_buffer, 0, calculated_capacity * 4);
  }
  if (*buffer_ptr != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *buffer_ptr = new_buffer;
  buffer_ptr[2] = new_buffer + size_difference * 4;
  buffer_ptr[1] = new_buffer;
  return;
}



/**
 * �:��p
 * ���:���
 */
void zero_buffer_content(void)

{
  longlong buffer_size;
  longlong buffer_ptr;
  undefined8 buffer_info;
  
  if (buffer_size != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(undefined8 *)(buffer_ptr + 8) = buffer_info;
  return;
}



/**
 * �:O��n�p
 * ���n�:O��
 * �pbase_address - �0@offset - O��alignment - �P�pbuffer_info - �:�o
 */
void set_buffer_offset(undefined8 base_address, longlong offset, undefined8 alignment, longlong buffer_info)

{
  longlong buffer_ptr;
  
  *(longlong *)(buffer_ptr + 8) = buffer_info + offset * 4;
  return;
}



/**
 * D����p
 * ��D���p�
 * �presource_array - D�p��
 */
void cleanup_resource_handles(longlong *resource_array)

{
  undefined8 *current_handle;
  undefined8 *end_handle;
  
  current_handle = (undefined8 *)resource_array[1];
  for (end_handle = (undefined8 *)*resource_array; end_handle != current_handle; end_handle = end_handle + 6) {
    *end_handle = &UNK_180a3c3e0;
    if (end_handle[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    end_handle[1] = 0;
    *(undefined4 *)(end_handle + 3) = 0;
    *end_handle = &UNK_18098bcb0;
  }
  if (*resource_array != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * D� �p
 * ��D� 0�Mn
 * �presource_id - D�IDresource_data - D�pnresource_ptr - D��
 */
void map_resource_to_location(uint *resource_id, int *resource_data, longlong *resource_ptr)

{
  int page_index;
  uint current_id;
  uint resource_index;
  longlong page_address;
  int block_index;
  longlong *page_table;
  ulonglong page_offset;
  bool page_mapped;
  
  LOCK();
  current_id = *resource_id;
  *resource_id = *resource_id + 1;
  UNLOCK();
  resource_index = current_id >> 0xb;
  page_offset = (ulonglong)resource_index;
  if (*(longlong *)(resource_id + (ulonglong)resource_index * 2 + 2) == 0) {
    page_address = FUN_18062b420(_DAT_180c8ed18, ENGINE_PAGE_SIZE_32K, 0x25);
    LOCK();
    page_mapped = *(longlong *)(resource_id + page_offset * 2 + 2) == 0;
    if (page_mapped) {
      *(longlong *)(resource_id + page_offset * 2 + 2) = page_address;
    }
    UNLOCK();
    if (page_mapped) {
      block_index = resource_index * ENGINE_PAGE_SIZE_2K;
      page_index = block_index + ENGINE_PAGE_SIZE_2K;
      for (; block_index < page_index; block_index = block_index + 1) {
      }
      LOCK();
      *(undefined1 *)(page_offset + 0x108 + (longlong)resource_id) = 0;
      UNLOCK();
    }
    else {
      if (page_address != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      do {
      } while (*(char *)(page_offset + 0x108 + (longlong)resource_id) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(page_offset + 0x108 + (longlong)resource_id) != '\0');
  }
  page_address = *resource_ptr;
  page_table = (longlong *)
           (*(longlong *)(resource_id + page_offset * 2 + 2) + (ulonglong)(current_id + resource_index * -ENGINE_PAGE_SIZE_2K) * 0x10);
  *page_table = (longlong)*resource_data;
  page_table[1] = page_address;
  return;
}



/**
 * D����p
 * ����D�pĄ	H'
 * �presource_array - D�p��
 */
void validate_resource_array(longlong *resource_array)

{
  longlong *current_resource;
  
  for (current_resource = (longlong *)*resource_array; current_resource != (longlong *)resource_array[1]; current_resource = current_resource + 4) {
    if (*current_resource != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*resource_array == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



/**
 * pĄY�p
 * ��:pĄY�'�z�
 * �parray_info - p��orequired_size -  ��'param_3 - �p3param_4 - �p4
 */
void reserve_array_space(longlong *array_info, ulonglong required_size, undefined8 param_3, undefined8 param_4)

{
  longlong *array_end;
  ulonglong current_size;
  longlong array_start;
  longlong *resize_target;
  
  array_end = (longlong *)array_info[1];
  array_start = *array_info;
  current_size = (longlong)array_end - array_start >> 5;
  if (current_size < required_size) {
    FUN_180082290(array_info, required_size - current_size, param_3, param_4, 0xfffffffffffffffe);
  }
  else {
    resize_target = (longlong *)(required_size * 0x20 + array_start);
    if (resize_target != array_end) {
      do {
        if (*resize_target != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        resize_target = resize_target + 4;
      } while (resize_target != array_end);
      array_start = *array_info;
    }
    array_info[1] = required_size * 0x20 + array_start;
  }
  return;
}