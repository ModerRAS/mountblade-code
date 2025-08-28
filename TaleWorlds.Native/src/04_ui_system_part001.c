#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 04_ui_system_part001.c - UI系统核心模块
// 
// 本文件包含用户界面系统的核心功能实现，涵盖：
//   - UI组件管理和渲染
//   - 事件处理和交互逻辑
//   - 界面布局和样式管理
//   - 用户输入处理
//   - 界面状态管理
//
// 技术架构：
//   - 组件化UI架构，支持复杂的界面组合
//   - 事件驱动模型，实现高效的用户交互
//   - 渲染管线集成，确保流畅的界面显示
//   - 内存优化机制，支持大型UI系统
//   - 响应式设计，适配不同屏幕尺寸
//
// 性能优化：
//   - 增量渲染机制，减少不必要的重绘
//   - 视图裁剪技术，提高渲染效率
//   - 资源缓存系统，优化内存使用
//   - 异步加载机制，提升用户体验
//
// 安全特性：
//   - 输入验证机制，防止恶意输入
//   - 资源访问控制，确保界面安全
//   - 内存边界检查，防止缓冲区溢出
//   - 状态一致性保证，避免界面异常
//==============================================================================

//------------------------------------------------------------------------------
// UI系统全局变量和函数声明
//------------------------------------------------------------------------------
// UI系统核心函数和全局变量
//------------------------------------------------------------------------------

// UI系统初始化函数
undefined FUN_180651d20;                           // UI系统初始化器 - 负责UI系统的初始化和配置

// UI组件管理变量
undefined UNK_180180860;                           // UI组件注册表 - 存储所有已注册的UI组件
undefined UNK_1801808a0;                           // UI组件工厂 - 负责创建和管理UI组件实例
undefined UNK_1801808b0;                           // UI组件生命周期管理器 - 管理组件的创建、更新和销毁
undefined UNK_1801808f0;                           // UI组件属性管理器 - 管理组件的属性和状态
undefined UNK_180180900;                           // UI组件事件处理器 - 处理组件相关的事件

// UI渲染系统变量
undefined UNK_18021cb40;                           // UI渲染管线 - 负责UI元素的渲染和绘制
undefined UNK_180941b00;                           // UI渲染配置 - 存储渲染相关的配置参数
undefined UNK_180a09c50;                           // UI渲染缓冲区管理器 - 管理渲染缓冲区的分配和释放
undefined UNK_180a09cf0;                           // UI渲染状态管理器 - 管理渲染状态和上下文
undefined UNK_180a0f0b8;                           // UI渲染资源管理器 - 管理渲染所需的资源

// UI事件系统变量
undefined UNK_180a3dca0;                           // UI事件分发器 - 负责事件的分发和处理
undefined UNK_180a3dcb0;                           // UI事件队列管理器 - 管理事件的队列和优先级
undefined UNK_180a3e030;                           // UI事件监听器管理器 - 管理事件监听器的注册和注销


//------------------------------------------------------------------------------
// UI事件处理函数组
//------------------------------------------------------------------------------

// UI事件处理核心函数
undefined FUN_180662260;                           // UI事件处理器 - 负责处理用户输入和系统事件


//------------------------------------------------------------------------------
// UI组件管理函数组
//------------------------------------------------------------------------------

// UI组件管理核心函数
undefined FUN_1806500b0;                           // UI组件管理器 - 负责UI组件的创建、管理和销毁

// UI组件状态变量
undefined UNK_180a3c5a0;                           // UI组件状态管理器 - 管理组件的状态转换
undefined UNK_180a3c6f8;                           // UI组件属性表 - 存储组件的属性数据
undefined UNK_180a3c710;                           // UI组件样式表 - 存储组件的样式信息
undefined UNK_180a3c9b0;                           // UI组件布局管理器 - 管理组件的布局和排列
undefined UNK_180a3c948;                           // UI组件渲染器 - 负责组件的渲染绘制
undefined UNK_180a3c968;                           // UI组件事件绑定器 - 管理组件的事件绑定

// UI系统状态标志
undefined1 DAT_180c95fea;                          // UI系统初始化标志 - 标识系统是否已初始化
char DAT_180c8eced;                                // UI系统运行状态 - 存储当前运行状态

// UI组件生命周期管理变量
undefined UNK_180a3ca20;                           // UI组件创建器 - 负责组件的创建
undefined UNK_180a3ca70;                           // UI组件更新器 - 负责组件的更新
undefined UNK_180a3cac0;                           // UI组件销毁器 - 负责组件的销毁

// UI组件资源管理变量
undefined DAT_180a12e00;                          // UI组件资源池 - 管理组件使用的资源
undefined UNK_180a12e10;                           // UI组件资源分配器 - 负责资源的分配
undefined UNK_180a0794c;                           // UI组件资源回收器 - 负责资源的回收

