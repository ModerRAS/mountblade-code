#!/usr/bin/env python3
import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_unk_variables(content):
    # 替换 UNK_ 变量为语义化名称
    replacements = [
        (r'undefined UNK_180a1a2f0', 'void* SystemDataBuffer1'),
        (r'undefined UNK_180a24700', 'void* SystemDataBuffer2'),
        (r'undefined UNK_180a0cea0', 'void* MemoryAllocationBuffer1'),
        (r'undefined UNK_180a0cf60', 'void* MemoryAllocationBuffer2'),
        (r'undefined UNK_180a0cf4c', 'void* MemoryAllocationBuffer3'),
        (r'undefined UNK_180a0cfa0', 'void* MemoryAllocationBuffer4'),
        (r'undefined UNK_180a0d348', 'void* SystemStateBuffer1'),
        (r'undefined UNK_180a0d350', 'void* SystemStateBuffer2'),
        (r'undefined UNK_180a0d370', 'void* SystemStateBuffer3'),
        (r'undefined UNK_180a0d388', 'void* SystemStateBuffer4'),
        (r'undefined UNK_180a0d3a0', 'void* SystemStateBuffer5'),
        (r'undefined UNK_180a0d3a8', 'void* SystemStateBuffer6'),
        (r'undefined UNK_180a0d3b0', 'void* SystemStateBuffer7'),
        (r'undefined UNK_180a0d3c4', 'void* SystemStateBuffer8'),
        (r'undefined UNK_180a0d3dc', 'void* SystemStateBuffer9'),
        (r'undefined UNK_180a0d3c8', 'void* SystemStateBuffer10'),
        (r'undefined UNK_180a04998', 'void* SystemStateBuffer11'),
        (r'undefined UNK_180a0d520', 'void* SystemStateBuffer12'),
        (r'undefined UNK_180a0d530', 'void* SystemStateBuffer13'),
        (r'undefined UNK_180a0d548', 'void* SystemStateBuffer14'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 replace_unk_variables.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    content = read_file(file_path)
    content = replace_unk_variables(content)
    write_file(file_path, content)
    print(f"Replaced UNK variables in {file_path}")

if __name__ == "__main__":
    main()