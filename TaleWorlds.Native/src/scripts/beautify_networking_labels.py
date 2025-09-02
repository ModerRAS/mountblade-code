#!/usr/bin/env python3
"""
美化networking.c文件中的LAB_标签
将LAB_标签重命名为语义化的名称，基于上下文分析
"""

import re
import os
import sys
from collections import defaultdict

def extract_lab_labels(file_path):
    """提取文件中的所有LAB_标签和LabelLocation标签"""
    lab_labels = set()
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
        
    # 查找所有LAB_标签
    lab_pattern = r'LAB_[0-9a-fA-F]+'
    matches = re.findall(lab_pattern, content)
    
    # 查找所有LabelLocation标签
    label_location_pattern = r'LabelLocation[0-9a-fA-F]+'
    location_matches = re.findall(label_location_pattern, content)
    
    for match in matches:
        lab_labels.add(match)
    
    for match in location_matches:
        lab_labels.add(match)
    
    return sorted(lab_labels)

def analyze_lab_context(file_path, lab_label):
    """分析LAB_标签的上下文，确定其语义化名称"""
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    context_lines = []
    label_found = False
    
    for i, line in enumerate(lines):
        if lab_label in line:
            label_found = True
            # 获取标签前后的上下文
            start_idx = max(0, i - 5)
            end_idx = min(len(lines), i + 3)
            context_lines = lines[start_idx:end_idx]
            break
    
    if not label_found:
        return f"Unknown_{lab_label}"
    
    context = ''.join(context_lines)
    
    # 根据上下文分析标签用途 - 按照检查的优先级排序
    if 'networkValidationTerminator' in context or 'packetValidationTerminator' in context:
        return "NetworkValidationFailed"
    elif 'ConnectionHandleArray' in context and '>> 1 & 1' in context:
        return "ConnectionCheckFailed"
    elif 'networkOperationSecondaryStatus' in context and '== 0' in context:
        return "SecondaryOperationFailed"
    elif 'OperationPrimaryStatus' in context and '== 0' in context:
        return "PrimaryOperationFailed"
    elif 'ConnectionStatus' in context:
        return "ConnectionStatusCheck"
    elif 'BufferProcessingResult' in context:
        return "BufferProcessingFailed"
    elif 'TransferStatus' in context:
        return "TransferStatusCheck"
    elif 'SecurityContext' in context:
        return "SecurityCheckFailed"
    elif 'TimeoutVar' in context:
        return "TimeoutCheckFailed"
    elif 'networkOperationTertiaryStatus' in context:
        return "TertiaryOperationFailed"
    elif 'connectionContext' in context and '0x10' in context:
        return "ContextValidationFailed"
    elif 'PacketFlagsPointer' in context or 'NetworkArrayIndex' in context:
        return "PacketProcessingFailed"
    elif 'NetworkIterationCounter' in context:
        return "NetworkIterationCheck"
    elif 'ValidateSecurityCertificate' in context:
        return "SecurityValidationFailed"
    elif 'InitializeSession' in context:
        return "SessionInitFailed"
    elif 'ProcessDataTransfer' in context:
        return "DataTransferFailed"
    elif 'connectionStatusFlag' in context:
        return "ConnectionStatusCheck"
    elif 'DataBufferIndex' in context:
        return "DataBufferCheck"
    elif 'OperationResult' in context:
        return "OperationResultCheck"
    elif 'NetworkStatusShort1' in context or 'networkStatusIndicator' in context:
        return "NetworkStatusCheck"
    elif 'ContextArrayInitial' in context:
        return "ContextInitializationFailed"
    elif 'lStackX_10' in context:
        return "StackValidationFailed"
    elif 'plocalContext' in context:
        return "LocalContextCheck"
    elif 'SecurityKey' in context:
        return "SecurityKeyCheck"
    elif 'NetworkByteFlag3' in context:
        return "NetworkByteCheck"
    elif 'NetworkWarningLogTemplate' in context:
        return "WarningLogCheck"
    elif 'ConnectionIdInitialize' in context:
        return "ConnectionInitFailed"
    elif 'ContextInitialize' in context:
        return "ContextInitFailed"
    elif 'ValidateAndProcessConnectionData' in context:
        return "ConnectionDataValidationFailed"
    elif 'ProcessConnectionCleanup' in context:
        return "ConnectionCleanupFailed"
    elif 'NetworkCleanupConnectionContext' in context:
        return "NetworkCleanupFailed"
    elif 'ConnectionValidator' in context:
        return "ConnectionValidationFailed"
    elif 'ConnectionPacketValidator' in context:
        return "PacketValidationFailed"
    elif 'ConnectionDataValidator' in context:
        return "DataValidationFailed"
    elif 'ProcessPacketArray' in context:
        return "PacketArrayProcessingFailed"
    elif 'DataOffsetProcessor' in context:
        return "DataOffsetProcessingFailed"
    elif 'GetNetworkPointerData' in context:
        return "NetworkPointerDataFailed"
    elif 'SecurityGuardCleanup' in context:
        return "SecurityGuardCleanupFailed"
    elif 'networkValidationFlag' in context and 'networkTransferFlag' in context:
        return "NetworkValidationFlagSet"
    else:
        # 如果没有明确的上下文，根据地址范围生成名称
        if lab_label.startswith('LAB_'):
            address = lab_label[4:]  # 去掉LAB_前缀
        elif lab_label.startswith('LabelLocation'):
            address = lab_label[13:]  # 去掉LabelLocation前缀
        else:
            address = lab_label
            
        if address.startswith('180846'):
            return f'NetworkConnectionCheck_{address[6:]}'
        elif address.startswith('180847'):
            return f'NetworkDataProcessing_{address[6:]}'
        elif address.startswith('180848'):
            return f'NetworkTransfer_{address[6:]}'
        elif address.startswith('180849'):
            return f'NetworkValidation_{address[6:]}'
        elif address.startswith('18084a'):
            return f'NetworkSecurity_{address[6:]}'
        elif address.startswith('18084b'):
            return f'NetworkTimeout_{address[6:]}'
        elif address.startswith('18084c'):
            return f'NetworkBuffer_{address[6:]}'
        elif address.startswith('18084d'):
            return f'NetworkContext_{address[6:]}'
        elif address.startswith('18084e'):
            return f'NetworkOperation_{address[6:]}'
        elif address.startswith('18084f'):
            return f'NetworkStatus_{address[6:]}'
        elif address.startswith('180850'):
            return f'NetworkSession_{address[6:]}'
        elif address.startswith('180851'):
            return f'NetworkProtocol_{address[6:]}'
        elif address.startswith('180852'):
            return f'NetworkPacket_{address[6:]}'
        elif address.startswith('180853'):
            return f'NetworkHandler_{address[6:]}'
        else:
            return f'NetworkControl_{address[6:]}'

