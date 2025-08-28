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
undefined FUN_1804475e0;
undefined UNK_180454370;


/** 
 * @brief 渲染设备配置函数
 * @details 负责配置渲染设备的各项参数和状态
 */
undefined FUN_180447660;
undefined UNK_1804543a0;

/** 
 * @brief 渲染上下文创建函数
 * @details 创建和管理渲染上下文，为渲染操作提供必要的环境
 */
undefined FUN_180447710;
undefined UNK_180454ce0;

/** 
 * @brief 渲染状态初始化函数
 * @details 初始化渲染状态机，设置默认的渲染状态
 */
undefined FUN_1804477f0;
undefined UNK_180454d60;

/** 
 * @brief 渲染管线设置函数
 * @details 配置渲染管线的各个阶段和参数
 */
undefined FUN_180447850;
undefined UNK_180454e80;

/** 
 * @brief 渲染参数验证函数
 * @details 验证渲染参数的有效性和兼容性
 */
undefined FUN_180447990;
undefined UNK_180455060;

/** 
 * @brief 渲染资源初始化函数
 * @details 初始化渲染所需的各类资源，如缓冲区、纹理等
 */
undefined FUN_180447b80;
undefined UNK_180455780;

/** 
 * @brief 渲染管线重置函数
 * @details 重置渲染管线到初始状态
 */
undefined FUN_180447c00;
undefined UNK_180455820;

/** 
 * @brief 渲染状态切换函数
 * @details 在不同的渲染状态之间进行切换
 */
undefined FUN_180447ca0;
undefined UNK_180455880;

/** 
 * @brief 渲染缓冲区管理函数
 * @details 管理渲染缓冲区的创建、绑定和释放
 */
undefined FUN_180447d40;
undefined UNK_1804558c0;

/** 
 * @brief 渲染目标设置函数
 * @details 设置渲染目标及其相关参数
 */
undefined FUN_180447de0;
undefined UNK_180455900;

/** 
 * @brief 渲染视口配置函数
 * @details 配置渲染视口的大小、位置和参数
 */
undefined FUN_180447e10;
undefined UNK_180455920;

/** 
 * @brief 渲染裁剪设置函数
 * @details 设置渲染裁剪区域和参数
 */
undefined FUN_180447e40;
undefined UNK_180455930;

/** 
 * @brief 渲染深度测试函数
 * @details 配置和管理深度测试相关的参数
 */
undefined FUN_180447f70;
undefined UNK_180455940;

/** 
 * @brief 渲染混合模式函数
 * @details 配置和管理颜色混合模式
 */
undefined FUN_180448110;
undefined UNK_180455960;


/*-----------------------------------------------------------------------------
 * 纹理和材质处理函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 纹理创建函数
 * @details 创建新的纹理对象，设置纹理参数
 */
undefined FUN_180448420;

/** 
 * @brief 纹理绑定函数
 * @details 将纹理绑定到指定的纹理单元
 */
undefined FUN_180448470;

/** 
 * @brief 纹理参数设置函数
 * @details 设置纹理的过滤、包裹等参数
 */
undefined FUN_1804484c0;

/** 
 * @brief 纹理数据更新函数
 * @details 更新纹理的像素数据
 */
undefined FUN_180448540;

/** 
 * @brief 纹理释放函数
 * @details 释放纹理资源，清理内存
 */
undefined FUN_1804485c0;

/** 
 * @brief 材质创建函数
 * @details 创建新的材质对象，设置材质属性
 */
undefined FUN_1804489a0;

/** 
 * @brief 材质参数设置函数
 * @details 设置材质的各种参数，如颜色、光泽度等
 */
undefined FUN_180448d90;

/** 
 * @brief 材质着色器绑定函数
 * @details 将着色器程序绑定到材质
 */
undefined FUN_180448df0;

/** 
 * @brief 材质纹理绑定函数
 * @details 将纹理绑定到材质的指定槽位
 */
undefined FUN_180448e50;

/** 
 * @brief 材质参数更新函数
 * @details 更新材质的参数值
 */
undefined FUN_180448ea0;

/** 
 * @brief 材质激活函数
 * @details 激活材质，使其可用于渲染
 */
undefined FUN_180448f00;

/** 
 * @brief 材质验证函数
 * @details 验证材质的完整性和有效性
 */
undefined FUN_180448f50;

/** 
 * @brief 材质克隆函数
 * @details 克隆现有材质，创建副本
 */
undefined FUN_180448fb0;

/** 
 * @brief 材质释放函数
 * @details 释放材质资源，清理内存
 */
undefined FUN_180449000;

/** 
 * @brief 材质缓存管理函数
 * @details 管理材质缓存，提高材质访问效率
 */
undefined FUN_180449070;

/** 
 * @brief 材质批量处理函数
 * @details 批量处理多个材质的操作
 */
undefined FUN_1804491c0;

/** 
 * @brief 材质状态查询函数
 * @details 查询材质的当前状态
 */
undefined FUN_180449230;

/** 
 * @brief 材质错误处理函数
 * @details 处理材质相关的错误和异常
 */
undefined FUN_180449300;


/*-----------------------------------------------------------------------------
 * 几何体和网格操作函数组
 *---------------------------------------------------------------------------*/

/** 
 * @brief 网格创建函数
 * @details 创建新的网格对象，设置网格属性
 */
undefined FUN_1804496f0;

/** 
 * @brief 网格顶点数据设置函数
 * @details 设置网格的顶点数据，包括位置、法线、UV等
 */
undefined FUN_180449780;

