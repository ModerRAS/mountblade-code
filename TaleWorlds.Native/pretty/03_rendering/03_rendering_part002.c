/**
 * @file 03_rendering_part002.c
 * @brief TaleWorlds引擎渲染系统核心函数声明模块
 * 
 * 本文件包含TaleWorlds引擎渲染系统的核心函数声明，涵盖以下主要功能模块：
 * - 渲染管线初始化和配置
 * - 渲染状态管理和切换
 * - 纹理和材质处理
 * - 几何体和网格操作
 * - 着色器程序管理
 * - 渲染目标和缓冲区管理
 * - 光照和阴影处理
 * - 后处理效果
 * - 性能优化和调试
 * 
 * 文件包含约250个渲染系统核心函数的声明，这些函数构成了游戏渲染管线的基础架构。
 * 
 * @author TaleWorlds Entertainment
 * @version 1.0
 * @date 2023
 */

#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 渲染系统核心函数声明模块 (03_rendering_part002.c)
 *=============================================================================*/

/*-----------------------------------------------------------------------------
 * 渲染管线初始化和配置函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 渲染管线初始化函数
 * @details 负责初始化渲染管线的基本状态和配置
 */
uint8_t FUN_1804475e0;
uint8_t unknown_var_192;


/** 
 * @brief 渲染设备配置函数
 * @details 负责配置渲染设备的各项参数和状态
 */
uint8_t FUN_180447660;
uint8_t unknown_var_240;

/** 
 * @brief 渲染上下文创建函数
 * @details 创建和管理渲染上下文，为渲染操作提供必要的环境
 */
uint8_t FUN_180447710;
uint8_t unknown_var_2608;

/** 
 * @brief 渲染状态初始化函数
 * @details 初始化渲染状态机，设置默认的渲染状态
 */
uint8_t FUN_1804477f0;
uint8_t unknown_var_2736;

/** 
 * @brief 渲染管线设置函数
 * @details 配置渲染管线的各个阶段和参数
 */
uint8_t FUN_180447850;
uint8_t unknown_var_3024;

/** 
 * @brief 渲染参数验证函数
 * @details 验证渲染参数的有效性和兼容性
 */
uint8_t FUN_180447990;
uint8_t unknown_var_3504;

/** 
 * @brief 渲染资源初始化函数
 * @details 初始化渲染所需的各类资源，如缓冲区、纹理等
 */
uint8_t FUN_180447b80;
uint8_t unknown_var_5328;

/** 
 * @brief 渲染管线重置函数
 * @details 重置渲染管线到初始状态
 */
uint8_t FUN_180447c00;
uint8_t unknown_var_5488;

/** 
 * @brief 渲染状态切换函数
 * @details 在不同的渲染状态之间进行切换
 */
uint8_t FUN_180447ca0;
uint8_t unknown_var_5584;

/** 
 * @brief 渲染缓冲区管理函数
 * @details 管理渲染缓冲区的创建、绑定和释放
 */
uint8_t FUN_180447d40;
uint8_t unknown_var_5648;

/** 
 * @brief 渲染目标设置函数
 * @details 设置渲染目标及其相关参数
 */
uint8_t FUN_180447de0;
uint8_t unknown_var_5712;

/** 
 * @brief 渲染视口配置函数
 * @details 配置渲染视口的大小、位置和参数
 */
uint8_t FUN_180447e10;
uint8_t unknown_var_5744;

/** 
 * @brief 渲染裁剪设置函数
 * @details 设置渲染裁剪区域和参数
 */
uint8_t FUN_180447e40;
uint8_t unknown_var_5760;

/** 
 * @brief 渲染深度测试函数
 * @details 配置和管理深度测试相关的参数
 */
uint8_t FUN_180447f70;
uint8_t unknown_var_5776;

/** 
 * @brief 渲染混合模式函数
 * @details 配置和管理颜色混合模式
 */
uint8_t FUN_180448110;
uint8_t unknown_var_5808;


/*-----------------------------------------------------------------------------
 * 纹理和材质处理函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 纹理创建函数
 * @details 创建新的纹理对象，设置纹理参数
 */
uint8_t FUN_180448420;

/** 
 * @brief 纹理绑定函数
 * @details 将纹理绑定到指定的纹理单元
 */
uint8_t FUN_180448470;

/** 
 * @brief 纹理参数设置函数
 * @details 设置纹理的过滤、包裹等参数
 */
uint8_t FUN_1804484c0;

/** 
 * @brief 纹理数据更新函数
 * @details 更新纹理的像素数据
 */
uint8_t FUN_180448540;

/** 
 * @brief 纹理释放函数
 * @details 释放纹理资源，清理内存
 */
uint8_t FUN_1804485c0;

/** 
 * @brief 材质创建函数
 * @details 创建新的材质对象，设置材质属性
 */
uint8_t FUN_1804489a0;

/** 
 * @brief 材质参数设置函数
 * @details 设置材质的各种参数，如颜色、光泽度等
 */
uint8_t FUN_180448d90;

/** 
 * @brief 材质着色器绑定函数
 * @details 将着色器程序绑定到材质
 */
uint8_t FUN_180448df0;

/** 
 * @brief 材质纹理绑定函数
 * @details 将纹理绑定到材质的指定槽位
 */
uint8_t FUN_180448e50;

/** 
 * @brief 材质参数更新函数
 * @details 更新材质的参数值
 */
uint8_t FUN_180448ea0;

/** 
 * @brief 材质激活函数
 * @details 激活材质，使其可用于渲染
 */
uint8_t FUN_180448f00;

/** 
 * @brief 材质验证函数
 * @details 验证材质的完整性和有效性
 */
uint8_t FUN_180448f50;

/** 
 * @brief 材质克隆函数
 * @details 克隆现有材质，创建副本
 */
uint8_t FUN_180448fb0;

/** 
 * @brief 材质释放函数
 * @details 释放材质资源，清理内存
 */
uint8_t FUN_180449000;

/** 
 * @brief 材质缓存管理函数
 * @details 管理材质缓存，提高材质访问效率
 */
uint8_t FUN_180449070;

/** 
 * @brief 材质批量处理函数
 * @details 批量处理多个材质的操作
 */
uint8_t FUN_1804491c0;

/** 
 * @brief 材质状态查询函数
 * @details 查询材质的当前状态
 */
uint8_t FUN_180449230;

/** 
 * @brief 材质错误处理函数
 * @details 处理材质相关的错误和异常
 */
uint8_t FUN_180449300;


/*-----------------------------------------------------------------------------
 * 几何体和网格操作函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 网格创建函数
 * @details 创建新的网格对象，设置网格属性
 */
uint8_t FUN_1804496f0;

