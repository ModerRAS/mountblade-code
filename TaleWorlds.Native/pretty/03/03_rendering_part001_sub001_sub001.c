#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001_sub001_sub001.c - 渲染系统基础函数 (251 个函数)
// 本文件包含渲染系统的核心基础函数，主要负责渲染管线的基础设置和管理

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001_sub001.c - 255 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001.c - 259 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering.c - 6330 个函数




// 函数: 初始化渲染设备
// 负责设置和初始化渲染设备，为后续渲染操作做准备
undefined initialize_render_device;
undefined UNK_180a01310;  // 渲染设备配置参数




// 函数: 创建渲染上下文
// 负责创建渲染上下文，管理渲染状态和资源
undefined create_render_context;
undefined UNK_180277e10;  // 上下文配置结构
undefined UNK_180a01378;  // 渲染格式设置
undefined UNK_180a01360;  // 上下文属性
undefined UNK_180a16bd0;  // 渲染状态标志
undefined DAT_180c8aa08;  // 全局渲染状态
undefined UNK_180a01340;  // 上下文初始化参数
undefined UNK_180a013a8;  // 渲染设备引用
undefined UNK_180a013b8;  // 上下文句柄
undefined UNK_180049530;  // 渲染目标设置
undefined UNK_180093fa0;  // 视口配置
undefined UNK_180093fc0;  // 裁剪区域
undefined UNK_180093fd0;  // 深度缓冲设置
undefined UNK_180a013b0;  // 模板缓冲配置
undefined UNK_180a013e0;  // 上下文扩展参数




// 函数: 设置渲染管线
// 负责配置渲染管线状态，包括着色器、混合模式、光栅化等设置
undefined setup_render_pipeline;
undefined DAT_180c8a988;  // 管线配置结构
undefined UNK_180a04f28;  // 顶点着色器设置
undefined UNK_180a04f58;  // 片段着色器设置
undefined DAT_180a02bf0;  // 着色器程序
undefined DAT_180a03fc0;  // 着色器参数
undefined UNK_180a04f68;  // 混合模式设置
undefined UNK_180a04f70;  // 深度测试设置
undefined UNK_180a04f78;  // 模板测试设置
undefined UNK_180a04f80;  // 裁剪模式设置
undefined UNK_180a04f88;  // 多边形模式设置
undefined UNK_180a04f90;  // 线宽设置
undefined UNK_180a04fd4;  // 点大小设置
undefined UNK_180a04f98;  // 前面剔除设置
undefined UNK_1803cfb60;  // 背面剔除设置
undefined UNK_180a24148;  // 光栅化状态
undefined UNK_180a05068;  // 多重采样设置
undefined UNK_180a05088;  // 采样器状态
undefined UNK_180a05010;  // 纹理绑定设置
undefined UNK_180a05038;  // 缓冲区绑定设置
undefined UNK_180a05050;  // 顶点属性设置
undefined UNK_180a23df0;  // 变换反馈设置
undefined UNK_180a050a8;  // 几何着色器设置
undefined UNK_180a04ff8;  // 细分控制着色器设置
undefined UNK_180a05240;  // 细分评估着色器设置
undefined UNK_180a051b0;  // 计算着色器设置
undefined UNK_180a05178;  // 着色器存储缓冲区
undefined UNK_180a173b0;  // 原子计数器设置
undefined UNK_180a05158;  // 变换缓冲区设置
undefined UNK_180a05168;  // 查询对象设置
undefined UNK_180a05128;  // 同步对象设置
undefined UNK_180a05148;  // 条件渲染设置
undefined UNK_180a05138;  // 管线缓存设置




// 函数: 初始化渲染缓冲区
// 负责初始化渲染所需的缓冲区资源，包括颜色、深度、模板缓冲区
undefined init_render_buffers;
undefined buffer_config;        // 缓冲区配置参数
undefined buffer_format;        // 缓冲区格式设置
undefined buffer_size;          // 缓冲区尺寸配置
undefined buffer_alignment;     // 缓冲区对齐设置
undefined buffer_flags;         // 缓冲区标志位
undefined device_info;          // 设备信息结构
undefined surface_desc;         // 渲染表面描述
undefined color_format;         // 颜色格式设置
undefined depth_format;         // 深度格式设置
undefined buffer_layout;        // 缓冲区布局
undefined memory_pool;           // 内存池管理
undefined resource_handle;      // 资源句柄
undefined buffer_type;          // 缓冲区类型
undefined usage_flags;          // 使用标志位




