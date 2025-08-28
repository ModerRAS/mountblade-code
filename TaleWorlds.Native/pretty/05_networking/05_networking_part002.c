#include "TaleWorlds.Native.Split.h"

// 05_networking_part002.c - 网络系统数据包处理和协议实现
// 本文件包含多个网络系统核心功能，包括数据包处理、校验和计算、加密传输、压缩等功能
//
// 主要功能模块：
// 1. 数据包处理：process_network_packet - 处理网络数据包的接收和解析
// 2. 校验和计算：calculate_network_checksum - 计算网络数据包的校验和
// 3. 数据包发送：send_network_packet - 发送网络数据包
// 4. 加密数据处理：process_encrypted_data - 处理加密数据的传输
// 5. 数据压缩：compress_network_data - 压缩网络数据
// 6. 网络握手：handle_network_handshake - 处理网络握手协议
// 7. 协议初始化：initialize_network_protocol - 初始化网络协议
// 8. 数据编码：encode_network_data - 编码网络数据
// 9. 数据完整性验证：verify_data_integrity - 验证数据完整性
// 10. 安全连接处理：process_secure_connection - 处理安全连接数据

// 全局常量定义
#define NETWORK_SECURITY_KEY    _DAT_180bf00a8
#define NETWORK_ERROR_LOGGER    _DAT_180be12f0
#define PACKET_HEADER_PTR      UNK_180982b30
#define ERROR_MESSAGE_PTR      UNK_180982b98
#define DATA_BUFFER_PTR        DAT_180a06434

// 函数别名定义
#define get_connection_info      func_0x00018088c590
#define validate_packet_data     FUN_18088e0f0
#define process_connection_data  FUN_18088c740
#define extract_packet_header    FUN_18088dec0
#define finalize_packet_header  func_0x00018088e0d0
#define cleanup_connection_data  FUN_18088c790
#define log_network_error        FUN_180749ef0
#define validate_security_cookie FUN_1808fc050
#define initialize_checksum      func_0x00018074b800
#define process_checksum_data   FUN_18074b880
#define apply_checksum          func_0x00018074b7d0
#define send_packet_data         FUN_18083faf0
#define process_encryption       func_0x00018074b7d0
#define apply_data_padding      FUN_18074b650
#define initialize_compression  func_0x00018074b800
#define process_compression      FUN_18074b880
#define finalize_compression    func_0x00018074b7d0

// 函数: void process_network_packet(undefined8 packet_ptr)
// 处理网络数据包的接收和解析
// 参数: packet_ptr - 网络数据包指针
// 功能: 验证连接状态，处理数据包头部信息，管理连接数据
void process_network_packet(undefined8 packet_ptr)

{
  int processing_result;
  undefined1 security_buffer [32];
  undefined1 *error_data_ptr;
  longlong connection_context [2];
  undefined8 *packet_header [2];
  undefined1 packet_buffer [256];
  ulonglong security_cookie;
  
  // 栈保护cookie
  security_cookie = NETWORK_SECURITY_KEY ^ (ulonglong)security_buffer;
  
  // 获取连接信息
  processing_result = get_connection_info(packet_ptr, connection_context);
  
  // 检查连接状态和数据包验证
  if ((processing_result == 0) && ((*(uint *)(connection_context[0] + 0x24) >> 1 & 1) == 0)) {
    processing_result = 0x4b; // 错误码：连接状态异常
LAB_packet_processing_error:
    if (processing_result == 0) goto LAB_packet_processing_success;
  }
  else if (processing_result == 0) {
    // 处理有效数据包
    processing_result = validate_packet_data(*(undefined8 *)(connection_context[0] + 0x98), 1);
    if (processing_result == 0) {
      // 检查是否有活动连接
      if (*(int *)(*(longlong *)(connection_context[0] + 0x98) + 0x200) != 0) {
        connection_context[1] = 0;
        processing_result = process_connection_data(connection_context + 1);
        if ((processing_result == 0) &&
           (processing_result = extract_packet_header(*(undefined8 *)(connection_context[0] + 0x98), packet_header, 0x10),
           processing_result == 0)) {
          *packet_header[0] = &PACKET_HEADER_PTR;
          *(undefined4 *)(packet_header[0] + 1) = 0x10;
          finalize_packet_header(*(undefined8 *)(connection_context[0] + 0x98));
                    // WARNING: Subroutine does not return
          cleanup_connection_data(connection_context + 1);
        }
                    // WARNING: Subroutine does not return
        cleanup_connection_data(connection_context + 1);
      }
      goto LAB_packet_processing_success;
    }
    goto LAB_packet_processing_error;
  }
  
  // 错误处理：记录网络错误
  if ((*(byte *)(NETWORK_ERROR_LOGGER + 0x10) & 0x80) != 0) {
    error_data_ptr = packet_buffer;
    packet_buffer[0] = 0;
                    // WARNING: Subroutine does not return
    log_network_error(processing_result, 0xb, packet_ptr, &ERROR_MESSAGE_PTR);
  }
  
LAB_packet_processing_success:
                    // WARNING: Subroutine does not return
  validate_security_cookie(security_cookie ^ (ulonglong)security_buffer);
}

