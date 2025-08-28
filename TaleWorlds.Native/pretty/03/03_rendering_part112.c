#include "TaleWorlds.Native.Split.h"

// 03_rendering_part112.c - 渲染系统文件I/O和资源处理模块
// 包含5个核心函数，涵盖渲染系统文件操作、数据序列化、资源管理、内存分配和线程同步等高级渲染功能

// 全局常量定义
#define RENDERING_FILE_BUFFER_SIZE 0xFFFFFFFFFFFFFFFE
#define RENDERING_RESOURCE_MAGIC_NUMBER 0xA8
#define RENDERING_DATA_BLOCK_SIZE 0x48
#define RENDERING_HASH_TABLE_SIZE 0xE0
#define RENDERING_FILE_HANDLE_INVALID 0
#define RENDERING_MUTEX_LOCK_SUCCESS 0

// 全局数据结构
static const uint64_t RENDERING_FILE_HEADER_ADDRESS = 0x18098bc73;
static const uint64_t RENDERING_RESOURCE_TABLE_ADDRESS = 0x18098bcb0;
static const uint64_t RENDERING_DATA_ARRAY_ADDRESS = 0x180a3c3e0;
static const uint64_t RENDERING_ALLOCATOR_ADDRESS = 0x180c8ed18;
static const uint64_t RENDERING_MEMORY_POOL_ADDRESS = 0x180c82868;
static const uint64_t RENDERING_FILE_POINTER_ADDRESS = 0x180a1b248;

// 函数别名定义
#define RenderingSystem_WriteResourceData RenderingSystem_WriteResourceData
#define RenderingSystem_ReadResourceData RenderingSystem_ReadResourceData
#define RenderingSystem_ProcessResourceChunk RenderingSystem_ProcessResourceChunk
#define RenderingSystem_HandleResourceFile RenderingSystem_HandleResourceFile
#define RenderingSystem_CleanupResourceTable RenderingSystem_CleanupResourceTable

/**
 * 渲染系统资源数据写入器
 * 将渲染资源数据序列化并写入文件
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件操作上下文指针
 * @param data_ptr 数据缓冲区指针
 * @param data_size 数据大小
 */
void RenderingSystem_WriteResourceData(int64_t resource_context, int64_t file_context, int64_t data_ptr, uint64_t data_size)
{
  int resource_id;
  uint64_t resource_header;
  int64_t resource_start;
  int64_t resource_end;
  void *resource_data;
  int64_t current_resource;
  void *data_buffer;
  int64_t buffer_ptr;
  uint data_length;
  uint *buffer_writer;
  int64_t total_size;
  int64_t list_head;
  int64_t list_end;
  uint *write_ptr;
  int64_t buffer_capacity;
  int16_t write_flag;
  int8_t buffer_mode;
  
  total_size = 0;
  write_ptr = (uint *)0x0;
  buffer_capacity = 0;
  write_flag = 0;
  buffer_mode = 3;
  
  // 获取资源头部信息
  resource_header = *(uint64_t *)(resource_context + 0x898);
  list_head = data_ptr;
  
  // 初始化写入缓冲区
  System_BufferManager(&total_size, 8, data_ptr, data_size, RENDERING_FILE_BUFFER_SIZE);
  
  *(uint64_t *)write_ptr = resource_header;
  buffer_writer = (uint *)((int64_t)write_ptr + 8);
  list_end = resource_context + 0x878;
  current_resource = *(int64_t *)(resource_context + 0x880);
  buffer_ptr = total_size;
  write_ptr = buffer_writer;
  
  // 遍历资源链表
  if (current_resource != list_end) {
    do {
      resource_id = *(int *)(current_resource + 0x20);
      resource_start = *(int64_t *)(current_resource + 0x30);
      resource_end = *(int64_t *)(current_resource + 0x28);
      
      // 检查缓冲区容量
      if ((uint64_t)((buffer_ptr - (int64_t)buffer_writer) + buffer_capacity) < 9) {
        System_BufferManager(&total_size, (int64_t)buffer_writer + (8 - buffer_ptr));
        buffer_ptr = total_size;
        buffer_writer = write_ptr;
      }
      
      // 写入资源ID
      *(int64_t *)buffer_writer = (int64_t)resource_id;
      write_ptr = buffer_writer + 2;
      
      // 检查缓冲区容量
      if ((uint64_t)((buffer_ptr - (int64_t)write_ptr) + buffer_capacity) < 5) {
        System_BufferManager(&total_size, (int64_t)write_ptr + (4 - buffer_ptr));
        buffer_ptr = total_size;
      }
      
      // 计算数据长度
      data_length = (uint)(resource_start - resource_end >> 3);
      *write_ptr = data_length;
      buffer_writer = write_ptr + 1;
      write_ptr = buffer_writer;
      
      // 处理资源数据
      if (0 < (int)data_length) {
        current_resource = **(int64_t **)(current_resource + 0x28);
        data_length = *(uint *)(current_resource + 0x98);
        
        // 检查缓冲区容量
        if ((uint64_t)((buffer_ptr - (int64_t)buffer_writer) + buffer_capacity) <= (uint64_t)data_length + 4) {
          System_BufferManager(&total_size, (((uint64_t)data_length + 4) - buffer_ptr) + (int64_t)buffer_writer);
        }
        
        *write_ptr = data_length;
        write_ptr = write_ptr + 1;
        
        // 获取资源数据指针
        data_buffer = *(void **)(current_resource + 0x90);
        data_buffer = &RENDERING_FILE_HEADER_ADDRESS;
        if (data_buffer != (void *)0x0) {
          data_buffer = data_buffer;
        }
        
        // 复制数据到缓冲区
        memcpy(write_ptr, data_buffer, data_length);
      }
      
      // 移动到下一个资源
      current_resource = func_0x00018066bd70(current_resource);
    } while (current_resource != list_end);
  }
  
  // 写入文件
  list_head = buffer_capacity;
  fwrite(&list_head, 8, 1, *(uint64_t *)(file_context + 8));
  fwrite(buffer_ptr, list_head, 1, *(uint64_t *)(file_context + 8));
  
  // 清理缓冲区
  if (((char)write_flag == '\0') && (buffer_ptr != 0)) {
    FUN_18064e900(buffer_ptr);
  }
  return;
}

