# Mount & Blade II: Bannerlord UI系统架构

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 技术架构文档
- **适用对象**: UI程序员、引擎开发者、游戏设计师

## 1. 概述

Mount & Blade II: Bannerlord的UI系统是一个功能强大、高性能的用户界面引擎，专为复杂的RPG游戏界面设计。系统支持多种UI控件、布局系统、动画效果和主题定制，为玩家提供直观流畅的交互体验。

### 1.1 设计目标

- **高性能**: 支持复杂的UI界面和动画效果
- **灵活性**: 支持多种布局和控件类型
- **可扩展**: 易于添加新的控件和功能
- **可定制**: 支持主题和样式定制
- **跨平台**: 支持多种输入设备和分辨率

### 1.2 核心特性

- **硬件加速渲染**: 利用GPU加速UI渲染
- **灵活的布局系统**: 支持多种布局方式
- **丰富的控件库**: 提供常用UI控件
- **动画系统**: 支持过渡和关键帧动画
- **多语言支持**: 支持国际化文本
- **输入处理**: 支持多种输入设备

## 2. 系统架构

### 2.1 整体架构

```
┌─────────────────────────────────────────────────────────────┐
│                     UI系统架构                              │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────┐       │
│  │                应用层接口                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 游戏UI  │ │ 菜单系统 │ │ HUD系统  │ │ 对话框  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                UI引擎层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 控件系统 │ │ 布局系统 │ │ 动画系统 │ │ 事件系统││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                渲染层                            │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 文本渲染 │ │ 图形渲染 │ │ 材质系统 │ │ 着色器  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                平台抽象层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 输入系统 │ │ 窗口系统 │ │ 字体系统 │ │ 资源系统││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### 2.2 UI渲染流程

```
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  布局计算    │→│  控件更新   │→│  动画更新   │→│  渲染准备   │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
       │                │                │                │
       ▼                ▼                ▼                ▼
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  批处理优化  │  │  绘制命令   │→│  GPU渲染    │→│  后处理效果  │
│             │  │  生成       │  │             │  │             │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
```

## 3. 核心组件详解

### 3.1 UI管理器 (UI Manager)

**功能职责**:
- 管理UI根容器和控件树
- 处理UI更新和渲染
- 管理UI焦点和导航
- 处理输入事件分发

**关键结构**:
```c
// UI管理器配置
typedef struct {
    uint32_t        max_widgets;     // 最大控件数
    uint32_t        max_layers;      // 最大层数
    uint32_t        max_animations;  // 最大动画数
    bool            enable_aa;        // 启用抗锯齿
    bool            enable_batching;  // 启用批处理
    uint32_t        atlas_size;      // 图集大小
    ui_scale_mode_t scale_mode;      // 缩放模式
} ui_manager_config_t;

// UI管理器
typedef struct {
    ui_manager_config_t config;       // 配置
    
    // 根容器
    ui_widget_t*    root;            // UI根容器
    ui_layer_t*     layers;          // UI层数组
    uint32_t        layer_count;     // 层数量
    
    // 控件管理
    ui_widget_t*    widgets;         // 控件数组
    uint32_t        widget_count;    // 控件数量
    hash_table_t*   widget_index;    // 控件索引
    
    // 焦点管理
    ui_widget_t*    focused_widget;  // 焦点控件
    ui_widget_t*    hovered_widget;  // 悬停控件
    ui_widget_t*    captured_widget; // 捕获控件
    ui_navigation_t navigation;      // 导航系统
    
    // 渲染
    ui_renderer_t*  renderer;        // 渲染器
    ui_batcher_t*   batcher;         // 批处理器
    ui_atlas_t*     atlas;           // 纹理图集
    
    // 动画
    ui_animation_system_t* animation_system; // 动画系统
    
    // 主题
    ui_theme_t*     current_theme;   // 当前主题
    ui_theme_t*     themes;          // 主题数组
    uint32_t        theme_count;     // 主题数量
    
    // 输入
    ui_input_processor_t* input_processor; // 输入处理器
    
    // 统计
    ui_stats_t      stats;           // UI统计
} ui_manager_t;
```

**特性支持**:
- 多层UI管理
- 控件树结构
- 焦点和导航系统
- 输入事件处理

### 3.2 控件系统 (Widget System)

**功能职责**:
- 提供基础控件功能
- 管理控件属性和状态
- 处理控件绘制
- 支持控件继承

**关键结构**:
```c
// 控件类型
typedef enum {
    WIDGET_TYPE_CONTAINER,    // 容器
    WIDGET_TYPE_BUTTON,       // 按钮
    WIDGET_TYPE_LABEL,        // 标签
    WIDGET_TYPE_IMAGE,        // 图像
    WIDGET_TYPE_TEXTBOX,      // 文本框
    WIDGET_TYPE_SCROLLBAR,    // 滚动条
    WIDGET_TYPE_LISTBOX,      // 列表框
    WIDGET_TYPE_COMBOBOX,     // 下拉框
    WIDGET_TYPE_CHECKBOX,     // 复选框
    WIDGET_TYPE_RADIOBUTTON,  // 单选按钮
    WIDGET_TYPE_SLIDER,       // 滑块
    WIDGET_TYPE_PROGRESSBAR,  // 进度条
    WIDGET_TYPE_PANEL,        // 面板
    WIDGET_TYPE_WINDOW,       // 窗口
    WIDGET_TYPE_CUSTOM        // 自定义控件
} widget_type_t;

