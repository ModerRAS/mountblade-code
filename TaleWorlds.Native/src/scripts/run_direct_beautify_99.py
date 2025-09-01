#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
执行器：运行美化脚本
"""

import sys
import os

# 添加脚本目录到Python路径
sys.path.insert(0, '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts')

# 导入并执行美化脚本
try:
    from direct_beautify_99 import beautify_file
    
    print("开始执行99_unmatched_functions.c文件美化...")
    success = beautify_file()
    
    if success:
        print("美化完成!")
    else:
        print("美化失败!")
        sys.exit(1)
        
except ImportError as e:
    print(f"导入错误: {e}")
    sys.exit(1)
except Exception as e:
    print(f"执行错误: {e}")
    sys.exit(1)