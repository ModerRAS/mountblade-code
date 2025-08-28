import os
import re

def replace_undefined_in_file(file_path):
    """替换单个文件中的 undefined 类型"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        original_content = content
        
        # 替换规则
        replacements = [
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
        
        # 应用替换规则
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        # 如果内容有变化，则写入文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True
        return False
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

# 查找所有包含 undefined 的 C 文件
c_files = []
for root, dirs, files in os.walk('pretty'):
    for file in files:
        if file.endswith('.c'):
            file_path = os.path.join(root, file)
            try:
                with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()
                    if 'undefined' in content:
                        c_files.append(file_path)
            except Exception as e:
                print(f"读取文件 {file_path} 时出错: {e}")

total_files = len(c_files)
print(f"发现 {total_files} 个文件需要处理")

# 处理每个文件
processed_count = 0
for i, file_path in enumerate(c_files, 1):
    print(f"处理文件 {i}/{total_files}: {file_path}")
    
    if replace_undefined_in_file(file_path):
        processed_count += 1
        print(f"✓ 已处理: {file_path}")
    else:
        print(f"- 无需处理: {file_path}")

print(f"\n批量替换完成！")
print(f"总共处理了 {processed_count} 个文件")

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

print(f"剩余 undefined 类型数量: {remaining_count}")

if remaining_count > 0:
    print("\n剩余的 undefined 类型分布（前20个）：")
    for file_path, count in remaining_files[:20]:
        print(f"  {file_path}: {count}")
    
    if len(remaining_files) > 20:
        print(f"  ... 还有 {len(remaining_files) - 20} 个文件")