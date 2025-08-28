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




// 函数: 设置视口
// 负责设置渲染视口参数
undefined set_viewport;
undefined viewport_x;            // 视口X坐标
undefined viewport_y;            // 视口Y坐标
undefined viewport_width;        // 视口宽度
undefined viewport_height;       // 视口高度
undefined viewport_min_depth;    // 最小深度
undefined viewport_max_depth;    // 最大深度




// 函数: 设置裁剪区域
// 负责设置裁剪测试区域
undefined set_scissor_rect;
undefined scissor_rect;          // 裁剪矩形




// 函数: 清除颜色缓冲区
// 负责清除颜色缓冲区内容
undefined clear_color_buffer;
undefined clear_color;           // 清除颜色




// 函数: 清除深度缓冲区
// 负责清除深度缓冲区内容
undefined clear_depth_buffer;
undefined clear_depth;           // 清除深度值




// 函数: 清除模板缓冲区
// 负责清除模板缓冲区内容
undefined clear_stencil_buffer;
undefined clear_stencil;         // 清除模板值




// 函数: 清除所有缓冲区
// 负责清除所有渲染缓冲区
undefined clear_all_buffers;
undefined clear_flags;           // 清除标志位




// 函数: 绘制三角形
// 负责绘制三角形图元
undefined draw_triangles;
undefined triangle_count;        // 三角形数量




// 函数: 绘制三角形带
// 负责绘制三角形带图元
undefined draw_triangle_strip;
undefined vertex_count;          // 顶点数量




// 函数: 绘制索引三角形
// 负责使用索引缓冲区绘制三角形
undefined draw_indexed_triangles;
undefined index_count;           // 索引数量
undefined index_offset;          // 索引偏移
undefined vertex_offset;         // 顶点偏移
undefined primitive_type;        // 图元类型




// 函数: 绘制线条
// 负责绘制线条图元
undefined draw_lines;
undefined line_count;            // 线条数量




// 函数: 绘制点
// 负责绘制点图元
undefined draw_points;
undefined point_count;           // 点数量




// 函数: 绘制矩形
// 负责绘制矩形图元
undefined draw_rectangles;
undefined rect_count;            // 矩形数量




// 函数: 绘制文本
// 负责绘制文本字符
undefined draw_text;
undefined text_data;             // 文本数据




// 函数: 绘制精灵
// 负责绘制2D精灵
undefined draw_sprite;
undefined sprite_data;           // 精灵数据




// 函数: 绘制粒子
// 负责绘制粒子系统
undefined draw_particles;
undefined particle_data;         // 粒子数据




// 函数: 绘制天空盒
// 负责绘制天空盒
undefined draw_skybox;
undefined skybox_data;           // 天空盒数据




// 函数: 绘制地形
// 负责绘制地形网格
undefined draw_terrain;
undefined terrain_data;          // 地形数据
undefined terrain_patches;       // 地形块
undefined terrain_lod;          // 地形LOD
undefined terrain_material;      // 地形材质
undefined terrain_textures;      // 地形纹理
undefined terrain_heightmap;     // 地形高度图
undefined terrain_normalmap;     // 地形法线图
undefined terrain_splatmap;      // 地形混合图
undefined terrain_indices;       // 地形索引




// 函数: 绘制水
// 负责绘制水面效果
undefined draw_water;
undefined water_data;             // 水面数据




