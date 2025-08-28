#include "TaleWorlds.Native.Split.h"

// 05_networking_part005.c - 网络系统高级功能模块
// 包含网络查询、数据检索、状态管理、连接配置等22个核心函数

// 函数别名定义 - 基于功能分析
#define validate_network_connection FUN_1808455f0      // 验证网络连接并获取连接信息
#define send_network_configuration_message FUN_180845c40  // 发送网络配置消息
#define send_simple_network_message FUN_180845c84       // 发送简单网络消息
#define cleanup_network_resources FUN_180845cfc         // 清理网络资源
#define query_network_extended_data FUN_180845d20       // 查询网络扩展数据
#define get_network_session_statistics FUN_180845ef0   // 获取网络会话统计信息
#define get_network_connection_attributes FUN_180846050  // 获取网络连接属性
#define configure_network_connection_params FUN_180846210  // 配置网络连接参数
#define send_extended_network_packet FUN_180846410     // 发送扩展网络数据包
#define send_simple_network_packet FUN_180846453       // 发送简单网络数据包
#define release_network_packet_resources FUN_1808464cb  // 释放网络数据包资源
#define check_network_connection_status FUN_1808464f0   // 检查网络连接状态
#define setup_network_connection_buffers FUN_180846610  // 设置网络连接缓冲区
#define send_buffered_network_message FUN_180846730    // 发送缓冲的网络消息
#define clear_network_message_buffer FUN_1808467de      // 清空网络消息缓冲区
#define retrieve_network_connection_property FUN_180846810  // 检索网络连接属性
#define get_network_configuration_settings FUN_180846930 // 获取网络配置设置
#define determine_network_connection_type FUN_180846a90 // 确定网络连接类型
#define fetch_network_connection_field FUN_180846bc0    // 获取网络连接字段
#define monitor_network_connection_state FUN_180846d30   // 监控网络连接状态
#define count_active_network_sessions FUN_180846e90     // 计算活跃网络会话数量
#define extract_network_session_data FUN_180846fe0      // 提取网络会话数据

// 常量定义
#define NETWORK_BUFFER_SIZE 256
#define NETWORK_SECURITY_KEY _DAT_180bf00a8
#define NETWORK_STATUS_FLAG _DAT_180be12f0
#define NETWORK_ERROR_MESSAGE &UNK_180983de0
#define NETWORK_CONFIG_MESSAGE &UNK_180981f40
#define NETWORK_EXTENDED_MESSAGE &UNK_180981d40
#define NETWORK_SESSION_MESSAGE &UNK_180984790
#define NETWORK_PARAM_MESSAGE &UNK_180984690
#define NETWORK_PACKET_MESSAGE &UNK_180984730
#define NETWORK_STATUS_MESSAGE &UNK_180984700
#define NETWORK_BUFFER_MESSAGE &UNK_1809846e0
#define NETWORK_PROPERTY_MESSAGE &UNK_180984948
#define NETWORK_TYPE_MESSAGE &UNK_180984990
#define NETWORK_FIELD_MESSAGE &UNK_180984928
#define NETWORK_STATE_MESSAGE &UNK_180983680
#define NETWORK_COUNT_MESSAGE &UNK_180984968
#define NETWORK_DATA_MESSAGE &UNK_180984830
#define NETWORK_DATA_SEPARATOR &DAT_180a06434
#define NETWORK_PROTOCOL_HANDLER &UNK_180983d78
#define NETWORK_EXTENDED_HANDLER &UNK_180981cd8
#define NETWORK_STATE_HANDLER &UNK_180983618

// 函数: 获取网络连接信息
// 功能：验证网络连接并获取连接详细信息，包括连接状态、协议版本等
// 参数：connection_handle - 连接句柄，info_buffer - 输出缓冲区
// 返回：无返回值，结果通过info_buffer返回
// 注意：函数包含连接验证、安全检查和错误处理机制
void validate_network_connection(undefined8 connection_handle, ulonglong *info_buffer)

