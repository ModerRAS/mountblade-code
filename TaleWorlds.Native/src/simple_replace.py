#!/usr/bin/env python3

def replace_dat_variables():
    # 定义变量映射
    variable_map = {
        '_DAT_180c86878': 'SystemMemoryOffsetTable',
        '_DAT_180c8aa08': 'SystemMemoryAddressMask', 
        '_DAT_180c8a988': 'SystemBufferAllocationStatus',
        '_DAT_180c86908': 'SystemMemoryManagementTable',
        '_DAT_180c8ecee': 'SystemInitializationStatusFlag',
        '_DAT_180d49420': 'SystemInputDataBuffer',
        '_DAT_180d4943c': 'SystemInputDataProcessor',
        '_DAT_180d4943e': 'SystemInputDataStatus',
        '_DAT_180d49440': 'SystemInputDataControl',
        '_DAT_180d49444': 'SystemInputFloatValue1',
        '_DAT_180d49448': 'SystemInputFloatValue2',
        '_DAT_180d48d60': 'SystemPerformanceCounter',
        '_DAT_180d49620': 'SystemResourceLimit',
        '_DAT_180d49628': 'SystemResourceStatus',
        '_DAT_180c91020': 'SystemResourcePrimary',
        '_DAT_180c91030': 'SystemResourceSecondary',
        '_DAT_180c8a9a0': 'SystemResourceTertiary',
        '_DAT_180c86898': 'SystemResourceQuaternary',
        '_DAT_180c8a9e0': 'SystemMemoryBoundaryStart',
        '_DAT_180c8a9e8': 'SystemMemoryBoundaryEnd',
        '_DAT_180c8a9f0': 'SystemMemoryBlockSize',
        '_DAT_180c868f0': 'SystemMemoryMutex',
        '_DAT_180c8aa40': 'SystemMemoryAllocator',
        '_DAT_180c8aa48': 'SystemMemorySecondary',
        '_DAT_180c91cf8': 'SystemMemoryTertiary',
        '_DAT_180c91cf0': 'SystemMemoryQuaternary',
        '_DAT_180c8aa58': 'SystemMemoryQuinary',
        '_DAT_180c967dc': 'SystemEventCounter',
        '_DAT_180c8aa60': 'SystemEventBuffer',
        '_DAT_180bf661c': 'SystemTimeoutValue',
        '_DAT_180c96828': 'SystemCallbackFunction',
        '_DAT_180c96810': 'SystemCallbackData',
        '_DAT_180c8ed70': 'SystemMemoryEnd',
    }
    
    # 读取文件
    with open('02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    for old_var, new_var in variable_map.items():
        content = content.replace(old_var, new_var)
    
    # 写回文件
    with open('02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("DAT_变量替换完成")

if __name__ == "__main__":
    replace_dat_variables()