/** 
 * @brief 网格索引数据设置函数
 * @details 设置网格的索引数据，定义顶点连接关系
 */
undefined FUN_180449850;

/** 
 * @brief 网格属性计算函数
 * @details 计算网格的各种属性，如边界框、法线等
 */
undefined FUN_1804498f0;

/** 
 * @brief 网格优化函数
 * @details 优化网格结构，提高渲染性能
 */
undefined FUN_180449930;

/** 
 * @brief 网格细分函数
 * @details 对网格进行细分，增加顶点数量
 */
undefined FUN_180449a00;

/** 
 * @brief 网格简化函数
 * @details 简化网格结构，减少顶点数量
 */
undefined FUN_180449a80;

/** 
 * @brief 网格变形函数
 * @details 对网格进行变形操作
 */
undefined FUN_180449c00;

/** 
 * @brief 网格合并函数
 * @details 合并多个网格为一个网格
 */
undefined FUN_180449d70;

/** 
 * @brief 网格分割函数
 * @details 将一个网格分割为多个网格
 */
undefined FUN_18044a080;

/** 
 * @brief 网格验证函数
 * @details 验证网格的完整性和有效性
 */
undefined FUN_18044a3a0;

/** 
 * @brief 网格克隆函数
 * @details 克隆现有网格，创建副本
 */
undefined FUN_18044a590;

/** 
 * @brief 网格实例化函数
 * @details 创建网格的实例，支持实例化渲染
 */
undefined FUN_18044a810;

/** 
 * @brief 网格LOD生成函数
 * @details 生成网格的多级细节(LOD)版本
 */
undefined FUN_18044aad0;

/** 
 * @brief 网格碰撞检测函数
 * @details 进行网格的碰撞检测
 */
undefined FUN_18044ab80;

/** 
 * @brief 网格射线检测函数
 * @details 进行网格的射线相交检测
 */
undefined FUN_18044ac20;

/** 
 * @brief 网格包围盒计算函数
 * @details 计算网格的包围盒
 */
undefined FUN_18044ad90;

/** 
 * @brief 网格包围球计算函数
 * @details 计算网格的包围球
 */
undefined FUN_18044af00;

/** 
 * @brief 网格凸包生成函数
 * @details 生成网格的凸包
 */
undefined FUN_18044afb0;

/** 
 * @brief 网格法线计算函数
 * @details 计算网格的法线信息
 */
undefined FUN_18044b010;

/** 
 * @brief 网格切线计算函数
 * @details 计算网格的切线信息
 */
undefined FUN_18044b080;

/** 
 * @brief 网格UV生成函数
 * @details 生成网格的UV坐标
 */
undefined FUN_18044b110;

/** 
 * @brief 网格UV展开函数
 * @details 展开网格的UV坐标
 */
undefined FUN_18044b1d0;

/** 
 * @brief 网格拓扑修复函数
 * @details 修复网格的拓扑问题
 */
undefined FUN_18044b280;

/** 
 * @brief 网格平滑函数
 * @details 对网格进行平滑处理
 */
undefined FUN_18044b3d0;

/** 
 * @brief 网格锐化函数
 * @details 对网格进行锐化处理
 */
undefined FUN_18044b4f0;

/** 
 * @brief 网格变形动画函数
 * @details 处理网格的变形动画
 */
undefined FUN_18044b580;

/** 
 * @brief 网格骨骼绑定函数
 * @details 将网格绑定到骨骼系统
 */
undefined FUN_18044b610;

/** 
 * @brief 网格蒙皮函数
 * @details 对网格进行蒙皮处理
 */
undefined FUN_18044b6e0;

/** 
 * @brief 网格顶点混合函数
 * @details 混合网格的顶点数据
 */
undefined FUN_18044b700;

/** 
 * @brief 网格实例渲染函数
 * @details 进行网格的实例化渲染
 */
undefined FUN_18044b7a0;

/** 
 * @brief 网格批处理函数
 * @details 批量处理多个网格的操作
 */
undefined FUN_18044b910;

/** 
 * @brief 网格流处理函数
 * @details 流式处理大型网格数据
 */
undefined FUN_18044baf0;

/** 
 * @brief 网格压缩函数
 * @details 压缩网格数据以节省内存
 */
undefined FUN_18044bc50;

/** 
 * @brief 网格解压函数
 * @details 解压压缩的网格数据
 */
undefined FUN_18044be30;


// 函数: undefined FUN_18044c0d0;
undefined FUN_18044c0d0;


// 函数: undefined FUN_18044c190;
undefined FUN_18044c190;


// 函数: undefined FUN_18044c420;
undefined FUN_18044c420;


// 函数: undefined FUN_18044c840;
undefined FUN_18044c840;


// 函数: undefined FUN_18044c9c0;
undefined FUN_18044c9c0;


// 函数: undefined FUN_18044cb80;
undefined FUN_18044cb80;


// 函数: undefined FUN_18044cd30;
undefined FUN_18044cd30;


// 函数: undefined FUN_18044ce10;
undefined FUN_18044ce10;


// 函数: undefined FUN_18044cf20;
undefined FUN_18044cf20;


// 函数: undefined FUN_18044d0b0;
undefined FUN_18044d0b0;


// 函数: undefined FUN_18044d0f0;
undefined FUN_18044d0f0;


// 函数: undefined FUN_18044d130;
undefined FUN_18044d130;


// 函数: undefined FUN_18044d2d0;
undefined FUN_18044d2d0;


// 函数: undefined FUN_18044d340;
undefined FUN_18044d340;