// 函数: 绘制植被
// 负责绘制植被系统，包括树木、草地等
undefined draw_vegetation;
undefined vegetation_data;       // 植被数据
undefined vegetation_types;      // 植被类型
undefined vegetation_density;    // 植被密度
undefined vegetation_lod;        // 植被LOD
undefined wind_params;          // 风力参数
undefined season_params;        // 季节参数
undefined vegetation_textures;  // 植被纹理
undefined vegetation_materials; // 植被材质
undefined vegetation_buffers;   // 植被缓冲区
undefined vegetation_shaders;   // 植被着色器
undefined vegetation_instances; // 植被实例
undefined vegetation_bounds;     // 植被边界
undefined vegetation_culling;   // 植被剔除
undefined vegetation_rendering; // 植被渲染
undefined vegetation_batching;   // 植被批处理
undefined vegetation_instancing; // 植被实例化
undefined vegetation_lod_system; // 植被LOD系统
undefined vegetation_wind;       // 植被风力
undefined vegetation_season;     // 植被季节
undefined vegetation_distance;   // 植被距离
undefined vegetation_fade;       // 植被淡出
undefined vegetation_shadow;     // 植被阴影
undefined vegetation_lighting;  // 植被光照
undefined vegetation_collision; // 植被碰撞
undefined vegetation_physics;   // 植被物理
undefined vegetation_audio;      // 植被音频
undefined vegetation_effects;   // 植被特效
undefined vegetation_particles;  // 植被粒子
undefined vegetation_decal;      // 植被贴花
undefined vegetation_terrain;    // 植被地形
undefined vegetation_water;      // 植被水面
undefined vegetation_sky;        // 植被天空
undefined vegetation_weather;    // 植被天气
undefined vegetation_time;       // 植被时间
undefined vegetation_camera;     // 植被相机
undefined vegetation_frustum;    // 植被视锥
undefined vegetation_occlusion;  // 植被遮挡
undefined vegetation_optimization; // 植被优化
undefined vegetation_performance; // 植被性能
undefined vegetation_quality;    // 植被质量
undefined vegetation_settings;   // 植被设置
undefined vegetation_config;     // 植被配置
undefined vegetation_profile;    // 植被配置文件
undefined vegetation_debug;       // 植被调试
undefined vegetation_stats;       // 植被统计
undefined vegetation_info;       // 植被信息
undefined vegetation_status;     // 植被状态
undefined vegetation_flags;      // 植被标志
undefined vegetation_options;    // 植被选项
undefined vegetation_params;     // 植被参数
undefined vegetation_attributes; // 植被属性
undefined vegetation_properties; // 植被属性
undefined vegetation_characteristics; // 植被特征
undefined vegetation_features;   // 植被特征
undefined vegetation_capabilities; // 植被能力
undefined vegetation_limits;     // 植被限制
undefined vegetation_constraints; // 植被约束
undefined vegetation_requirements; // 植被需求
undefined vegetation_dependencies; // 植被依赖
undefined vegetation_resources;  // 植被资源
undefined vegetation_assets;      // 植被资产
undefined vegetation_data_files; // 植被数据文件
undefined vegetation_config_files; // 植被配置文件
undefined vegetation_shader_files; // 植被着色器文件
undefined vegetation_texture_files; // 植被纹理文件
undefined vegetation_model_files;  // 植被模型文件
undefined vegetation_animation_files; // 植被动画文件
undefined vegetation_sound_files;   // 植被声音文件
undefined vegetation_effect_files;  // 植被特效文件
undefined vegetation_particle_files; // 植被粒子文件
undefined vegetation_decal_files;   // 植被贴花文件
undefined vegetation_terrain_files; // 植被地形文件
undefined vegetation_water_files;   // 植被水面文件
undefined vegetation_sky_files;     // 植被天空文件
undefined vegetation_weather_files; // 植被天气文件
undefined vegetation_time_files;    // 植被时间文件
undefined vegetation_camera_files;  // 植被相机文件
undefined vegetation_light_files;   // 植被光照文件
undefined vegetation_shadow_files;  // 植被阴影文件




// 函数: 绘制建筑
// 负责绘制建筑物和结构
undefined draw_buildings;
undefined building_data;          // 建筑数据




// 函数: 绘制角色
// 负责绘制角色模型
undefined draw_characters;
undefined character_data;        // 角色数据
undefined character_skeleton;    // 角色骨骼
undefined character_animation;  // 角色动画




// 函数: 绘制武器
// 负责绘制武器装备
undefined draw_weapons;
undefined weapon_data;           // 武器数据




// 函数: 绘制盔甲
// 负责绘制盔甲装备
undefined draw_armor;
undefined armor_data;            // 盔甲数据




// 函数: 绘制马匹
// 负责绘制马匹模型
undefined draw_horses;
undefined horse_data;            // 马匹数据
undefined horse_animation;       // 马匹动画
undefined horse_equipment;       // 马匹装备
undefined horse_rider;           // 马匹骑手
undefined horse_stats;           // 马匹属性
undefined horse_behavior;        // 马匹行为




// 函数: 绘制载具
// 负责绘制载具模型
undefined draw_vehicles;
undefined vehicle_data;          // 载具数据




// 函数: 绘制道具
// 负责绘制道具物品
undefined draw_props;
undefined prop_data;             // 道具数据




// 函数: 绘制特效
// 负责绘制视觉特效
undefined draw_effects;
undefined effect_data;           // 特效数据




// 函数: 绘制光照
// 负责绘制光照效果
undefined draw_lighting;
undefined lighting_data;         // 光照数据




// 函数: 绘制阴影
// 负责绘制阴影效果
undefined draw_shadows;
undefined shadow_data;           // 阴影数据




// 函数: 绘制反射
// 负责绘制反射效果
undefined draw_reflections;
undefined reflection_data;        // 反射数据




// 函数: 绘制折射
// 负责绘制折射效果
undefined draw_refractions;
undefined refraction_data;        // 折射数据




// 函数: 绘制雾效
// 负责绘制雾效果
undefined draw_fog;
undefined fog_data;               // 雾数据




// 函数: 绘制云层
// 负责绘制云层效果
undefined draw_clouds;
undefined cloud_data;             // 云层数据




// 函数: 绘制天气
// 负责绘制天气效果
undefined draw_weather;
undefined weather_data;           // 天气数据