// 函数: 创建纹理资源
// 负责创建和管理纹理资源，包括2D纹理、3D纹理、立方体贴图等
undefined create_texture_resource;
undefined texture_params;       // 纹理参数配置
undefined texture_format;       // 纹理格式设置
undefined texture_dimensions;  // 纹理尺寸配置
undefined texture_mips;         // 纹理MIP层级
undefined texture_filter;       // 纹理过滤模式
undefined texture_wrap;         // 纹理包裹模式
undefined texture_border;      // 纹理边框颜色
undefined texture_compare;      // 纹理比较模式
undefined texture_data;         // 纹理数据指针
undefined texture_size;         // 纹理数据大小
undefined texture_pitch;        // 纹理行间距
undefined texture_slice;        // 纹理切片大小
undefined texture_usage;        // 纹理用途标志
undefined texture_bind;        // 纹理绑定点
undefined texture_access;       // 纹理访问权限
undefined texture_misc;         // 纹理杂项标志
undefined texture_type;         // 纹理类型
undefined texture_array;        // 纹理数组大小
undefined texture_samples;     // 多重采样数量
undefined texture_layout;       // 纹理布局
undefined texture_queue;        // 纹理队列
undefined texture_sync;         // 纹理同步对象
undefined texture_memory;       // 纹理内存池
undefined texture_flags;        // 纹理标志位
undefined texture_heap;         // 纹理堆内存
undefined texture_desc;         // 纹理描述符
undefined texture_handle;       // 纹理句柄
undefined texture_state;        // 纹理状态
undefined texture_view;         // 纹理视图
undefined texture_resource;     // 纹理资源指针
char texture_init_flag;         // 纹理初始化标志
undefined texture_allocator;    // 纹理分配器
undefined texture_deallocator;  // 纹理解分配器
char texture_active;           // 纹理激活状态
undefined texture_cache;        // 纹理缓存
undefined texture_manager;      // 纹理管理器
undefined texture_pool;         // 纹理池
undefined texture_registry;     // 纹理注册表
undefined texture_counter;      // 纹理计数器




// 函数: 设置渲染状态
// 负责设置渲染管线状态，包括混合、深度测试、模板测试等
undefined set_render_state;
undefined blend_enable;         // 混合使能标志
undefined blend_op;             // 混合操作
undefined blend_src;            // 源混合因子
undefined blend_dst;            // 目标混合因子
undefined blend_color;          // 混合颜色
undefined depth_enable;         // 深度测试使能
undefined depth_func;           // 深度比较函数
undefined depth_write;          // 深度写入使能
undefined depth_bias;           // 深度偏移
undefined depth_scale;          // 深度缩放
undefined stencil_enable;       // 模板测试使能
undefined stencil_func;         // 模板比较函数
undefined stencil_ref;          // 模板参考值
undefined stencil_mask;         // 模板掩码
undefined stencil_write;        // 模板写入掩码
undefined stencil_op;           // 模板操作
undefined rasterizer_state;     // 光栅化状态
undefined rasterizer_desc;      // 光栅化描述符
undefined rasterizer_flags;     // 光栅化标志
undefined rasterizer_mode;      // 光栅化模式
undefined rasterizer_fill;      // 填充模式
undefined rasterizer_cull;      // 剔除模式
undefined rasterizer_front;     // 前面朝向
undefined rasterizer_depth;     // 深度偏移设置
undefined rasterizer_scissor;   // 剪裁测试设置
undefined rasterizer_multisample; // 多重采样设置
undefined rasterizer_line;      // 线条设置
undefined rasterizer_point;     // 点设置
undefined rasterizer_clip;      // 裁剪距离




// 函数: 编译着色器
// 负责编译顶点着色器、片段着色器等
undefined compile_shader;
undefined shader_source;        // 着色器源代码
undefined shader_type;          // 着色器类型
undefined shader_entry;         // 着色器入口点
undefined shader_version;       // 着色器版本
undefined shader_flags;         // 着色器编译标志
undefined shader_result;        // 编译结果状态




// 函数: 链接着色器程序
// 负责将编译好的着色器链接成完整的着色器程序
undefined link_shader_program;
undefined program_handle;       // 程序句柄
undefined vertex_shader;       // 顶点着色器
undefined fragment_shader;     // 片段着色器
undefined geometry_shader;     // 几何着色器
undefined program_status;      // 程序状态
undefined program_info;        // 程序信息
undefined program_log;         // 程序日志
undefined attrib_location;     // 属性位置
undefined uniform_location;     // 统一变量位置




// 函数: 创建顶点缓冲区
// 负责创建和管理顶点缓冲区对象
undefined create_vertex_buffer;
undefined buffer_data;          // 缓冲区数据
undefined buffer_size;          // 缓冲区大小
undefined buffer_usage;          // 缓冲区使用方式
undefined buffer_format;        // 缓冲区格式
undefined buffer_stride;        // 缓冲区步长
undefined buffer_handle;        // 缓冲区句柄
undefined buffer_flags;         // 缓冲区标志
undefined vertex_desc;          // 顶点描述符




// 函数: 创建索引缓冲区
// 负责创建和管理索引缓冲区对象
undefined create_index_buffer;
undefined index_data;           // 索引数据
undefined index_count;          // 索引数量
undefined index_format;         // 索引格式
undefined buffer_handle;        // 缓冲区句柄
undefined buffer_usage;         // 缓冲区使用方式
undefined buffer_flags;         // 缓冲区标志




// 函数: 绑定缓冲区
// 负责绑定缓冲区到渲染管线
undefined bind_buffer;




// 函数: 创建帧缓冲区
// 负责创建和管理帧缓冲区对象
undefined create_framebuffer;
undefined framebuffer_desc;     // 帧缓冲区描述符
undefined color_attachments;    // 颜色附件
undefined depth_attachment;     // 深度附件
undefined stencil_attachment;   // 模板附件
undefined framebuffer_handle;   // 帧缓冲区句柄
undefined framebuffer_status;   // 帧缓冲区状态
undefined render_target;        // 渲染目标




