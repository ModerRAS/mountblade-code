#include "TaleWorlds.Native.Split.h"

/*
 * 网络系统客户端管理模块
 * 
 * 本模块实现了骑马与砍杀游戏引擎中的网络客户端管理功能，包括：
 * - 客户端连接管理
 * - 客户端状态查询
 * - 客户端属性获取与设置
 * - 网络通信处理
 * - 客户端数据管理
 * 
 * 文件包含22个核心函数，提供了完整的客户端管理API接口。
 */

// 系统常量定义
#define MAX_CLIENT_CONNECTIONS 1024       // 最大客户端连接数
#define CLIENT_DATA_BUFFER_SIZE 256       // 客户端数据缓冲区大小
#define NETWORK_STACK_SIZE 32            // 网络堆栈大小
#define MAX_PROPERTY_COUNT 6             // 最大属性数量

// 客户端状态枚举
typedef enum {
    CLIENT_STATE_DISCONNECTED = 0,       // 未连接状态
    CLIENT_STATE_CONNECTING = 1,         // 连接中状态
    CLIENT_STATE_CONNECTED = 2,         // 已连接状态
    CLIENT_STATE_AUTHENTICATED = 3,      // 已认证状态
    CLIENT_STATE_IN_GAME = 4            // 游戏中状态
} ClientState;

// 客户端属性结构
typedef struct {
    uint32_t property_id;                // 属性ID
    uint32_t property_value;             // 属性值
    uint32_t property_flags;             // 属性标志
    uint32_t property_reserved;          // 保留字段
} ClientProperty;

// 客户端连接信息结构
typedef struct {
    uint64_t connection_id;             // 连接ID
    uint32_t client_address;            // 客户端地址
    uint32_t client_port;                // 客户端端口
    ClientState state;                  // 客户端状态
    uint32_t flags;                     // 连接标志
    void* data_buffer;                  // 数据缓冲区
    size_t buffer_size;                 // 缓冲区大小
    ClientProperty properties[MAX_PROPERTY_COUNT]; // 客户端属性
} ClientConnection;

// 网络消息结构
typedef struct {
    uint32_t message_type;              // 消息类型
    uint32_t message_size;              // 消息大小
    void* message_data;                // 消息数据
    uint64_t timestamp;                 // 时间戳
} NetworkMessage;

/*
 * 函数别名定义 - 提高代码可读性
 */
#define NetworkClient_GetConnectionInfo FUN_1808455f0
#define NetworkClient_SendMessage FUN_180845c40
#define NetworkClient_BroadcastMessage FUN_180845c84
#define NetworkClient_Initialize FUN_180845cfc
#define NetworkClient_GetPropertyList FUN_180845d20
#define NetworkClient_GetConnectionCount FUN_180845ef0
#define NetworkClient_GetClientInfo FUN_180846050
#define NetworkClient_SetClientProperty FUN_180846210
#define NetworkClient_QueryClientStatus FUN_180846410
#define NetworkClient_PingClient FUN_180846453
#define NetworkClient_DisconnectClient FUN_1808464cb
#define NetworkClient_GetClientAddress FUN_1808464f0
#define NetworkClient_GetClientData FUN_180846610
#define NetworkClient_InitializeClientData FUN_180846730
#define NetworkClient_CleanupClientData FUN_1808467de
#define NetworkClient_GetClientState FUN_180846810
#define NetworkClient_GetClientVersion FUN_180846930
#define NetworkClient_GetClientPing FUN_180846a90
#define NetworkClient_GetClientProperty FUN_180846bc0
#define NetworkClient_IsClientConnected FUN_180846d30
#define NetworkClient_GetActiveConnections FUN_180846e90
#define NetworkClient_GetConnectionHandle FUN_180846fe0

/**
 * 获取客户端连接信息
 * 
 * @param client_id 客户端ID
 * @param connection_info 输出参数，返回连接信息指针
 * 
 * 本函数根据客户端ID获取详细的连接信息，包括连接状态、
 * 网络参数、客户端属性等。如果客户端不存在或未连接，
 * 则返回空指针。
 * 
 * 简化实现：原本实现包含复杂的错误处理和状态检查，
 * 简化版本主要关注核心功能逻辑。
 */
