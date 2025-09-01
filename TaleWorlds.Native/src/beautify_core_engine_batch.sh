#!/bin/bash

# 02_core_engine.c 美化脚本
# 用于替换FUN_函数为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 02_core_engine.c 02_core_engine.c.backup

# 定义函数替换映射
declare -A function_replacements

# 基于函数功能的命名
function_replacements["FUN_180030470"]="CoreEngineInitializeRenderingConfig"
function_replacements["FUN_180031b10"]="CoreEngineInitializePhysicsConfig"
function_replacements["FUN_180031c10"]="CoreEngineInitializeAudioConfig"
function_replacements["FUN_180031d10"]="CoreEngineInitializeNetworkConfig"
function_replacements["FUN_180031e10"]="CoreEngineInitializeInputConfig"
function_replacements["FUN_180032010"]="CoreEngineInitializeMemoryConfig"
function_replacements["FUN_180032110"]="CoreEngineInitializeThreadConfig"
function_replacements["FUN_180032210"]="CoreEngineInitializeFileSystemConfig"
function_replacements["FUN_180032310"]="CoreEngineInitializeDatabaseConfig"
function_replacements["FUN_180032410"]="CoreEngineInitializeSecurityConfig"
function_replacements["FUN_180032510"]="CoreEngineInitializeEventConfig"
function_replacements["FUN_1800325a0"]="CoreEngineInitializeResourceConfig"
function_replacements["FUN_1800327a0"]="CoreEngineInitializeTimeConfig"
function_replacements["FUN_1800328a0"]="CoreEngineInitializeDebugConfig"
function_replacements["FUN_1800329a0"]="CoreEngineInitializeProfileConfig"
function_replacements["FUN_180032aa0"]="CoreEngineInitializeLogConfig"
function_replacements["FUN_180032ba0"]="CoreEngineInitializeMetricsConfig"
function_replacements["FUN_180032ca0"]="CoreEngineInitializeConsoleConfig"
function_replacements["FUN_180033780"]="CoreEngineInitializePluginConfig"
function_replacements["FUN_1800338a0"]="CoreEngineInitializeModuleConfig"

# 执行替换
for old_name in "${!function_replacements[@]}"; do
    new_name="${function_replacements[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    sed -i "s/$old_name/$new_name/g" 02_core_engine.c
done

# 添加函数注释
sed -i '/^\/\/ 函数: void CoreEngineInitializeRenderingConfig(void)$/i\
/**\
 * @brief 初始化游戏渲染配置管理器\
 * \
 * 该函数负责初始化游戏渲染配置系统的管理器，设置渲染配置的\
 * 基本参数和回调函数。用于管理游戏中的渲染设置和参数。\
 *\
 * @param 无\
 * @return void\
 */' 02_core_engine.c

sed -i '/^\/\/ 函数: void CoreEngineInitializePhysicsConfig(void)$/i\
/**\
 * @brief 初始化游戏物理配置管理器\
 * \
 * 该函数负责初始化游戏物理配置系统的管理器，设置物理模拟的\
 * 基本参数和回调函数。用于管理游戏中的物理设置和参数。\
 *\
 * @param 无\
 * @return void\
 */' 02_core_engine.c

sed -i '/^\/\/ 函数: void CoreEngineInitializeAudioConfig(void)$/i\
/**\
 * @brief 初始化游戏音频配置管理器\
 * \
 * 该函数负责初始化游戏音频配置系统的管理器，设置音频系统的\
 * 基本参数和回调函数。用于管理游戏中的音频设置和参数。\
 *\
 * @param 无\
 * @return void\
 */' 02_core_engine.c

sed -i '/^\/\/ 函数: void CoreEngineInitializeNetworkConfig(void)$/i\
/**\
 * @brief 初始化游戏网络配置管理器\
 * \
 * 该函数负责初始化游戏网络配置系统的管理器，设置网络通信的\
 * 基本参数和回调函数。用于管理游戏中的网络设置和参数。\
 *\
 * @param 无\
 * @return void\
 */' 02_core_engine.c

sed -i '/^\/\/ 函数: void CoreEngineInitializeInputConfig(void)$/i\
/**\
 * @brief 初始化游戏输入配置管理器\
 * \
 * 该函数负责初始化游戏输入配置系统的管理器，设置输入设备的\
 * 基本参数和回调函数。用于管理游戏中的输入设置和参数。\
 *\
 * @param 无\
 * @return void\
 */' 02_core_engine.c

echo "02_core_engine.c 美化完成"