// 函数: undefined FUN_1804379d0;
undefined FUN_1804379d0;
undefined UNK_180242690;
undefined UNK_1802bf300;
undefined SUB_1802bf330;
undefined UNK_180435850;
undefined UNK_180435bc0;




// 函数: undefined FUN_180437b60;
undefined FUN_180437b60;
undefined UNK_180435be0;




// 函数: undefined FUN_180437ba0;
undefined FUN_180437ba0;
undefined UNK_180435c50;




// 函数: undefined FUN_180437c40;
undefined FUN_180437c40;
undefined UNK_180435cb0;




// 函数: undefined FUN_180437ca0;
undefined FUN_180437ca0;
undefined UNK_180435d80;




// 函数: undefined FUN_180437cf0;
undefined FUN_180437cf0;
undefined UNK_180435dd0;




// 函数: undefined FUN_180437d40;
undefined FUN_180437d40;
undefined UNK_180435ee0;




// 函数: undefined FUN_180437d60;
undefined FUN_180437d60;
undefined UNK_1804360a0;




// 函数: undefined FUN_180437e80;
undefined FUN_180437e80;
undefined UNK_1804360c0;
undefined UNK_180436270;
undefined UNK_180436290;
undefined UNK_180436c90;




// 函数: undefined FUN_180438210;
undefined FUN_180438210;
undefined UNK_180436ca0;




// 函数: undefined FUN_1804382b0;
undefined FUN_1804382b0;
undefined UNK_180437030;




// 函数: undefined FUN_180438350;
undefined FUN_180438350;
undefined UNK_180437040;




// 函数: undefined FUN_180438560;
undefined FUN_180438560;
undefined UNK_180437090;




// 函数: undefined FUN_180438680;
undefined FUN_180438680;
undefined UNK_1804370a0;




// 函数: undefined FUN_1804386b0;
undefined FUN_1804386b0;
undefined UNK_1804370e0;




// 函数: undefined FUN_180438940;
undefined FUN_180438940;
undefined UNK_1804371e0;




// 函数: undefined FUN_1804389f0;
undefined FUN_1804389f0;
undefined UNK_180437270;
undefined UNK_180437280;
undefined UNK_180437450;
undefined UNK_1804375e0;
undefined UNK_180437c30;
undefined UNK_180437fc0;
undefined UNK_180437fd0;
undefined UNK_180437fe0;
undefined UNK_180438060;




// 函数: undefined FUN_180438c50;
undefined FUN_180438c50;
undefined UNK_180438080;




// 函数: undefined FUN_180438c70;
undefined FUN_180438c70;
undefined UNK_1804380b0;
undefined UNK_1804380c0;
undefined UNK_1804380e0;
undefined UNK_180438100;
undefined UNK_180438120;
undefined UNK_180438140;
undefined UNK_180438160;
undefined UNK_180438180;
undefined UNK_1804381a0;
undefined UNK_1804381c0;
undefined UNK_1804381e0;
undefined UNK_1804381f0;
undefined UNK_180438290;
undefined UNK_180438330;
undefined UNK_180438540;
undefined UNK_1804388d0;
undefined UNK_180438c10;
undefined UNK_180438c30;
undefined UNK_180438c40;
undefined UNK_18043b920;
undefined UNK_18043bb40;
undefined UNK_18043bb50;
undefined UNK_18043bb60;
undefined UNK_18043bb70;
undefined UNK_18043bb90;
undefined UNK_18043bbb0;
undefined UNK_18043bbd0;
undefined UNK_18043bd50;
undefined UNK_18043bd90;
undefined UNK_18043bdc0;
undefined UNK_18043c150;
undefined UNK_18043c330;
undefined UNK_18043c340;
undefined UNK_18043c630;
undefined UNK_18043c640;
undefined UNK_18043c650;
undefined UNK_18043c670;
undefined UNK_18043c690;
undefined UNK_18043c720;
undefined UNK_18043c730;
undefined UNK_18043e620;
undefined UNK_18043e980;
undefined UNK_18043ea70;
undefined UNK_18043eae0;
undefined UNK_18043eaf0;
undefined UNK_18043ec40;
undefined UNK_18043ec70;
undefined UNK_18043ec80;
undefined UNK_18043ec90;
undefined UNK_18043ed50;
undefined UNK_18043ef30;
undefined UNK_18043f2a0;
undefined UNK_18043f2b0;
undefined UNK_18043f2f0;
undefined UNK_18043fab0;
undefined UNK_18043fad0;
undefined UNK_18043fb00;
undefined UNK_18043fb50;
undefined UNK_18043fb60;
undefined UNK_18043fba0;
undefined UNK_18043fbc0;
undefined UNK_18043fbd0;
undefined UNK_18043fbf0;
undefined UNK_18043fc50;
undefined UNK_18043fc70;
undefined UNK_18043fc90;
undefined UNK_18043fcb0;
undefined UNK_18043fe40;
undefined UNK_18043fe50;
undefined UNK_18043fed0;
undefined UNK_18043fee0;
undefined UNK_180440380;
undefined UNK_180440470;
undefined UNK_180440490;
undefined UNK_180440530;
undefined UNK_180441240;
undefined UNK_1804418d0;
undefined UNK_180441900;
undefined UNK_180441940;
undefined UNK_1804419f0;
undefined UNK_180441d50;
undefined UNK_180441d70;
undefined UNK_180441d90;
undefined UNK_180441da0;
undefined UNK_180441db0;
undefined UNK_180441f10;
undefined UNK_180441f20;
undefined UNK_180441f30;
undefined UNK_180441f40;
undefined UNK_180442160;
undefined UNK_180442430;
undefined UNK_180442440;
undefined UNK_180442550;
undefined UNK_180442660;
undefined UNK_180442700;
undefined UNK_180442830;
undefined UNK_180442840;