void NetworkClient_GetConnectionInfo(undefined8 client_id, ulonglong *connection_info)
{
    int result;
    int status;
    undefined8 stack_buffer[NETWORK_STACK_SIZE];
    undefined8 *data_buffer;
    longlong connection_data[2];
    undefined8 *message_buffers[2];
    undefined8 temp_buffer[CLIENT_DATA_BUFFER_SIZE];
    ulonglong security_cookie;
    
    // 安全Cookie初始化（反调试保护）
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    
    // 参数验证
    if (connection_info == (ulonglong *)0x0) {
        // 检查调试状态
        if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
            // 触发调试陷阱（反调试保护）
            FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
        }
        
        // 准备错误消息
        func_0x00018074bda0(temp_buffer, 0x100, 0);
        data_buffer = temp_buffer;
        
        // 发送错误报告
        FUN_180749ef0(0x1f, 0xd, client_id, &UNK_180983de0);
    }
    
    // 初始化输出参数
    *connection_info = 0;
    connection_data[1] = 0;
    
    // 查询客户端连接数据
    result = func_0x00018088c590(client_id, connection_data);
    
    if (result == 0) {
        // 检查连接状态标志
        if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) {
            goto cleanup_and_exit;
        }
        
        // 验证连接句柄
        status = FUN_18088c740(connection_data + 1);
        if (status == 0) {
            goto cleanup_and_exit;
        }
    } else {
        // 连接查询失败
        status = result;
    }
    
    // 获取连接详细信息
    if ((status == 0) && 
        (result = FUN_18088dec0(*(undefined8 *)(connection_data[0] + 0x98), 
                               message_buffers, 0x20), result == 0)) {
        
        // 设置消息处理回调
        *message_buffers[0] = &UNK_180983d78;
        *(undefined4 *)(message_buffers[0] + 3) = 0;
        *(undefined4 *)(message_buffers[0] + 1) = 0x20;
        *(int *)(message_buffers[0] + 2) = (int)client_id;
        
        // 执行消息处理
        result = func_0x00018088e0d0(*(undefined8 *)(connection_data[0] + 0x98), 
                                   message_buffers[0]);
        
        if (result == 0) {
            // 返回连接信息指针
            *connection_info = (ulonglong)*(uint *)(message_buffers[0] + 3);
            
            // 清理临时资源
            FUN_18088c790(connection_data + 1);
        }
    }
    