// 控件状态
typedef enum {
    WIDGET_STATE_NORMAL,      // 正常状态
    WIDGET_STATE_HOVER,       // 悬停状态
    WIDGET_STATE_PRESSED,     // 按下状态
    WIDGET_STATE_DISABLED,    // 禁用状态
    WIDGET_STATE_FOCUSED,     // 焦点状态
    WIDGET_STATE_SELECTED,    // 选中状态
    WIDGET_STATE_HIDDEN       // 隐藏状态
} widget_state_t;

// 控件属性
typedef struct {
    rect_t          bounds;          // 边界矩形
    vector2         position;        // 位置
    vector2         size;            // 大小
    vector2         anchor;          // 锚点
    vector2         pivot;           // 中心点
    float           rotation;        // 旋转角度
    vector2         scale;           // 缩放
    color_t         color;           // 颜色
    float           opacity;         // 不透明度
    bool            visible;         // 可见性
    bool            enabled;         // 启用状态
    bool            clip_children;   // 裁剪子控件
} widget_properties_t;

// 控件虚函数表
typedef struct {
    void (*init)(ui_widget_t* widget);              // 初始化
    void (*destroy)(ui_widget_t* widget);           // 销毁
    void (*update)(ui_widget_t* widget, float dt);  // 更新
    void (*render)(ui_widget_t* widget);           // 渲染
    bool (*handle_event)(ui_widget_t* widget,      // 处理事件
                        ui_event_t* event);
    void (*layout)(ui_widget_t* widget);           // 布局
} widget_vtable_t;

// UI控件基类
typedef struct ui_widget {
    uint32_t            widget_id;       // 控件ID
    widget_type_t       type;            // 控件类型
    widget_state_t      state;           // 控件状态
    widget_properties_t properties;      // 控件属性
    
    // 层次结构
    struct ui_widget*  parent;          // 父控件
    struct ui_widget*  children;        // 子控件链表
    struct ui_widget*  next_sibling;    // 下一个兄弟
    struct ui_widget*  prev_sibling;    // 上一个兄弟
    
    // 数据
    void*               user_data;       // 用户数据
    char*               name;            // 控件名称
    char*               tooltip;         // 工具提示
    
    // 样式
    ui_style_t*         style;           // 控件样式
    ui_theme_t*         theme;           // 主题
    
    // 虚函数表
    widget_vtable_t*    vtable;          // 虚函数表
    
    // 事件
    event_handler_t*    event_handlers;  // 事件处理器数组
    uint32_t            handler_count;   // 处理器数量
    
    // 动画
    ui_animation_t*     animations;      // 动画链表
    uint32_t            animation_count; // 动画数量
    
    // 渲染
    ui_vertex_t*        vertices;        // 顶点数据
    uint32_t            vertex_count;    // 顶点数量
    ui_index_t*         indices;         // 索引数据
    uint32_t            index_count;     // 索引数量
    material_t*         material;        // 渲染材质
} ui_widget_t;
```

**控件特性**:
- 面向对象设计
- 事件驱动架构
- 样式和主题支持
- 动画集成

### 3.3 布局系统 (Layout System)

**功能职责**:
- 计算控件位置和大小
- 支持多种布局方式
- 处理控件对齐和排列
- 响应式布局支持

**关键结构**:
```c
// 布局类型
typedef enum {
    LAYOUT_TYPE_ABSOLUTE,     // 绝对布局
    LAYOUT_TYPE_RELATIVE,     // 相对布局
    LAYOUT_TYPE_LINEAR,       // 线性布局
    LAYOUT_TYPE_GRID,         // 网格布局
    LAYOUT_TYPE_FLOW,         // 流式布局
    LAYOUT_TYPE_DOCK,         // 停靠布局
    LAYOUT_TYPE_STACK,        // 堆叠布局
    LAYOUT_TYPE_CUSTOM        // 自定义布局
} layout_type_t;

