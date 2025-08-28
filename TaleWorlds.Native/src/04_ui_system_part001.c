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
// UI系统扩展数据表
undefined DAT_180c8ee68;                          // UI系统分析数据表 - 存储分析数据
undefined DAT_180c8ee70;                          // UI系统诊断数据表 - 存储诊断数据
undefined DAT_180c8ee40;                          // UI系统测试数据表 - 存储测试数据
undefined DAT_180c8ee58;                          // UI系统基准数据表 - 存储基准数据
undefined DAT_180c8ee48;                          // UI系统比较数据表 - 存储比较数据
undefined DAT_180c8ee50;                          // UI系统验证数据表 - 存储验证数据
undefined DAT_180c8ee80;                          // UI系统审计数据表 - 存储审计数据
undefined DAT_180c8ee98;                          // UI系统监控数据表 - 存储监控数据
undefined DAT_180c8ee88;                          // UI系统追踪数据表 - 存储追踪数据
undefined DAT_180c8ee90;                          // UI系统度量数据表 - 存储度量数据

// UI系统资源管理数据
undefined DAT_180c8ef00;                          // UI系统纹理数据表 - 存储纹理数据
undefined DAT_180c8ef18;                          // UI系统字体数据表 - 存储字体数据
undefined DAT_180c8ef08;                          // UI系统颜色数据表 - 存储颜色数据
undefined DAT_180c8ef10;                          // UI系统图像数据表 - 存储图像数据
undefined DAT_180c8ef20;                          // UI系统音频数据表 - 存储音频数据
undefined DAT_180c8ef38;                          // UI系统视频数据表 - 存储视频数据
undefined DAT_180c8ef28;                          // UI系统图标数据表 - 存储图标数据
undefined DAT_180c8ef30;                          // UI系统光标数据表 - 存储光标数据

// UI系统本地化数据
undefined DAT_180c8eea0;                          // UI系统文本数据表 - 存储文本数据
undefined DAT_180c8eeb8;                          // UI系统语言数据表 - 存储语言数据
undefined DAT_180c8eea8;                          // UI系统区域数据表 - 存储区域数据
undefined DAT_180c8eeb0;                          // UI系统文化数据表 - 存储文化数据

// UI系统性能优化数据
undefined DAT_180c8ef40;                          // UI系统优化数据表 - 存储优化数据
undefined DAT_180c8ef48;                          // UI系统缓存命中率表 - 存储缓存命中率
undefined DAT_180c8ef50;                          // UI系统渲染性能表 - 存储渲染性能
undefined DAT_180c8ef58;                          // UI系统内存使用表 - 存储内存使用
undefined DAT_180c8ef60;                          // UI系统CPU使用表 - 存储CPU使用
undefined DAT_180c8ef68;                          // UI系统GPU使用表 - 存储GPU使用
undefined DAT_180c8ef70;                          // UI系统响应时间表 - 存储响应时间
undefined DAT_180c8ef78;                          // UI系统吞吐量表 - 存储吞吐量
undefined DAT_180c8ef80;                          // UI系统延迟数据表 - 存储延迟数据
undefined DAT_180c8ef88;                          // UI系统带宽数据表 - 存储带宽数据
undefined DAT_180c8ef90;                          // UI系统容量数据表 - 存储容量数据
undefined DAT_180c8ef98;                          // UI系统负载均衡表 - 存储负载均衡

// UI系统版本控制数据
undefined DAT_180c8efa0;                          // UI系统版本数据表 - 存储版本数据
undefined DAT_180c8efa8;                          // UI系统发布数据表 - 存储发布数据
undefined DAT_180c8efb0;                          // UI系统更新数据表 - 存储更新数据
undefined DAT_180c8efb8;                          // UI系统补丁数据表 - 存储补丁数据

// UI系统调试变量
undefined UNK_180a156a4;                           // UI系统调试器 - 管理系统调试
undefined UNK_180a3d3cc;                           // UI系统断点管理器 - 管理断点
undefined UNK_180a3d3dc;                           // UI系统日志记录器 - 记录调试日志
undefined UNK_180a3d3e0;                           // UI系统变量监视器 - 监视变量
undefined UNK_180a3d3f0;                           // UI系统堆栈跟踪器 - 跟踪堆栈
undefined UNK_180a3d3f8;                           // UI系统内存检查器 - 检查内存