// 函数: undefined FUN_18043a140;
undefined FUN_18043a140;
undefined UNK_180442ff0;




// 函数: undefined FUN_18043ab40;
undefined FUN_18043ab40;
undefined UNK_180443150;
undefined UNK_180443170;
undefined UNK_180443190;




// 函数: undefined FUN_18043b290;
undefined FUN_18043b290;
undefined UNK_1804431b0;




// 函数: undefined FUN_18043b930;
undefined FUN_18043b930;
undefined UNK_1804435d0;




// 函数: undefined FUN_18043bbe0;
undefined FUN_18043bbe0;
undefined UNK_1804435e0;
undefined UNK_1804436e0;
undefined UNK_1804440c0;
undefined UNK_180444130;
undefined UNK_180444140;
undefined UNK_180444150;




// 函数: undefined FUN_18043bfb0;
undefined FUN_18043bfb0;
undefined UNK_180444160;




// 函数: undefined FUN_18043bff0;
undefined FUN_18043bff0;
undefined UNK_180444190;




// 函数: undefined FUN_18043c020;
undefined FUN_18043c020;
undefined UNK_1804441c0;




// 函数: undefined FUN_18043c060;
undefined FUN_18043c060;
undefined UNK_1804441d0;




// 函数: undefined FUN_18043c0b0;
undefined FUN_18043c0b0;
undefined UNK_1804441e0;




// 函数: undefined FUN_18043c0f0;
undefined FUN_18043c0f0;
undefined UNK_1804441f0;




// 函数: undefined FUN_18043c160;
undefined FUN_18043c160;
undefined UNK_1804442b0;




// 函数: undefined FUN_18043c230;
undefined FUN_18043c230;
undefined UNK_180444360;




// 函数: undefined FUN_18043c290;
undefined FUN_18043c290;
undefined UNK_180444440;




// 函数: undefined FUN_18043c2e0;
undefined FUN_18043c2e0;
undefined UNK_180444450;




// 函数: undefined FUN_18043c350;
undefined FUN_18043c350;
undefined UNK_180444460;




// 函数: undefined FUN_18043c370;
undefined FUN_18043c370;
undefined UNK_180444470;




// 函数: undefined FUN_18043c3b0;
undefined FUN_18043c3b0;
undefined UNK_180444480;




// 函数: undefined FUN_18043c510;
undefined FUN_18043c510;
undefined UNK_1804445a0;




// 函数: undefined FUN_18043c6b0;
undefined FUN_18043c6b0;
undefined UNK_1804449d0;




// 函数: undefined FUN_18043c6e0;
undefined FUN_18043c6e0;
undefined UNK_1804449f0;




// 函数: undefined FUN_18043c740;
undefined FUN_18043c740;
undefined UNK_180444a00;




// 函数: undefined FUN_18043c7a0;
undefined FUN_18043c7a0;
undefined UNK_180444d60;




// 函数: undefined FUN_18043c820;
undefined FUN_18043c820;
undefined UNK_180444f20;




// 函数: undefined FUN_18043c8e0;
undefined FUN_18043c8e0;
undefined UNK_180444f60;
undefined UNK_180444fb0;
undefined UNK_180444fd0;




// 函数: undefined FUN_18043ca10;
undefined FUN_18043ca10;
undefined UNK_180445020;




// 函数: undefined FUN_18043caa0;
undefined FUN_18043caa0;
undefined UNK_1804450e0;




// 函数: undefined FUN_18043cae0;
undefined FUN_18043cae0;
undefined UNK_180445140;




// 函数: undefined FUN_18043cb50;
undefined FUN_18043cb50;
undefined UNK_180445160;




// 函数: undefined FUN_18043cbd0;
undefined FUN_18043cbd0;
undefined UNK_180445230;




// 函数: undefined FUN_18043d100;
undefined FUN_18043d100;
undefined UNK_180445280;




// 函数: undefined FUN_18043e5c0;
undefined FUN_18043e5c0;
undefined UNK_1804452d0;




// 函数: undefined FUN_18043e630;
undefined FUN_18043e630;
undefined UNK_1804452f0;




// 函数: undefined FUN_18043e720;
undefined FUN_18043e720;
undefined UNK_180445310;




// 函数: undefined FUN_18043e7f0;
undefined FUN_18043e7f0;
undefined UNK_180445330;




// 函数: undefined FUN_18043e990;
undefined FUN_18043e990;
undefined UNK_180445340;




// 函数: undefined FUN_18043e9b0;
undefined FUN_18043e9b0;
undefined UNK_180445350;
undefined UNK_180445360;
undefined UNK_180445370;
undefined UNK_180445470;
undefined UNK_1804454d0;




// 函数: undefined FUN_18043ea60;
undefined FUN_18043ea60;
undefined UNK_180445510;




// 函数: undefined FUN_18043ea80;
undefined FUN_18043ea80;
undefined UNK_180445530;