// 函数: int calculate_network_checksum(longlong data_ptr, longlong offset, int length)
// 计算网络数据包的校验和
// 参数: data_ptr - 数据指针, offset - 数据偏移量, length - 数据长度
// 功能: 计算网络数据包的校验和，确保数据传输的完整性
int calculate_network_checksum(longlong data_ptr, longlong offset, int length)

{
  undefined4 packet_header_value;
  int checksum_total;
  int bytes_processed;
  
  // 获取数据包头值
  packet_header_value = *(undefined4 *)(data_ptr + 0x18);
  
  // 计算初始校验和
  checksum_total = initialize_checksum(offset, length, *(undefined4 *)(data_ptr + 0x10));
  bytes_processed = process_checksum_data(offset + checksum_total, length - checksum_total, &DATA_BUFFER_PTR);
  checksum_total = checksum_total + bytes_processed;
  
  // 处理剩余数据并应用校验和
  bytes_processed = apply_checksum(checksum_total + offset, length - checksum_total, packet_header_value);
  return bytes_processed + checksum_total;
// 函数: void send_network_packet(longlong connection_ptr, undefined8 packet_data, undefined4 packet_size)
// 发送网络数据包
// 参数: connection_ptr - 连接指针, packet_data - 数据包数据, packet_size - 数据包大小
// 功能: 通过指定的连接发送网络数据包
void send_network_packet(longlong connection_ptr, undefined8 packet_data, undefined4 packet_size)

{
  send_packet_data(packet_data, packet_size, *(undefined4 *)(connection_ptr + 0x10), *(undefined4 *)(connection_ptr + 0x18),
                   *(undefined4 *)(connection_ptr + 0x1c));
  return;
}
// 函数: int process_encrypted_data(longlong encryption_info, longlong data_ptr, int data_size)
// 处理加密数据的传输
// 参数: encryption_info - 加密信息指针, data_ptr - 数据指针, data_size - 数据大小
// 功能: 处理网络加密数据，包括加密方法应用、填充处理和密钥管理
int process_encrypted_data(longlong encryption_info, longlong data_ptr, int data_size)

{
  undefined4 encryption_key;
  undefined4 encryption_method;
  int bytes_processed;
  int bytes_remaining;
  undefined4 data_padding;
  undefined4 initialization_vector;
  undefined4 salt_value;
  undefined4 hmac_key;
  
  // 获取加密参数
  data_padding = *(undefined4 *)(encryption_info + 0x1c);
  initialization_vector = *(undefined4 *)(encryption_info + 0x20);
  salt_value = *(undefined4 *)(encryption_info + 0x24);
  hmac_key = *(undefined4 *)(encryption_info + 0x28);
  encryption_key = *(undefined4 *)(encryption_info + 0x2c);
  encryption_method = *(undefined4 *)(encryption_info + 0x18);
  
  // 处理数据头部
  bytes_processed = initialize_checksum(data_ptr, data_size, *(undefined4 *)(encryption_info + 0x10));
  bytes_remaining = process_checksum_data(bytes_processed + data_ptr, data_size - bytes_processed, &DATA_BUFFER_PTR);
  bytes_processed = bytes_processed + bytes_remaining;
  
  // 应用加密方法
  bytes_remaining = process_encryption(bytes_processed + data_ptr, data_size - bytes_processed, encryption_method);
  bytes_processed = bytes_processed + bytes_remaining;
  
  // 处理加密数据
  bytes_remaining = process_checksum_data(bytes_processed + data_ptr, data_size - bytes_processed, &DATA_BUFFER_PTR);
  bytes_processed = bytes_processed + bytes_remaining;
  
  // 应用填充值
  bytes_remaining = apply_data_padding(bytes_processed + data_ptr, data_size - bytes_processed, &data_padding);
  bytes_processed = bytes_processed + bytes_remaining;
  
  // 处理填充后的数据
  bytes_remaining = process_checksum_data(bytes_processed + data_ptr, data_size - bytes_processed, &DATA_BUFFER_PTR);
  bytes_processed = bytes_processed + bytes_remaining;
  
  // 应用最终加密密钥
  bytes_remaining = initialize_checksum(bytes_processed + data_ptr, data_size - bytes_processed, encryption_key);
  return bytes_remaining + bytes_processed;
}
// 函数: int compress_network_data(longlong compression_info, longlong data_ptr, int data_size)
// 压缩网络数据
int compress_network_data(longlong compression_info, longlong data_ptr, int data_size)

{
  undefined8 compression_algorithm;
  int compressed_size;
  int processed_bytes;
  
  // 获取压缩算法信息
  compression_algorithm = *(undefined8 *)(compression_info + 0x18);
  
  // 初始化压缩
  compressed_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(compression_info + 0x10));
  processed_bytes = FUN_18074b880(data_ptr + compressed_size, data_size - compressed_size, &DAT_180a06434);
  compressed_size = compressed_size + processed_bytes;
  
  // 执行压缩
  processed_bytes = func_0x00018074bda0(compressed_size + data_ptr, data_size - compressed_size, compression_algorithm);
  return processed_bytes + compressed_size;
}
// 函数: int validate_packet_signature(longlong signature_info, longlong data_ptr, int data_size)
// 验证数据包签名
int validate_packet_signature(longlong signature_info, longlong data_ptr, int data_size)

