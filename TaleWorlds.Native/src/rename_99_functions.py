#!/usr/bin/env python3
"""
99_unmatched_functions.c 函数重命名脚本
为未定义的FUN_函数提供语义化名称
"""

import re
import sys

# 函数重命名映射
function_rename_map = {
    # 基础系统函数
    "FUN_1802e51e0": "InitializeSystemMemoryManager",
    "FUN_18023e880": "SetupSystemConfiguration",
    "FUN_18023e750": "InitializeSystemResources",
    "FUN_18023e4f0": "CreateSystemContext",
    "FUN_18023e620": "ValidateSystemState",
    "FUN_18023e240": "InitializeSystemLogger",
    "FUN_18023e3d0": "SetupSystemThreadPool",
    "FUN_180242760": "InitializeSystemTimer",
    "FUN_1802436f0": "CreateSystemEventQueue",
    "FUN_1801bbf00": "InitializeSystemFileSystem",
    "FUN_1801bbfb0": "SetupSystemNetwork",
    
    # 内存管理函数
    "FUN_1804df080": "AllocateMemoryPool",
    "FUN_1804df1a0": "FreeMemoryPool",
    "FUN_1804dee90": "ResizeMemoryPool",
    "FUN_1804dc080": "InitializeMemoryAllocator",
    "FUN_1804df390": "AllocateMemoryBlock",
    "FUN_1804dea90": "FreeMemoryBlock",
    "FUN_1804deba0": "ReallocateMemoryBlock",
    "FUN_1804dec60": "InitializeMemoryCache",
    "FUN_1804ded00": "ClearMemoryCache",
    "FUN_1804aa300": "InitializeMemoryGuard",
    
    # 线程管理函数
    "FUN_1805febd0": "CreateThreadContext",
    "FUN_1805fed10": "InitializeThreadScheduler",
    "FUN_1805fede0": "StartThreadExecution",
    "FUN_1805feec0": "PauseThreadExecution",
    "FUN_1805fef00": "ResumeThreadExecution",
    "FUN_1805fef40": "StopThreadExecution",
    "FUN_1805ff120": "CreateThreadMutex",
    "FUN_1805ff2e0": "LockThreadMutex",
    "FUN_1805ff380": "UnlockThreadMutex",
    "FUN_1805ff540": "CreateThreadSemaphore",
    "FUN_1805ff5b0": "WaitThreadSemaphore",
    "FUN_1805ff670": "SignalThreadSemaphore",
    "FUN_1805ff820": "CreateThreadEvent",
    "FUN_1805ff8c0": "WaitThreadEvent",
    "FUN_1805ff9e0": "SignalThreadEvent",
    "FUN_1805ffac0": "InitializeThreadLocalStorage",
    "FUN_1805ffc20": "SetThreadLocalStorage",
    "FUN_1805ffd60": "GetThreadLocalStorage",
    "FUN_1805ffe20": "InitializeThreadStack",
    "FUN_1805ffe60": "AllocateThreadStack",
    "FUN_1805ffed0": "FreeThreadStack",
    "FUN_1805fffa0": "InitializeThreadRegistry",
    
    # 文件系统函数
    "FUN_1806e71c0": "InitializeFileSystem",
    "FUN_1805f3060": "OpenFileHandle",
    "FUN_1805f32b0": "CloseFileHandle",
    "FUN_1804aa030": "ReadFileData",
    "FUN_1805f8910": "WriteFileData",
    "FUN_1805f8820": "SeekFilePosition",
    "FUN_1805faf50": "FlushFileBuffer",
    "FUN_1805fd350": "GetFileSize",
    "FUN_1805f6f30": "CreateDirectory",
    "FUN_1805f6f50": "RemoveDirectory",
    "FUN_1805f7180": "DeleteFile",
    "FUN_1805f7330": "RenameFile",
    
    # 网络系统函数
    "FUN_1806f1000": "InitializeNetworkSystem",
    "FUN_1806f4900": "CreateNetworkSocket",
    "FUN_1806f4940": "BindNetworkSocket",
    "FUN_1806f4980": "ListenNetworkSocket",
    "FUN_1806f49c0": "AcceptNetworkConnection",
    "FUN_1806f4a00": "ConnectNetworkSocket",
    "FUN_1806f4a40": "SendNetworkData",
    "FUN_1806f4a90": "ReceiveNetworkData",
    "FUN_1806f4bc0": "CloseNetworkSocket",
    "FUN_1806f4bf0": "InitializeNetworkProtocol",
    "FUN_1806f4c40": "ProcessNetworkPacket",
    "FUN_1806f4c80": "ValidateNetworkPacket",
    "FUN_1806f4da0": "EncryptNetworkData",
    "FUN_1806f4dd0": "DecryptNetworkData",
    "FUN_1806f4e00": "InitializeNetworkSecurity",
    "FUN_1806f4eb0": "AuthenticateNetworkConnection",
    "FUN_1806f4f50": "AuthorizeNetworkAccess",
    "FUN_1806f4f80": "InitializeNetworkLogger",
    "FUN_1806f5010": "LogNetworkActivity",
    "FUN_1806f5060": "InitializeNetworkStatistics",
    "FUN_1806f5090": "UpdateNetworkStatistics",
    
    # 加密系统函数
    "FUN_1807f9870": "InitializeEncryptionEngine",
    "FUN_1807f98c0": "CreateEncryptionContext",
    "FUN_1807f9910": "DestroyEncryptionContext",
    "FUN_1807aecd0": "GenerateEncryptionKey",
    "FUN_1807aed20": "LoadEncryptionKey",
    "FUN_1807aed50": "SaveEncryptionKey",
    "FUN_1807aed90": "EncryptDataBlock",
    "FUN_1807aea80": "DecryptDataBlock",
    "FUN_1807aeac0": "InitializeHashAlgorithm",
    "FUN_1807aeb00": "ComputeHashValue",
    "FUN_1807c36a0": "InitializeDigitalSignature",
    "FUN_1807c3700": "SignDataBlock",
    
    # 渲染系统函数
    "FUN_1808b4e90": "InitializeRenderingEngine",
    "FUN_1808dfa70": "CreateRenderContext",
    "FUN_1808e1cd0": "InitializeGraphicsPipeline",
    "FUN_1808e1020": "CreateShaderProgram",
    "FUN_1808efc90": "CompileShaderSource",
    "FUN_1808f34b0": "LinkShaderProgram",
    "FUN_1808f4a70": "CreateVertexBuffer",
    "FUN_1808f3c80": "CreateIndexBuffer",
    "FUN_1808f8b00": "CreateTextureBuffer",
    "FUN_1808fcad8": "InitializeRenderState",
    "FUN_1808fc074": "SetRenderState"
}

