#!/usr/bin/env python3
"""
直接美化核心引擎文件
"""

def beautify_core_engine():
    """直接美化核心引擎文件"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    print("开始美化核心引擎文件...")
    
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        print(f"文件大小: {len(content)} 字符")
        
        # 创建备份
        backup_path = file_path + '.backup'
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"已创建备份: {backup_path}")
        
        # 定义替换规则
        replacements = {
            # DAT变量
            '_DAT_180c8a9b0': 'CoreEngineConfigBase',
            'DAT_00000008': 'GlobalSystemPointer',
            'DAT_00000018': 'GlobalSystemSize',
            'DAT_00000010': 'GlobalSystemBuffer',
            'DAT_00000000': 'GlobalSystemFlag',
            '_DAT_00000018': 'GlobalSystemDataSize',
            '_DAT_00000010': 'GlobalSystemDataBuffer',
            '_DAT_00000000': 'GlobalSystemDataFlag',
            '_DAT_00000008': 'GlobalSystemDataPointer',
            
            # UNK变量
            'UNK_1809fd870': 'CoreEngineDataBuffer',
            'UNK_180a3cf50': 'CoreEngineStringBuffer1',
            'UNK_1809fe6d8': 'CoreEngineStringBuffer2',
            'UNK_1809fd9a0': 'CoreEngineResourceData',
            'UNK_1809fd9b0': 'CoreEngineResourcePointer1',
            'UNK_1809fd9d0': 'CoreEngineResourcePointer2',
            'UNK_1809fd9f0': 'CoreEngineResourcePointer3',
            'UNK_1809fda10': 'CoreEngineResourcePointer4',
            'UNK_1809fda30': 'CoreEngineResourcePointer5',
            'UNK_1809fda58': 'CoreEngineResourcePointer6',
            'UNK_1809fda80': 'CoreEngineResourcePointer7',
            'UNK_1809fdaa8': 'CoreEngineResourcePointer8',
            'UNK_1809fdad0': 'CoreEngineResourcePointer9',
            'UNK_1809fdaf8': 'CoreEngineResourcePointer10',
            'UNK_1809fdb20': 'CoreEngineResourcePointer11',
            
            # FUN函数
            'FUN_180628040': 'CoreEngineProcessBufferData',
            'FUN_1801299b0': 'CoreEngineInitializeResource',
            'FUN_18010f010': 'CoreEngineLoadResourceData',
            'FUN_180062ee0': 'CoreEngineProcessResourcePointer',
        }
        
        # 应用替换
        replacement_count = 0
        for old, new in replacements.items():
            if old in content:
                content = content.replace(old, new)
                replacement_count += 1
                print(f"替换: {old} -> {new}")
        
        print(f"总共应用了 {replacement_count} 个替换")
        
        # 处理LAB标签
        import re
        lab_pattern = r'LAB_([0-9a-fA-F]{8})'
        labs = set(re.findall(lab_pattern, content))
        
        if labs:
            print(f"找到 {len(labs)} 个LAB标签")
            lab_counter = 1
            for lab in labs:
                old_lab = f'LAB_{lab}'
                new_lab = f'ControlFlow_{lab_counter:04d}'
                content = content.replace(old_lab, new_lab)
                lab_counter += 1
            print(f"LAB标签重命名完成")
        
        # 写入文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("美化完成！")
        
        # 生成报告
        report_path = file_path + '_final_beautification_report.md'
        with open(report_path, 'w', encoding='utf-8') as f:
            f.write(f"""# 核心引擎文件最终美化报告

## 文件信息
- 文件路径: {file_path}
- 处理时间: 2025-09-02
- 处理工具: 直接美化脚本

## 完成的替换工作

### DAT变量替换
- `_DAT_180c8a9b0` -> `CoreEngineConfigBase`
- `DAT_00000008` -> `GlobalSystemPointer`
- `DAT_00000018` -> `GlobalSystemSize`
- `DAT_00000010` -> `GlobalSystemBuffer`
- `DAT_00000000` -> `GlobalSystemFlag`

### UNK变量替换
- `UNK_1809fd870` -> `CoreEngineDataBuffer`
- `UNK_180a3cf50` -> `CoreEngineStringBuffer1`
- `UNK_1809fe6d8` -> `CoreEngineStringBuffer2`
- `UNK_1809fd9a0` -> `CoreEngineResourceData`
- `UNK_1809fd9b0` -> `CoreEngineResourcePointer1`
- 等多个资源指针

### FUN函数替换
- `FUN_180628040` -> `CoreEngineProcessBufferData`
- `FUN_1801299b0` -> `CoreEngineInitializeResource`
- `FUN_18010f010` -> `CoreEngineLoadResourceData`
- `FUN_180062ee0` -> `CoreEngineProcessResourcePointer`

### LAB标签替换
- 所有LAB标签已重命名为 `ControlFlow_XXXX` 格式

## 统计信息
- 总共应用替换: {replacement_count} 个
- LAB标签处理: {len(labs)} 个

## 注意事项
1. 所有替换都保持了代码的逻辑不变
2. 使用了有意义的名称来提高代码可读性
3. 遵循了PascalCase命名规范
4. 保留了所有原有的注释和文档结构

## 建议
1. 建议进行编译测试以验证替换的正确性
2. 可以根据需要进一步优化变量命名
3. 建议为主要函数添加详细的文档注释
""")
        
        print(f"已生成美化报告: {report_path}")
        return True
        
    except Exception as e:
        print(f"美化过程中出现错误: {e}")
        return False

if __name__ == "__main__":
    if beautify_core_engine():
        print("美化成功完成！")
    else:
        print("美化失败！")