{
  undefined1 signature_key;
  int signature_size;
  int validated_bytes;
  
  // 获取签名密钥
  signature_key = *(undefined1 *)(signature_info + 0x18);
  
  // 读取签名数据
  signature_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(signature_info + 0x10));
  validated_bytes = FUN_18074b880(data_ptr + signature_size, data_size - signature_size, &DAT_180a06434);
  signature_size = signature_size + validated_bytes;
  
  // 验证签名
  validated_bytes = FUN_18074be90(signature_size + data_ptr, data_size - signature_size, signature_key);
  return validated_bytes + signature_size;
}
// 函数: int encode_network_data(longlong encoding_info, longlong data_ptr, int data_size)
// 编码网络数据
int encode_network_data(longlong encoding_info, longlong data_ptr, int data_size)

{
  undefined4 encoding_type;
  int encoded_size;
  int processed_bytes;
  
  // 获取编码类型
  encoding_type = *(undefined4 *)(encoding_info + 0x18);
  
  // 初始化编码
  encoded_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(encoding_info + 0x10));
  processed_bytes = FUN_18074b880(data_ptr + encoded_size, data_size - encoded_size, &DAT_180a06434);
  encoded_size = encoded_size + processed_bytes;
  
  // 执行编码
  processed_bytes = func_0x00018074b830(encoded_size + data_ptr, data_size - encoded_size, encoding_type);
  return processed_bytes + encoded_size;
}
// 函数: int verify_data_integrity(longlong integrity_info, longlong data_ptr, int data_size)
// 验证数据完整性
int verify_data_integrity(longlong integrity_info, longlong data_ptr, int data_size)

{
  undefined4 integrity_key;
  int verified_size;
  int processed_bytes;
  
  // 获取完整性密钥
  integrity_key = *(undefined4 *)(integrity_info + 0x18);
  
  // 初始化验证
  verified_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(integrity_info + 0x10));
  processed_bytes = FUN_18074b880(data_ptr + verified_size, data_size - verified_size, &DAT_180a06434);
  verified_size = verified_size + processed_bytes;
  
  // 执行完整性验证
  processed_bytes = func_0x00018074b800(verified_size + data_ptr, data_size - verified_size, integrity_key);
  return processed_bytes + verified_size;
}
// 函数: int process_secure_connection(longlong security_info, longlong data_ptr, int data_size)
// 处理安全连接数据
int process_secure_connection(longlong security_info, longlong data_ptr, int data_size)

