# Mount & Blade II: Bannerlord 开发者指南

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 开发指南
- **适用对象**: 游戏开发者、模组制作者、技术策划

## 1. 概述

Mount & Blade II: Bannerlord是一个功能强大的沙盒式角色扮演游戏，拥有丰富的模组支持和活跃的开发者社区。本指南为开发者提供全面的技术指导，帮助理解引擎架构、开发工具和最佳实践。

### 1.1 开发环境准备

#### 1.1.1 系统要求

**开发环境**:
- **操作系统**: Windows 10/11 (推荐), Linux (实验性支持)
- **CPU**: Intel Core i5/i7 或 AMD equivalent
- **内存**: 16GB RAM (推荐32GB)
- **显卡**: NVIDIA GeForce GTX 1060 / AMD Radeon RX 580 或更高
- **存储**: 50GB 可用空间 (SSD推荐)

**开发工具**:
- **IDE**: Visual Studio 2019/2022
- **SDK**: Bannerlord Modding Kit
- **版本控制**: Git
- **构建工具**: CMake
- **调试工具**: Visual Studio Debugger

#### 1.1.2 环境设置

```bash
# 1. 克隆代码仓库
git clone https://github.com/TaleWorlds/MountAndBladeBannerlord.git
cd MountAndBladeBannerlord

# 2. 初始化子模块
git submodule update --init --recursive

# 3. 配置构建环境
mkdir build && cd build
cmake .. -G "Visual Studio 16 2019" -A x64

# 4. 编译引擎
cmake --build . --config Release

# 5. 安装开发工具
./install_dev_tools.bat
```

### 1.2 项目结构

```
MountAndBladeBannerlord/
├── Bin/                    # 可执行文件
├── Modules/                # 游戏模块
│   ├── Native/            # 原生引擎模块
│   ├── SandBox/           # 沙盒模式
│   ├── StoryMode/         # 故事模式
│   └── CustomBattle/      # 自定义战斗
├── ModuleData/            # 模块数据
├── GUI/                   # GUI资源
├── Music/                 # 音乐文件
├── Sounds/                # 音效文件
├── Textures/              # 纹理资源
├── Scenes/                # 场景文件
├── ResourceBrowser/       # 资源浏览器
├── Tools/                 # 开发工具
│   ├── ModuleBuilder/     # 模块构建器
│   ├── ResourceExporter/  # 资源导出器
│   └── SceneEditor/       # 场景编辑器
└── Docs/                  # 文档
```

## 2. 引擎架构概述

### 2.1 核心系统

Bannerlord引擎采用模块化设计，主要包含以下核心系统：

```c
// 引擎初始化
typedef struct {
    engine_config_t config;              // 引擎配置
    
    // 核心系统
    render_system_t*  render_system;     // 渲染系统
    physics_system_t* physics_system;    // 物理系统
    audio_system_t*   audio_system;      // 音频系统
    network_system_t* network_system;    // 网络系统
    ui_system_t*      ui_system;         // UI系统
    input_system_t*   input_system;      // 输入系统
    
    // 管理器
    resource_manager_t* resource_manager; // 资源管理器
    scene_manager_t*   scene_manager;    // 场景管理器
    entity_manager_t*  entity_manager;   // 实体管理器
    
    // 脚本系统
    script_system_t*  script_system;     // 脚本系统
    module_manager_t* module_manager;    // 模块管理器
} engine_t;

// 初始化引擎
engine_t* engine_init(const engine_config_t* config) {
    engine_t* engine = malloc(sizeof(engine_t));
    engine->config = *config;
    
    // 初始化子系统
    engine->render_system = render_system_init(&config->render_config);
    engine->physics_system = physics_system_init(&config->physics_config);
    engine->audio_system = audio_system_init(&config->audio_config);
    engine->network_system = network_system_init(&config->network_config);
    engine->ui_system = ui_system_init(&config->ui_config);
    engine->input_system = input_system_init(&config->input_config);
    
    // 初始化管理器
    engine->resource_manager = resource_manager_init();
    engine->scene_manager = scene_manager_init();
    engine->entity_manager = entity_manager_init();
    
    // 初始化脚本系统
    engine->script_system = script_system_init();
    engine->module_manager = module_manager_init();
    
    return engine;
}
```