// 布局参数
typedef struct {
    // 尺寸
    layout_size_t     width;           // 宽度
    layout_size_t     height;          // 高度
    layout_size_t     min_width;       // 最小宽度
    layout_size_t     min_height;      // 最小高度
    layout_size_t     max_width;       // 最大宽度
    layout_size_t     max_height;      // 最大高度
    
    // 边距
    layout_margin_t   margin;          // 外边距
    layout_margin_t   padding;         // 内边距
    
    // 对齐
    alignment_t       horizontal_align; // 水平对齐
    alignment_t       vertical_align;   // 垂直对齐
    
    // 权重
    float             weight;          // 布局权重
    float             flex_grow;       // 弹性增长
    float             flex_shrink;     // 弹性收缩
    
    // 特定布局参数
    void*             layout_params;  // 布局特定参数
} layout_params_t;

// 线性布局参数
typedef struct {
    orientation_t      orientation;    // 方向
    bool               wrap_content;    // 包裹内容
    float             spacing;         // 间距
    gravity_t         gravity;         // 重力
} linear_layout_params_t;

// 网格布局参数
typedef struct {
    uint32_t          columns;         // 列数
    uint32_t          rows;            // 行数
    float             column_spacing;  // 列间距
    float             row_spacing;     // 行间距
    grid_stretch_t    column_stretch;  // 列拉伸
    grid_stretch_t    row_stretch;     // 行拉伸
} grid_layout_params_t;

// 布局计算器
typedef struct {
    layout_type_t     type;            // 布局类型
    layout_params_t*  params;          // 布局参数
    
    // 计算函数
    void (*measure)(struct ui_layout* layout, 
                   ui_widget_t* widget,
                   float available_width,
                   float available_height);
    void (*layout)(struct ui_layout* layout,
                  ui_widget_t* widget);
    
    // 约束
    layout_constraint_t constraints;    // 布局约束
    
    // 缓存
    layout_cache_t*   cache;           // 布局缓存
    bool              dirty;           // 需要重新计算
} ui_layout_t;
```

**布局特性**:
- 多种布局算法
- 约束求解
- 布局缓存
- 响应式设计

### 3.4 渲染系统 (Rendering System)

**功能职责**:
- 高效渲染UI控件
- 批处理优化
- 文本渲染
- 特效处理

**关键结构**:
```c
// UI顶点格式
typedef struct {
    vector3         position;        // 位置
    vector2         uv;              // 纹理坐标
    color_t         color;           // 颜色
    uint32_t        flags;           // 标志位
} ui_vertex_t;

// UI渲染批次
typedef struct {
    material_t*      material;        // 材质
    texture_t*       texture;         // 纹理
    shader_t*        shader;          // 着色器
    blend_mode_t     blend_mode;      // 混合模式
    
    // 顶点数据
    ui_vertex_t*     vertices;        // 顶点数组
    uint32_t         vertex_count;    // 顶点数量
    uint32_t         vertex_capacity; // 顶点容量
    
    // 索引数据
    ui_index_t*      indices;         // 索引数组
    uint32_t         index_count;     // 索引数量
    uint32_t         index_capacity;  // 索引容量
    
    // 渲染状态
    scissor_rect_t   scissor_rect;    // 裁剪矩形
    uint32_t         layer;           // 渲染层
    float            depth;           // 深度
    
    // 统计
    uint32_t         draw_calls;      // 绘制调用数
    uint32_t         triangles;       // 三角形数
} ui_render_batch_t;