/**
 * 渲染系统资源数据读取器
 * 从文件读取渲染资源数据并重建资源结构
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件操作上下文指针
 * @param resource_type 资源类型标识
 */
void RenderingSystem_ReadResourceData(int64_t resource_context, int64_t file_context, uint64_t resource_type)
{
  uint64_t *resource_node;
  int64_t *resource_ptr;
  uint64_t resource_count;
  uint *data_ptr;
  int32_t *resource_block;
  uint64_t *resource_data;
  int64_t current_pos;
  uint64_t *next_resource;
  int64_t list_size;
  uint64_t *list_end;
  uint64_t *list_start;
  int64_t resource_index;
  uint64_t *resource_list;
  int resource_id;
  int64_t file_offset;
  uint64_t file_size;
  uint64_t data_size;
  int8_t temp_buffer [8];
  int64_t buffer_size;
  int64_t *buffer_ptr;
  uint64_t buffer_header;
  int16_t buffer_flag;
  int8_t buffer_mode;
  
  file_offset = 0;
  file_size = resource_type;
  
  // 读取文件大小
  fread(&file_offset, 8, 1, *(uint64_t *)(file_context + 8));
  
  // 初始化缓冲区
  buffer_size = 0;
  buffer_ptr = (int64_t *)0x0;
  buffer_header = 0;
  buffer_flag = 0;
  buffer_mode = 3;
  
  if (file_offset != 0) {
    System_BufferManager(&buffer_size);
  }
  
  current_pos = buffer_size;
  fread(buffer_size, file_offset, 1, *(uint64_t *)(file_context + 8));
  
  list_size = *buffer_ptr;
  buffer_ptr = buffer_ptr + 1;
  
  do {
    if (list_size == 0) {
      if (((char)buffer_flag == '\0') && (current_pos != 0)) {
        FUN_18064e900(current_pos);
      }
      return;
    }
    
    current_pos = *buffer_ptr;
    data_ptr = (uint *)(buffer_ptr + 1);
    buffer_ptr = (int64_t *)((int64_t)buffer_ptr + 0xc);
    
    if (0 < (int)*data_ptr) {
      resource_node = (uint64_t *)(resource_context + 0x878);
      resource_id = (int)current_pos;
      data_size = (uint64_t)file_size >> 0x20;
      file_size = CONCAT44((int)data_size, resource_id);
      resource_count = (uint64_t)*data_ptr;
      
      do {
        // 创建资源节点
        next_resource = (uint64_t *)0x0;
        resource_block = (int32_t *)FUN_18062b1e0(RENDERING_ALLOCATOR_ADDRESS, RENDERING_RESOURCE_MAGIC_NUMBER, 8, 3);
        resource_ptr = (int64_t *)(resource_block + 0x22);
        
        // 初始化资源结构
        *resource_ptr = (int64_t)&RENDERING_RESOURCE_TABLE_ADDRESS;
        *(uint64_t *)(resource_block + 0x24) = 0;
        resource_block[0x26] = 0;
        
        *resource_ptr = (int64_t)&RENDERING_DATA_ARRAY_ADDRESS;
        *(uint64_t *)(resource_block + 0x28) = 0;
        *(uint64_t *)(resource_block + 0x24) = 0;
        resource_block[0x26] = 0;
        
        *resource_block = 0xffffffff;
        (**(code **)(*resource_ptr + 0x10))(resource_ptr, &RENDERING_FILE_HEADER_ADDRESS);
        
        // 设置资源参数
        *(uint64_t *)(resource_block + 1) = 0x3f800000;
        *(uint64_t *)(resource_block + 3) = 0;
        *(uint64_t *)(resource_block + 5) = 0x3f80000000000000;
        *(uint64_t *)(resource_block + 7) = 0;
        *(uint64_t *)(resource_block + 9) = 0;
        *(uint64_t *)(resource_block + 0xb) = 0x3f800000;
        *(uint64_t *)(resource_block + 0xd) = 0;
        *(uint64_t *)(resource_block + 0xf) = 0x3f80000000000000;
        *(uint64_t *)(resource_block + 0x11) = 0x3f800000;
        *(uint64_t *)(resource_block + 0x13) = 0;
        *(uint64_t *)(resource_block + 0x15) = 0x3f80000000000000;
        *(uint64_t *)(resource_block + 0x17) = 0;
        
        resource_block[0x19] = 0;
        resource_block[0x1a] = 0;
        resource_block[0x1b] = 0x3f800000;
        resource_block[0x1c] = 0;
        resource_block[0x1d] = 0;
        resource_block[0x1e] = 0;
        resource_block[0x1f] = 0;
        resource_block[0x20] = 0x3f800000;
        
        // 处理资源数据
        FUN_18033a3f0(resource_block, &buffer_size);
        
        // 查找插入位置
        resource_data = resource_node;
        resource_list = *(uint64_t **)(resource_context + 0x888);
        while (resource_list != (uint64_t *)0x0) {
          if (*(int *)(resource_list + 4) < resource_id) {
            resource_list = (uint64_t *)*resource_list;
          }
          else {
            resource_data = resource_list;
            resource_list = (uint64_t *)resource_list[1];
          }
        }
        
        // 插入资源节点
        if ((resource_data == resource_node) || (resource_id < *(int *)(resource_data + 4))) {
          resource_data = (uint64_t *)FUN_18020d730(resource_node, temp_buffer);
          resource_data = (uint64_t *)*resource_data;
        }
        
        // 更新资源列表
        list_start = (uint64_t *)resource_data[6];
        if (list_start < (uint64_t *)resource_data[7]) {
          resource_data[6] = list_start + 1;
          *list_start = resource_block;
        }
        else {
          list_end = (uint64_t *)resource_data[5];
          current_pos = (int64_t)list_start - (int64_t)list_end >> 3;
          if (current_pos == 0) {
            current_pos = 1;
            // 重新分配内存
            next_resource = (uint64_t *)
                     FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, current_pos * 8, *(int8_t *)(resource_data + 8));
            list_start = (uint64_t *)resource_data[6];
            list_end = (uint64_t *)resource_data[5];
          }
          else {
            current_pos = current_pos * 2;
            if (current_pos != 0) {
              next_resource = (uint64_t *)
                       FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, current_pos * 8, *(int8_t *)(resource_data + 8));
            }
            else {
              next_resource = (uint64_t *)0x0;
            }
          }
          
          // 移动数据
          if (list_end != list_start) {
            memmove(next_resource, list_end, (int64_t)list_start - (int64_t)list_end);
          }
          
          *next_resource = resource_block;
          if (resource_data[5] != 0) {
            FUN_18064e900();
          }
          
          resource_data[5] = next_resource;
          resource_data[6] = next_resource + 1;
          resource_data[7] = next_resource + current_pos;
        }
        
        resource_count = resource_count - 1;
      } while (resource_count != 0);
      
      data_size = 0;
    }
    
    list_size = list_size + -1;
    current_pos = buffer_size;
  } while( true );
}