### 2.2 游戏循环

```c
// 主游戏循环
void game_run(engine_t* engine) {
    bool running = true;
    float dt = 0.0f;
    uint64_t last_time = get_current_time();
    
    while (running) {
        uint64_t current_time = get_current_time();
        dt = (float)(current_time - last_time) / 1000.0f;
        last_time = current_time;
        
        // 处理输入
        input_system_update(engine->input_system, dt);
        
        // 更新游戏逻辑
        game_update(engine, dt);
        
        // 更新物理
        physics_system_update(engine->physics_system, dt);
        
        // 更新音频
        audio_system_update(engine->audio_system, dt);
        
        // 更新网络
        network_system_update(engine->network_system, dt);
        
        // 渲染帧
        render_frame(engine);
        
        // 更新UI
        ui_system_update(engine->ui_system, dt);
        
        // 处理事件
        process_events(engine);
    }
}
```

## 3. 模块开发

### 3.1 创建模块

#### 3.1.1 模块结构

```
MyModule/
├── SubModule.xml          # 模块配置文件
├── bin/                   # 编译输出
├── GUI/                   # UI资源
│   ├── Prefabs/           # UI预制体
│   └── Scenes/            # UI场景
├── ModuleData/            # 模块数据
│   ├── ItemTypes/         # 物品类型
│   ├── SceneObj/         # 场景对象
│   └── spkingdoms.xml     # 派系数据
├── Source/                # 源代码
│   ├── MyModule.csproj    # 项目文件
│   └── MyModule/          # 命名空间
│       ├── Models/        # 数据模型
│       ├── Behaviors/     # 行为组件
│       └── GameModels/    # 游戏模型
└── AssetSources/          # 资源源文件
    ├── Textures/          # 纹理源文件
    ├── Meshes/            # 网格源文件
    └── Sounds/            # 音频源文件
```

#### 3.1.2 SubModule.xml配置

```xml
<?xml version="1.0" encoding="utf-8"?>
<Module>
    <Name value="MyModule"/>
    <Id value="MyModule"/>
    <Version value="1.0.0"/>
    
    <SingleplayerModule value="true"/>
    <MultiplayerModule value="false"/>
    
    <DependedModules>
        <DependedModule Id="Native"/>
        <DependedModule Id="SandBoxCore"/>
        <DependedModule Id="Sandbox"/>
        <DependedModule Id="CustomBattle"/>
        <DependedModule Id="StoryMode" />
    </DependedModules>
    
    <SubModules>
        <SubModule>
            <Name value="MyModule"/>
            <DLLName value="MyModule.dll"/>
            <SubModuleType value="Gameplay"/>
            <Tags>
                <Tag key="DedicatedServerType" value="none" />
                <Tag key="IsNoModeSpecific" value="true" />
            </Tags>
        </SubModule>
    </SubModules>
    
    <Xmls>
        <XmlNode>ModuleData/ItemTypes</XmlNode>
        <XmlNode>ModuleData/spclans.xml</XmlNode>
    </Xmls>
</Module>
```

### 3.2 C#脚本开发

#### 3.2.1 基础脚本

```csharp
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

namespace MyModule
{
    public class MyModule : MBSubModuleBase
    {
        // 模块初始化
        protected override void OnSubModuleLoad()
        {
            base.OnSubModuleLoad();
            
            // 注册游戏模型
            AddGameModel(new MyGameModel());
            
            // 注册行为
            AddGameBehavior(new MyCampaignBehavior());
        }
        
        // 游戏初始化前
        protected override void OnBeforeInitialModuleScreenSetAsRoot()
        {
            base.OnBeforeInitialModuleScreenSetAsRoot();
            
            // 加载资源
            LoadResources();
        }
        
        // 加载资源
        private void LoadResources()
        {
            // 加载文本
            TextObject.LoadTexts("ModuleData/ModuleStrings.xml");
            
            // 注册物品
            RegisterItems();
        }
        
        // 注册物品
        private void RegisterItems()
        {
            // 创建新物品
            ItemObject item = new ItemObject();
            item.StringId = "my_sword";
            item.Name = new TextObject("{=my_sword}My Sword");
            item.ItemType = ItemTypes.OneHandedSword;
            
            // 设置物品属性
            item.Weight = 1.5f;
            item.Value = 1000;
            item.Difficulty = 0;
            
            // 添加到游戏
            MBObjectManager.Instance.RegisterObject(item);
        }
    }
}
```

