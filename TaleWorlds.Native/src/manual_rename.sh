#!/bin/bash

# 手动处理 06_utilities.c 文件中的 FUN_ 函数重命名
# 基于实际文件分析创建的重命名映射

echo "开始处理 06_utilities.c 文件的函数重命名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 创建函数重命名映射文件
cat > /tmp/function_rename_map.txt << 'EOF'
# 主要处理函数
FUN_18089b31f -> ResourceDataValidator
FUN_18089b380 -> ResourceDataProcessor
FUN_18089b7d0 -> ResourceChecksumValidator
FUN_18089b813 -> ResourceChecksumValidatorAlt1
FUN_18089b86d -> ResourceChecksumValidatorAlt2
FUN_18089b896 -> ResourceChecksumValidatorAlt3
FUN_18089c030 -> ResourceArrayLoader
FUN_18089c1fb -> ResourceDataHandler
FUN_18089c22e -> ResourceDataHandlerAlt1
FUN_18089c2d8 -> ResourceDataProcessorAlt1
FUN_18089c630 -> ResourceDataManager
FUN_18089c69d -> ResourceDataManagerAlt1
FUN_18089c86d -> ResourceDataManagerAlt2
FUN_18089c872 -> ResourceDataManagerAlt3
FUN_18089c94a -> ResourceDataProcessorAlt2
FUN_18089cc80 -> ResourceDataVerifier
FUN_18089ccb9 -> ResourceDataVerifierAlt1
FUN_18089ce30 -> ResourceDataLoader
FUN_18089ce60 -> ResourceDataLoaderAlt1
FUN_18089cfd6 -> ResourceDataLoaderAlt2
FUN_18089d0f0 -> ResourceDataProcessorAlt3
FUN_18089d171 -> ResourceDataProcessorAlt4
FUN_18089d193 -> ResourceDataProcessorAlt5
FUN_18089dcf0 -> ResourceDataValidatorAlt1
FUN_18089dd54 -> ResourceDataValidatorAlt2
FUN_18089dd78 -> ResourceDataValidatorAlt3
FUN_18089dda2 -> ResourceDataValidatorAlt4
FUN_18089de39 -> ResourceDataValidatorAlt5
FUN_18089de72 -> ResourceDataValidatorAlt6
FUN_18089df40 -> ResourceDataHandlerAlt1
FUN_18089dfc1 -> ResourceDataHandlerAlt2
FUN_18089dfe4 -> ResourceDataHandlerAlt3
FUN_18089e043 -> ResourceDataHandlerAlt4
FUN_18089e0d0 -> ResourceDataHandlerAlt5
FUN_18089e230 -> ResourceDataProcessorAlt6
FUN_18089e297 -> ResourceDataProcessorAlt7
FUN_18089e2be -> ResourceDataProcessorAlt8
FUN_18089e2e8 -> ResourceDataProcessorAlt9
FUN_18089e4f0 -> ResourceDataValidatorAlt7
FUN_18089e558 -> ResourceDataValidatorAlt8
FUN_18089e624 -> ResourceDataValidatorAlt9
FUN_18089e820 -> ResourceDataManagerAlt4
FUN_18089e87d -> ResourceDataManagerAlt5
FUN_18089e9af -> ResourceDataProcessorAlt10
FUN_18089ede0 -> ResourceDataHandlerAlt6
FUN_18089ee64 -> ResourceDataHandlerAlt7
FUN_18089ef40 -> ResourceDataHandlerAlt8
FUN_18089f0b0 -> ResourceDataHandlerAlt9

# 辅助函数
FUN_180891af0 -> DataInitializer
FUN_180891ca0 -> DataProcessor
FUN_180891de0 -> DataValidator
FUN_180894300 -> DataChecker
FUN_180895360 -> DataAnalyzer
FUN_1808974f4 -> ErrorHandler
FUN_1808975e0 -> StatusChecker
FUN_180897afe -> ErrorHandlerAlt1
FUN_180897b0e -> ErrorHandlerAlt2
FUN_180897b16 -> ErrorHandlerAlt3
FUN_180898b40 -> DataSearcher
FUN_180898eb0 -> ResourceFinder
FUN_180898ef0 -> ResourceLocator
FUN_180898fc0 -> ResourceFetcher
FUN_180899220 -> ResourceValidator
FUN_1808993e0 -> ResourceCalculator
FUN_180899c60 -> ResourceAccessor
FUN_18089d490 -> DataAuthenticator