{
  undefined4 secondary_key;
  undefined4 primary_key;
  int secure_size;
  int processed_bytes;
  
  // 获取安全密钥
  secondary_key = *(undefined4 *)(security_info + 0x1c);
  primary_key = *(undefined4 *)(security_info + 0x18);
  
  // 初始化安全处理
  secure_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(security_info + 0x10));
  processed_bytes = FUN_18074b880(secure_size + data_ptr, data_size - secure_size, &DAT_180a06434);
  secure_size = secure_size + processed_bytes;
  
  // 应用主要安全层
  processed_bytes = func_0x00018074b7d0(secure_size + data_ptr, data_size - secure_size, primary_key);
  secure_size = secure_size + processed_bytes;
  
  // 处理中间数据
  processed_bytes = FUN_18074b880(secure_size + data_ptr, data_size - secure_size, &DAT_180a06434);
  secure_size = secure_size + processed_bytes;
  
  // 应用次要安全层
  processed_bytes = func_0x00018074b7d0(secure_size + data_ptr, data_size - secure_size, secondary_key);
  return processed_bytes + secure_size;
}
// 函数: int handle_network_handshake(longlong handshake_info, longlong data_ptr, int data_size)
// 处理网络握手协议
int handle_network_handshake(longlong handshake_info, longlong data_ptr, int data_size)

{
  undefined4 client_key;
  undefined4 server_key;
  int handshake_size;
  int processed_bytes;
  
  // 获取握手密钥
  client_key = *(undefined4 *)(handshake_info + 0x1c);
  server_key = *(undefined4 *)(handshake_info + 0x18);
  
  // 初始化握手过程
  handshake_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(handshake_info + 0x10));
  processed_bytes = FUN_18074b880(handshake_size + data_ptr, data_size - handshake_size, &DAT_180a06434);
  handshake_size = handshake_size + processed_bytes;
  
  // 服务器验证
  processed_bytes = func_0x00018074b7d0(handshake_size + data_ptr, data_size - handshake_size, server_key);
  handshake_size = handshake_size + processed_bytes;
  
  // 处理中间数据
  processed_bytes = FUN_18074b880(handshake_size + data_ptr, data_size - handshake_size, &DAT_180a06434);
  handshake_size = handshake_size + processed_bytes;
  
  // 客户端验证
  processed_bytes = func_0x00018074b800(handshake_size + data_ptr, data_size - handshake_size, client_key);
  return processed_bytes + handshake_size;
}
// 函数: int initialize_network_protocol(longlong protocol_info, longlong data_ptr, int data_size)
// 初始化网络协议
int initialize_network_protocol(longlong protocol_info, longlong data_ptr, int data_size)

{
  int protocol_size;
  int processed_bytes;
  undefined8 protocol_version;
  undefined8 protocol_flags;
  undefined4 header_format;
  undefined4 data_format;
  undefined4 compression_level;
  undefined4 encryption_level;
  undefined4 timeout_value;
  undefined4 retry_count;
  undefined4 buffer_size;
  undefined4 checksum_type;
  
  // 获取协议参数
  protocol_version = *(undefined8 *)(protocol_info + 0x18);
  protocol_flags = *(undefined8 *)(protocol_info + 0x20);
  header_format = *(undefined4 *)(protocol_info + 0x28);
  data_format = *(undefined4 *)(protocol_info + 0x2c);
  compression_level = *(undefined4 *)(protocol_info + 0x30);
  encryption_level = *(undefined4 *)(protocol_info + 0x34);
  timeout_value = *(undefined4 *)(protocol_info + 0x38);
  retry_count = *(undefined4 *)(protocol_info + 0x3c);
  buffer_size = *(undefined4 *)(protocol_info + 0x40);
  checksum_type = *(undefined4 *)(protocol_info + 0x44);
  
  // 初始化协议头
  protocol_size = func_0x00018074b800(data_ptr, data_size, *(undefined4 *)(protocol_info + 0x10));
  processed_bytes = FUN_18074b880(data_ptr + protocol_size, data_size - protocol_size, &DAT_180a06434);
  protocol_size = protocol_size + processed_bytes;
  
  // 设置协议参数
  processed_bytes = FUN_18088ebb0(protocol_size + data_ptr, data_size - protocol_size, &protocol_version);
  return processed_bytes + protocol_size;
}



// 函数: int process_basic_data_validation(longlong config_info, longlong data_ptr, int data_size)
// 基础数据验证处理
// 参数: config_info - 配置信息指针, data_ptr - 数据指针, data_size - 数据大小
// 功能: 执行基础数据验证，包括初始化校验和、缓冲区处理和最终验证
int process_basic_data_validation(longlong config_info, longlong data_ptr, int data_size)

{
  undefined4 validation_key;
  int bytes_processed;
  int bytes_validated;
  
  // 获取验证密钥
  validation_key = *(undefined4 *)(config_info + 0x18);
  
  // 初始化数据校验
  bytes_processed = initialize_checksum(data_ptr, data_size, *(undefined4 *)(config_info + 0x10));
  bytes_validated = process_checksum_data(data_ptr + bytes_processed, data_size - bytes_processed, &DATA_BUFFER_PTR);
  bytes_processed = bytes_processed + bytes_validated;
  
  // 应用最终验证
  bytes_validated = initialize_checksum(bytes_processed + data_ptr, data_size - bytes_processed, validation_key);
  return bytes_validated + bytes_processed;
}