#### 3.2.2 游戏模型

```csharp
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.Core;

namespace MyModule.Models
{
    public class MyGameModel : DefaultTroopUpgradeModel
    {
        // 自定义部队升级
        public override void GetUpgradeXp(CharacterObject character, 
                                         int targetTier, 
                                         out float xpAmount)
        {
            base.GetUpgradeXp(character, targetTier, out xpAmount);
            
            // 自定义升级经验
            if (character.StringId.Contains("my_troop"))
            {
                xpAmount *= 0.8f; // 减少20%升级经验
            }
        }
        
        // 自定义招募费用
        public override int GetRecruitmentCost(CharacterObject troop)
        {
            int baseCost = base.GetRecruitmentCost(troop);
            
            // 特殊部队招募折扣
            if (troop.StringId.Contains("my_troop"))
            {
                baseCost = (int)(baseCost * 0.7f);
            }
            
            return baseCost;
        }
    }
}
```

#### 3.2.3 行为组件

```csharp
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Behaviors;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

namespace MyModule.Behaviors
{
    public class MyCampaignBehavior : CampaignBehaviorBase
    {
        // 每日事件
        public override void RegisterEvents()
        {
            CampaignEvents.DailyTickEvent.AddNonSerializedListener(this, OnDailyTick);
            CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener(this, OnGameLoaded);
            CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener(this, OnSessionLaunched);
        }
        
        // 游戏保存
        public override void SyncData(IDataStore dataStore)
        {
            dataStore.SyncData("_myModuleData", ref _moduleData);
        }
        
        // 每日更新
        private void OnDailyTick()
        {
            // 处理每日逻辑
            if (_moduleData.IsActive)
            {
                // 更新模块状态
                _moduleData.DaysActive++;
                
                // 检查事件
                CheckDailyEvents();
            }
        }
        
        // 游戏加载
        private void OnGameLoaded(CampaignGameStarter gameStarter)
        {
            // 加载保存的数据
            LoadSavedData();
            
            // 添加游戏菜单
            AddGameMenus(gameStarter);
        }
        
        // 会话开始
        private void OnSessionLaunched(CampaignGameStarter gameStarter)
        {
            // 初始化游戏会话
            InitializeGameSession();
        }
        
        // 添加游戏菜单
        private void AddGameMenus(CampaignGameStarter gameStarter)
        {
            gameStarter.AddGameMenu(
                "my_module_menu",
                "{=my_module_menu}My Module Menu",
                GameMenu.MenuAndOptionType.InitOnly,
                null,
                GameMenu.MenuFlags.None,
                null
            );
            
            gameStarter.AddGameMenuOption(
                "my_module_menu",
                "my_module_option",
                "{=my_module_option}My Module Option",
                (args) => true,
                (args) => MyModuleOptionConsequence(args),
                true,
                -1,
                false
            );
        }
        
        // 执行模块选项
        private void MyModuleOptionConsequence(MenuCallbackArgs args)
        {
            InformationManager.AddQuickInformation(
                new TextObject("{=module_option_executed}Module option executed!"),
                0,
                null,
                ""
            );
        }
        
        // 模块数据
        private MyModuleData _moduleData = new MyModuleData();
    }
    
    // 模块数据类
    public class MyModuleData
    {
        public bool IsActive { get; set; } = false;
        public int DaysActive { get; set; } = 0;
        public float ModuleValue { get; set; } = 0.0f;
    }
}
```

### 3.3 原生代码开发

#### 3.3.1 C++/CLI互操作