/** 
 * @brief 网格顶点数据设置函数
 * @details 设置网格的顶点数据，包括位置、法线、UV等
 */
uint8_t FUN_180449780;

/** 
 * @brief 网格索引数据设置函数
 * @details 设置网格的索引数据，定义顶点连接关系
 */
uint8_t FUN_180449850;

/** 
 * @brief 网格属性计算函数
 * @details 计算网格的各种属性，如边界框、法线等
 */
uint8_t FUN_1804498f0;

/** 
 * @brief 网格优化函数
 * @details 优化网格结构，提高渲染性能
 */
uint8_t FUN_180449930;

/** 
 * @brief 网格细分函数
 * @details 对网格进行细分，增加顶点数量
 */
uint8_t FUN_180449a00;

/** 
 * @brief 网格简化函数
 * @details 简化网格结构，减少顶点数量
 */
uint8_t FUN_180449a80;

/** 
 * @brief 网格变形函数
 * @details 对网格进行变形操作
 */
uint8_t FUN_180449c00;

/** 
 * @brief 网格合并函数
 * @details 合并多个网格为一个网格
 */
uint8_t FUN_180449d70;

/** 
 * @brief 网格分割函数
 * @details 将一个网格分割为多个网格
 */
uint8_t FUN_18044a080;

/** 
 * @brief 网格验证函数
 * @details 验证网格的完整性和有效性
 */
uint8_t FUN_18044a3a0;

/** 
 * @brief 网格克隆函数
 * @details 克隆现有网格，创建副本
 */
uint8_t FUN_18044a590;

/** 
 * @brief 网格实例化函数
 * @details 创建网格的实例，支持实例化渲染
 */
uint8_t FUN_18044a810;

/** 
 * @brief 网格LOD生成函数
 * @details 生成网格的多级细节(LOD)版本
 */
uint8_t FUN_18044aad0;

/** 
 * @brief 网格碰撞检测函数
 * @details 进行网格的碰撞检测
 */
uint8_t FUN_18044ab80;

/** 
 * @brief 网格射线检测函数
 * @details 进行网格的射线相交检测
 */
uint8_t FUN_18044ac20;

/** 
 * @brief 网格包围盒计算函数
 * @details 计算网格的包围盒
 */
uint8_t FUN_18044ad90;

/** 
 * @brief 网格包围球计算函数
 * @details 计算网格的包围球
 */
uint8_t FUN_18044af00;

/** 
 * @brief 网格凸包生成函数
 * @details 生成网格的凸包
 */
uint8_t FUN_18044afb0;

/** 
 * @brief 网格法线计算函数
 * @details 计算网格的法线信息
 */
uint8_t FUN_18044b010;

/** 
 * @brief 网格切线计算函数
 * @details 计算网格的切线信息
 */
uint8_t FUN_18044b080;

/** 
 * @brief 网格UV生成函数
 * @details 生成网格的UV坐标
 */
uint8_t FUN_18044b110;

/** 
 * @brief 网格UV展开函数
 * @details 展开网格的UV坐标
 */
uint8_t FUN_18044b1d0;

/** 
 * @brief 网格拓扑修复函数
 * @details 修复网格的拓扑问题
 */
uint8_t FUN_18044b280;

/** 
 * @brief 网格平滑函数
 * @details 对网格进行平滑处理
 */
uint8_t FUN_18044b3d0;

/** 
 * @brief 网格锐化函数
 * @details 对网格进行锐化处理
 */
uint8_t FUN_18044b4f0;

/** 
 * @brief 网格变形动画函数
 * @details 处理网格的变形动画
 */
uint8_t FUN_18044b580;

/** 
 * @brief 网格骨骼绑定函数
 * @details 将网格绑定到骨骼系统
 */
uint8_t FUN_18044b610;

/** 
 * @brief 网格蒙皮函数
 * @details 对网格进行蒙皮处理
 */
uint8_t FUN_18044b6e0;

/** 
 * @brief 网格顶点混合函数
 * @details 混合网格的顶点数据
 */
uint8_t FUN_18044b700;

/** 
 * @brief 网格实例渲染函数
 * @details 进行网格的实例化渲染
 */
uint8_t FUN_18044b7a0;

/** 
 * @brief 网格批处理函数
 * @details 批量处理多个网格的操作
 */
uint8_t FUN_18044b910;

/** 
 * @brief 网格流处理函数
 * @details 流式处理大型网格数据
 */
uint8_t FUN_18044baf0;

/** 
 * @brief 网格压缩函数
 * @details 压缩网格数据以节省内存
 */
uint8_t FUN_18044bc50;

/** 
 * @brief 网格解压函数
 * @details 解压压缩的网格数据
 */
uint8_t FUN_18044be30;


/*-----------------------------------------------------------------------------
 * 着色器程序管理函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 顶点着色器创建函数
 * @details 创建顶点着色器对象
 */
uint8_t FUN_18044c0d0;

/** 
 * @brief 片段着色器创建函数
 * @details 创建片段着色器对象
 */
uint8_t FUN_18044c190;

/** 
 * @brief 几何着色器创建函数
 * @details 创建几何着色器对象
 */
uint8_t FUN_18044c420;

/** 
 * @brief 计算着色器创建函数
 * @details 创建计算着色器对象
 */
uint8_t FUN_18044c840;

/** 
 * @brief 着色器编译函数
 * @details 编译着色器源代码
 */
uint8_t FUN_18044c9c0;

/** 
 * @brief 着色器链接函数
 * @details 链接着色器程序
 */
uint8_t FUN_18044cb80;

/** 
 * @brief 着色器程序创建函数
 * @details 创建着色器程序对象
 */
uint8_t FUN_18044cd30;

/** 
 * @brief 着色器附加函数
 * @details 将着色器附加到程序
 */
uint8_t FUN_18044ce10;

/** 
 * @brief 着色器程序验证函数
 * @details 验证着色器程序的有效性
 */
uint8_t FUN_18044cf20;

/** 
 * @brief 着色器程序激活函数
 * @details 激活着色器程序
 */
uint8_t FUN_18044d0b0;

/** 
 * @brief 着色器参数设置函数
 * @details 设置着色器程序的参数
 */
uint8_t FUN_18044d0f0;

/** 
 * @brief 着色器统一变量设置函数
 * @details 设置着色器程序的统一变量
 */
uint8_t FUN_18044d130;

/** 
 * @brief 着色器属性绑定函数
 * @details 绑定顶点属性到着色器
 */
uint8_t FUN_18044d2d0;

/** 
 * @brief 着色器纹理绑定函数
 * @details 绑定纹理到着色器
 */
uint8_t FUN_18044d340;

/** 
 * @brief 着色器缓冲区绑定函数
 * @details 绑定缓冲区到着色器
 */