// 函数: undefined FUN_18044d450;
undefined FUN_18044d450;


// 函数: undefined FUN_18044d4f0;
undefined FUN_18044d4f0;


// 函数: undefined FUN_18044d570;
undefined FUN_18044d570;


// 函数: undefined FUN_18044d680;
undefined FUN_18044d680;


// 函数: undefined FUN_18044d910;
undefined FUN_18044d910;


// 函数: undefined FUN_18044da90;
undefined FUN_18044da90;


// 函数: undefined FUN_18044db70;
undefined FUN_18044db70;


// 函数: undefined FUN_18044dc10;
undefined FUN_18044dc10;


// 函数: undefined FUN_18044df40;
undefined FUN_18044df40;


// 函数: undefined FUN_18044e000;
undefined FUN_18044e000;


// 函数: undefined FUN_18044e0d0;
undefined FUN_18044e0d0;


// 函数: undefined FUN_18044e180;
undefined FUN_18044e180;


// 函数: undefined FUN_18044e2b0;
undefined FUN_18044e2b0;


// 函数: undefined FUN_18044e3b0;
undefined FUN_18044e3b0;


// 函数: undefined FUN_18044e4f0;
undefined FUN_18044e4f0;


// 函数: undefined FUN_18044e590;
undefined FUN_18044e590;


// 函数: undefined FUN_18044e620;
undefined FUN_18044e620;


// 函数: undefined FUN_18044e650;
undefined FUN_18044e650;


// 函数: undefined FUN_18044e890;
undefined FUN_18044e890;


// 函数: undefined FUN_18044ead0;
undefined FUN_18044ead0;


// 函数: undefined FUN_18044ed20;
undefined FUN_18044ed20;


// 函数: undefined FUN_18044edc0;
undefined FUN_18044edc0;


// 函数: undefined FUN_18044efd0;
undefined FUN_18044efd0;


// 函数: undefined FUN_18044f210;
undefined FUN_18044f210;


// 函数: undefined FUN_18044f370;
undefined FUN_18044f370;


// 函数: undefined FUN_18044f780;
undefined FUN_18044f780;


// 函数: undefined FUN_18044f880;
undefined FUN_18044f880;


// 函数: undefined FUN_18044fa00;
undefined FUN_18044fa00;


// 函数: undefined FUN_18044ffa0;
undefined FUN_18044ffa0;


// 函数: undefined FUN_180450070;
undefined FUN_180450070;


// 函数: undefined FUN_180450140;
undefined FUN_180450140;


// 函数: undefined FUN_1804501c0;
undefined FUN_1804501c0;


// 函数: undefined FUN_1804502d0;
undefined FUN_1804502d0;


// 函数: undefined FUN_180450360;
undefined FUN_180450360;


// 函数: undefined FUN_1804508a0;
undefined FUN_1804508a0;


// 函数: undefined FUN_1804509e0;
undefined FUN_1804509e0;


// 函数: undefined FUN_180450a20;
undefined FUN_180450a20;


// 函数: undefined FUN_180450ba0;
undefined FUN_180450ba0;


// 函数: undefined FUN_180450d90;
undefined FUN_180450d90;


// 函数: undefined FUN_1804510a0;
undefined FUN_1804510a0;


// 函数: undefined FUN_1804511e0;
undefined FUN_1804511e0;


// 函数: undefined FUN_1804512f0;
undefined FUN_1804512f0;


// 函数: undefined FUN_180451770;
undefined FUN_180451770;


// 函数: undefined FUN_1804517c0;
undefined FUN_1804517c0;


// 函数: undefined FUN_180451890;
undefined FUN_180451890;


// 函数: undefined FUN_1804519d0;
undefined FUN_1804519d0;


// 函数: undefined FUN_180451bd0;
undefined FUN_180451bd0;


// 函数: undefined FUN_180451ca0;
undefined FUN_180451ca0;


// 函数: undefined FUN_180451d20;
undefined FUN_180451d20;


// 函数: undefined FUN_180451da0;
undefined FUN_180451da0;


// 函数: undefined FUN_180451e30;
undefined FUN_180451e30;


// 函数: undefined FUN_1804520a0;
undefined FUN_1804520a0;


// 函数: undefined FUN_1804522d0;
undefined FUN_1804522d0;


// 函数: undefined FUN_180452500;
undefined FUN_180452500;


// 函数: undefined FUN_180452630;
undefined FUN_180452630;


// 函数: undefined FUN_180452f40;
undefined FUN_180452f40;


// 函数: undefined FUN_180452fa0;
undefined FUN_180452fa0;


// 函数: undefined FUN_1804530a0;
undefined FUN_1804530a0;


// 函数: undefined FUN_180453140;
undefined FUN_180453140;


// 函数: undefined FUN_1804531d0;
undefined FUN_1804531d0;


// 函数: undefined FUN_180453300;
undefined FUN_180453300;


// 函数: undefined FUN_1804534d0;
undefined FUN_1804534d0;


// 函数: undefined FUN_180453580;
undefined FUN_180453580;


// 函数: undefined FUN_180453750;
undefined FUN_180453750;


// 函数: undefined FUN_1804537b0;
undefined FUN_1804537b0;


// 函数: undefined FUN_1804537e0;
undefined FUN_1804537e0;


// 函数: undefined FUN_180453810;
undefined FUN_180453810;


// 函数: undefined FUN_180453860;
undefined FUN_180453860;


// 函数: undefined FUN_1804538b0;
undefined FUN_1804538b0;


// 函数: undefined FUN_1804539b0;
undefined FUN_1804539b0;