/**
 * 渲染系统资源数据块处理器
 * 处理渲染资源的数据块，包括序列化和反序列化
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件操作上下文指针
 * @param data_ptr 数据缓冲区指针
 * @param data_size 数据大小
 */
void RenderingSystem_ProcessResourceChunk(int64_t resource_context, int64_t file_context, int64_t data_ptr, uint64_t data_size)
{
  int resource_id;
  uint64_t resource_header;
  int64_t resource_start;
  int64_t resource_end;
  void *resource_data;
  int64_t current_resource;
  void *data_buffer;
  uint *data_writer;
  int64_t buffer_ptr;
  uint data_length;
  int64_t total_size;
  int64_t list_head;
  int64_t list_end;
  uint *write_ptr;
  int64_t buffer_capacity;
  int16_t write_flag;
  int8_t buffer_mode;
  
  total_size = 0;
  write_ptr = (uint *)0x0;
  buffer_capacity = 0;
  write_flag = 0;
  buffer_mode = 3;
  
  // 获取资源头部信息
  resource_header = *(uint64_t *)(resource_context + 0x8c8);
  list_head = data_ptr;
  
  // 初始化写入缓冲区
  System_BufferManager(&total_size, 8, data_ptr, data_size, RENDERING_FILE_BUFFER_SIZE);
  
  *(uint64_t *)write_ptr = resource_header;
  data_writer = (uint *)((int64_t)write_ptr + 8);
  list_end = resource_context + 0x8a8;
  current_resource = *(int64_t *)(resource_context + 0x8b0);
  buffer_ptr = total_size;
  write_ptr = data_writer;
  
  // 遍历资源链表
  if (current_resource != list_end) {
    do {
      resource_id = *(int *)(current_resource + 0x20);
      resource_start = *(int64_t *)(current_resource + 0x30);
      resource_end = *(int64_t *)(current_resource + 0x28);
      
      // 检查缓冲区容量
      if ((uint64_t)((buffer_capacity - (int64_t)data_writer) + buffer_ptr) < 9) {
        System_BufferManager(&total_size, (int64_t)data_writer + (8 - buffer_ptr));
        data_writer = write_ptr;
        buffer_ptr = total_size;
      }
      
      // 写入资源ID
      *(int64_t *)data_writer = (int64_t)resource_id;
      write_ptr = data_writer + 2;
      
      // 检查缓冲区容量
      if ((uint64_t)((buffer_capacity - (int64_t)write_ptr) + buffer_ptr) < 5) {
        System_BufferManager(&total_size, (int64_t)write_ptr + (4 - buffer_ptr));
        buffer_ptr = total_size;
      }
      
      // 计算数据长度
      data_length = (uint)(resource_start - resource_end >> 3);
      *write_ptr = data_length;
      data_writer = write_ptr + 1;
      write_ptr = data_writer;
      
      // 处理资源数据
      if (0 < (int)data_length) {
        current_resource = **(int64_t **)(current_resource + 0x28);
        data_length = *(uint *)(current_resource + 0x38);
        
        // 检查缓冲区容量
        if ((uint64_t)((buffer_capacity - (int64_t)data_writer) + buffer_ptr) <= (uint64_t)data_length + 4) {
          System_BufferManager(&total_size, (((uint64_t)data_length + 4) - buffer_ptr) + (int64_t)data_writer);
        }
        
        *write_ptr = data_length;
        write_ptr = write_ptr + 1;
        
        // 获取资源数据指针
        resource_data = *(void **)(current_resource + 0x30);
        data_buffer = &RENDERING_FILE_HEADER_ADDRESS;
        if (resource_data != (void *)0x0) {
          data_buffer = resource_data;
        }
        
        // 复制数据到缓冲区
        memcpy(write_ptr, data_buffer, data_length);
      }
      
      // 移动到下一个资源
      current_resource = func_0x00018066bd70(current_resource);
    } while (current_resource != list_end);
  }
  
  // 写入文件
  list_head = buffer_capacity;
  fwrite(&list_head, 8, 1, *(uint64_t *)(file_context + 8));
  fwrite(buffer_ptr, list_head, 1, *(uint64_t *)(file_context + 8));
  
  // 清理缓冲区
  if (((char)write_flag == '\0') && (buffer_ptr != 0)) {
    FUN_18064e900(buffer_ptr);
  }
  return;
}