{
  int connection_result;
  int validation_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  longlong connection_data[2];
  undefined8 *protocol_handlers[2];
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  // 安全密钥生成和验证
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (info_buffer == (ulonglong *)0x0) {
    // 检查网络状态标志
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
      // 安全验证失败，执行异常处理
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    // 准备错误消息包
    func_0x00018074bda0(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
    // 发送错误消息（函数不返回）
    FUN_180749ef0(0x1f, 0xd, connection_handle, NETWORK_ERROR_MESSAGE);
  }
  
  // 初始化输出缓冲区
  *info_buffer = 0;
  connection_data[1] = 0;
  
  // 获取连接数据
  connection_result = func_0x00018088c590(connection_handle, connection_data);
  if (connection_result == 0) {
    // 检查连接状态标志位
    if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) goto CONNECTION_INFO_FAILED;
    // 验证连接数据有效性
    validation_result = FUN_18088c740(connection_data + 1);
    if (validation_result == 0) goto CONNECTION_VALIDATION_FAILED;
  }
  else {
CONNECTION_VALIDATION_FAILED:
    validation_result = connection_result;
  }
  
  // 设置协议处理器并获取连接信息
  if ((validation_result == 0) &&
     (connection_result = FUN_18088dec0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers, 0x20), connection_result == 0))
  {
    *protocol_handlers[0] = NETWORK_PROTOCOL_HANDLER;
    *(undefined4 *)(protocol_handlers[0] + 3) = 0;
    *(undefined4 *)(protocol_handlers[0] + 1) = 0x20;
    *(int *)(protocol_handlers[0] + 2) = (int)connection_handle;
    connection_result = func_0x00018088e0d0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers[0]);
    if (connection_result == 0) {
      *info_buffer = (ulonglong)*(uint *)(protocol_handlers[0] + 3);
      // 清理连接数据（函数不返回）
      FUN_18088c790(connection_data + 1);
    }
  }
CONNECTION_INFO_FAILED:
  // 清理连接数据（函数不返回）
  FUN_18088c790(connection_data + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 发送网络配置消息
void send_network_message_config(undefined8 connection_handle, undefined8 config_data, undefined8 extended_params)

{
  int network_status;
  int encode_result1;
  int encode_result2;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  network_status = FUN_18083fde0();
  if ((network_status != 0) && ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) != 0)) {
    encode_result1 = FUN_18074b880(packet_buffer, NETWORK_BUFFER_SIZE, config_data);
    encode_result2 = FUN_18074b880(packet_buffer + encode_result1, NETWORK_BUFFER_SIZE - encode_result1, NETWORK_DATA_SEPARATOR);
    func_0x00018074bda0(packet_buffer + (encode_result1 + encode_result2), NETWORK_BUFFER_SIZE - (encode_result1 + encode_result2), extended_params);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(network_status, 0xb, connection_handle, NETWORK_CONFIG_MESSAGE);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}




// 函数: 发送简单网络消息
void send_network_message_simple(void)

{
  int encode_result1;
  int encode_result2;
  undefined4 message_flags;
  
  encode_result1 = FUN_18074b880(&stack0x00000030, NETWORK_BUFFER_SIZE);
  encode_result2 = FUN_18074b880(&stack0x00000030 + encode_result1, NETWORK_BUFFER_SIZE - encode_result1, NETWORK_DATA_SEPARATOR);
  func_0x00018074bda0(&stack0x00000030 + (encode_result1 + encode_result2), NETWORK_BUFFER_SIZE - (encode_result1 + encode_result2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(message_flags, 0xb);
}




// 函数: 清理网络连接
void cleanup_network_connection(void)

{
  ulonglong security_key;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)&stack0x00000000);
}


// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络扩展数据
void get_network_extended_data(undefined8 connection_handle, undefined4 *data_params, ulonglong *result_buffer)