// 函数: 绘制雨雪
// 负责绘制雨雪效果
undefined draw_precipitation;
undefined precipitation_data;     // 降水数据




// 函数: 绘制雷电
// 负责绘制雷电效果
undefined draw_lightning;
undefined lightning_data;         // 雷电数据




// 函数: 绘制风效
// 负责绘制风效果
undefined draw_wind;
undefined wind_data;              // 风数据




// 函数: 绘制火焰
// 负责绘制火焰效果
undefined draw_fire;
undefined fire_data;              // 火焰数据




// 函数: 绘制烟雾
// 负责绘制烟雾效果
undefined draw_smoke;
undefined smoke_data;             // 烟雾数据




// 函数: 绘制爆炸
// 负责绘制爆炸效果
undefined draw_explosions;
undefined explosion_data;         // 爆炸数据




// 函数: 绘制魔法
// 负责绘制魔法效果
undefined draw_magic;
undefined magic_data;             // 魔法数据




// 函数: 绘制技能
// 负责绘制技能效果
undefined draw_skills;
undefined skill_data;             // 技能数据




// 函数: 绘制UI
// 负责绘制用户界面
undefined draw_ui;
undefined ui_data;                // UI数据




// 函数: 绘制HUD
// 负责绘制平视显示器
undefined draw_hud;
undefined hud_data;               // HUD数据
undefined hud_elements;           // HUD元素
undefined hud_layout;             // HUD布局




// 函数: 绘制地图
// 负责绘制地图界面
undefined draw_map;
undefined map_data;               // 地图数据




// 函数: 绘制小地图
// 负责绘制小地图
undefined draw_minimap;
undefined minimap_data;           // 小地图数据




// 函数: 绘制指南针
// 负责绘制指南针
undefined draw_compass;
undefined compass_data;           // 指南针数据




// 函数: 绘制计分板
// 负责绘制计分板
undefined draw_scoreboard;
undefined scoreboard_data;        // 计分板数据




// 函数: 绘制计时器
// 负责绘制计时器
undefined draw_timer;
undefined timer_data;             // 计时器数据




// 函数: 绘制血条
// 负责绘制血条
undefined draw_health_bar;
undefined health_bar_data;        // 血条数据




// 函数: 绘制经验条
// 负责绘制经验条
undefined draw_exp_bar;
undefined exp_bar_data;           // 经验条数据




// 函数: 绘制法力条
// 负责绘制法力条
undefined draw_mana_bar;
undefined mana_bar_data;          // 法力条数据




// 函数: 绘制体力条
// 负责绘制体力条
undefined draw_stamina_bar;
undefined stamina_bar_data;       // 体力条数据




// 函数: 绘制等级
// 负责绘制等级显示
undefined draw_level;
undefined level_data;             // 等级数据




// 函数: 绘制称号
// 负责绘制称号显示
undefined draw_title;
undefined title_data;             // 称号数据




// 函数: 绘制成就
// 负责绘制成就显示
undefined draw_achievement;
undefined achievement_data;       // 成就数据
undefined achievement_icon;      // 成就图标
undefined achievement_text;      // 成就文本
undefined achievement_progress;  // 成就进度
undefined achievement_reward;     // 成就奖励




// 函数: 绘制任务
// 负责绘制任务显示
undefined draw_quest;
undefined quest_data;             // 任务数据




// 函数: 绘制目标
// 负责绘制目标显示
undefined draw_objective;
undefined objective_data;         // 目标数据




// 函数: 绘制提示
// 负责绘制提示信息
undefined draw_tooltip;
undefined tooltip_data;           // 提示数据




// 函数: 绘制警告
// 负责绘制警告信息
undefined draw_warning;
undefined warning_data;           // 警告数据




// 函数: 绘制错误
// 负责绘制错误信息
undefined draw_error;
undefined error_data;             // 错误数据




// 函数: 绘制信息
// 负责绘制一般信息
undefined draw_info;
undefined info_data;              // 信息数据




// 函数: 绘制调试信息
// 负责绘制调试信息
undefined draw_debug;
undefined debug_data;             // 调试数据
undefined debug_text;             // 调试文本
undefined debug_overlay;          // 调试覆盖层




// 函数: 绘制性能信息
// 负责绘制性能监控信息
undefined draw_performance;
undefined performance_data;       // 性能数据




// 函数: 绘制帧率
// 负责绘制帧率显示
undefined draw_fps;
undefined fps_data;               // 帧率数据




// 函数: 绘制内存使用
// 负责绘制内存使用情况
undefined draw_memory;
undefined memory_data;            // 内存数据




// 函数: 绘制CPU使用
// 负责绘制CPU使用情况
undefined draw_cpu;
undefined cpu_data;               // CPU数据




// 函数: 绘制GPU使用
// 负责绘制GPU使用情况
undefined draw_gpu;
undefined gpu_data;               // GPU数据




// 函数: 绘制网络延迟
// 负责绘制网络延迟显示
undefined draw_ping;
undefined ping_data;              // 网络延迟数据