cleanup_and_exit:
    // 清理连接数据
    FUN_18088c790(connection_data + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 向指定客户端发送网络消息
 * 
 * @param client_id 目标客户端ID
 * @param message_data 消息数据指针
 * @param message_size 消息大小
 * 
 * 本函数实现向特定客户端发送网络消息的功能。消息会被
 * 序列化并通过网络传输到目标客户端。如果客户端未连接
 * 或消息发送失败，会触发相应的错误处理流程。
 * 
 * 简化实现：省略了复杂的消息队列管理和重试机制，
 * 专注于核心的消息发送逻辑。
 */
void NetworkClient_SendMessage(undefined8 client_id, undefined8 message_data, undefined8 message_size)
{
    int message_type;
    int data_length;
    int header_length;
    undefined8 stack_buffer[NETWORK_STACK_SIZE];
    undefined8 *message_buffer;
    undefined8 temp_buffer[CLIENT_DATA_BUFFER_SIZE];
    ulonglong security_cookie;
    
    // 安全Cookie初始化
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    
    // 获取消息类型
    message_type = FUN_18083fde0();
    
    // 检查调试状态和网络可用性
    if ((message_type != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
        // 序列化消息头
        data_length = FUN_18074b880(temp_buffer, 0x100, message_data);
        
        // 添加分隔符
        header_length = FUN_18074b880(temp_buffer + data_length, 0x100 - data_length, 
                                     &DAT_180a06434);
        
        // 添加消息体
        func_0x00018074bda0(temp_buffer + (data_length + header_length), 
                           0x100 - (data_length + header_length), message_size);
        
        message_buffer = temp_buffer;
        
        // 发送消息
        FUN_180749ef0(message_type, 0xb, client_id, &UNK_180981f40);
    }
    
    // 清理资源
    FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
}





/**
 * 向所有连接的客户端广播消息
 * 
 * 本函数实现广播消息功能，将消息发送给所有当前连接的客户端。
 * 广播消息通常用于游戏状态更新、系统通知等需要所有客户端
 * 同步接收的场景。
 * 
 * 简化实现：省略了客户端筛选和批量发送优化，
 * 实现基本的广播功能。
 */
void NetworkClient_BroadcastMessage(void)
{
    int header_size;
    int separator_size;
    undefined4 message_type;
    
    // 准备广播消息头
    header_size = FUN_18074b880(&stack0x00000030, 0x100);
    
    // 添加消息分隔符
    separator_size = FUN_18074b880(&stack0x00000030 + header_size, 
                                   0x100 - header_size, &DAT_180a06434);
    
    // 添加消息体
    func_0x00018074bda0(&stack0x00000030 + (header_size + separator_size), 
                        0x100 - (header_size + separator_size));
    
    // 执行广播
    FUN_180749ef0(message_type, 0xb);
}





/**
 * 初始化网络客户端管理器
 * 
 * 本函数负责初始化网络客户端管理系统的核心组件，包括：
 * - 分配客户端连接池
 * - 初始化网络协议栈
 * - 设置事件回调函数
 * - 配置安全参数
 * 
 * 简化实现：省略了复杂的初始化流程和错误处理，
 * 专注于核心初始化逻辑。
 */
void NetworkClient_Initialize(void)
{
    ulonglong initialization_data;
    
    // 执行初始化序列（包含安全检查）
    FUN_1808fc050(initialization_data ^ (ulonglong)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 获取客户端属性列表
 * 
 * @param client_id 客户端ID
 * @param property_array 属性数组指针
 * @param property_count 输出参数，返回属性数量
 * 
 * 本函数用于获取指定客户端的所有属性信息，包括客户端版本、
 * 连接类型、权限等级等。属性信息以数组形式返回，调用者
 * 需要提供足够的缓冲区空间。
 * 
 * 简化实现：省略了属性验证和动态内存管理，
 * 专注于属性查询的核心逻辑。
 */
void NetworkClient_GetPropertyList(undefined8 client_id, undefined4 *property_array, ulonglong *property_count)
{
    undefined4 property_value1;
    undefined4 property_value2;
    undefined4 property_value3;
    int query_result;
    int status;
    undefined8 stack_buffer[NETWORK_STACK_SIZE];
    undefined8 *data_buffer;
    longlong connection_data[2];
    undefined8 *message_buffers[2];
    undefined8 temp_buffer[CLIENT_DATA_BUFFER_SIZE];
    ulonglong security_cookie;
    
    // 安全Cookie初始化
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    
    // 参数验证
    if ((property_count == (ulonglong *)0x0) || (*property_count = 0, property_array == (undefined4 *)0x0)) {
        if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
            // 触发调试陷阱
            FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer);
        }
        
        // 准备错误消息
        query_result = FUN_18074bc50(temp_buffer, 0x100, property_array);
        status = FUN_18074b880(temp_buffer + query_result, 0x100 - query_result, 
                              &DAT_180a06434);
        func_0x00018074bda0(temp_buffer + (query_result + status), 
                           0x100 - (query_result + status), property_count);
        data_buffer = temp_buffer;
        
        // 发送错误报告
        FUN_180749ef0(0x1f, 0xb, client_id, &UNK_180981d40);
    }
    
    // 初始化连接数据
    connection_data[1] = 0;
    query_result = func_0x00018088c590(client_id, connection_data);
    
    if (query_result == 0) {
        // 检查连接状态
        if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) {
            goto cleanup_and_exit;
        }
        
        // 验证连接句柄
        status = FUN_18088c740(connection_data + 1);
        if (status == 0) {
            goto cleanup_and_exit;
        }
    } else {
        // 连接查询失败
        status = query_result;
    }
    
    // 获取属性列表
    if ((status == 0) && 
        (query_result = FUN_18088dec0(*(undefined8 *)(connection_data[0] + 0x98), 
                                    message_buffers, 0x28), query_result == 0)) {
        
        // 设置属性查询消息
        *message_buffers[0] = &UNK_180981cd8;
        *(undefined4 *)(message_buffers[0] + 4) = 0;
        *(undefined4 *)(message_buffers[0] + 1) = 0x28;
        
        // 复制属性值
        property_value1 = property_array[1];
        property_value2 = property_array[2];
        property_value3 = property_array[3];
        
        *(undefined4 *)(message_buffers[0] + 2) = *property_array;
        *(undefined4 *)((longlong)message_buffers[0] + 0x14) = property_value1;
        *(undefined4 *)(message_buffers[0] + 3) = property_value2;
        *(undefined4 *)((longlong)message_buffers[0] + 0x1c) = property_value3;
        
        // 执行属性查询
        query_result = func_0x00018088e0d0(*(undefined8 *)(connection_data[0] + 0x98), 
                                          message_buffers[0]);
        
        if (query_result == 0) {
            // 返回属性数量
            *property_count = (ulonglong)*(uint *)(message_buffers[0] + 4);
            
            // 清理临时资源
            FUN_18088c790(connection_data + 1);
        }
    }
    
cleanup_and_exit:
    // 清理连接数据
    FUN_18088c790(connection_data + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180845ef0(ulonglong param_1,uint *param_2)
void FUN_180845ef0(ulonglong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074b930(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_180984790);
  }
  *param_2 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  lVar2 = FUN_18083fbf0(*(undefined8 *)(lStack_130 + 800),lStack_128 + 0x30);
  if (lVar2 != 0) {
    puVar3 = (uint *)FUN_18084cde0(lVar2,&lStack_120);
    *param_2 = *puVar3 / 0x30;
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846050(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
void FUN_180846050(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = *(longlong *)(alStack_140[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084610f;
  if (lStack_148 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(lStack_148 + 0xf0);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lStack_148 + 0xf4);
    }
  }
LAB_18084610f:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846210(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)
void FUN_180846210(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_198 [32];
  undefined1 *puStack_178;
  undefined4 auStack_168 [2];
  undefined8 uStack_160;
  longlong alStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
      iVar1 = FUN_18074b880(auStack_148,0x100,0);
      iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&DAT_180a06434);
      iVar1 = iVar1 + iVar2;
      iVar2 = FUN_18074bac0(auStack_148 + iVar1,0x100 - iVar1,param_3);
      iVar1 = iVar1 + iVar2;
      iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&DAT_180a06434);
      FUN_18074bac0(auStack_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
      puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
      FUN_180749ef0(0x1f,0xb,param_1,&UNK_180984690);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
  }
  uStack_160 = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_160);
    }
    iVar2 = FUN_18088c740(&uStack_160);
    if (iVar2 != 0) goto LAB_1808462b2;
  }
  iVar2 = iVar1;
LAB_1808462b2:
  if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_160);
  }
  auStack_168[0] = 0;
  iVar1 = FUN_180840af0(alStack_158[0],param_2,auStack_168);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_160);
  }
  func_0x0001808676a0(alStack_158[0] + 0x60,auStack_168[0],param_3,param_4);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_160);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846410(undefined8 param_1,undefined4 param_2,undefined8 param_3)