{
  undefined4 param1;
  undefined4 param2;
  undefined4 param3;
  int connection_result;
  int validation_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  longlong connection_data[2];
  undefined8 *protocol_handlers[2];
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if ((result_buffer == (ulonglong *)0x0) || (*result_buffer = 0, data_params == (undefined4 *)0x0)) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    connection_result = FUN_18074bc50(packet_buffer, NETWORK_BUFFER_SIZE, data_params);
    validation_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
    func_0x00018074bda0(packet_buffer + (connection_result + validation_result), NETWORK_BUFFER_SIZE - (connection_result + validation_result), result_buffer);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xb, connection_handle, NETWORK_EXTENDED_MESSAGE);
  }
  connection_data[1] = 0;
  connection_result = func_0x00018088c590(connection_handle, connection_data);
  if (connection_result == 0) {
    if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) goto EXTENDED_DATA_FAILED;
    validation_result = FUN_18088c740(connection_data + 1);
    if (validation_result == 0) goto EXTENDED_VALIDATION_FAILED;
  }
  else {
EXTENDED_VALIDATION_FAILED:
    validation_result = connection_result;
  }
  if ((validation_result == 0) &&
     (connection_result = FUN_18088dec0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers, 0x28), connection_result == 0))
  {
    *protocol_handlers[0] = NETWORK_EXTENDED_HANDLER;
    *(undefined4 *)(protocol_handlers[0] + 4) = 0;
    *(undefined4 *)(protocol_handlers[0] + 1) = 0x28;
    param1 = data_params[1];
    param2 = data_params[2];
    param3 = data_params[3];
    *(undefined4 *)(protocol_handlers[0] + 2) = *data_params;
    *(undefined4 *)((longlong)protocol_handlers[0] + 0x14) = param1;
    *(undefined4 *)(protocol_handlers[0] + 3) = param2;
    *(undefined4 *)((longlong)protocol_handlers[0] + 0x1c) = param3;
    connection_result = func_0x00018088e0d0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers[0]);
    if (connection_result == 0) {
      *result_buffer = (ulonglong)*(uint *)(protocol_handlers[0] + 4);
                    // WARNING: Subroutine does not return
      FUN_18088c790(connection_data + 1);
    }
  }
EXTENDED_DATA_FAILED:
                    // WARNING: Subroutine does not return
  FUN_18088c790(connection_data + 1);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络会话统计
void get_network_session_stats(ulonglong session_handle, uint *stats_buffer)

{
  int connection_result;
  longlong session_data;
  uint *stats_ptr;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 security_key;
  longlong connection_handle;
  longlong session_info;
  longlong stats_data;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_check;
  
  security_check = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (stats_buffer == (uint *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_check ^ (ulonglong)security_buffer);
    }
    FUN_18074b930(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xc, session_handle, NETWORK_SESSION_MESSAGE);
  }
  *stats_buffer = 0;
  security_key = 0;
  connection_handle = 0;
  session_info = 0;
  connection_result = func_0x00018088c590(0, &session_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&security_key, session_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(session_handle & 0xffffffff, &stats_data), connection_result == 0)) {
    session_info = *(longlong *)(stats_data + 8);
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&security_key);
  }
  session_data = FUN_18083fbf0(*(undefined8 *)(session_info + 800), session_info + 0x30);
  if (session_data != 0) {
    stats_ptr = (uint *)FUN_18084cde0(session_data, &stats_data);
    *stats_buffer = *stats_ptr / 0x30;
                    // WARNING: Subroutine does not return
    FUN_18088c790(&security_key);
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&security_key);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接标志
void get_network_connection_flags(undefined4 connection_id, undefined4 *flag1, undefined4 *flag2)