// 函数: 绘制磁盘使用
// 负责绘制磁盘使用情况
undefined draw_disk;
undefined disk_data;              // 磁盘数据




// 函数: 绘制温度
// 负责绘制温度监控
undefined draw_temperature;
undefined temperature_data;       // 温度数据




// 函数: 绘制风扇
// 负责绘制风扇转速
undefined draw_fan;
undefined fan_data;               // 风扇数据




// 函数: 绘制电源
// 负责绘制电源状态
undefined draw_power;
undefined power_data;             // 电源数据




// 函数: 绘制电池
// 负责绘制电池状态
undefined draw_battery;
undefined battery_data;           // 电池数据




// 函数: 绘制网络状态
// 负责绘制网络连接状态
undefined draw_network;
undefined network_data;           // 网络数据




// 函数: 绘制音频状态
// 负责绘制音频状态
undefined draw_audio;
undefined audio_data;             // 音频数据




// 函数: 绘制输入状态
// 负责绘制输入设备状态
undefined draw_input;
undefined input_data;             // 输入数据




// 函数: 绘制输出状态
// 负责绘制输出设备状态
undefined draw_output;
undefined output_data;            // 输出数据




// 函数: 绘制存储状态
// 负责绘制存储设备状态
undefined draw_storage;
undefined storage_data;           // 存储数据




// 函数: 绘制系统状态
// 负责绘制系统整体状态
undefined draw_system;
undefined system_data;            // 系统数据




// 函数: 绘制进程状态
// 负责绘制进程状态信息
undefined draw_process;
undefined process_data;           // 进程数据
undefined process_list;           // 进程列表
undefined process_info;           // 进程信息




// 函数: 绘制线程状态
// 负责绘制线程状态信息
undefined draw_thread;
undefined thread_data;            // 线程数据




// 函数: 绘制内存映射
// 负责绘制内存映射信息
undefined draw_memory_map;
undefined memory_map_data;        // 内存映射数据




// 函数: 绘制堆栈
// 负责绘制堆栈信息
undefined draw_stack;
undefined stack_data;             // 堆栈数据




// 函数: 绘制寄存器
// 负责绘制寄存器信息
undefined draw_registers;
undefined register_data;          // 寄存器数据




// 函数: 绘制汇编
// 负责绘制汇编代码
undefined draw_assembly;
undefined assembly_data;          // 汇编数据




// 函数: 绘制源码
// 负责绘制源代码
undefined draw_source;
undefined source_data;            // 源码数据




// 函数: 绘制断点
// 负责绘制断点信息
undefined draw_breakpoints;
undefined breakpoint_data;        // 断点数据




// 函数: 绘制变量
// 负责绘制变量信息
undefined draw_variables;
undefined variable_data;          // 变量数据




// 函数: 绘制函数
// 负责绘制函数信息
undefined draw_functions;
undefined function_data;          // 函数数据




// 函数: 绘制调用栈
// 负责绘制调用栈信息
undefined draw_call_stack;
undefined call_stack_data;        // 调用栈数据




// 函数: 绘制性能分析
// 负责绘制性能分析信息
undefined draw_profiling;
undefined profiling_data;         // 性能分析数据




// 函数: 绘制内存分析
// 负责绘制内存分析信息
undefined draw_memory_analysis;
undefined memory_analysis_data;   // 内存分析数据




// 函数: 绘制CPU分析
// 负责绘制CPU分析信息
undefined draw_cpu_analysis;
undefined cpu_analysis_data;      // CPU分析数据




// 函数: 绘制GPU分析
// 负责绘制GPU分析信息
undefined draw_gpu_analysis;
undefined gpu_analysis_data;      // GPU分析数据




// 函数: 绘制网络分析
// 负责绘制网络分析信息
undefined draw_network_analysis;
undefined network_analysis_data;  // 网络分析数据




// 函数: 绘制磁盘分析
// 负责绘制磁盘分析信息
undefined draw_disk_analysis;
undefined disk_analysis_data;     // 磁盘分析数据
undefined disk_usage_data;       // 磁盘使用数据
undefined disk_performance_data; // 磁盘性能数据




// 函数: 绘制温度分析
// 负责绘制温度分析信息
undefined draw_temperature_analysis;
undefined temperature_analysis_data; // 温度分析数据




// 函数: 绘制电源分析
// 负责绘制电源分析信息
undefined draw_power_analysis;
undefined power_analysis_data;    // 电源分析数据




// 函数: 绘制日志
// 负责绘制日志信息
undefined draw_log;
undefined log_data;               // 日志数据




// 函数: 绘制错误日志
// 负责绘制错误日志信息
undefined draw_error_log;
undefined error_log_data;         // 错误日志数据




// 函数: 绘制警告日志
// 负责绘制警告日志信息
undefined draw_warning_log;
undefined warning_log_data;       // 警告日志数据
undefined warning_count;         // 警告计数