uint8_t FUN_18044d450;

/** 
 * @brief 着色器程序释放函数
 * @details 释放着色器程序资源
 */
uint8_t FUN_18044d4f0;

/** 
 * @brief 着色器错误检查函数
 * @details 检查着色器编译和链接错误
 */
uint8_t FUN_18044d570;

/** 
 * @brief 着色器程序缓存函数
 * @details 缓存着色器程序以提高性能
 */
uint8_t FUN_18044d680;

/** 
 * @brief 着色器预编译函数
 * @details 预编译着色器程序
 */
uint8_t FUN_18044d910;

/** 
 * @brief 着色器热重载函数
 * @details 支持着色器的热重载
 */
uint8_t FUN_18044da90;

/** 
 * @brief 着色器变体生成函数
 * @details 生成着色器的不同变体
 */
uint8_t FUN_18044db70;

/** 
 * @brief 着色器条件编译函数
 * @details 根据条件编译着色器
 */
uint8_t FUN_18044dc10;

/** 
 * @brief 着色器包含处理函数
 * @details 处理着色器的包含文件
 */
uint8_t FUN_18044df40;

/** 
 * @brief 着色器宏定义函数
 * @details 定义着色器的宏
 */
uint8_t FUN_18044e000;

/** 
 * @brief 着色器字符串处理函数
 * @details 处理着色器字符串
 */
uint8_t FUN_18044e0d0;

/** 
 * @brief 着色器代码优化函数
 * @details 优化着色器代码
 */
uint8_t FUN_18044e180;

/** 
 * @brief 着色器程序查询函数
 * @details 查询着色器程序的信息
 */
uint8_t FUN_18044e2b0;

/** 
 * @brief 着色器反射函数
 * @details 获取着色器的反射信息
 */
uint8_t FUN_18044e3b0;

/** 
 * @brief 着色器调试函数
 * @details 调试着色器程序
 */
uint8_t FUN_18044e4f0;

/** 
 * @brief 着色器性能分析函数
 * @details 分析着色器的性能
 */
uint8_t FUN_18044e590;

/** 
 * @brief 着色器内存管理函数
 * @details 管理着色器的内存使用
 */
uint8_t FUN_18044e620;

/** 
 * @brief 着色器资源管理函数
 * @details 管理着色器的资源
 */
uint8_t FUN_18044e650;

/** 
 * @brief 着色器状态管理函数
 * @details 管理着色器的状态
 */
uint8_t FUN_18044e890;

/** 
 * @brief 着色器批量处理函数
 * @details 批量处理着色器操作
 */
uint8_t FUN_18044ead0;

/** 
 * @brief 着色器程序序列化函数
 * @details 序列化着色器程序
 */
uint8_t FUN_18044ed20;

/** 
 * @brief 着色器程序反序列化函数
 * @details 反序列化着色器程序
 */
uint8_t FUN_18044edc0;

/** 
 * @brief 着色器程序版本控制函数
 * @details 管理着色器程序的版本
 */
uint8_t FUN_18044efd0;

/** 
 * @brief 着色器程序依赖管理函数
 * @details 管理着色器程序的依赖关系
 */
uint8_t FUN_18044f210;

/** 
 * @brief 着色器程序配置函数
 * @details 配置着色器程序的参数
 */
uint8_t FUN_18044f370;

/** 
 * @brief 着色器程序初始化函数
 * @details 初始化着色器程序
 */
uint8_t FUN_18044f780;

/** 
 * @brief 着色器程序清理函数
 * @details 清理着色器程序资源
 */
uint8_t FUN_18044f880;

/** 
 * @brief 着色器程序重置函数
 * @details 重置着色器程序到初始状态
 */
uint8_t FUN_18044fa00;

/** 
 * @brief 着色器程序验证和优化函数
 * @details 验证并优化着色器程序
 */
uint8_t FUN_18044ffa0;


/*-----------------------------------------------------------------------------
 * 渲染目标和缓冲区管理函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 渲染目标创建函数
 * @details 创建渲染目标对象，用于离屏渲染
 */
uint8_t FUN_180450070;

/** 
 * @brief 渲染目标绑定函数
 * @details 绑定渲染目标到渲染管线
 */
uint8_t FUN_180450140;

/** 
 * @brief 渲染目标配置函数
 * @details 配置渲染目标的格式、大小等参数
 */
uint8_t FUN_1804501c0;

/** 
 * @brief 渲染目标纹理附加函数
 * @details 将纹理附加到渲染目标
 */
uint8_t FUN_1804502d0;

/** 
 * @brief 渲染目标深度缓冲区附加函数
 * @details 将深度缓冲区附加到渲染目标
 */
uint8_t FUN_180450360;

/** 
 * @brief 渲染目标多重采样设置函数
 * @details 设置渲染目标的多重采样参数
 */
uint8_t FUN_1804508a0;

/** 
 * @brief 渲染目标状态查询函数
 * @details 查询渲染目标的当前状态
 */
uint8_t FUN_1804509e0;

/** 
 * @brief 渲染目标有效性检查函数
 * @details 检查渲染目标是否完整有效
 */
uint8_t FUN_180450a20;

/** 
 * @brief 渲染目标分辨率设置函数
 * @details 设置渲染目标的分辨率
 */
uint8_t FUN_180450ba0;

/** 
 * @brief 渲染目标释放函数
 * @details 释放渲染目标资源
 */
uint8_t FUN_180450d90;

/** 
 * @brief 渲染目标拷贝函数
 * @details 拷贝渲染目标内容
 */
uint8_t FUN_1804510a0;

/** 
 * @brief 渲染目标清除函数
 * @details 清除渲染目标的内容
 */
uint8_t FUN_1804511e0;

/** 
 * @brief 渲染目标交换函数
 * @details 交换渲染目标的内容
 */
uint8_t FUN_1804512f0;

/** 
 * @brief 渲染目标批量处理函数
 * @details 批量处理多个渲染目标的操作
 */
uint8_t FUN_180451770;

/** 
 * @brief 渲染目标链管理函数
 * @details 管理渲染目标链
 */
uint8_t FUN_1804517c0;

/** 
 * @brief 渲染目标优先级设置函数
 * @details 设置渲染目标的优先级
 */
uint8_t FUN_180451890;

/** 
 * @brief 渲染目标依赖管理函数
 * @details 管理渲染目标之间的依赖关系
 */
uint8_t FUN_1804519d0;

/** 
 * @brief 渲染目标内存管理函数
 * @details 管理渲染目标的内存使用
 */
uint8_t FUN_180451bd0;

/** 
 * @brief 渲染目标性能监控函数
 * @details 监控渲染目标的性能
 */
uint8_t FUN_180451ca0;

