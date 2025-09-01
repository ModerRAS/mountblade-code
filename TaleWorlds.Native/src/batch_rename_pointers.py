#!/usr/bin/env python3
"""
批量重命名00_data_definitions.h文件中的UnknownDataPointer变量
"""

import re

def rename_unknown_pointers():
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 创建重命名映射
    rename_map = {
        'UnknownDataPointer180a22d08': 'SystemMemoryBufferManagerPointer',
        'UnknownDataPointer180a22ce8': 'SystemMemoryCachePointer',
        'UnknownDataPointer180a22cc8': 'SystemMemoryHeapPointer',
        'UnknownDataPointer180a22db0': 'SystemMemoryStackPointer',
        'UnknownDataPointer180a22d88': 'SystemMemoryPagePointer',
        'UnknownDataPointer180a22d68': 'SystemMemoryBlockPointer',
        'UnknownDataPointer180a22e40': 'SystemMemorySegmentPointer',
        'UnknownDataPointer180a22e20': 'SystemMemoryRegionPointer',
        'UnknownDataPointer180a22df8': 'SystemMemoryArenaPointer',
        'UnknownDataPointer180a22dd0': 'SystemMemoryChunkPointer',
        'UnknownDataPointer180a22eb0': 'SystemMemoryFramePointer',
        'UnknownDataPointer180a22e90': 'SystemMemorySlotPointer',
        'UnknownDataPointer180a22e70': 'SystemMemoryBankPointer',
        'UnknownDataPointer180a22e58': 'SystemMemoryVaultPointer',
        'UnknownDataPointer180a22f28': 'SystemMemoryStoragePointer',
        'UnknownDataPointer180a22f10': 'SystemMemoryContainerPointer',
        'UnknownDataPointer180a22ef8': 'SystemMemoryHolderPointer',
        'UnknownDataPointer180a22ed8': 'SystemMemoryReservoirPointer',
        'UnknownDataPointer180a0f5b8': 'SystemMemoryRepositoryPointer',
        'UnknownDataPointer180a0f190': 'SystemMemoryWarehousePointer',
        'UnknownDataPointer180a0f168': 'SystemMemoryArchivePointer',
        'UnknownDataPointer180a0f188': 'SystemMemoryDatabasePointer',
        'UnknownDataPointer180a0f178': 'SystemMemoryRegistryPointer',
        'UnknownDataPointer180a24c50': 'SystemMemoryCatalogPointer',
        'UnknownDataPointer180a24c60': 'SystemMemoryIndexPointer',
        'UnknownDataPointer180a24bd0': 'SystemMemoryDirectoryPointer',
        'UnknownDataPointer180a24bf0': 'SystemMemoryLibraryPointer',
        'UnknownDataPointer180a24c10': 'SystemMemoryCollectionPointer',
        'UnknownDataPointer180a24c30': 'SystemMemorySetPointer',
        'UnknownDataPointer180a24d58': 'SystemMemoryArrayPointer',
        'UnknownDataPointer180a24d80': 'SystemMemoryListPointer',
        'UnknownDataPointer180a24da8': 'SystemMemoryQueuePointer',
        'UnknownDataPointer180a24dc0': 'SystemMemoryStackManagerPointer',
        'UnknownDataPointer180a27a58': 'SystemMemoryDequePointer',
        'UnknownDataPointer180a27a6c': 'SystemMemoryVectorPointer',
        'UnknownDataPointer180a27a70': 'SystemMemoryMapPointer',
        'UnknownDataPointer180a01300': 'SystemMemoryHashSetPointer',
        'UnknownDataPointer180a01330': 'SystemMemoryTreeSetPointer'
    }
    
    # 应用重命名
    for old_name, new_name in rename_map.items():
        content = content.replace(f'void* {old_name};', f'void* {new_name};')
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"重命名了 {len(rename_map)} 个变量")

if __name__ == '__main__':
    rename_unknown_pointers()