// UI渲染器
typedef struct {
    // 设备
    render_device_t* device;          // 渲染设备
    vertex_buffer_t* vertex_buffer;   // 顶点缓冲区
    index_buffer_t*  index_buffer;    // 索引缓冲区
    
    // 批处理
    ui_render_batch_t* batches;        // 批次数组
    uint32_t         batch_count;     // 批次数量
    uint32_t         max_batches;     // 最大批次数
    ui_render_batch_t* current_batch; // 当前批次
    
    // 着色器
    shader_t*        ui_shader;       // UI着色器
    shader_t*        text_shader;     // 文本着色器
    shader_t*        effects_shader;  // 特效着色器
    
    // 图集
    texture_atlas_t* texture_atlas;   // 纹理图集
    font_atlas_t*    font_atlas;      // 字体图集
    
    // 渲染状态
    render_state_t   render_state;    // 渲染状态
    uint32_t         sort_mode;       // 排序模式
    
    // 后处理
    post_processor_t* post_processor;  // 后处理器
    render_target_t* ui_target;       // UI渲染目标
    
    // 统计
    ui_render_stats_t stats;          // 渲染统计
} ui_renderer_t;

// 文本渲染器
typedef struct {
    // 字体管理
    font_manager_t*  font_manager;    // 字体管理器
    font_t*          default_font;    // 默认字体
    font_t*          fonts;           // 字体数组
    uint32_t         font_count;      // 字体数量
    
    // 文本布局
    text_layout_t*   layout_engine;   // 布局引擎
    text_shaper_t*   text_shaper;     // 文本塑形器
    
    // 渲染缓存
    text_cache_t*    text_cache;      // 文本缓存
    glyph_cache_t*   glyph_cache;     // 字形缓存
    
    // 国际化
    i18n_system_t*   i18n;            // 国际化系统
    text_direction_t text_direction;  // 文本方向
} ui_text_renderer_t;
```

**渲染特性**:
- 硬件加速渲染
- 批处理优化
- 多纹理支持
- 后处理效果

### 3.5 动画系统 (Animation System)

**功能职责**:
- 管理UI动画
- 支持多种动画类型
- 处理动画插值
- 动画状态管理

**关键结构**:
```c
// 动画类型
typedef enum {
    ANIMATION_TYPE_PROPERTY,   // 属性动画
    ANIMATION_TYPE_TRANSFORM,  // 变换动画
    ANIMATION_TYPE_COLOR,     // 颜色动画
    ANIMATION_TYPE_FADE,       // 淡入淡出
    ANIMATION_TYPE_SLIDE,      // 滑动动画
    ANIMATION_TYPE_SCALE,      // 缩放动画
    ANIMATION_TYPE_ROTATE,     // 旋转动画
    ANIMATION_TYPE_PATH,       // 路径动画
    ANIMATION_TYPE_KEYFRAME,   // 关键帧动画
    ANIMATION_TYPE_SEQUENCE    // 序列动画
} animation_type_t;

// 缓动函数
typedef enum {
    EASING_LINEAR,            // 线性
    EASING_EASE_IN,           // 缓入
    EASING_EASE_OUT,          // 缓出
    EASING_EASE_IN_OUT,       // 缓入缓出
    EASING_BOUNCE,            // 弹跳
    EASING_ELASTIC,           // 弹性
    EASING_BACK,              // 回弹
    EASING_CUBIC,             // 三次
    EASING_QUADRATIC,         // 二次
    EASING_QUARTIC,           // 四次
    EASING_QUINTIC,           // 五次
    EASING_SINE,              // 正弦
    EASING_EXPONENTIAL        // 指数
} easing_type_t;

// 动画属性
typedef struct {
    animation_type_t  type;            // 动画类型
    float            duration;        // 持续时间
    float            delay;           // 延迟时间
    float            speed;           // 播放速度
    bool             loop;            // 循环播放
    bool             ping_pong;       // 往返播放
    bool             auto_reverse;    // 自动反转
    easing_type_t    easing;          // 缓动类型
    
    // 目标
    ui_widget_t*     target_widget;   // 目标控件
    char*            property_name;    // 属性名称
    
    // 值
    animation_value_t start_value;     // 起始值
    animation_value_t end_value;       // 结束值
    animation_value_t current_value;   // 当前值
    
    // 关键帧
    keyframe_t*      keyframes;       // 关键帧数组
    uint32_t         keyframe_count;  // 关键帧数量
    
    // 回调
    void (*on_start)(ui_animation_t*); // 开始回调
    void (*on_update)(ui_animation_t*); // 更新回调
    void (*on_complete)(ui_animation_t*); // 完成回调
} animation_properties_t;

