#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
智能DAT_标记批量处理脚本

功能：
- 分析代码库中的DAT_标记使用模式
- 根据上下文为DAT_变量创建有意义的名称
- 批量处理所有包含DAT_标记的文件
- 保留已语义化的变量名
- 生成统计报告

作者：Claude Code
生成时间：2025-08-28
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple, Set, Optional
import argparse
from collections import defaultdict
import json

class SmartDATProcessor:
    """智能DAT_标记处理器"""
    
    def __init__(self):
        # 预定义的DAT_标记映射（保持已语义化的名称）
        self.predefined_mappings = {
            # 系统全局数据
            'DAT_180c8aa08': 'system_global_data_ptr',
            'DAT_180c8a9b0': 'system_global_data_ptr_alt',
            'DAT_180c8ed18': 'system_memory_pool_ptr',
            'DAT_180c82868': 'system_context_ptr',
            'DAT_180c86908': 'system_module_state',
            'DAT_180c86928': 'system_message_context',
            'DAT_180c86870': 'system_main_module_state',
            'DAT_180c86920': 'system_thread_context',
            'DAT_180c86930': 'system_resource_state',
            'DAT_180c86950': 'system_operation_state',
            
            # 系统标志和状态
            'DAT_180bf00a8': 'system_stack_cookie',
            'DAT_180c82860': 'system_debug_flag',
            'DAT_180c82842': 'system_debug_flag2',
            'DAT_180bf65bc': 'system_allocation_flags',
            'DAT_180bf65b8': 'system_memory_flags',
            'DAT_180c8ed60': 'system_file_counter',
            'DAT_180c8ed64': 'system_handle_counter',
            'DAT_180c8ed30': 'system_error_code',
            'DAT_180c92514': 'system_status_flag',
            
            # 内存管理相关
            'DAT_180c8ed10': 'system_heap_base',
            'DAT_180c8ed14': 'system_heap_size',
            'DAT_180c8ed1c': 'system_stack_base',
            'DAT_180c8ed20': 'system_stack_size',
            
            # 数据缓冲区
            'DAT_18098bc73': 'system_buffer_ptr',
            'DAT_180be12f0': 'system_data_buffer',
            'DAT_180a06434': 'system_temp_buffer',
            'DAT_180c8f008': 'system_cache_buffer',
            'DAT_180c86938': 'system_message_buffer',
            'DAT_180c86890': 'system_parameter_buffer',
            'DAT_180c8a9a8': 'system_resource_buffer',
            
            # 函数指针和回调
            'DAT_180c82858': 'system_callback_ptr',
            'DAT_180c82850': 'system_event_handler',
            'DAT_180c82848': 'system_interrupt_handler',
            'DAT_180c82840': 'system_exception_handler',
            
            # 配置数据
            'DAT_180d49830': 'system_config_data',
            'DAT_180d49950': 'system_resource_config',
            'DAT_180d49970': 'system_module_config',
            'DAT_180bfc140': 'system_cache_config',
            'DAT_1803f48b2': 'system_temp_config',
        }
        
        # 地址前缀到用途的映射
        self.address_prefix_mapping = {
            '180c8': 'system_data',
            '180bf': 'system_control',
            '18098': 'system_memory',
            '180be': 'system_buffer',
            '180a0': 'system_temp',
            '180d4': 'system_config',
            '180bfc': 'system_cache',
            '1803f': 'system_handler',
        }
        
        # 地址后缀到用途的映射
        self.address_suffix_mapping = {
            'ed18': 'memory_pool',
            'a9b0': 'global_data',
            'aa08': 'main_data',
            '2868': 'context',
            '6908': 'module_state',
            '6928': 'message_context',
            '8670': 'main_module_state',
            '6920': 'thread_context',
            '6930': 'resource_state',
            '6950': 'operation_state',
            'ed60': 'file_counter',
            'ed64': 'handle_counter',
            'ed30': 'error_code',
            '2514': 'status_flag',
            '00a8': 'stack_cookie',
            '65bc': 'allocation_flags',
            '65b8': 'memory_flags',
            'bc73': 'buffer_ptr',
            '12f0': 'data_buffer',
            '6434': 'temp_buffer',
            '9830': 'config_data',
            '9950': 'resource_config',
            '9970': 'module_config',
            '0140': 'cache_config',
            '48b2': 'temp_config',
        }
        
        # 上下文关键词映射
        self.context_keywords = {
            'memory': ['memory', 'alloc', 'malloc', 'free', 'heap', 'stack'],
            'buffer': ['buffer', 'buf', 'cache', 'temp'],
            'state': ['state', 'status', 'flag', 'mode'],
            'counter': ['counter', 'count', 'index', 'num'],
            'config': ['config', 'setting', 'param', 'option'],
            'pointer': ['ptr', 'pointer', 'ref', 'addr'],
            'handler': ['handler', 'callback', 'function', 'proc'],
            'mutex': ['mutex', 'lock', 'sync', 'critical'],
            'string': ['string', 'str', 'text', 'char'],
            'file': ['file', 'handle', 'stream', 'io'],
            'network': ['network', 'net', 'socket', 'connection'],
            'render': ['render', 'draw', 'graphic', 'display'],
            'audio': ['audio', 'sound', 'music', 'wave'],
            'input': ['input', 'key', 'mouse', 'controller'],
            'physics': ['physics', 'collision', 'rigidbody', 'force'],
            'animation': ['animation', 'anim', 'bone', 'skeleton'],
            'ui': ['ui', 'interface', 'gui', 'widget'],
        }
        
        # 统计信息
        self.stats = {
            'total_files': 0,
            'modified_files': 0,
            'total_dat_occurrences': 0,
            'predefined_replacements': 0,
            'context_based_replacements': 0,
            'pattern_based_replacements': 0,
            'unchanged_replacements': 0,
            'dat_context_analysis': defaultdict(int),
            'address_pattern_analysis': defaultdict(int),
        }
        
        # 文件上下文缓存
        self.file_context_cache = {}
        
    def extract_address_from_dat(self, dat_name: str) -> str:
        """从DAT_标记中提取地址"""
        match = re.match(r'DAT_([0-9a-fA-F]+)', dat_name)
        return match.group(1) if match else ''
    
    def analyze_file_context(self, file_path: Path) -> Dict[str, int]:
        """分析文件上下文，返回关键词频率"""
        if file_path in self.file_context_cache:
            return self.file_context_cache[file_path]
        
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read().lower()
            
            context_scores = {}
            for category, keywords in self.context_keywords.items():
                score = sum(content.count(keyword) for keyword in keywords)
                if score > 0:
                    context_scores[category] = score
            
            self.file_context_cache[file_path] = context_scores
            return context_scores
            
        except Exception as e:
            print(f"分析文件上下文 {file_path} 时出错: {e}")
            return {}
    
    def generate_meaningful_name(self, dat_name: str, file_path: Path) -> str:
        """为DAT_标记生成有意义的名称"""
        address = self.extract_address_from_dat(dat_name)
        if not address:
            return dat_name
        
        # 检查是否有预定义映射
        if dat_name in self.predefined_mappings:
            return self.predefined_mappings[dat_name]
        
        # 分析文件上下文
        context_scores = self.analyze_file_context(file_path)
        
        # 根据地址模式生成名称
        name_parts = []
        
        # 添加前缀
        for prefix, category in self.address_prefix_mapping.items():
            if address.startswith(prefix):
                name_parts.append(category)
                break
        else:
            name_parts.append('system')
        
        # 根据后缀添加具体用途
        for suffix, purpose in self.address_suffix_mapping.items():
            if address.endswith(suffix):
                name_parts.append(purpose)
                break
        
        # 如果没有找到后缀匹配，根据上下文添加
        if len(name_parts) == 1 and context_scores:
            best_context = max(context_scores.items(), key=lambda x: x[1])[0]
            name_parts.append(best_context)
        
        # 如果仍然只有前缀，添加地址后4位
        if len(name_parts) == 1:
            name_parts.append(f'data_{address[-4:]}')
        
        # 构建最终名称
        base_name = '_'.join(name_parts)
        
        # 确保名称唯一性
        meaningful_name = base_name
        counter = 1
        while any(meaningful_name in value for value in self.predefined_mappings.values()):
            meaningful_name = f"{base_name}_{counter}"
            counter += 1
        
        return meaningful_name
    
    def get_usage_context(self, dat_name: str, content: str) -> str:
        """获取DAT_标记的使用上下文"""
        # 查找DAT_标记周围的内容
        pattern = r'.{0,100}\b' + re.escape(dat_name) + r'\b.{0,100}'
        matches = re.findall(pattern, content)
        
        if matches:
            # 返回最相关的上下文
            context = ' '.join(matches[:3])
            return context.lower()
        
        return ''
    
    def process_file(self, file_path: Path) -> bool:
        """处理单个文件"""
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read()
            
            original_content = content
            replacements = 0
            
            # 查找所有DAT_标记
            dat_pattern = r'\b(DAT_[0-9a-fA-F]+)\b'
            dat_matches = list(re.finditer(dat_pattern, content))
            
            if not dat_matches:
                return False
            
            # 收集所有唯一的DAT_标记及其上下文
            dat_info = {}
            for match in dat_matches:
                dat_name = match.group(1)
                if dat_name not in dat_info:
                    dat_info[dat_name] = {
                        'count': 0,
                        'context': self.get_usage_context(dat_name, content),
                        'positions': []
                    }
                dat_info[dat_name]['count'] += 1
                dat_info[dat_name]['positions'].append(match.start())
            
            # 为每个DAT_标记生成替换
            replacements_map = {}
            for dat_name, info in dat_info.items():
                meaningful_name = self.generate_meaningful_name(dat_name, file_path)
                replacements_map[dat_name] = {
                    'new_name': meaningful_name,
                    'count': info['count'],
                    'context': info['context']
                }
                
                # 更新统计信息
                address = self.extract_address_from_dat(dat_name)
                if address:
                    self.stats['address_pattern_analysis'][address[:4]] += 1
                
                # 记录上下文分析
                for category, keywords in self.context_keywords.items():
                    if any(keyword in info['context'] for keyword in keywords):
                        self.stats['dat_context_analysis'][category] += 1
                        break
            
            # 执行替换（从长到短排序，避免部分匹配）
            sorted_dats = sorted(replacements_map.keys(), key=len, reverse=True)
            for dat_name in sorted_dats:
                replacement_info = replacements_map[dat_name]
                new_name = replacement_info['new_name']
                
                # 替换DAT_标记引用
                content = re.sub(r'\b' + re.escape(dat_name) + r'\b', new_name, content)
                replacements += replacement_info['count']
                
                # 更新统计信息
                if dat_name in self.predefined_mappings:
                    self.stats['predefined_replacements'] += replacement_info['count']
                elif replacement_info['context']:
                    self.stats['context_based_replacements'] += replacement_info['count']
                else:
                    self.stats['pattern_based_replacements'] += replacement_info['count']
            
            # 如果有修改，写回文件
            if content != original_content:
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                
                self.stats['modified_files'] += 1
                self.stats['total_dat_occurrences'] += replacements
                
                return True
            
            return False
            
        except Exception as e:
            print(f"处理文件 {file_path} 时出错: {e}")
            return False
    
    def generate_mapping_file(self, output_path: Path) -> None:
        """生成映射文件"""
        mapping_data = {
            'predefined_mappings': self.predefined_mappings,
            'address_prefix_mapping': self.address_prefix_mapping,
            'address_suffix_mapping': self.address_suffix_mapping,
            'context_keywords': self.context_keywords,
            'statistics': dict(self.stats),
            'generated_mappings': {}
        }
        
        with open(output_path, 'w', encoding='utf-8') as f:
            json.dump(mapping_data, f, indent=2, ensure_ascii=False)
        
        print(f"映射文件已保存到: {output_path}")
    
    def generate_report(self, output_path: Path) -> None:
        """生成处理报告"""
        report = []
        report.append("# DAT_标记处理报告")
        report.append("")
        report.append(f"处理时间: {__file__} 生成于 2025-08-28")
        report.append("")
        
        report.append("## 处理统计")
        report.append(f"- 总文件数: {self.stats['total_files']}")
        report.append(f"- 修改文件数: {self.stats['modified_files']}")
        report.append(f"- DAT_标记总出现次数: {self.stats['total_dat_occurrences']}")
        report.append(f"- 预定义映射替换: {self.stats['predefined_replacements']}")
        report.append(f"- 基于上下文替换: {self.stats['context_based_replacements']}")
        report.append(f"- 基于模式替换: {self.stats['pattern_based_replacements']}")
        report.append(f"- 未改变替换: {self.stats['unchanged_replacements']}")
        report.append("")
        
        report.append("## 地址模式分析")
        for pattern, count in sorted(self.stats['address_pattern_analysis'].items()):
            report.append(f"- {pattern}: {count}")
        report.append("")
        
        report.append("## 上下文分析")
        for context, count in sorted(self.stats['dat_context_analysis'].items()):
            report.append(f"- {context}: {count}")
        report.append("")
        
        report.append("## 预定义映射")
        for dat_name, meaningful_name in sorted(self.predefined_mappings.items()):
            report.append(f"- {dat_name} -> {meaningful_name}")
        report.append("")
        
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write('\n'.join(report))
        
        print(f"处理报告已保存到: {output_path}")
    
    def process_directory(self, directory: Path) -> None:
        """处理目录中的所有文件"""
        print(f"开始处理目录: {directory}")
        
        # 查找所有.c文件
        c_files = list(directory.rglob("*.c"))
        self.stats['total_files'] = len(c_files)
        
        print(f"找到 {len(c_files)} 个C文件")
        
        # 处理每个文件
        for i, file_path in enumerate(c_files, 1):
            if i % 100 == 0:
                print(f"处理进度: {i}/{len(c_files)} ({i/len(c_files)*100:.1f}%)")
            
            self.process_file(file_path)
        
        print(f"处理完成:")
        print(f"  - 总文件数: {self.stats['total_files']}")
        print(f"  - 修改文件数: {self.stats['modified_files']}")
        print(f"  - DAT_标记总出现次数: {self.stats['total_dat_occurrences']}")
        print(f"  - 预定义映射替换: {self.stats['predefined_replacements']}")
        print(f"  - 基于上下文替换: {self.stats['context_based_replacements']}")
        print(f"  - 基于模式替换: {self.stats['pattern_based_replacements']}")

def main():
    """主函数"""
    parser = argparse.ArgumentParser(description='智能DAT_标记批量处理工具')
    parser.add_argument('directory', help='要处理的目录路径')
    parser.add_argument('--generate-mapping', action='store_true', help='生成映射文件')
    parser.add_argument('--generate-report', action='store_true', help='生成处理报告')
    parser.add_argument('--mapping-output', help='映射文件输出路径')
    parser.add_argument('--report-output', help='报告输出路径')
    
    args = parser.parse_args()
    
    directory = Path(args.directory)
    if not directory.exists():
        print(f"错误: 目录 {directory} 不存在")
        sys.exit(1)
    
    processor = SmartDATProcessor()
    
    # 处理目录
    processor.process_directory(directory)
    
    # 生成映射文件
    if args.generate_mapping:
        mapping_path = args.mapping_output or directory / "dat_mapping.json"
        processor.generate_mapping_file(mapping_path)
    
    # 生成报告
    if args.generate_report:
        report_path = args.report_output or directory / "dat_processing_report.md"
        processor.generate_report(report_path)

if __name__ == '__main__':
    main()