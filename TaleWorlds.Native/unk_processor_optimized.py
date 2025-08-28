#!/usr/bin/env python3
"""
高效批量处理UNK_标记的脚本（优化版本）

本脚本用于批量处理代码库中的UNK_标记，使用更高效的算法。
"""

import os
import re
import sys
import json
from pathlib import Path
from typing import Dict, List, Tuple, Set
from datetime import datetime
import multiprocessing
from concurrent.futures import ThreadPoolExecutor, as_completed

class UNKProcessorOptimized:
    def __init__(self, root_dir: str, dry_run: bool = False, max_files: int = None):
        self.root_dir = Path(root_dir)
        self.dry_run = dry_run
        self.max_files = max_files
        self.processed_files = 0
        self.total_unk_vars = 0
        self.renamed_vars = 0
        self.unk_type_map = {}
        self.file_stats = {}
        
        # 优化：预编译正则表达式
        self.unk_pattern = re.compile(r'\b(UNK_[0-9a-fA-F]+)\b')
        self.context_patterns = [
            re.compile(rf'extern.*?{{var_name}}'),
            re.compile(rf'&{{var_name}}'),
            re.compile(rf'{{var_name}}\s*='),
            re.compile(rf'=\s*{{var_name}}'),
            re.compile(rf'{{var_name}}\s*\['),
            re.compile(rf'{{var_name}}\s*\('),
            re.compile(rf'\*\s*{{var_name}}'),
            re.compile(rf'{{var_name}}->'),
            re.compile(rf'\w+\s+{{var_name}}'),
        ]
        
        # 简化命名规则
        self.naming_rules = {
            'global': 'global_var_{index}',
            'state': 'global_state_{index}',
            'data': 'global_data_{index}',
            'config': 'global_config_{index}',
            'error': 'global_error_{index}',
            'system': 'global_system_{index}',
            'unknown': 'unknown_var_{index}'
        }
        
        # 创建备份目录
        self.backup_dir = self.root_dir / 'backup_unk_processing'
        if not self.dry_run:
            self.backup_dir.mkdir(exist_ok=True)
    
    def find_unk_files(self) -> List[Path]:
        """查找所有包含UNK_标记的文件"""
        unk_files = []
        
        for root, dirs, files in os.walk(self.root_dir):
            if 'backup_unk_processing' in root:
                continue
                
            for file in files:
                if file.endswith('.c'):
                    file_path = Path(root) / file
                    try:
                        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                            content = f.read()
                            if 'UNK_' in content:
                                unk_files.append(file_path)
                    except Exception:
                        continue
        
        # 限制文件数量用于测试
        if self.max_files and len(unk_files) > self.max_files:
            unk_files = unk_files[:self.max_files]
        
        return unk_files
    
    def analyze_unk_variables(self, content: str) -> List[Dict]:
        """分析文件中的UNK_变量"""
        # 查找所有UNK_变量
        unk_vars = self.unk_pattern.findall(content)
        
        if not unk_vars:
            return []
        
        # 去重
        unique_unk_vars = list(set(unk_vars))
        
        var_info_list = []
        for unk_var in unique_unk_vars:
            var_info = {
                'name': unk_var,
                'original_name': unk_var,
                'new_name': '',
                'type': 'unknown',
                'usage_count': content.count(unk_var),
                'is_global': 'extern' in content or unk_var in content.split('\n')[0],
                'is_pointer': '&' + unk_var in content or unk_var + '->' in content
            }
            
            # 简化类型判断
            if var_info['is_global']:
                if 'state' in content.lower():
                    var_info['type'] = 'state'
                elif 'config' in content.lower():
                    var_info['type'] = 'config'
                else:
                    var_info['type'] = 'global'
            else:
                var_info['type'] = 'unknown'
            
            # 生成新名称
            match = re.search(r'UNK_([0-9a-fA-F]+)', unk_var)
            if match:
                hex_part = match.group(1)
                index = int(hex_part, 16) % 10000
            else:
                index = hash(unk_var) % 10000
            
            base_name = self.naming_rules.get(var_info['type'], self.naming_rules['unknown'])
            var_info['new_name'] = base_name.format(index=index)
            
            if var_info['is_pointer']:
                var_info['new_name'] += '_ptr'
            
            var_info_list.append(var_info)
        
        return var_info_list
    
    def process_file(self, file_path: Path) -> Dict:
        """处理单个文件"""
        print(f"正在处理: {file_path.name}")
        
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception as e:
            return {'processed': False, 'reason': f'read_error: {e}'}
        
        # 分析变量
        var_info_list = self.analyze_unk_variables(content)
        
        if not var_info_list:
            return {'processed': False, 'reason': 'no_unk_vars'}
        
        # 创建备份
        if not self.dry_run:
            backup_path = self.backup_dir / file_path.relative_to(self.root_dir)
            backup_path.parent.mkdir(parents=True, exist_ok=True)
            import shutil
            shutil.copy2(file_path, backup_path)
        
        # 替换变量名
        new_content = content
        replacement_map = {}
        
        for var_info in var_info_list:
            old_name = var_info['original_name']
            new_name = var_info['new_name']
            
            pattern = r'\b' + re.escape(old_name) + r'\b'
            new_content = re.sub(pattern, new_name, new_content)
            
            replacement_map[old_name] = new_name
        
        # 更新统计信息
        self.total_unk_vars += len(var_info_list)
        self.renamed_vars += len(replacement_map)
        
        # 写入文件
        if not self.dry_run:
            try:
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(new_content)
            except Exception as e:
                return {'processed': False, 'reason': f'write_error: {e}'}
        
        self.processed_files += 1
        
        self.file_stats[str(file_path)] = {
            'variables': var_info_list,
            'replacements': replacement_map,
            'total_vars': len(var_info_list),
            'renamed_vars': len(replacement_map)
        }
        
        return {
            'processed': True,
            'file_path': str(file_path),
            'variables': var_info_list,
            'replacements': replacement_map,
            'total_vars': len(var_info_list),
            'renamed_vars': len(replacement_map)
        }
    
    def process_files_parallel(self, files: List[Path], max_workers: int = 4):
        """并行处理文件"""
        with ThreadPoolExecutor(max_workers=max_workers) as executor:
            futures = [executor.submit(self.process_file, file) for file in files]
            
            for i, future in enumerate(as_completed(futures), 1):
                result = future.result()
                if result['processed']:
                    print(f"[{i}/{len(files)}] ✓ 处理完成: {result['renamed_vars']}/{result['total_vars']} 个变量")
                else:
                    print(f"[{i}/{len(files)}] ✗ 处理失败: {result['reason']}")
    
    def generate_report(self) -> Dict:
        """生成处理报告"""
        type_stats = {}
        for file_info in self.file_stats.values():
            for var_info in file_info['variables']:
                var_type = var_info['type']
                type_stats[var_type] = type_stats.get(var_type, 0) + 1
        
        report = {
            'summary': {
                'total_files': len(self.file_stats),
                'processed_files': self.processed_files,
                'total_unk_vars': self.total_unk_vars,
                'renamed_vars': self.renamed_vars,
                'timestamp': datetime.now().isoformat()
            },
            'type_distribution': type_stats,
            'file_details': self.file_stats
        }
        
        return report
    
    def save_report(self, report: Dict):
        """保存报告到文件"""
        report_path = self.root_dir / 'unk_processing_report.json'
        
        with open(report_path, 'w', encoding='utf-8') as f:
            json.dump(report, f, ensure_ascii=False, indent=2)
        
        print(f"报告已保存到: {report_path}")
    
    def print_summary(self, report: Dict):
        """打印处理摘要"""
        summary = report['summary']
        type_dist = report['type_distribution']
        
        print("\n" + "="*60)
        print("UNK_标记处理完成!")
        print("="*60)
        print(f"处理文件数量: {summary['processed_files']}")
        print(f"总UNK_变量数: {summary['total_unk_vars']}")
        print(f"重命名变量数: {summary['renamed_vars']}")
        print(f"处理时间: {summary['timestamp']}")
        
        print("\n变量类型分布:")
        for var_type, count in type_dist.items():
            print(f"  {var_type}: {count}")
        
        print("\n前10个处理的文件:")
        for i, (file_path, info) in enumerate(list(self.file_stats.items())[:10]):
            print(f"  {i+1}. {Path(file_path).name}: {info['renamed_vars']}/{info['total_vars']}")
    
    def run(self):
        """运行处理流程"""
        print("开始UNK_标记批量处理（优化版本）...")
        print(f"根目录: {self.root_dir}")
        print(f"模式: {'试运行' if self.dry_run else '实际处理'}")
        if self.max_files:
            print(f"限制文件数量: {self.max_files}")
        
        # 查找包含UNK_标记的文件
        print("正在扫描文件...")
        unk_files = self.find_unk_files()
        print(f"找到 {len(unk_files)} 个包含UNK_标记的文件")
        
        # 处理文件
        self.process_files_parallel(unk_files)
        
        # 生成报告
        report = self.generate_report()
        
        # 保存报告
        if not self.dry_run:
            self.save_report(report)
        
        # 打印摘要
        self.print_summary(report)
        
        return report


def main():
    import argparse
    
    parser = argparse.ArgumentParser(description='高效批量处理UNK_标记')
    parser.add_argument('--dry-run', action='store_true', help='试运行模式')
    parser.add_argument('--root-dir', type=str, default='.', help='根目录')
    parser.add_argument('--max-files', type=int, help='限制处理的文件数量')
    
    args = parser.parse_args()
    
    processor = UNKProcessorOptimized(args.root_dir, args.dry_run, args.max_files)
    report = processor.run()
    
    return 0


if __name__ == '__main__':
    sys.exit(main())