# 资源处理函数
FUN_1808a2740 -> ResourceHashGetter
FUN_1808a2890 -> ResourceHashCalculator
FUN_1808a2e00 -> ResourceHashProcessor
FUN_1808a4a20 -> ResourceDataFetcher
FUN_1808a54c0 -> ResourceDataReader
FUN_1808a5630 -> ResourceDataBuilder
FUN_1808a5a90 -> ResourceDataScanner
FUN_1808a5d60 -> ResourceDataExtractor
FUN_1808a6150 -> ResourceDataCompiler
FUN_1808a62d0 -> ResourceDataOptimizer
FUN_1808a7c40 -> ResourceDataAggregator
FUN_1808a79f0 -> ResourceDataRetriever
FUN_1808a7f40 -> ResourceDataFormatter
FUN_1808a8120 -> ResourceDataTransformer
FUN_1808a84c0 -> ResourceDataChecker
FUN_1808a8620 -> ResourceDataMonitor
FUN_1808afc70 -> ResourceDataAuthenticator
FUN_1808acb90 -> ResourceDataProcessorExt
FUN_1808ad130 -> ResourceDataManagerExt
FUN_1808ad600 -> ResourceDataHandlerExt
FUN_1808ad9d0 -> ResourceDataOptimizerExt
FUN_1808aec50 -> ResourceDataValidatorExt
FUN_1808af280 -> ResourceDataVerifierExt
FUN_1808af2e0 -> ResourceDataFetcherExt
FUN_1808af8b0 -> ResourceDataCalculatorExt
FUN_1808afd90 -> ResourceDataLocatorExt
FUN_1808b00b0 -> ResourceDataCheckerExt
FUN_1808b0490 -> ResourceDataAnalyzerExt
FUN_1808ac750 -> ResourceDataAccessorExt
FUN_1808aca30 -> ResourceDataRetrieverExt
FUN_1808a2d50 -> ResourceDataBuilderExt
FUN_1808a5150 -> ResourceDataScannerExt
FUN_1808a71c0 -> ResourceDataCompilerExt
FUN_1808de650 -> ResourceDataExtractorExt
FUN_1808ddd30 -> ResourceDataOptimizerExt
FUN_1808ddf80 -> CleanupHandler
FUN_18084c150 -> MemoryManager
FUN_18084c470 -> DataBufferManager
FUN_180882f00 -> ArrayProcessor
FUN_180883750 -> DataValidatorExt
EOF

echo "函数映射表已创建"

# 创建Python脚本来处理重命名
cat > /tmp/rename_functions.py << 'EOF'
#!/usr/bin/env python3
import re
import sys

def rename_functions_in_file(file_path, mapping_file):
    # 读取映射文件
    mappings = {}
    with open(mapping_file, 'r') as f:
        for line in f:
            line = line.strip()
            if line and not line.startswith('#'):
                parts = line.split(' -> ')
                if len(parts) == 2:
                    old_name = parts[0].strip()
                    new_name = parts[1].strip()
                    mappings[old_name] = new_name
    
    # 读取原始文件
    with open(file_path, 'r') as f:
        content = f.read()
    
    # 统计替换次数
    replacement_count = 0
    
    # 应用每个替换
    for old_name, new_name in mappings.items():
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        new_content = re.sub(pattern, new_name, content)
        if new_content != content:
            replacement_count += 1
            print(f"替换: {old_name} -> {new_name}")
        content = new_content
    
    # 写回文件
    with open(file_path, 'w') as f:
        f.write(content)
    
    print(f"总共替换了 {replacement_count} 个函数名")
    return replacement_count

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    mapping_file = "/tmp/function_rename_map.txt"
    
    rename_functions_in_file(file_path, mapping_file)
    print("函数重命名完成")
EOF

chmod +x /tmp/rename_functions.py

echo "Python脚本已创建"
echo "运行 python3 /tmp/rename_functions.py 来执行重命名"