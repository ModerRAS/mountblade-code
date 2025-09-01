#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
执行美化99_unmatched_functions.c文件的脚本
"""

import subprocess
import os

def run_beautify_script():
    script_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_99_complete.sh'
    
    # 检查脚本是否存在
    if not os.path.exists(script_path):
        print(f"错误: 脚本 {script_path} 不存在")
        return False
    
    # 检查脚本是否可执行
    if not os.access(script_path, os.X_OK):
        # 给脚本添加执行权限
        os.chmod(script_path, 0o755)
    
    try:
        # 执行脚本
        result = subprocess.run(['bash', script_path], 
                              capture_output=True, 
                              text=True, 
                              timeout=300)  # 5分钟超时
        
        if result.returncode == 0:
            print("脚本执行成功!")
            print("输出:")
            print(result.stdout)
            return True
        else:
            print("脚本执行失败!")
            print("错误输出:")
            print(result.stderr)
            return False
            
    except subprocess.TimeoutExpired:
        print("脚本执行超时!")
        return False
    except Exception as e:
        print(f"执行脚本时发生错误: {e}")
        return False

if __name__ == '__main__':
    print("开始执行美化脚本...")
    success = run_beautify_script()
    
    if success:
        print("美化完成!")
    else:
        print("美化失败!")