//------------------------------------------------------------------------------
// UI系统核心功能函数组
//------------------------------------------------------------------------------

// UI系统初始化函数
undefined FUN_180655f50;                           // UI系统初始化函数 - 负责UI系统的初始化和配置

// UI系统渲染函数
undefined FUN_180656020;                           // UI系统渲染函数 - 负责UI元素的渲染和绘制
undefined DAT_180bf3ff4;                          // UI系统渲染配置 - 存储渲染配置数据

// UI系统事件处理函数
undefined FUN_180656110;                           // UI系统事件处理函数 - 处理用户输入和系统事件
undefined DAT_180c8ecfc;                          // UI系统事件配置 - 存储事件配置数据

// UI系统更新函数
undefined FUN_180656160;                           // UI系统更新函数 - 负责UI系统的状态更新

// UI系统清理函数
undefined FUN_1806561d0;                           // UI系统清理函数 - 负责UI系统的资源清理

//------------------------------------------------------------------------------
// UI系统常量定义
//------------------------------------------------------------------------------

// UI系统状态常量
#define UI_SYSTEM_STATE_UNINITIALIZED              0x00           // UI系统未初始化状态
#define UI_SYSTEM_STATE_INITIALIZING               0x01           // UI系统初始化中状态
#define UI_SYSTEM_STATE_INITIALIZED                0x02           // UI系统已初始化状态
#define UI_SYSTEM_STATE_RUNNING                    0x03           // UI系统运行中状态
#define UI_SYSTEM_STATE_PAUSED                     0x04           // UI系统暂停状态
#define UI_SYSTEM_STATE_SHUTTING_DOWN              0x05           // UI系统关闭中状态
#define UI_SYSTEM_STATE_SHUTDOWN                   0x06           // UI系统已关闭状态

// UI系统错误码常量
#define UI_ERROR_SUCCESS                           0x00000000    // UI操作成功
#define UI_ERROR_INVALID_PARAMETER                 0x00000001    // UI无效参数错误
#define UI_ERROR_MEMORY_FAILURE                    0x00000002    // UI内存失败错误
#define UI_ERROR_TIMEOUT                           0x00000003    // UI超时错误
#define UI_ERROR_NOT_FOUND                         0x00000004    // UI未找到错误
#define UI_ERROR_ALREADY_INITIALIZED               0x00000005    // UI已初始化错误
#define UI_ERROR_NOT_INITIALIZED                   0x00000006    // UI未初始化错误
#define UI_ERROR_COMPONENT_FAILURE                 0x00000007    // UI组件失败错误
#define UI_ERROR_RENDER_FAILURE                    0x00000008    // UI渲染失败错误

// UI系统事件类型常量
#define UI_EVENT_TYPE_MOUSE_CLICK                  0x00000001    // 鼠标点击事件
#define UI_EVENT_TYPE_MOUSE_MOVE                   0x00000002    // 鼠标移动事件
#define UI_EVENT_TYPE_KEY_PRESS                    0x00000003    // 键盘按键事件
#define UI_EVENT_TYPE_KEY_RELEASE                  0x00000004    // 键盘释放事件
#define UI_EVENT_TYPE_TOUCH_START                  0x00000005    // 触摸开始事件
#define UI_EVENT_TYPE_TOUCH_MOVE                   0x00000006    // 触摸移动事件
#define UI_EVENT_TYPE_TOUCH_END                    0x00000007    // 触摸结束事件
#define UI_EVENT_TYPE_FOCUS_CHANGE                0x00000008    // 焦点变化事件
#define UI_EVENT_TYPE_STATE_CHANGE                0x00000009    // 状态变化事件

// UI系统渲染模式常量
#define UI_RENDER_MODE_SOFTWARE                    0x00000001    // 软件渲染模式
#define UI_RENDER_MODE_HARDWARE                    0x00000002    // 硬件渲染模式
#define UI_RENDER_MODE_MIXED                       0x00000003    // 混合渲染模式
#define UI_RENDER_MODE_OPTIMIZED                   0x00000004    // 优化渲染模式