int FUN_180841320(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ece0(iVar3 + param_2,param_3 - iVar3,&uStackX_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841410(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ece0(iVar2 + param_2,param_3 - iVar2,&uStackX_8);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x25);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808414f0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,param_1 + 0x28);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_1808415e0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  iVar2 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x28);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa8);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808416d0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar3 = func_0x00018074b800(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841790(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = FUN_18074b650(param_2,param_3,&uStack_18);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841830(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808418a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841910(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uStack_28 = *(undefined4 *)(param_1 + 0x30);
  uStack_24 = *(undefined4 *)(param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  uStack_18 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = func_0x00018088ecd0(param_2,param_3,&uStack_48);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808419e0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = FUN_18074b880(param_2,param_3,param_1 + 0x18);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180841a90(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  iVar5 = func_0x00018074bda0(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  iVar6 = FUN_18074b880(param_2 + iVar5,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b7d0(iVar5 + param_2,param_3 - iVar5,uVar4);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b7d0(iVar5 + param_2,param_3 - iVar5,uVar3);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b800(iVar5 + param_2,param_3 - iVar5,uVar2);
  iVar5 = iVar5 + iVar6;
  iVar6 = FUN_18074b880(iVar5 + param_2,param_3 - iVar5,&DAT_180a06434);
  iVar5 = iVar5 + iVar6;
  iVar6 = func_0x00018074b800(iVar5 + param_2,param_3 - iVar5,uVar1);
  return iVar6 + iVar5;
}



int FUN_180841bc0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x44);
  uStack_28 = *(undefined4 *)(param_1 + 0x24);
  uStack_24 = *(undefined4 *)(param_1 + 0x28);
  uStack_20 = *(undefined4 *)(param_1 + 0x2c);
  uStack_1c = *(undefined4 *)(param_1 + 0x30);
  uStack_40 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x14);
  uStack_30 = *(undefined8 *)(param_1 + 0x1c);
  uStack_18 = *(undefined4 *)(param_1 + 0x34);
  uStack_14 = *(undefined4 *)(param_1 + 0x38);
  uStack_10 = *(undefined4 *)(param_1 + 0x3c);
  uStack_c = *(undefined4 *)(param_1 + 0x40);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ebb0(iVar2 + param_2,param_3 - iVar2,&uStack_38);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b6f0(iVar2 + param_2,param_3 - iVar2,&uStack_48);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841cc0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b830(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841d30(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = FUN_18088ece0(param_2,param_3,&uStackX_8);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841df0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uStackX_8;
  
  uStackX_8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  iVar2 = FUN_18088ece0(param_2,param_3,&uStackX_8);
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1d);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180841ea0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined1 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,param_1 + 0x20);
  iVar4 = FUN_18074b880(param_2 + iVar3,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&DAT_180a06434);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180841f50(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  iVar2 = FUN_18074b880(param_2,param_3,param_1 + 0x20);
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa0);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b880(iVar2 + param_2,param_3 - iVar2,&DAT_180a06434);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}





// 函数: void FUN_180842030(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842030(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180983020,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_180842060(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842060(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f8f0(param_2,param_3,&UNK_1809830a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_1808420a0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180983120);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b650(iVar4 + param_2,param_3 - iVar4,&uStack_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}





// 函数: void FUN_1808421c0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808421c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982ea0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_1808421f0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808421f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f8f0(param_2,param_3,&UNK_180982f20,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



int FUN_180842230(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = FUN_18074b880(param_2,param_3,&UNK_180982fa0);
  iVar5 = FUN_18074b880(param_2 + iVar4,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar3);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b7d0(iVar4 + param_2,param_3 - iVar4,uVar2);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b650(iVar4 + param_2,param_3 - iVar4,&uStack_28);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_18074b880(iVar4 + param_2,param_3 - iVar4,&DAT_180a06434);
  iVar4 = iVar4 + iVar5;
  iVar5 = func_0x00018074b800(iVar4 + param_2,param_3 - iVar4,uVar1);
  return iVar5 + iVar4;
}





// 函数: void FUN_180842350(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842350(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982c20,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_180842380(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_180842380(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_180982ca0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





// 函数: void FUN_1808423b0(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808423b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18083f850(param_2,param_3,&UNK_1809831a0,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return;
}





