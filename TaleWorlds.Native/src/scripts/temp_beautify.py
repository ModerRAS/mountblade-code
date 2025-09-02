import re

# ûÖ‡ö
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r') as f:
    content = f.read()

# úÿbWx
replacements = {
    'UNK_180a0cea0': 'BufferControlBlock',
    'UNK_180a0cf60': 'BufferMemoryPool',
    'UNK_180a0cf4c': 'BufferMemoryAllocator',
    'UNK_180a0cfa0': 'BufferMemoryManager',
    'UNK_180a0d348': 'ResourceCacheManager',
    'UNK_180a0d350': 'ResourceIndexTable',
    'UNK_180a0d370': 'ResourceMetadata',
    'UNK_180a0d388': 'ResourceHandleManager',
    'UNK_180a0d3a0': 'ResourceReferenceCounter',
    'UNK_180a0d3a8': 'ResourceMemoryPool',
    'UNK_180a0d3b0': 'ResourceLoadingState',
    'UNK_180a0d3c4': 'ResourceCompressionBuffer',
    'UNK_180a0d3dc': 'ResourceValidationHash',
    'UNK_180a0d3c8': 'ResourceSecurityToken',
    'UNK_180a04998': 'ResourceConfigurationData',
    'UNK_180a0d520': 'ResourceStorageManager',
    'UNK_180a0d530': 'SecurityContextManager',
    'UNK_180a0d548': 'SecurityAccessController',
    'UNK_180a0d5f8': 'SecurityValidationEngine',
    'UNK_180a0d5fc': 'SecurityPermissionTable',
    'UNK_180a0d604': 'SecurityAuditLog',
    'UNK_180a0d608': 'SecurityEncryptionKey',
    'UNK_180a0d610': 'SecurityAuthenticationToken',
    'UNK_180a0d658': 'SecurityConfigurationData',
    'UNK_180a0d8e0': 'SecurityMonitorService',
    'UNK_1801eb1d0': 'EncryptionContext',
    'UNK_180a0d980': 'EncryptionKeyManager',
    'UNK_180a0d9b8': 'EncryptionAlgorithmEngine',
    'UNK_180a0d920': 'CompressionContext',
    'UNK_180a0d938': 'CompressionDataBuffer',
    'UNK_180a0d958': 'CompressionAlgorithmState',
    'UNK_180a0d968': 'CompressionResultBuffer',
    'UNK_180a0d9ec': 'CompressionDictionary',
    'UNK_180a0d9f0': 'CompressionMetadata',
    'DAT_180a0d5b8': 'DataProcessingConfig',
    'DAT_180a0d5d0': 'DataProcessingBuffer'
}

# gLÿb
for old_name, new_name in replacements.items():
    content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)

# ™e‡ö
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w') as f:
    f.write(content)

print('ØÏŽŒ')