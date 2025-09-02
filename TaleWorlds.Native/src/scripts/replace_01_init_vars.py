#!/usr/bin/env python3
import re

def replace_variables_in_file():
    """替换01_initialization.c文件中的变量名"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量替换映射
    replacements = [
        # 布尔变量
        ('bVar1', 'isByteValid'),
        ('bVar2', 'isSystemActive'),
        ('bVar3', 'isOperationComplete'),
        ('bVar4', 'isResourceAvailable'),
        ('bVar5', 'isMemoryReady'),
        ('bVar6', 'isThreadActive'),
        ('bVar7', 'isDataValid'),
        ('bVar8', 'isConfigValid'),
        ('bVar9', 'isStatusValid'),
        ('bVar10', 'isMemoryEqual'),
        ('bVar11', 'isAddressMatch'),
        ('bVar12', 'isHashEntryValid'),
        ('bVar13', 'isDebugModeEnabled'),
        ('bVar14', 'isSilentModeEnabled'),
        ('bVar15', 'isSystemInitialized'),
        ('bVar16', 'isResourceInitialized'),
        ('bVar17', 'isMemoryInitialized'),
        ('bVar18', 'isThreadInitialized'),
        ('bVar19', 'isDataInitialized'),
        ('bVar20', 'isConfigurationInitialized'),
        ('bVar21', 'isAllocationComplete'),
        ('bVar22', 'isCleanupComplete'),
        ('bVar23', 'isValidationComplete'),
        ('bVar24', 'isOperationComplete'),
        ('bVar25', 'isProcessingComplete'),
        ('bVar26', 'isSystemResourceReady'),
        ('bVar27', 'isMemoryResourceReady'),
        ('bVar28', 'isThreadResourceReady'),
        ('bVar29', 'isDataResourceReady'),
        ('bVar30', 'isConfigResourceReady'),
        ('bVar31', 'isSystemResourceValid'),
        ('bVar36', 'isResourceNodeValid'),
        ('bVar43', 'isSystemNodeValid'),
        ('bVar44', 'isSystemBusy'),
        ('bVar47', 'isSystemDataValid'),
        ('bVar48', 'isSystemHashValid'),
        ('bVar50', 'isSystemIndexValid'),
        
        # 字符变量
        ('cVar1', 'charStatus'),
        ('cVar2', 'charResult'),
        ('cVar3', 'charFlag'),
        ('cVar4', 'charCode'),
        ('cVar5', 'charValue'),
        ('cVar6', 'charSignal'),
        ('cVar7', 'charBuffer'),
        ('cVar8', 'charInput'),
        ('cVar9', 'charOutput'),
        
        # 字节指针变量
        ('pbVar1', 'bytePointer'),
        ('pbVar2', 'byteBufferPtr'),
        ('pbVar3', 'byteDataPtr'),
        ('pbVar4', 'byteResourcePtr'),
        ('pbVar5', 'byteMemoryPtr'),
        ('pbVar6', 'byteSystemPtr'),
        ('pbVar7', 'byteConfigPtr'),
        ('pbVar8', 'byteStatusPtr'),
        ('pbVar9', 'byteFlagPtr'),
        ('pbVar10', 'byteValuePtr'),
        ('pbVar11', 'byteHandlePtr'),
        ('pbVar12', 'byteContextPtr'),
        ('pbVar13', 'byteThreadPtr'),
        ('pbVar14', 'byteDataPtr'),
        ('pbVar15', 'byteResourcePtr'),
        ('pbVar16', 'byteMemoryPtr'),
        ('pbVar17', 'byteSystemPtr'),
        ('pbVar18', 'byteConfigPtr'),
        ('pbVar19', 'byteStatusPtr'),
        ('pbVar20', 'byteFlagPtr'),
        
        # 字符指针变量
        ('pcVar1', 'charPointer'),
        ('pcVar2', 'charBufferPtr'),
        ('pcVar3', 'charDataPtr'),
        ('pcVar4', 'charResourcePtr'),
        ('pcVar5', 'charMemoryPtr'),
        ('pcVar6', 'charSystemPtr'),
        ('pcVar7', 'charConfigPtr'),
        ('pcVar8', 'charStatusPtr'),
        ('pcVar9', 'charFlagPtr'),
        ('pcVar10', 'charValuePtr'),
        ('pcVar11', 'charHandlePtr'),
        ('pcVar12', 'charContextPtr'),
        ('pcVar13', 'charThreadPtr'),
        ('pcVar14', 'charDataPtr'),
        ('pcVar15', 'charResourcePtr'),
        ('pcVar16', 'charMemoryPtr'),
        ('pcVar17', 'charSystemPtr'),
        ('pcVar18', 'charConfigPtr'),
        ('pcVar19', 'charStatusPtr'),
        ('pcVar20', 'charFlagPtr'),
        ('pcVar21', 'charInputPtr'),
        ('pcVar22', 'charOutputPtr'),
        ('pcVar23', 'charSignalPtr'),
        ('pcVar24', 'charCodePtr'),
        ('pcVar25', 'charResultPtr'),
        ('pcVar26', 'charStatePtr'),
        ('pcVar27', 'charModePtr'),
        ('pcVar28', 'charTypePtr'),
        ('pcVar29', 'charIndexPtr'),
        ('pcVar30', 'charCountPtr'),
    ]
    
    original_content = content
    
    # 应用替换
    for old_var, new_var in replacements:
        # 使用单词边界确保只匹配完整的变量名
        pattern = r'\b' + re.escape(old_var) + r'\b'
        content = re.sub(pattern, new_var, content)
    
    # 写回文件
    if content != original_content:
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"成功替换了{len(replacements)}个变量名")
        return True
    else:
        print("没有找到需要替换的变量")
        return False

if __name__ == "__main__":
    replace_variables_in_file()