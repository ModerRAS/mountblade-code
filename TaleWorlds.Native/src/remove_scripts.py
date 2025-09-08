#!/usr/bin/env python3
import os
import shutil

def cleanup_scripts_directory():
    """清理scripts目录"""
    scripts_dir = "scripts"
    
    if os.path.exists(scripts_dir):
        print(f"删除目录: {scripts_dir}")
        try:
            shutil.rmtree(scripts_dir)
            print(f"已删除目录: {scripts_dir}")
            return True
        except OSError as e:
            print(f"删除目录失败 {scripts_dir}: {e}")
            return False
    else:
        print(f"目录不存在: {scripts_dir}")
        return True

if __name__ == "__main__":
    cleanup_scripts_directory()