// 函数: undefined FUN_180453b60;
undefined FUN_180453b60;


// 函数: undefined FUN_180453cb0;
undefined FUN_180453cb0;


// 函数: undefined FUN_180453d60;
undefined FUN_180453d60;


// 函数: undefined FUN_180453de0;
undefined FUN_180453de0;


// 函数: undefined FUN_180453e40;
undefined FUN_180453e40;


// 函数: undefined FUN_180453f70;
undefined FUN_180453f70;


// 函数: undefined FUN_180453f90;
undefined FUN_180453f90;


// 函数: undefined FUN_180454070;
undefined FUN_180454070;


// 函数: undefined FUN_1804541a0;
undefined FUN_1804541a0;


// 函数: undefined FUN_180454230;
undefined FUN_180454230;


// 函数: undefined FUN_180454300;
undefined FUN_180454300;


// 函数: undefined FUN_1804543f0;
undefined FUN_1804543f0;


// 函数: undefined FUN_180454d00;
undefined FUN_180454d00;


// 函数: undefined FUN_180454d80;
undefined FUN_180454d80;


// 函数: undefined FUN_180454ea0;
undefined FUN_180454ea0;


// 函数: undefined FUN_180454ff0;
undefined FUN_180454ff0;


// 函数: undefined FUN_180455090;
undefined FUN_180455090;


// 函数: undefined FUN_180455250;
undefined FUN_180455250;


// 函数: undefined FUN_180455340;
undefined FUN_180455340;


// 函数: undefined FUN_180455430;
undefined FUN_180455430;


// 函数: undefined FUN_1804555a0;
undefined FUN_1804555a0;


// 函数: undefined FUN_1804557b0;
undefined FUN_1804557b0;


// 函数: undefined FUN_180455980;
undefined FUN_180455980;


// 函数: undefined FUN_1804559d0;
undefined FUN_1804559d0;


// 函数: undefined FUN_1804354c0;
undefined FUN_1804354c0;


// 函数: undefined FUN_1804355b0;
undefined FUN_1804355b0;


// 函数: undefined FUN_180435630;
undefined FUN_180435630;


// 函数: undefined FUN_180435690;
undefined FUN_180435690;


// 函数: undefined FUN_1804357a0;
undefined FUN_1804357a0;


// 函数: undefined FUN_180435860;
undefined FUN_180435860;


// 函数: undefined FUN_1804359d0;
undefined FUN_1804359d0;


// 函数: undefined FUN_180435a80;
undefined FUN_180435a80;


// 函数: undefined FUN_180435d10;
undefined FUN_180435d10;


// 函数: undefined FUN_180435e20;
undefined FUN_180435e20;


// 函数: undefined FUN_180435f40;
undefined FUN_180435f40;


// 函数: undefined FUN_180435f90;
undefined FUN_180435f90;


// 函数: undefined FUN_180435ff0;
undefined FUN_180435ff0;


// 函数: undefined FUN_180436030;
undefined FUN_180436030;


// 函数: undefined FUN_180436160;
undefined FUN_180436160;


// 函数: undefined FUN_1804362a0;
undefined FUN_1804362a0;


// 函数: undefined FUN_1804369d0;
undefined FUN_1804369d0;


// 函数: undefined FUN_180436a00;
undefined FUN_180436a00;


// 函数: undefined FUN_180436a50;
undefined FUN_180436a50;


// 函数: undefined FUN_180436ae0;
undefined FUN_180436ae0;


// 函数: undefined FUN_180436bb0;
undefined FUN_180436bb0;


// 函数: undefined FUN_180436bf0;
undefined FUN_180436bf0;


// 函数: undefined FUN_180436c30;
undefined FUN_180436c30;


// 函数: undefined FUN_180436d00;
undefined FUN_180436d00;


// 函数: undefined FUN_180436da0;
undefined FUN_180436da0;


// 函数: undefined FUN_180436f20;
undefined FUN_180436f20;


// 函数: undefined FUN_180436fd0;
undefined FUN_180436fd0;


// 函数: undefined FUN_180437050;
undefined FUN_180437050;


// 函数: undefined FUN_180437110;
undefined FUN_180437110;


// 函数: undefined FUN_180437290;
undefined FUN_180437290;


// 函数: undefined FUN_1804372e0;
undefined FUN_1804372e0;


// 函数: undefined FUN_180437320;
undefined FUN_180437320;


// 函数: undefined FUN_1804373a0;
undefined FUN_1804373a0;


// 函数: undefined FUN_180437460;
undefined FUN_180437460;


// 函数: undefined FUN_1804374c0;
undefined FUN_1804374c0;


// 函数: undefined FUN_180437560;
undefined FUN_180437560;


// 函数: undefined FUN_1804375f0;
undefined FUN_1804375f0;


// 函数: undefined FUN_180437680;
undefined FUN_180437680;


// 函数: undefined FUN_1804377b0;
undefined FUN_1804377b0;


// 函数: undefined FUN_1804378e0;
undefined FUN_1804378e0;


// 函数: undefined FUN_18031c260;
undefined FUN_18031c260;
undefined UNK_180a1a8c0;


