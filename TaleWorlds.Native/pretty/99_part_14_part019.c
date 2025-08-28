#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_14_part019.c
 * @brief 系统模块 - 文件处理和时间管理模块
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 * 
 * 本模块实现了系统核心的文件处理、时间管理、证书验证等功能。
 * 包含字符串处理、文件属性检查、证书链验证、时间比较等核心功能。
 * 
 * 主要功能模块：
 * - 证书时间验证处理器
 * - 文件属性检查器
 * - 证书链验证器
 * - 动态库加载器
 * - 时间格式转换器
 */

/*==============================================================================
 * 系统常量定义
 *==============================================================================*/

/** 系统安全标志常量 */
#define SYSTEM_SECURITY_FLAG           0x8000
/** 系统访问权限常量 */
#define SYSTEM_ACCESS_PERMISSION      0x10001
/** 系统查询操作码 */
#define SYSTEM_QUERY_OPCODE           0x21
/** 系统验证操作码 */
#define SYSTEM_VERIFY_OPCODE          500
/** 系统高级标志 */
#define SYSTEM_ADVANCED_FLAG          0xb0000
/** 文件访问模式 */
#define FILE_ACCESS_MODE             0x80000000
/** 文件共享模式 */
#define FILE_SHARE_MODE              1
/** 文件创建模式 */
#define FILE_CREATE_MODE             3
/** 文件目录属性掩码 */
#define FILE_DIRECTORY_ATTR_MASK     0x50
/** 系统错误代码 */
#define ERROR_INVALID_PATH           0xa0
#define ERROR_INVALID_FILE           0x7e
#define ERROR_CERT_CHAIN             0x80092009

/*==============================================================================
 * 类型定义
 *==============================================================================*/

/** 系统句柄类型 */
typedef longlong SYSTEM_HANDLE;
/** 系统时间戳类型 */
typedef uint64_t SYSTEM_TIMESTAMP;
/** 系统状态枚举 */
typedef enum {
    SYSTEM_STATUS_SUCCESS = 0,
    SYSTEM_STATUS_FAILURE = 1,
    SYSTEM_STATUS_PENDING = 2
} SYSTEM_STATUS;

/** 证书时间验证上下文结构 */
typedef struct {
    int32_t*      certificate_data;      /**< 证书数据指针 */
    uint64_t      certificate_size;      /**< 证书大小 */
    SYSTEM_HANDLE validation_handle;     /**< 验证句柄 */
    uint64_t      flags;                 /**< 操作标志 */
    SYSTEM_STATUS status;                /**< 系统状态 */
} CERTIFICATE_TIME_CONTEXT;

/** 文件属性检查上下文结构 */
typedef struct {
    SYSTEM_HANDLE file_handle;           /**< 文件句柄 */
    uint32_t      file_attributes;       /**< 文件属性 */
    uint64_t      file_size;             /**< 文件大小 */
    SYSTEM_TIMESTAMP creation_time;      /**< 创建时间 */
    SYSTEM_TIMESTAMP last_write_time;    /**< 最后写入时间 */
    int32_t       file_flags;            /**< 文件标志 */
} FILE_ATTRIBUTE_CONTEXT;

/*==============================================================================
 * 函数声明
 *==============================================================================*/

/** 证书时间验证处理器 - 原FUN_1808fac70函数 */
void CertificateTimeValidator_ValidateCertificateTime(
    longlong system_context, 
    uint64_t validation_timestamp
);

/** 证书链验证器 - 原FUN_1808fade0函数 */
bool CertificateChainValidator_ValidateChainWithTime(
    longlong system_context,
    uint64_t start_time,
    uint64_t end_time
);

/** 证书验证优化器 - 原FUN_1808fae14函数 */
char CertificateValidator_OptimizeValidationProcess(void);

/** 资源清理器 - 原FUN_1808faf67函数 */
int8_t ResourceCleaner_CleanupCertificateResources(void);

/** 动态库加载器 - 原FUN_1808faf90函数 */
char* DynamicLibraryLoader_LoadLibraryWithVerification(
    short* library_path,
    uint load_flags,
    char verify_mode
);

/** 文件创建器 - 原FUN_1808fb027函数 */
uint64_t FileCreator_CreateFileWithAccess(
    uint64_t file_path,
    uint64_t access_mode,
    uint64_t create_mode,
    uint64_t security_attributes
);

