#!/bin/bash

# 06_utilities.c 美化脚本
# 用于重命名未知的变量名和函数名

echo "开始美化 06_utilities.c 文件..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 系统配置表变量
sed -i 's/DAT_180bf9930/SystemConfigTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9938/SystemConfigTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9940/SystemConfigTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9948/SystemConfigTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9990/SystemConfigTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9998/SystemConfigTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf99a0/SystemConfigTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf99a8/SystemConfigTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf99f0/SystemConfigTable9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf99f8/SystemConfigTable10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9a00/SystemConfigTable11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf9a08/SystemConfigTable12/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统状态变量
sed -i 's/DAT_180bfa230/SystemStatusTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa238/SystemStatusTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa240/SystemStatusTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa248/SystemStatusTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180a22fa8/SystemStatusTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa290/SystemStatusTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa298/SystemStatusTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa2a0/SystemStatusTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 内存管理变量
sed -i 's/DAT_180bfa480/MemoryPoolTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa488/MemoryPoolTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa490/MemoryPoolTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa498/MemoryPoolTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa518/MemoryPoolTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa520/MemoryPoolTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa528/MemoryPoolTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa530/MemoryPoolTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 线程管理变量
sed -i 's/DAT_180bfa5b0/ThreadTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa5b8/ThreadTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa5c0/ThreadTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa5c8/ThreadTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa648/ThreadTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa650/ThreadTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa658/ThreadTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa660/ThreadTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源管理变量
sed -i 's/DAT_180bfa6e0/ResourceTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa6e8/ResourceTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa6f0/ResourceTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa6f8/ResourceTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa780/ResourceTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa788/ResourceTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa790/ResourceTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa798/ResourceTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 事件管理变量
sed -i 's/DAT_180bfa818/EventTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa820/EventTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa828/EventTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa830/EventTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa8b0/EventTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa8b8/EventTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa8c0/EventTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa8c8/EventTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 同步管理变量
sed -i 's/DAT_180bfa948/SyncTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa950/SyncTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa958/SyncTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa960/SyncTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa9e0/SyncTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa9e8/SyncTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa9f0/SyncTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfa9f8/SyncTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 句柄管理变量
sed -i 's/DAT_180bfaa78/HandleTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaa80/HandleTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaa88/HandleTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaa90/HandleTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfab10/HandleTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfab18/HandleTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfab20/HandleTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfab28/HandleTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 上下文管理变量
sed -i 's/DAT_180bfaba8/ContextTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfabb0/ContextTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfabb8/ContextTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfabc0/ContextTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfac40/ContextTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfac48/ContextTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfac50/ContextTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfac58/ContextTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 缓存管理变量
sed -i 's/DAT_180bfacd8/CacheTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bface0/CacheTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bface8/CacheTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfacf0/CacheTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfad70/CacheTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfad78/CacheTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfad80/CacheTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfad88/CacheTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 缓冲区管理变量
sed -i 's/DAT_180bfae08/BufferTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfae10/BufferTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfae18/BufferTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfae20/BufferTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 配置管理变量
sed -i 's/DAT_180bfc150/ConfigTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfc140/ConfigTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfc160/ConfigTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfc168/ConfigTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 信号管理变量
sed -i 's/DAT_180bfaec0/SignalTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaec8/SignalTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaed0/SignalTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaed8/SignalTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaee0/SignalTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaee8/SignalTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 定时器管理变量
sed -i 's/DAT_180c92050/TimerTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c92058/TimerTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c92060/TimerTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c92068/TimerTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 数据管理变量
sed -i 's/DAT_180bfaef0/DataTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaef8/DataTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaf00/DataTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfaf08/DataTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 网络管理变量
sed -i 's/DAT_180bfb310/NetworkTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb318/NetworkTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb320/NetworkTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb328/NetworkTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 渲染管理变量
sed -i 's/DAT_180bfb730/RenderTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb738/RenderTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb740/RenderTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bfb748/RenderTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 输入管理变量
sed -i 's/DAT_180c9246c/InputTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c92490/InputTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c92480/InputTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c924ac/InputTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c924b0/InputTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c924b4/InputTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c924b8/InputTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 音频管理变量
sed -i 's/DAT_180a2c1d0/AudioTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180a2c338/AudioTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180a2c510/AudioTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 物理管理变量
sed -i 's/DAT_180bf6048/PhysicsTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf6050/PhysicsTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf6058/PhysicsTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf6060/PhysicsTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 动画管理变量
sed -i 's/DAT_180bf6498/AnimationTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf64a0/AnimationTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf64a8/AnimationTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf64b0/AnimationTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 安全管理变量
sed -i 's/DAT_180c967d4/SecurityTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c967d8/SecurityTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c967e0/SecurityTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c967e8/SecurityTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c967f0/SecurityTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c967f8/SecurityTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c96800/SecurityTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c96808/SecurityTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 调试管理变量
sed -i 's/DAT_180c0c6c0/DebugTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180be14a0/DebugTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180be1324/DebugTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c0c6d0/DebugTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c0c6d8/DebugTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c0d100/DebugTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c0e170/DebugTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c108d0/DebugTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 日志管理变量
sed -i 's/DAT_180c2bca0/LogTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c31148/LogTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c4ea58/LogTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c4ea60/LogTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 性能管理变量
sed -i 's/DAT_180c82841/PerformanceFlag1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c82840/PerformanceFlag2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c82864/PerformanceTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c91048/PerformanceTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed18/PerformanceTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86948/PerformanceTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86870/PerformanceTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c82868/PerformanceTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf00a8/PerformanceTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86928/PerformanceTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed10/PerformanceTable9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed08/PerformanceTable10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed68/PerformanceTable11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed00/PerformanceTable12/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed50/PerformanceTable13/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf0102/PerformanceFlag3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed58/PerformanceTable14/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed48/PerformanceTable15/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed40/PerformanceTable16/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86940/PerformanceTable17/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c82854/PerformanceTable18/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c82860/PerformanceFlag4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86920/PerformanceTable19/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c86960/PerformanceTable20/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 错误管理变量
sed -i 's/DAT_180bf52b8/ErrorTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf52bc/ErrorTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf5248/ErrorTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180c8ed60/ErrorTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_1809fc7ec/ErrorTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180bf5240/ErrorTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "完成 DAT_ 变量重命名"