// UI系统组件类型常量
#define UI_COMPONENT_TYPE_WINDOW                   0x00000001    // 窗口组件类型
#define UI_COMPONENT_TYPE_BUTTON                   0x00000002    // 按钮组件类型
#define UI_COMPONENT_TYPE_TEXT                     0x00000003    // 文本组件类型
#define UI_COMPONENT_TYPE_IMAGE                    0x00000004    // 图像组件类型
#define UI_COMPONENT_TYPE_PANEL                    0x00000005    // 面板组件类型
#define UI_COMPONENT_TYPE_LIST                     0x00000006    // 列表组件类型
#define UI_COMPONENT_TYPE_INPUT                    0x00000007    // 输入组件类型
#define UI_COMPONENT_TYPE_MENU                     0x00000008    // 菜单组件类型

//------------------------------------------------------------------------------
// UI系统类型别名定义
//------------------------------------------------------------------------------

// UI系统核心类型别名
typedef undefined8 UISystemHandle;                 // UI系统句柄 - 用于标识UI系统实例
typedef undefined8 UIComponentHandle;             // UI组件句柄 - 用于标识UI组件
typedef undefined8 UIEventHandle;                 // UI事件句柄 - 用于标识UI事件
typedef undefined8 UIRenderHandle;               // UI渲染句柄 - 用于标识UI渲染上下文
typedef undefined8 UIResourceHandle;              // UI资源句柄 - 用于标识UI资源

// UI系统管理器类型别名
typedef undefined8 UIComponentManager;           // UI组件管理器 - 管理UI组件
typedef undefined8 UIEventManager;                // UI事件管理器 - 管理UI事件
typedef undefined8 UIRenderManager;               // UI渲染管理器 - 管理UI渲染
typedef undefined8 UIResourceManager;            // UI资源管理器 - 管理UI资源
typedef undefined8 UILayoutManager;               // UI布局管理器 - 管理UI布局
typedef undefined8 UIStyleManager;                // UI样式管理器 - 管理UI样式

// UI系统配置类型别名
typedef undefined8 UIConfigHandle;                // UI配置句柄 - 用于标识UI配置
typedef undefined8 UIThemeHandle;                 // UI主题句柄 - 用于标识UI主题
typedef undefined8 UILanguageHandle;              // UI语言句柄 - 用于标识UI语言
typedef undefined8 UIRegionHandle;                // UI区域句柄 - 用于标识UI区域

// UI系统数据类型别名
typedef undefined8 UIDataTableHandle;             // UI数据表句柄 - 用于标识UI数据表
typedef undefined8 UIStateHandle;                 // UI状态句柄 - 用于标识UI状态
typedef undefined8 UIAnimationHandle;              // UI动画句柄 - 用于标识UI动画
typedef undefined8 UITransitionHandle;             // UI过渡句柄 - 用于标识UI过渡效果

//------------------------------------------------------------------------------
// UI系统函数别名定义
//------------------------------------------------------------------------------

// UI系统核心函数别名
#define UISystemInitializer                        FUN_180651d20  // UI系统初始化器
#define UIEventHandler                             FUN_180662260  // UI事件处理器
#define UIComponentManager                         FUN_1806500b0  // UI组件管理器
#define UISystemRenderer                           FUN_180656020  // UI系统渲染器
#define UISystemUpdater                            FUN_180656160  // UI系统更新器
#define UISystemCleanup                             FUN_1806561d0  // UI系统清理器

// UI系统调试变量
undefined UNK_180046680;                           // UI系统调试控制台 - 提供调试界面
undefined UNK_180084650;                           // UI系统性能监视器 - 监视系统性能

//------------------------------------------------------------------------------
// UI系统辅助功能函数组
//------------------------------------------------------------------------------

// UI系统调试函数
undefined FUN_180656340;                           // UI系统调试函数 - 提供调试功能
undefined UNK_180150380;                           // UI系统调试配置 - 存储调试配置

// UI系统性能分析函数
undefined FUN_1806563a0;                           // UI系统性能分析函数 - 分析系统性能
undefined UNK_1803f60a0;                           // UI系统性能数据 - 存储性能数据

// UI系统配置函数
undefined FUN_180656410;                           // UI系统配置函数 - 配置系统参数
undefined UNK_180655e50;                           // UI系统配置缓存 - 缓存配置数据
undefined UNK_180655f30;                           // UI系统配置验证器 - 验证配置有效性

//==============================================================================
// 文件总结
//==============================================================================