// 函数: undefined FUN_18043eb00;
undefined FUN_18043eb00;
undefined UNK_180445540;




// 函数: undefined FUN_18043eb50;
undefined FUN_18043eb50;
undefined UNK_180445550;




// 函数: undefined FUN_18043ecc0;
undefined FUN_18043ecc0;
undefined UNK_1804455b0;




// 函数: undefined FUN_18043ed10;
undefined FUN_18043ed10;
undefined UNK_1804455c0;




// 函数: undefined FUN_18043ed70;
undefined FUN_18043ed70;
undefined UNK_1804455d0;
undefined UNK_1804455e0;
undefined UNK_1804455f0;




// 函数: undefined FUN_18043ee70;
undefined FUN_18043ee70;
undefined UNK_180445600;




// 函数: undefined FUN_18043ef40;
undefined FUN_18043ef40;
undefined UNK_180445790;




// 函数: undefined FUN_18043ef90;
undefined FUN_18043ef90;
undefined UNK_1804457a0;




// 函数: undefined FUN_18043f010;
undefined FUN_18043f010;
undefined UNK_180445960;




// 函数: undefined FUN_18043f0d0;
undefined FUN_18043f0d0;
undefined UNK_180445fa0;




// 函数: undefined FUN_18043f240;
undefined FUN_18043f240;
undefined UNK_180445fb0;




// 函数: undefined FUN_18043f300;
undefined FUN_18043f300;
undefined UNK_180445fc0;




// 函数: undefined FUN_18043f3f0;
undefined FUN_18043f3f0;
undefined UNK_180445ff0;




// 函数: undefined FUN_18043f5f0;
undefined FUN_18043f5f0;
undefined UNK_180446000;




// 函数: undefined FUN_18043f610;
undefined FUN_18043f610;
undefined UNK_180446070;




// 函数: undefined FUN_18043f770;
undefined FUN_18043f770;
undefined UNK_1804460b0;




// 函数: undefined FUN_18043f880;
undefined FUN_18043f880;
undefined UNK_1804461a0;




// 函数: undefined FUN_18043f8f0;
undefined FUN_18043f8f0;
undefined UNK_180446280;




// 函数: undefined FUN_18043f960;
undefined FUN_18043f960;
undefined UNK_180446290;




// 函数: undefined FUN_18043f9b0;
undefined FUN_18043f9b0;
undefined UNK_180446530;




// 函数: undefined FUN_18043fa30;
undefined FUN_18043fa30;
undefined UNK_180446550;




// 函数: undefined FUN_18043fae0;
undefined FUN_18043fae0;
undefined UNK_180446560;




// 函数: undefined FUN_18043fb10;
undefined FUN_18043fb10;
undefined UNK_1804465b0;
undefined UNK_180446600;
undefined UNK_180446900;




// 函数: undefined FUN_18043fc20;
undefined FUN_18043fc20;
undefined UNK_180446940;




// 函数: undefined FUN_18043fce0;
undefined FUN_18043fce0;
undefined UNK_180446950;




// 函数: undefined FUN_18043fd10;
undefined FUN_18043fd10;
undefined UNK_1804469d0;




// 函数: undefined FUN_18043fd70;
undefined FUN_18043fd70;
undefined UNK_1804469e0;




// 函数: undefined FUN_18043fe10;
undefined FUN_18043fe10;
undefined UNK_180446a20;




// 函数: undefined FUN_18043fe70;
undefined FUN_18043fe70;
undefined UNK_180446a40;




// 函数: undefined FUN_18043fef0;
undefined FUN_18043fef0;
undefined UNK_180446b10;




// 函数: undefined FUN_18043ff20;
undefined FUN_18043ff20;
undefined UNK_180446e00;




// 函数: undefined FUN_1804401b0;
undefined FUN_1804401b0;
undefined UNK_180446e10;




// 函数: undefined FUN_180440220;
undefined FUN_180440220;
undefined UNK_180446e20;




// 函数: undefined FUN_180440280;
undefined FUN_180440280;
undefined UNK_180446e30;




// 函数: undefined FUN_1804402e0;
undefined FUN_1804402e0;
undefined UNK_180446e50;




// 函数: undefined FUN_180440350;
undefined FUN_180440350;
undefined UNK_180446e60;




// 函数: undefined FUN_1804403d0;
undefined FUN_1804403d0;
undefined UNK_180446f90;




// 函数: undefined FUN_1804404b0;
undefined FUN_1804404b0;
undefined UNK_180447010;




// 函数: undefined FUN_180440560;
undefined FUN_180440560;
undefined UNK_180447020;
undefined UNK_1804470c0;
undefined UNK_180447110;




// 函数: undefined FUN_1804405e0;
undefined FUN_1804405e0;
undefined UNK_1804473a0;




// 函数: undefined FUN_180440660;
undefined FUN_180440660;
undefined UNK_1804475b0;




// 函数: undefined FUN_180440750;
undefined FUN_180440750;
undefined UNK_180447c80;




// 函数: undefined FUN_180440910;
undefined FUN_180440910;
undefined UNK_180447c90;




// 函数: undefined FUN_180440aa0;
undefined FUN_180440aa0;
undefined UNK_180447d20;
undefined UNK_180447d30;




// 函数: undefined FUN_180440cb0;
undefined FUN_180440cb0;
undefined UNK_180447dc0;