```cpp
// NativeComponent.h
#pragma once

#include "pch.h"
#include <msclr/auto_gcroot.h>

using namespace System;
using namespace TaleWorlds::Library;
using namespace msclr::interop;

namespace MyModule {
    namespace Native {
        
        public ref class NativeComponent
        {
        private:
            // 原生对象指针
            void* nativeObject;
            
        public:
            NativeComponent();
            ~NativeComponent();
            
            // 原生方法
            void NativeMethod1(float param1, int param2);
            float NativeMethod2(String^ strParam);
            
            // 回调
            void SetCallback(Action<String^>^ callback);
            
        internal:
            // 内部方法
            void* GetNativeObject() { return nativeObject; }
        };
        
        // 原生实现类
        class NativeImplementation {
        public:
            NativeImplementation();
            ~NativeImplementation();
            
            void Method1(float param1, int param2);
            float Method2(const std::string& strParam);
            
            void SetCallback(std::function<void(const std::string&)> callback);
            
        private:
            std::function<void(const std::string&)> m_callback;
        };
    }
}
```

```cpp
// NativeComponent.cpp
#include "NativeComponent.h"
#include <string>

namespace MyModule {
    namespace Native {
        
        NativeComponent::NativeComponent()
        {
            nativeObject = new NativeImplementation();
        }
        
        NativeComponent::~NativeComponent()
        {
            if (nativeObject) {
                delete static_cast<NativeImplementation*>(nativeObject);
                nativeObject = nullptr;
            }
        }
        
        void NativeComponent::NativeMethod1(float param1, int param2)
        {
            NativeImplementation* impl = 
                static_cast<NativeImplementation*>(nativeObject);
            impl->Method1(param1, param2);
        }
        
        float NativeComponent::NativeMethod2(String^ strParam)
        {
            NativeImplementation* impl = 
                static_cast<NativeImplementation*>(nativeObject);
            
            // 转换字符串
            std::string nativeStr = msclr::interop::marshal_as<std::string>(strParam);
            
            return impl->Method2(nativeStr);
        }
        
        void NativeComponent::SetCallback(Action<String^>^ callback)
        {
            NativeImplementation* impl = 
                static_cast<NativeImplementation*>(nativeObject);
            
            // 包装回调
            auto wrappedCallback = [callback](const std::string& str) {
                String^ managedStr = gcnew String(str.c_str());
                callback(managedStr);
            };
            
            impl->SetCallback(wrappedCallback);
        }
        
        // NativeImplementation实现
        NativeImplementation::NativeImplementation() {}
        
        NativeImplementation::~NativeImplementation() {}
        
        void NativeImplementation::Method1(float param1, int param2)
        {
            // 原生实现
            printf("Native Method1 called: %.2f, %d\n", param1, param2);
        }
        
        float NativeImplementation::Method2(const std::string& strParam)
        {
            // 原生实现
            printf("Native Method2 called: %s\n", strParam.c_str());
            return 42.0f;
        }
        
        void NativeImplementation::SetCallback(
            std::function<void(const std::string&)> callback)
        {
            m_callback = callback;
        }
    }
}
```

#### 3.3.2 使用原生组件

```csharp
using MyModule.Native;
using TaleWorlds.Engine;

namespace MyModule.Managed
{
    public class MyManagedClass
    {
        private NativeComponent nativeComponent;
        
        public MyManagedClass()
        {
            // 创建原生组件
            nativeComponent = new NativeComponent();
            
            // 设置回调
            nativeComponent.SetCallback(OnNativeCallback);
        }
        
        public void DoNativeWork()
        {
            // 调用原生方法
            nativeComponent.NativeMethod1(3.14f, 42);
            
            float result = nativeComponent.NativeMethod2("Hello from C#!");
            InformationManager.DisplayMessage(
                new InformationMessage($"Native result: {result}")
            );
        }
        
        private void OnNativeCallback(string message)
        {
            // 处理原生回调
            InformationManager.DisplayMessage(
                new InformationMessage($"Native callback: {message}")
            );
        }
    }
}
```

## 4. 资源管理

### 4.1 资源类型

#### 4.1.1 模型资源

```xml
<!-- ModuleData/ItemTypes/my_sword.xml -->
<Item id="my_sword" name="{=my_sword}My Sword" 
      mesh="my_sword_mesh" 
      weight="1.5" 
      difficulty="0" 
      value="1000">
    <ItemComponent>
        <Weapon weapon_class="OneHandedSword" 
                weapon_length="95" 
                speed_rating="100">
            <WeaponFlags CanBlockWithShield="true" />
        </Weapon>
    </ItemComponent>
    <Flags civilian="true" />
</Item>
```

#### 4.1.2 纹理资源

