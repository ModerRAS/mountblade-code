#!/usr/bin/env python3
"""
渲染系统函数重命名脚本
用于将03_rendering.c中的FUN_函数重命名为语义化的名称
"""

import re
import sys

# 函数重命名映射
function_rename_map = {
    "FUN_1804538b0": "ConfigureRenderObjectState",
    "FUN_1804539b0": "InitializeRenderObjectConfig",
    "FUN_180453b60": "SetupRenderObjectParameters",
    "FUN_180453cb0": "ValidateRenderObjectSettings",
    "FUN_180453d60": "ProcessRenderObjectData",
    "FUN_180453de0": "UpdateRenderObjectState",
    "FUN_180453e40": "ResetRenderObjectConfig",
    "FUN_180453f70": "GetRenderObjectInfo",
    "FUN_180453f90": "SetRenderObjectInfo",
    "FUN_180454070": "CreateRenderObjectInstance",
    "FUN_1804541a0": "DestroyRenderObjectInstance",
    "FUN_180454230": "CopyRenderObjectData",
    "FUN_180454300": "MergeRenderObjectData",
    "FUN_1804543f0": "CompareRenderObjects",
    "FUN_180454d00": "SerializeRenderObject",
    "FUN_180454d80": "DeserializeRenderObject",
    "FUN_180454ea0": "ValidateRenderObjectData",
    "FUN_180454ff0": "OptimizeRenderObject",
    "FUN_180455090": "CacheRenderObject",
    "FUN_180455250": "FlushRenderObjectCache",
    "FUN_180455340": "QueryRenderObjectStatus",
    "FUN_180455430": "SetRenderObjectStatus",
    "FUN_1804555a0": "GetRenderObjectStatus",
    "FUN_1804557b0": "LockRenderObject",
    "FUN_180455980": "UnlockRenderObject",
    "FUN_1804559d0": "IsRenderObjectLocked",
    "FUN_1804354c0": "InitializeRenderTexture",
    "FUN_1804355b0": "CreateRenderTexture",
    "FUN_180435630": "DestroyRenderTexture",
    "FUN_180435690": "BindRenderTexture",
    "FUN_1804357a0": "UnbindRenderTexture",
    "FUN_180435860": "UpdateRenderTexture",
    "FUN_1804359d0": "GetRenderTextureInfo",
    "FUN_180435a80": "SetRenderTextureParameters",
    "FUN_180435d10": "ValidateRenderTexture",
    "FUN_180435e20": "CopyRenderTexture",
    "FUN_180435f40": "BlitRenderTexture",
    "FUN_180435f90": "GenerateRenderTextureMipmaps",
    "FUN_180435ff0": "GetRenderTextureFormat",
    "FUN_180436030": "SetRenderTextureFormat",
    "FUN_180436160": "CompressRenderTexture",
    "FUN_1804362a0": "DecompressRenderTexture",
    "FUN_1804369d0": "InitializeRenderBuffer",
    "FUN_180436a00": "CreateRenderBuffer",
    "FUN_180436a50": "DestroyRenderBuffer",
    "FUN_180436ae0": "BindRenderBuffer",
    "FUN_180436bb0": "UnbindRenderBuffer",
    "FUN_180436bf0": "UpdateRenderBuffer",
    "FUN_180436c30": "GetRenderBufferInfo",
    "FUN_180436d00": "SetRenderBufferData"
}

def rename_functions_in_file(file_path):
    """重命名文件中的函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 重命名函数声明
        for old_name, new_name in function_rename_map.items():
            # 匹配函数声明格式: // 函数: undefined FUN_xxxxxxxx;
            pattern = rf'(// 函数: undefined\s+){old_name}(.*)'
            replacement = rf'\1{new_name}\2'
            content = re.sub(pattern, replacement, content)
        
        # 重命名函数调用
        for old_name, new_name in function_rename_map.items():
            # 匹配函数调用格式: FUN_xxxxxxxx(
            pattern = rf'\b{old_name}\s*\('
            replacement = f'{new_name}('
            content = re.sub(pattern, replacement, content)
        
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"成功重命名文件: {file_path}")
        return True
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    rename_functions_in_file(file_path)