{
  int connection_result;
  undefined1 security_buffer[48];
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong session_info[33];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (flag1 != (undefined4 *)0x0) {
    *flag1 = 0;
  }
  if (flag2 != (undefined4 *)0x0) {
    *flag2 = 0;
  }
  connection_data = 0;
  session_handle = 0;
  connection_info = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(connection_id, session_info), connection_result == 0)) {
    connection_data = *(longlong *)(session_info[0] + 8);
  }
  else if (connection_result != 0) goto GET_FLAGS_FAILED;
  if (connection_data != 0) {
    if (flag1 != (undefined4 *)0x0) {
      *flag1 = *(undefined4 *)(connection_data + 0xf0);
    }
    if (flag2 != (undefined4 *)0x0) {
      *flag2 = *(undefined4 *)(connection_data + 0xf4);
    }
  }
GET_FLAGS_FAILED:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 设置网络连接参数
void set_network_connection_params(undefined8 connection_handle, longlong param_data, undefined4 *param1, undefined4 *param2)

{
  int connection_result;
  int encode_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined4 temp_params[2];
  undefined8 session_handle;
  longlong connection_data[2];
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (param1 != (undefined4 *)0x0) {
    *param1 = 0;
  }
  if (param2 != (undefined4 *)0x0) {
    *param2 = 0;
  }
  if (param_data == 0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) != 0) {
      connection_result = FUN_18074b880(packet_buffer, NETWORK_BUFFER_SIZE, 0);
      encode_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
      connection_result = connection_result + encode_result;
      encode_result = FUN_18074bac0(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, param1);
      connection_result = connection_result + encode_result;
      encode_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
      FUN_18074bac0(packet_buffer + (connection_result + encode_result), NETWORK_BUFFER_SIZE - (connection_result + encode_result), param2);
      message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
      FUN_180749ef0(0x1f, 0xb, connection_handle, NETWORK_PARAM_MESSAGE);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
  }
  session_handle = 0;
  connection_result = func_0x00018088c590(connection_handle, connection_data);
  if (connection_result == 0) {
    if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&session_handle);
    }
    encode_result = FUN_18088c740(&session_handle);
    if (encode_result != 0) goto SET_PARAMS_FAILED;
  }
  encode_result = connection_result;
SET_PARAMS_FAILED:
  if (encode_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  temp_params[0] = 0;
  connection_result = FUN_180840af0(connection_data[0], param_data, temp_params);
  if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  func_0x0001808676a0(connection_data[0] + 0x60, temp_params[0], param1, param2);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 发送扩展网络包
void send_network_packet_extended(undefined8 connection_handle, undefined4 packet_data, undefined8 extended_params)

{
  int connection_result;
  int encode_result1;
  int encode_result2;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  connection_result = FUN_180840600();
  if ((connection_result != 0) && ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) != 0)) {
    encode_result1 = func_0x00018074b7d0(packet_buffer, NETWORK_BUFFER_SIZE, packet_data);
    encode_result2 = FUN_18074b880(packet_buffer + encode_result1, NETWORK_BUFFER_SIZE - encode_result1, NETWORK_DATA_SEPARATOR);
    func_0x00018074bda0(packet_buffer + (encode_result1 + encode_result2), NETWORK_BUFFER_SIZE - (encode_result1 + encode_result2), extended_params);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(connection_result, 0xc, connection_handle, NETWORK_PACKET_MESSAGE);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}




// 函数: 发送简单网络包
void send_network_packet_simple(void)