/**
 * 渲染系统资源文件处理器
 * 处理资源文件的加载和解析，构建资源索引
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件操作上下文指针
 * @param resource_type 资源类型标识
 */
void RenderingSystem_HandleResourceFile(int64_t resource_context, int64_t file_context, uint64_t resource_type)
{
  int64_t *resource_node;
  uint64_t *resource_ptr;
  uint resource_flags;
  uint64_t resource_header;
  uint64_t resource_count;
  int32_t *resource_block;
  uint64_t *resource_data;
  int64_t current_pos;
  uint64_t *next_resource;
  int64_t list_size;
  uint64_t *list_end;
  uint64_t *list_start;
  int64_t resource_index;
  uint64_t *resource_list;
  uint *data_ptr;
  uint64_t *resource_info;
  int resource_id;
  uint *data_writer;
  int32_t data_value;
  int64_t file_offset;
  uint64_t file_size;
  uint64_t data_size;
  int8_t temp_buffer [8];
  int64_t buffer_size;
  uint *buffer_ptr;
  uint64_t buffer_header;
  int16_t buffer_flag;
  int8_t buffer_mode;
  
  file_offset = 0;
  file_size = resource_type;
  
  // 读取文件大小
  fread(&file_offset, 8, 1, *(uint64_t *)(file_context + 8));
  
  // 初始化缓冲区
  buffer_size = 0;
  buffer_ptr = (uint *)0x0;
  buffer_header = 0;
  buffer_flag = 0;
  buffer_mode = 3;
  
  if (file_offset != 0) {
    System_BufferManager(&buffer_size);
  }
  
  current_pos = buffer_size;
  fread(buffer_size, file_offset, 1, *(uint64_t *)(file_context + 8));
  
  list_size = *(int64_t *)buffer_ptr;
  data_ptr = (uint *)((int64_t)buffer_ptr + 8);
  buffer_ptr = data_ptr;
  
  do {
    if (list_size == 0) {
      if (((char)buffer_flag == '\0') && (current_pos != 0)) {
        FUN_18064e900(current_pos);
      }
      return;
    }
    
    resource_header = *(uint64_t *)data_ptr;
    data_writer = data_ptr + 2;
    data_ptr = data_ptr + 3;
    buffer_ptr = data_ptr;
    
    if (0 < (int)*data_writer) {
      resource_ptr = (uint64_t *)(resource_context + 0x8a8);
      resource_id = (int)resource_header;
      data_size = (uint64_t)file_size >> 0x20;
      file_size = CONCAT44((int)data_size, resource_id);
      resource_count = (uint64_t)*data_writer;
      
      do {
        // 创建资源块
        resource_block = (int32_t *)FUN_18062b1e0(RENDERING_ALLOCATOR_ADDRESS, RENDERING_DATA_BLOCK_SIZE, 8, 3);
        resource_node = (int64_t *)(resource_block + 10);
        
        // 初始化资源结构
        *resource_node = (int64_t)&RENDERING_RESOURCE_TABLE_ADDRESS;
        *(uint64_t *)(resource_block + 0xc) = 0;
        resource_block[0xe] = 0;
        
        *resource_node = (int64_t)&RENDERING_DATA_ARRAY_ADDRESS;
        *(uint64_t *)(resource_block + 0x10) = 0;
        *(uint64_t *)(resource_block + 0xc) = 0;
        resource_block[0xe] = 0;
        
        *resource_block = 0xffffffff;
        (**(code **)(*resource_node + 0x10))(resource_node, &RENDERING_FILE_HEADER_ADDRESS);
        
        // 设置资源参数
        *(uint64_t *)(resource_block + 1) = 0;
        *(uint64_t *)(resource_block + 3) = 0;
        data_value = 0;
        resource_block[5] = 0;
        resource_block[6] = 0;
        resource_block[7] = 0;
        resource_block[8] = 0;
        
        resource_flags = *data_ptr;
        data_ptr = data_ptr + 1;
        
        if (resource_flags != 0) {
          buffer_ptr = data_ptr;
          data_value = (**(code **)(*resource_node + 0x18))(resource_node, data_ptr, resource_flags);
          data_ptr = (uint *)((int64_t)data_ptr + (uint64_t)resource_flags);
        }
        
        // 复制数据块
        resource_block[1] = *data_ptr;
        resource_block[2] = data_ptr[1];
        resource_block[3] = data_ptr[2];
        resource_block[4] = data_ptr[3];
        resource_block[5] = data_ptr[4];
        resource_block[6] = data_ptr[5];
        resource_block[7] = data_ptr[6];
        resource_block[8] = data_ptr[7];
        data_ptr = data_ptr + 8;
        buffer_ptr = data_ptr;
        
        // 处理资源数据
        data_value = FUN_1800c17c0(data_value, resource_node);
        *resource_block = data_value;
        
        // 查找插入位置
        resource_data = resource_ptr;
        resource_info = *(uint64_t **)(resource_context + 0x8b8);
        while (resource_info != (uint64_t *)0x0) {
          if (*(int *)(resource_info + 4) < resource_id) {
            resource_info = (uint64_t *)*resource_info;
          }
          else {
            resource_data = resource_info;
            resource_info = (uint64_t *)resource_info[1];
          }
        }
        
        // 插入资源节点
        if ((resource_data == resource_ptr) || (resource_id < *(int *)(resource_data + 4))) {
          resource_data = (uint64_t *)FUN_18020d730(resource_ptr, temp_buffer);
          resource_data = (uint64_t *)*resource_data;
        }
        
        // 更新资源列表
        list_start = (uint64_t *)resource_data[6];
        if (list_start < (uint64_t *)resource_data[7]) {
          resource_data[6] = list_start + 1;
          *list_start = resource_block;
        }
        else {
          list_end = (uint64_t *)resource_data[5];
          current_pos = (int64_t)list_start - (int64_t)list_end >> 3;
          if (current_pos == 0) {
            current_pos = 1;
            // 重新分配内存
            next_resource = (uint64_t *)
                     FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, current_pos * 8, *(int8_t *)(resource_data + 8));
            list_start = (uint64_t *)resource_data[6];
            list_end = (uint64_t *)resource_data[5];
          }
          else {
            current_pos = current_pos * 2;
            if (current_pos != 0) {
              next_resource = (uint64_t *)
                       FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, current_pos * 8, *(int8_t *)(resource_data + 8));
            }
            else {
              next_resource = (uint64_t *)0x0;
            }
          }
          
          // 移动数据
          if (list_end != list_start) {
            memmove(next_resource, list_end, (int64_t)list_start - (int64_t)list_end);
          }
          
          *next_resource = resource_block;
          if (resource_data[5] != 0) {
            FUN_18064e900();
          }
          
          resource_data[5] = next_resource;
          resource_data[6] = next_resource + 1;
          resource_data[7] = next_resource + current_pos;
        }
        
        resource_count = resource_count - 1;
      } while (resource_count != 0);
      
      data_size = 0;
    }
    
    list_size = list_size + -1;
    current_pos = buffer_size;
  } while( true );
}