// UI组件交互变量
undefined UNK_180a3cb70;                           // UI组件交互管理器 - 管理组件的交互逻辑
undefined UNK_180a3cb58;                           // UI组件焦点管理器 - 管理组件的焦点控制
undefined UNK_180a3cb00;                           // UI组件选择器 - 管理组件的选择状态
undefined UNK_180a3cad8;                           // UI组件导航器 - 管理组件的导航逻辑

// UI组件数据管理变量
undefined UNK_180a3cb48;                           // UI组件数据绑定器 - 管理组件的数据绑定
undefined UNK_180a3cb40;                           // UI组件数据验证器 - 验证组件数据的合法性
undefined UNK_180a063a4;                           // UI组件数据转换器 - 转换组件数据的格式

// UI系统配置变量
char DAT_180c95fea;                                // UI系统配置标志 - 标识配置状态
undefined UNK_180a3cbc8;                           // UI系统配置管理器 - 管理系统配置
undefined UNK_180a3cc28;                           // UI系统配置解析器 - 解析配置文件
undefined UNK_180a3cbe0;                           // UI系统配置验证器 - 验证配置的有效性

// UI系统渲染变量
undefined UNK_180a3cc48;                           // UI系统渲染器 - 负责系统级别的渲染
undefined UNK_180a3c9ec;                           // UI系统渲染队列 - 管理渲染任务队列
undefined UNK_180a3cc0c;                           // UI系统渲染缓存 - 管理渲染缓存
undefined UNK_180a3cc1c;                           // UI系统渲染优化器 - 优化渲染性能

// UI系统内存管理变量
undefined UNK_180a3c9f8;                           // UI系统内存分配器 - 管理内存分配
undefined UNK_180a3ccc8;                           // UI系统内存回收器 - 管理内存回收
undefined UNK_180a3cca0;                           // UI系统内存池 - 管理内存池资源

// UI系统线程管理变量
undefined UNK_180a03a90;                           // UI系统线程管理器 - 管理UI线程
undefined UNK_180a10118;                           // UI系统任务调度器 - 调度UI任务

// UI系统输入处理变量
undefined UNK_180a12c70;                           // UI系统输入处理器 - 处理用户输入
undefined UNK_180a12c90;                           // UI系统输入缓冲区 - 管理输入缓冲
undefined UNK_180a12cb0;                           // UI系统输入验证器 - 验证输入有效性
undefined UNK_180a12cd0;                           // UI系统输入转换器 - 转换输入格式
undefined UNK_180a12d20;                           // UI系统输入分发器 - 分发输入事件

// UI系统资源变量
undefined DAT_180a2fce0;                          // UI系统资源表 - 存储系统资源
undefined UNK_180a341b0;                           // UI系统资源加载器 - 加载系统资源

// UI系统同步变量
undefined UNK_180a3cc58;                           // UI系统同步器 - 管理系统同步
undefined UNK_180a3cc70;                           // UI系统锁管理器 - 管理系统锁
undefined UNK_180a3cc80;                           // UI系统信号量 - 管理系统信号量
undefined UNK_180a3cc90;                           // UI系统条件变量 - 管理条件变量
undefined UNK_180a3ccdc;                           // UI系统原子操作器 - 执行原子操作
undefined UNK_180a3ccf8;                           // UI系统屏障 - 管理系统屏障
undefined UNK_180a3cd08;                           // UI系统内存屏障 - 管理内存屏障
undefined UNK_180a3cd18;                           // UI系统缓存管理器 - 管理系统缓存
undefined UNK_180a3cd30;                           // UI系统缓存行 - 管理缓存行
undefined UNK_180a3cd40;                           // UI系统缓存集 - 管理缓存集
undefined UNK_180a3cd50;                           // UI系统缓存大小 - 存储缓存大小信息
undefined UNK_180a3cd5c;                           // UI系统缓存对齐 - 管理缓存对齐
undefined UNK_180a3cd68;                           // UI系统缓存策略 - 管理缓存策略
undefined UNK_180a3cd80;                           // UI系统缓存控制器 - 控制缓存操作
undefined UNK_180a3cd98;                           // UI系统缓存统计器 - 统计缓存使用情况

// UI系统配置数据
undefined DAT_180a07230;                          // UI系统配置数据块 - 存储配置数据
undefined UNK_180a3ce28;                           // UI系统配置版本管理器 - 管理配置版本
undefined UNK_180a3cdf8;                           // UI系统配置备份器 - 备份配置数据
undefined UNK_180a3ce00;                           // UI系统配置恢复器 - 恢复配置数据
undefined UNK_180a3ce10;                           // UI系统配置验证器 - 验证配置数据

// UI系统定时器变量
undefined UNK_1809fe5e8;                           // UI系统定时器管理器 - 管理系统定时器
undefined UNK_180a3d120;                           // UI系统定时器队列 - 管理定时器队列
undefined UNK_180a3d168;                           // UI系统定时器回调 - 管理定时器回调
undefined UNK_180a3d1a8;                           // UI系统定时器精度 - 控制定时器精度
undefined UNK_180a3d220;                           // UI系统定时器同步 - 管理定时器同步
// UI系统辅助函数
undefined SUB_18063e940;                           // UI系统辅助函数 - 提供辅助功能

