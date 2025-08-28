#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
DAT_标记批量清理脚本
DAT_标记批量清理脚本

功能：
- 批量清理代码库中的DAT_标记
- 将DAT_标记替换为有意义的变量名
- 优化代码可读性和维护性

作者：Claude Code
生成时间：2025-08-28
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple, Set
import argparse

class DATReplacer:
    """DAT_标记替换器"""
    
    def __init__(self):
        # 常用DAT_标记的语义化映射
        self.dat_mapping = {
            # 系统全局数据
            'DAT_180c8ed18': 'system_memory_pool_ptr',
            'DAT_180c8a9b0': 'system_global_data_ptr',
            'DAT_180c8aa08': 'system_main_data_ptr',
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
            
            # 内存管理
            'DAT_180c8ed10': 'system_heap_base',
            'DAT_180c8ed14': 'system_heap_size',
            'DAT_180c8ed18': 'system_heap_ptr',
            'DAT_180c8ed1c': 'system_stack_base',
            'DAT_180c8ed20': 'system_stack_size',
            
            # 配置数据
            'DAT_180d49830': 'system_config_data',
            'DAT_180d49950': 'system_resource_config',
            'DAT_180d49970': 'system_module_config',
            'DAT_180bfc140': 'system_cache_config',
            'DAT_1803f48b2': 'system_temp_config',
        }
        
        # 地址到类型的映射
        self.address_type_mapping = {
            # 全局指针类型
            '180c8ed18': 'uint64_t*',
            '180c8a9b0': 'uint64_t*',
            '180c8aa08': 'uint64_t*',
            '180c82868': 'uint64_t*',
            '180c86908': 'uint32_t*',
            '180c86928': 'uint64_t*',
            '180c86870': 'uint32_t*',
            '180c86920': 'uint64_t*',
            '180c86930': 'uint32_t*',
            '180c86950': 'uint32_t*',
            
            # 标志和状态类型
            '180bf00a8': 'uint32_t',
            '180c82860': 'uint8_t',
            '180c82842': 'uint8_t',
            '180bf65bc': 'uint32_t',
            '180bf65b8': 'uint32_t',
            '180c8ed60': 'uint32_t',
            '180c8ed64': 'uint32_t',
            '180c8ed30': 'int32_t',
            '180c92514': 'uint8_t',
            
            # 缓冲区类型
            '18098bc73': 'uint8_t*',
            '180be12f0': 'uint8_t*',
            '180a06434': 'uint8_t*',
            '180c8f008': 'uint8_t*',
            '180c86938': 'uint8_t*',
            '180c86890': 'uint8_t*',
            '180c8a9a8': 'uint8_t*',
            
            # 配置数据类型
            '180d49830': 'uint8_t[]',
            '180d49950': 'uint8_t[]',
            '180d49970': 'uint8_t[]',
            '180bfc140': 'uint8_t[]',
            '1803f48b2': 'uint8_t[]',
        }
        
        # 统计信息
        self.stats = {
            'total_files': 0,
            'modified_files': 0,
            'total_replacements': 0,
            'mapped_replacements': 0,
            'auto_generated_replacements': 0
        }
        
    def extract_address_from_dat(self, dat_name: str) -> str:
        """从DAT_标记中提取地址"""
        match = re.match(r'DAT_([0-9a-fA-F]+)', dat_name)
        return match.group(1) if match else ''
    
    def generate_meaningful_name(self, dat_name: str, context: str = '') -> str:
        """为DAT_标记生成有意义的名称"""
        address = self.extract_address_from_dat(dat_name)
        if not address:
            return dat_name
            
        # 检查是否有预定义映射
        if dat_name in self.dat_mapping:
            return self.dat_mapping[dat_name]
        
        # 根据地址特征生成名称
        if address.startswith('180c8'):
            if address.endswith('ed18'):
                return 'system_memory_pool_ptr'
            elif address.endswith('a9b0'):
                return 'system_global_data_ptr'
            elif address.endswith('aa08'):
                return 'system_main_data_ptr'
            elif address.endswith('2868'):
                return 'system_context_ptr'
            elif address.endswith('6908'):
                return 'system_module_state'
            elif address.endswith('6928'):
                return 'system_message_context'
            elif address.endswith('8670'):
                return 'system_main_module_state'
            elif address.endswith('6920'):
                return 'system_thread_context'
            elif address.endswith('6930'):
                return 'system_resource_state'
            elif address.endswith('6950'):
                return 'system_operation_state'
            elif address.endswith('ed60'):
                return 'system_file_counter'
            elif address.endswith('ed64'):
                return 'system_handle_counter'
            elif address.endswith('ed30'):
                return 'system_error_code'
            elif address.endswith('2514'):
                return 'system_status_flag'
                
        elif address.startswith('180bf'):
            if address.endswith('00a8'):
                return 'system_stack_cookie'
            elif address.endswith('65bc'):
                return 'system_allocation_flags'
            elif address.endswith('65b8'):
                return 'system_memory_flags'
                
        elif address.startswith('18098'):
            if address.endswith('bc73'):
                return 'system_buffer_ptr'
                
        elif address.startswith('180be'):
            if address.endswith('12f0'):
                return 'system_data_buffer'
                
        elif address.startswith('180a0'):
            if address.endswith('6434'):
                return 'system_temp_buffer'
                
        elif address.startswith('180d4'):
            if address.endswith('9830'):
                return 'system_config_data'
            elif address.endswith('9950'):
                return 'system_resource_config'
            elif address.endswith('9970'):
                return 'system_module_config'
                
        elif address.startswith('180bfc'):
            if address.endswith('0140'):
                return 'system_cache_config'
                
        elif address.startswith('1803f'):
            if address.endswith('48b2'):
                return 'system_temp_config'
        
        # 根据上下文生成名称
        if 'memory' in context.lower():
            return f'system_memory_{address[-4:]}'
        elif 'buffer' in context.lower():
            return f'system_buffer_{address[-4:]}'
        elif 'state' in context.lower():
            return f'system_state_{address[-4:]}'
        elif 'flag' in context.lower():
            return f'system_flag_{address[-4:]}'
        elif 'counter' in context.lower():
            return f'system_counter_{address[-4:]}'
        elif 'config' in context.lower():
            return f'system_config_{address[-4:]}'
        elif 'ptr' in context.lower() or 'pointer' in context.lower():
            return f'system_ptr_{address[-4:]}'
        else:
            return f'system_data_{address[-4:]}'
    
    def get_type_for_address(self, address: str) -> str:
        """根据地址获取类型"""
        return self.address_type_mapping.get(address, 'uint64_t')
    
    def process_file(self, file_path: Path) -> bool:
        """处理单个文件"""
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read()
            
            original_content = content
            replacements = 0
            
            # 查找所有DAT_标记
            dat_pattern = r'\b(DAT_[0-9a-fA-F]+)\b'
            dat_matches = re.finditer(dat_pattern, content)
            
            # 收集所有唯一的DAT_标记
            unique_dats = set()
            for match in dat_matches:
                unique_dats.add(match.group(1))
            
            # 为每个DAT_标记生成替换
            replacements_map = {}
            for dat_name in unique_dats:
                meaningful_name = self.generate_meaningful_name(dat_name, content)
                replacements_map[dat_name] = meaningful_name
            
            # 执行替换
            for dat_name, meaningful_name in replacements_map.items():
                # 替换DAT_标记引用
                content = re.sub(r'\b' + re.escape(dat_name) + r'\b', meaningful_name, content)
                replacements += content.count(meaningful_name)
            
            # 如果有修改，写回文件
            if content != original_content:
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                
                self.stats['modified_files'] += 1
                self.stats['total_replacements'] += replacements
                
                # 记录替换统计
                mapped_count = sum(1 for dat in unique_dats if dat in self.dat_mapping)
                self.stats['mapped_replacements'] += mapped_count
                self.stats['auto_generated_replacements'] += (len(unique_dats) - mapped_count)
                
                return True
            
            return False
            
        except Exception as e:
            print(f"处理文件 {file_path} 时出错: {e}")
            return False
    
    def generate_type_definitions(self) -> str:
        """生成类型定义"""
        type_defs = []
        
        # 添加类型定义注释
        type_defs.append("/**")
        type_defs.append(" * @brief DAT_标记替换后的类型定义")
        type_defs.append(" *")
        type_defs.append(" * 本文件包含了所有DAT_标记替换后的类型定义，")
        type_defs.append(" * 确保类型安全和代码可读性。")
        type_defs.append(" */")
        type_defs.append("")
        type_defs.append("#ifndef DAT_TYPES_H")
        type_defs.append("#define DAT_TYPES_H")
        type_defs.append("")
        type_defs.append("#include <stdint.h>")
        type_defs.append("")
        
        # 添加外部变量声明
        declared_addresses = set()
        for dat_name, meaningful_name in self.dat_mapping.items():
            address = self.extract_address_from_dat(dat_name)
            if address and address not in declared_addresses:
                var_type = self.get_type_for_address(address)
                if var_type.endswith('[]'):
                    # 数组类型
                    size = '0x100' if address == '180d49830' else '0x20'
                    type_defs.append(f"extern uint8_t {meaningful_name}[{size}];")
                else:
                    type_defs.append(f"extern {var_type} {meaningful_name};")
                declared_addresses.add(address)
        
        type_defs.append("")
        type_defs.append("#endif // DAT_TYPES_H")
        
        return '\n'.join(type_defs)
    
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
        print(f"  - 总替换次数: {self.stats['total_replacements']}")
        print(f"  - 预定义映射替换: {self.stats['mapped_replacements']}")
        print(f"  - 自动生成替换: {self.stats['auto_generated_replacements']}")

def main():
    """主函数"""
    parser = argparse.ArgumentParser(description='DAT_标记批量清理工具')
    parser.add_argument('directory', help='要处理的目录路径')
    parser.add_argument('--generate-types', action='store_true', help='生成类型定义文件')
    parser.add_argument('--output', help='类型定义输出文件路径')
    
    args = parser.parse_args()
    
    directory = Path(args.directory)
    if not directory.exists():
        print(f"错误: 目录 {directory} 不存在")
        sys.exit(1)
    
    replacer = DATReplacer()
    
    # 处理目录
    replacer.process_directory(directory)
    
    # 生成类型定义
    if args.generate_types:
        type_defs = replacer.generate_type_definitions()
        output_path = args.output or directory / "dat_types.h"
        
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(type_defs)
        
        print(f"类型定义已保存到: {output_path}")

if __name__ == '__main__':
    main()