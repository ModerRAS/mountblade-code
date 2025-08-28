/*
 * 原始函数语义化别名定义
 * 自动生成的别名定义，用于提高代码可读性
 */
#include "unified_function_aliases.h"
#include "TaleWorlds.Native.Split.h"
// 06_utilities_part001.c - 101 个函数
// TaleWorlds.Native 工具模块 - 核心系统功能
/**
 * TaleWorlds.Native 工具模块第一部分
 *
 * 本模块包含游戏引擎的核心工具函数，主要负责：
 *
 * 1. 内存管理系统
 *    - 主内存分配器 (function_9414f0)
 *    - 内存池管理器 (function_941900)
 *    - 垃圾回收器 (function_941980)
 *
 * 2. 数据结构管理
 *    - 数据结构管理器 (function_941590)
 *    - 链表、哈希表、树结构、队列管理
 *
 * 3. 系统核心服务
 *    - 字符串处理系统 (function_9415b0)
 *    - 系统状态管理器 (function_9415d0)
 *    - 线程本地存储管理器 (function_9415f0)
 *    - 错误处理系统 (function_941610)
 *    - 性能监控器 (function_941630)
 *    - 日志系统 (function_941650)
 *    - 配置管理器 (function_941690)
 *    - 资源管理器 (function_9416d0)
 *
 * 4. 基础设施服务
 *    - 文件系统管理器 (function_941710)
 *    - 网络通信管理器 (function_9417a0)
 *    - 安全管理器 (function_9417c0)
 *    - 时间管理器 (function_941800)
 *    - 数学运算库 (function_941820)
 *    - 线程管理器 (function_9419a0)
 *
 * 5. 用户界面和多媒体
 *    - 图形渲染管理器 (function_941840)
 *    - 音频管理器 (function_941860)
 *    - 输入管理器 (function_941880)
 *    - 窗口管理器 (function_9418a0)
 *
 * 6. 事件和任务管理
 *    - 事件系统 (function_9418c0)
 *    - 任务调度器 (function_9418e0)
 *
 * 注意：这是简化的美化实现，原始代码包含更多的函数和数据结构。
 * 本文件主要展示了核心功能的组织结构和用途。
 */