// UI系统常量定义
uint UNK_00004000;                                 // UI系统最大组件数 - 定义最大组件数量
undefined2 UNK_00004006;                           // UI系统事件类型 - 定义事件类型
int UNK_00004018;                                  // UI系统渲染模式 - 定义渲染模式

// UI系统布局变量
undefined UNK_1809fb180;                           // UI系统布局管理器 - 管理界面布局
undefined UNK_1809fb1a0;                           // UI系统布局计算器 - 计算布局参数
undefined UNK_180a3d268;                           // UI系统布局优化器 - 优化布局性能
undefined UNK_180a3d290;                           // UI系统布局缓存器 - 缓存布局数据
undefined UNK_180a3d240;                           // UI系统布局验证器 - 验证布局有效性
undefined UNK_180a3d2c0;                           // UI系统布局调整器 - 调整布局参数

// UI系统样式变量
undefined UNK_1809fb1e8;                           // UI系统样式管理器 - 管理界面样式
undefined UNK_1809fb1f8;                           // UI系统样式表 - 存储样式数据
undefined UNK_1809fb208;                           // UI系统样式解析器 - 解析样式文件
undefined UNK_1809fb228;                           // UI系统样式应用器 - 应用样式到组件

// UI系统动画变量
undefined UNK_180a3d358;                           // UI系统动画管理器 - 管理界面动画
undefined UNK_180a3d2f8;                           // UI系统动画插值器 - 插值动画参数
undefined UNK_180a3d388;                           // UI系统动画控制器 - 控制动画播放
undefined UNK_1809fb280;                           // UI系统动画队列 - 管理动画队列

// UI系统状态数据
undefined DAT_180c8ed78;                          // UI系统状态数据块 - 存储状态数据
undefined DAT_180bfbf1c;                          // UI系统状态标志 - 标识状态变化
undefined DAT_180bfbf18;                          // UI系统状态版本 - 管理状态版本

// UI系统对话框变量
undefined UNK_180a3d710;                           // UI系统对话框管理器 - 管理对话框
char DAT_180c8f000;                               // UI系统对话框状态 - 存储对话框状态

// UI系统数据表
undefined DAT_180c8ed98;                          // UI系统组件数据表 - 存储组件数据
undefined DAT_180c8ed88;                          // UI系统属性数据表 - 存储属性数据
undefined DAT_180c8ed90;                          // UI系统样式数据表 - 存储样式数据
undefined DAT_180c8eda0;                          // UI系统事件数据表 - 存储事件数据
undefined DAT_180c8edb8;                          // UI系统布局数据表 - 存储布局数据
undefined DAT_180c8eda8;                          // UI系统动画数据表 - 存储动画数据
undefined DAT_180c8edb0;                          // UI系统资源数据表 - 存储资源数据
undefined DAT_180c8edc0;                          // UI系统配置数据表 - 存储配置数据
undefined DAT_180c8edd8;                          // UI系统状态数据表 - 存储状态数据
undefined DAT_180c8edc8;                          // UI系统日志数据表 - 存储日志数据
undefined DAT_180c8edd0;                          // UI系统性能数据表 - 存储性能数据
undefined DAT_180c8ede0;                          // UI系统内存数据表 - 存储内存数据
undefined DAT_180c8edf8;                          // UI系统错误数据表 - 存储错误数据
undefined DAT_180c8ede8;                          // UI系统警告数据表 - 存储警告数据
undefined DAT_180c8edf0;                          // UI系统调试数据表 - 存储调试数据
undefined DAT_180c8ee00;                          // UI系统用户数据表 - 存储用户数据
undefined DAT_180c8ee18;                          // UI系统会话数据表 - 存储会话数据
undefined DAT_180c8ee08;                          // UI系统设置数据表 - 存储设置数据
undefined DAT_180c8ee10;                          // UI系统偏好数据表 - 存储偏好数据
undefined DAT_180c8ee20;                          // UI系统历史数据表 - 存储历史数据
undefined DAT_180c8ee38;                          // UI系统缓存数据表 - 存储缓存数据
undefined DAT_180c8ee28;                          // UI系统临时数据表 - 存储临时数据
undefined DAT_180c8ee30;                          // UI系统备份数据表 - 存储备份数据
undefined DAT_180c8ee60;                          // UI系统统计数据表 - 存储统计数据
undefined DAT_180c8ee78;                          // UI系统报告数据表 - 存储报告数据
undefined DAT_180c8ee68;
undefined DAT_180c8ee70;
undefined DAT_180c8ee40;
undefined DAT_180c8ee58;
undefined DAT_180c8ee48;
undefined DAT_180c8ee50;
undefined DAT_180c8ee80;
undefined DAT_180c8ee98;
undefined DAT_180c8ee88;
undefined DAT_180c8ee90;
undefined DAT_180c8ef00;
undefined DAT_180c8ef18;
undefined DAT_180c8ef08;
undefined DAT_180c8ef10;
undefined DAT_180c8ef20;
undefined DAT_180c8ef38;
undefined DAT_180c8ef28;
undefined DAT_180c8ef30;
undefined DAT_180c8eea0;
undefined DAT_180c8eeb8;
undefined DAT_180c8eea8;
undefined DAT_180c8eeb0;
undefined DAT_180c8ef40;
undefined DAT_180c8ef48;
undefined DAT_180c8ef50;
undefined DAT_180c8ef58;
undefined DAT_180c8ef60;
undefined DAT_180c8ef68;
undefined DAT_180c8ef70;
undefined DAT_180c8ef78;
undefined DAT_180c8ef80;
undefined DAT_180c8ef88;
undefined DAT_180c8ef90;
undefined DAT_180c8ef98;
undefined DAT_180c8efa0;
undefined DAT_180c8efa8;
undefined DAT_180c8efb0;
undefined DAT_180c8efb8;
undefined UNK_180a156a4;
undefined UNK_180a3d3cc;
undefined UNK_180a3d3dc;
undefined UNK_180a3d3e0;
undefined UNK_180a3d3f0;
undefined UNK_180a3d3f8;