// 函数: undefined FUN_18031c300;
undefined FUN_18031c300;
undefined UNK_180a1a8d8;
undefined UNK_180a1a940;
undefined DAT_180bf02a0;
undefined1 DAT_180c8aa6a;
undefined UNK_180a1a918;
undefined UNK_180a1a8f0;
undefined UNK_180a1a960;
undefined UNK_180a1a988;
undefined UNK_180a1a9b0;
undefined UNK_180a1a9d8;
undefined UNK_180a1aa20;
undefined UNK_180a1aa38;
undefined UNK_180a1aa70;
undefined DAT_180a0d598;
undefined UNK_180a1aa00;
undefined UNK_180a1aa98;
undefined UNK_180a1aab8;
undefined UNK_180a1aad8;
undefined UNK_180a1aaf8;
undefined UNK_180a1ab48;
undefined UNK_180a1ab80;
undefined UNK_180a1ab38;
undefined UNK_180a1ab18;
undefined UNK_180a0d408;
undefined UNK_180a1abc8;
undefined UNK_180a1abf8;
char DAT_180c8aa6a;
undefined UNK_180317d20;
undefined UNK_180a1ac10;
undefined UNK_180a1ac28;
undefined UNK_180a1ac38;
undefined UNK_180a1ac88;
undefined UNK_180a1aca0;
undefined UNK_180a1ad38;


// 函数: undefined FUN_180317e00;
undefined FUN_180317e00;
undefined UNK_180a1ac70;
undefined UNK_180a1acc0;
undefined UNK_180a1ac48;
undefined UNK_180a1af58;
undefined UNK_180a1aec8;
undefined UNK_180a1adb8;
undefined UNK_180a1add8;
undefined UNK_180a1adf0;


// 函数: undefined FUN_18031ccb0;
undefined FUN_18031ccb0;
undefined UNK_180a1ad98;
undefined UNK_180a1ae38;


// 函数: undefined FUN_18031d520;
undefined FUN_18031d520;
undefined UNK_180a1ae20;
undefined UNK_180a1ae60;
undefined UNK_180a1afe8;
undefined UNK_180a1b4b0;
undefined UNK_180a1b430;
undefined UNK_180a1b470;
undefined UNK_180a1b3b0;
undefined UNK_180a1b3f0;
undefined UNK_180a1b038;
undefined UNK_180a1b090;


// 函数: undefined FUN_1803216f0;
undefined FUN_1803216f0;
undefined UNK_18033d3d0;
undefined UNK_18033d410;


// 函数: undefined FUN_18033d370;
undefined FUN_18033d370;
undefined UNK_18098bc01;


// 函数: undefined FUN_180321570;
undefined FUN_180321570;
undefined UNK_180a1b070;


// 函数: undefined FUN_18033d250;
undefined FUN_18033d250;
undefined UNK_18033d2b0;
undefined UNK_180a09a40;
undefined UNK_180a1b100;
undefined UNK_180a1b368;


// 函数: undefined FUN_18033d080;
undefined FUN_18033d080;


// 函数: undefined FUN_18033d170;
undefined FUN_18033d170;
undefined UNK_18033d070;
undefined UNK_18033d160;
undefined UNK_180a1b0f8;


// 函数: undefined FUN_18033ced0;
undefined FUN_18033ced0;
undefined UNK_18033d030;
undefined DAT_180d48e24;
undefined DAT_180d48e60;
undefined DAT_180d48e68;
undefined DAT_180d48e70;
undefined DAT_180d48e78;
undefined DAT_180d48eb8;
undefined DAT_180d48ec0;
undefined DAT_180d48ed0;
undefined DAT_180d48e30;
undefined UNK_180941dc0;
undefined8 UNK_180d48ec8;
undefined DAT_180c917d8;
undefined UNK_180a1b168;
undefined DAT_180c917c0;
undefined DAT_180d48e20;
undefined DAT_180d496d0;
undefined DAT_180d49730;
undefined DAT_180d49738;
undefined DAT_180d49740;
undefined DAT_180d49748;


// 函数: undefined FUN_18033cd80;
undefined FUN_18033cd80;
undefined UNK_18033cc80;