/** 
 * @brief 渲染目标调试函数
 * @details 调试渲染目标的问题
 */
uint8_t FUN_180451d20;

/** 
 * @brief 渲染目标错误处理函数
 * @details 处理渲染目标的错误
 */
uint8_t FUN_180451da0;

/** 
 * @brief 渲染目标配置验证函数
 * @details 验证渲染目标的配置
 */
uint8_t FUN_180451e30;

/** 
 * @brief 渲染目标初始化函数
 * @details 初始化渲染目标
 */
uint8_t FUN_1804520a0;

/** 
 * @brief 渲染目标清理函数
 * @details 清理渲染目标资源
 */
uint8_t FUN_1804522d0;

/** 
 * @brief 渲染目标重置函数
 * @details 重置渲染目标到初始状态
 */
uint8_t FUN_180452500;

/** 
 * @brief 渲染目标同步函数
 * @details 同步渲染目标的操作
 */
uint8_t FUN_180452630;

/** 
 * @brief 渲染目标状态保存函数
 * @details 保存渲染目标的状态
 */
uint8_t FUN_180452f40;

/** 
 * @brief 渲染目标状态恢复函数
 * @details 恢复渲染目标的状态
 */
uint8_t FUN_180452fa0;

/** 
 * @brief 渲染目标序列化函数
 * @details 序列化渲染目标
 */
uint8_t FUN_1804530a0;

/** 
 * @brief 渲染目标反序列化函数
 * @details 反序列化渲染目标
 */
uint8_t FUN_180453140;

/** 
 * @brief 渲染目标版本控制函数
 * @details 管理渲染目标的版本
 */
uint8_t FUN_1804531d0;

/** 
 * @brief 渲染目标缓存函数
 * @details 缓存渲染目标以提高性能
 */
uint8_t FUN_180453300;

/** 
 * @brief 渲染目标预分配函数
 * @details 预分配渲染目标资源
 */
uint8_t FUN_1804534d0;

/** 
 * @brief 渲染目标延迟释放函数
 * @details 延迟释放渲染目标资源
 */
uint8_t FUN_180453580;

/** 
 * @brief 渲染目标引用计数函数
 * @details 管理渲染目标的引用计数
 */
uint8_t FUN_180453750;

/** 
 * @brief 渲染目标共享函数
 * @details 共享渲染目标资源
 */
uint8_t FUN_1804537b0;

/** 
 * @brief 渲染目标独占函数
 * @details 独占渲染目标资源
 */
uint8_t FUN_1804537e0;

/** 
 * @brief 渲染目标锁定函数
 * @details 锁定渲染目标以防止并发访问
 */
uint8_t FUN_180453810;

/** 
 * @brief 渲染目标解锁函数
 * @details 解锁渲染目标
 */
uint8_t FUN_180453860;

/** 
 * @brief 渲染目标等待函数
 * @details 等待渲染目标操作完成
 */
uint8_t FUN_1804538b0;

/** 
 * @brief 渲染目标超时处理函数
 * @details 处理渲染目标操作超时
 */
uint8_t FUN_1804539b0;

/** 
 * @brief 渲染目标优先级调整函数
 * @details 调整渲染目标的优先级
 */
uint8_t FUN_180453b60;

/** 
 * @brief 渲染目标资源回收函数
 * @details 回收渲染目标的资源
 */
uint8_t FUN_180453cb0;

/** 
 * @brief 渲染目标垃圾回收函数
 * @details 执行渲染目标的垃圾回收
 */
uint8_t FUN_180453d60;

/** 
 * @brief 渲染目标内存碎片整理函数
 * @details 整理渲染目标的内存碎片
 */
uint8_t FUN_180453de0;

/** 
 * @brief 渲染目标内存压缩函数
 * @details 压缩渲染目标的内存使用
 */
uint8_t FUN_180453e40;

/** 
 * @brief 渲染目标热重载函数
 * @details 支持渲染目标的热重载
 */
uint8_t FUN_180453f70;

/** 
 * @brief 渲染目标配置更新函数
 * @details 更新渲染目标的配置
 */
uint8_t FUN_180453f90;

/** 
 * @brief 渲染目标状态查询函数
 * @details 查询渲染目标的状态信息
 */
uint8_t FUN_180454070;

/** 
 * @brief 渲染目标性能分析函数
 * @details 分析渲染目标的性能
 */
uint8_t FUN_1804541a0;

/** 
 * @brief 渲染目标错误报告函数
 * @details 报告渲染目标的错误
 */
uint8_t FUN_180454230;

/** 
 * @brief 渲染目标统计信息函数
 * @details 收集渲染目标的统计信息
 */
uint8_t FUN_180454300;

/** 
 * @brief 渲染目标资源管理函数
 * @details 管理渲染目标的资源
 */
uint8_t FUN_1804543f0;


/*-----------------------------------------------------------------------------
 * 光照和阴影处理函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 光照系统初始化函数
 * @details 初始化光照系统的基本参数和状态
 */
uint8_t FUN_180454d00;


/** 
 * @brief 光照参数设置函数
 * @details 设置光照的强度、颜色、位置等参数
 */
uint8_t FUN_180454d80;


/** 
 * @brief 光照计算函数
 * @details 计算场景中的光照效果
 */
uint8_t FUN_180454ea0;


/** 
 * @brief 阴影映射生成函数
 * @details 生成阴影映射贴图
 */
uint8_t FUN_180454ff0;


/** 
 * @brief 阴影渲染函数
 * @details 渲染阴影效果
 */
uint8_t FUN_180455090;


/** 
 * @brief 环境光照计算函数
 * @details 计算环境光照效果
 */
uint8_t FUN_180455250;


/** 
 * @brief 漫反射光照计算函数
 * @details 计算漫反射光照效果
 */
uint8_t FUN_180455340;


/** 
 * @brief 镜面反射光照计算函数
 * @details 计算镜面反射光照效果
 */
uint8_t FUN_180455430;


/** 
 * @brief 光照衰减计算函数
 * @details 计算光照的衰减效果
 */
uint8_t FUN_1804555a0;


/** 
 * @brief 光照贴图烘焙函数
 * @details 烘焙光照贴图
 */
uint8_t FUN_1804557b0;


/** 
 * @brief 光照探针管理函数
 * @details 管理光照探针
 */
uint8_t FUN_180455980;


/** 
 * @brief 光照探针放置函数
 * @details 放置光照探针
 */
uint8_t FUN_1804559d0;


// 函数: uint8_t FUN_1804354c0;
uint8_t FUN_1804354c0;


// 函数: uint8_t FUN_1804355b0;
uint8_t FUN_1804355b0;


// 函数: uint8_t FUN_180435630;
uint8_t FUN_180435630;