// 函数: undefined FUN_180655f50;
undefined FUN_180655f50;


// 函数: undefined FUN_180656020;
undefined FUN_180656020;
undefined DAT_180bf3ff4;


// 函数: undefined FUN_180656110;
undefined FUN_180656110;
undefined DAT_180c8ecfc;


// 函数: undefined FUN_180656160;
undefined FUN_180656160;


// 函数: undefined FUN_1806561d0;
undefined FUN_1806561d0;
undefined UNK_180046680;
undefined UNK_180084650;


// 函数: undefined FUN_180656340;
undefined FUN_180656340;
undefined UNK_180150380;


// 函数: undefined FUN_1806563a0;
undefined FUN_1806563a0;
undefined UNK_1803f60a0;


// 函数: undefined FUN_180656410;
undefined FUN_180656410;
undefined UNK_180655e50;
undefined UNK_180655f30;


// 函数: undefined FUN_1806565a0;
undefined FUN_1806565a0;
undefined UNK_180656100;


// 函数: undefined FUN_180656610;
undefined FUN_180656610;
undefined UNK_1806561b0;


// 函数: undefined FUN_1806566c0;
undefined FUN_1806566c0;
undefined UNK_1806561c0;
undefined UNK_180656320;
undefined UNK_180656330;
undefined UNK_180656700;
undefined UNK_180a3dc30;
undefined UNK_180a3dc58;


// 函数: undefined FUN_1806552e0;
undefined FUN_1806552e0;


// 函数: undefined FUN_1806555f0;
undefined FUN_1806555f0;


// 函数: undefined FUN_180655e60;
undefined FUN_180655e60;
undefined UNK_180a16f70;
undefined UNK_180a3dd38;
undefined DAT_180c8f020;
undefined1 DAT_180c8f020;
undefined UNK_180a3dd80;
undefined DAT_180c967c8;


// 函数: undefined FUN_180653580;
undefined FUN_180653580;


// 函数: undefined FUN_1806535c0;
undefined FUN_1806535c0;


// 函数: undefined FUN_180653630;
undefined FUN_180653630;


