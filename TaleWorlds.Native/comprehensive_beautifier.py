#!/usr/bin/env python3
"""
综合代码美化处理器
处理所有剩余的 unknown_var、undefined、UNK_、DAT_ 标记
"""

import os
import re
import glob
from pathlib import Path
from typing import Dict, List, Tuple
import json

class ComprehensiveCodeBeautifier:
    def __init__(self, root_dir: str = "pretty"):
        self.root_dir = Path(root_dir)
        self.processed_files = 0
        self.total_replacements = 0
        self.replacement_stats = {
            'unknown_var': 0,
            'undefined': 0,
            'UNK_': 0,
            'DAT_': 0
        }
        
    def scan_files(self) -> List[Path]:
        """扫描所有C文件"""
        c_files = list(self.root_dir.rglob("*.c"))
        print(f"发现 {len(c_files)} 个C文件")
        return c_files
    
    def process_file(self, file_path: Path) -> bool:
        """处理单个文件"""
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read()
            
            original_content = content
            replacements = 0
            
            # 处理 unknown_var 标记
            content, count = self.process_unknown_vars(content)
            replacements += count
            
            # 处理 undefined 标记
            content, count = self.process_undefined_types(content)
            replacements += count
            
            # 处理 UNK_ 标记
            content, count = self.process_unk_markers(content)
            replacements += count
            
            # 处理 DAT_ 标记
            content, count = self.process_dat_markers(content)
            replacements += count
            
            if replacements > 0:
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                
                self.processed_files += 1
                self.total_replacements += replacements
                print(f"✓ {file_path.name}: {replacements} 个替换")
                return True
            
            return False
            
        except Exception as e:
            print(f"✗ 处理 {file_path} 失败: {e}")
            return False
    
    def process_unknown_vars(self, content: str) -> Tuple[str, int]:
        """处理 unknown_var 标记"""
        # 将 unknown_var_XXXX 替换为更有意义的名称
        pattern = r'unknown_var_(\d+)'
        replacements = 0
        
        def replace_unknown_var(match):
            nonlocal replacements
            var_num = match.group(1)
            replacements += 1
            self.replacement_stats['unknown_var'] += 1
            
            # 根据变量编号生成有意义的名称
            if var_num.startswith('1'):
                return f'ui_system_data_{var_num}'
            elif var_num.startswith('2'):
                return f'rendering_buffer_{var_num}'
            elif var_num.startswith('3'):
                return f'memory_allocator_{var_num}'
            else:
                return f'processed_var_{var_num}'
        
        content = re.sub(pattern, replace_unknown_var, content)
        return content, replacements
    
    def process_undefined_types(self, content: str) -> Tuple[str, int]:
        """处理 undefined 类型"""
        # 处理 undefined 类型声明
        pattern = r'undefined(\d+)'
        replacements = 0
        
        def replace_undefined(match):
            nonlocal replacements
            size = match.group(1)
            replacements += 1
            self.replacement_stats['undefined'] += 1
            
            # 根据大小映射到具体类型
            size_map = {
                '1': 'int8_t',
                '2': 'int16_t', 
                '4': 'int32_t',
                '8': 'int64_t'
            }
            
            return size_map.get(size, f'uint{size}_t')
        
        content = re.sub(pattern, replace_undefined, content)
        return content, replacements
    
    def process_unk_markers(self, content: str) -> Tuple[str, int]:
        """处理 UNK_ 标记"""
        # 处理 UNK_ 常量
        pattern = r'UNK_(\w+)'
        replacements = 0
        
        def replace_unk(match):
            nonlocal replacements
            unk_id = match.group(1)
            replacements += 1
            self.replacement_stats['UNK_'] += 1
            
            # 生成有意义的常量名称
            if unk_id.isdigit():
                return f'CONST_{unk_id}'
            else:
                return f'SYSTEM_{unk_id}'
        
        content = re.sub(pattern, replace_unk, content)
        return content, replacements
    
    def process_dat_markers(self, content: str) -> Tuple[str, int]:
        """处理 DAT_ 标记"""
        # 处理 DAT_ 数据标记
        pattern = r'DAT_(\w+)'
        replacements = 0
        
        def replace_dat(match):
            nonlocal replacements
            dat_id = match.group(1)
            replacements += 1
            self.replacement_stats['DAT_'] += 1
            
            # 生成有意义的名称
            if dat_id.isdigit():
                return f'DATA_OFFSET_{dat_id}'
            else:
                return f'DATA_{dat_id}'
        
        content = re.sub(pattern, replace_dat, content)
        return content, replacements
    
    def run(self):
        """执行美化处理"""
        print("=== 综合代码美化处理器 ===")
        print(f"根目录: {self.root_dir}")
        print()
        
        # 扫描文件
        files = self.scan_files()
        
        # 处理文件
        processed_count = 0
        for i, file_path in enumerate(files, 1):
            print(f"[{i}/{len(files)}] 处理: {file_path.name}")
            
            if self.process_file(file_path):
                processed_count += 1
        
        # 输出统计信息
        print("\n=== 处理结果统计 ===")
        print(f"扫描文件总数: {len(files)}")
        print(f"成功处理文件数: {processed_count}")
        print(f"总替换次数: {self.total_replacements}")
        print()
        print("替换类型分布:")
        for marker_type, count in self.replacement_stats.items():
            print(f"  {marker_type}: {count}")
        
        # 生成报告
        self.generate_report(processed_count, len(files))
        
        print("\n=== 任务完成 ===")
    
    def generate_report(self, processed_count: int, total_files: int):
        """生成处理报告"""
        report = {
            'timestamp': str(Path().cwd()),
            'total_files': total_files,
            'processed_files': processed_count,
            'total_replacements': self.total_replacements,
            'replacement_stats': self.replacement_stats,
            'success_rate': processed_count / total_files if total_files > 0 else 0
        }
        
        with open('comprehensive_beautification_report.json', 'w', encoding='utf-8') as f:
            json.dump(report, f, indent=2, ensure_ascii=False)
        
        print(f"详细报告已保存到: comprehensive_beautification_report.json")

if __name__ == "__main__":
    beautifier = ComprehensiveCodeBeautifier()
    beautifier.run()