// 函数: uint8_t FUN_180435690;
uint8_t FUN_180435690;


// 函数: uint8_t FUN_1804357a0;
uint8_t FUN_1804357a0;


// 函数: uint8_t FUN_180435860;
uint8_t FUN_180435860;


// 函数: uint8_t FUN_1804359d0;
uint8_t FUN_1804359d0;


// 函数: uint8_t FUN_180435a80;
uint8_t FUN_180435a80;


// 函数: uint8_t FUN_180435d10;
uint8_t FUN_180435d10;


// 函数: uint8_t FUN_180435e20;
uint8_t FUN_180435e20;


// 函数: uint8_t FUN_180435f40;
uint8_t FUN_180435f40;


// 函数: uint8_t FUN_180435f90;
uint8_t FUN_180435f90;


// 函数: uint8_t FUN_180435ff0;
uint8_t FUN_180435ff0;


// 函数: uint8_t FUN_180436030;
uint8_t FUN_180436030;


// 函数: uint8_t FUN_180436160;
uint8_t FUN_180436160;


// 函数: uint8_t FUN_1804362a0;
uint8_t FUN_1804362a0;


// 函数: uint8_t FUN_1804369d0;
uint8_t FUN_1804369d0;


// 函数: uint8_t FUN_180436a00;
uint8_t FUN_180436a00;


// 函数: uint8_t FUN_180436a50;
uint8_t FUN_180436a50;


// 函数: uint8_t FUN_180436ae0;
uint8_t FUN_180436ae0;


// 函数: uint8_t FUN_180436bb0;
uint8_t FUN_180436bb0;


// 函数: uint8_t FUN_180436bf0;
uint8_t FUN_180436bf0;


// 函数: uint8_t FUN_180436c30;
uint8_t FUN_180436c30;


// 函数: uint8_t FUN_180436d00;
uint8_t FUN_180436d00;


// 函数: uint8_t FUN_180436da0;
uint8_t FUN_180436da0;


// 函数: uint8_t FUN_180436f20;
uint8_t FUN_180436f20;


// 函数: uint8_t FUN_180436fd0;
uint8_t FUN_180436fd0;


// 函数: uint8_t FUN_180437050;
uint8_t FUN_180437050;


// 函数: uint8_t FUN_180437110;
uint8_t FUN_180437110;


// 函数: uint8_t FUN_180437290;
uint8_t FUN_180437290;


// 函数: uint8_t FUN_1804372e0;
uint8_t FUN_1804372e0;


// 函数: uint8_t FUN_180437320;
uint8_t FUN_180437320;


// 函数: uint8_t FUN_1804373a0;
uint8_t FUN_1804373a0;


// 函数: uint8_t FUN_180437460;
uint8_t FUN_180437460;


// 函数: uint8_t FUN_1804374c0;
uint8_t FUN_1804374c0;


// 函数: uint8_t FUN_180437560;
uint8_t FUN_180437560;


// 函数: uint8_t FUN_1804375f0;
uint8_t FUN_1804375f0;


// 函数: uint8_t FUN_180437680;
uint8_t FUN_180437680;


// 函数: uint8_t FUN_1804377b0;
uint8_t FUN_1804377b0;


// 函数: uint8_t FUN_1804378e0;
uint8_t FUN_1804378e0;


// 函数: uint8_t FUN_18031c260;
uint8_t FUN_18031c260;
uint8_t unknown_var_5440;


// 函数: uint8_t FUN_18031c300;
uint8_t FUN_18031c300;
uint8_t unknown_var_5464;
uint8_t unknown_var_5568;
uint8_t system_data_02a0;
int8_t system_data_aa6a;
uint8_t unknown_var_5528;
uint8_t unknown_var_5488;
uint8_t unknown_var_5600;
uint8_t unknown_var_5640;
uint8_t unknown_var_5680;
uint8_t unknown_var_5720;
uint8_t unknown_var_5792;
uint8_t unknown_var_5816;
uint8_t unknown_var_5872;
uint8_t system_data_d598;
uint8_t unknown_var_5760;
uint8_t unknown_var_5912;
uint8_t unknown_var_5944;
uint8_t unknown_var_5976;
uint8_t unknown_var_6008;
uint8_t unknown_var_6088;
uint8_t unknown_var_6144;
uint8_t unknown_var_6072;
uint8_t unknown_var_6040;
uint8_t unknown_var_984;
uint8_t unknown_var_6216;
uint8_t unknown_var_6264;
char system_data_aa6a;
uint8_t unknown_var_4240;
uint8_t unknown_var_6288;
uint8_t unknown_var_6312;
uint8_t unknown_var_6328;
uint8_t unknown_var_6408;
uint8_t unknown_var_6432;
uint8_t unknown_var_6584;


// 函数: uint8_t FUN_180317e00;
uint8_t FUN_180317e00;
uint8_t unknown_var_6384;
uint8_t unknown_var_6464;
uint8_t unknown_var_6344;
uint8_t unknown_var_7128;
uint8_t unknown_var_6984;
uint8_t unknown_var_6712;
uint8_t unknown_var_6744;
uint8_t unknown_var_6768;


// 函数: uint8_t FUN_18031ccb0;
uint8_t FUN_18031ccb0;
uint8_t unknown_var_6680;
uint8_t unknown_var_6840;


// 函数: uint8_t FUN_18031d520;
uint8_t FUN_18031d520;
uint8_t unknown_var_6816;
uint8_t unknown_var_6880;
uint8_t unknown_var_7272;
uint8_t unknown_var_8496;
uint8_t unknown_var_8368;
uint8_t unknown_var_8432;
uint8_t unknown_var_8240;
uint8_t unknown_var_8304;
uint8_t unknown_var_7352;
uint8_t unknown_var_7440;


// 函数: uint8_t FUN_1803216f0;
uint8_t FUN_1803216f0;
uint8_t unknown_var_7504;
uint8_t unknown_var_7568;


// 函数: uint8_t FUN_18033d370;
uint8_t FUN_18033d370;
uint8_t unknown_var_545;


// 函数: uint8_t FUN_180321570;
uint8_t FUN_180321570;
uint8_t unknown_var_7408;


// 函数: uint8_t FUN_18033d250;
uint8_t FUN_18033d250;
uint8_t unknown_var_7216;
uint8_t unknown_var_6192;
uint8_t unknown_var_7552;
uint8_t unknown_var_8168;


// 函数: uint8_t FUN_18033d080;
uint8_t FUN_18033d080;


// 函数: uint8_t FUN_18033d170;
uint8_t FUN_18033d170;
uint8_t unknown_var_6640;
uint8_t unknown_var_6880;
uint8_t unknown_var_7544;