// 函数: undefined FUN_180653670;
undefined FUN_180653670;
undefined DAT_180a3dda8;
undefined DAT_180c91028;
undefined UNK_180a3ddc0;
undefined UNK_180a3deb8;
undefined UNK_180a3e0b8;
undefined UNK_180a3e0d8;
undefined UNK_180a3e0f0;
undefined UNK_180a3e110;
undefined UNK_180a3e128;
undefined UNK_180a3e148;
undefined UNK_180a3e150;
undefined UNK_180a3e160;
undefined UNK_180a3e178;
undefined UNK_180a3e180;
undefined UNK_180a3e1a0;
undefined UNK_180a3e1b0;
undefined UNK_180a3e1c8;
undefined UNK_180a3e1f8;
undefined UNK_180a3e210;
undefined UNK_180a3e224;
undefined UNK_180a3e230;
undefined UNK_180a3e248;
undefined UNK_180a3e260;
undefined UNK_180a3e1e0;
undefined UNK_180a3e1e8;
undefined UNK_180a3e270;
undefined UNK_180a3e280;
undefined UNK_180a3e294;
undefined UNK_180a3e2a0;
undefined UNK_180a3e2b0;
undefined UNK_180a3e2b8;
undefined UNK_180a3e2c8;
undefined UNK_180a3e2d8;
undefined UNK_180a3e2e8;
undefined UNK_180a3e300;
undefined UNK_180a3e310;
undefined UNK_180a3e378;
undefined1 DAT_180c96808;
undefined UNK_180a3e470;
undefined UNK_180a3e408;
undefined UNK_180a3e418;
undefined DAT_180a3c248;
undefined UNK_180a3e4a0;
undefined UNK_180a3e4b8;
undefined UNK_180a3e4c8;
undefined UNK_180a3e4d8;
undefined UNK_180a3e4e8;
undefined UNK_180a3e500;
undefined UNK_180a3e510;
undefined UNK_180a3e588;
char DAT_180d4913c;
undefined UNK_180946540;
undefined UNK_180946ae0;
undefined UNK_180946af8;
undefined UNK_180946b10;
undefined DAT_180c0c1cc;
undefined DAT_180c0c1c8;
undefined DAT_180c0c1c0;
undefined DAT_180d4a9b0;
undefined DAT_180d4a9a8;
undefined DAT_180d4a990;
undefined DAT_180d4a9c8;
undefined DAT_180d4a9c0;
undefined DAT_180d4a9b8;
undefined DAT_180d4a9a0;
undefined DAT_180d4a998;
undefined DAT_180d4a988;
undefined DAT_180d4a980;
undefined DAT_180d4a978;
undefined DAT_180d4a970;
undefined UNK_1800018c7;
undefined UNK_180001b8d;
undefined UNK_1800025f0;
undefined UNK_1800028e4;
undefined UNK_180002cb0;
undefined UNK_180002d90;


// 函数: undefined FUN_1806714a0;
undefined FUN_1806714a0;


// 函数: undefined FUN_1806718d0;
undefined FUN_1806718d0;


// 函数: undefined FUN_180671eb0;
undefined FUN_180671eb0;


// 函数: undefined FUN_1806721d0;
undefined FUN_1806721d0;


// 函数: undefined FUN_1806725c0;
undefined FUN_1806725c0;


// 函数: undefined FUN_180672a50;
undefined FUN_180672a50;


// 函数: undefined FUN_180672da0;
undefined FUN_180672da0;


// 函数: undefined FUN_180673220;
undefined FUN_180673220;


// 函数: undefined FUN_180673360;
undefined FUN_180673360;


// 函数: undefined FUN_180673850;
undefined FUN_180673850;


// 函数: undefined FUN_180673970;
undefined FUN_180673970;


// 函数: undefined FUN_180673e10;
undefined FUN_180673e10;


// 函数: undefined FUN_180673f50;
undefined FUN_180673f50;


// 函数: undefined FUN_180674040;
undefined FUN_180674040;


// 函数: undefined FUN_180674120;
undefined FUN_180674120;


// 函数: undefined FUN_1806742a0;
undefined FUN_1806742a0;


// 函数: undefined FUN_1806743e0;
undefined FUN_1806743e0;


// 函数: undefined FUN_1806744d0;
undefined FUN_1806744d0;


