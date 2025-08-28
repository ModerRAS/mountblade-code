import os
import re

def process_file(file_path):
    """处理单个文件，替换 undefined 类型"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        original_content = content
        
        # 替换规则 - 按优先级排序
        replacements = [
            # 精确匹配带数字的undefined类型
            (r'\bundefined1\b', 'int8_t'),
            (r'\bundefined2\b', 'int16_t'),
            (r'\bundefined4\b', 'int32_t'),
            (r'\bundefined8\b', 'uint64_t'),
            
            # 处理指针类型
            (r'\bundefined\s*\*\b', 'void*'),
            (r'\bundefined\b\s*\*', 'void*'),
            
            # 处理行尾的undefined
            (r'\bundefined\b\s*$', 'void'),
            
            # 处理参数列表中的undefined
            (r'\bundefined\b(?=\s*[),])', 'void'),
            
            # 处理变量声明中的undefined
            (r'\bundefined\b(?=\s+[a-zA-Z_][a-zA-Z0-9_]*)', 'void'),
            
            # 最后处理单独的undefined
            (r'\bundefined\b', 'void')
        ]
        
        # 应用替换规则
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        # 如果有变化，写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True, len([m for m in re.finditer(r'undefined', original_content)])
        
        return False, 0
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False, 0

def main():
    """主处理函数"""
    print("开始批量替换 undefined 类型...")
    
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
                
                # 检查是否包含undefined
                try:
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()
                    
                    if 'undefined' in content:
                        processed, replacements = process_file(file_path)
                        if processed:
                            processed_files += 1
                            total_replacements += replacements
                            print(f"✓ 处理: {file_path} (替换 {replacements} 处)")
                
                except Exception as e:
                    print(f"检查文件 {file_path} 时出错: {e}")
    
    print(f"\n处理完成！")
    print(f"扫描文件总数: {total_files}")
    print(f"处理文件数: {processed_files}")
    print(f"总替换次数: {total_replacements}")
    
    # 验证结果
    remaining_count = 0
    for root, dirs, files in os.walk('pretty'):
        for file in files:
            if file.endswith('.c'):
                file_path = os.path.join(root, file)
                try:
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()
                        remaining_count += content.count('undefined')
                except Exception:
                    pass
    
    print(f"剩余 undefined 类型数量: {remaining_count}")

if __name__ == "__main__":
    main()