// 内存管理核心函数
void* function_9414f0;  // 主内存分配器
void* system_ptr_5290;  // 内存池头部指针
void* system_ptr_52a0;  // 内存池尾部指针
void* system_ptr_52c0;  // 当前分配位置
void* system_ptr_52c8;  // 内存块大小表
void* system_ptr_52d0;  // 内存对齐表
void* system_ptr_52d8;  // 内存统计信息
int8_t system_ptr_5240;  // 内存管理器状态
void* system_ptr_52a8;  // 大块内存分配器
void* system_ptr_52b0;  // 小块内存分配器
int8_t system_ptr_52e0;  // 内存碎片整理状态
void* memory_allocator_3456;  // 虚拟内存管理器
uint64_t processed_var_9432;  // 已分配内存总数
uint64_t processed_var_9464;  // 可用内存总数
void* system_ptr_5320;  // 内存分配回调表
void* system_ptr_5328;  // 内存释放回调表
void* system_ptr_5330;  // 内存重分配回调表
void* system_ptr_5338;  // 内存验证回调表
void* memory_allocator_336;  // 内存调试信息
// 数据结构管理器
void* function_941590;  // 数据结构管理器主函数
uint8_t system_ptr_5770;  // 链表管理器状态
uint8_t system_ptr_5778;  // 哈希表管理器状态
uint8_t system_ptr_5780;  // 树结构管理器状态
uint8_t system_ptr_5788;  // 队列管理器状态
// 字符串处理系统
uint8_t function_9415b0;  // 字符串处理主函数
uint8_t system_ptr_5208;  // 字符串编码器状态
uint8_t system_ptr_5210;  // 字符串解码器状态
uint8_t system_ptr_5218;  // 字符串缓冲区状态
uint8_t system_ptr_5220;  // 字符串格式化器状态
uint8_t processed_var_672;  // 字符串池管理器
// 系统状态管理器
uint8_t function_9415d0;  // 系统状态管理主函数
uint8_t system_ptr_5bc0;  // 系统核心状态
uint8_t system_ptr_5bc8;  // 子系统状态表
uint8_t system_ptr_5bd0;  // 状态变化历史
uint8_t system_ptr_5bd8;  // 状态同步标志
uint8_t memory_allocator_3480;  // 状态事件管理器
// 线程本地存储(TLS)管理器
uint8_t function_9415f0;  // TLS管理主函数
uint8_t system_ptr_5c30;  // TLS分配器状态
uint8_t system_ptr_5c38;  // TLS索引表
uint8_t system_ptr_5c40;  // TLS数据块
uint8_t system_ptr_5c48;  // TLS清理器
// 错误处理系统
uint8_t function_941610;  // 错误处理主函数
uint8_t system_ptr_6080;  // 错误代码表
uint8_t system_ptr_6088;  // 错误消息表
uint8_t system_ptr_6090;  // 错误堆栈
uint8_t system_ptr_6098;  // 错误恢复处理器
// 性能监控器
uint8_t function_941630;  // 性能监控主函数
int8_t system_ptr_10f8;  // 监控器状态
// 日志系统
uint8_t function_941650;  // 日志系统主函数
int8_t system_ptr_1198;  // 日志管理器状态
// 配置管理器
uint8_t function_941690;  // 配置管理主函数
int8_t system_ptr_1238;  // 配置加载器状态
// 资源管理器
uint8_t function_9416d0;  // 资源管理主函数
int8_t system_ptr_12d8;  // 资源加载器状态
// 文件系统管理器
uint8_t function_941710;  // 文件系统主函数
uint8_t system_ptr_e0d0;  // 文件句柄表
uint8_t processed_var_4632;  // 文件缓存管理器
// 网络通信管理器
uint8_t function_9417a0;  // 网络通信主函数
// 安全管理器
uint8_t function_9417c0;  // 安全管理主函数
uint8_t system_ptr_190c;  // 权限检查器状态
uint8_t memory_allocator_3432;  // 加密模块
uint8_t processed_var_5216;  // 解密模块
uint8_t system_ptr_10a0;  // 认证管理器
uint8_t processed_var_7584;  // 安全日志记录器
// 时间管理器
uint8_t function_941800;  // 时间管理主函数
uint8_t system_ptr_64e0;  // 系统时钟状态
uint8_t system_ptr_64e8;  // 定时器管理器
uint8_t processed_var_7512;  // 时间戳生成器
uint8_t processed_var_7948;  // 时间格式化器
uint8_t system_ptr_6530;  // 事件调度器
uint8_t system_ptr_6538;  // 延迟执行队列
uint8_t system_ptr_6540;  // 时间同步器
// 数学运算库
uint8_t function_941820;  // 数学运算主函数
uint8_t system_ptr_6548;  // 基础运算器状态
uint8_t processed_var_7960;  // 向量计算器
uint8_t system_ptr_6590;  // 矩阵运算器
uint8_t system_ptr_6598;  // 三角函数表
uint8_t system_ptr_65a0;  // 随机数生成器
uint8_t system_ptr_65a8;  // 统计计算器
// 图形渲染管理器
uint8_t function_941840;  // 渲染管理主函数
uint8_t processed_var_7976;  // 渲染管线
uint8_t system_ptr_65c0;  // 着色器管理器
uint8_t system_ptr_65c8;  // 纹理管理器
uint8_t system_ptr_65d0;  // 缓冲区管理器
uint8_t system_ptr_65d8;  // 渲染状态管理器
// 音频管理器
uint8_t function_941860;  // 音频管理主函数
uint8_t processed_var_7992;  // 音频引擎
uint8_t system_ptr_65f0;  // 音效管理器
uint8_t system_ptr_65f8;  // 音乐播放器
uint8_t system_ptr_6600;  // 音频缓冲区
uint8_t system_ptr_6608;  // 音频流管理器
// 输入管理器
uint8_t function_941880;  // 输入管理主函数
uint8_t processed_var_8008;  // 输入设备驱动
uint8_t system_ptr_6620;  // 键盘管理器
uint8_t system_ptr_6628;  // 鼠标管理器
uint8_t system_ptr_6630;  // 手柄管理器
uint8_t system_ptr_6638;  // 触摸屏管理器
uint8_t processed_var_8024;  // 输入事件队列
// 窗口管理器
uint8_t function_9418a0;  // 窗口管理主函数
uint8_t system_ptr_6650;  // 窗口创建器
uint8_t system_ptr_6658;  // 窗口销毁器
uint8_t system_ptr_6660;  // 窗口状态管理器
uint8_t system_ptr_6668;  // 窗口事件处理器
uint8_t processed_var_8040;  // 窗口样式管理器
// 事件系统
uint8_t function_9418c0;  // 事件系统主函数
uint8_t system_ptr_6680;  // 事件分发器
uint8_t system_ptr_6688;  // 事件监听器
uint8_t system_ptr_6690;  // 事件队列
uint8_t system_ptr_6698;  // 事件过滤器
uint8_t processed_var_8048;  // 事件优先级管理器
// 任务调度器
uint8_t function_9418e0;  // 任务调度主函数
uint8_t system_ptr_66b0;  // 任务创建器
uint8_t system_ptr_66b8;  // 任务执行器
uint8_t system_ptr_66c0;  // 任务队列管理器
uint8_t system_ptr_66c8;  // 任务优先级调度器
uint8_t processed_var_8056;  // 任务监控器
// 内存池管理器
uint8_t function_941900;  // 内存池管理主函数
uint8_t system_ptr_52e8;  // 小对象池状态
uint8_t system_ptr_52f0;  // 中对象池状态
uint8_t system_ptr_52f8;  // 大对象池状态
uint8_t system_ptr_5300;  // 池分配策略
uint8_t ui_system_data_1568;  // 池回收器
// 垃圾回收器
uint8_t function_941980;  // 垃圾回收主函数
uint8_t system_ptr_5738;  // GC标记器
uint8_t system_ptr_5740;  // GC清扫器
uint8_t system_ptr_5748;  // GC压缩器
uint8_t system_ptr_5750;  // GC统计器
uint8_t ui_system_data_1616;  // GC调度器
// 线程管理器
uint8_t function_9419a0;  // 线程管理主函数
// 函数: uint8_t function_9419c0;
uint8_t function_9419c0;
uint8_t system_ptr_196c;
uint8_t processed_var_7352;
uint8_t system_ptr_19e0;
uint8_t rendering_buffer_2216;
uint8_t system_ptr_6750;
uint8_t system_ptr_6758;
uint8_t system_ptr_6760;
uint8_t system_ptr_6768;
uint8_t system_ptr_67a8;
uint8_t system_ptr_67b0;
uint8_t system_ptr_67b8;
uint8_t system_ptr_67c0;
uint8_t system_ptr_6800;
uint8_t system_ptr_6808;
uint8_t system_ptr_6810;
uint8_t system_ptr_6818;
uint8_t system_ptr_6858;
uint8_t system_ptr_6860;
uint8_t system_ptr_6868;
uint8_t system_ptr_6870;
uint8_t system_ptr_68b0;
uint8_t system_ptr_68b8;
uint8_t system_ptr_68c0;
uint8_t system_ptr_68c8;
uint8_t system_ptr_6908;
uint8_t system_ptr_6910;
uint8_t system_ptr_6918;
uint8_t system_ptr_6920;
uint8_t system_ptr_6960;
uint8_t system_ptr_6968;
uint8_t system_ptr_6970;
uint8_t system_ptr_6978;
uint8_t system_ptr_69b8;
uint8_t system_ptr_69c0;
uint8_t system_ptr_69c8;
uint8_t system_ptr_69d0;
uint8_t system_ptr_6a10;
uint8_t system_ptr_6a18;
uint8_t system_ptr_6a20;
uint8_t system_ptr_6a28;
uint8_t system_ptr_6a68;
uint8_t system_ptr_6a70;
uint8_t system_ptr_6a78;
uint8_t system_ptr_6a80;
uint8_t system_ptr_6ac0;
uint8_t system_ptr_6ac8;
uint8_t system_ptr_6ad0;
uint8_t system_ptr_6ad8;
uint8_t system_ptr_6b18;
uint8_t system_ptr_6b20;
uint8_t system_ptr_6b28;
uint8_t system_ptr_6b30;
uint8_t system_ptr_6b70;
uint8_t system_ptr_6b78;
uint8_t system_ptr_6b80;
uint8_t system_ptr_6b88;
uint8_t system_ptr_6bc8;
uint8_t system_ptr_6bd0;
uint8_t system_ptr_6bd8;
uint8_t system_ptr_6be0;
uint8_t system_ptr_6c20;
uint8_t system_ptr_6c28;
uint8_t system_ptr_6c30;
uint8_t system_ptr_6c38;
uint8_t system_ptr_6c78;
uint8_t system_ptr_6c80;
uint8_t system_ptr_6c88;
uint8_t system_ptr_6c90;
uint8_t system_ptr_6cd0;
uint8_t system_ptr_6cd8;
uint8_t system_ptr_6ce0;
uint8_t system_ptr_6ce8;
uint8_t system_ptr_6d28;
uint8_t system_ptr_6d30;
uint8_t system_ptr_6d38;
uint8_t system_ptr_6d40;
uint8_t system_ptr_6d80;
uint8_t system_ptr_6d88;
uint8_t system_ptr_6d90;
uint8_t system_ptr_6d98;
uint8_t system_ptr_6dd8;
uint8_t system_ptr_6de0;
uint8_t system_ptr_6de8;
uint8_t system_ptr_6df0;
uint8_t system_ptr_6e30;
uint8_t system_ptr_6e38;
uint8_t system_ptr_6e40;
uint8_t system_ptr_6e48;
uint8_t system_ptr_6e88;
uint8_t system_ptr_6e90;
uint8_t system_ptr_6e98;
uint8_t system_ptr_6ea0;
uint8_t system_ptr_6ee0;
uint8_t system_ptr_6ee8;
uint8_t system_ptr_6ef0;
uint8_t system_ptr_6ef8;
uint8_t system_ptr_6f38;
uint8_t system_ptr_6f40;
uint8_t system_ptr_6f48;
uint8_t system_ptr_6f50;
uint8_t system_ptr_6f90;
uint8_t system_ptr_6f98;
uint8_t system_ptr_6fa0;
uint8_t system_ptr_6fa8;
uint8_t system_ptr_6fe8;
uint8_t system_ptr_6ff0;
uint8_t system_ptr_6ff8;
uint8_t system_ptr_7000;
uint8_t system_ptr_7040;
uint8_t system_ptr_7048;
uint8_t system_ptr_7050;
uint8_t system_ptr_7058;
uint8_t system_ptr_7098;
uint8_t system_ptr_70a0;
uint8_t system_ptr_70a8;
uint8_t system_ptr_70b0;
uint8_t system_ptr_70f0;
uint8_t system_ptr_70f8;
uint8_t system_ptr_7100;
uint8_t system_ptr_7108;
uint8_t system_ptr_7148;
uint8_t system_ptr_7150;
uint8_t system_ptr_7158;
uint8_t system_ptr_7160;
uint8_t system_ptr_71a0;
uint8_t system_ptr_71a8;
uint8_t system_ptr_71b0;
uint8_t system_ptr_71b8;
uint8_t system_ptr_71f8;
uint8_t system_ptr_7200;
uint8_t system_ptr_7208;
uint8_t system_ptr_7210;
uint8_t processed_var_7296;
uint8_t system_buffer_ptr;
uint8_t processed_var_9040;
uint8_t processed_var_8744;
uint8_t processed_var_8768;
uint8_t processed_var_8784;
uint8_t processed_var_8800;
uint8_t processed_var_8816;
uint8_t processed_var_8840;
uint8_t processed_var_8872;
uint8_t processed_var_8896;
uint8_t processed_var_8912;
uint8_t processed_var_8936;
uint8_t processed_var_8944;
uint8_t processed_var_8976;
uint8_t processed_var_9000;
uint8_t processed_var_9032;
uint8_t processed_var_9064;
uint8_t processed_var_9088;
uint8_t processed_var_9112;
uint8_t processed_var_9136;
uint8_t processed_var_9168;
uint8_t processed_var_9192;
uint8_t processed_var_9224;
uint8_t processed_var_9248;
uint8_t processed_var_9272;
uint8_t processed_var_9296;
uint8_t processed_var_9320;
uint8_t processed_var_9336;
uint8_t processed_var_9360;
uint8_t processed_var_9384;
uint8_t processed_var_9408;
uint8_t processed_var_9504;
uint8_t system_ptr_7250;
uint8_t system_ptr_7258;
uint8_t system_ptr_7260;
// 函数: uint8_t function_941b90;
uint8_t function_941b90;
uint8_t system_ptr_7268;
uint8_t processed_var_9144;
uint8_t system_ptr_72b0;
uint8_t system_ptr_72b8;
uint8_t system_ptr_72c0;
uint8_t system_ptr_72c8;
// 函数: uint8_t function_941bb0;
uint8_t function_941bb0;
uint8_t processed_var_9088;
uint8_t system_ptr_7310;
uint8_t system_ptr_7318;
uint8_t system_ptr_7320;
uint8_t system_ptr_7328;
// 函数: uint8_t function_941bd0;
uint8_t function_941bd0;
uint8_t processed_var_9160;
uint8_t system_ptr_7370;
uint8_t system_ptr_7378;
uint8_t system_ptr_7380;
uint8_t system_ptr_7388;
uint8_t system_ptr_7408;
uint8_t system_ptr_7410;
uint8_t system_ptr_7418;
uint8_t system_ptr_7420;
uint8_t system_ptr_74a0;
uint8_t system_ptr_74a8;
uint8_t system_ptr_74b0;
uint8_t system_ptr_74b8;
uint8_t system_ptr_7538;
uint8_t system_ptr_7540;
uint8_t system_ptr_7548;
uint8_t system_ptr_7550;
uint8_t system_ptr_75d0;
uint8_t system_ptr_75d8;
uint8_t system_ptr_75e0;
uint8_t system_ptr_75e8;
uint8_t system_ptr_7668;
uint8_t system_ptr_7670;
uint8_t system_ptr_7678;
uint8_t system_ptr_7680;
uint8_t system_ptr_7700;
uint8_t system_ptr_7708;
uint8_t system_ptr_7710;
uint8_t system_ptr_7718;
uint8_t system_ptr_7798;
uint8_t system_ptr_77a0;
uint8_t system_ptr_77a8;
uint8_t system_ptr_77b0;
uint8_t system_ptr_7830;
uint8_t system_ptr_7838;
uint8_t system_ptr_7840;
uint8_t system_ptr_7848;
uint8_t system_ptr_78c8;
uint8_t system_ptr_78d0;
uint8_t system_ptr_78d8;
uint8_t system_ptr_78e0;
uint8_t system_ptr_7960;
uint8_t system_ptr_7968;
uint8_t system_ptr_7970;
uint8_t system_ptr_7978;
uint8_t system_ptr_79f8;
uint8_t system_ptr_7a00;
uint8_t system_ptr_7a08;
uint8_t system_ptr_7a10;
uint8_t system_ptr_7a90;
uint8_t system_ptr_7a98;
uint8_t system_ptr_7aa0;
uint8_t system_ptr_7aa8;
uint8_t system_ptr_7b28;
uint8_t system_ptr_7b30;
uint8_t system_ptr_7b38;
uint8_t system_ptr_7b40;
uint8_t system_ptr_7bc0;
uint8_t system_ptr_7bc8;
uint8_t system_ptr_7bd0;
uint8_t system_ptr_7bd8;
uint8_t system_ptr_7c58;
uint8_t system_ptr_7c60;
uint8_t system_ptr_7c68;
uint8_t system_ptr_7c70;
uint8_t processed_var_7632;
uint8_t ui_system_data_1536;
uint8_t ui_system_data_1552;
uint8_t ui_system_data_1568;
uint8_t ui_system_data_1584;
uint8_t ui_system_data_1608;
uint8_t ui_system_data_1624;
uint8_t ui_system_data_1640;
uint8_t ui_system_data_1656;
uint8_t ui_system_data_1680;
uint8_t ui_system_data_1712;
uint8_t ui_system_data_1744;
uint8_t ui_system_data_1768;
uint8_t ui_system_data_1792;
uint8_t ui_system_data_1816;
uint8_t ui_system_data_1840;
uint8_t ui_system_data_1872;
uint8_t system_ptr_1d54;
uint8_t processed_var_7240;
uint8_t system_ptr_1d5c;
uint8_t processed_var_8184;
uint8_t system_ptr_7e90;
uint8_t system_ptr_7e98;
uint8_t system_ptr_7ea0;
uint8_t system_ptr_7ea8;
uint8_t system_ptr_7ee8;
uint8_t system_ptr_7ef0;
uint8_t system_ptr_7ef8;
uint8_t system_ptr_7f00;
uint8_t system_ptr_7f40;
uint8_t system_ptr_7f48;
uint8_t system_ptr_7f50;
uint8_t system_ptr_7f58;
uint8_t system_ptr_7f98;
uint8_t system_ptr_7fa0;
uint8_t system_ptr_7fa8;
uint8_t system_ptr_7fb0;
uint8_t system_ptr_7ff0;
uint8_t system_ptr_7ff8;
uint8_t system_ptr_8000;
uint8_t system_ptr_8008;
uint8_t system_ptr_8048;
uint8_t system_ptr_8050;
uint8_t system_ptr_8058;
uint8_t system_ptr_8060;
uint8_t system_ptr_80a0;
uint8_t system_ptr_80a8;
uint8_t system_ptr_80b0;
uint8_t system_ptr_80b8;
uint8_t system_ptr_80f8;
uint8_t system_ptr_8100;
uint8_t system_ptr_8108;
uint8_t system_ptr_8110;
uint8_t system_ptr_8150;
uint8_t system_ptr_8158;
uint8_t system_ptr_8160;
uint8_t system_ptr_8168;
uint8_t system_ptr_81a8;
uint8_t system_ptr_81b0;
uint8_t system_ptr_81b8;
uint8_t system_ptr_81c0;
uint8_t system_ptr_8200;
uint8_t system_ptr_8208;
uint8_t system_ptr_8210;
uint8_t system_ptr_8218;
uint8_t system_ptr_8258;
uint8_t system_ptr_8260;
uint8_t system_ptr_8268;
uint8_t system_ptr_8270;
uint8_t system_ptr_82b0;
uint8_t system_ptr_82b8;
uint8_t system_ptr_82c0;
uint8_t system_ptr_82c8;
uint8_t system_ptr_8308;
uint8_t system_ptr_8310;
uint8_t system_ptr_8318;
uint8_t system_ptr_8320;
uint8_t system_ptr_8360;
uint8_t system_ptr_8368;
uint8_t system_ptr_8370;
uint8_t system_ptr_8378;
uint8_t system_ptr_83b8;
uint8_t system_ptr_83c0;
uint8_t system_ptr_83c8;
uint8_t system_ptr_83d0;
uint8_t system_ptr_8410;
uint8_t system_ptr_8418;
uint8_t system_ptr_8420;
uint8_t system_ptr_8428;
uint8_t system_ptr_8468;
uint8_t system_ptr_8470;
uint8_t system_ptr_8478;
uint8_t system_ptr_8480;
uint8_t system_ptr_84c0;
uint8_t system_ptr_84c8;
uint8_t system_ptr_84d0;
uint8_t system_ptr_84d8;
uint8_t system_ptr_8518;
uint8_t system_ptr_8520;
uint8_t system_ptr_8528;
uint8_t system_ptr_8530;
uint8_t system_ptr_8570;
uint8_t system_ptr_8578;
uint8_t system_ptr_8580;
uint8_t system_ptr_8588;
uint8_t system_ptr_85c8;
uint8_t system_ptr_85d0;
uint8_t system_ptr_85d8;
uint8_t system_ptr_85e0;
uint8_t system_ptr_8620;
uint8_t system_ptr_8628;
uint8_t system_ptr_8630;
uint8_t system_ptr_8638;
uint8_t system_ptr_8678;
uint8_t system_ptr_8680;
uint8_t system_ptr_8688;
uint8_t system_ptr_8690;
uint8_t system_ptr_86d0;
uint8_t system_ptr_86d8;
uint8_t system_ptr_86e0;
uint8_t system_ptr_86e8;
uint8_t system_ptr_8728;
uint8_t system_ptr_8730;
uint8_t system_ptr_8738;
uint8_t system_ptr_8740;
uint8_t system_ptr_8780;
uint8_t system_ptr_8788;
uint8_t system_ptr_8790;
uint8_t system_ptr_8798;
uint8_t system_ptr_87d8;
uint8_t system_ptr_87e0;
uint8_t system_ptr_87e8;
uint8_t system_ptr_87f0;
uint8_t system_ptr_8830;
uint8_t system_ptr_8838;
uint8_t system_ptr_8840;
uint8_t system_ptr_8848;
uint8_t system_ptr_8888;
uint8_t system_ptr_8890;
uint8_t system_ptr_8898;
uint8_t system_ptr_88a0;
uint8_t system_ptr_88e0;
uint8_t system_ptr_88e8;
uint8_t system_ptr_88f0;
uint8_t system_ptr_88f8;
uint8_t system_ptr_8938;
uint8_t system_ptr_8940;
uint8_t system_ptr_8948;
uint8_t system_ptr_8950;
uint8_t processed_var_7664;
uint8_t system_ptr_1d60;
uint8_t processed_var_8872;
uint8_t system_ptr_1d64;
uint8_t processed_var_9280;
uint8_t system_ptr_1d68;
uint8_t rendering_buffer_264;
uint8_t system_ptr_1d6c;
uint8_t system_ptr_4640;
uint8_t system_ptr_1d70;
uint8_t processed_var_736;
uint8_t system_ptr_1da4;
uint8_t processed_var_8816;
uint8_t system_ptr_90b0;
uint8_t system_ptr_90b8;
uint8_t system_ptr_90c0;
uint8_t system_ptr_90c8;
// 函数: uint8_t function_941d00;
uint8_t function_941d00;
uint8_t system_ptr_5b88;
uint8_t system_ptr_5b90;
uint8_t system_ptr_5b98;
uint8_t system_ptr_5ba0;
// 函数: uint8_t function_941d20;
uint8_t function_941d20;
uint8_t system_ptr_1da8;
uint8_t system_ptr_6c50;
uint8_t system_ptr_1dac;
uint8_t system_ptr_6c38;
uint8_t system_ptr_1ee8;
uint8_t processed_var_4568;
uint8_t system_ptr_1ef8;
uint8_t memory_allocator_368;
uint8_t system_ptr_1efc;
uint8_t processed_var_520;
uint8_t system_ptr_1f00;
uint8_t rendering_buffer_2160;
uint8_t system_ptr_1f04;
uint8_t rendering_buffer_2672;
uint8_t system_ptr_1f08;
uint8_t processed_var_4304;
uint8_t system_ptr_1f0c;
uint8_t processed_var_4936;
uint8_t system_ptr_1f10;
uint8_t processed_var_7256;
uint8_t system_ptr_1f14;
uint8_t processed_var_4504;
uint8_t system_ptr_1f30;
uint8_t rendering_buffer_2448;
uint8_t system_ptr_1f68;
uint8_t processed_var_7304;
uint8_t system_ptr_91b0;
uint8_t system_ptr_91b8;
uint8_t system_ptr_91c0;
uint8_t system_ptr_91c8;
uint8_t processed_var_8840;
// 函数: uint8_t function_941f00;
uint8_t function_941f00;
uint8_t system_ptr_9210;
uint8_t system_ptr_9218;
uint8_t system_ptr_9220;
uint8_t system_ptr_9228;
uint8_t processed_var_8928;
// 函数: uint8_t function_941f20;
uint8_t function_941f20;
// 函数: uint8_t function_941f40;
uint8_t function_941f40;
uint8_t system_ptr_9270;
uint8_t system_ptr_9278;
uint8_t system_ptr_9280;
uint8_t system_ptr_9288;
uint8_t processed_var_8904;
uint8_t system_ptr_92d0;
// 函数: uint8_t function_941f60;
uint8_t function_941f60;
uint8_t system_ptr_92d8;
uint8_t system_ptr_92e0;
uint8_t system_ptr_92e8;
uint8_t processed_var_8880;
uint8_t system_ptr_9330;
uint8_t system_ptr_9338;
// 函数: uint8_t function_941f80;
uint8_t function_941f80;
uint8_t system_ptr_9340;
uint8_t system_ptr_9348;
uint8_t processed_var_8864;
uint8_t system_ptr_9390;
uint8_t system_ptr_9398;
uint8_t system_ptr_93a0;
// 函数: uint8_t function_941fa0;
uint8_t function_941fa0;
uint8_t system_ptr_93a8;
uint8_t processed_var_9016;
uint8_t system_ptr_93f0;
uint8_t system_ptr_93f8;
uint8_t system_ptr_9400;
uint8_t system_ptr_9408;
// 函数: uint8_t function_941fc0;
uint8_t function_941fc0;
uint8_t processed_var_8992;
uint8_t system_ptr_9450;
uint8_t system_ptr_9458;
uint8_t system_ptr_9460;
uint8_t system_ptr_9468;
// 函数: uint8_t function_941fe0;
uint8_t function_941fe0;
uint8_t processed_var_8968;
uint8_t system_ptr_94b0;
uint8_t system_ptr_94b8;
uint8_t system_ptr_94c0;
uint8_t system_ptr_94c8;
// 函数: uint8_t function_942000;
uint8_t function_942000;
uint8_t processed_var_8952;
uint8_t system_ptr_9510;
uint8_t system_ptr_9518;
uint8_t system_ptr_9520;
uint8_t system_ptr_9528;
uint8_t processed_var_9112;
// 函数: uint8_t function_942020;
uint8_t function_942020;
uint8_t system_ptr_9570;
uint8_t system_ptr_9578;
uint8_t system_ptr_9580;
uint8_t system_ptr_9588;
uint8_t processed_var_9088;
// 函数: uint8_t function_942040;
uint8_t function_942040;
uint8_t system_ptr_95d0;
uint8_t system_ptr_95d8;
uint8_t system_ptr_95e0;
uint8_t system_ptr_95e8;
uint8_t processed_var_9064;
// 函数: uint8_t function_942060;
uint8_t function_942060;
uint8_t system_ptr_9630;
uint8_t system_ptr_9638;
uint8_t system_ptr_9640;
uint8_t system_ptr_9648;
uint8_t processed_var_9040;
// 函数: uint8_t function_942080;
uint8_t function_942080;
uint8_t system_ptr_9690;
uint8_t system_ptr_9698;
uint8_t system_ptr_96a0;
uint8_t system_ptr_96a8;
uint8_t system_ptr_2cb0;
// 函数: uint8_t function_9420a0;
uint8_t function_9420a0;
uint8_t system_ptr_96f0;
uint8_t system_ptr_96f8;
uint8_t system_ptr_9700;
uint8_t system_ptr_9708;
uint8_t processed_var_9192;
// 函数: uint8_t function_9420c0;
uint8_t function_9420c0;
uint8_t system_ptr_9750;
uint8_t system_ptr_9758;
uint8_t system_ptr_9760;
uint8_t system_ptr_9768;
uint8_t processed_var_9152;
// 函数: uint8_t function_9420e0;
uint8_t function_9420e0;
uint8_t system_ptr_97b0;
uint8_t system_ptr_97b8;
uint8_t system_ptr_97c0;
uint8_t system_ptr_97c8;
uint8_t processed_var_9128;
// 函数: uint8_t function_942100;
uint8_t function_942100;
uint8_t system_ptr_9810;
uint8_t system_ptr_9818;
uint8_t system_ptr_9820;
uint8_t system_ptr_9828;
uint8_t processed_var_9336;
// 函数: uint8_t function_942120;
uint8_t function_942120;
// 函数: uint8_t function_942140;
uint8_t function_942140;
uint8_t system_ptr_9870;
uint8_t system_ptr_9878;
uint8_t system_ptr_9880;
uint8_t system_ptr_9888;
uint8_t processed_var_9304;
uint8_t system_ptr_98d0;
// 函数: uint8_t function_942160;
uint8_t function_942160;
uint8_t system_ptr_98d8;
uint8_t system_ptr_98e0;
uint8_t system_ptr_98e8;
uint8_t processed_var_9272;
uint8_t system_ptr_9930;
uint8_t system_ptr_9938;
// 函数: uint8_t function_942180;
uint8_t function_942180;
uint8_t system_ptr_9940;
uint8_t system_ptr_9948;
uint8_t processed_var_9240;
uint8_t system_ptr_9990;
uint8_t system_ptr_9998;
uint8_t system_ptr_99a0;
// 函数: uint8_t function_9421a0;
uint8_t function_9421a0;
uint8_t system_ptr_99a8;
uint8_t processed_var_9472;
uint8_t system_ptr_99f0;
uint8_t system_ptr_99f8;
uint8_t system_ptr_9a00;
uint8_t system_ptr_9a08;
// 函数: uint8_t function_9421c0;
uint8_t function_9421c0;
uint8_t processed_var_9432;
uint8_t system_ptr_9a50;
uint8_t system_ptr_9a58;
uint8_t system_ptr_9a60;
uint8_t system_ptr_9a68;
// 函数: uint8_t function_9421e0;
uint8_t function_9421e0;
uint8_t processed_var_9400;
uint8_t system_ptr_9ab0;
uint8_t system_ptr_9ab8;
uint8_t system_ptr_9ac0;
uint8_t system_ptr_9ac8;
// 函数: uint8_t function_942200;
uint8_t function_942200;
uint8_t system_ptr_2d48;
uint8_t system_ptr_9b10;
uint8_t system_ptr_9b18;
uint8_t system_ptr_9b20;
uint8_t system_ptr_9b28;
uint8_t processed_var_9616;
// 函数: uint8_t function_942220;
uint8_t function_942220;
uint8_t system_ptr_9b70;
uint8_t system_ptr_9b78;
uint8_t system_ptr_9b80;
uint8_t system_ptr_9b88;
uint8_t processed_var_9584;
// 函数: uint8_t function_942240;
uint8_t function_942240;
uint8_t system_ptr_9bd0;
uint8_t system_ptr_9bd8;
uint8_t system_ptr_9be0;
uint8_t system_ptr_9be8;
uint8_t processed_var_9544;
// 函数: uint8_t function_942260;
uint8_t function_942260;
uint8_t system_ptr_9c30;
uint8_t system_ptr_9c38;
uint8_t system_ptr_9c40;
uint8_t system_ptr_9c48;
uint8_t processed_var_9504;
// 函数: uint8_t function_942280;
uint8_t function_942280;
uint8_t system_ptr_9c90;
uint8_t system_ptr_9c98;
uint8_t system_ptr_9ca0;
uint8_t system_ptr_9ca8;
uint8_t processed_var_9728;
// 函数: uint8_t function_9422a0;
uint8_t function_9422a0;
uint8_t system_ptr_9cf0;
uint8_t system_ptr_9cf8;
uint8_t system_ptr_9d00;
uint8_t system_ptr_9d08;
uint8_t processed_var_9696;
// 函数: uint8_t function_9422c0;
uint8_t function_9422c0;
uint8_t system_ptr_9d50;
uint8_t system_ptr_9d58;
uint8_t system_ptr_9d60;
uint8_t system_ptr_9d68;
uint8_t processed_var_9664;
// 函数: uint8_t function_9422e0;
uint8_t function_9422e0;
uint8_t system_ptr_9db0;
uint8_t system_ptr_9db8;
uint8_t system_ptr_9dc0;
uint8_t system_ptr_9dc8;
uint8_t processed_var_9640;
// 函数: uint8_t function_942300;
uint8_t function_942300;
uint8_t system_ptr_9e10;
uint8_t system_ptr_9e18;
uint8_t system_ptr_9e20;
uint8_t system_ptr_9e28;
uint8_t processed_var_9848;
// 函数: uint8_t function_942320;
uint8_t function_942320;
// 函数: uint8_t function_942340;
uint8_t function_942340;
uint8_t system_ptr_9e70;
uint8_t system_ptr_9e78;
uint8_t system_ptr_9e80;
uint8_t system_ptr_9e88;
uint8_t processed_var_9824;
uint8_t system_ptr_9ed0;
// 函数: uint8_t function_942360;
uint8_t function_942360;
uint8_t system_ptr_9ed8;
uint8_t system_ptr_9ee0;
uint8_t system_ptr_9ee8;
uint8_t processed_var_9800;
uint8_t system_ptr_9f30;
uint8_t system_ptr_9f38;
// 函数: uint8_t function_942380;
uint8_t function_942380;
uint8_t system_ptr_9f40;
uint8_t system_ptr_9f48;
uint8_t processed_var_9768;
uint8_t system_ptr_9f90;
uint8_t system_ptr_9f98;
uint8_t system_ptr_9fa0;
// 函数: uint8_t function_9423a0;
uint8_t function_9423a0;
uint8_t system_ptr_9fa8;
uint8_t processed_var_9952;
uint8_t system_ptr_9ff0;
uint8_t system_ptr_9ff8;
uint8_t system_ptr_a000;
uint8_t system_ptr_a008;
// 函数: uint8_t function_9423c0;
uint8_t function_9423c0;
uint8_t processed_var_9928;
uint8_t system_ptr_a050;
uint8_t system_ptr_a058;
uint8_t system_ptr_a060;
uint8_t system_ptr_a068;
// 函数: uint8_t function_9423e0;
uint8_t function_9423e0;
uint8_t processed_var_9904;
uint8_t system_ptr_a0b0;
uint8_t system_ptr_a0b8;
uint8_t system_ptr_a0c0;
uint8_t system_ptr_a0c8;
// 函数: uint8_t function_942400;
uint8_t function_942400;
uint8_t processed_var_9872;
uint8_t system_ptr_a110;
uint8_t system_ptr_a118;
uint8_t system_ptr_a120;
uint8_t system_ptr_a128;
uint8_t processed_var_88;
// 函数: uint8_t function_942420;
uint8_t function_942420;
uint8_t system_ptr_a170;
uint8_t system_ptr_a178;
uint8_t system_ptr_a180;
uint8_t system_ptr_a188;
uint8_t processed_var_64;
// 函数: uint8_t function_942440;
uint8_t function_942440;
uint8_t system_ptr_a1d0;
uint8_t system_ptr_a1d8;
uint8_t system_ptr_a1e0;
uint8_t system_ptr_a1e8;
uint8_t system_ptr_2fd0;
// 函数: uint8_t function_942460;
uint8_t function_942460;
uint8_t system_ptr_a230;
uint8_t system_ptr_a238;
uint8_t system_ptr_a240;
uint8_t system_ptr_a248;
uint8_t system_ptr_2fa8;
// 函数: uint8_t function_942480;
uint8_t function_942480;
uint8_t system_ptr_a290;
uint8_t system_ptr_a298;
uint8_t system_ptr_a2a0;
uint8_t system_ptr_a2a8;
uint8_t ui_system_data_168;
// 函数: uint8_t function_9424a0;
uint8_t function_9424a0;
// 函数: uint8_t function_9424c0;
uint8_t function_9424c0;
// 函数: uint8_t function_942520;
uint8_t function_942520;
// 函数: uint8_t function_942580;
uint8_t function_942580;
// 函数: uint8_t function_9425e0;
uint8_t function_9425e0;
uint8_t system_ptr_1f6c;
uint8_t processed_var_4992;
uint8_t system_ptr_1fcc;
uint8_t processed_var_6248;
uint8_t system_ptr_a350;
uint8_t system_ptr_a358;
uint8_t system_ptr_a360;
uint8_t system_ptr_a368;
uint8_t system_ptr_a3e8;
uint8_t system_ptr_a3f0;
uint8_t system_ptr_a3f8;
uint8_t system_ptr_a400;
uint8_t system_ptr_a480;
uint8_t system_ptr_a488;
uint8_t system_ptr_a490;
uint8_t system_ptr_a498;
uint8_t system_ptr_a518;
uint8_t system_ptr_a520;
uint8_t system_ptr_a528;
uint8_t system_ptr_a530;
uint8_t system_ptr_a5b0;
uint8_t system_ptr_a5b8;
uint8_t system_ptr_a5c0;
uint8_t system_ptr_a5c8;
uint8_t system_ptr_a648;
uint8_t system_ptr_a650;
uint8_t system_ptr_a658;
uint8_t system_ptr_a660;
uint8_t system_ptr_a6e0;
uint8_t system_ptr_a6e8;
uint8_t system_ptr_a6f0;
uint8_t system_ptr_a6f8;
uint8_t processed_var_0;
uint8_t processed_var_8504;
uint8_t processed_var_8520;
uint8_t processed_var_8536;
uint8_t processed_var_8544;
uint8_t processed_var_9608;
uint8_t processed_var_7312;
uint8_t processed_var_7328;
uint8_t system_ptr_a780;
uint8_t system_ptr_a788;
uint8_t system_ptr_a790;
uint8_t system_ptr_a798;
uint8_t system_ptr_a818;
uint8_t system_ptr_a820;
uint8_t system_ptr_a828;
uint8_t system_ptr_a830;
uint8_t system_ptr_a8b0;
uint8_t system_ptr_a8b8;
uint8_t system_ptr_a8c0;
uint8_t system_ptr_a8c8;
uint8_t system_ptr_a948;
uint8_t system_ptr_a950;
uint8_t system_ptr_a958;
uint8_t system_ptr_a960;
uint8_t system_ptr_a9e0;
uint8_t system_ptr_a9e8;
uint8_t system_ptr_a9f0;
uint8_t system_ptr_a9f8;
uint8_t system_ptr_aa78;
uint8_t system_ptr_aa80;
uint8_t system_ptr_aa88;
uint8_t system_ptr_aa90;
uint8_t memory_allocator_32;
uint8_t processed_var_7184;
uint8_t processed_var_7216;
uint8_t processed_var_7248;
uint8_t processed_var_7280;
uint8_t processed_var_7576;
uint8_t processed_var_7616;
uint8_t system_ptr_ab10;
uint8_t system_ptr_ab18;
uint8_t system_ptr_ab20;
uint8_t system_ptr_ab28;
uint8_t system_ptr_aba8;
uint8_t system_ptr_abb0;
uint8_t system_ptr_abb8;
uint8_t system_ptr_abc0;
uint8_t system_ptr_ac40;
uint8_t system_ptr_ac48;
uint8_t system_ptr_ac50;
uint8_t system_ptr_ac58;
uint8_t system_ptr_acd8;
uint8_t system_ptr_ace0;
uint8_t system_ptr_ace8;
uint8_t system_ptr_acf0;
uint8_t system_ptr_ad70;
uint8_t system_ptr_ad78;
uint8_t system_ptr_ad80;
uint8_t system_ptr_ad88;
uint8_t system_ptr_ae08;
uint8_t system_ptr_ae10;
uint8_t system_ptr_ae18;
uint8_t system_ptr_ae20;
uint8_t processed_var_64;
uint8_t processed_var_7656;
uint8_t processed_var_7680;
// 函数: uint8_t function_942660;
uint8_t function_942660;
uint8_t system_ptr_c150;
int8_t system_cache_config;
uint8_t system_ptr_c160;
uint8_t system_ptr_c168;
uint64_t processed_var_7816;
uint8_t system_ptr_aec0;
uint8_t system_ptr_aec8;
uint8_t system_ptr_aed0;
uint8_t system_ptr_aed8;
// 函数: uint8_t function_942750;
uint8_t function_942750;
uint8_t system_ptr_aee0;
uint8_t system_ptr_aee8;
uint8_t system_ptr_2050;
uint8_t system_ptr_2058;
uint8_t system_ptr_2060;
uint8_t system_ptr_2068;
// 函数: uint8_t function_942790;
uint8_t function_942790;
uint8_t system_ptr_aef0;
uint8_t system_ptr_aef8;
uint8_t system_ptr_af00;
uint8_t system_ptr_af08;
// 函数: uint8_t function_9427d0;
uint8_t function_9427d0;
uint8_t processed_var_9096;
uint8_t system_ptr_b310;
uint8_t system_ptr_b318;
uint8_t system_ptr_b320;
uint8_t system_ptr_b328;
uint8_t processed_var_9116;
// 函数: uint8_t function_9427f0;
uint8_t function_9427f0;
uint8_t system_ptr_b730;
uint8_t system_ptr_b738;
uint8_t system_ptr_b740;
uint8_t system_ptr_b748;
uint8_t processed_var_9120;
// 函数: uint8_t function_942810;
uint8_t function_942810;
uint8_t system_ptr_246c;
uint8_t ui_system_data_1824;
// 函数: uint8_t function_942890;
uint8_t function_942890;
uint8_t system_ptr_2490;
// 函数: uint8_t function_9428e0;
uint8_t function_9428e0;
uint8_t system_ptr_2480;
// 函数: uint8_t function_942930;
uint8_t function_942930;
// 函数: uint8_t function_942a20;
uint8_t function_942a20;
// 函数: uint8_t function_9429f0;
uint8_t function_9429f0;
uint8_t system_ptr_24ac;
uint8_t processed_var_6688;
uint8_t system_ptr_24b0;
uint8_t system_ptr_c1d0;
uint8_t system_ptr_24b4;
uint8_t system_ptr_c338;
uint8_t system_ptr_24b8;
uint8_t system_ptr_c510;
uint8_t system_ptr_6048;
uint8_t system_ptr_6050;
uint8_t system_ptr_6058;
uint8_t system_ptr_6060;
// 函数: uint8_t function_942a60;
uint8_t function_942a60;
uint8_t system_ptr_6498;
uint8_t system_ptr_64a0;
uint8_t system_ptr_64a8;
uint8_t system_ptr_64b0;
// 函数: uint8_t function_942a80;
uint8_t function_942a80;
uint8_t system_ptr_d660;
uint8_t processed_var_9632;
uint8_t system_ptr_d590;
uint8_t processed_var_9664;
uint8_t system_ptr_6310;
uint8_t system_ptr_6320;
uint8_t system_ptr_6328;
// 函数: uint8_t function_942fa0;
uint8_t function_942fa0;
uint8_t system_ptr_6558;
uint8_t system_ptr_6560;
uint8_t system_ptr_6568;
uint8_t system_ptr_6570;
// 函数: uint8_t function_942fc0;
uint8_t function_942fc0;
uint8_t system_ptr_5ecc;
uint8_t processed_var_9616;
// 函数: uint8_t function_943070;
uint8_t function_943070;
uint8_t system_ptr_606c;
uint8_t rendering_buffer_2504;
uint8_t system_ptr_6218;
uint8_t rendering_buffer_2864;
// 函数: uint8_t function_943140;
uint8_t function_943140;
// 函数: uint8_t function_943160;
uint8_t function_943160;
uint8_t system_ptr_6790;
uint8_t system_ptr_6798;
// 函数: uint8_t function_943180;
uint8_t function_943180;
uint8_t system_ptr_67a0;
uint8_t system_ptr_67a8;
uint8_t system_ptr_67b0;
uint8_t system_ptr_67b8;
uint8_t system_ptr_67d0;
uint8_t memory_allocator_384;
uint8_t processed_var_720;
// 函数: uint8_t function_9431a0;
uint8_t function_9431a0;
uint8_t _tls_index;
void *ThreadLocalStoragePointer;
uint8_t system_ptr_67d4;
uint8_t ui_system_data_1640;
uint8_t system_ptr_67d8;
uint8_t ui_system_data_1664;
uint8_t system_ptr_67e0;
uint8_t system_ptr_67e8;
uint8_t system_ptr_67f0;
uint8_t system_ptr_67f8;