// 函数: undefined FUN_180440d20;
undefined FUN_180440d20;
undefined UNK_1804482a0;




// 函数: undefined FUN_180440d90;
undefined FUN_180440d90;
undefined UNK_1804482b0;




// 函数: undefined FUN_180440e00;
undefined FUN_180440e00;
undefined UNK_1804482e0;




// 函数: undefined FUN_180440e70;
undefined FUN_180440e70;
undefined UNK_180448370;




// 函数: undefined FUN_180440f30;
undefined FUN_180440f30;
undefined UNK_180448400;




// 函数: undefined FUN_180441070;
undefined FUN_180441070;
undefined UNK_180448410;




// 函数: undefined FUN_1804410a0;
undefined FUN_1804410a0;
undefined UNK_1804497e0;




// 函数: undefined FUN_180441110;
undefined FUN_180441110;
undefined UNK_180449820;




// 函数: undefined FUN_180441180;
undefined FUN_180441180;
undefined UNK_180449830;




// 函数: undefined FUN_180441260;
undefined FUN_180441260;
undefined UNK_180449840;




// 函数: undefined FUN_180441420;
undefined FUN_180441420;
undefined UNK_180449920;




// 函数: undefined FUN_1804414d0;
undefined FUN_1804414d0;
undefined UNK_180449be0;




// 函数: undefined FUN_1804415d0;
undefined FUN_1804415d0;
undefined UNK_180449bf0;




// 函数: undefined FUN_180441640;
undefined FUN_180441640;
undefined UNK_18044a390;




// 函数: undefined FUN_180441730;
undefined FUN_180441730;
undefined UNK_18044a7c0;




// 函数: undefined FUN_1804417b0;
undefined FUN_1804417b0;
undefined UNK_18044a7d0;




// 函数: undefined FUN_180441830;
undefined FUN_180441830;
undefined UNK_18044a7e0;




// 函数: undefined FUN_180441890;
undefined FUN_180441890;
undefined UNK_18044a7f0;




// 函数: undefined FUN_1804418e0;
undefined FUN_1804418e0;
undefined UNK_18044a800;




// 函数: undefined FUN_180441910;
undefined FUN_180441910;
undefined UNK_18044ab30;




// 函数: undefined FUN_180441950;
undefined FUN_180441950;
undefined UNK_18044ab40;




// 函数: undefined FUN_180441a00;
undefined FUN_180441a00;
undefined UNK_18044ab50;




// 函数: undefined FUN_180441c50;
undefined FUN_180441c50;
undefined UNK_18044ab60;




// 函数: undefined FUN_180441cc0;
undefined FUN_180441cc0;
undefined UNK_18044b250;
undefined UNK_18044b540;
undefined UNK_18044b570;




// 函数: undefined FUN_180441dd0;
undefined FUN_180441dd0;
undefined UNK_18044b6c0;




// 函数: undefined FUN_180441e10;
undefined FUN_180441e10;
undefined UNK_18044baa0;




// 函数: undefined FUN_180441e50;
undefined FUN_180441e50;
undefined UNK_18044bc30;




// 函数: undefined FUN_180441e90;
undefined FUN_180441e90;
undefined UNK_18044bc40;




// 函数: undefined FUN_180441f60;
undefined FUN_180441f60;
undefined UNK_18044c070;




// 函数: undefined FUN_180441fc0;
undefined FUN_180441fc0;
undefined UNK_18044c080;




// 函数: undefined FUN_180442020;
undefined FUN_180442020;
undefined UNK_18044c0a0;




// 函数: undefined FUN_1804420c0;
undefined FUN_1804420c0;
undefined UNK_18044c0b0;




// 函数: undefined FUN_180442180;
undefined FUN_180442180;
undefined UNK_18044c0c0;




// 函数: undefined FUN_1804422a0;
undefined FUN_1804422a0;
undefined UNK_18044c710;
undefined UNK_18044c940;
undefined UNK_18044c980;




// 函数: undefined FUN_180442370;
undefined FUN_180442370;
undefined UNK_18044c9a0;
undefined UNK_18044ca40;
undefined UNK_18044ca60;
undefined UNK_18044ca80;
undefined UNK_18044caa0;




// 函数: undefined FUN_180442450;
undefined FUN_180442450;
undefined UNK_18044cac0;




// 函数: undefined FUN_1804424d0;
undefined FUN_1804424d0;
undefined UNK_18044cae0;




// 函数: undefined FUN_180442560;
undefined FUN_180442560;
undefined UNK_18044cb00;
undefined UNK_18044cb20;
undefined UNK_18044cb40;
undefined UNK_18044cb60;
undefined UNK_18044d030;




// 函数: undefined FUN_180442670;
undefined FUN_180442670;
undefined UNK_18044d040;
undefined UNK_18044d050;
undefined UNK_18044d080;
undefined UNK_18044d090;
undefined UNK_18044d330;




// 函数: undefined FUN_180442720;
undefined FUN_180442720;
undefined UNK_18044d400;




// 函数: undefined FUN_180442860;
undefined FUN_180442860;
undefined UNK_18044d410;




// 函数: undefined FUN_180442950;
undefined FUN_180442950;
undefined UNK_18044d420;




// 函数: undefined FUN_1804429f0;
undefined FUN_1804429f0;
undefined UNK_18044d630;




