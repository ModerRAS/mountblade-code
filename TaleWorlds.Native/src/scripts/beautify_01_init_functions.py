#!/usr/bin/env python3
"""
美化01_initialization.c文件中的FUN_函数名
将FUN_函数重命名为具有语义的名称
"""

import re
import sys

def read_file(filename):
    """读取文件内容"""
    try:
        with open(filename, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(filename, content):
    """写入文件内容"""
    try:
        with open(filename, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def replace_functions(content):
    """替换FUN_函数名为语义化名称"""
    
    # 函数重命名映射
    function_mapping = {
        # 系统初始化相关函数
        'FUN_18004b730': 'SystemInitializationHandler',
        'FUN_1800b4550': 'SystemInputManagerInitializer',
        'FUN_1800ae730': 'SystemResourceProcessor',
        'FUN_18004b790': 'SystemEntryPointInitializer',
        'FUN_180057010': 'SystemMemoryReleaseHandler',
        'FUN_180058370': 'SystemMemoryBlockCleanup',
        'FUN_180058420': 'SystemMemoryContextCleanup',
        'FUN_18004bd10': 'SystemResourcePointerHandler',
        'FUN_180142b20': 'SystemMemoryAllocatorEx',
        'FUN_18004bf50': 'SystemQueueItemProcessor',
        'FUN_180057170': 'SystemStateResetHandler',
        'FUN_18005e570': 'SystemAllocationFlagsProcessor',
        'FUN_180174950': 'SystemGlobalInitializer',
        'FUN_180057d70': 'SystemHandleProcessor',
        'FUN_180057550': 'SystemResourceManager',
        'FUN_1800578a0': 'SystemContextManager',
        'FUN_180057830': 'SystemMemoryManager',
        'FUN_18005d260': 'SystemResourceUpdater',
        'FUN_18005d580': 'SystemCleanupHandler',
        'FUN_1800590b0': 'SystemAllocationFlagsHandler',
        'FUN_18005d1f0': 'SystemResourceContextHandler',
        'FUN_180092820': 'SystemRenderManager',
        'FUN_18005ca20': 'SystemNodeManager',
        'FUN_1801725e0': 'SystemRenderProcessor',
        'FUN_1800a3880': 'SystemTextureManager',
        'FUN_180062300': 'SystemContextManagerEx',
        'FUN_180628380': 'SystemDataProcessor',
        'FUN_1806277c0': 'SystemDataWriter',
        'FUN_180627ae0': 'SystemDataAllocator',
        'FUN_18005c8a0': 'SystemMemoryBufferHandler',
        'FUN_180171f10': 'SystemStatusFlagsHandler',
        'FUN_18020e0e0': 'SystemEventProcessor',
        'FUN_18020e840': 'SystemEventHandler',
        'FUN_18005ea90': 'SystemInputEventHandler',
        'FUN_1802567b0': 'SystemResourceManagerEx',
        'FUN_18008d660': 'SystemNodeProcessor',
        'FUN_18005e630': 'SystemAllocationTemplateHandler',
        'FUN_18005e890': 'SystemMemoryAllocatorEx',
        'FUN_180126380': 'SystemResourceReleaseHandler',
        'FUN_180095420': 'SystemResourceCleanupHandler',
        'FUN_18016cef0': 'SystemMemoryFinalizer',
        'FUN_18005e6a0': 'SystemMemoryAllocationHandler',
        'FUN_18006eb30': 'SystemAllocationFinalizer',
        'FUN_18062bd50': 'SystemStringProcessor',
        'FUN_180050b00': 'SystemMainInitializer',
        'FUN_180050b30': 'SystemSubInitializer',
        'FUN_18004be90': 'SystemGraphicsContextHandler',
        'FUN_1801edeb0': 'SystemRenderMemoryAllocator',
        'FUN_18004e5f0': 'SystemFlagsHandler',
        'FUN_1800572d0': 'SystemMemoryRegionHandler',
        'FUN_180091020': 'SystemTimeHandler',
        'FUN_1801ed510': 'SystemTimeProcessor',
        'FUN_180160500': 'SystemSecurityHandler',
        'FUN_180051d40': 'SystemResourceManagerDual',
        'FUN_1806279c0': 'SystemDataInitializer',
        'FUN_180057110': 'SystemResourceInitializer',
        'FUN_180059820': 'SystemResourceHandlerEx',
        'FUN_180628d60': 'SystemMemoryRegionProcessor',
        'FUN_1800524c0': 'SystemMemoryPointerHandler',
        'FUN_180052940': 'SystemFloatParameterHandler',
        'FUN_1808fcb90': 'SystemDataLockHandler',
        'FUN_1808fcb30': 'SystemDataUnlockHandler',
        'FUN_180052ef0': 'SystemResourceHandlerWithFlags',
        'FUN_18004caf0': 'SystemResourceHandler',
        'FUN_18005c650': 'SystemStackProcessor',
        'FUN_18005c2a0': 'SystemResourceAllocator',
        'FUN_18005e370': 'SystemResourceDeallocator',
        'FUN_180053200': 'SystemDataWriterEx',
        'FUN_180623de0': 'SystemDataBufferInitializer',
        'FUN_1800533d0': 'SystemResourceHandlerWithParam',
        'FUN_180060680': 'SystemDataBufferProcessor',
        'FUN_180627910': 'SystemBufferWriter',
        'FUN_18062b8b0': 'SystemMemoryCopyHandler',
        'FUN_180052200': 'SystemResourceHandlerWithParamEx',
        'FUN_180627c50': 'SystemDataBufferInitializerEx',
        'FUN_1801954d0': 'SystemResourceAllocatorEx',
        'FUN_18019e140': 'SystemEventProcessorEx',
        'FUN_1801426a0': 'SystemFlagsProcessor',
        'FUN_180628ca0': 'SystemAllocationFlagsGenerator',
        'FUN_1801a6440': 'SystemResourceProcessorEx',
        'FUN_18019e260': 'SystemResourceFinalizer',
        'FUN_180199500': 'SystemResourceValidator',
        'FUN_1801a2ea0': 'SystemResourceConfigurator',
        'FUN_1800547b0': 'SystemConfigurationHandler',
        'FUN_180624a00': 'SystemStringValidator',
        'FUN_18062c5f0': 'SystemStringProcessorEx',
        'FUN_18004b100': 'SystemResourceInitializerEx',
        'FUN_180628040': 'SystemDataWriterEx',
        'FUN_180624910': 'SystemStringFinalizer',
        'FUN_180061db0': 'SystemResourceLockHandler',
        'FUN_180061be0': 'SystemResourceUnlockHandler',
        'FUN_180624af0': 'SystemStringValidatorEx',
        'FUN_180629a40': 'SystemDataWriterEx',
        'FUN_180054360': 'SystemResourceHandlerWithParamDual',
        'FUN_18005c1c0': 'SystemResourceProcessorDual',
        'FUN_180055050': 'SystemResourceSetupHandler',
        'FUN_18005c090': 'SystemResourceAllocatorDual',
        'FUN_18015c450': 'SystemResourceAllocatorTriple',
        'FUN_180055e10': 'SystemResourceHandlerWithOffset',
        'FUN_180058c20': 'SystemResourceProcessorWithOffset',
        'FUN_180055e30': 'SystemResourceHandlerWithOffsetEx',
        'FUN_180058210': 'SystemResourceHandlerWithOffsetDual',
        'FUN_180055e60': 'SystemResourceHandlerWithOffsetTriple',
        'FUN_180055e80': 'SystemResourceHandlerWithOffsetQuad',
        'FUN_180055ed0': 'SystemResourceHandlerWithOffsetQuintuple',
        'FUN_180055f20': 'SystemResourceHandlerWithOffsetSextuple',
        'FUN_180055f50': 'SystemResourceHandlerWithOffsetSeptuple',
        'FUN_180055f70': 'SystemResourceHandlerWithOffsetOctuple',
        'FUN_180055fa0': 'SystemDataStructureInitializer',
        'FUN_1801299b0': 'SystemDataStructureProcessor',
        'FUN_18010f010': 'SystemDataStructureWriter',
        'FUN_18012cfe0': 'SystemDataStructureFinalizer',
        'FUN_180056150': 'SystemResourceHandlerRecursive',
        'FUN_180058a20': 'SystemResourceProcessorRecursive',
        'FUN_180056410': 'SystemResourceHandlerRecursiveEx',
        'FUN_180057340': 'SystemResourceResetHandler',
        'FUN_1800565f0': 'SystemResourceHandlerWithBuffer',
        'FUN_1800567c0': 'SystemResourceHandlerWithBufferEx',
        'FUN_180056810': 'SystemResourceHandlerWithBufferTriple',
        'FUN_180056b30': 'SystemResourceHandlerWithBufferQuad',
        'FUN_1800b4ec0': 'SystemResourceHandlerWithBufferQuintuple',
        'FUN_180056c50': 'SystemResourceHandlerWithBufferSextuple',
        'FUN_18005ce30': 'SystemResourceHandlerWithBufferSeptuple',
        'FUN_180056de0': 'SystemResourceHandlerWithBufferOctuple',
        'FUN_180056e10': 'SystemResourceHandlerWithBufferNonuple',
        'FUN_180056e40': 'SystemResourceHandlerWithBufferDecuple',
        'FUN_180056e60': 'SystemResourceHandlerWithBufferUndecuple',
        'FUN_180056e90': 'SystemResourceHandlerWithBufferDuodecuple',
        'FUN_180059ba0': 'SystemResourceHandlerWithBufferTredecuple',
        'FUN_180056f10': 'SystemResourceHandlerWithBufferQuattuordecuple',
        'FUN_180056f70': 'SystemResourceHandlerWithBufferQuindecuple',
        'FUN_180057029': 'SystemResourceHandlerWithBufferSexdecuple',
        'FUN_180086670': 'SystemResourceHandlerWithBufferSeptendecuple',
        'FUN_1800868d0': 'SystemResourceHandlerWithBufferOctodecuple',
        'FUN_180086600': 'SystemResourceHandlerWithBufferNovemdecuple',
        'FUN_180086960': 'SystemResourceHandlerWithBufferVigintuple',
        'FUN_180086a00': 'SystemResourceHandlerWithBufferUnvigintuple',
        'FUN_180086740': 'SystemResourceHandlerWithBufferDuovigintuple',
        'FUN_180086aa0': 'SystemResourceHandlerWithBufferTrevigintuple',
        'FUN_1800900c0': 'SystemResourceHandlerWithBufferQuattuorvigintuple',
        'FUN_180086830': 'SystemResourceHandlerWithBufferQuinvigintuple',
        'FUN_180090020': 'SystemResourceHandlerWithBufferSexvigintuple',
        'FUN_180086b40': 'SystemResourceHandlerWithBufferSeptenvigintuple',
    }
    
    # 执行替换
    for old_name, new_name in function_mapping.items():
        # 替换函数调用
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
        # 替换函数定义注释
        content = re.sub(r'// 函数:.*?' + old_name, '// 函数: ' + new_name, content)
    
    return content

def main():
    """主函数"""
    filename = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("开始美化01_initialization.c文件...")
    
    # 读取文件
    content = read_file(filename)
    if content is None:
        return False
    
    # 替换函数名
    content = replace_functions(content)
    
    # 写入文件
    if write_file(filename, content):
        print("文件美化完成！")
        return True
    else:
        return False

if __name__ == '__main__':
    success = main()
    sys.exit(0 if success else 1)