// UI动画
typedef struct ui_animation {
    uint32_t             animation_id;   // 动画ID
    animation_state_t    state;          // 动画状态
    animation_properties_t props;         // 动画属性
    
    // 时间
    float                elapsed_time;   // 已用时间
    float                normalized_time; // 标准化时间
    
    // 链接
    struct ui_animation* next;           // 下一个动画
    struct ui_animation* child;          // 子动画
    
    // 用户数据
    void*                user_data;      // 用户数据
} ui_animation_t;

// 动画系统
typedef struct {
    // 动画管理
    ui_animation_t*      animations;     // 动画数组
    uint32_t             animation_count;// 动画数量
    uint32_t             max_animations; // 最大动画数
    
    // 时间线
    animation_timeline_t* timelines;     // 时间线数组
    uint32_t             timeline_count;// 时间线数量
    
    // 缓动函数
    easing_function_t*    easing_functions; // 缓动函数数组
    uint32_t             easing_count;  // 缓动函数数量
    
    // 优化
    animation_cache_t*    cache;          // 动画缓存
    bool                 use_interpolation; // 使用插值
    
    // 事件
    event_dispatcher_t*   event_dispatcher; // 事件分发器
} ui_animation_system_t;
```

**动画特性**:
- 多种动画类型
- 缓动函数支持
- 关键帧动画
- 动画序列

### 3.6 事件系统 (Event System)

**功能职责**:
- 处理UI输入事件
- 事件路由和分发
- 支持事件冒泡和捕获
- 手势识别

**关键结构**:
```c
// UI事件类型
typedef enum {
    UI_EVENT_MOUSE_DOWN,     // 鼠标按下
    UI_EVENT_MOUSE_UP,       // 鼠标释放
    UI_EVENT_MOUSE_MOVE,     // 鼠标移动
    UI_EVENT_MOUSE_CLICK,    // 鼠标点击
    UI_EVENT_MOUSE_DOUBLE_CLICK, // 鼠标双击
    UI_EVENT_MOUSE_ENTER,    // 鼠标进入
    UI_EVENT_MOUSE_LEAVE,    // 鼠标离开
    UI_EVENT_MOUSE_WHEEL,    // 鼠标滚轮
    
    UI_EVENT_TOUCH_DOWN,     // 触摸按下
    UI_EVENT_TOUCH_UP,       // 触摸释放
    UI_EVENT_TOUCH_MOVE,     // 触摸移动
    UI_EVENT_TOUCH_CANCEL,   // 触摸取消
    
    UI_EVENT_KEY_DOWN,       // 键盘按下
    UI_EVENT_KEY_UP,         // 键盘释放
    UI_EVENT_KEY_CHAR,       // 字符输入
    
    UI_EVENT_FOCUS_GAIN,    // 获得焦点
    UI_EVENT_FOCUS_LOST,     // 失去焦点
    
    UI_EVENT_SCROLL,         // 滚动
    UI_EVENT_VALUE_CHANGED,  // 值改变
    UI_EVENT_SELECTION_CHANGED, // 选择改变
    
    UI_EVENT_DRAG_START,     // 拖动开始
    UI_EVENT_DRAG_MOVE,      // 拖动移动
    UI_EVENT_DRAG_END,       // 拖动结束
    
    UI_EVENT_GESTURE_BEGIN,  // 手势开始
    UI_EVENT_GESTURE_END,    // 手势结束
    UI_EVENT_GESTURE_TAP,     // 点击手势
    UI_EVENT_GESTURE_PINCH,  // 捏合手势
    UI_EVENT_GESTURE_SWIPE,  // 滑动手势
    UI_EVENT_GESTURE_ROTATE  // 旋转手势
} ui_event_type_t;

// UI事件
typedef struct {
    ui_event_type_t  type;            // 事件类型
    uint32_t        timestamp;       // 时间戳
    
    // 源和目标
    ui_widget_t*     source;          // 事件源
    ui_widget_t*     target;          // 事件目标
    ui_widget_t*     current_target;  // 当前目标
    
    // 传播
    event_phase_t    phase;           // 事件阶段
    bool             handled;         // 是否已处理
    bool             cancelable;      // 是否可取消
    
    // 鼠标事件
    struct {
        vector2         position;        // 位置
        vector2         delta;           // 位置变化
        uint32_t        button;          // 按钮索引
        float           wheel_delta;     // 滚轮增量
    } mouse;
    
    // 触摸事件
    struct {
        uint32_t        touch_id;        // 触摸ID
        vector2         position;        // 位置
        vector2         delta;           // 位置变化
        float           pressure;        // 压力
    } touch;
    
    // 键盘事件
    struct {
        uint32_t        key_code;        // 键码
        uint32_t        modifiers;       // 修饰键
        uint32_t        char_code;       // 字符码
    } keyboard;
    
    // 手势事件
    struct {
        gesture_type_t  gesture_type;    // 手势类型
        vector2         center;          // 中心点
        float           scale;           // 缩放
        float           rotation;        // 旋转
        vector2         velocity;        // 速度
    } gesture;
    
    // 用户数据
    void*            user_data;        // 用户数据
} ui_event_t;