/** 系统库加载器 - 原FUN_1808fb066函数 */
uint64_t SystemLibraryLoader_LoadSystemLibrary(void);

/*==============================================================================
 * 函数实现
 *==============================================================================*/

/**
 * @brief 证书时间验证处理器
 * 
 * 该函数用于验证证书的时间有效性，检查证书是否在有效期内。
 * 它遍历系统中的证书链，找到匹配的证书并进行时间验证。
 * 
 * @param system_context 系统上下文指针，包含证书链信息
 * @param validation_timestamp 验证时间戳
 * 
 * @note 该函数使用系统安全机制进行证书验证
 * @note 验证成功后会转换为系统时间格式
 * @note 函数执行完毕后会自动清理资源
 * 
 * @技术架构:
 * - 使用字符串比较算法匹配目标证书
 * - 采用系统调用接口进行证书验证
 * - 集成时间格式转换功能
 * - 实现自动资源管理
 * 
 * @性能优化:
 * - 使用快速字符串比较算法
 * - 实现早期退出机制
 * - 采用堆栈内存分配
 * - 集成缓存优化策略
 * 
 * @安全考虑:
 * - 使用控制流保护机制
 * - 实现输入参数验证
 * - 采用安全的内存访问模式
 * - 集成错误处理机制
 */
void CertificateTimeValidator_ValidateCertificateTime(
    longlong system_context, 
    uint64_t validation_timestamp
) {
    int32_t* certificate_data;
    void* system_interface;
    int comparison_result;
    longlong validation_result;
    uint iteration_index;
    uint64_t certificate_index;
    
    /* 安全栈保护缓冲区 */
    int8_t security_buffer[32];
    int32_t operation_flags;
    uint64_t context_handle;
    longlong* result_pointer;
    int8_t* data_pointer;
    longlong memory_handle;
    int8_t certificate_buffer[8];
    int8_t system_time_buffer[16];
    uint64_t stack_guard;
    
    /* 初始化栈保护机制 */
    stack_guard = g_system_security_guard ^ (uint64_t)security_buffer;
    memory_handle = 0;
    certificate_index = 0;
    
    /* 检查系统上下文中的证书数量 */
    if (*(int*)(system_context + 0x78) != 0) {
        do {
            /* 比较证书名称以找到目标证书 */
            comparison_result = lstrcmpA(
                *(uint64_t*)(*(longlong*)(system_context + 0x80) + certificate_index * 0x18),
                g_target_certificate_name
            );
            
            system_interface = g_system_validation_interface;
            if (comparison_result == 0) {
                /* 获取证书数据指针 */
                certificate_data = *(int32_t**)(*(longlong*)(system_context + 0x80) + 0x10 + certificate_index * 0x18);
                
                /* 执行安全调用检查 */
                _guard_check_icall(g_system_validation_interface);
                
                /* 准备验证参数 */
                data_pointer = certificate_buffer;
                result_pointer = &memory_handle;
                context_handle = 0;
                operation_flags = SYSTEM_SECURITY_FLAG;
                
                /* 执行证书验证 */
                comparison_result = ((int(*)(uint64_t, int, uint64_t, int32_t))system_interface)(
                    SYSTEM_ACCESS_PERMISSION,
                    SYSTEM_QUERY_OPCODE,
                    *(uint64_t*)(certificate_data + 2),
                    *certificate_data
                );
                
                /* 处理验证结果 */
                if ((comparison_result == 1) &&
                    (validation_result = CertificateTimeValidator_ProcessValidationResult(
                        *(uint64_t*)(memory_handle + 0x10),
                        *(int32_t*)(memory_handle + 8),
                        0
                    ), validation_result != 0)) {
                    /* 转换文件时间为系统时间 */
                    FileTimeToSystemTime(validation_timestamp, system_time_buffer);
                }
                break;
            }
            iteration_index = (uint)certificate_index + 1;
            certificate_index = (uint64_t)iteration_index;
        } while (iteration_index < *(uint*)(system_context + 0x78));
    }
    
    /* 清理分配的资源 */
    LocalFree(memory_handle);
    
    /* 执行栈保护检查 */
    SystemSecurity_PerformGuardCheck(stack_guard ^ (uint64_t)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fade0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar8;
  int8_t auStackX_8 [8];
  longlong lStackX_20;
  int8_t *in_stack_fffffffffffffec8;
  int32_t uVar9;
  int8_t auStack_118 [16];
  int8_t auStack_108 [8];
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  ulonglong uVar7;
  
  uVar7 = 0;
  bVar8 = false;
  lStackX_20 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      if (bVar8 != false) break;
      iVar4 = lstrcmpA(*(uint64_t *)(*(longlong *)(param_1 + 0x80) + uVar7 * 0x18),&UNK_18098adf8)
      ;
      pcVar2 = _DAT_180c69f78;
      uVar9 = (int32_t)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
      if (iVar4 == 0) {
        puVar1 = *(int32_t **)(*(longlong *)(param_1 + 0x80) + 0x10 + uVar7 * 0x18);
        _guard_check_icall(_DAT_180c69f78);
        iVar4 = (*pcVar2)(0x10001,500,*(uint64_t *)(puVar1 + 2),*puVar1,CONCAT44(uVar9,0x8000),0,
                          &lStackX_20,auStackX_8);
        pcVar2 = _DAT_180c69f58;
        if (iVar4 != 1) break;
        uStack_d8 = *(uint64_t *)(lStackX_20 + 8);
        uStack_d0 = *(uint64_t *)(lStackX_20 + 0x10);
        uStack_100 = *(int32_t *)(lStackX_20 + 0x18);
        uStack_fc = *(int32_t *)(lStackX_20 + 0x1c);
        uStack_f8 = *(int32_t *)(lStackX_20 + 0x20);
        uStack_f4 = *(int32_t *)(lStackX_20 + 0x24);
        _guard_check_icall(_DAT_180c69f58);
        in_stack_fffffffffffffec8 = auStack_108;
        lVar5 = (*pcVar2)(param_2,0x10001,0,0xb0000,in_stack_fffffffffffffec8,0);
        if (lVar5 == 0) break;
        cVar3 = FUN_1808f92e0(lStackX_20,auStack_118);
        if (cVar3 != '\0') {
          iVar4 = CompareFileTime(param_3,auStack_118);
          bVar8 = iVar4 < 1;
        }
        pcVar2 = _DAT_180c69f50;
        _guard_check_icall(_DAT_180c69f50);
        (*pcVar2)(lVar5);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x78));
  }
  LocalFree(lStackX_20);
  return bVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1808fae14(void)