```xml
<!-- ModuleData/Textures/my_sword_texture.xml -->
<Texture name="my_sword_texture"
         path="Textures/my_sword_diffuse.dds"
         normal_path="Textures/my_sword_normal.dds"
         specular_path="Textures/my_sword_specular.dds"/>
```

#### 4.1.3 音频资源

```xml
<!-- ModuleData/Sounds/my_sword_swing.xml -->
<Sound name="my_sword_swing"
       path="Sounds/Weapon/sword_swing.ogg"
       volume="1.0"
       pitch="1.0"
       priority="50"/>
```

### 4.2 资源加载

```csharp
using TaleWorlds.Engine;
using TaleWorlds.Library;

namespace MyModule.Resources
{
    public class MyResourceManager
    {
        // 预加载资源
        public static void PreloadResources()
        {
            // 预加载纹理
            Texture texture = Texture.LoadFromFile("Textures/my_texture.dds");
            
            // 预加载网格
            Mesh mesh = Mesh.Load("Meshes/my_mesh.fbx");
            
            // 预加载材质
            Material material = Material.GetMaterial("my_material");
            
            // 缓存资源
            _resourceCache["my_texture"] = texture;
            _resourceCache["my_mesh"] = mesh;
            _resourceCache["my_material"] = material;
        }
        
        // 获取资源
        public static T GetResource<T>(string name) where T : class
        {
            if (_resourceCache.TryGetValue(name, out object resource))
            {
                return resource as T;
            }
            
            // 动态加载
            if (typeof(T) == typeof(Texture))
            {
                Texture texture = Texture.LoadFromFile($"Textures/{name}.dds");
                _resourceCache[name] = texture;
                return texture as T;
            }
            
            return null;
        }
        
        private static Dictionary<string, object> _resourceCache = 
            new Dictionary<string, object>();
    }
}
```

## 5. 场景编辑

### 5.1 使用场景编辑器

```csharp
using TaleWorlds.Engine;
using TaleWorlds.Library;

namespace MyModule.Scenes
{
    public class MySceneEditor
    {
        // 创建自定义场景
        public static Scene CreateCustomScene()
        {
            // 创建新场景
            Scene scene = Scene.CreateNewScene();
            
            // 设置场景参数
            scene.SetAtmosphere(new AtmosphereParameters
            {
                FogDensity = 0.01f,
                FogColor = new Vec3(0.8f, 0.8f, 0.9f),
                SunIntensity = 1.0f,
                AmbientLight = new Vec3(0.3f, 0.3f, 0.4f)
            });
            
            // 添加地形
            Terrain terrain = scene.CreateTerrain(1024, 1024);
            terrain.SetHeightMap("Textures/terrain_height.raw");
            terrain.SetTexture("Textures/terrain_diffuse.dds");
            
            // 添加光源
            GameEntity sunLight = scene.CreateEntity();
            sunLight.SetFrame(ref MatrixFrame.CreateWorld(
                new Vec3(0, 0, 100),
                Mat3.CreateMat3ForwardUp(new Vec3(0.5f, -0.5f, -0.7f), Vec3.Up)
            ));
            
            // 添加实体
            AddSceneEntities(scene);
            
            return scene;
        }
        
        // 添加场景实体
        private static void AddSceneEntities(Scene scene)
        {
            // 添加静态物体
            GameEntity building = GameEntity.CreateEmpty(scene);
            building.SetName("MyBuilding");
            
            // 添加网格
            Mesh buildingMesh = Mesh.GetFromResource("meshes/building.fbx");
            building.AddMeshComponent(buildingMesh);
            
            // 设置位置
            building.SetGlobalFrame(ref MatrixFrame.CreateWorld(
                new Vec3(10, 5, 0),
                Mat3.Identity
            ));
            
            // 添加碰撞体
            building.AddPhysicsComponent(new PhysicsProperties
            {
                Mass = 0f, // 静态物体
                CollisionShape = CollisionShape.CreateMesh(buildingMesh)
            });
            
            // 添加光源
            GameEntity pointLight = GameEntity.CreateEmpty(scene);
            pointLight.SetName("PointLight");
            
            // 添加光源组件
            Light lightComponent = pointLight.AddComponent<Light>();
            lightComponent.SetLightType(LightType.Point);
            lightComponent.SetColor(new Vec3(1.0f, 0.8f, 0.6f));
            lightComponent.SetIntensity(100.0f);
            lightComponent.SetRadius(20.0f);
            
            pointLight.SetGlobalFrame(ref MatrixFrame.CreateWorld(
                new Vec3(0, 0, 5),
                Mat3.Identity
            ));
        }
    }
}
```