// 事件处理器
typedef struct {
    ui_widget_t*     widget;          // 关联控件
    event_type_t     event_type;      // 事件类型
    void (*handler)(ui_widget_t*, ui_event_t*); // 处理函数
    void*            user_data;       // 用户数据
    bool             enabled;         // 是否启用
    uint32_t         priority;        // 优先级
} event_handler_t;

// 事件系统
typedef struct {
    // 事件队列
    event_queue_t    event_queue;     // 事件队列
    uint32_t         queue_size;      // 队列大小
    
    // 事件处理器
    event_handler_t* handlers;        // 处理器数组
    uint32_t         handler_count;   // 处理器数量
    hash_table_t*    handler_index;   // 处理器索引
    
    // 手势识别
    gesture_recognizer_t* gestures;    // 手势识别器数组
    uint32_t         gesture_count;   // 手势数量
    
    // 拖放
    drag_drop_system_t* drag_drop;     // 拖放系统
    
    // 输入状态
    input_state_t     input_state;     // 输入状态
    mouse_state_t     mouse_state;     // 鼠标状态
    keyboard_state_t  keyboard_state;  // 键盘状态
    touch_state_t     touch_state;     // 触摸状态
    
    // 事件分发
    event_dispatcher_t dispatcher;    // 事件分发器
} ui_event_system_t;
```

**事件特性**:
- 多种输入支持
- 事件冒泡和捕获
- 手势识别
- 拖放支持

## 4. 性能优化策略

### 4.1 渲染优化

#### 4.1.1 批处理优化

```c
// 批处理策略
typedef enum {
    BATCHING_BY_MATERIAL,    // 按材质批处理
    BATCHING_BY_TEXTURE,     // 按纹理批处理
    BATCHING_BY_DEPTH,       // 按深度批处理
    BATCHING_BY_LAYER,       // 按层批处理
    BATCHING_HYBRID          // 混合批处理
} batching_strategy_t;

// 批处理器
typedef struct {
    batching_strategy_t strategy;       // 批处理策略
    uint32_t           max_vertices;   // 最大顶点数
    uint32_t           max_indices;    // 最大索引数
    
    // 批次池
    ui_render_batch_t* batch_pool;     // 批次池
    uint32_t           pool_size;      // 池大小
    free_list_t        free_batches;   // 空闲批次
    
    // 排序
    sort_key_generator_t sort_generator;// 排序键生成器
    uint32_t           sort_mode;      // 排序模式
    
    // 统计
    batching_stats_t   stats;          // 批处理统计
} ui_batcher_t;
```

**优化技术**:
- 动态批处理
- 静态批处理
- 实例化渲染
- 纹理图集

### 4.2 内存优化

#### 4.2.1 对象池

```c
// 控件对象池
typedef struct {
    ui_widget_t*      pool;            // 对象池
    uint32_t          pool_size;       // 池大小
    uint32_t          free_count;      // 空闲数量
    free_list_t       free_list;       // 空闲列表
    
    // 创建和销毁
    ui_widget_t* (*create)(struct ui_object_pool*); // 创建函数
    void (*destroy)(struct ui_object_pool*, ui_widget_t*); // 销毁函数
    
    // 统计
    pool_stats_t      stats;           // 池统计
} ui_object_pool_t;

// 内存分配器
typedef struct {
    // 块分配
    memory_block_t*   blocks;          // 内存块数组
    uint32_t          block_count;     // 块数量
    uint32_t          block_size;      // 块大小
    
    // 线性分配器
    linear_allocator_t linear_alloc;   // 线性分配器
    
    // 堆分配器
    heap_allocator_t  heap_alloc;      // 堆分配器
    
    // 统计
    memory_stats_t    stats;           // 内存统计
} ui_memory_allocator_t;
```

**内存优化技术**:
- 对象池复用
- 内存池分配
- 延迟释放
- 智能指针

### 4.3 布局优化

#### 4.3.1 增量布局

```c
// 布局脏标记
typedef struct {
    bool             widget_dirty;    // 控件脏标记
    bool             parent_dirty;    // 父控件脏标记
    bool             children_dirty;  // 子控件脏标记
    bool             global_dirty;    // 全局脏标记
    
    // 脏区域
    rect_t           dirty_rect;      // 脏区域矩形
    region_list_t    dirty_regions;   // 脏区域列表
    
    // 更新队列
    widget_update_queue_t update_queue; // 更新队列
} layout_dirty_flags_t;