{
  int encode_result1;
  int encode_result2;
  undefined4 packet_data;
  undefined4 message_flags;
  
  encode_result1 = func_0x00018074b7d0(&stack0x00000030, NETWORK_BUFFER_SIZE, packet_data);
  encode_result2 = FUN_18074b880(&stack0x00000030 + encode_result1, NETWORK_BUFFER_SIZE - encode_result1, NETWORK_DATA_SEPARATOR);
  func_0x00018074bda0(&stack0x00000030 + (encode_result1 + encode_result2), NETWORK_BUFFER_SIZE - (encode_result1 + encode_result2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(message_flags, 0xc);
}




// 函数: 清理网络包
void cleanup_network_packet(void)

{
  ulonglong security_key;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)&stack0x00000000);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接状态
void get_network_connection_status(ulonglong connection_handle, undefined4 *status_buffer)

{
  int connection_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong status_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (status_buffer == (undefined4 *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    FUN_18074b930(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xc, connection_handle, NETWORK_STATUS_MESSAGE);
  }
  *status_buffer = 0;
  session_handle = 0;
  connection_info = 0;
  connection_data = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(connection_handle & 0xffffffff, &status_info), connection_result == 0)) {
    connection_data = *(longlong *)(status_info + 8);
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  *status_buffer = *(undefined4 *)(connection_data + 0x88);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 设置网络连接缓冲区
void set_network_connection_buffers(ulonglong connection_handle, undefined1 *buffer_data, int buffer_size, undefined4 *result_buffer)

{
  int connection_result;
  int encode_result;
  undefined1 security_buffer[32];
  undefined4 *output_buffer;
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong buffer_info;
  undefined4 buffer_params[4];
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (buffer_data != (undefined1 *)0x0) {
    *buffer_data = 0;
  }
  if (result_buffer != (undefined4 *)0x0) {
    *result_buffer = 0;
  }
  if (((buffer_data != (undefined1 *)0x0) || (buffer_size == 0)) && (-1 < buffer_size)) {
    connection_data = 0;
    session_handle = 0;
    connection_info = 0;
    connection_result = func_0x00018088c590(0, &connection_info);
    if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
       (connection_result = func_0x00018088c530(connection_handle & 0xffffffff, &buffer_info), connection_result == 0)) {
      connection_data = *(longlong *)(buffer_info + 8);
    }
    else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&session_handle);
    }
    buffer_params[0] = *(undefined4 *)(connection_data + 0x10);
    buffer_params[1] = *(undefined4 *)(connection_data + 0x14);
    buffer_params[2] = *(undefined4 *)(connection_data + 0x18);
    buffer_params[3] = *(undefined4 *)(connection_data + 0x1c);
    output_buffer = result_buffer;
    FUN_180882160(connection_info, buffer_params, buffer_data, buffer_size);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
  }
  connection_result = FUN_18074b880(packet_buffer, NETWORK_BUFFER_SIZE, buffer_data);
  encode_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
  connection_result = connection_result + encode_result;
  encode_result = func_0x00018074b7d0(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, buffer_size);
  connection_result = connection_result + encode_result;
  encode_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
  FUN_18074b930(packet_buffer + (connection_result + encode_result), NETWORK_BUFFER_SIZE - (connection_result + encode_result), result_buffer);
  output_buffer = (undefined4 *)packet_buffer;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f, 0xc, connection_handle, NETWORK_BUFFER_MESSAGE);
}




// 函数: 发送网络缓冲消息
void send_network_buffer_message(void)