### 5.2 场景事件

```csharp
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.Core;

namespace MyModule.Scenes
{
    public class MySceneBehavior : CampaignBehaviorBase
    {
        // 注册事件
        public override void RegisterEvents()
        {
            CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener(
                this, OnMissionStarted);
            CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener(
                this, OnMissionEnded);
            CampaignEvents.OnPlayerVisitSettlementEvent.AddNonSerializedListener(
                this, OnPlayerVisitSettlement);
        }
        
        // 任务开始
        private void OnMissionStarted(IMission mission)
        {
            // 初始化场景
            InitializeMissionScene(mission);
            
            // 添加场景监听器
            mission.AddMissionBehavior(new MyMissionBehavior());
        }
        
        // 任务结束
        private void OnMissionEnded(IMission mission)
        {
            // 清理场景
            CleanupMissionScene(mission);
        }
        
        // 玩家访问定居点
        private void OnPlayerVisitSettlement(Settlement settlement)
        {
            // 检查是否是自定义定居点
            if (settlement.StringId == "my_settlement")
            {
                // 触发自定义事件
                TriggerCustomSettlementEvent(settlement);
            }
        }
        
        // 初始化任务场景
        private void InitializeMissionScene(IMission mission)
        {
            // 获取场景
            Scene scene = mission.Scene;
            
            // 添加自定义对象
            AddCustomSceneObjects(scene);
            
            // 设置场景参数
            ConfigureSceneParameters(scene);
        }
        
        // 添加自定义场景对象
        private void AddCustomSceneObjects(Scene scene)
        {
            // 添加自定义标记
            GameEntity marker = GameEntity.CreateEmpty(scene);
            marker.SetName("CustomMarker");
            
            // 添加可视化组件
            MetaMesh markerMesh = MetaMesh.GetFromResource("meshes/marker.fbx");
            marker.AddMeshComponent(markerMesh);
            
            // 设置位置
            marker.SetGlobalFrame(ref MatrixFrame.CreateWorld(
                new Vec3(0, 0, 2),
                Mat3.Identity
            ));
        }
    }
}
```

## 6. UI开发

### 6.1 使用Gauntlet UI系统

```csharp
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ScreenSystem;

namespace MyModule.UI
{
    // 视图模型
    public class MyModuleVM : ViewModel
    {
        private string _title;
        private float _progressValue;
        private bool _isEnabled;
        
        [DataSourceProperty]
        public string Title
        {
            get => _title;
            set
            {
                if (_title != value)
                {
                    _title = value;
                    OnPropertyChanged(nameof(Title));
                }
            }
        }
        
        [DataSourceProperty]
        public float ProgressValue
        {
            get => _progressValue;
            set
            {
                if (_progressValue != value)
                {
                    _progressValue = value;
                    OnPropertyChanged(nameof(ProgressValue));
                }
            }
        }
        
        [DataSourceProperty]
        public bool IsEnabled
        {
            get => _isEnabled;
            set
            {
                if (_isEnabled != value)
                {
                    _isEnabled = value;
                    OnPropertyChanged(nameof(IsEnabled));
                }
            }
        }
        
        public MyModuleVM()
        {
            Title = new TextObject("{=my_module_title}My Module").ToString();
            ProgressValue = 0.5f;
            IsEnabled = true;
        }
        
        // 命令方法
        public void ExecuteAction()
        {
            // 执行操作
            InformationManager.DisplayMessage(
                new InformationMessage("Action executed!")
            );
            
            // 更新进度
            ProgressValue = Math.Min(ProgressValue + 0.1f, 1.0f);
        }
    }
    
    // 视图层
    public class MyModuleScreen : ScreenBase
    {
        private MyModuleVM _dataSource;
        
        protected override void OnInitialize()
        {
            base.OnInitialize();
            
            // 创建视图模型
            _dataSource = new MyModuleVM();
            
            // 加载UI
            LoadMovie("MyModuleScreen");
            
            // 设置数据源
            SetDataSource(_dataSource);
        }
        
        protected override void OnFinalize()
        {
            // 清理资源
            _dataSource = null;
            
            base.OnFinalize();
        }
        
        protected override void OnActivate()
        {
            base.OnActivate();
            
            // 激活时的处理
        }
        
        protected override void OnDeactivate()
        {
            base.OnDeactivate();
            
            // 停用时的处理
        }
    }
}
```