// 布局优化器
typedef struct {
    layout_dirty_flags_t dirty_flags; // 脏标记
    layout_cache_t*     cache;          // 布局缓存
    constraint_solver_t* solver;        // 约束求解器
    
    // 性能
    uint32_t           max_update_time; // 最大更新时间
    float             time_budget;     // 时间预算
    bool              incremental;      // 增量更新
    
    // 统计
    layout_optimization_stats_t stats; // 优化统计
} layout_optimizer_t;
```

**布局优化技术**:
- 增量布局计算
- 脏区域渲染
- 布局缓存
- 约束优化

## 5. 工具和调试

### 5.1 UI调试器

```c
// 调试信息
typedef struct {
    bool              enabled;         // 是否启用
    debug_level_t     level;           // 调试级别
    log_callback_t    log_callback;    // 日志回调
    
    // 可视化
    ui_debug_visualization_t viz;      // 可视化设置
    bool              show_bounds;     // 显示边界
    bool              show_layout;     // 显示布局
    bool              show_overdraw;   // 显示过度绘制
    
    // 性能
    performance_monitor_t perf_monitor; // 性能监控
    fps_counter_t     fps_counter;     // FPS计数器
    memory_tracker_t  memory_tracker;  // 内存跟踪器
    
    // 事件
    event_logger_t    event_logger;    // 事件日志
    bool              log_events;      // 记录事件
} ui_debugger_t;

// UI分析器
typedef struct {
    // 渲染分析
    render_analyzer_t render_analyzer; // 渲染分析器
    batch_analyzer_t  batch_analyzer;  // 批次分析器
    
    // 布局分析
    layout_analyzer_t layout_analyzer; // 布局分析器
    constraint_analyzer_t constraint_analyzer; // 约束分析器
    
    // 内存分析
    memory_analyzer_t memory_analyzer; // 内存分析器
    leak_detector_t   leak_detector;   // 泄漏检测器
    
    // 热点分析
    hotspot_analyzer_t hotspot_analyzer; // 热点分析器
    profiler_t        profiler;        // 性能分析器
} ui_profiler_t;
```

**调试功能**:
- 实时UI可视化
- 性能分析
- 内存泄漏检测
- 事件追踪

### 5.2 UI编辑器

```c
// 编辑器接口
typedef struct {
    // 设计视图
    design_view_t     design_view;     // 设计视图
    hierarchy_view_t  hierarchy_view;  // 层级视图
    property_view_t   property_view;   // 属性视图
    
    // 工具
    selection_tool_t  selection_tool;  // 选择工具
    transform_tool_t  transform_tool;  // 变换工具
    layout_tool_t     layout_tool;     // 布局工具
    
    // 预览
    preview_system_t  preview_system;  // 预览系统
    theme_editor_t    theme_editor;    // 主题编辑器
    
    // 资源
    asset_browser_t   asset_browser;   // 资源浏览器
    template_library_t template_lib;  // 模板库
} ui_editor_interface_t;
```

## 6. 最佳实践

### 6.1 UI设计建议

1. **性能考虑**
   - 避免过多的控件嵌套
   - 使用合适的布局类型
   - 优化纹理资源

2. **用户体验**
   - 保持界面一致性
   - 提供视觉反馈
   - 支持键盘导航

3. **响应式设计**
   - 考虑不同分辨率
   - 支持动态缩放
   - 适配不同设备

### 6.2 开发建议

1. **代码结构**
   - 使用控件继承
   - 实现复用组件
   - 分离逻辑和表现

2. **测试策略**
   - 进行压力测试
   - 测试各种输入
   - 验证布局正确性

## 7. 故障排除

### 7.1 常见问题

1. **渲染性能差**
   - 检查批处理效率
   - 优化纹理图集
   - 减少过度绘制

2. **布局错误**
   - 验证布局参数
   - 检查约束条件
   - 调试布局计算

3. **事件处理问题**
   - 检查事件冒泡
   - 验证焦点管理
   - 调试事件传播

### 7.2 诊断工具

- UI性能分析器
- 内存分析器
- 事件调试器
- 布局验证器

## 8. 总结

Mount & Blade II: Bannerlord的UI系统是一个功能全面、性能优异的用户界面引擎。通过先进的渲染技术、灵活的布局系统、丰富的动画支持和完善的工具链，为游戏提供了优秀的用户界面体验。

### 主要特点

1. **高性能**: 硬件加速渲染、批处理优化、智能缓存
2. **灵活性**: 多种布局方式、丰富的控件库、可扩展架构
3. **易用性**: 直观的API、完善的工具、详细的文档
4. **可定制**: 主题系统、样式定制、动画编辑

这个UI系统成功地为复杂的RPG游戏界面提供了坚实的技术基础，确保了在各种场景下的良好性能和用户体验。

## 附录

### A. UI控件示例

```c
// 按钮控件
typedef struct {
    ui_widget_t      base;            // 基类
    char*            text;            // 按钮文本
    texture_t*       normal_texture;  // 正常状态纹理
    texture_t*       hover_texture;   // 悬停状态纹理
    texture_t*       pressed_texture;// 按下状态纹理
    font_t*          font;            // 字体
    color_t          text_color;      // 文本颜色
    text_align_t     text_align;      // 文本对齐
    bool             toggle;          // 是否为开关按钮
    bool             checked;         // 选中状态
} ui_button_t;