// 函数: undefined FUN_180674610;
undefined FUN_180674610;
undefined DAT_180c0c1dc;
undefined DAT_180c0c1d8;
undefined DAT_180c0c1d0;
undefined DAT_180d4a758;
undefined DAT_180d4a710;
undefined DAT_180d4a6d0;
undefined DAT_180d4a6a8;
undefined DAT_180d4a950;
undefined DAT_180d4a918;
undefined DAT_180d4a890;
undefined DAT_180d4a880;
undefined DAT_180d4a868;
undefined DAT_180d4a850;
undefined DAT_180d4a838;
undefined DAT_180d4a810;
undefined DAT_180d4a7f8;
undefined DAT_180d4a7d0;
undefined DAT_180d4a7b8;
undefined DAT_180d4a7a8;
undefined DAT_180d4a798;
undefined DAT_180d4a780;
undefined DAT_180d4a748;
undefined DAT_180d4a730;
undefined DAT_180d4a718;
undefined DAT_180d4a6f8;
undefined DAT_180d4a8f8;
undefined DAT_180d4a8e0;
undefined DAT_180d4a8c8;
undefined DAT_180d4a888;
undefined DAT_180d4a848;
undefined DAT_180d4a828;
undefined DAT_180d4a808;
undefined DAT_180d4a7f0;
undefined DAT_180d4a790;
undefined DAT_180d4a760;
undefined DAT_180d4a728;
undefined DAT_180d4a938;
undefined DAT_180d4a8b8;
undefined DAT_180d4a860;
undefined DAT_180d4a800;
undefined DAT_180d4a7c8;
undefined DAT_180d4a768;
undefined DAT_180d4a738;
undefined DAT_180d4a720;
undefined DAT_180d4a6e8;
undefined DAT_180d4a6c8;
undefined DAT_180d4a6c0;
undefined DAT_180d4a6a0;
undefined DAT_180d4a960;
undefined DAT_180d4a940;
undefined DAT_180d4a908;
undefined DAT_180d4a8e8;
undefined DAT_180d4a8a0;
undefined DAT_180d4a878;
undefined DAT_180d4a840;
undefined DAT_180d4a818;
undefined DAT_180d4a7d8;
undefined DAT_180d4a7a0;
undefined DAT_180d4a770;
undefined DAT_180d4a6f0;
undefined DAT_180d4a6d8;
undefined DAT_180d4a6b0;
undefined DAT_180d4a930;
undefined DAT_180d4a900;
undefined DAT_180d4a8d8;
undefined DAT_180d4a8b0;
undefined DAT_180d4a870;
undefined DAT_180d4a830;
undefined DAT_180d4a7e8;
undefined DAT_180d4a7c0;
undefined DAT_180d4a788;
undefined DAT_180d4a740;
undefined DAT_180d4a700;
undefined DAT_180d4a6e0;
undefined DAT_180d4a6b8;
undefined DAT_180d4a968;
undefined DAT_180d4a948;
undefined DAT_180d4a920;
undefined DAT_180d4a8f0;
undefined DAT_180d4a8d0;
undefined DAT_180d4a898;
undefined DAT_180d4a858;
undefined DAT_180d4a820;
undefined DAT_180d4a7e0;
undefined DAT_180d4a7b0;
undefined DAT_180d4a778;
undefined DAT_180d4a750;
undefined DAT_180d4a708;
undefined DAT_180d4a958;
undefined DAT_180d4a928;
undefined DAT_180d4a910;
undefined DAT_180d4a8c0;
undefined DAT_180d4a8a8;
undefined UNK_180002e60;
undefined UNK_180002ea0;
undefined UNK_180002ee0;
undefined UNK_180002f20;
undefined UNK_180002f70;
undefined UNK_180002fd0;
undefined UNK_180003050;
undefined UNK_180003110;
undefined UNK_1800032a0;
undefined UNK_180003300;
undefined UNK_1800033b0;
undefined UNK_180003430;
undefined UNK_180003540;
undefined UNK_1800035c0;
undefined UNK_1800036c0;
undefined UNK_180003880;
undefined UNK_180003d80;
undefined UNK_180003de0;
undefined UNK_180003e90;
undefined UNK_180003fa0;
undefined UNK_180004300;
undefined UNK_1800049d0;
undefined UNK_180005080;
undefined UNK_180005440;
undefined UNK_1800057b0;
undefined UNK_180005bc0;
undefined UNK_180006190;
undefined UNK_1800065d0;
undefined UNK_180006945;
undefined UNK_180006b22;
undefined UNK_180006dcf;
undefined UNK_180006f34;
undefined UNK_180006ff0;
undefined UNK_18000b3dd;
undefined UNK_18000d630;
undefined UNK_18000dbc6;
undefined UNK_18000deb4;
undefined UNK_18000e06e;
undefined UNK_18000e39c;
undefined UNK_18000e470;
undefined UNK_18000e4e0;
undefined UNK_18000e550;
undefined UNK_18000e5e0;
undefined UNK_18000e670;
undefined UNK_18000e6e0;
undefined UNK_18000e750;
undefined UNK_18000e7c0;
undefined UNK_18000e850;
undefined UNK_18000e8e0;
undefined UNK_18000f120;
undefined UNK_180017300;
undefined UNK_180679b80;
undefined UNK_180679bb0;


// 函数: undefined FUN_180674700;
undefined FUN_180674700;


// 函数: undefined FUN_180674930;
undefined FUN_180674930;


// 函数: undefined FUN_180674aa0;
undefined FUN_180674aa0;


// 函数: undefined FUN_180674d10;
undefined FUN_180674d10;


// 函数: undefined FUN_180674f40;
undefined FUN_180674f40;


// 函数: undefined FUN_1806750b0;
undefined FUN_1806750b0;


// 函数: undefined FUN_1806760f0;
undefined FUN_1806760f0;


// 函数: undefined FUN_180676320;
undefined FUN_180676320;


// 函数: undefined FUN_180676490;
undefined FUN_180676490;


// 函数: undefined FUN_180676700;
undefined FUN_180676700;


// 函数: undefined FUN_180676930;
undefined FUN_180676930;


// 函数: undefined FUN_180676aa0;
undefined FUN_180676aa0;


// 函数: undefined FUN_180677100;
undefined FUN_180677100;


// 函数: undefined FUN_180677190;
undefined FUN_180677190;


// 函数: undefined FUN_180677300;
undefined FUN_180677300;


// 函数: undefined FUN_180677530;
undefined FUN_180677530;


// 函数: undefined FUN_1806780c0;
undefined FUN_1806780c0;


// 函数: undefined FUN_1806782c0;
undefined FUN_1806782c0;


// 函数: undefined FUN_180678430;
undefined FUN_180678430;


// 函数: undefined FUN_180678540;
undefined FUN_180678540;


// 函数: undefined FUN_180678810;
undefined FUN_180678810;