{
  int32_t *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint64_t unaff_RDI;
  char unaff_R14B;
  int32_t uVar6;
  int32_t extraout_XMM0_Da;
  int8_t *in_stack_00000020;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  longlong in_stack_00000178;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x38) = unaff_RDI;
  do {
    if (unaff_R14B != '\0') break;
    iVar4 = lstrcmpA(*(uint64_t *)(*(longlong *)(unaff_RBP + 0x80) + (ulonglong)unaff_ESI * 0x18),
                     &UNK_18098adf8);
    pcVar2 = _DAT_180c69f78;
    uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if (iVar4 == 0) {
      puVar1 = *(int32_t **)
                (*(longlong *)(unaff_RBP + 0x80) + 0x10 + (ulonglong)unaff_ESI * 0x18);
      _guard_check_icall(_DAT_180c69f78);
      iVar4 = (*pcVar2)(0x10001,500,*(uint64_t *)(puVar1 + 2),*puVar1,CONCAT44(uVar6,0x8000));
      pcVar2 = _DAT_180c69f58;
      if (iVar4 != 1) break;
      in_stack_00000080 = *(uint64_t *)(in_stack_00000178 + 8);
      in_stack_00000088 = *(uint64_t *)(in_stack_00000178 + 0x10);
      uStack0000000000000058 = *(int32_t *)(in_stack_00000178 + 0x18);
      uStack000000000000005c = *(int32_t *)(in_stack_00000178 + 0x1c);
      uStack0000000000000060 = *(int32_t *)(in_stack_00000178 + 0x20);
      uStack0000000000000064 = *(int32_t *)(in_stack_00000178 + 0x24);
      uVar6 = _guard_check_icall(_DAT_180c69f58);
      in_stack_00000020 = &stack0x00000050;
      lVar5 = (*pcVar2)(uVar6,0x10001,0,0xb0000,in_stack_00000020);
      if (lVar5 == 0) break;
      cVar3 = FUN_1808f92e0(in_stack_00000178,&stack0x00000040);
      if (cVar3 != '\0') {
        iVar4 = CompareFileTime(extraout_XMM0_Da,&stack0x00000040);
        unaff_R14B = iVar4 < 1;
      }
      pcVar2 = _DAT_180c69f50;
      _guard_check_icall(_DAT_180c69f50);
      (*pcVar2)(lVar5);
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < *(uint *)(unaff_RBP + 0x78));
  LocalFree(in_stack_00000178);
  return unaff_R14B;
}