// 列表框控件
typedef struct {
    ui_widget_t      base;            // 基类
    list_item_t*     items;           // 项数组
    uint32_t         item_count;      // 项数量
    uint32_t         selected_index;  // 选中索引
    scrollbar_t*     scrollbar;       // 滚动条
    float            item_height;     // 项高度
    bool             multi_select;    // 多选模式
    item_template_t  item_template;  // 项模板
} ui_listbox_t;
```

### B. 布局示例

```c
// 创建相对布局
ui_layout_params_t* create_relative_layout() {
    ui_layout_params_t* params = malloc(sizeof(ui_layout_params_t));
    params->type = LAYOUT_TYPE_RELATIVE;
    
    // 设置边距
    params->margin.left = 10;
    params->margin.top = 10;
    params->margin.right = 10;
    params->margin.bottom = 10;
    
    // 设置对齐
    params->horizontal_align = ALIGN_CENTER;
    params->vertical_align = ALIGN_MIDDLE;
    
    return params;
}

// 创建网格布局
ui_layout_params_t* create_grid_layout(uint32_t columns, uint32_t rows) {
    grid_layout_params_t* grid_params = malloc(sizeof(grid_layout_params_t));
    grid_params->columns = columns;
    grid_params->rows = rows;
    grid_params->column_spacing = 5;
    grid_params->row_spacing = 5;
    
    ui_layout_params_t* params = malloc(sizeof(ui_layout_params_t));
    params->type = LAYOUT_TYPE_GRID;
    params->layout_params = grid_params;
    
    return params;
}
```

### C. 动画示例

```c
// 创建淡入动画
ui_animation_t* create_fade_in_animation(ui_widget_t* widget, float duration) {
    ui_animation_t* anim = create_animation(widget);
    anim->type = ANIMATION_TYPE_FADE;
    anim->duration = duration;
    anim->easing = EASING_EASE_IN_OUT;
    
    // 设置属性
    anim->property_name = "opacity";
    anim->start_value.f32 = 0.0f;
    anim->end_value.f32 = 1.0f;
    
    return anim;
}

// 创建滑动动画
ui_animation_t* create_slide_animation(ui_widget_t* widget, 
                                     vector2 start_pos, 
                                     vector2 end_pos,
                                     float duration) {
    ui_animation_t* anim = create_animation(widget);
    anim->type = ANIMATION_TYPE_SLIDE;
    anim->duration = duration;
    anim->easing = EASING_EASE_OUT_BACK;
    
    // 设置属性
    anim->property_name = "position";
    anim->start_value.v2 = start_pos;
    anim->end_value.v2 = end_pos;
    
    return anim;
}
```

### D. 参考资源

1. 《UI Design for Games》 - Ernest Adams
2. 《Game UI by Example》 - Michael F. Duggan
3. 《User Interface Design for Games》 - Jeff Ward
4. Unity UI Documentation
5. Unreal Engine UMG Documentation