// 函数: undefined FUN_1806789c0;
undefined FUN_1806789c0;


// 函数: undefined FUN_180678b10;
undefined FUN_180678b10;


// 函数: undefined FUN_180678bc0;
undefined FUN_180678bc0;


// 函数: undefined FUN_180678e20;
undefined FUN_180678e20;


// 函数: undefined FUN_180678ef0;
undefined FUN_180678ef0;


// 函数: undefined FUN_180678fc0;
undefined FUN_180678fc0;


// 函数: undefined FUN_1806790b0;
undefined FUN_1806790b0;


// 函数: undefined FUN_180679310;
undefined FUN_180679310;


// 函数: undefined FUN_180679480;
undefined FUN_180679480;


// 函数: undefined FUN_1806795f0;
undefined FUN_1806795f0;


// 函数: undefined FUN_1806796f0;
undefined FUN_1806796f0;


// 函数: undefined FUN_180679ac0;
undefined FUN_180679ac0;


// 函数: undefined FUN_180679b20;
undefined FUN_180679b20;


// 函数: undefined FUN_180679d30;
undefined FUN_180679d30;


// 函数: undefined FUN_18067c470;
undefined FUN_18067c470;


// 函数: undefined FUN_180683f90;
undefined FUN_180683f90;


// 函数: undefined FUN_1806844a0;
undefined FUN_1806844a0;


// 函数: undefined FUN_18068b080;
undefined FUN_18068b080;


// 函数: undefined FUN_18068d2b0;
undefined FUN_18068d2b0;


// 函数: undefined FUN_18068d480;
undefined FUN_18068d480;


// 函数: undefined FUN_18068d4b0;
undefined FUN_18068d4b0;


// 函数: undefined FUN_18068d530;
undefined FUN_18068d530;


// 函数: undefined FUN_18068d5b0;
undefined FUN_18068d5b0;


// 函数: undefined FUN_18068d630;
undefined FUN_18068d630;


// 函数: undefined FUN_18068d6b0;
undefined FUN_18068d6b0;


// 函数: undefined FUN_18068d730;
undefined FUN_18068d730;


// 函数: undefined FUN_18068d7b0;
undefined FUN_18068d7b0;


// 函数: undefined FUN_18068d8d0;
undefined FUN_18068d8d0;


// 函数: undefined FUN_18068d9f0;
undefined FUN_18068d9f0;


// 函数: undefined FUN_18068db10;
undefined FUN_18068db10;


// 函数: undefined FUN_18068dc30;
undefined FUN_18068dc30;


// 函数: undefined FUN_18068dd50;
undefined FUN_18068dd50;


// 函数: undefined FUN_18068de70;
undefined FUN_18068de70;


// 函数: undefined FUN_18068def0;
undefined FUN_18068def0;


// 函数: undefined FUN_18068df70;
undefined FUN_18068df70;


// 函数: undefined FUN_18068dff0;
undefined FUN_18068dff0;


// 函数: undefined FUN_18068e070;
undefined FUN_18068e070;


// 函数: undefined FUN_18068e250;
undefined FUN_18068e250;


// 函数: undefined FUN_18068e430;
undefined FUN_18068e430;


// 函数: undefined FUN_18068e610;
undefined FUN_18068e610;


// 函数: undefined FUN_18068e7f0;
undefined FUN_18068e7f0;


// 函数: undefined FUN_18068e870;
undefined FUN_18068e870;


// 函数: undefined FUN_18068e8f0;
undefined FUN_18068e8f0;


// 函数: undefined FUN_18068e970;
undefined FUN_18068e970;


// 函数: undefined FUN_18068e9f0;
undefined FUN_18068e9f0;


// 函数: undefined FUN_18068ea70;
undefined FUN_18068ea70;


// 函数: undefined FUN_18068eaf0;
undefined FUN_18068eaf0;


// 函数: undefined FUN_18068eb60;
undefined FUN_18068eb60;


// 函数: undefined FUN_18068ebd0;
undefined FUN_18068ebd0;


// 函数: undefined FUN_18068ec40;
undefined FUN_18068ec40;


// 函数: undefined FUN_18068ecb0;
undefined FUN_18068ecb0;


// 函数: undefined FUN_18068ed20;
undefined FUN_18068ed20;


// 函数: undefined FUN_18068ed90;
undefined FUN_18068ed90;


// 函数: undefined FUN_18068ee80;
undefined FUN_18068ee80;


// 函数: undefined FUN_18068ef70;
undefined FUN_18068ef70;


// 函数: undefined FUN_18068f060;
undefined FUN_18068f060;


// 函数: undefined FUN_18068f150;
undefined FUN_18068f150;


// 函数: undefined FUN_18068f240;
undefined FUN_18068f240;


// 函数: undefined FUN_18068f330;
undefined FUN_18068f330;


// 函数: undefined FUN_18068f3a0;
undefined FUN_18068f3a0;


