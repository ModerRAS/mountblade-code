import os
import re
import sys

def replace_undefined_types():
    """批量替换 undefined 类型的主函数"""
    
    # 替换规则
    replacement_rules = [
        (r'\bundefined1\b', 'int8_t'),
        (r'\bundefined2\b', 'int16_t'),
        (r'\bundefined4\b', 'int32_t'),
        (r'\bundefined8\b', 'uint64_t'),
        (r'\bundefined\s*\*\b', 'void*'),
        (r'\bundefined\b\s*\*', 'void*'),
        (r'\bundefined\b$', 'void'),
        (r'\bundefined\b(?=\s*[);,])', 'void'),
        (r'\bundefined\b', 'void')  # 最后的通用替换
    ]
    
    # 统计信息
    total_files = 0
    processed_files = 0
    total_replacements = 0
    
    # 遍历所有C文件
    for root, dirs, files in os.walk('pretty'):
        for file in files:
            if file.endswith('.c'):
                file_path = os.path.join(root, file)
                total_files += 1
                
                try:
                    # 读取文件
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()
                    
                    original_content = content
                    file_replacements = 0
                    
                    # 应用所有替换规则
                    for pattern, replacement in replacement_rules:
                        matches = re.findall(pattern, content)
                        if matches:
                            file_replacements += len(matches)
                            content = re.sub(pattern, replacement, content)
                    
                    # 如果有替换，写回文件
                    if content != original_content:
                        with open(file_path, 'w', encoding='utf-8') as f:
                            f.write(content)
                        processed_files += 1
                        total_replacements += file_replacements
                        print(f"✓ 已处理: {file_path} (替换 {file_replacements} 处)")
                    
                except Exception as e:
                    print(f"✗ 处理文件 {file_path} 时出错: {e}")
    
    # 输出统计信息
    print(f"\n批量替换完成！")
    print(f"扫描文件总数: {total_files}")
    print(f"处理文件数: {processed_files}")
    print(f"总替换次数: {total_replacements}")
    
    # 验证替换结果
    remaining_count = 0
    remaining_files = []
    
    for root, dirs, files in os.walk('pretty'):
        for file in files:
            if file.endswith('.c'):
                file_path = os.path.join(root, file)
                try:
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()
                        count = content.count('undefined')
                        if count > 0:
                            remaining_count += count
                            remaining_files.append((file_path, count))
                except Exception as e:
                    print(f"验证文件 {file_path} 时出错: {e}")
    
    print(f"\n验证结果:")
    print(f"剩余 undefined 类型数量: {remaining_count}")
    
    if remaining_count > 0:
        print(f"\n剩余的 undefined 类型分布 (前20个):")
        for file_path, count in remaining_files[:20]:
            print(f"  {file_path}: {count}")
        
        if len(remaining_files) > 20:
            print(f"  ... 还有 {len(remaining_files) - 20} 个文件")

if __name__ == "__main__":
    replace_undefined_types()