// 函数: undefined FUN_18033cc90;
undefined FUN_18033cc90;
undefined UNK_180a1b2d8;
undefined UNK_180a1b248;
undefined UNK_180a1b238;
undefined UNK_180a1c060;
undefined UNK_180a1c078;
undefined UNK_180a1c090;
undefined UNK_180a1c0b0;
undefined UNK_180a1c0c8;
undefined UNK_180a1c0e0;
undefined UNK_180a1c0f8;
undefined UNK_180a1bfb0;
undefined UNK_180a1bfc8;
undefined UNK_180a1bfe0;
undefined UNK_180a1bff8;
undefined UNK_180a1c010;
undefined UNK_180a1c040;
undefined UNK_180a1bab8;
undefined UNK_180a1bad8;
undefined UNK_180a1bd10;
undefined UNK_1809935e0;
undefined UNK_180993650;
undefined UNK_180993690;
undefined UNK_180993980;
undefined UNK_1809939e0;
undefined UNK_180a1cc50;
undefined UNK_180a1cdc0;
undefined DAT_180345f30;
undefined UNK_180a1cf60;
undefined DAT_180a1cf38;
undefined DAT_180a1cf50;
undefined UNK_180a1cf28;
undefined UNK_180a1d010;
undefined UNK_180a1d060;
undefined UNK_180a13bd8;
undefined DAT_180a1d218;
undefined DAT_180a1d220;
undefined DAT_180a1d558;
undefined DAT_180a1d570;
undefined DAT_180a1d578;
undefined UNK_180a1d900;
undefined UNK_180a1d958;
undefined DAT_180a1d880;
undefined DAT_180a1d890;
undefined DAT_180a1d8a0;
undefined DAT_180a1d988;
undefined UNK_180a1d8b0;
undefined DAT_180a1db08;
undefined DAT_180a1db20;
undefined DAT_180a1db38;
undefined DAT_180a1db48;
undefined DAT_180a1db68;
undefined DAT_180a1db80;
undefined DAT_180a1db98;
undefined UNK_18034dc90;
undefined UNK_18034dca0;
undefined UNK_180a1db58;
undefined UNK_180a1dba8;
undefined DAT_180a1dd30;
undefined DAT_180a1deb0;
undefined DAT_180a1dec0;
undefined DAT_180a1e1c8;
undefined DAT_180a1e1d8;
undefined DAT_180a1e1f0;
undefined DAT_180a1e208;
undefined DAT_180c8ecb8;
undefined DAT_180a1e3a0;
undefined DAT_180a1e388;
undefined DAT_180a1e3b0;
undefined DAT_180a1e3c0;
undefined DAT_180a1e3e8;
undefined DAT_180a1e3f8;
undefined DAT_180a1e708;
undefined DAT_180a1e718;
undefined DAT_180a1e730;
undefined DAT_180a1e748;
undefined DAT_180a1e760;
undefined DAT_180a1e770;
undefined DAT_180a1e780;
undefined DAT_180a1e798;
undefined DAT_180bf6618;
undefined DAT_180a1e938;
undefined DAT_180c8ecc0;
undefined UNK_180a2ac38;
undefined UNK_180a1ede0;
undefined DAT_180a1eb48;
undefined DAT_180a1eb60;
undefined DAT_180a1eb88;
undefined DAT_180a1eba8;
undefined DAT_180a1ec18;
undefined DAT_180a1ec30;
undefined DAT_180a1ec58;
undefined DAT_180a1ec70;
undefined DAT_180a1ec88;
undefined DAT_180a1eca0;
undefined DAT_180a1ecb8;
undefined DAT_180a1ecf8;
undefined DAT_180a1ed18;
undefined DAT_180a1ed30;
undefined UNK_180a1ed58;
undefined UNK_180a1ed70;
undefined UNK_180a1ed88;
undefined DAT_180a1eb78;
undefined DAT_180a1eb98;
undefined DAT_180a1ebd0;
undefined DAT_180a1ebe8;
undefined DAT_180a1ec00;
undefined DAT_180a1ecd0;
undefined UNK_180a1ed48;
undefined UNK_180a1edc0;
undefined UNK_180a1eda0;
undefined UNK_180a1edb0;
undefined DAT_180a1ef48;
undefined UNK_180276a30;
undefined UNK_180a1f0f8;
undefined DAT_180a1f0c8;
undefined DAT_180a1f0d0;
undefined DAT_180a1f0e0;
undefined DAT_180a1f0e4;
undefined UNK_180a1f013;
undefined UNK_180a1f268;
undefined DAT_1809fd7b0;
undefined DAT_180a064d8;
undefined UNK_180a1f3e8;
undefined DAT_180a1f3d0;
undefined UNK_180a1f578;
undefined DAT_180a1f550;
undefined DAT_180a1f560;
undefined UNK_180a1f788;


// 函数: undefined FUN_180360210;
undefined FUN_180360210;
undefined UNK_180360300;
undefined UNK_180360340;
undefined UNK_180a1f6e0;
undefined UNK_180a1f6f0;
undefined UNK_180a1f758;
undefined UNK_180a1f770;
undefined DAT_180a1f740;
undefined DAT_180a1f750;
undefined UNK_180a1f978;
undefined DAT_180a1f8f0;
undefined DAT_180a1f8f8;
undefined DAT_180a1f910;
undefined DAT_180a1f920;
undefined DAT_180a1f930;
undefined DAT_180a1f940;
undefined DAT_180a1f950;
undefined DAT_180a1f960;
undefined UNK_180a1fae8;
undefined DAT_180a064c8;
undefined UNK_180a1fc70;
undefined DAT_180a1fc50;
undefined DAT_180a1fc58;
undefined UNK_180a1fe08;
undefined DAT_180a1fdd8;
undefined DAT_180a1fdf0;
undefined DAT_180a1fdf8;
undefined DAT_180a1ff70;
undefined DAT_180a1ffa0;
undefined DAT_180a1ffd8;
undefined DAT_180a1ffe8;
undefined DAT_180a1fff8;
undefined UNK_180363750;
undefined UNK_180a20298;
undefined UNK_180a201d0;
undefined UNK_180a201f8;
undefined DAT_180a20198;
undefined DAT_180a20238;
undefined UNK_180a20248;
undefined UNK_180a20260;
undefined UNK_180a20278;
undefined DAT_180a201a8;
undefined DAT_180a201c0;
undefined UNK_180a20448;
undefined UNK_180a20758;
undefined UNK_180a09e08;
undefined UNK_180a20970;
undefined UNK_180a205b8;
undefined UNK_180a205d0;
undefined UNK_180a205f8;
undefined UNK_180a20610;
undefined UNK_180a20628;
undefined UNK_180a20640;
undefined UNK_180a20660;
undefined UNK_180a20670;
undefined UNK_180a20688;
undefined UNK_180a20698;
undefined UNK_180a206b0;
undefined UNK_180a206c0;
undefined UNK_180a206d8;
undefined UNK_180a206f0;
undefined UNK_180a20738;
undefined UNK_180a20740;
undefined UNK_180a0c280;
undefined UNK_180a205b0;
undefined UNK_180a205e8;
undefined UNK_180a205f0;
undefined UNK_180a20720;
undefined UNK_180a20710;
undefined UNK_180a20748;
undefined UNK_180a20ae0;
undefined UNK_180a20cc0;
undefined DAT_180a20c88;
undefined DAT_180a20c48;
undefined DAT_180a20c58;
undefined DAT_180a20c68;
undefined DAT_180a20c78;
undefined DAT_180a20c98;
undefined DAT_180a20ca8;
undefined DAT_180c91f50;
undefined DAT_180c91f48;
undefined UNK_180a20f68;
char DAT_180c8aa6b;
undefined DAT_180a20e58;
undefined UNK_180a20e68;
undefined DAT_180a20e30;
undefined DAT_180a20e40;
undefined DAT_180a20e70;
undefined DAT_180a20e80;
undefined UNK_180a20e13;
undefined DAT_180a20e48;
undefined UNK_180a20e90;
undefined DAT_180a20f08;
undefined DAT_180a20f20;
undefined DAT_180a20f30;
undefined UNK_180a20f40;
undefined UNK_180a210d8;
undefined UNK_180a21248;
undefined UNK_180a213f8;
undefined UNK_180a213b0;
undefined UNK_180a213d8;
undefined UNK_180a213c0;
undefined UNK_180a21560;
undefined UNK_180a21628;
undefined DAT_180a402a0;