// 函数: uint8_t FUN_18033ced0;
uint8_t FUN_18033ced0;
uint8_t unknown_var_6576;
uint8_t system_data_8e24;
uint8_t system_data_8e60;
uint8_t system_data_8e68;
uint8_t system_data_8e70;
uint8_t system_data_8e78;
uint8_t system_data_8eb8;
uint8_t system_data_8ec0;
uint8_t system_data_8ed0;
uint8_t system_data_8e30;
uint8_t unknown_var_7888;
uint64_t unknown_var_1128;
uint8_t system_data_17d8;
uint8_t unknown_var_7656;
uint8_t system_data_17c0;
uint8_t system_data_8e20;
uint8_t system_data_96d0;
uint8_t system_data_9730;
uint8_t system_data_9738;
uint8_t system_data_9740;
uint8_t system_data_9748;


// 函数: uint8_t FUN_18033cd80;
uint8_t FUN_18033cd80;
uint8_t unknown_var_5632;


// 函数: uint8_t FUN_18033cc90;
uint8_t FUN_18033cc90;
uint8_t unknown_var_8024;
uint8_t unknown_var_7880;
uint8_t unknown_var_7864;
uint8_t unknown_var_1488;
uint8_t unknown_var_1512;
uint8_t unknown_var_1536;
uint8_t unknown_var_1568;
uint8_t unknown_var_1592;
uint8_t unknown_var_1616;
uint8_t unknown_var_1640;
uint8_t unknown_var_1312;
uint8_t unknown_var_1336;
uint8_t unknown_var_1360;
uint8_t unknown_var_1384;
uint8_t unknown_var_1408;
uint8_t unknown_var_1456;
uint8_t unknown_var_40;
uint8_t unknown_var_72;
uint8_t unknown_var_640;
uint8_t unknown_var_1744;
uint8_t unknown_var_1856;
uint8_t unknown_var_1920;
uint8_t unknown_var_2672;
uint8_t unknown_var_2768;
uint8_t unknown_var_4544;
uint8_t unknown_var_4912;
uint8_t system_data_5f30;
uint8_t unknown_var_5328;
uint8_t system_data_cf38;
uint8_t system_data_cf50;
uint8_t unknown_var_5272;
uint8_t unknown_var_5504;
uint8_t unknown_var_5584;
uint8_t unknown_var_7560;
uint8_t system_data_d218;
uint8_t system_data_d220;
uint8_t system_data_d558;
uint8_t system_data_d570;
uint8_t system_data_d578;
uint8_t unknown_var_7792;
uint8_t unknown_var_7880;
uint8_t system_data_d880;
uint8_t system_data_d890;
uint8_t system_data_d8a0;
uint8_t system_data_d988;
uint8_t unknown_var_7712;
uint8_t system_data_db08;
uint8_t system_data_db20;
uint8_t system_data_db38;
uint8_t system_data_db48;
uint8_t system_data_db68;
uint8_t system_data_db80;
uint8_t system_data_db98;
uint8_t unknown_var_5280;
uint8_t unknown_var_5296;
uint8_t unknown_var_8392;
uint8_t unknown_var_8472;
uint8_t system_data_dd30;
uint8_t system_data_deb0;
uint8_t system_data_dec0;
uint8_t system_data_e1c8;
uint8_t system_data_e1d8;
uint8_t system_data_e1f0;
uint8_t system_data_e208;
uint8_t system_data_ecb8;
uint8_t system_data_e3a0;
uint8_t system_data_e388;
uint8_t system_data_e3b0;
uint8_t system_data_e3c0;
uint8_t system_data_e3e8;
uint8_t system_data_e3f8;
uint8_t system_data_e708;
uint8_t system_data_e718;
uint8_t system_data_e730;
uint8_t system_data_e748;
uint8_t system_data_e760;
uint8_t system_data_e770;
uint8_t system_data_e780;
uint8_t system_data_e798;
uint8_t system_data_6618;
uint8_t system_data_e938;
uint8_t system_data_ecc0;
uint8_t unknown_var_1864;
uint8_t unknown_var_3136;
uint8_t system_data_eb48;
uint8_t system_data_eb60;
uint8_t system_data_eb88;
uint8_t system_data_eba8;
uint8_t system_data_ec18;
uint8_t system_data_ec30;
uint8_t system_data_ec58;
uint8_t system_data_ec70;
uint8_t system_data_ec88;
uint8_t system_data_eca0;
uint8_t system_data_ecb8;
uint8_t system_data_ecf8;
uint8_t system_data_ed18;
uint8_t system_data_ed30;
uint8_t unknown_var_3000;
uint8_t unknown_var_3024;
uint8_t unknown_var_3048;
uint8_t system_data_eb78;
uint8_t system_data_eb98;
uint8_t system_data_ebd0;
uint8_t system_data_ebe8;
uint8_t system_data_ec00;
uint8_t system_data_ecd0;
uint8_t unknown_var_2984;
uint8_t unknown_var_3104;
uint8_t unknown_var_3072;
uint8_t unknown_var_3088;
uint8_t system_data_ef48;
uint8_t unknown_var_4032;
uint8_t unknown_var_3928;
uint8_t system_data_f0c8;
uint8_t system_data_f0d0;
uint8_t system_data_f0e0;
uint8_t system_data_f0e4;
uint8_t unknown_var_3699;
uint8_t unknown_var_4296;
uint8_t system_data_d7b0;
uint8_t system_data_64d8;
uint8_t unknown_var_4680;
uint8_t system_data_f3d0;
uint8_t unknown_var_5080;
uint8_t system_data_f550;
uint8_t system_data_f560;
uint8_t unknown_var_5608;