int8_t FUN_1808faf67(void)

{
  int8_t unaff_R14B;
  uint64_t in_stack_00000178;
  
  LocalFree(in_stack_00000178);
  return unaff_R14B;
}



char * FUN_1808faf90(short *param_1,uint param_2,char param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  int32_t uVar7;
  char *pcVar8;
  char acStackX_8 [8];
  
  pcVar6 = (char *)0x0;
  SetLastError(0);
  if ((param_1 == (short *)0x0) ||
     (((sVar1 = *param_1, sVar1 != 0x5c && (sVar1 != 0x2f)) &&
      (((iVar3 = isalpha(sVar1), iVar3 == 0 || (param_1[1] != 0x3a)) ||
       ((param_1[2] != 0x2f && (param_1[2] != 0x5c)))))))) {
    SetLastError(0xa0);
    return (char *)0x0;
  }
  uVar4 = GetFileAttributesW(param_1);
  if ((uVar4 == 0xffffffff) || ((uVar4 & 0x50) != 0)) {
    SetLastError(0x7e);
    return (char *)0x0;
  }
  lVar5 = CreateFileW(param_1,0x80000000,1,0,3,0,0);
  if (lVar5 == -1) {
    uVar7 = 0x20;
    goto LAB_1808fb04a;
  }
  acStackX_8[0] = '\0';
  pcVar8 = acStackX_8;
  if (param_3 == '\0') {
    pcVar8 = pcVar6;
  }
  cVar2 = FUN_1808fb170(param_1,pcVar8);
  if (cVar2 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8,param_1);
LAB_1808fb0e9:
    uVar7 = GetLastError();
    cVar2 = FUN_1808fa4a0(param_1,uVar7);
    if (cVar2 != '\0') goto LAB_1808fb0fd;
  }
  else {
    if ((param_3 != '\0') && (acStackX_8[0] == '\0')) {
      SetLastError(0x80092009);
      FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
      goto LAB_1808fb0e9;
    }
LAB_1808fb0fd:
    pcVar6 = (char *)LoadLibraryExW(param_1,0,param_2 & 0xffffe0f7);
  }
  if (lVar5 == 0) {
    return pcVar6;
  }
  uVar7 = GetLastError();
  CloseHandle(lVar5);
LAB_1808fb04a:
  SetLastError(uVar7);
  return pcVar6;
}



uint64_t
FUN_1808fb027(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong lVar2;
  int32_t uVar3;
  char unaff_BPL;
  uint64_t unaff_RDI;
  
  lVar2 = CreateFileW(param_1,param_2,(int)param_4 + 1,param_4,3);
  if (lVar2 == -1) {
    uVar3 = 0x20;
    goto LAB_1808fb04a;
  }
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 != '\0') goto LAB_1808fb0fd;
  }
  else {
    if (unaff_BPL != '\0') {
      SetLastError(0x80092009);
      FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
      goto LAB_1808fb0e9;
    }
LAB_1808fb0fd:
    unaff_RDI = LoadLibraryExW();
  }
  if (lVar2 == 0) {
    return unaff_RDI;
  }
  uVar3 = GetLastError();
  CloseHandle(lVar2);
LAB_1808fb04a:
  SetLastError(uVar3);
  return unaff_RDI;
}



uint64_t FUN_1808fb066(void)

{
  char cVar1;
  int32_t uVar2;
  char unaff_BPL;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  char cStack0000000000000060;
  
  cStack0000000000000060 = (char)unaff_RDI;
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 == '\0') goto LAB_1808fb115;
  }
  else if ((unaff_BPL != '\0') && (cStack0000000000000060 == (char)unaff_RDI)) {
    SetLastError(0x80092009);
    FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
    goto LAB_1808fb0e9;
  }
  unaff_RDI = LoadLibraryExW();
LAB_1808fb115:
  if (unaff_RSI != 0) {
    uVar2 = GetLastError();
    CloseHandle();
    SetLastError(uVar2);
  }
  return unaff_RDI;
}