/**
 * 渲染系统资源表清理器
 * 清理和释放资源表中的所有资源，包括内存管理和数据结构清理
 * 
 * @param resource_context 资源上下文指针
 * @param resource_index 资源索引
 */
void RenderingSystem_CleanupResourceTable(int64_t resource_context, uint resource_index)
{
  uint64_t *hash_table;
  uint resource_id;
  int64_t *resource_ptr;
  uint64_t *resource_node;
  int lock_status;
  int64_t *table_entry;
  uint *hash_ptr;
  uint *hash_entry;
  uint64_t hash_value;
  int64_t table_size;
  uint64_t *table_data;
  int64_t list_ptr;
  uint64_t *list_end;
  uint64_t *list_start;
  uint64_t file_position;
  uint64_t table_capacity;
  uint *data_ptr;
  uint *data_entry;
  uint64_t *resource_info;
  uint64_t *next_resource;
  uint64_t resource_data;
  uint64_t hash_mask;
  uint *temp_ptr;
  uint *temp_entry;
  uint64_t *temp_buffer;
  uint64_t *buffer_ptr;
  uint64_t buffer_header;
  int32_t buffer_data;
  uint64_t stack_buffer [8];
  uint *hash_buffer;
  uint *hash_data;
  uint64_t hash_header;
  int32_t hash_flag;
  uint64_t buffer_size;
  int64_t *buffer_ptr64;
  uint64_t *buffer_ptr8;
  uint64_t stack_top;
  
  stack_top = 0x1803368e3;
  file_position = _ftelli64(*(uint64_t *)(*(int64_t *)(resource_context + 0x200) + 8));
  stack_top = 0x1803368f8;
  file_position = FUN_18032c9f0(resource_context, *(uint64_t *)(resource_context + 0x200), file_position, resource_index);
  stack_top = 0x180336910;
  
  // 锁定互斥锁
  lock_status = _Mtx_lock(resource_context + 0x280);
  if (lock_status != RENDERING_MUTEX_LOCK_SUCCESS) {
    stack_top = 0x18033691c;
    __Throw_C_error_std__YAXH_Z(lock_status);
  }
  
  stack_top = 0x18033692f;
  FUN_180057340(resource_context + 0x260, (int64_t)(int)(resource_index + 1));
  *(uint64_t *)(*(int64_t *)(resource_context + 0x260) + (int64_t)(int)resource_index * 8) = file_position;
  *(int *)(resource_context + 0x228) = *(int *)(resource_context + 0x228) + 1;
  stack_top = 0x180336949;
  
  // 解锁互斥锁
  lock_status = _Mtx_unlock(resource_context + 0x280);
  if (lock_status != RENDERING_MUTEX_LOCK_SUCCESS) {
    stack_top = 0x180336955;
    __Throw_C_error_std__YAXH_Z(lock_status);
  }
  
  table_capacity = (uint64_t)resource_index;
  buffer_size = 0xfffffffffffffffe;
  
  // 创建资源表
  resource_ptr = (int64_t *)FUN_18062b1e0(RENDERING_ALLOCATOR_ADDRESS, RENDERING_HASH_TABLE_SIZE, 8, 3);
  FUN_180049830(resource_ptr);
  
  *resource_ptr = (int64_t)&RENDERING_FILE_POINTER_ADDRESS;
  hash_table = (uint64_t *)(resource_ptr + 0x18);
  *hash_table = 0;
  resource_ptr[0x19] = 0;
  resource_ptr[0x1a] = 0;
  *(int32_t *)(resource_ptr + 0x1b) = 3;
  
  buffer_ptr64 = resource_ptr;
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  
  // 锁定资源互斥锁
  lock_status = _Mtx_lock(resource_context + 0xa20);
  if (lock_status != RENDERING_MUTEX_LOCK_SUCCESS) {
    __Throw_C_error_std__YAXH_Z(lock_status);
  }
  
  hash_buffer = (uint *)0x0;
  hash_data = (uint *)0x0;
  hash_header = 0;
  hash_flag = 3;
  
  FUN_18032b1c0(resource_context, &hash_buffer, table_capacity, 1);
  
  if (hash_buffer != hash_data) {
    hash_ptr = hash_buffer;
    do {
      resource_id = *hash_ptr;
      hash_value = (uint64_t)resource_id % (uint64_t)*(uint *)(resource_context + 0xa00);
      
      // 查找哈希表中的资源
      for (hash_entry = *(uint **)(*(int64_t *)(resource_context + 0x9f8) + hash_value * 8); 
           hash_entry != (uint *)0x0; hash_entry = *(uint **)(hash_entry + 4)) {
        if (resource_id == *hash_entry) {
          if (hash_entry != (uint *)0x0) {
            break;
          }
          break;
        }
      }
      
      // 创建新的哈希条目
      FUN_18066c220(resource_context + 0xa10, &stack0x00000018, 
                    (uint64_t)*(uint *)(resource_context + 0xa00),
                    *(int32_t *)(resource_context + 0xa08), 1);
      
      hash_entry = (uint *)FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, 0x18, *(int8_t *)(resource_context + 0xa1c));
      *hash_entry = resource_id;
      hash_entry[2] = 0;
      hash_entry[3] = 0;
      hash_entry[4] = 0;
      hash_entry[5] = 0;
      
      if ((char)hash_table != '\0') {
        hash_value = (uint64_t)resource_id % ((uint64_t)hash_table >> 0x20);
        FUN_18033bf30(resource_context + 0x9f0);
      }
      
      *(uint64_t *)(hash_entry + 4) = *(uint64_t *)(*(int64_t *)(resource_context + 0x9f8) + hash_value * 8);
      *(uint **)(*(int64_t *)(resource_context + 0x9f8) + hash_value * 8) = hash_entry;
      *(int64_t *)(resource_context + 0xa08) = *(int64_t *)(resource_context + 0xa08) + 1;
      
      // 处理资源数据
      table_size = *(int64_t *)(hash_entry + 2);
      resource_data = 0;
      list_ptr = *(int64_t *)(table_size + 8);
      
      for (hash_entry = *(uint **)(list_ptr + (table_capacity % (uint64_t)*(uint *)(table_size + 0x10)) * 8);
           hash_entry != (uint *)0x0; hash_entry = *(uint **)(hash_entry + 4)) {
        if (resource_index == *hash_entry) {
          hash_mask = *(uint64_t *)(table_size + 0x10);
          break;
        }
      }
      
      hash_mask = *(uint64_t *)(table_size + 0x10);
      hash_entry = *(uint **)(list_ptr + hash_mask * 8);
      
      if (hash_entry != *(uint **)(list_ptr + hash_mask * 8)) {
        resource_data = *(uint64_t *)(hash_entry + 2);
        hash_entry = (uint *)(list_ptr + (table_capacity % (hash_mask & 0xffffffff)) * 8);
        temp_entry = *(uint **)hash_entry;
        
        while ((temp_entry != (uint *)0x0 && (resource_index != *temp_entry))) {
          hash_entry = temp_entry + 4;
          temp_entry = *(uint **)hash_entry;
        }
        
        temp_ptr = (uint *)0x0;
        if (temp_entry != (uint *)0x0) {
          do {
            data_ptr = temp_entry;
            if (resource_index != *data_ptr) {
              break;
            }
            
            *(uint64_t *)hash_entry = *(uint64_t *)(data_ptr + 4);
            *(uint **)(data_ptr + 4) = temp_ptr;
            *(int64_t *)(table_size + 0x18) = *(int64_t *)(table_size + 0x18) + -1;
            temp_entry = *(uint **)hash_entry;
            temp_ptr = data_ptr;
          } while (*(uint **)hash_entry != (uint *)0x0);
          
          if (temp_ptr != (uint *)0x0) {
            FUN_18064e900(temp_ptr);
          }
        }
      }
      
      // 更新资源表
      resource_info = (uint64_t *)resource_ptr[0x19];
      if (resource_info < (uint64_t *)resource_ptr[0x1a]) {
        resource_ptr[0x19] = (int64_t)(resource_info + 1);
        *resource_info = resource_data;
      }
      else {
        next_resource = (uint64_t *)*hash_table;
        table_size = (int64_t)resource_info - (int64_t)next_resource >> 3;
        if (table_size == 0) {
          table_size = 1;
          // 重新分配内存
          table_data = (uint64_t *)FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, table_size * 8, (char)resource_ptr[0x1b]);
          resource_info = (uint64_t *)resource_ptr[0x19];
          next_resource = (uint64_t *)*hash_table;
        }
        else {
          table_size = table_size * 2;
          if (table_size != 0) {
            table_data = (uint64_t *)FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, table_size * 8, (char)resource_ptr[0x1b]);
          }
          else {
            table_data = (uint64_t *)0x0;
          }
        }
        
        // 移动数据
        if (next_resource != resource_info) {
          memmove(table_data, next_resource, (int64_t)resource_info - (int64_t)next_resource);
        }
        
        *table_data = resource_data;
        if (*hash_table != 0) {
          FUN_18064e900();
        }
        
        *hash_table = (uint64_t)table_data;
        resource_ptr[0x19] = (int64_t)(table_data + 1);
        resource_ptr[0x1a] = (int64_t)(table_data + table_size);
      }
      
      hash_ptr = hash_ptr + 1;
    } while (hash_ptr != hash_data);
  }
  
  // 清理哈希缓冲区
  if (hash_buffer != (uint *)0x0) {
    FUN_18064e900();
  }
  
  // 解锁资源互斥锁
  lock_status = _Mtx_unlock(resource_context + 0xa20);
  if (lock_status != RENDERING_MUTEX_LOCK_SUCCESS) {
    __Throw_C_error_std__YAXH_Z(lock_status);
  }
  
  resource_data = RENDERING_MEMORY_POOL_ADDRESS;
  (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  FUN_18005e110(resource_data, &stack0x00000018);
  
  // 处理辅助资源表
  temp_ptr = (uint *)0x0;
  temp_entry = (uint *)0x0;
  buffer_header = 0;
  buffer_data = 3;
  
  FUN_18032afa0(resource_context, &temp_ptr, table_capacity);
  
  if (temp_ptr != temp_entry) {
    hash_ptr = temp_ptr;
    do {
      resource_id = *hash_ptr;
      hash_value = (uint64_t)resource_id % (uint64_t)*(uint *)(resource_context + 0x6c8);
      
      // 查找辅助哈希表中的资源
      for (hash_entry = *(uint **)(*(int64_t *)(resource_context + 0x6c0) + hash_value * 8); 
           hash_entry != (uint *)0x0; hash_entry = *(uint **)(hash_entry + 4)) {
        if (resource_id == *hash_entry) {
          if (hash_entry != (uint *)0x0) {
            break;
          }
          break;
        }
      }
      
      // 创建新的辅助哈希条目
      FUN_18066c220(resource_context + 0x6d8, &stack0x00000018, 
                    (uint64_t)*(uint *)(resource_context + 0x6c8),
                    *(int32_t *)(resource_context + 0x6d0), 1);
      
      hash_entry = (uint *)FUN_18062b420(RENDERING_ALLOCATOR_ADDRESS, 0x18, *(int8_t *)(resource_context + 0x6e4));
      *hash_entry = resource_id;
      hash_entry[2] = 0;
      hash_entry[3] = 0;
      hash_entry[4] = 0;
      hash_entry[5] = 0;
      
      if ((char)resource_ptr != '\0') {
        hash_value = (uint64_t)resource_id % ((uint64_t)resource_ptr >> 0x20);
        FUN_18033bf30(resource_context + 0x6b8);
      }
      
      *(uint64_t *)(hash_entry + 4) = *(uint64_t *)(*(int64_t *)(resource_context + 0x6c0) + hash_value * 8);
      *(uint **)(*(int64_t *)(resource_context + 0x6c0) + hash_value * 8) = hash_entry;
      *(int64_t *)(resource_context + 0x6d0) = *(int64_t *)(resource_context + 0x6d0) + 1;
      
      // 处理辅助资源数据
      table_size = *(int64_t *)(hash_entry + 2);
      list_ptr = *(int64_t *)(table_size + 8);
      
      for (hash_entry = *(uint **)(list_ptr + (table_capacity % (uint64_t)*(uint *)(table_size + 0x10)) * 8);
           hash_entry != (uint *)0x0; hash_entry = *(uint **)(hash_entry + 4)) {
        if (resource_index == *hash_entry) {
          list_ptr = *(int64_t *)(table_size + 0x10);
          break;
        }
      }
      
      list_ptr = *(int64_t *)(table_size + 0x10);
      hash_entry = *(uint **)(list_ptr + list_ptr * 8);
      
      if (hash_entry != *(uint **)(list_ptr + list_ptr * 8)) {
        if (*(int64_t *)(hash_entry + 2) != 0) {
          *(void **)(*(int64_t *)(hash_entry + 2) + 0x50) = &RENDERING_RESOURCE_TABLE_ADDRESS;
          FUN_18064e900();
        }
        
        hash_entry[2] = 0;
        hash_entry[3] = 0;
        hash_entry = (uint *)(*(int64_t *)(table_size + 8) +
                         (table_capacity % (uint64_t)*(uint *)(table_size + 0x10)) * 8);
        temp_entry = *(uint **)hash_entry;
        
        while ((temp_entry != (uint *)0x0 && (resource_index != *temp_entry))) {
          hash_entry = temp_entry + 4;
          temp_entry = *(uint **)hash_entry;
        }
        
        temp_ptr = (uint *)0x0;
        if (temp_entry != (uint *)0x0) {
          do {
            data_ptr = temp_entry;
            if (resource_index != *data_ptr) {
              break;
            }
            
            *(uint64_t *)hash_entry = *(uint64_t *)(data_ptr + 4);
            *(uint **)(data_ptr + 4) = temp_ptr;
            *(int64_t *)(table_size + 0x18) = *(int64_t)(table_size + 0x18) + -1;
            temp_entry = *(uint **)hash_entry;
            temp_ptr = data_ptr;
          } while (*(uint **)hash_entry != (uint *)0x0);
          
          if (temp_ptr != (uint *)0x0) {
            FUN_18064e900(temp_ptr);
          }
        }
      }
      
      hash_ptr = hash_ptr + 1;
    } while (hash_ptr != temp_entry);
  }
  
  // 清理主资源表
  table_size = *(int64_t *)(resource_context + 0x570);
  for (hash_ptr = *(uint **)(table_size + (table_capacity % (uint64_t)*(uint *)(resource_context + 0x578)) * 8);
       hash_ptr != (uint *)0x0; hash_ptr = *(uint **)(hash_ptr + 4)) {
    if (resource_index == *hash_ptr) {
      list_ptr = *(int64_t *)(resource_context + 0x578);
      break;
    }
  }
  
  list_ptr = *(int64_t)(resource_context + 0x578);
  hash_ptr = *(uint **)(table_size + list_ptr * 8);
  
  if (hash_ptr != *(uint **)(table_size + list_ptr * 8)) {
    table_entry = *(int64_t **)(hash_ptr + 2);
    if (table_entry != (int64_t *)0x0) {
      if (*table_entry == 0) {
        FUN_18064e900(table_entry);
      }
      FUN_18064e900();
    }
    
    hash_ptr[2] = 0;
    hash_ptr[3] = 0;
    hash_ptr = (uint *)(*(int64_t)(resource_context + 0x570) +
                     (table_capacity % (uint64_t)*(uint *)(resource_context + 0x578)) * 8);
    hash_entry = *(uint **)hash_ptr;
    
    while ((hash_entry != (uint *)0x0 && (resource_index != *hash_entry))) {
      hash_ptr = hash_entry + 4;
      hash_entry = *(uint **)hash_ptr;
    }
    
    temp_entry = (uint *)0x0;
    if (hash_entry != (uint *)0x0) {
      do {
        temp_ptr = hash_entry;
        if (resource_index != *temp_ptr) {
          break;
        }
        
        *(uint64_t *)hash_ptr = *(uint64_t *)(temp_ptr + 4);
        *(uint **)(temp_ptr + 4) = temp_entry;
        *(int64_t *)(resource_context + 0x580) = *(int64_t)(resource_context + 0x580) + -1;
        hash_entry = *(uint **)hash_ptr;
        temp_entry = temp_ptr;
      } while (*(uint **)hash_ptr != (uint *)0x0);
      
      if (temp_entry != (uint *)0x0) {
        FUN_18064e900(temp_entry);
      }
    }
  }
  
  // 清理资源链表
  resource_info = (uint64_t *)(resource_context + 0x818);
  table_data = resource_info;
  next_resource = *(uint64_t **)(resource_context + 0x828);
  
  while (temp_ptr = hash_ptr, resource_node = *(uint64_t **)(resource_context + 0x828), 
         next_resource != (uint64_t *)0x0) {
    if (resource_index < *(uint *)(next_resource + 4)) {
      table_data = next_resource;
      next_resource = (uint64_t *)next_resource[1];
    }
    else {
      next_resource = (uint64_t *)*next_resource;
    }
  }
  
  while (hash_ptr = temp_ptr, resource_node != (uint64_t *)0x0) {
    if (*(uint *)(resource_node + 4) < resource_index) {
      resource_node = (uint64_t *)*resource_node;
    }
    else {
      temp_ptr = resource_node;
      resource_node = (uint64_t *)resource_node[1];
    }
  }
  
  while (temp_ptr = hash_ptr, temp_ptr != table_data) {
    table_size = temp_ptr[5];
    if (table_size != 0) {
      FUN_1808fc8a8(table_size + 0x38, 0x30, 4, FUN_18004a130);
      buffer_ptr8 = (uint64_t *)(table_size + 0x18);
      *buffer_ptr8 = &RENDERING_DATA_ARRAY_ADDRESS;
      
      if (*(int64_t)(table_size + 0x20) == 0) {
        *(uint64_t *)(table_size + 0x20) = 0;
        *(int32_t *)(table_size + 0x30) = 0;
        *buffer_ptr8 = &RENDERING_RESOURCE_TABLE_ADDRESS;
        FUN_18064e900(table_size);
      }
      
      FUN_18064e900();
    }
    
    temp_ptr = (uint64_t *)func_0x00018066bd70(temp_ptr);
    hash_ptr = temp_ptr;
  }
  
  FUN_18033ad80(resource_context + 0x4a8, &stack0x00000010);
  FUN_18033ad80(resource_context + 0x638, &stack0x00000010);
  
  table_data = resource_info;
  next_resource = *(uint64_t **)(resource_context + 0x828);
  
  while (temp_ptr = hash_ptr, resource_node = *(uint64_t **)(resource_context + 0x828), 
         next_resource != (uint64_t *)0x0) {
    if (resource_index < *(uint *)(next_resource + 4)) {
      table_data = next_resource;
      next_resource = (uint64_t *)next_resource[1];
    }
    else {
      next_resource = (uint64_t *)*next_resource;
    }
  }
  
  while (next_resource = temp_ptr, resource_node != (uint64_t *)0x0) {
    if (*(uint *)(resource_node + 4) < resource_index) {
      resource_node = (uint64_t *)*resource_node;
    }
    else {
      temp_ptr = resource_node;
      resource_node = (uint64_t *)resource_node[1];
    }
  }
  
  // 清理资源节点
  for (; next_resource != table_data; next_resource = (uint64_t *)func_0x00018066bd70(next_resource)) {
  }
  
  if ((temp_ptr == *(uint64_t **)(resource_context + 0x820)) && (table_data == resource_info)) {
    next_resource = *(uint64_t **)(resource_context + 0x828);
    if (next_resource != (uint64_t *)0x0) {
      FUN_18004b790(resource_info, *next_resource);
      FUN_18064e900(next_resource);
    }
    
    *resource_info = resource_info;
    *(uint64_t **)(resource_context + 0x820) = resource_info;
    *(uint64_t *)(resource_context + 0x828) = 0;
    *(int8_t *)(resource_context + 0x830) = 0;
    *(uint64_t *)(resource_context + 0x838) = 0;
  }
  else {
    while (next_resource = temp_ptr, next_resource != table_data) {
      *(int64_t *)(resource_context + 0x838) = *(int64_t)(resource_context + 0x838) + -1;
      temp_ptr = (uint64_t *)func_0x00018066bd70(next_resource);
      FUN_18066ba00(next_resource, table_data);
      
      if (next_resource != (uint64_t *)0x0) {
        FUN_18064e900(next_resource);
      }
    }
  }
  
  if (hash_ptr == (uint *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
    return;
  }
  
  FUN_18064e900(hash_ptr);
}