### 6.2 UI XML定义

```xml
<!-- GUI/MyModuleScreen.xml -->
<Prefab>
    <Window DataSource="{MyModuleVM}" WidthSizePolicy="StretchToParent" HeightSizePolicy="StretchToParent">
        <VerticalLayout WidthSizePolicy="StretchToParent" HeightSizePolicy="StretchToParent" 
                       HorizontalAlignment="Center" VerticalAlignment="Center">
            
            <!-- 标题 -->
            <TextWidget WidthSizePolicy="CoverChildren" HeightSizePolicy="CoverChildren"
                      Brush="GauntletUI.Text.Title" 
                      Text="@Title"
                      MarginTop="20"/>
            
            <!-- 进度条 -->
            <SliderWidget WidthSizePolicy="Fixed" HeightSizePolicy="Fixed"
                         Width="300" Height="30"
                         MinValue="0" MaxValue="1"
                         Value="@ProgressValue"
                         MarginTop="30"/>
            
            <!-- 按钮 -->
            <ButtonWidget WidthSizePolicy="Fixed" HeightSizePolicy="Fixed"
                          Width="200" Height="40"
                          Brush="GauntletUI.Button"
                          Command.Click="ExecuteAction"
                          IsEnabled="@IsEnabled"
                          MarginTop="30">
                <Children>
                    <TextWidget Text="@ButtonText" WidthSizePolicy="StretchToParent" 
                               HeightSizePolicy="StretchToParent"
                               HorizontalAlignment="Center" VerticalAlignment="Center"/>
                </Children>
            </ButtonWidget>
            
        </VerticalLayout>
    </Window>
</Prefab>
```

## 7. 调试和测试

### 7.1 调试技巧

```csharp
using System.Diagnostics;
using TaleWorlds.Library;

namespace MyModule.Debug
{
    public static class MyDebugHelper
    {
        // 调试日志
        [Conditional("DEBUG")]
        public static void LogDebug(string message)
        {
            Debug.Print($"[MyModule Debug] {message}");
        }
        
        // 信息日志
        public static void LogInfo(string message)
        {
            InformationManager.DisplayMessage(
                new InformationMessage($"[MyModule] {message}")
            );
        }
        
        // 错误日志
        public static void LogError(string message)
        {
            InformationManager.DisplayMessage(
                new InformationMessage($"[MyModule Error] {message}", 
                                     Colors.Red)
            );
            
            Debug.Print($"[MyModule Error] {message}");
        }
        
        // 性能监控
        public static void MeasureTime(string operationName, Action action)
        {
            var stopwatch = Stopwatch.StartNew();
            
            try
            {
                action();
            }
            finally
            {
                stopwatch.Stop();
                LogInfo($"{operationName} took {stopwatch.ElapsedMilliseconds}ms");
            }
        }
        
        // 绘制调试信息
        public static void DrawDebugInfo()
        {
            // 在屏幕上绘制调试信息
            var text = $"FPS: {EngineFPS}\n" +
                      $"Memory: {MemoryUsed}MB\n" +
                      $"Entities: {EntityCount}";
            
            ScreenManager.ShowTooltip(text);
        }
    }
}
```

### 7.2 单元测试