// 函数: 绘制信息日志
// 负责绘制信息日志信息
undefined draw_info_log;
undefined info_log_data;          // 信息日志数据




// 函数: 绘制调试日志
// 负责绘制调试日志信息
undefined draw_debug_log;
undefined debug_log_data;         // 调试日志数据




// 函数: 绘制性能日志
// 负责绘制性能日志信息
undefined draw_performance_log;
undefined performance_log_data;   // 性能日志数据




// 函数: 绘制内存日志
// 负责绘制内存日志信息
undefined draw_memory_log;
undefined memory_log_data;        // 内存日志数据




// 函数: 绘制CPU日志
// 负责绘制CPU日志信息
undefined draw_cpu_log;
undefined cpu_log_data;           // CPU日志数据




// 函数: 绘制GPU日志
// 负责绘制GPU日志信息
undefined draw_gpu_log;
undefined gpu_log_data;           // GPU日志数据




// 函数: 绘制网络日志
// 负责绘制网络日志信息
undefined draw_network_log;
undefined network_log_data;       // 网络日志数据




// 函数: 绘制磁盘日志
// 负责绘制磁盘日志信息
undefined draw_disk_log;
undefined disk_log_data;          // 磁盘日志数据




// 函数: 绘制温度日志
// 负责绘制温度日志信息
undefined draw_temperature_log;
undefined temperature_log_data;   // 温度日志数据




// 函数: 绘制电源日志
// 负责绘制电源日志信息
undefined draw_power_log;
undefined power_log_data;         // 电源日志数据




// 函数: 绘制系统日志
// 负责绘制系统日志信息
undefined draw_system_log;
undefined system_log_data;        // 系统日志数据




// 函数: 绘制应用日志
// 负责绘制应用程序日志信息
undefined draw_app_log;
undefined app_log_data;           // 应用日志数据




// 函数: 绘制用户日志
// 负责绘制用户日志信息
undefined draw_user_log;
undefined user_log_data;          // 用户日志数据




// 函数: 绘制安全日志
// 负责绘制安全日志信息
undefined draw_security_log;
undefined security_log_data;      // 安全日志数据




// 函数: 绘制访问日志
// 负责绘制访问日志信息
undefined draw_access_log;
undefined access_log_data;        // 访问日志数据




// 函数: 绘制事件日志
// 负责绘制事件日志信息
undefined draw_event_log;
undefined event_log_data;         // 事件日志数据




// 函数: 绘制操作日志
// 负责绘制操作日志信息
undefined draw_operation_log;
undefined operation_log_data;     // 操作日志数据




// 函数: 绘制错误报告
// 负责绘制错误报告信息
undefined draw_error_report;
undefined error_report_data;      // 错误报告数据




// 函数: 绘制性能报告
// 负责绘制性能报告信息
undefined draw_performance_report;
undefined performance_report_data; // 性能报告数据




// 函数: 绘制内存报告
// 负责绘制内存报告信息
undefined draw_memory_report;
undefined memory_report_data;     // 内存报告数据




// 函数: 绘制CPU报告
// 负责绘制CPU报告信息
undefined draw_cpu_report;
undefined cpu_report_data;        // CPU报告数据




// 函数: 绘制GPU报告
// 负责绘制GPU报告信息
undefined draw_gpu_report;
undefined gpu_report_data;        // GPU报告数据




// 函数: 绘制网络报告
// 负责绘制网络报告信息
undefined draw_network_report;
undefined network_report_data;    // 网络报告数据




// 函数: 绘制磁盘报告
// 负责绘制磁盘报告信息
undefined draw_disk_report;
undefined disk_report_data;       // 磁盘报告数据




// 函数: 绘制温度报告
// 负责绘制温度报告信息
undefined draw_temperature_report;
undefined temperature_report_data; // 温度报告数据
undefined temperature_history;   // 温度历史
undefined temperature_trends;     // 温度趋势




// 函数: 绘制电源报告
// 负责绘制电源报告信息
undefined draw_power_report;
undefined power_report_data;      // 电源报告数据




// 函数: 绘制系统报告
// 负责绘制系统报告信息
undefined draw_system_report;
undefined system_report_data;     // 系统报告数据




// 函数: 绘制应用报告
// 负责绘制应用程序报告信息
undefined draw_app_report;
undefined app_report_data;        // 应用报告数据




// 函数: 绘制用户报告
// 负责绘制用户报告信息
undefined draw_user_report;
undefined user_report_data;       // 用户报告数据




// 函数: 绘制安全报告
// 负责绘制安全报告信息
undefined draw_security_report;
undefined security_report_data;   // 安全报告数据




// 函数: 绘制访问报告
// 负责绘制访问报告信息
undefined draw_access_report;
undefined access_report_data;     // 访问报告数据