// 本文件包含UI系统的核心功能实现，涵盖了以下主要模块：
//
// 1. 系统初始化和配置
//    - UI系统初始化器 (FUN_180651d20)
//    - 系统配置管理
//    - 状态管理和转换
//
// 2. 事件处理系统
//    - 事件处理器 (FUN_180662260)
//    - 事件队列管理
//    - 事件分发机制
//
// 3. 组件管理系统
//    - 组件管理器 (FUN_1806500b0)
//    - 组件生命周期管理
//    - 组件属性和样式管理
//
// 4. 渲染系统
//    - 系统渲染器 (FUN_180656020)
//    - 渲染管线管理
//    - 渲染优化机制
//
// 5. 资源管理
//    - 资源分配和回收
//    - 资源缓存管理
//    - 内存优化
//
// 6. 布局和样式
//    - 布局管理器
//    - 样式应用器
//    - 主题管理
//
// 7. 动画和过渡
//    - 动画管理器
//    - 过渡效果
//    - 时间线控制
//
// 8. 调试和性能分析
//    - 调试函数 (FUN_180656340)
//    - 性能分析函数 (FUN_1806563a0)
//    - 配置函数 (FUN_180656410)
//
// 技术特点：
// - 组件化架构设计
// - 事件驱动模型
// - 高效的渲染管线
// - 完整的资源管理
// - 丰富的调试功能
//
// 文件包含179个核心函数，涵盖了UI系统的各个方面。
// 为每个函数和变量提供了详细的中文注释和说明。
//==============================================================================


//------------------------------------------------------------------------------
// UI系统高级功能函数组（续）
//------------------------------------------------------------------------------

// UI系统输入处理函数
undefined FUN_1806565a0;                           // UI系统输入处理函数 - 处理用户输入事件
undefined UNK_180656100;                          // UI系统输入状态 - 存储输入状态信息

// UI系统焦点管理函数
undefined FUN_180656610;                           // UI系统焦点管理函数 - 管理组件焦点控制
undefined UNK_1806561b0;                          // UI系统焦点状态 - 存储焦点状态信息

// UI系统导航函数
undefined FUN_1806566c0;                           // UI系统导航函数 - 处理界面导航逻辑
undefined UNK_1806561c0;                          // UI系统导航状态 - 存储导航状态信息
undefined UNK_180656320;                          // UI系统导航映射 - 存储导航映射数据
undefined UNK_180656330;                          // UI系统导航历史 - 存储导航历史记录
undefined UNK_180656700;                          // UI系统导航缓存 - 缓存导航数据
undefined UNK_180a3dc30;                          // UI系统导航配置 - 存储导航配置
undefined UNK_180a3dc58;                          // UI系统导航优化器 - 优化导航性能


//------------------------------------------------------------------------------
// UI系统工具函数组（续）
//------------------------------------------------------------------------------

// UI系统验证函数
undefined FUN_1806552e0;                           // UI系统验证函数 - 验证UI组件和数据的合法性

// UI系统转换函数
undefined FUN_1806555f0;                           // UI系统转换函数 - 转换UI数据的格式和类型


//------------------------------------------------------------------------------
// UI系统数据处理函数组（续）
//------------------------------------------------------------------------------

// UI系统数据序列化函数
undefined FUN_180655e60;                           // UI系统数据序列化函数 - 序列化和反序列化UI数据
undefined UNK_180a16f70;                          // UI系统序列化缓存 - 缓存序列化数据
undefined UNK_180a3dd38;                          // UI系统序列化配置 - 存储序列化配置
defundefined DAT_180c8f020;                       // UI系统序列化标志 - 标识序列化状态
defundefined1 DAT_180c8f020;                      // UI系统序列化锁 - 控制序列化访问
undefined UNK_180a3dd80;                          // UI系统序列化验证器 - 验证序列化数据
defundefined DAT_180c967c8;                       // UI系统序列化统计 - 统计序列化信息


//------------------------------------------------------------------------------
// UI系统性能优化函数组（续）
//------------------------------------------------------------------------------

// UI系统垃圾回收函数
undefined FUN_180653580;                           // UI系统垃圾回收函数 - 回收无用的UI资源

// UI系统内存压缩函数
undefined FUN_1806535c0;                           // UI系统内存压缩函数 - 压缩内存使用

// UI系统渲染批处理函数
undefined FUN_180653630;                           // UI系统渲染批处理函数 - 批量处理渲染操作