{
  int connection_result;
  int encode_result;
  undefined4 buffer_param;
  undefined4 message_flags;
  
  connection_result = FUN_18074b880(&stack0x00000060, NETWORK_BUFFER_SIZE);
  encode_result = FUN_18074b880(&stack0x00000060 + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
  connection_result = connection_result + encode_result;
  encode_result = func_0x00018074b7d0(&stack0x00000060 + connection_result, NETWORK_BUFFER_SIZE - connection_result, buffer_param);
  connection_result = connection_result + encode_result;
  encode_result = FUN_18074b880(&stack0x00000060 + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
  FUN_18074b930(&stack0x00000060 + (connection_result + encode_result), NETWORK_BUFFER_SIZE - (connection_result + encode_result));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(message_flags, 0xc);
}




// 函数: 清理网络缓冲区
void cleanup_network_buffer(void)

{
  ulonglong security_key;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)&stack0x00000000);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接属性
void get_network_connection_property(ulonglong connection_handle, undefined1 *property_buffer)

{
  int connection_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong property_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (property_buffer == (undefined1 *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    FUN_18074be30(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xd, connection_handle, NETWORK_PROPERTY_MESSAGE);
  }
  *property_buffer = 0;
  session_handle = 0;
  connection_info = 0;
  connection_data = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(connection_handle & 0xffffffff, &property_info), connection_result == 0)) {
    connection_data = 0;
    if (property_info != 0) {
      connection_data = property_info + -8;
    }
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  *property_buffer = *(undefined1 *)(connection_data + 0xbc);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络配置参数
void get_network_config_params(undefined4 config_id, undefined4 *param1, undefined4 *param2)

{
  int connection_result;
  undefined1 security_buffer[48];
  undefined8 session_handle;
  undefined8 connection_info;
  longlong config_data;
  longlong session_info[33];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (param1 != (undefined4 *)0x0) {
    *param1 = 0;
  }
  if (param2 != (undefined4 *)0x0) {
    *param2 = 0;
  }
  config_data = 0;
  session_handle = 0;
  connection_info = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(config_id, session_info), connection_result == 0)) {
    config_data = 0;
    if (session_info[0] != 0) {
      config_data = session_info[0] + -8;
    }
  }
  else if (connection_result != 0) goto GET_CONFIG_FAILED;
  FUN_180868270(config_data, param1, param2);
GET_CONFIG_FAILED:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接类型
void get_network_connection_type(ulonglong connection_handle, undefined4 *type_buffer)

{
  int connection_result;
  undefined4 connection_type;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong type_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (type_buffer == (undefined4 *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    func_0x00018074bda0(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xd, connection_handle, NETWORK_TYPE_MESSAGE);
  }
  *type_buffer = 2;
  session_handle = 0;
  connection_info = 0;
  connection_data = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(connection_handle & 0xffffffff, &type_info), connection_result == 0)) {
    connection_data = 0;
    if (type_info != 0) {
      connection_data = type_info + -8;
    }
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_handle);
  }
  connection_type = func_0x0001808682c0(connection_data);
  *type_buffer = connection_type;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_handle);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接字段
void get_network_connection_field(ulonglong connection_handle, uint field_index, undefined4 *field_buffer)

{
  int connection_result;
  int encode_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_handle;
  undefined8 connection_info;
  longlong connection_data;
  longlong field_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (field_buffer != (undefined4 *)0x0) {
    *field_buffer = 0;
    if (field_index < 6) {
      connection_data = 0;
      session_handle = 0;
      connection_info = 0;
      connection_result = func_0x00018088c590(0, &connection_info);
      if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_handle, connection_info), connection_result == 0)) &&
         (connection_result = func_0x00018088c530(connection_handle & 0xffffffff, &field_info), connection_result == 0)) {
        connection_data = 0;
        if (field_info != 0) {
          connection_data = field_info + -8;
        }
      }
      else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&session_handle);
      }
      *field_buffer = *(undefined4 *)(connection_data + 0xa4 + (longlong)(int)field_index * 4);
                    // WARNING: Subroutine does not return
      FUN_18088c790(&session_handle);
    }
  }
  if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
  }
  connection_result = func_0x00018074b7d0(packet_buffer, NETWORK_BUFFER_SIZE, field_index);
  encode_result = FUN_18074b880(packet_buffer + connection_result, NETWORK_BUFFER_SIZE - connection_result, NETWORK_DATA_SEPARATOR);
  FUN_18074bac0(packet_buffer + (connection_result + encode_result), NETWORK_BUFFER_SIZE - (connection_result + encode_result), field_buffer);
  message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f, 0xd, connection_handle, NETWORK_FIELD_MESSAGE);
}


// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络连接状态
void get_network_connection_state(undefined8 connection_handle, undefined4 *state_buffer)