// 函数: undefined FUN_180380510;
undefined FUN_180380510;


// 函数: undefined FUN_1803805e0;
undefined FUN_1803805e0;
undefined UNK_180a2ada8;


// 函数: undefined FUN_180380430;
undefined FUN_180380430;


// 函数: undefined FUN_1803802e0;
undefined FUN_1803802e0;
undefined UNK_180a21780;
undefined UNK_180a217a0;
undefined UNK_180a22a30;


// 函数: undefined FUN_1803800d0;
undefined FUN_1803800d0;


// 函数: undefined FUN_180380200;
undefined FUN_180380200;
undefined UNK_180380090;
undefined UNK_180a217c0;
undefined UNK_180a17810;
undefined UNK_180a17814;
undefined UNK_180a218e0;


// 函数: undefined FUN_18037ac70;
undefined FUN_18037ac70;


// 函数: undefined FUN_18037ad00;
undefined FUN_18037ad00;
undefined UNK_180380040;
undefined UNK_180380050;
undefined DAT_180a21838;
undefined DAT_180a21858;
undefined UNK_18037d8a0;
undefined UNK_18037fff0;
undefined UNK_180380000;
undefined UNK_180a21880;
undefined UNK_180a21950;
undefined UNK_180a21968;
undefined UNK_180a21978;
undefined UNK_180a21988;
undefined UNK_180a21990;
undefined UNK_180a219a0;
undefined UNK_180a219b8;
undefined UNK_180a219c8;
undefined UNK_18037ffa0;
undefined UNK_18037ffb0;
undefined UNK_180a219e0;
undefined UNK_180a219f4;
undefined UNK_180a21a30;
undefined UNK_180a21a40;
undefined UNK_180a21be8;
undefined UNK_180a21a10;
undefined UNK_180a16540;
undefined UNK_180a21a00;
undefined UNK_180a21a48;
undefined UNK_180a21a58;
undefined UNK_180a21a70;
undefined UNK_180a21a80;
undefined UNK_180a21a90;
undefined UNK_180a21aa8;
undefined UNK_180a21ac8;
undefined UNK_180a21ae0;
undefined UNK_180a21b00;
undefined UNK_180a21b18;
undefined UNK_180a21b30;
undefined UNK_180a21b50;
undefined UNK_180a21b68;
undefined UNK_180a21b78;
undefined UNK_180a21b98;
undefined UNK_180a21bb0;
undefined UNK_180a21bc0;
undefined UNK_180a21aa0;
undefined UNK_180a21b0c;
undefined UNK_180a21b60;
undefined UNK_180a21bd0;
undefined UNK_180a21c30;


// 函数: undefined FUN_180388290;
undefined FUN_180388290;


// 函数: undefined FUN_180387ed0;
undefined FUN_180387ed0;


// 函数: undefined FUN_180388040;
undefined FUN_180388040;


// 函数: undefined FUN_180388120;
undefined FUN_180388120;
undefined UNK_180a21bf8;
undefined UNK_180a21c18;
undefined UNK_180a21c40;
undefined UNK_180a21c60;
undefined UNK_180389710;
undefined UNK_180a1022c;


// 函数: undefined FUN_1803896b0;
undefined FUN_1803896b0;
undefined UNK_180a2aea0;
undefined UNK_180a2af60;
undefined UNK_180396c80;


// 函数: undefined FUN_18038a340;
undefined FUN_18038a340;