// 函数: undefined FUN_180442b30;
undefined FUN_180442b30;
undefined UNK_18044d660;




// 函数: undefined FUN_180442d10;
undefined FUN_180442d10;
undefined UNK_18044d6f0;




// 函数: undefined FUN_180442e00;
undefined FUN_180442e00;
undefined UNK_18044d720;




// 函数: undefined FUN_180443000;
undefined FUN_180443000;
undefined UNK_18044d740;




// 函数: undefined FUN_180443080;
undefined FUN_180443080;
undefined UNK_18044d760;




// 函数: undefined FUN_1804431c0;
undefined FUN_1804431c0;
undefined UNK_18044d780;
undefined UNK_18044d7a0;
undefined UNK_18044d7c0;
undefined UNK_18044dbf0;
undefined UNK_18044e040;
undefined UNK_18044e230;
undefined UNK_18044e250;




// 函数: undefined FUN_180443320;
undefined FUN_180443320;
undefined UNK_18044e260;




// 函数: undefined FUN_180443510;
undefined FUN_180443510;
undefined UNK_18044e270;




// 函数: undefined FUN_180443630;
undefined FUN_180443630;
undefined UNK_18044e2a0;




// 函数: undefined FUN_180443680;
undefined FUN_180443680;
undefined UNK_18044e320;




// 函数: undefined FUN_180443700;
undefined FUN_180443700;
undefined UNK_18044e330;




// 函数: undefined FUN_180443770;
undefined FUN_180443770;
undefined UNK_18044e340;




// 函数: undefined FUN_180443820;
undefined FUN_180443820;
undefined UNK_18044e360;




// 函数: undefined FUN_180443930;
undefined FUN_180443930;
undefined UNK_18044e380;
undefined UNK_18044e390;
undefined UNK_18044e610;
undefined UNK_18044e640;




// 函数: undefined FUN_180443a40;
undefined FUN_180443a40;
undefined UNK_18044f490;




// 函数: undefined FUN_180443aa0;
undefined FUN_180443aa0;
undefined UNK_18044f4b0;




// 函数: undefined FUN_180443b00;
undefined FUN_180443b00;
undefined UNK_18044f4f0;




// 函数: undefined FUN_180443b40;
undefined FUN_180443b40;
undefined UNK_18044f510;




// 函数: undefined FUN_180443b80;
undefined FUN_180443b80;
undefined UNK_18044f530;




// 函数: undefined FUN_180443d10;
undefined FUN_180443d10;
undefined UNK_18044f580;




// 函数: undefined FUN_180443d70;
undefined FUN_180443d70;
undefined UNK_18044f5d0;




// 函数: undefined FUN_180443df0;
undefined FUN_180443df0;
undefined UNK_18044f5f0;




// 函数: undefined FUN_180443f80;
undefined FUN_180443f80;
undefined UNK_18044f610;




// 函数: undefined FUN_180443ff0;
undefined FUN_180443ff0;
undefined UNK_18044f630;




// 函数: undefined FUN_180444030;
undefined FUN_180444030;
undefined UNK_18044f640;




// 函数: undefined FUN_180444070;
undefined FUN_180444070;
undefined UNK_18044f660;




// 函数: undefined FUN_180444100;
undefined FUN_180444100;
undefined UNK_18044f690;




// 函数: undefined FUN_180444200;
undefined FUN_180444200;
undefined UNK_18044f6b0;




// 函数: undefined FUN_180444280;
undefined FUN_180444280;
undefined UNK_18044f6e0;




// 函数: undefined FUN_1804442c0;
undefined FUN_1804442c0;
undefined UNK_18044f750;




// 函数: undefined FUN_1804442e0;
undefined FUN_1804442e0;
undefined UNK_18044f940;




// 函数: undefined FUN_180444370;
undefined FUN_180444370;
undefined UNK_18044f960;




// 函数: undefined FUN_1804443c0;
undefined FUN_1804443c0;
undefined UNK_18044f980;




// 函数: undefined FUN_180444410;
undefined FUN_180444410;
undefined UNK_18044f9a0;




// 函数: undefined FUN_1804445b0;
undefined FUN_1804445b0;
undefined UNK_18044f9c0;




// 函数: undefined FUN_180444600;
undefined FUN_180444600;
undefined UNK_18044f9e0;




// 函数: undefined FUN_180444700;
undefined FUN_180444700;
undefined UNK_18044faf0;




// 函数: undefined FUN_1804447c0;
undefined FUN_1804447c0;
undefined UNK_18044fb20;




// 函数: undefined FUN_1804448a0;
undefined FUN_1804448a0;
undefined UNK_18044fb40;




// 函数: undefined FUN_1804449a0;
undefined FUN_1804449a0;
undefined UNK_18044fb60;




// 函数: undefined FUN_180444a20;
undefined FUN_180444a20;
undefined UNK_18044fb80;




// 函数: undefined FUN_180444b70;
undefined FUN_180444b70;
undefined UNK_18044fba0;




// 函数: undefined FUN_180444dd0;
undefined FUN_180444dd0;
undefined UNK_18044fbc0;




// 函数: undefined FUN_180444e90;
undefined FUN_180444e90;
undefined UNK_18044fbe0;




// 函数: undefined FUN_180445060;
undefined FUN_180445060;
undefined UNK_18044fc00;