// 函数: undefined FUN_18068f410;
undefined FUN_18068f410;


// 函数: undefined FUN_18068f480;
undefined FUN_18068f480;


// 函数: undefined FUN_18068f4f0;
undefined FUN_18068f4f0;


// 函数: undefined FUN_18068f680;
undefined FUN_18068f680;


// 函数: undefined FUN_18068f810;
undefined FUN_18068f810;


// 函数: undefined FUN_18068f9a0;
undefined FUN_18068f9a0;


// 函数: undefined FUN_18068fb30;
undefined FUN_18068fb30;


// 函数: undefined FUN_18068fba0;
undefined FUN_18068fba0;


// 函数: undefined FUN_18068fc10;
undefined FUN_18068fc10;


// 函数: undefined FUN_18068fc80;
undefined FUN_18068fc80;


// 函数: undefined FUN_18068fcf0;
undefined FUN_18068fcf0;


// 函数: undefined FUN_18068fd60;
undefined FUN_18068fd60;


// 函数: undefined FUN_18068fdd0;
undefined FUN_18068fdd0;


// 函数: undefined FUN_18068fe10;
undefined FUN_18068fe10;


// 函数: undefined FUN_18068ff60;
undefined FUN_18068ff60;


// 函数: undefined FUN_180690200;
undefined FUN_180690200;


// 函数: undefined FUN_1806903c0;
undefined FUN_1806903c0;


// 函数: undefined FUN_1806905c0;
undefined FUN_1806905c0;


// 函数: undefined FUN_1806917c0;
undefined FUN_1806917c0;


// 函数: undefined FUN_180691db0;
undefined FUN_180691db0;


// 函数: undefined FUN_180694010;
undefined FUN_180694010;


// 函数: undefined FUN_180695530;
undefined FUN_180695530;


// 函数: undefined FUN_180695560;
undefined FUN_180695560;


// 函数: undefined FUN_180695590;
undefined FUN_180695590;


// 函数: undefined FUN_180695600;
undefined FUN_180695600;


// 函数: undefined FUN_180695700;
undefined FUN_180695700;


// 函数: undefined FUN_180695750;
undefined FUN_180695750;


// 函数: undefined FUN_180695820;
undefined FUN_180695820;


// 函数: undefined FUN_180695870;
undefined FUN_180695870;


// 函数: undefined FUN_1806958c0;
undefined FUN_1806958c0;


// 函数: undefined FUN_180695990;
undefined FUN_180695990;


// 函数: undefined FUN_180695ac0;
undefined FUN_180695ac0;


// 函数: undefined FUN_180695bf0;
undefined FUN_180695bf0;


// 函数: undefined FUN_180695f70;
undefined FUN_180695f70;


// 函数: undefined FUN_1806961a0;
undefined FUN_1806961a0;


// 函数: undefined FUN_180696370;
undefined FUN_180696370;


// 函数: undefined FUN_180696540;
undefined FUN_180696540;


// 函数: undefined FUN_180696710;
undefined FUN_180696710;


// 函数: undefined FUN_1806968e0;
undefined FUN_1806968e0;


// 函数: undefined FUN_180696a60;
undefined FUN_180696a60;


// 函数: undefined FUN_180696be0;
undefined FUN_180696be0;


// 函数: undefined FUN_180696d90;
undefined FUN_180696d90;


// 函数: undefined FUN_180696f40;
undefined FUN_180696f40;


// 函数: undefined FUN_1806970f0;
undefined FUN_1806970f0;


// 函数: undefined FUN_1806972a0;
undefined FUN_1806972a0;


// 函数: undefined FUN_180697340;
undefined FUN_180697340;


// 函数: undefined FUN_1806973c0;
undefined FUN_1806973c0;


// 函数: undefined FUN_180697460;
undefined FUN_180697460;


// 函数: undefined FUN_1806974e0;
undefined FUN_1806974e0;


// 函数: undefined FUN_180697580;
undefined FUN_180697580;


// 函数: undefined FUN_180697600;
undefined FUN_180697600;


// 函数: undefined FUN_180697680;
undefined FUN_180697680;


// 函数: undefined FUN_1806976f0;
undefined FUN_1806976f0;


// 函数: undefined FUN_180697770;
undefined FUN_180697770;


// 函数: undefined FUN_1806977e0;
undefined FUN_1806977e0;


// 函数: undefined FUN_1806978b0;
undefined FUN_1806978b0;


// 函数: undefined FUN_180697dd0;
undefined FUN_180697dd0;
undefined DAT_180c0c1ec;
undefined DAT_180c0c1e8;
undefined DAT_180c0c1e0;
undefined DAT_180c0c200;
undefined DAT_180c0c1fc;
undefined DAT_180c0c1f8;
undefined DAT_180c0c1f0;
undefined UNK_180946b38;
undefined UNK_180946b50;
undefined UNK_180946b70;
undefined UNK_180946ba0;
undefined UNK_180946bd8;