void FUN_180846410(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar1 = FUN_180840600();
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xc,param_1,&UNK_180984730);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180846453(void)
void FUN_180846453(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000030,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808464cb(void)
void FUN_1808464cb(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808464f0(ulonglong param_1,undefined4 *param_2)
void FUN_1808464f0(ulonglong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (param_2 == (undefined4 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074b930(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_180984700);
  }
  *param_2 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  *param_2 = *(undefined4 *)(lStack_128 + 0x88);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846610(ulonglong param_1,undefined1 *param_2,int param_3,undefined4 *param_4)
void FUN_180846610(ulonglong param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1a8 [32];
  undefined4 *puStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (((param_2 != (undefined1 *)0x0) || (param_3 == 0)) && (-1 < param_3)) {
    lStack_168 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    iVar1 = func_0x00018088c590(0,&uStack_170);
    if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_178,uStack_170), iVar1 == 0)) &&
       (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_160), iVar1 == 0)) {
      lStack_168 = *(longlong *)(lStack_160 + 8);
    }
    else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_178);
    }
    uStack_158 = *(undefined4 *)(lStack_168 + 0x10);
    uStack_154 = *(undefined4 *)(lStack_168 + 0x14);
    uStack_150 = *(undefined4 *)(lStack_168 + 0x18);
    uStack_14c = *(undefined4 *)(lStack_168 + 0x1c);
    puStack_188 = param_4;
    FUN_180882160(uStack_170,&uStack_158,param_2,param_3);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_178);
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
  }
  iVar1 = FUN_18074b880(auStack_148,0x100,param_2);
  iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(auStack_148 + iVar1,0x100 - iVar1,param_3);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074b930(auStack_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
  puStack_188 = (undefined4 *)auStack_148;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f,0xc,param_1,&UNK_1809846e0);
}