// 函数: undefined FUN_180445110;
undefined FUN_180445110;
undefined UNK_18044fc20;




// 函数: undefined FUN_180445180;
undefined FUN_180445180;
undefined UNK_18044fc40;




// 函数: undefined FUN_180445390;
undefined FUN_180445390;
undefined UNK_18044fc60;




// 函数: undefined FUN_180445480;
undefined FUN_180445480;
undefined UNK_18044fc80;




// 函数: undefined FUN_180445570;
undefined FUN_180445570;
undefined UNK_18044fca0;
undefined UNK_18044fcc0;




// 函数: undefined FUN_180445680;
undefined FUN_180445680;
undefined UNK_18044fce0;




// 函数: undefined FUN_1804457b0;
undefined FUN_1804457b0;
undefined UNK_18044fd00;




// 函数: undefined FUN_180445870;
undefined FUN_180445870;
undefined UNK_18044fd20;




// 函数: undefined FUN_180445970;
undefined FUN_180445970;
undefined UNK_18044fd40;




// 函数: undefined FUN_180445a80;
undefined FUN_180445a80;
undefined UNK_18044fd60;




// 函数: undefined FUN_180445cd0;
undefined FUN_180445cd0;
undefined UNK_18044fd80;




// 函数: undefined FUN_180445dc0;
undefined FUN_180445dc0;
undefined UNK_18044fda0;




// 函数: undefined FUN_180445eb0;
undefined FUN_180445eb0;
undefined UNK_18044fdc0;




// 函数: undefined FUN_180445fd0;
undefined FUN_180445fd0;
undefined UNK_18044fde0;




// 函数: undefined FUN_180446010;
undefined FUN_180446010;
undefined UNK_18044fe00;




// 函数: undefined FUN_180446080;
undefined FUN_180446080;
undefined UNK_18044fe20;




// 函数: undefined FUN_1804460c0;
undefined FUN_1804460c0;
undefined UNK_18044fe40;




// 函数: undefined FUN_1804460f0;
undefined FUN_1804460f0;
undefined UNK_18044fe60;




// 函数: undefined FUN_180446120;
undefined FUN_180446120;
undefined UNK_18044fe80;




// 函数: undefined FUN_180446160;
undefined FUN_180446160;
undefined UNK_18044fe90;




// 函数: undefined FUN_1804461b0;
undefined FUN_1804461b0;
undefined UNK_18044fea0;




// 函数: undefined FUN_1804462a0;
undefined FUN_1804462a0;
undefined UNK_18044fee0;




// 函数: undefined FUN_1804462e0;
undefined FUN_1804462e0;
undefined UNK_18044ff00;




// 函数: undefined FUN_180446320;
undefined FUN_180446320;
undefined UNK_18044ff20;




// 函数: undefined FUN_180446370;
undefined FUN_180446370;
undefined UNK_18044ff40;




// 函数: undefined FUN_1804463b0;
undefined FUN_1804463b0;
undefined UNK_18044ff60;




// 函数: undefined FUN_1804463f0;
undefined FUN_1804463f0;
undefined UNK_18044ff80;




// 函数: undefined FUN_180446430;
undefined FUN_180446430;
undefined UNK_180450350;




// 函数: undefined FUN_180446480;
undefined FUN_180446480;
undefined UNK_180450a00;




// 函数: undefined FUN_180446610;
undefined FUN_180446610;
undefined UNK_180450b90;




// 函数: undefined FUN_180446650;
undefined FUN_180446650;
undefined UNK_1804512e0;




// 函数: undefined FUN_180446690;
undefined FUN_180446690;
undefined UNK_1804517b0;




// 函数: undefined FUN_180446760;
undefined FUN_180446760;
undefined UNK_1804518e0;




// 函数: undefined FUN_180446810;
undefined FUN_180446810;
undefined UNK_1804518f0;
undefined UNK_180451900;
undefined UNK_180451920;




// 函数: undefined FUN_180446960;
undefined FUN_180446960;
undefined UNK_180451930;




// 函数: undefined FUN_180446a60;
undefined FUN_180446a60;
undefined UNK_180451940;




// 函数: undefined FUN_180446b20;
undefined FUN_180446b20;
undefined UNK_180451970;




// 函数: undefined FUN_180446ba0;
undefined FUN_180446ba0;
undefined UNK_180451990;




// 函数: undefined FUN_180446ca0;
undefined FUN_180446ca0;
undefined UNK_1804519b0;




// 函数: undefined FUN_180446d20;
undefined FUN_180446d20;
undefined UNK_180451c70;




// 函数: undefined FUN_180446dc0;
undefined FUN_180446dc0;
undefined UNK_180451c80;




// 函数: undefined FUN_180446e70;
undefined FUN_180446e70;
undefined UNK_180451c90;




// 函数: undefined FUN_180446f00;
undefined FUN_180446f00;
undefined UNK_180452530;




// 函数: undefined FUN_180446fa0;
undefined FUN_180446fa0;
undefined UNK_180452550;




// 函数: undefined FUN_180446fd0;
undefined FUN_180446fd0;
undefined UNK_1804525c0;




// 函数: undefined FUN_180447030;
undefined FUN_180447030;
undefined UNK_1804525e0;




// 函数: undefined FUN_1804470d0;
undefined FUN_1804470d0;
undefined UNK_180453480;




