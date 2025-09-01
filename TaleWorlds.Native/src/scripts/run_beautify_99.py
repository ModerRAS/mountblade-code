#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import os

# 添加脚本目录到Python路径
sys.path.insert(0, '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts')

# 导入处理函数
from simple_beautify_99 import process_file

if __name__ == '__main__':
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    process_file(file_path)