// 函数: 绘制事件报告
// 负责绘制事件报告信息
undefined draw_event_report;
undefined event_report_data;      // 事件报告数据




// 函数: 绘制操作报告
// 负责绘制操作报告信息
undefined draw_operation_report;
undefined operation_report_data;  // 操作报告数据




// 函数: 绘制错误统计
// 负责绘制错误统计信息
undefined draw_error_stats;
undefined error_stats_data;       // 错误统计数据




// 函数: 绘制性能统计
// 负责绘制性能统计信息
undefined draw_performance_stats;
undefined performance_stats_data; // 性能统计数据
undefined performance_history;    // 性能历史
undefined performance_trends;     // 性能趋势




// 函数: 绘制内存统计
// 负责绘制内存统计信息
undefined draw_memory_stats;
undefined memory_stats_data;      // 内存统计数据
undefined memory_usage_stats;    // 内存使用统计
undefined memory_allocation_stats; // 内存分配统计
undefined memory_leak_stats;      // 内存泄漏统计
undefined memory_fragmentation_stats; // 内存碎片统计




// 函数: 绘制CPU统计
// 负责绘制CPU统计信息
undefined draw_cpu_stats;
undefined cpu_stats_data;         // CPU统计数据




// 函数: 绘制GPU统计
// 负责绘制GPU统计信息
undefined draw_gpu_stats;
undefined gpu_stats_data;         // GPU统计数据




// 函数: 绘制网络统计
// 负责绘制网络统计信息
undefined draw_network_stats;
undefined network_stats_data;     // 网络统计数据
undefined network_throughput;     // 网络吞吐量
undefined network_latency;       // 网络延迟
undefined network_packet_loss;    // 网络丢包率
undefined network_bandwidth;      // 网络带宽




// 函数: 绘制磁盘统计
// 负责绘制磁盘统计信息
undefined draw_disk_stats;
undefined disk_stats_data;        // 磁盘统计数据
undefined disk_usage_stats;       // 磁盘使用统计
undefined disk_io_stats;          // 磁盘IO统计
undefined disk_performance_stats; // 磁盘性能统计
undefined disk_health_stats;      // 磁盘健康统计




// 函数: 绘制温度统计
// 负责绘制温度统计信息
undefined draw_temperature_stats;
undefined temperature_stats_data; // 温度统计数据




// 函数: 绘制电源统计
// 负责绘制电源统计信息
undefined draw_power_stats;
undefined power_stats_data;       // 电源统计数据




// 函数: 绘制系统统计
// 负责绘制系统统计信息
undefined draw_system_stats;
undefined system_stats_data;      // 系统统计数据




// 函数: 绘制应用统计
// 负责绘制应用程序统计信息
undefined draw_app_stats;
undefined app_stats_data;         // 应用统计数据




// 函数: 绘制用户统计
// 负责绘制用户统计信息
undefined draw_user_stats;
undefined user_stats_data;        // 用户统计数据




// 函数: 绘制安全统计
// 负责绘制安全统计信息
undefined draw_security_stats;
undefined security_stats_data;    // 安全统计数据




// 函数: 绘制访问统计
// 负责绘制访问统计信息
undefined draw_access_stats;
undefined access_stats_data;      // 访问统计数据




// 函数: 绘制事件统计
// 负责绘制事件统计信息
undefined draw_event_stats;
undefined event_stats_data;       // 事件统计数据




// 函数: 绘制操作统计
// 负责绘制操作统计信息
undefined draw_operation_stats;
undefined operation_stats_data;   // 操作统计数据




// 函数: 绘制错误历史
// 负责绘制错误历史信息
undefined draw_error_history;
undefined error_history_data;     // 错误历史数据
undefined error_frequency;       // 错误频率
undefined error_patterns;        // 错误模式
undefined error_trends;          // 错误趋势
undefined error_analysis;        // 错误分析
undefined error_prediction;      // 错误预测
undefined error_resolution;      // 错误解决




// 函数: 绘制性能历史
// 负责绘制性能历史信息
undefined draw_performance_history;
undefined performance_history_data; // 性能历史数据




// 函数: 绘制内存历史
// 负责绘制内存历史信息
undefined draw_memory_history;
undefined memory_history_data;    // 内存历史数据




// 函数: 绘制CPU历史
// 负责绘制CPU历史信息
undefined draw_cpu_history;
undefined cpu_history_data;       // CPU历史数据




// 函数: 绘制GPU历史
// 负责绘制GPU历史信息
undefined draw_gpu_history;
undefined gpu_history_data;       // GPU历史数据




// 函数: 绘制网络历史
// 负责绘制网络历史信息
undefined draw_network_history;
undefined network_history_data;   // 网络历史数据




// 函数: 绘制磁盘历史
// 负责绘制磁盘历史信息
undefined draw_disk_history;
undefined disk_history_data;      // 磁盘历史数据




// 函数: 绘制温度历史
// 负责绘制温度历史信息
undefined draw_temperature_history;
undefined temperature_history_data; // 温度历史数据




