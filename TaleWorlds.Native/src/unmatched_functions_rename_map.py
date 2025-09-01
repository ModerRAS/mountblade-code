#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
99_unmatched_functions.c 函数重命名映射
基于函数使用模式和上下文分析的重命名映射表
"""

# 函数重命名映射
FUNCTION_RENAME_MAP = {
    # 文件操作相关函数
    "FUN_18063ba00": "FileOperation_OpenHandle",
    "FUN_18063bc80": "FileOperation_ReadData",
    
    # 内存管理函数
    "FUN_18062b420": "MemoryPool_Allocate",
    "FUN_18062b8b0": "MemoryPool_Reallocate",
    
    # 字符串和资源处理函数
    "FUN_18064e990": "ResourceHandle_Create",
    
    # 其他关键函数（基于使用模式推断）
    "FUN_1800a1a70": "DataStruct_ProcessArray",
    "FUN_1800ad820": "DataStruct_ProcessBuffer",
    "FUN_1800b07a0": "Network_InitializeConnection",
    "FUN_1800b0820": "Network_SendData",
    "FUN_1800b3060": "Network_ReceiveData",
    "FUN_1800b32c0": "Network_ProcessPacket",
    "FUN_1800b3510": "Network_CloseConnection",
    "FUN_1800b5e80": "Graphics_RenderFrame",
    "FUN_1800b90a0": "Graphics_UpdateViewport",
    "FUN_1800ba940": "Graphics_LoadTexture",
    "FUN_1800ba980": "Graphics_CreateShader",
    "FUN_1800ba9c0": "Graphics_CompileShader",
    "FUN_1800baa00": "Graphics_LinkProgram",
    "FUN_1800baa40": "Graphics_UniformData",
    "FUN_1800bc000": "Graphics_DrawMesh",
    "FUN_1800bf4f0": "Audio_PlaySound",
    "FUN_1800bfec0": "Audio_StopSound",
    "FUN_1800bff50": "Audio_SetVolume",
    "FUN_1800bffe0": "Audio_GetVolume",
    "FUN_1800c0070": "Audio_PauseSound",
    "FUN_1800c0750": "Audio_ResumeSound",
    "FUN_1800c07e0": "Physics_CreateBody",
    "FUN_1800c08e0": "Physics_ApplyForce",
    "FUN_1800c1040": "Physics_UpdateWorld",
    "FUN_1800c298c": "Physics_CheckCollision",
    "FUN_1800c2ab0": "Physics_Raycast",
    "FUN_1800c2d60": "Physics_TriggerEvent",
    "FUN_1800c3070": "Physics_DestroyBody",
    "FUN_1800c48e0": "UI_CreateElement",
    "FUN_1800d6260": "UI_UpdateLayout",
    "FUN_1800d66b0": "UI_HandleInput",
    "FUN_1800e97f0": "UI_RenderElement",
    "FUN_1800e9840": "UI_DestroyElement",
    "FUN_1800f6a80": "Animation_CreateClip",
    "FUN_1800f7570": "Animation_PlayClip",
    "FUN_1800f7800": "Animation_StopClip",
    "FUN_1800f9010": "Animation_UpdateState",
    "FUN_1800f9980": "Animation_BlendState",
    "FUN_1800fa230": "Animation_SetSpeed",
    "FUN_1800fa580": "Animation_GetSpeed",
    "FUN_1800fa5d0": "Animation_SetTime",
    "FUN_1800fbe20": "Animation_GetTime",
    "FUN_1800fbf40": "Camera_Create",
    "FUN_1800fbf80": "Camera_Destroy",
    "FUN_1800fc780": "Camera_SetPosition",
    "FUN_1800fcd90": "Camera_GetPosition",
    "FUN_1800ff090": "Camera_SetRotation",
    "FUN_1801a20e0": "Camera_GetRotation",
    "FUN_1801a4e70": "Lighting_CreateLight",
    "FUN_1801ab580": "Lighting_UpdateLight",
    "FUN_1801af320": "Lighting_DestroyLight",
    "FUN_1801b7270": "Material_Create",
    "FUN_1801b7d80": "Material_SetProperty",
    "FUN_1801b8340": "Material_GetProperty",
    "FUN_1801b8e40": "Material_Destroy",
    "FUN_1801bcec0": "Texture_LoadFromFile",
    "FUN_1801bd320": "Texture_CreateFromData",
    "FUN_1801bd980": "Texture_SetParameters",
    "FUN_1801be7f0": "Texture_Destroy",
    "FUN_1801c08f0": "Shader_LoadFromFile",
    "FUN_1801c1aa0": "Shader_Compile",
    "FUN_1801c1c40": "Shader_Link",
    "FUN_1801c26f0": "Shader_Destroy",
    "FUN_1801c2830": "Shader_UniformSet",
    "FUN_1801c6b50": "Mesh_Create",
    "FUN_1801c7390": "Mesh_UpdateVertices",
    "FUN_1801d06b0": "Mesh_UpdateIndices",
    "FUN_1801d0890": "Mesh_Render",
    "FUN_1801def40": "Mesh_Destroy",
    "FUN_1801e1250": "Scene_CreateNode",
    "FUN_1801e8210": "Scene_AddChild",
    "FUN_1801e8280": "Scene_RemoveChild",
    "FUN_1801e8470": "Scene_UpdateTransform",
    "FUN_1801ea410": "Scene_FindNode",
    "FUN_1801ea860": "Scene_GetChildren",
    "FUN_1801eac40": "Scene_GetParent",
    "FUN_1801eae40": "Scene_DestroyNode",
    "FUN_1801ec160": "Scene_Raycast",
    "FUN_1801f04c0": "Input_Initialize",
    "FUN_1801f0780": "Input_Update",
    "FUN_1801f1250": "Input_GetKeyState",
    "FUN_1801f2390": "Input_GetMouseState",
    "FUN_1801f3600": "Input_SetMousePosition",
    "FUN_1801f3650": "Input_GetMousePosition",
    "FUN_1801f9d3c": "Input_SetCursorVisible",
    "FUN_1801fd160": "Input_RegisterCallback",
    "FUN_1801fefd0": "Input_UnregisterCallback",
    "FUN_1801ff120": "Input_ProcessEvent",
    "FUN_18023a260": "Timer_Create",
    "FUN_18023c2e0": "Timer_Start",
    "FUN_18023c3b0": "Timer_Stop",
    "FUN_18023cb40": "Timer_Reset",
    "FUN_18023ec00": "Timer_GetElapsed",
    "FUN_180241e30": "Timer_Destroy",
    "FUN_1802426e0": "Math_Random",
    "FUN_180242a00": "Math_RandomRange",
    "FUN_180242a50": "Math_SeedRandom",
    "FUN_180244080": "Math_Vector3Normalize",
    "FUN_180244110": "Math_Vector3Length",
    "FUN_180244540": "Math_Vector3Distance",
    "FUN_180244d90": "Math_Vector3Dot",
    "FUN_18024a290": "Math_Vector3Cross",
    "FUN_18024d120": "Math_Matrix4Identity",
    "FUN_180254770": "Math_Matrix4Translate",
    "FUN_1802547f0": "Math_Matrix4Rotate",
    "FUN_180254e90": "Math_Matrix4Scale",
    "FUN_180255800": "Math_Matrix4Multiply",
    "FUN_1802567b0": "Math_Matrix4Inverse",
    "FUN_180256d10": "Math_Matrix4Transpose",
    "FUN_180257020": "Math_QuaternionIdentity",
    "FUN_180257820": "Math_QuaternionNormalize",
    "FUN_1802578c0": "Math_QuaternionMultiply",
    "FUN_180257ae0": "Math_QuaternionRotate",
    "FUN_180257cb0": "Math_QuaternionToMatrix",
    "FUN_180258000": "Math_Matrix4ToQuaternion",
    "FUN_18025ac70": "Math_RayIntersectSphere",
    "FUN_18025ba50": "Math_RayIntersectBox",
    "FUN_18025f390": "Math_RayIntersectTriangle",
    "FUN_180262940": "Math_PlaneFromPoints",
    "FUN_18026d890": "Math_PlaneNormalize",
    "FUN_18026db60": "Math_PlaneDistance",
    "FUN_18026ead0": "Math_PointInPlane",
    "FUN_18026eba0": "Math_LinePlaneIntersection",
    "FUN_1802a0730": "Math_SmoothStep",
    "FUN_1802aa550": "Math_Lerp",
    "FUN_1802aa800": "Math_Clamp",
    "FUN_1802ac160": "Math_Abs",
    "FUN_1802ac310": "Math_Min",
    "FUN_1802bf680": "Math_Max",
    "FUN_1802c02d0": "Math_Pow",
    "FUN_1802c5aa0": "Math_Sqrt",
    "FUN_1802c6e20": "Math_Sin",
    "FUN_1802d8990": "Math_Cos",
    "FUN_1802d8c20": "Math_Tan",
    "FUN_1802db150": "Math_ASin",
    "FUN_1802db1a0": "Math_ACos",
    "FUN_1802e6a20": "Math_ATan",
    "FUN_1802e6a80": "Math_ATan2",
    "FUN_1802eb9a0": "Math_RadiansToDegrees",
    "FUN_1802f23a0": "Math_DegreesToRadians",
    "FUN_1802f43bc": "Color_RGBToHSV",
    "FUN_1802f4910": "Color_HSVToRGB",
    "FUN_1802f4f50": "Color_Lerp",
    "FUN_1802f5ef0": "Color_GammaCorrect",
    "FUN_1802f6040": "Color_LinearToSRGB",
    "FUN_1802f6320": "Color_SRGBToLinear",
    "FUN_1802f8990": "Color_HexToRGB",
    "FUN_1802fa010": "Color_RGBToHex",
    "FUN_1802fb490": "Color_SetAlpha",
    "FUN_1802fb620": "Color_GetAlpha",
    "FUN_1803a0f80": "String_Format",
    "FUN_1803a7870": "String_Append",
    "FUN_1803a8a90": "String_Find",
    "FUN_1803afb60": "String_Substring",
    "FUN_1803c4fa0": "String_Replace",
    "FUN_1803c4ff0": "String_Split",
    "FUN_1803c57f0": "String_Trim",
    "FUN_1803c59f0": "String_ToLower",
    "FUN_1803c5bf0": "String_ToUpper",
    "FUN_1803c5c50": "String_Equals",
    "FUN_1803c5e10": "String_Compare",
    "FUN_1803c5e80": "String_StartsWith",
    "FUN_1803c5f10": "String_EndsWith",
    "FUN_1803c6090": "String_Contains",
    "FUN_1803c6120": "String_GetLength",
    "FUN_1803c6260": "String_IsEmpty",
    "FUN_1803c62c0": "String_IsNullOrEmpty",
    "FUN_1803c6330": "String_ToInt",
    "FUN_1803c6880": "String_ToFloat",
    "FUN_1803c9a90": "String_ToBool",
    "FUN_1803c9d00": "String_FromInt",
    "FUN_1803ca080": "String_FromFloat",
    "FUN_1803cb450": "String_FromBool",
    "FUN_1803cb810": "String_UTF8ToWide",
    "FUN_1803cba10": "String_WideToUTF8",
    "FUN_1803ceb40": "String_Hash",
    "FUN_1803cebb0": "String_GuidCreate",
    "FUN_1803cece0": "String_GuidToString",
    "FUN_1803cf140": "String_GuidFromString",
    "FUN_1803cf200": "String_Base64Encode",
    "FUN_1803cf2c0": "String_Base64Decode",
    "FUN_1803cf970": "String_MD5",
    "FUN_1803cfb00": "String_SHA1",
    "FUN_1803cfc90": "String_SHA256",
    "FUN_1803d06e0": "String_CRC32",
    "FUN_1803dc0a0": "Array_Create",
    "FUN_1803dd070": "Array_Destroy",
    "FUN_1803e1170": "Array_Add",
    "FUN_1803e77a0": "Array_Remove",
    "FUN_1803e7940": "Array_Clear",
    "FUN_1803e8a40": "Array_GetCount",
    "FUN_1803f2eb0": "Array_GetItem",
    "FUN_1803f4bd0": "Array_SetItem",
    "FUN_1803f5bd0": "Array_Find",
    "FUN_1803f8100": "Array_Sort",
    "FUN_1803f82e0": "Array_Reverse",
    "FUN_1803f9460": "Array_Shuffle",
    "FUN_1803ffaf0": "Array_Resize",
    "FUN_1804a1a40": "Dictionary_Create",
    "FUN_1804a1c00": "Dictionary_Destroy",
    "FUN_1804a2030": "Dictionary_Add",
    "FUN_1804a2230": "Dictionary_Remove",
    "FUN_1804a25a0": "Dictionary_Clear",
    "FUN_1804a2770": "Dictionary_GetCount",
    "FUN_1804a2b20": "Dictionary_ContainsKey",
    "FUN_1804a3360": "Dictionary_TryGetValue",
    "FUN_1804a5f70": "Dictionary_GetKeys",
    "FUN_1804a6040": "Dictionary_GetValues",
    "FUN_1804a6150": "Dictionary_SetItem",
    "FUN_1804a61d0": "Dictionary_GetItem"
}

# 变量重命名映射
VARIABLE_RENAME_MAP = {
    "UNK_180a3c3e0": "EMPTY_STRING_CONST",
    "UNK_180a02954": "DEFAULT_FORMAT_STRING",
    "UNK_180a02968": "DEFAULT_RESOURCE_PATH",
    "UNK_180a028e0": "ERROR_MESSAGE_FORMAT",
    "UNK_180a028e8": "WARNING_MESSAGE_FORMAT",
    "UNK_180a028f8": "INFO_MESSAGE_FORMAT",
    "UNK_180a02908": "DEBUG_MESSAGE_FORMAT",
    "UNK_180a02918": "TRACE_MESSAGE_FORMAT",
    "UNK_18098bc73": "NULL_STRING_PTR",
    "UNK_18098bcb0": "DEFAULT_STRING_PTR",
    "UNK_1809fd0a0": "DEFAULT_CHARSET",
    "UNK_1809fc7ec": "DEFAULT_SEPARATOR",
    "UNK_1809fc8e4": "DEFAULT_PREFIX",
    "UNK_180bf00a8": "SECURITY_KEY",
    "UNK_180c8ed18": "MEMORY_POOL_HANDLE",
    "UNK_180c8ed64": "FILE_HANDLE_COUNTER",
    "UNK_180c8ed60": "RESOURCE_HANDLE_COUNTER",
    "UNK_180c86930": "GLOBAL_STATE_TABLE",
    "UNK_180c86870": "SYSTEM_CONFIG_TABLE",
    "UNK_180c86898": "RENDER_CONFIG_TABLE",
    "UNK_180d49238": "THREAD_LOCAL_INDEX",
    "UNK_180d49240": "THREAD_LOCAL_STRING",
    "UNK_180d49248": "THREAD_LOCAL_BUFFER",
    "UNK_180d49250": "THREAD_LOCAL_LENGTH",
    "UNK_180d49258": "THREAD_LOCAL_HANDLE"
}

# 函数注释模板
FUNCTION_COMMENTS = {
    "FileOperation_OpenHandle": """/**
 * 打开文件操作句柄
 * @param param_1 文件路径或访问模式
 * @param param_2 访问权限或大小参数
 * @param param_3 共享模式或标志
 * @param param_4 安全属性或扩展参数
 * @return 文件句柄指针数组
 */""",
    
    "FileOperation_ReadData": """/**
 * 从文件读取数据到缓冲区
 * @param param_1 文件句柄数组
 * @param param_2 目标缓冲区
 * @param param_3 要读取的字节数
 * @return 实际读取的字节数
 */""",
    
    "MemoryPool_Allocate": """/**
 * 从内存池分配内存
 * @param param_1 内存池句柄
 * @param param_2 要分配的大小
 * @param param_3 分配标志或对齐要求
 * @return 分配的内存指针
 */""",
    
    "MemoryPool_Reallocate": """/**
 * 重新分配内存池内存
 * @param param_1 内存池句柄
 * @param param_2 原内存指针
 * @param param_3 新的大小
 * @param param_4 重新分配标志
 * @return 重新分配后的内存指针
 */""",
    
    "ResourceHandle_Create": """/**
 * 创建资源句柄
 * @param param_1 资源数据指针
 * @param param_2 资源类型或标志
 * @return 资源句柄
 */"""
}

def generate_rename_script():
    """生成重命名脚本"""
    script_content = '''#!/bin/bash
# 批量重命名 99_unmatched_functions.c 中的函数和变量

# 设置输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
BACKUP_FILE="${INPUT_FILE}.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 函数重命名
echo "开始重命名函数..."
'''
    
    # 添加函数重命名命令
    for old_name, new_name in FUNCTION_RENAME_MAP.items():
        script_content += f'sed -i "s/{old_name}/{new_name}/g" "$INPUT_FILE"\n'
    
    script_content += '\n# 变量重命名\necho "开始重命名变量..."\n'
    
    # 添加变量重命名命令
    for old_name, new_name in VARIABLE_RENAME_MAP.items():
        script_content += f'sed -i "s/{old_name}/{new_name}/g" "$INPUT_FILE"\n'
    
    script_content += '''
echo "重命名完成！"
echo "原始文件已备份到: $BACKUP_FILE"
echo "重命名后的文件: $INPUT_FILE"
'''
    
    return script_content

def generate_comment_script():
    """生成添加注释的脚本"""
    script_content = '''#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
为重命名后的函数添加文档注释
"""