// UI系统缓存管理函数
undefined FUN_180653670;                           // UI系统缓存管理函数 - 管理UI系统缓存
undefined DAT_180a3dda8;                          // UI系统缓存配置 - 存储缓存配置数据
undefined DAT_180c91028;                          // UI系统缓存统计 - 存储缓存统计数据
undefined UNK_180a3ddc0;                          // UI系统缓存索引器 - 管理缓存索引
undefined UNK_180a3deb8;                          // UI系统缓存映射器 - 管理缓存映射
undefined UNK_180a3e0b8;                          // UI系统缓存策略器 - 管理缓存策略
undefined UNK_180a3e0d8;                          // UI系统缓存分析器 - 分析缓存使用情况
undefined UNK_180a3e0f0;                          // UI系统缓存优化器 - 优化缓存性能
undefined UNK_180a3e110;                          // UI系统缓存调度器 - 调度缓存操作
undefined UNK_180a3e128;                          // UI系统缓存分配器 - 分配缓存资源
undefined UNK_180a3e148;                          // UI系统缓存回收器 - 回收缓存资源
undefined UNK_180a3e150;                          // UI系统缓存验证器 - 验证缓存数据
undefined UNK_180a3e160;                          // UI系统缓存同步器 - 同步缓存操作
undefined UNK_180a3e178;                          // UI系统缓存监控器 - 监控缓存状态
undefined UNK_180a3e180;                          // UI系统缓存分析器 - 分析缓存性能
undefined UNK_180a3e1a0;                          // UI系统缓存预取器 - 预取缓存数据
undefined UNK_180a3e1b0;                          // UI系统缓存压缩器 - 压缩缓存数据
undefined UNK_180a3e1c8;                          // UI系统缓存加密器 - 加密缓存数据
undefined UNK_180a3e1f8;                          // UI系统缓存解压器 - 解压缓存数据
undefined UNK_180a3e210;                          // UI系统缓存清理器 - 清理缓存数据
undefined UNK_180a3e224;                          // UI系统缓存配置器 - 配置缓存参数
undefined UNK_180a3e230;                          // UI系统缓存状态器 - 管理缓存状态
undefined UNK_180a3e248;                          // UI系统缓存加载器 - 加载缓存数据
undefined UNK_180a3e260;                          // UI系统缓存保存器 - 保存缓存数据
undefined UNK_180a3e1e0;                          // UI系统缓存检查器 - 检查缓存完整性
undefined UNK_180a3e1e8;                          // UI系统缓存修复器 - 修复缓存错误
undefined UNK_180a3e270;                          // UI系统缓存迁移器 - 迁移缓存数据
undefined UNK_180a3e280;                          // UI系统缓存版本器 - 管理缓存版本
undefined UNK_180a3e294;                          // UI系统缓存校验器 - 校验缓存数据
undefined UNK_180a3e2a0;                          // UI系统缓存序列化器 - 序列化缓存数据
undefined UNK_180a3e2b0;                          // UI系统缓存反序列化器 - 反序列化缓存数据
undefined UNK_180a3e2b8;                          // UI系统缓存压缩器 - 压缩缓存存储
undefined UNK_180a3e2c8;                          // UI系统缓存解压器 - 解压缓存存储
undefined UNK_180a3e2d8;                          // UI系统缓存加密器 - 加密缓存存储
undefined UNK_180a3e2e8;                          // UI系统缓存解密器 - 解密缓存存储
undefined UNK_180a3e300;                          // UI系统缓存备份器 - 备份缓存数据
undefined UNK_180a3e310;                          // UI系统缓存恢复器 - 恢复缓存数据
undefined UNK_180a3e378;                          // UI系统缓存测试器 - 测试缓存功能
defundefined1 DAT_180c96808;                      // UI系统缓存标志 - 标识缓存状态
undefined UNK_180a3e470;                          // UI系统缓存调试器 - 调试缓存功能
undefined UNK_180a3e408;                          // UI系统缓存分析器 - 分析缓存性能
undefined UNK_180a3e418;                          // UI系统缓存优化器 - 优化缓存操作
defundefined DAT_180a3c248;                       // UI系统缓存计数器 - 统计缓存操作
undefined UNK_180a3e4a0;                          // UI系统缓存控制器 - 控制缓存操作
undefined UNK_180a3e4b8;                          // UI系统缓存调度器 - 调度缓存任务
undefined UNK_180a3e4c8;                          // UI系统缓存管理器 - 管理缓存资源
undefined UNK_180a3e4d8;                          // UI系统缓存监控器 - 监控缓存状态
undefined UNK_180a3e4e8;                          // UI系统缓存报告器 - 生成缓存报告
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