{
  int connection_result;
  int validation_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  longlong connection_data[2];
  undefined8 *protocol_handlers[2];
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (state_buffer == (undefined4 *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    func_0x00018074bda0(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xc, connection_handle, NETWORK_STATE_MESSAGE);
  }
  *state_buffer = 1;
  connection_data[1] = 0;
  connection_result = func_0x00018088c590(connection_handle, connection_data);
  if (connection_result == 0) {
    if ((*(uint *)(connection_data[0] + 0x24) >> 1 & 1) == 0) goto GET_STATE_FAILED;
    validation_result = FUN_18088c740(connection_data + 1);
    if (validation_result == 0) goto STATE_VALIDATION_FAILED;
  }
  else {
STATE_VALIDATION_FAILED:
    validation_result = connection_result;
  }
  if ((validation_result == 0) &&
     (connection_result = FUN_18088dec0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers, 0x20), connection_result == 0))
  {
    *protocol_handlers[0] = NETWORK_STATE_HANDLER;
    *(undefined4 *)(protocol_handlers[0] + 1) = 0x20;
    *(int *)(protocol_handlers[0] + 2) = (int)connection_handle;
    connection_result = func_0x00018088e0d0(*(undefined8 *)(connection_data[0] + 0x98), protocol_handlers[0]);
    if (connection_result == 0) {
      *state_buffer = *(undefined4 *)(protocol_handlers[0] + 3);
                    // WARNING: Subroutine does not return
      FUN_18088c790(connection_data + 1);
    }
  }
GET_STATE_FAILED:
                    // WARNING: Subroutine does not return
  FUN_18088c790(connection_data + 1);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络会话数量
void get_network_session_count(ulonglong session_handle, uint *count_buffer)

{
  int connection_result;
  uint session_count;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_key;
  undefined8 connection_info;
  longlong session_data;
  longlong count_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (count_buffer == (uint *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    FUN_18074b930(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xd, session_handle, NETWORK_COUNT_MESSAGE);
  }
  session_count = 0;
  *count_buffer = 0;
  session_key = 0;
  connection_info = 0;
  session_data = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_key, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(session_handle & 0xffffffff, &count_info), connection_result == 0)) {
    if (count_info == 0) {
      session_data = 0;
    }
    else {
      session_data = count_info + -8;
    }
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_key);
  }
  if (*(longlong *)(session_data + 0x10) != 0) {
    session_count = func_0x000180855b70(*(longlong *)(session_data + 0x10) + 200);
    session_count = session_count / 0x30;
  }
  *count_buffer = session_count;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_key);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 获取网络会话数据
void get_network_session_data(ulonglong session_handle, undefined8 *data_buffer)

{
  int connection_result;
  undefined1 security_buffer[32];
  undefined1 *message_buffer;
  undefined8 session_key;
  undefined8 connection_info;
  longlong session_data;
  longlong data_info;
  undefined1 packet_buffer[NETWORK_BUFFER_SIZE];
  ulonglong security_key;
  
  security_key = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  if (data_buffer == (undefined8 *)0x0) {
    if ((*(byte *)(NETWORK_STATUS_FLAG + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
    }
    func_0x00018074bda0(packet_buffer, NETWORK_BUFFER_SIZE, 0);
    message_buffer = packet_buffer;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f, 0xc, session_handle, NETWORK_DATA_MESSAGE);
  }
  *data_buffer = 0;
  session_key = 0;
  connection_info = 0;
  session_data = 0;
  connection_result = func_0x00018088c590(0, &connection_info);
  if (((connection_result == 0) && (connection_result = FUN_18088c740(&session_key, connection_info), connection_result == 0)) &&
     (connection_result = func_0x00018088c530(session_handle & 0xffffffff, &data_info), connection_result == 0)) {
    session_data = *(longlong *)(data_info + 8);
  }
  else if (connection_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&session_key);
  }
  *data_buffer = *(undefined8 *)(*(longlong *)(session_data + 0xd0) + 0x38);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&session_key);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