```csharp
using NUnit.Framework;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace MyModule.Tests
{
    [TestFixture]
    public class MyModuleTests
    {
        private MyModule _module;
        
        [SetUp]
        public void Setup()
        {
            // 初始化测试环境
            _module = new MyModule();
        }
        
        [TearDown]
        public void TearDown()
        {
            // 清理测试环境
            _module = null;
        }
        
        [Test]
        public void TestItemCreation()
        {
            // 测试物品创建
            var item = CreateTestItem();
            
            Assert.IsNotNull(item);
            Assert.AreEqual("test_item", item.StringId);
            Assert.AreEqual(100, item.Value);
        }
        
        [Test]
        public void TestTroopUpgrade()
        {
            // 测试部队升级
            var character = CreateTestCharacter();
            var upgradeModel = new MyGameModel();
            
            float xpRequired;
            upgradeModel.GetUpgradeXp(character, 2, out xpRequired);
            
            Assert.Greater(xpRequired, 0);
        }
        
        [Test]
        public void TestModuleInitialization()
        {
            // 测试模块初始化
            var result = _module.Initialize();
            
            Assert.IsTrue(result);
            Assert.AreEqual(ModuleState.Initialized, _module.State);
        }
        
        private ItemObject CreateTestItem()
        {
            var item = new ItemObject();
            item.StringId = "test_item";
            item.Name = new TextObject("Test Item");
            item.Value = 100;
            return item;
        }
        
        private CharacterObject CreateTestCharacter()
        {
            // 创建测试角色
            return CharacterObject.PlayerCharacter;
        }
    }
}
```

## 8. 发布和分发

### 8.1 模块打包

```bash
# 使用ModuleBuilder打包模块
cd Tools/ModuleBuilder
./ModuleBuilder.exe ../../MyModule

# 输出结构
MyModule_1.0.0/
├── MyModule/
│   ├── SubModule.xml
│   ├── bin/Win64_Shipping_Client/
│   │   └── MyModule.dll
│   ├── GUI/
│   ├── ModuleData/
│   └── AssetSources/
└── README.md
```

### 8.2 版本管理

```csharp
using System.Reflection;

namespace MyModule
{
    public static class ModuleVersion
    {
        public const string Version = "1.0.0";
        public const string Name = "MyModule";
        
        public static string GetFullVersion()
        {
            var assembly = Assembly.GetExecutingAssembly();
            var assemblyVersion = assembly.GetName().Version;
            
            return $"{Name} v{Version} (Build {assemblyVersion.Build})";
        }
        
        public static bool CheckCompatibility(string gameVersion)
        {
            // 检查游戏版本兼容性
            return gameVersion.StartsWith("1.0");
        }
    }
}
```

## 9. 最佳实践

### 9.1 代码规范

1. **命名约定**
   - 类名使用PascalCase
   - 方法名使用PascalCase
   - 变量名使用camelCase
   - 常量使用UPPER_SNAKE_CASE
   - 私有字段使用_前缀

2. **代码结构**
   - 单一职责原则
   - 依赖注入
   - 接口分离
   - 避免深度嵌套

3. **性能考虑**
   - 避免频繁GC
   - 使用对象池
   - 优化热点代码
   - 延迟加载资源

### 9.2 常见问题解决

1. **模块加载失败**
   - 检查依赖关系
   - 验证XML语法
   - 查看错误日志

2. **资源丢失**
   - 确认资源路径
   - 检查资源格式
   - 验证资源引用

3. **性能问题**
   - 使用性能分析器
   - 优化渲染管线
   - 减少内存分配

## 10. 社区资源

### 10.1 开发资源

- **官方文档**: https://docs.bannerlordmodding.com
- **模组论坛**: https://forums.taleworlds.com
- **GitHub仓库**: https://github.com/Bannerlord-Modding
- **Discord社区**: https://discord.gg/bannerlord

### 10.2 学习资源

- **官方教程**: Bannerlord Modding Kit
- **视频教程**: YouTube上的模组开发教程
- **开源模组**: GitHub上的示例模组
- **开发工具**: 社区开发的辅助工具

## 总结

Mount & Blade II: Bannerlord为开发者提供了强大而灵活的模组开发框架。通过本指南的学习，开发者可以掌握：

1. **引擎架构**: 理解核心系统和工作原理
2. **模块开发**: 创建和管理游戏模块
3. **资源管理**: 高效处理游戏资源
4. **UI开发**: 创建用户界面
5. **调试技巧**: 定位和解决问题
6. **最佳实践**: 编写高质量的代码

记住，模组开发是一个创造性的过程。不断学习、实践和分享，将为Bannerlord社区带来更多精彩的内容。

祝您开发愉快！