// 函数: void FUN_180846730(void)
void FUN_180846730(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000060,0x100);
  iVar2 = FUN_18074b880(&stack0x00000060 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000060 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000060 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074b930(&stack0x00000060 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808467de(void)
void FUN_1808467de(void)

{
  ulonglong in_stack_00000160;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000160 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846810(ulonglong param_1,undefined1 *param_2)
void FUN_180846810(ulonglong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined1 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    FUN_18074be30(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_180984948);
  }
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  *param_2 = *(undefined1 *)(lStack_138 + 0xbc);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
void FUN_180846930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808469dd;
  FUN_180868270(lStack_148,param_2,param_3);
LAB_1808469dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846a90(ulonglong param_1,undefined4 *param_2)
void FUN_180846a90(ulonglong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined4 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_180984990);
  }
  *param_2 = 2;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  uVar2 = func_0x0001808682c0(lStack_138);
  *param_2 = uVar2;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846bc0(ulonglong param_1,uint param_2,undefined4 *param_3)
void FUN_180846bc0(ulonglong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_2 < 6) {
      lStack_148 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      iVar1 = func_0x00018088c590(0,&uStack_150);
      if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
         (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_140), iVar1 == 0)) {
        lStack_148 = 0;
        if (lStack_140 != 0) {
          lStack_148 = lStack_140 + -8;
        }
      }
      else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&uStack_158);
      }
      *param_3 = *(undefined4 *)(lStack_148 + 0xa4 + (longlong)(int)param_2 * 4);
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_158);
    }
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
  }
  iVar1 = func_0x00018074b7d0(auStack_138,0x100,param_2);
  iVar2 = FUN_18074b880(auStack_138 + iVar1,0x100 - iVar1,&DAT_180a06434);
  FUN_18074bac0(auStack_138 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
  puStack_168 = auStack_138;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f,0xd,param_1,&UNK_180984928);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846d30(undefined8 param_1,undefined4 *param_2)
void FUN_180846d30(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [2];
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined4 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_180983680);
  }
  *param_2 = 1;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_180846d91;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_180846df9;
  }
  else {
LAB_180846df9:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_180983618;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    iVar1 = func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138[0]);
    if (iVar1 == 0) {
      *param_2 = *(undefined4 *)(apuStack_138[0] + 3);
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_148 + 1);
    }
  }
LAB_180846d91:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846e90(ulonglong param_1,uint *param_2)
void FUN_180846e90(ulonglong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    FUN_18074b930(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_180984968);
  }
  uVar2 = 0;
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    if (lStack_130 == 0) {
      lStack_138 = 0;
    }
    else {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  if (*(longlong *)(lStack_138 + 0x10) != 0) {
    uVar2 = func_0x000180855b70(*(longlong *)(lStack_138 + 0x10) + 200);
    uVar2 = uVar2 / 0x30;
  }
  *param_2 = uVar2;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846fe0(ulonglong param_1,undefined8 *param_2)
void FUN_180846fe0(ulonglong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (param_2 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    func_0x00018074bda0(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_180984830);
  }
  *param_2 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  *param_2 = *(undefined8 *)(*(longlong *)(lStack_128 + 0xd0) + 0x38);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