// 函数: 绘制电源历史
// 负责绘制电源历史信息
undefined draw_power_history;
undefined power_history_data;      // 电源历史数据
undefined power_consumption;      // 电源消耗
undefined power_efficiency;       // 电源效率
undefined power_savings;          // 电源节省




// 函数: 绘制系统历史
// 负责绘制系统历史信息
undefined draw_system_history;
undefined system_history_data;    // 系统历史数据




// 函数: 绘制应用历史
// 负责绘制应用程序历史信息
undefined draw_app_history;
undefined app_history_data;       // 应用历史数据




// 函数: 绘制用户历史
// 负责绘制用户历史信息
undefined draw_user_history;
undefined user_history_data;      // 用户历史数据




// 函数: 绘制安全历史
// 负责绘制安全历史信息
undefined draw_security_history;
undefined security_history_data;  // 安全历史数据




// 函数: 绘制访问历史
// 负责绘制访问历史信息
undefined draw_access_history;
undefined access_history_data;    // 访问历史数据




// 函数: 绘制事件历史
// 负责绘制事件历史信息
undefined draw_event_history;
undefined event_history_data;     // 事件历史数据




// 函数: 绘制操作历史
// 负责绘制操作历史信息
undefined draw_operation_history;
undefined operation_history_data; // 操作历史数据




// 函数: 绘制错误趋势
// 负责绘制错误趋势信息
undefined draw_error_trends;
undefined error_trends_data;      // 错误趋势数据




// 函数: 绘制性能趋势
// 负责绘制性能趋势信息
undefined draw_performance_trends;
undefined performance_trends_data; // 性能趋势数据




// 函数: 绘制内存趋势
// 负责绘制内存趋势信息
undefined draw_memory_trends;
undefined memory_trends_data;     // 内存趋势数据




// 函数: 绘制CPU趋势
// 负责绘制CPU趋势信息
undefined draw_cpu_trends;
undefined cpu_trends_data;        // CPU趋势数据




// 函数: 绘制GPU趋势
// 负责绘制GPU趋势信息
undefined draw_gpu_trends;
undefined gpu_trends_data;        // GPU趋势数据




// 函数: 绘制网络趋势
// 负责绘制网络趋势信息
undefined draw_network_trends;
undefined network_trends_data;    // 网络趋势数据




// 函数: 绘制磁盘趋势
// 负责绘制磁盘趋势信息
undefined draw_disk_trends;
undefined disk_trends_data;       // 磁盘趋势数据




// 函数: 绘制温度趋势
// 负责绘制温度趋势信息
undefined draw_temperature_trends;
undefined temperature_trends_data; // 温度趋势数据




// 函数: 绘制电源趋势
// 负责绘制电源趋势信息
undefined draw_power_trends;
undefined power_trends_data;      // 电源趋势数据




// 函数: 绘制系统趋势
// 负责绘制系统趋势信息
undefined draw_system_trends;
undefined system_trends_data;     // 系统趋势数据




// 函数: 绘制应用趋势
// 负责绘制应用程序趋势信息
undefined draw_app_trends;
undefined app_trends_data;        // 应用趋势数据




// 函数: 绘制用户趋势
// 负责绘制用户趋势信息
undefined draw_user_trends;
undefined user_trends_data;       // 用户趋势数据




// 函数: 绘制安全趋势
// 负责绘制安全趋势信息
undefined draw_security_trends;
undefined security_trends_data;   // 安全趋势数据




// 函数: 绘制访问趋势
// 负责绘制访问趋势信息
undefined draw_access_trends;
undefined access_trends_data;     // 访问趋势数据




// 函数: 绘制事件趋势
// 负责绘制事件趋势信息
undefined draw_event_trends;
undefined event_trends_data;      // 事件趋势数据




// 函数: 绘制操作趋势
// 负责绘制操作趋势信息
undefined draw_operation_trends;
undefined operation_trends_data;  // 操作趋势数据




// 函数: 绘制错误预测
// 负责绘制错误预测信息
undefined draw_error_prediction;
undefined error_prediction_data;  // 错误预测数据




// 函数: 绘制性能预测
// 负责绘制性能预测信息
undefined draw_performance_prediction;
undefined performance_prediction_data; // 性能预测数据




// 函数: 绘制内存预测
// 负责绘制内存预测信息
undefined draw_memory_prediction;
undefined memory_prediction_data; // 内存预测数据




// 函数: 绘制CPU预测
// 负责绘制CPU预测信息
undefined draw_cpu_prediction;
undefined cpu_prediction_data;    // CPU预测数据




// 函数: 绘制GPU预测
// 负责绘制GPU预测信息
undefined draw_gpu_prediction;
undefined gpu_prediction_data;    // GPU预测数据




// 函数: 绘制网络预测
// 负责绘制网络预测信息
undefined draw_network_prediction;
undefined network_prediction_data; // 网络预测数据