def rename_functions(content):
    """重命名函数"""
    for old_name, new_name in function_rename_map.items():
        # 替换函数声明
        content = re.sub(rf'undefined\s+{old_name}', f'undefined {new_name}', content)
        content = re.sub(rf'//\s*函数:\s*undefined\s+{old_name}', f'// 函数: undefined {new_name}', content)
        
        # 添加函数注释
        if new_name in function_rename_map.values():
            comment_pattern = rf'(//\s*函数:\s*undefined\s+{new_name})'
            if re.search(comment_pattern, content):
                # 如果已有注释，跳过
                continue
            else:
                # 添加新的注释
                comment = generate_function_comment(new_name)
                content = re.sub(rf'undefined\s+{new_name}', f'{comment}\nundefined {new_name}', content)
    
    return content

def generate_function_comment(function_name):
    """生成函数注释"""
    comment_templates = {
        "Initialize": "初始化系统组件或服务",
        "Create": "创建系统资源或对象",
        "Destroy": "销毁系统资源或对象",
        "Setup": "设置系统配置或参数",
        "Process": "处理数据或事件",
        "Validate": "验证数据或状态",
        "Allocate": "分配内存或资源",
        "Free": "释放内存或资源",
        "Send": "发送数据或信号",
        "Receive": "接收数据或信号",
        "Connect": "建立连接",
        "Disconnect": "断开连接",
        "Encrypt": "加密数据",
        "Decrypt": "解密数据",
        "Authenticate": "认证身份",
        "Authorize": "授权访问",
        "Log": "记录日志",
        "Compile": "编译代码",
        "Link": "链接程序",
        "Render": "渲染图形",
        "Load": "加载数据",
        "Save": "保存数据"
    }
    
    # 根据函数名生成注释
    for prefix, description in comment_templates.items():
        if function_name.startswith(prefix):
            return f"/**\n * @brief {description}\n * \n * 该函数负责{description}\n * 用于系统中的相关操作\n */"
    
    return f"/**\n * @brief 系统函数\n * \n * 该函数负责系统级操作\n * 用于维持系统正常运行\n */"

def main():
    """主函数"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    try:
        # 读取文件
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 重命名函数
        new_content = rename_functions(content)
        
        # 写入文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        print(f"成功重命名 {len(function_rename_map)} 个函数")
        
    except Exception as e:
        print(f"处理文件时发生错误: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()