// 函数: uint8_t FUN_180360210;
uint8_t FUN_180360210;
uint8_t unknown_var_656;
uint8_t unknown_var_720;
uint8_t unknown_var_5440;
uint8_t unknown_var_5456;
uint8_t unknown_var_5560;
uint8_t unknown_var_5584;
uint8_t system_data_f740;
uint8_t system_data_f750;
uint8_t unknown_var_6104;
uint8_t system_data_f8f0;
uint8_t system_data_f8f8;
uint8_t system_data_f910;
uint8_t system_data_f920;
uint8_t system_data_f930;
uint8_t system_data_f940;
uint8_t system_data_f950;
uint8_t system_data_f960;
uint8_t unknown_var_6472;
uint8_t system_data_64c8;
uint8_t unknown_var_6864;
uint8_t system_data_fc50;
uint8_t system_data_fc58;
uint8_t unknown_var_7272;
uint8_t system_data_fdd8;
uint8_t system_data_fdf0;
uint8_t system_data_fdf8;
uint8_t system_data_ff70;
uint8_t system_data_ffa0;
uint8_t system_data_ffd8;
uint8_t system_data_ffe8;
uint8_t system_data_fff8;
uint8_t unknown_var_4048;
uint8_t unknown_var_8440;
uint8_t unknown_var_8240;
uint8_t unknown_var_8280;
uint8_t system_data_0198;
uint8_t system_data_0238;
uint8_t unknown_var_8360;
uint8_t unknown_var_8384;
uint8_t unknown_var_8408;
uint8_t system_data_01a8;
uint8_t system_data_01c0;
uint8_t unknown_var_8872;
uint8_t unknown_var_9656;
uint8_t unknown_var_7160;
uint8_t unknown_var_192;
uint8_t unknown_var_9240;
uint8_t unknown_var_9264;
uint8_t unknown_var_9304;
uint8_t unknown_var_9328;
uint8_t unknown_var_9352;
uint8_t unknown_var_9376;
uint8_t unknown_var_9408;
uint8_t unknown_var_9424;
uint8_t unknown_var_9448;
uint8_t unknown_var_9464;
uint8_t unknown_var_9488;
uint8_t unknown_var_9504;
uint8_t unknown_var_9528;
uint8_t unknown_var_9552;
uint8_t unknown_var_9624;
uint8_t unknown_var_9632;
uint8_t unknown_var_6496;
uint8_t unknown_var_9232;
uint8_t unknown_var_9288;
uint8_t unknown_var_9296;
uint8_t unknown_var_9600;
uint8_t unknown_var_9584;
uint8_t unknown_var_9640;
uint8_t unknown_var_560;
uint8_t unknown_var_1040;
uint8_t system_data_0c88;
uint8_t system_data_0c48;
uint8_t system_data_0c58;
uint8_t system_data_0c68;
uint8_t system_data_0c78;
uint8_t system_data_0c98;
uint8_t system_data_0ca8;
uint8_t system_data_1f50;
uint8_t system_data_1f48;
uint8_t unknown_var_1720;
char system_data_aa6b;
uint8_t system_data_0e58;
uint8_t unknown_var_1464;
uint8_t system_data_0e30;
uint8_t system_data_0e40;
uint8_t system_data_0e70;
uint8_t system_data_0e80;
uint8_t unknown_var_1379;
uint8_t system_data_0e48;
uint8_t unknown_var_1504;
uint8_t system_data_0f08;
uint8_t system_data_0f20;
uint8_t system_data_0f30;
uint8_t unknown_var_1680;
uint8_t unknown_var_2088;
uint8_t unknown_var_2456;
uint8_t unknown_var_2888;
uint8_t unknown_var_2816;
uint8_t unknown_var_2856;
uint8_t unknown_var_2832;
uint8_t unknown_var_3248;
uint8_t unknown_var_3448;
uint8_t system_data_02a0;


// 函数: uint8_t FUN_180380510;
uint8_t FUN_180380510;


// 函数: uint8_t FUN_1803805e0;
uint8_t FUN_1803805e0;
uint8_t unknown_var_2232;


// 函数: uint8_t FUN_180380430;
uint8_t FUN_180380430;


// 函数: uint8_t FUN_1803802e0;
uint8_t FUN_1803802e0;
uint8_t unknown_var_3792;
uint8_t unknown_var_3824;
uint8_t unknown_var_8576;


// 函数: uint8_t FUN_1803800d0;
uint8_t FUN_1803800d0;


// 函数: uint8_t FUN_180380200;
uint8_t FUN_180380200;
uint8_t unknown_var_1104;
uint8_t unknown_var_3856;
uint8_t unknown_var_2976;
uint8_t unknown_var_2980;
uint8_t unknown_var_4144;


// 函数: uint8_t FUN_18037ac70;
uint8_t FUN_18037ac70;


// 函数: uint8_t FUN_18037ad00;
uint8_t FUN_18037ad00;
uint8_t unknown_var_1024;
uint8_t unknown_var_1040;
uint8_t system_data_1838;
uint8_t system_data_1858;
uint8_t unknown_var_880;
uint8_t unknown_var_944;
uint8_t unknown_var_960;
uint8_t unknown_var_4048;
uint8_t unknown_var_4256;
uint8_t unknown_var_4280;
uint8_t unknown_var_4296;
uint8_t unknown_var_4312;
uint8_t unknown_var_4320;
uint8_t unknown_var_4336;
uint8_t unknown_var_4360;
uint8_t unknown_var_4376;
uint8_t unknown_var_864;
uint8_t unknown_var_880;
uint8_t unknown_var_4400;
uint8_t unknown_var_4420;
uint8_t unknown_var_4480;
uint8_t unknown_var_4496;
uint8_t unknown_var_4920;
uint8_t unknown_var_4448;
uint8_t unknown_var_8160;
uint8_t unknown_var_4432;
uint8_t unknown_var_4504;
uint8_t unknown_var_4520;
uint8_t unknown_var_4544;
uint8_t unknown_var_4560;
uint8_t unknown_var_4576;
uint8_t unknown_var_4600;
uint8_t unknown_var_4632;
uint8_t unknown_var_4656;
uint8_t unknown_var_4688;
uint8_t unknown_var_4712;
uint8_t unknown_var_4736;
uint8_t unknown_var_4768;
uint8_t unknown_var_4792;
uint8_t unknown_var_4808;
uint8_t unknown_var_4840;
uint8_t unknown_var_4864;
uint8_t unknown_var_4880;
uint8_t unknown_var_4592;
uint8_t unknown_var_4700;
uint8_t unknown_var_4784;
uint8_t unknown_var_4896;
uint8_t unknown_var_4992;


// 函数: uint8_t FUN_180388290;
uint8_t FUN_180388290;


// 函数: uint8_t FUN_180387ed0;
uint8_t FUN_180387ed0;


// 函数: uint8_t FUN_180388040;
uint8_t FUN_180388040;


// 函数: uint8_t FUN_180388120;
uint8_t FUN_180388120;
uint8_t unknown_var_4936;
uint8_t unknown_var_4968;
uint8_t unknown_var_5008;
uint8_t unknown_var_5040;
uint8_t unknown_var_9632;
uint8_t unknown_var_2796;


// 函数: uint8_t FUN_1803896b0;
uint8_t FUN_1803896b0;
uint8_t unknown_var_2480;
uint8_t unknown_var_2672;
uint8_t unknown_var_4272;


// 函数: uint8_t FUN_18038a340;
uint8_t FUN_18038a340;