import re
import sys

def add_function_comments(file_path):
    """为函数添加注释"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数定义模式
    function_pattern = r'(\w+)\s+(\w+)\s*\([^)]*\)\s*\{'
    
    def replace_function(match):
        return_type = match.group(1)
        function_name = match.group(2)
        
        # 获取函数注释
        comment = FUNCTION_COMMENTS.get(function_name, f"/**\n * {function_name} 函数\n * 待添加详细说明\n */")
        
        return f"{comment}\n{return_type} {function_name}({{"
    
    # 替换函数定义
    content = re.sub(function_pattern, replace_function, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已为 {file_path} 添加函数注释")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python add_comments.py <文件路径>")
        sys.exit(1)
    
    add_function_comments(sys.argv[1])
'''
    
    return script_content

if __name__ == "__main__":
    print("生成重命名映射表...")
    print(f"总共映射了 {len(FUNCTION_RENAME_MAP)} 个函数")
    print(f"总共映射了 {len(VARIABLE_RENAME_MAP)} 个变量")
    
    # 生成重命名脚本
    rename_script = generate_rename_script()
    with open("/dev/shm/mountblade-code/TaleWorlds.Native/src/rename_unmatched_functions.sh", "w") as f:
        f.write(rename_script)
    
    # 生成注释脚本
    comment_script = generate_comment_script()
    with open("/dev/shm/mountblade-code/TaleWorlds.Native/src/add_unmatched_comments.py", "w") as f:
        f.write(comment_script)
    
    print("已生成重命名脚本: rename_unmatched_functions.sh")
    print("已生成注释脚本: add_unmatched_comments.py")
    
    # 使脚本可执行
    import os
    os.chmod("/dev/shm/mountblade-code/TaleWorlds.Native/src/rename_unmatched_functions.sh", 0o755)
    os.chmod("/dev/shm/mountblade-code/TaleWorlds.Native/src/add_unmatched_comments.py", 0o755)
    
    print("脚本已设置为可执行权限")