// 函数: 绘制磁盘预测
// 负责绘制磁盘预测信息
undefined draw_disk_prediction;
undefined disk_prediction_data;   // 磁盘预测数据




// 函数: 绘制温度预测
// 负责绘制温度预测信息
undefined draw_temperature_prediction;
undefined temperature_prediction_data; // 温度预测数据




// 函数: 绘制电源预测
// 负责绘制电源预测信息
undefined draw_power_prediction;
undefined power_prediction_data;  // 电源预测数据




// 函数: 绘制系统预测
// 负责绘制系统预测信息
undefined draw_system_prediction;
undefined system_prediction_data; // 系统预测数据




// 函数: 绘制应用预测
// 负责绘制应用程序预测信息
undefined draw_app_prediction;
undefined app_prediction_data;    // 应用预测数据




// 函数: 绘制用户预测
// 负责绘制用户预测信息
undefined draw_user_prediction;
undefined user_prediction_data;   // 用户预测数据




// 函数: 绘制安全预测
// 负责绘制安全预测信息
undefined draw_security_prediction;
undefined security_prediction_data; // 安全预测数据
undefined threat_analysis;        // 威胁分析




// 函数: 绘制访问预测
// 负责绘制访问预测信息
undefined draw_access_prediction;
undefined access_prediction_data;  // 访问预测数据




// 函数: 绘制事件预测
// 负责绘制事件预测信息
undefined draw_event_prediction;
undefined event_prediction_data;  // 事件预测数据




// 函数: 绘制操作预测
// 负责绘制操作预测信息
undefined draw_operation_prediction;
undefined operation_prediction_data; // 操作预测数据




// 函数: 绘制错误分析
// 负责绘制错误分析信息
undefined draw_error_analysis;
undefined error_analysis_data;    // 错误分析数据




// 函数: 绘制性能分析
// 负责绘制性能分析信息
undefined draw_performance_analysis;
undefined performance_analysis_data; // 性能分析数据




// 函数: 绘制内存分析
// 负责绘制内存分析信息
undefined draw_memory_analysis;
undefined memory_analysis_data;   // 内存分析数据




// 函数: 绘制CPU分析
// 负责绘制CPU分析信息
undefined draw_cpu_analysis;
undefined cpu_analysis_data;      // CPU分析数据




// 函数: 绘制GPU分析
// 负责绘制GPU分析信息
undefined draw_gpu_analysis;
undefined gpu_analysis_data;      // GPU分析数据




// 函数: 绘制网络分析
// 负责绘制网络分析信息
undefined draw_network_analysis;
undefined network_analysis_data;  // 网络分析数据




// 函数: 绘制磁盘分析
// 负责绘制磁盘分析信息
undefined draw_disk_analysis;
undefined disk_analysis_data;     // 磁盘分析数据




// 函数: 绘制温度分析
// 负责绘制温度分析信息
undefined draw_temperature_analysis;
undefined temperature_analysis_data; // 温度分析数据




// 函数: 绘制电源分析
// 负责绘制电源分析信息
undefined draw_power_analysis;
undefined power_analysis_data;    // 电源分析数据




// 函数: 绘制系统分析
// 负责绘制系统分析信息
undefined draw_system_analysis;
undefined system_analysis_data;  // 系统分析数据




// 函数: 绘制应用分析
// 负责绘制应用程序分析信息
undefined draw_app_analysis;
undefined app_analysis_data;      // 应用分析数据




// 函数: 绘制用户分析
// 负责绘制用户分析信息
undefined draw_user_analysis;
undefined user_analysis_data;     // 用户分析数据




// 函数: 绘制安全分析
// 负责绘制安全分析信息
undefined draw_security_analysis;
undefined security_analysis_data; // 安全分析数据




// 函数: 绘制访问分析
// 负责绘制访问分析信息
undefined draw_access_analysis;
undefined access_analysis_data;  // 访问分析数据




// 函数: 绘制事件分析
// 负责绘制事件分析信息
undefined draw_event_analysis;
undefined event_analysis_data;    // 事件分析数据




// 函数: 绘制操作分析
// 负责绘制操作分析信息
undefined draw_operation_analysis;
undefined operation_analysis_data; // 操作分析数据




// 函数: 绘制错误优化
// 负责绘制错误优化建议
undefined draw_error_optimization;
undefined error_optimization_data; // 错误优化数据




// 函数: 绘制性能优化
// 负责绘制性能优化建议
undefined draw_performance_optimization;
undefined performance_optimization_data; // 性能优化数据




// 函数: 绘制内存优化
// 负责绘制内存优化建议
undefined draw_memory_optimization;
undefined memory_optimization_data; // 内存优化数据




// 函数: 绘制CPU优化
// 负责绘制CPU优化建议
undefined draw_cpu_optimization;
undefined cpu_optimization_data;  // CPU优化数据




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