// 函数: undefined FUN_18038a630;
undefined FUN_18038a630;
undefined UNK_180a21d50;
undefined UNK_180a21d68;
undefined UNK_180a21d98;
undefined UNK_180a21dc0;
undefined UNK_180a21e50;
undefined UNK_180a21f48;
undefined UNK_180a21e98;
undefined DAT_180d48ee8;
undefined DAT_180d48ee0;
undefined DAT_180d48ee4;
undefined UNK_180a1cbf0;
undefined UNK_180a21fa0;
undefined UNK_180a21fc0;
undefined UNK_180a21fd0;
undefined UNK_180a21fe8;
undefined UNK_180a22000;
undefined UNK_180a22008;
undefined UNK_180a22018;
undefined UNK_180a22028;
undefined UNK_180a22040;
undefined UNK_180a22050;
undefined UNK_180a22070;
undefined UNK_180a22088;
undefined UNK_180a22098;
undefined UNK_180a220a8;
undefined UNK_180a220c8;
undefined UNK_180a220e0;
undefined UNK_180a22100;
undefined UNK_180a22120;
undefined UNK_180a22138;
undefined UNK_180a22148;
undefined UNK_180a22160;
undefined UNK_180a221c0;
undefined UNK_180a22180;
undefined UNK_180a22198;
undefined UNK_180a221b0;
undefined UNK_180a221e0;
undefined UNK_180a221f8;
undefined UNK_180a22210;
undefined UNK_180a22228;
undefined UNK_180a22240;
undefined UNK_180a22268;
undefined UNK_180a22290;
undefined UNK_180a222b8;
undefined UNK_180a22348;
undefined UNK_180a22368;
undefined UNK_180a222e0;
undefined UNK_180a2233c;
undefined UNK_180a22380;
undefined UNK_180a22394;
undefined UNK_180a22398;
undefined UNK_180a2239c;
undefined UNK_180a223a8;
undefined UNK_180a223c8;
undefined UNK_180a223e0;
undefined UNK_180a22400;
undefined UNK_180a22418;
undefined UNK_180a22428;
undefined UNK_180a22438;
undefined UNK_180a22450;
undefined UNK_180a2246c;
undefined UNK_180a22478;
undefined UNK_180a22490;
undefined UNK_180a224a0;
undefined UNK_180a1cbf8;
undefined UNK_180a21874;
undefined UNK_180a217e8;
undefined UNK_180a224b8;
undefined UNK_180a22798;
undefined UNK_180a227b8;
undefined UNK_180a227f8;
undefined UNK_180a22820;
undefined UNK_180a22838;
undefined UNK_180a227d8;
undefined UNK_180a22870;
undefined UNK_180a228a0;
undefined UNK_180a228c8;
undefined UNK_180a22858;
undefined UNK_180a22948;
undefined UNK_180a22ab0;
undefined UNK_180a22a98;
undefined UNK_180a22ac0;
undefined UNK_180a22ad8;
undefined UNK_180a22af0;
undefined UNK_180a22b10;
undefined UNK_180a22b28;
undefined UNK_180a3cb88;
undefined UNK_180a3cbe8;


// 函数: undefined FUN_1804069d0;
undefined FUN_1804069d0;
undefined DAT_180c91fe0;
undefined DAT_180c91fe8;


// 函数: undefined FUN_180407960;
undefined FUN_180407960;
undefined UNK_180a12c50;
undefined UNK_180a271b0;
undefined UNK_180a27220;
undefined UNK_180a272b0;
undefined UNK_180a272c8;
undefined UNK_180a272d8;
undefined UNK_180a27318;
undefined UNK_180a0af90;
undefined UNK_180a27230;
undefined UNK_180a27238;
undefined UNK_180a27258;
undefined UNK_180a27278;
undefined UNK_180a27338;
undefined UNK_180a27350;
undefined UNK_180a27360;
undefined UNK_180a27370;
undefined UNK_180a27390;
undefined UNK_180a273a0;
undefined UNK_180a273b0;
undefined UNK_180a27400;
undefined UNK_180a27458;
undefined UNK_180a27480;
undefined UNK_180a274c8;
undefined UNK_180a274e0;
undefined UNK_180a27560;
undefined UNK_180a27570;
undefined UNK_180a275a0;
undefined UNK_180a275d0;
undefined UNK_180a27680;
undefined UNK_180a27618;
undefined UNK_180a27620;
undefined UNK_180a27628;
undefined UNK_180a27630;
undefined UNK_180a2763c;
undefined UNK_180a27644;
undefined UNK_180a2764c;
undefined UNK_180a27654;
undefined UNK_180a2765c;
undefined UNK_180a27664;
undefined UNK_180a27670;
undefined1 DAT_180bfaee8;
undefined DAT_180bfaeb0;
undefined UNK_180a12d78;
undefined UNK_180a12d88;
undefined1 DAT_180bfaeb8;
undefined UNK_180a27988;
undefined UNK_180a279a8;
undefined UNK_180a276f8;
undefined UNK_180a27710;
undefined UNK_180a27788;
undefined DAT_1809939c8;
undefined UNK_180994940;
undefined UNK_180a27750;
undefined UNK_180a27a78;
undefined UNK_180a3d0d0;
undefined UNK_180a27ab0;
undefined UNK_180a27b40;
undefined UNK_180415710;


// 函数: undefined FUN_180415730;
undefined FUN_180415730;
undefined UNK_180a27b60;
undefined UNK_180a063c4;
undefined UNK_180a27bf8;
undefined UNK_18041b520;
undefined UNK_180a27b80;
undefined UNK_180a27b98;
undefined UNK_180a27bb0;


// 函数: undefined FUN_18041b4d0;
undefined FUN_18041b4d0;
undefined UNK_180a27bc8;
undefined UNK_180a27c28;
undefined UNK_1809952a0;
undefined UNK_180995320;
undefined UNK_180994d24;
undefined UNK_180995024;
undefined UNK_180995028;
undefined UNK_180a27cd8;
undefined UNK_180995c00;
undefined UNK_180995c50;
undefined UNK_180995c90;
undefined DAT_180a406e0;
undefined DAT_180a3f940;
undefined DAT_180a406c0;
undefined DAT_180a3f950;
undefined DAT_180a406d0;
undefined DAT_180a3f970;
undefined DAT_180a40700;
undefined DAT_180a3f960;
undefined UNK_180a29654;
undefined UNK_180a29684;
undefined UNK_180a29650;



