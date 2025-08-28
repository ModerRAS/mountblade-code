#!/usr/bin/env python3
"""
批量处理UNK_标记的脚本

本脚本用于批量处理代码库中的UNK_标记，根据变量类型和上下文创建有意义的名称。
主要功能：
1. 扫描所有包含UNK_标记的文件
2. 根据变量类型和使用上下文重命名
3. 生成统计报告
4. 备份原始文件

使用方法：
python3 unk_processor.py
"""

import os
import re
import sys
import shutil
import argparse
from pathlib import Path
from typing import Dict, List, Tuple, Set
from datetime import datetime
import json

class UNKProcessor:
    def __init__(self, root_dir: str, dry_run: bool = False):
        self.root_dir = Path(root_dir)
        self.dry_run = dry_run
        self.processed_files = 0
        self.total_unk_vars = 0
        self.renamed_vars = 0
        self.unk_type_map = {}  # 存储UNK_变量的类型信息
        self.file_stats = {}    # 存储每个文件的统计信息
        
        # 定义命名规则
        self.naming_rules = {
            'global': 'global_var_{index}',
            'state': 'global_state_{index}',
            'data': 'global_data_{index}',
            'config': 'global_config_{index}',
            'error': 'global_error_{index}',
            'system': 'global_system_{index}',
            'temp': 'temp_var_{index}',
            'param': 'param_var_{index}',
            'return': 'return_var_{index}',
            'unknown': 'unknown_var_{index}'
        }
        
        # 定义类型映射
        self.type_patterns = {
            'uint64_t': ['global', 'data'],
            'int32_t': ['state', 'config'],
            'void*': ['system', 'data'],
            'char*': ['string', 'data'],
            'float': ['param', 'temp'],
            'double': ['data', 'config'],
            'bool': ['state', 'config'],
            'int': ['param', 'temp'],
            'long': ['global', 'data'],
            'short': ['param', 'temp']
        }
        
        # 创建备份目录
        self.backup_dir = self.root_dir / 'backup_unk_processing'
        if not self.dry_run:
            self.backup_dir.mkdir(exist_ok=True)
    
    def find_unk_files(self) -> List[Path]:
        """查找所有包含UNK_标记的文件"""
        unk_files = []
        
        for root, dirs, files in os.walk(self.root_dir):
            # 跳过备份目录
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
                    except Exception as e:
                        print(f"警告：无法读取文件 {file_path}: {e}")
        
        return unk_files
    
    def analyze_unk_variables(self, file_path: Path) -> List[Dict]:
        """分析文件中的UNK_变量"""
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception as e:
            print(f"错误：无法读取文件 {file_path}: {e}")
            return []
        
        # 查找所有UNK_变量
        unk_pattern = r'\b(UNK_[0-9a-fA-F]+)\b'
        unk_vars = re.findall(unk_pattern, content)
        
        if not unk_vars:
            return []
        
        # 去重
        unique_unk_vars = list(set(unk_vars))
        
        # 分析每个UNK_变量的使用情况
        var_info_list = []
        
        for unk_var in unique_unk_vars:
            var_info = {
                'name': unk_var,
                'original_name': unk_var,
                'new_name': '',
                'type': 'unknown',
                'usage_count': content.count(unk_var),
                'context': self.analyze_variable_context(content, unk_var),
                'is_global': self.is_global_variable(content, unk_var),
                'is_pointer': self.is_pointer_variable(content, unk_var)
            }
            
            # 根据上下文确定类型
            var_info['type'] = self.determine_variable_type(var_info)
            
            # 生成新名称
            var_info['new_name'] = self.generate_new_name(var_info)
            
            var_info_list.append(var_info)
        
        return var_info_list
    
    def analyze_variable_context(self, content: str, var_name: str) -> str:
        """分析变量的使用上下文"""
        # 查找变量使用的上下文
        context_patterns = [
            rf'extern.*?{var_name}',  # 外部声明
            rf'&{var_name}',          # 取地址
            rf'{var_name}\s*=',       # 赋值
            rf'=\s*{var_name}',       # 被赋值
            rf'{var_name}\s*\[',      # 数组访问
            rf'{var_name}\s*\(',      # 函数调用
            rf'\*\s*{var_name}',      # 指针解引用
            rf'{var_name}->',         # 结构体访问
            rf'\w+\s+{var_name}',     # 类型声明
        ]
        
        contexts = []
        for pattern in context_patterns:
            matches = re.findall(pattern, content)
            if matches:
                contexts.append(pattern.replace(rf'{var_name}', ''))
        
        return '|'.join(contexts) if contexts else 'unknown'
    
    def is_global_variable(self, content: str, var_name: str) -> bool:
        """判断是否为全局变量"""
        # 查找extern声明或全局作用域中的变量
        patterns = [
            rf'extern.*?{var_name}',
            rf'^[^{{]*\b{var_name}\b',  # 全局作用域
            rf'static.*?{var_name}'
        ]
        
        for pattern in patterns:
            if re.search(pattern, content, re.MULTILINE):
                return True
        
        return False
    
    def is_pointer_variable(self, content: str, var_name: str) -> bool:
        """判断是否为指针变量"""
        patterns = [
            rf'\*\s*{var_name}',      # 指针声明
            rf'&{var_name}',          # 取地址
            rf'{var_name}->'          # 结构体指针访问
        ]
        
        for pattern in patterns:
            if re.search(pattern, content):
                return True
        
        return False
    
    def determine_variable_type(self, var_info: Dict) -> str:
        """根据上下文确定变量类型"""
        context = var_info['context']
        is_global = var_info['is_global']
        is_pointer = var_info['is_pointer']
        
        # 根据上下文线索判断类型
        if 'extern' in context:
            if 'state' in context.lower():
                return 'state'
            elif 'config' in context.lower():
                return 'config'
            elif 'error' in context.lower():
                return 'error'
            else:
                return 'global'
        
        if is_global:
            if 'state' in context.lower():
                return 'state'
            elif 'config' in context.lower():
                return 'config'
            elif 'system' in context.lower():
                return 'system'
            else:
                return 'global'
        
        if is_pointer:
            return 'data'
        
        # 根据使用模式判断
        if 'param' in context.lower():
            return 'param'
        elif 'return' in context.lower():
            return 'return'
        elif 'temp' in context.lower():
            return 'temp'
        
        return 'unknown'
    
    def generate_new_name(self, var_info: Dict) -> str:
        """为变量生成新名称"""
        var_type = var_info['type']
        original_name = var_info['original_name']
        
        # 提取原始名称中的数字部分
        match = re.search(r'UNK_([0-9a-fA-F]+)', original_name)
        if match:
            hex_part = match.group(1)
            index = int(hex_part, 16) % 10000  # 使用数字部分作为索引
        else:
            index = hash(original_name) % 10000
        
        # 生成新名称
        base_name = self.naming_rules.get(var_type, self.naming_rules['unknown'])
        new_name = base_name.format(index=index)
        
        # 如果是指针，添加_ptr后缀
        if var_info['is_pointer']:
            new_name += '_ptr'
        
        return new_name
    
    def process_file(self, file_path: Path) -> Dict:
        """处理单个文件"""
        print(f"正在处理文件: {file_path}")
        
        # 分析变量
        var_info_list = self.analyze_unk_variables(file_path)
        
        if not var_info_list:
            return {'processed': False, 'reason': 'no_unk_vars'}
        
        # 读取文件内容
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                original_content = f.read()
        except Exception as e:
            return {'processed': False, 'reason': f'read_error: {e}'}
        
        # 创建备份
        if not self.dry_run:
            backup_path = self.backup_dir / file_path.relative_to(self.root_dir)
            backup_path.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(file_path, backup_path)
        
        # 替换变量名
        new_content = original_content
        replacement_map = {}
        
        for var_info in var_info_list:
            old_name = var_info['original_name']
            new_name = var_info['new_name']
            
            # 只替换完整的单词，避免误替换
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
        
        # 记录文件统计信息
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
    
    def generate_report(self) -> Dict:
        """生成处理报告"""
        # 按类型统计变量
        type_stats = {}
        for file_info in self.file_stats.values():
            for var_info in file_info['variables']:
                var_type = var_info['type']
                if var_type not in type_stats:
                    type_stats[var_type] = 0
                type_stats[var_type] += 1
        
        # 按前缀统计
        prefix_stats = {}
        for file_info in self.file_stats.values():
            for var_info in file_info['variables']:
                new_name = var_info['new_name']
                prefix = new_name.split('_')[0]
                if prefix not in prefix_stats:
                    prefix_stats[prefix] = 0
                prefix_stats[prefix] += 1
        
        report = {
            'summary': {
                'total_files': len(self.file_stats),
                'processed_files': self.processed_files,
                'total_unk_vars': self.total_unk_vars,
                'renamed_vars': self.renamed_vars,
                'timestamp': datetime.now().isoformat()
            },
            'type_distribution': type_stats,
            'prefix_distribution': prefix_stats,
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
        print("开始UNK_标记批量处理...")
        print(f"根目录: {self.root_dir}")
        print(f"模式: {'试运行' if self.dry_run else '实际处理'}")
        
        # 查找包含UNK_标记的文件
        print("正在扫描文件...")
        unk_files = self.find_unk_files()
        print(f"找到 {len(unk_files)} 个包含UNK_标记的文件")
        
        # 处理每个文件
        for i, file_path in enumerate(unk_files, 1):
            print(f"[{i}/{len(unk_files)}] ", end="")
            result = self.process_file(file_path)
            
            if result['processed']:
                print(f"✓ 处理完成: {result['renamed_vars']}/{result['total_vars']} 个变量")
            else:
                print(f"✗ 处理失败: {result['reason']}")
        
        # 生成报告
        report = self.generate_report()
        
        # 保存报告
        if not self.dry_run:
            self.save_report(report)
        
        # 打印摘要
        self.print_summary(report)
        
        return report


def main():
    parser = argparse.ArgumentParser(description='批量处理UNK_标记')
    parser.add_argument('--dry-run', action='store_true', help='试运行模式，不实际修改文件')
    parser.add_argument('--root-dir', type=str, default='.', help='根目录路径')
    
    args = parser.parse_args()
    
    processor = UNKProcessor(args.root_dir, args.dry_run)
    report = processor.run()
    
    return 0


if __name__ == '__main__':
    sys.exit(main())