// 函数: uint8_t FUN_18038a630;
uint8_t FUN_18038a630;
uint8_t unknown_var_5280;
uint8_t unknown_var_5304;
uint8_t unknown_var_5352;
uint8_t unknown_var_5392;
uint8_t unknown_var_5536;
uint8_t unknown_var_5784;
uint8_t unknown_var_5608;
uint8_t system_data_8ee8;
uint8_t system_data_8ee0;
uint8_t system_data_8ee4;
uint8_t unknown_var_4448;
uint8_t unknown_var_5872;
uint8_t unknown_var_5904;
uint8_t unknown_var_5920;
uint8_t unknown_var_5944;
uint8_t unknown_var_5968;
uint8_t unknown_var_5976;
uint8_t unknown_var_5992;
uint8_t unknown_var_6008;
uint8_t unknown_var_6032;
uint8_t unknown_var_6048;
uint8_t unknown_var_6080;
uint8_t unknown_var_6104;
uint8_t unknown_var_6120;
uint8_t unknown_var_6136;
uint8_t unknown_var_6168;
uint8_t unknown_var_6192;
uint8_t unknown_var_6224;
uint8_t unknown_var_6256;
uint8_t unknown_var_6280;
uint8_t unknown_var_6296;
uint8_t unknown_var_6320;
uint8_t unknown_var_6416;
uint8_t unknown_var_6352;
uint8_t unknown_var_6376;
uint8_t unknown_var_6400;
uint8_t unknown_var_6448;
uint8_t unknown_var_6472;
uint8_t unknown_var_6496;
uint8_t unknown_var_6520;
uint8_t unknown_var_6544;
uint8_t unknown_var_6584;
uint8_t unknown_var_6624;
uint8_t unknown_var_6664;
uint8_t unknown_var_6808;
uint8_t unknown_var_6840;
uint8_t unknown_var_6704;
uint8_t unknown_var_6796;
uint8_t unknown_var_6864;
uint8_t unknown_var_6884;
uint8_t unknown_var_6888;
uint8_t unknown_var_6892;
uint8_t unknown_var_6904;
uint8_t unknown_var_6936;
uint8_t unknown_var_6960;
uint8_t unknown_var_6992;
uint8_t unknown_var_7016;
uint8_t unknown_var_7032;
uint8_t unknown_var_7048;
uint8_t unknown_var_7072;
uint8_t unknown_var_7100;
uint8_t unknown_var_7112;
uint8_t unknown_var_7136;
uint8_t unknown_var_7152;
uint8_t unknown_var_4456;
uint8_t unknown_var_4036;
uint8_t unknown_var_3896;
uint8_t unknown_var_7176;
uint8_t unknown_var_7912;
uint8_t unknown_var_7944;
uint8_t unknown_var_8008;
uint8_t unknown_var_8048;
uint8_t unknown_var_8072;
uint8_t unknown_var_7976;
uint8_t unknown_var_8128;
uint8_t unknown_var_8176;
uint8_t unknown_var_8216;
uint8_t unknown_var_8104;
uint8_t unknown_var_8344;
uint8_t unknown_var_8704;
uint8_t unknown_var_8680;
uint8_t unknown_var_8720;
uint8_t unknown_var_8744;
uint8_t unknown_var_8768;
uint8_t unknown_var_8800;
uint8_t unknown_var_8824;
uint8_t unknown_var_5416;
uint8_t unknown_var_5512;


// 函数: uint8_t FUN_1804069d0;
uint8_t FUN_1804069d0;
uint8_t system_data_1fe0;
uint8_t system_data_1fe8;


// 函数: uint8_t FUN_180407960;
uint8_t FUN_180407960;
uint8_t unknown_var_3584;
uint8_t unknown_var_6880;
uint8_t unknown_var_6992;
uint8_t unknown_var_7136;
uint8_t unknown_var_7160;
uint8_t unknown_var_7176;
uint8_t unknown_var_7240;
uint8_t unknown_var_1648;
uint8_t unknown_var_7008;
uint8_t unknown_var_7016;
uint8_t unknown_var_7048;
uint8_t unknown_var_7080;
uint8_t unknown_var_7272;
uint8_t unknown_var_7296;
uint8_t unknown_var_7312;
uint8_t unknown_var_7328;
uint8_t unknown_var_7360;
uint8_t unknown_var_7376;
uint8_t unknown_var_7392;
uint8_t unknown_var_7472;
uint8_t unknown_var_7560;
uint8_t unknown_var_7600;
uint8_t unknown_var_7672;
uint8_t unknown_var_7696;
uint8_t unknown_var_7824;
uint8_t unknown_var_7840;
uint8_t unknown_var_7888;
uint8_t unknown_var_7936;
uint8_t unknown_var_8112;
uint8_t unknown_var_8008;
uint8_t unknown_var_8016;
uint8_t unknown_var_8024;
uint8_t unknown_var_8032;
uint8_t unknown_var_8044;
uint8_t unknown_var_8052;
uint8_t unknown_var_8060;
uint8_t unknown_var_8068;
uint8_t unknown_var_8076;
uint8_t unknown_var_8084;
uint8_t unknown_var_8096;
int8_t system_data_aee8;
uint8_t system_data_aeb0;
uint8_t unknown_var_3880;
uint8_t unknown_var_3896;
int8_t system_data_aeb8;
uint8_t unknown_var_8888;
uint8_t unknown_var_8920;
uint8_t unknown_var_8232;
uint8_t unknown_var_8256;
uint8_t unknown_var_8376;
uint8_t system_data_39c8;
uint8_t unknown_var_6704;
uint8_t unknown_var_8320;
uint8_t unknown_var_9128;
uint8_t unknown_var_6768;
uint8_t unknown_var_9184;
uint8_t unknown_var_9328;
uint8_t unknown_var_3072;


// 函数: uint8_t FUN_180415730;
uint8_t FUN_180415730;
uint8_t unknown_var_9360;
uint8_t unknown_var_2244;
uint8_t unknown_var_9512;
uint8_t unknown_var_7152;
uint8_t unknown_var_9392;
uint8_t unknown_var_9416;
uint8_t unknown_var_9440;


// 函数: uint8_t FUN_18041b4d0;
uint8_t FUN_18041b4d0;
uint8_t unknown_var_9464;
uint8_t unknown_var_9560;
uint8_t unknown_var_9104;
uint8_t unknown_var_9232;
uint8_t unknown_var_7700;
uint8_t unknown_var_8468;
uint8_t unknown_var_8472;
uint8_t unknown_var_9736;
uint8_t unknown_var_1504;
uint8_t unknown_var_1584;
uint8_t unknown_var_1648;
uint8_t system_data_06e0;
uint8_t system_data_f940;
uint8_t system_data_06c0;
uint8_t system_data_f950;
uint8_t system_data_06d0;
uint8_t system_data_f970;
uint8_t system_data_0700;
uint8_t system_data_f960;
uint8_t unknown_var_6260;
uint8_t unknown_var_6308;
uint8_t unknown_var_6256;