def create_lab_mapping(file_path):
    """创建LAB_标签到语义化名称的映射"""
    lab_labels = extract_lab_labels(file_path)
    mapping = {}
    
    for lab_label in lab_labels:
        semantic_name = analyze_lab_context(file_path, lab_label)
        mapping[lab_label] = semantic_name
    
    return mapping

def apply_lab_renames(file_path, mapping, output_path=None):
    """应用LAB_标签重命名"""
    if output_path is None:
        output_path = file_path
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 按标签长度从长到短排序，避免部分匹配问题
    sorted_labels = sorted(mapping.keys(), key=len, reverse=True)
    
    for lab_label in sorted_labels:
        semantic_name = mapping[lab_label]
        # 替换所有出现的LAB_标签
        content = content.replace(lab_label, semantic_name)
    
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    return len(sorted_labels)

def generate_report(mapping, file_path):
    """生成重命名报告"""
    report = f"# Networking.c LAB_标签重命名报告\n\n"
    report += f"文件: {file_path}\n"
    report += f"处理的LAB_标签数量: {len(mapping)}\n\n"
    report += "## 标签映射表\n\n"
    
    for lab_label, semantic_name in sorted(mapping.items()):
        report += f"- `{lab_label}` → `{semantic_name}`\n"
    
    return report

def main():
    """主函数"""
    if len(sys.argv) < 2:
        print("用法: python beautify_networking_labels.py <networking.c文件路径> [输出文件路径]")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2] if len(sys.argv) > 2 else input_file
    
    if not os.path.exists(input_file):
        print(f"错误: 文件 {input_file} 不存在")
        sys.exit(1)
    
    print(f"分析文件: {input_file}")
    
    # 创建标签映射
    print("正在分析LAB_标签...")
    mapping = create_lab_mapping(input_file)
    
    print(f"发现 {len(mapping)} 个LAB_标签")
    
    # 显示映射关系
    print("\n标签映射关系:")
    for lab_label, semantic_name in sorted(mapping.items()):
        print(f"  {lab_label} → {semantic_name}")
    
    # 应用重命名
    print(f"\n应用重命名到: {output_file}")
    renamed_count = apply_lab_renames(input_file, mapping, output_file)
    
    print(f"成功重命名 {renamed_count} 个LAB_标签")
    
    # 生成报告
    report_content = generate_report(mapping, input_file)
    report_file = os.path.join(os.path.dirname(output_file), "networking_lab_labels_report.md")
    
    with open(report_file, 'w', encoding='utf-8') as f:
        f.write(report_content)
    
    print(f"重命名报告已保存到: {report_file}")

def beautify_networking_file():
    """美化网络模块文件 - 兼容旧版调用方式"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print(f"分析文件: {input_file}")
    
    # 创建标签映射
    print("正在分析LAB_标签...")
    mapping = create_lab_mapping(input_file)
    
    print(f"发现 {len(mapping)} 个LAB_标签")
    
    # 显示映射关系
    print("\n标签映射关系:")
    for lab_label, semantic_name in sorted(mapping.items()):
        print(f"  {lab_label} → {semantic_name}")
    
    # 应用重命名
    print(f"\n应用重命名到: {input_file}")
    renamed_count = apply_lab_renames(input_file, mapping, input_file)
    
    print(f"成功重命名 {renamed_count} 个LAB_标签")
    
    # 生成报告
    report_content = generate_report(mapping, input_file)
    report_file = os.path.join(os.path.dirname(input_file), "networking_lab_labels_report.md")
    
    with open(report_file, 'w', encoding='utf-8') as f:
        f.write(report_content)
    
    print(f"重命名报告已保存到: {report_file}")

if __name__ == '__main__':
    if len(sys.argv) > 1:
        main()
    else:
        beautify_networking_file()